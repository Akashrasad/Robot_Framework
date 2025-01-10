import logging
from logging_config import logging_config

from robot.libraries.BuiltIn import BuiltIn,RobotNotRunningError
class CatLogging:
    def __init__(self, result_path):
        self.result_path = result_path
        logging_config(result_path)

    @staticmethod
    def getLogger():
        try:
            BuiltIn().get_variable_value('${SUITE SOURCE}')
            return CatLogger(logging.getLogger('cat'))
        except RobotNotRunningError:
            return CatLogger(logging.getLogger('inv'))
        
class CatLogger(logging.Logger):
    def __init__(self, logger):
        self.logger = logger
        
    def cat_context_decorator(func):
        def wrapper(self,*args, **kwargs):
            try:
                extra = {"testcase": BuiltIn().get_variable_value("${TEST NAME}"),
                        "testsuite": BuiltIn().get_variable_value("${SUITE NAME}")}
                return func(self, *args, extra=extra, **kwargs) 
            except RobotNotRunningError:        
                return func(self,*args, extra={
                    "testcase": None,
                    "testsuite": None
                }, **kwargs)
        return wrapper 
    
    def cat_critical_decorator(func):
        def wrapper(self,*args, **kwargs):
            try:
                BuiltIn().get_variable_value("${TEST NAME}")
                func(self, *args, **kwargs)
                BuiltIn().fail()
            except RobotNotRunningError:        
                pass
        return wrapper 

    @cat_context_decorator
    def debug(self, msg, *args, **kwargs):
        self.logger.debug(msg, *args, **kwargs)
        
    @cat_context_decorator
    def info(self, msg, *args, **kwargs):
        self.logger.info( msg, *args, **kwargs)
    
    @cat_context_decorator
    def warn(self, msg, *args, **kwargs):
        self.logger.warn( msg, *args, **kwargs)
      
    @cat_context_decorator  
    def error(self, msg, *args, **kwargs):
        self.logger.error( msg, *args, **kwargs)
       
    @cat_critical_decorator 
    @cat_context_decorator
    def critical(self, msg, *args, **kwargs):
        self.logger.critical( msg, *args, **kwargs)
        
    
if __name__ == "__main__":
    CatLogging("./")
    test_logger = CatLogging.getLogger()
    test_logger.debug("debug")