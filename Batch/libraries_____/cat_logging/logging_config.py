import logging.config
from pathlib  import Path
import yaml


class logging_config:
    def __init__(self, result_path):
        with open(Path(__file__).with_name("logging.yml"), 'r') as stream:
            log_config = yaml.load(stream, Loader=yaml.FullLoader)
        log_config["handlers"]["file"]["filename"] = log_config["handlers"]["file"]["filename"].format(
                path=result_path)
        logging.config.dictConfig(log_config)

