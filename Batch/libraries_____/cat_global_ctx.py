import datetime
import json
import os
import sys
import traceback
from pathlib import Path

from robot.libraries.BuiltIn import BuiltIn, RobotNotRunningError

sys.path.append(str(Path(os.path.abspath(os.path.dirname(__file__))).parents[0]))
from libraries.cat_logging.cat_logging import CatLogging
import cat_config
import android_helper
import keywords.android_keywords as android
import keywords.vehicle_sim_keywords as vsk
import keywords.qnx_keywords as qnxk
from libraries.json_interactions import JSONInteractions

CAT_VERSION = "24.01"


class cat_global_ctx:
    # robot will guarantee only one instance of this class is created
    ROBOT_LIBRARY_SCOPE = "GLOBAL"
    cat_dir = str(Path(os.path.abspath(os.path.dirname(__file__))).parents[0])
    global_result_dir_root = cat_dir + "\\results\\"
    qnx_coordinates_json = cat_dir + "\\libraries\\qnx\\qnx_coordinates.json"
    timestamp = datetime.datetime.now().strftime("%Y%m%d-%H%M%S")

    def __init__(self, cat_config_automation=None):
        try:
            BuiltIn().set_global_variable("${CAT_DIR}", self.cat_dir.replace("\\", "\\\\"))

            self.cat_config_automation = cat_config_automation
            veh_program = BuiltIn().get_variable_value("${vehicle_program}")
            variant = BuiltIn().get_variable_value("${variant}")
            display_size = BuiltIn().get_variable_value("${display_size}")
            self.result_dir_root = None

            if not self.cat_config_automation:
                self.cat_config_automation = BuiltIn().get_variable_value("${cat_config_automation}")

            self.set_result_dir(veh_program, variant, self.cat_config_automation)

            # initialize cat logging at the beginning
            CatLogging(self.result_dir_root)
            self.logger = CatLogging.getLogger()
            self.logger.info("CAT Version: {}".format(CAT_VERSION))

            if not self.cat_config_automation:
                self.apply_catconfig(display_size, veh_program, variant)

            self.handle_vscode()
            android.update_total_cluster()  #????
            
            self.suite_connection_cals_status = {}

        except RobotNotRunningError:
            pass

    def set_result_dir(self, veh_program, variant, cat_config_automation):
        if not cat_config_automation:
            self.result_dir_root = (self.global_result_dir_root + "{}_{}_{}_results"
                                    .format(veh_program, variant, self.timestamp))
        else:
            self.result_dir_root = (self.global_result_dir_root + "cat_config_automation_{}_results"
                                    .format(self.timestamp))
        if not os.path.exists(self.result_dir_root):
            os.makedirs(self.result_dir_root)

        # for every \ in result_dir_root, add another one right after it
        self.result_dir_root = self.result_dir_root.replace("\\", "\\\\")
        BuiltIn().set_global_variable("${RESULTS_DIR}", self.result_dir_root)

    # cat config context switch in the test runner driver
    # override_cat_config_to_suite_variables is true when the cat config contexts switch in the same suite
    def apply_catconfig(self, display_size, veh_program, variant, override_cat_config_to_suite_variables=False):

        try:
            # switch cat config context in suite scope
            if override_cat_config_to_suite_variables:
                BuiltIn().set_suite_variable("${display_size}", display_size)
                BuiltIn().set_suite_variable("${vehicle_program}", veh_program)
                BuiltIn().set_suite_variable("${variant}", variant)

            # open libraries/qnx/qnx_coordinates.json and get the supported cluster views for
            # the vehicle program being tested and set it as a global variable
            d = JSONInteractions().get_jsonFile_Directory(self.qnx_coordinates_json)
            veh_json_key = "{}_{}".format(display_size, veh_program)
            BuiltIn().set_global_variable("${SUPPORTED_CLUSTER_VIEWS}", d[veh_json_key]["supported_cluster_views"])
        except Exception:
            self.logger.debug(traceback.print_exc())
        # android_helper.retrieve_cals_from_adb(self.result_dir_root)

    # keywords, called by suite set up
    # set reference dir, suite dir etc based on the cat config context
    def set_cat_suite_variables(self, cur_dir, suite_name):

        suite_results_dir = BuiltIn().get_variables()['${RESULTS_DIR}'] + "\\" + suite_name + "\\"
        suite_results_dir = suite_results_dir.replace("\\", "\\\\")
        BuiltIn().set_suite_variable("${SUITE_RESULTS_DIR}", suite_results_dir)

        LOOP_THROUGH_ALL_CLUSTER_VIEWS = BuiltIn().get_variable_value("${LOOP_THROUGH_ALL_CLUSTER_VIEWS}")
        SUPPORTED_CLUSTER_VEWS = BuiltIn().get_variable_value("${SUPPORTED_CLUSTER_VIEWS}")
        if not os.path.exists(suite_results_dir):
            if LOOP_THROUGH_ALL_CLUSTER_VIEWS and SUPPORTED_CLUSTER_VEWS is not None:
                for cluster_view in SUPPORTED_CLUSTER_VEWS:
                    os.makedirs(os.path.join(suite_results_dir, cluster_view))
            else:
                os.makedirs(suite_results_dir)

        self.set_references_dir(cur_dir,
                                BuiltIn().get_variable_value("${display_size}"),
                                BuiltIn().get_variable_value("${vehicle_program}"),
                                BuiltIn().get_variable_value("${variant}"))

    def get_test_component_from_cur_dir(self, cur_dir: str):
        test_component_types = ["animations", "infopages", "peekin", "regulatory", "sanity", "telltales", "views",
                                "smoke_tests", "fdi", "gauges"]
        test_component = cur_dir.split("\\")[-2]

        if test_component == "regulatory_consolidated" or test_component == "regulatory_defects":
            test_component = "regulatory"

        if "\\telltales\\" in cur_dir:
            test_component = "telltales"
            
        if "\\gauges\\" in cur_dir:
            test_component = "gauges"

        if test_component not in test_component_types:
            return None

        return test_component

    def set_references_dir(self, cur_dir,
                           display_size=cat_config.display_size,
                           vehicle_program=cat_config.vehicle_program,
                           variant=cat_config.variant):

        reference_dir = self.cat_dir + "\\references\\" + display_size + "\\" + vehicle_program + "\\" + variant + "\\"

        test_component = self.get_test_component_from_cur_dir(cur_dir)

        if test_component is not None:
            reference_dir = reference_dir + test_component + "\\"

        reference_dir = reference_dir.replace("\\", "\\\\")
        BuiltIn().set_suite_variable("${REFERENCES_DIR}", reference_dir)

    def handle_vscode(self):
        root_dir = str(Path(os.path.abspath(os.path.dirname(__file__))).parents[2])
        root_dir = root_dir.replace("\\", "\\\\")

        # vscode extension needs a context of SUITE_RESULT_DIR
        if not os.path.exists(root_dir + "\\.vscode"):
            os.makedirs(root_dir + "\\.vscode")
            with open(root_dir + "\\.vscode\\settings.json", "w"):
                pass
        with open(root_dir + "\\.vscode\\settings.json", "r+") as jsonFile:
            data = {}
            try:
                data = json.load(jsonFile)
            except json.JSONDecodeError:
                pass
            if not "robotfilewatcher.commands" in data:
                with open(root_dir + "\\src\\cat\\extensions\\robotfilewatcher.settings.json", "r") as jsonFile2:
                    settings = json.load(jsonFile2)
                    data["robotfilewatcher.commands"] = settings["robotfilewatcher.commands"]
                    data["robotfilewatcher.isSyncRunEvents"] = settings["robotfilewatcher.isSyncRunEvents"]
            data["robotfilewatcher.robotOutputFolder"] = BuiltIn().get_variables()['${RESULTS_DIR}'] + "\\"
            jsonFile.seek(0)
            json.dump(data, jsonFile, indent=4)
            jsonFile.truncate()
            
    def exit_suite(self, suite_name):
        self.suite_connection_cals_status[suite_name] = True

    def check_suite_exit(self, suite_name):
        if (suite_name in self.suite_connection_cals_status) and (self.suite_connection_cals_status[suite_name]):
            return True
        return False

