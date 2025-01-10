
import shlex, subprocess, os, sys, json, traceback
import time
from pathlib import Path
from robot.libraries.BuiltIn import BuiltIn

from libraries.cat_logging.cat_logging import CatLogging

FILE_PATH = os.path.abspath(os.path.dirname(__file__))
REFERENCE_COORDINATES_JSON = os.path.join(str(Path(os.path.abspath(os.path.dirname(__file__))).parents[0]), 'references', 'reference_coordinates.json')
JSON_DIRECTORY = str(Path(FILE_PATH)) + "\\qnx\\qnx_coordinates.json"

logger = CatLogging.getLogger()
class JSONInteractions:
    def get_tree(self):
        """
        Creates a JSON object based on the folder/png file structure of the references directory.
        Returns:
            The JSON object created
        """
        tree = {}
        path = "references"
        for display_size in os.listdir(path):
            # continue if display_size is not a directory
            if not os.path.isdir(os.path.join(path, display_size)):
                continue
            tree[display_size] = {}
            for vehicle_program in os.listdir(os.path.join(path, display_size)):
                tree[display_size][vehicle_program] = {}
                for variant in os.listdir(os.path.join(path, display_size, vehicle_program)):
                    # continue if variant is not a directory
                    if not os.path.isdir(os.path.join(path, display_size, vehicle_program, variant)):
                        tree[display_size][vehicle_program][variant] = None
                        continue
                    tree[display_size][vehicle_program][variant] = {}
                    for cluster_view in os.listdir(os.path.join(path, display_size, vehicle_program, variant)):
                        if cluster_view.endswith('.txt'):
                            continue
                        tree[display_size][vehicle_program][variant][cluster_view] = {}
                        for reference_image in os.listdir(os.path.join(path, display_size, vehicle_program, variant, cluster_view)):
                            tree[display_size][vehicle_program][variant][cluster_view][reference_image] = {}
                            tree[display_size][vehicle_program][variant][cluster_view][reference_image]['x'] = None
                            tree[display_size][vehicle_program][variant][cluster_view][reference_image]['y'] = None
                            tree[display_size][vehicle_program][variant][cluster_view][reference_image]['width'] = None
                            tree[display_size][vehicle_program][variant][cluster_view][reference_image]['height'] = None
        return tree
                

    def generate_coordinates_json(self):
        """
        Generates a new reference_coordinates.json file. Do not use unless you know what you are doing.. It will overwrite
        the existing reference_coordinates.json!
        """
        with open(REFERENCE_COORDINATES_JSON, 'w') as f:
            # create a json object based on the folder and file structure of the current directory
            json.dump(self.get_tree(), f, indent=4)

    def add_coordinates_to_json(self,display_size, vehicle_program, variant, cluster_view, reference_image, x, y, width, height):
        """
        Adds coordinate values to the reference_coordinates.json
        Args:
            display_size: The display size of the vehicle program being tested
            vehicle_program: The vehicle program that is being tested
            variant: The variant of the vehicle being tested
            cluster_view: The cluster view of the vehicle being tested that the reference image is from
            reference_image: The reference image of the coordinates being saved
            x: The x coordinate of where to find the reference image in a full cluster image
            y: The y coordinate of where to find the reference image in a full cluster image
            width: The width of the reference image
            height: The height of the reference image
        """
        with open(REFERENCE_COORDINATES_JSON, 'r') as f:
            tree = json.load(f)

        tree = self.verify_reference_coordinates_json_object(display_size, vehicle_program, variant, cluster_view, reference_image, tree)

        tree[display_size][vehicle_program][variant][cluster_view][reference_image]['x'] = x
        tree[display_size][vehicle_program][variant][cluster_view][reference_image]['y'] = y
        tree[display_size][vehicle_program][variant][cluster_view][reference_image]['width'] = width
        tree[display_size][vehicle_program][variant][cluster_view][reference_image]['height'] = height
        with open(REFERENCE_COORDINATES_JSON, 'w') as f:
            json.dump(tree, f, indent=4)

    def verify_reference_coordinates_json_object(self,display_size, vehicle_program, variant, cluster_view, reference_image, tree):
        """
        Verifies that reference_coordinates json object is populated with the display_size, vehicle_program, variant, cluster_view, and reference_image
        as provided by the user. If any of the json tree does not already exist, it will automatically be created.
        """
        if display_size not in tree:
            logger.warn("Display size {} is not defined in {}, adding it..".format(display_size, REFERENCE_COORDINATES_JSON))
            tree[display_size] = {}

        if vehicle_program not in tree[display_size]:
            logger.warn("Vehicle program {} is not defined in {}, adding it..".format(vehicle_program, REFERENCE_COORDINATES_JSON))
            tree[display_size][vehicle_program] = {}

        if variant not in tree[display_size][vehicle_program]:
            logger.warn("Variant {} is not defined in {}, adding it..".format(variant, REFERENCE_COORDINATES_JSON))
            tree[display_size][vehicle_program][variant] = {}

        if cluster_view not in tree[display_size][vehicle_program][variant]:
            logger.warn("Cluster view {} is not defined in {}, adding it..".format(cluster_view, REFERENCE_COORDINATES_JSON))
            tree[display_size][vehicle_program][variant][cluster_view] = {}

        if reference_image not in tree[display_size][vehicle_program][variant][cluster_view]:
            logger.warn("Reference image {} is not defined in {}, adding it..".format(reference_image, REFERENCE_COORDINATES_JSON))
            tree[display_size][vehicle_program][variant][cluster_view][reference_image] = {}
            tree[display_size][vehicle_program][variant][cluster_view][reference_image]['x'] = None
            tree[display_size][vehicle_program][variant][cluster_view][reference_image]['y'] = None
            tree[display_size][vehicle_program][variant][cluster_view][reference_image]['width'] = None
            tree[display_size][vehicle_program][variant][cluster_view][reference_image]['height'] = None

        return tree


    def get_coordinates_json(self):
        """
        Gets the reference_coordinates.json json object
        Returns:
            JSON object from references/reference_coordinates.json
        """
        with open(REFERENCE_COORDINATES_JSON, 'r') as f:
            tree = json.load(f)
        return tree

    def vehicle_in_database(self, vehicle, host):
        self.host = host
        self.vehicle = vehicle
        with open(JSON_DIRECTORY) as f:
            d = json.load(f)
            if self.vehicle in d:
                logger.info('Added Vehicle Successfully')
            else:
                logger.error("Vehicle Not available in: qnx_coordinates.json. Confirm Right Vehicle Name was used.")

    def vehicle_screen_size(self):
        with open(JSON_DIRECTORY) as file:
            veh_json = json.load(file)
            if self.vehicle in veh_json:
                if veh_json[self.vehicle]['screen_size']:
                    return [veh_json[self.vehicle]['screen_size']['width'], veh_json[self.vehicle]['screen_size']['height']]
        return None


    def get_jsonFile_Directory(self,file_directory):
        with open(file_directory) as file:
            veh_json = json.load(file)
        return veh_json

