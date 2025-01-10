import os
from pathlib import Path


class CatConfig(object):
    current_config = None

    def __init__(self, display_size, vehicle_program, variant):
        self.display_size = display_size
        self.vehicle_program = vehicle_program
        self.variant = variant

    def __str__(self):
        return f"{self.display_size}|{self.vehicle_program}|{self.variant}"

    def __eq__(self, other):
        if isinstance(other, CatConfig):
            return (self.display_size == other.display_size
                    and self.vehicle_program == other.vehicle_program
                    and self.variant == other.variant)
        return False


class CatRunnerHelper:
    def __init__(self):
        self.references = {}

    def create_filtered_catconfig_running_status_dict(self, cat_configs, variant_loop, vehicle_program_loop,
                                                      display_size_loop, global_config):
        catconfig_running_status_dict = {}
        filtered_catconfig_running_status_dict = {}
        for cat_config in cat_configs:
            catconfig_running_status_dict[
                "_".join([global_config.display_size if not display_size_loop else cat_config.display_size,
                          global_config.vehicle_program if not vehicle_program_loop else cat_config.vehicle_program,
                          global_config.variant if not variant_loop else cat_config.variant])] = False
        for key in catconfig_running_status_dict:
            found_config = self.get_catconfig(cat_configs, key)
            if found_config is not None:
                filtered_catconfig_running_status_dict[key] = catconfig_running_status_dict[key]
            # else:
            #     cat_configs.remove(found_config) # only build
        return filtered_catconfig_running_status_dict

    def composite_key(self, cat_config: CatConfig):
        return '_'.join([cat_config.display_size, cat_config.vehicle_program, cat_config.variant])

    def decomposite_key(self, key):
        config_values = key.split("_")
        return CatConfig(config_values[0], config_values[1], config_values[2])

    def get_catconfig(self, cat_configs, key):
        expected_config = self.decomposite_key(key)
        for cat_config in cat_configs:
            if cat_config == expected_config:
                return cat_config
        return None

    def pull_reference_folder_and_create_config(self, reference_dir, max_level, cat_configs):
        dirs = []
        for folder in os.scandir(reference_dir):
            if folder.is_dir():
                if max_level == 1:
                    cat_config = CatConfig(os.path.basename(Path(folder).parents[1]),
                                           os.path.basename(Path(folder).parents[0]),
                                           os.path.basename(Path(folder)))
                    cat_configs.append(cat_config)
                else:
                    dirs.append(folder)
        for subdir in dirs:
            self.pull_reference_folder_and_create_config(subdir, max_level - 1, cat_configs)
