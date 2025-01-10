from typing import List
from robot.libraries.BuiltIn import BuiltIn
from robot.libraries.BuiltIn import RobotNotRunningError
from robot.running import TestSuite, TestCase
from robot.model.tags import Tags

from cat_runner_helper import CatRunnerHelper, CatConfig
from cat_global_ctx import cat_global_ctx
from utilities import check_if_vehicle_program_supports_test
from libraries.cat_logging.cat_logging import CatLogging

logger = CatLogging.getLogger()

class cat_runner_driver:
    ROBOT_LISTENER_API_VERSION = 3
    ROBOT_LIBRARY_SCOPE = "SUITE"
    ctx_helper:cat_global_ctx = None
    helper = CatRunnerHelper()
    global_config = None
    cat_configs = []

    def __init__(self, white_list_check=True, variant_loop=False, vehicle_program_loop=False, display_size_loop=False):

        self.ROBOT_LIBRARY_LISTENER = self
        self.current_config = None
        self.automation_test_run = None
        self.white_list_check = white_list_check
        try:
            cat_runner_driver.ctx_helper = BuiltIn().get_library_instance('cat_global_ctx')
            self.automation_test_run = self.ctx_helper.cat_config_automation
            
            if cat_runner_driver.global_config is None:
                cat_runner_driver.global_config = CatConfig(BuiltIn().get_variable_value('${display_size}'),
                                                          BuiltIn().get_variable_value('${vehicle_program}'),
                                                          BuiltIn().get_variable_value('${variant}'))

            if not self.automation_test_run:
                return
            if (variant_loop is False
                    and vehicle_program_loop is False
                    and display_size_loop is False):
                self.automation_test_run = False
                return       
        

            # This library must be imported after the cat_global_ctx library importing
            if len(self.cat_configs) == 0:
                reference_dir = BuiltIn().get_variable_value('${CAT_DIR}') + "\\references"
                self.helper.pull_reference_folder_and_create_config(reference_dir, 3, self.cat_configs)

            self.cat_configs_execution_status = (
                self.helper.create_filtered_catconfig_running_status_dict(self.cat_configs,
                                                                          variant_loop,
                                                                          vehicle_program_loop,
                                                                          display_size_loop,
                                                                          self.global_config))
        except RobotNotRunningError:
            pass

    def start_suite(self, suite: TestSuite, *_):
        original_test_cases = [] # type: List[TestCase]
        for original_case in suite.tests:
            original_test_cases.append(original_case)
        
        if not self.automation_test_run or self.ctx_helper.check_suite_exit(suite.name):
            if self.white_list_check:
                self.check_white_list_and_filter_tests(suite, original_test_cases, self.global_config)
            return

        for key in self.cat_configs_execution_status:
            for test in original_test_cases:
                cat_config = self.helper.decomposite_key(key)
                if cat_config != self.global_config:
                    if not self.check_white_list_with_test(cat_config, test.tags):
                        continue
                    cloned_case = test.deepcopy(name=f"{test.name} for config "
                                                     f"|{cat_config.display_size}"
                                                     f"|{cat_config.vehicle_program}"
                                                     f"|{cat_config.variant}")
                    suite.tests.append(cloned_case)
                    
        for test in original_test_cases:
            if not self.check_white_list_with_test(self.global_config, test.tags):
                suite.tests.remove(test)
                continue
            test.name = (f"{test.name} for config  "
                         f"|{self.global_config.display_size}"
                         f"|{self.global_config.vehicle_program}"
                         f"|{self.global_config.variant}")

        self.current_config = self.global_config

    def start_test(self, data: TestCase, *_):
        suite: TestSuite = data.parent
        if not self.automation_test_run or self.ctx_helper.check_suite_exit(suite.name):
            return
        test_name: str = data.name[::-1]
        cat_strs = test_name.split('|')
        cat_config = CatConfig(cat_strs[2][::-1], cat_strs[1][::-1], cat_strs[0][::-1])
        if (self.current_config is not None
                and self.current_config == cat_config
                and self.cat_configs_execution_status[self.helper.composite_key(cat_config)]):
            return
        
        self.ctx_helper.apply_catconfig(cat_config.display_size,
                                        cat_config.vehicle_program,
                                        cat_config.variant, True)

        # suite variable will be reset when switch to another robot script (another suite)
        # even the context (cat config) switch is happening in the same suite, but we still need to
        # repeat the suite setup again against different cat config
        # the first suite setup is called by robot script itself

        if suite.setup.name:
            BuiltIn().run_keyword(suite.setup.name)

        self.current_config = cat_config
        self.cat_configs_execution_status[self.helper.composite_key(cat_config)] = True

    def check_white_list_and_filter_tests(self, suite: TestSuite, original_cases, config:CatConfig): 
        black_list_found = 0
        filtered_tests = []
        removed_tests = []
        for test in original_cases:
            if not self.check_white_list_with_test(config, test.tags):
                removed_tests.append(test)
                black_list_found += 1
                continue
            filtered_tests.append(test)
            
        if len(filtered_tests) == 0:
            self.black_list_alert(suite, original_cases, fatal_status = True)
            
        if black_list_found > 0:
            suite.tests = filtered_tests
            self.black_list_alert(suite, removed_tests, fatal_status = False)
            
    def check_white_list_with_test(self, config:CatConfig, tags:Tags):
        black_list_check_tags = tuple(tag.split(':')[1] for tag in tags
                         if tag[:17] == 'black_list_check:')
        if len(black_list_check_tags) == 0:
            return True
        return check_if_vehicle_program_supports_test(config.display_size, config.vehicle_program,black_list_check_tags[0])
        
    def black_list_alert(self, suite: TestSuite, skipped_testes, fatal_status):
        if not fatal_status:
            logger.warn(f"Test cases '{','.join(tuple(case.name for case in skipped_testes))}' are removed from suite '{suite.name}' due to black list check")
            return
        
        # if there is a black list test is executed from VS code or command before the suite filtering is working
        # fatal error/fail won't work in a listener, so we need to set a suite variable to indicate the black list test is executed
        BuiltIn().set_suite_variable("${TEST_IN_BLACK_LIST}", 'True')
        logger.critical(f"Test cases '{','.join(tuple(case.name for case in skipped_testes))}' are removed from suite '{suite.name}' due to black list check")
