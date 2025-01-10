import shlex
import subprocess
import os
import sys
import json
import traceback
import time
from subprocess import PIPE, Popen
from pathlib import Path
from robot.libraries.BuiltIn import BuiltIn
from PIL import Image

sys.path.append(str(Path(os.path.abspath(os.path.dirname(__file__))).parents[0]))
from cat_config import com_num
from libraries.image_processing import verify_image
from libraries.json_interactions import JSONInteractions
from libraries.cat_logging.cat_logging import CatLogging

logger = CatLogging.getLogger()

# TODO: move constants into its own file
REFERENCE_COORDINATES_JSON = os.path.join(str(Path(os.path.abspath(os.path.dirname(__file__))).parents[0]), 'references', 'reference_coordinates.json')

ANDROID_SCREENSHOTS = "android_screenshots"

VALID_INFO_PAGES = [
            "TIRE PRESSURE", 
            "OIL PRESSURE",
            "OIL TEMPERATURE",
            "BRAKE GAIN",
            "BATTERY VOLTAGE",
            "FUEL FILTER LIFE",
            "ENGINE HOURS",
            "AIR FILTER LIFE",
            "BRAKE LIFE INFO PAGE",
            "OIL LIFE",
            "FUEL ECONOMY",
            "COOLANT TEMP",
            "TRIP ODO AFE",
            "DIESEL EXHAUST FLUID RANGE",
            "TRANSMISSION FLUID TEMPERATURE",
            "CURRENT TRIP",
            "ENERGY USAGE",
            "ENERGY EFFICIENCY",
            "TRAILER ONE AXLE TWO TIRE",
            "TRAILER TWO AXLE FOUR TIRE",
            "TRAILER THREE AXLE SIX TIRE",
            "AIR QUALITY INDEX",
            "G FORCE",
            "TIRE PRESSURE TEMPERATURE",
            "G FORCE WITH COORDINATES",
            "TRANSMISSION FLUID LIFE",
            "TRANSMISSION FILTER LIFE",
            "VITALS SCREEN",
            "ERROR SCREEN ID"
        ]

def exec_local_command(command):  # sending commands to cmdline
    p = Popen(shlex.split(command), stdin=PIPE, stdout=PIPE, stderr=PIPE)
    (stdout, stderr) = p.communicate()
    if stdout:
        logger.debug("stdout is:%s" % stdout)
        sys.stdout.flush()
        return True
    elif stderr:
        logger.debug("stderr is:%s" % stderr)
        sys.stdout.flush()
        return False
    else:
        sys.stdout.flush()
        return False
    
def exec_local_command_with_return(command):  # sending commands to cmdline with return
    p = Popen(shlex.split(command), stdin=PIPE, stdout=PIPE, stderr=PIPE)
    (stdout, stderr) = p.communicate()
    stdout = stdout.decode('utf-8')
    stderr = stderr.decode('utf-8')
    if stdout:
        logger.debug("stdout is:%s" % stdout)
        sys.stdout.flush()
        return stdout
    elif stderr:
        logger.debug("stderr is:%s" % stderr)
        sys.stdout.flush()
        return stderr
    else:
        sys.stdout.flush()
        return None
    
def ssh_command(host, command):  # send ssh command
    send_ssh = r"ssh -o StrictHostKeyChecking=no -o UserKnownHostsFile=/dev/null " \
               r"root@{} {}".format(host, command)  # starts ssh connection
    logger.debug("Sending {} command to {}".format(command, host))
    return exec_local_command_with_return(send_ssh)

def enable_usb_debugging():
    # PRE REQ - close tera term 
    commands = """$port= new-Object System.IO.Ports.SerialPort COM{},115200,None,8,one
$port.open()
$port.WriteLine("'dtach -a /tmp/vmm'")
$port.WriteLine("'su'")
$port.WriteLine("'dmesg -n 1'")
$port.WriteLine("'echo peripheral > /sys/devices/platform/soc/a800000.ssusb/mode'")
$port.WriteLine("'settings --user 0 put global adb_enabled 1'")
$port.Close()""".format(com_num)
    
    # kill open com port before starting new session 
    output = subprocess.run('start /wait TASKKILL /F /IM ttermpro.exe', capture_output=True, text=True, shell=True)

    output = subprocess.run('powershell -command ' + commands, capture_output=True, text=True)

    return True

def disable_usb_debugging():
    # PRE REQ - close tera term 
    commands = """$port= new-Object System.IO.Ports.SerialPort COM{},115200,None,8,one
$port.open()
$port.WriteLine("'dtach -a /tmp/vmm'")
$port.WriteLine("'su'")
$port.WriteLine("'dmesg -n 1'")
$port.WriteLine("'echo host > /sys/devices/platform/soc/a800000.ssusb/mode'")
$port.WriteLine("'settings --user 0 put global adb_enabled 0'")
$port.Close()""".format(com_num)

    # kill open com port before starting new session 
    output = subprocess.run('start /wait TASKKILL /F /IM ttermpro.exe', capture_output=True, text=True, shell=True)

    output = subprocess.run('powershell -command ' + commands, capture_output=True, text=True)

    return True


def save_ref_coordinates_from_full_cluster(full_cluster_image_path, full_cluster_image_name, ref_image_path, ref_image_name):
    """
    Gets the coordinates of where a reference image can be found in a full cluster image. Then saves those coordinates in references/reference_coordinates.json
    so that they can be used to take screenshots.
    Args:
        full_cluster_image_path: the path where the full cluster image was saved
        full_cluster_image_name: the name of the full cluster image
        ref_image_path: the path where the reference image can be found
        ref_image_name: the name of the reference image
    """
    # get the coordinates from the reference image
    # return the coordinates
    try:
        display_size, vehicle_program, variant, test_component, cluster_view = get_vehicle_info_from_path(ref_image_path)
        val = verify_image.get_coordinates_by_reference_image(full_cluster_image_path, full_cluster_image_name, ref_image_path, ref_image_name, 0.9, cluster_view)
        if not val:
            logger.error("Not able to save ref coordinates from full cluster!")
            return
        # unpack val as a tuple[int, int, int, int]
        # check if val is a tuple with 4 elements

        if isinstance(val, tuple) and len(val) == 4:
            x, y, width, height = val
            JSONInteractions().add_coordinates_to_json(display_size, vehicle_program, variant, cluster_view, ref_image_name, x, y, width, height)
    except Exception:
        logger.debug(traceback.print_exc())

def get_vehicle_info_from_path(path):
    """
    Gets the vehicle info based on the path provided.
    Args:
        path: The path that has display_size, vehicle_program, variant, cluster_view (usually REFERENCES_DIR + cluster_view)

    Returns:
        tuple with display_size, vehicle_program, variant, and cluster_view
    """
    # path is going to look like this: references/32in/L233/NA/single_gauge
    # we want to get the display_size, vehicle_program, variant, cluster_view from the path
    # where display_size = 32in, vehicle_program = L233, variant = NA, cluster_view = single_gauge

    display_size = path.split('\\')[-5]
    vehicle_program = path.split('\\')[-4]
    variant = path.split('\\')[-3]
    test_component = path.split('\\')[-2]
    cluster_view = path.split('\\')[-1]

    return display_size, vehicle_program, variant, test_component, cluster_view

def verify_png_extension(filename):
    """
    Verifies that a filename variable has .png at the end of it.
    Args:
        filename: The filename to be verified
    Returns:
        filename with .png at the end
    """
    if filename[-4:] != '.png':
        filename = filename + '.png'
    return filename


def are_images_same_size(image1, image2):
    """
    Checks if two images are the same size.
    
    Returns True if they are the same size, False if they are not the same size. 
    """
    try:
        with Image.open(image1) as img1:
            width1, height1 = img1.size
        with Image.open(image2) as img2:
            width2, height2 = img2.size
        if width1 == width2 and height1 == height2:
            return True
        else:
            return False
    except IOError:
        return False

def verify_cluster_view_variable(cluster_view):
    """
    Verifies that the cluster_view variable is not None by checking to see if 
    the cluster_view variable is set in the robot file. If not, return a failure because
    defining a cluster_view is required.

    Returns the cluster_view variable if it is not None. If it is None, then it will not return anything.
    """
    if cluster_view is None:
        cluster_view = BuiltIn().get_variable_value("${cluster_view}", None)
        if cluster_view is None:
            logger.critical("No cluster view specified! Please specify a cluster view to use in your robot file or pass directly to keyword!")

    return cluster_view

def is_an_IP_address(IP_address):
    """
    Checks if the adb_device is an IP address.
    """
    if IP_address.count('.') == 3:
        return True
    else:
        return False

def does_images_exist(images: list) -> bool:
    for image in images:
        if not os.path.exists(image):
            logger.warn("Image {} does not exist!".format(image))
            return False
        
    return True

def check_if_vehicle_program_supports_test(display_size, vehicle_program, test_name):
    cat_dir = BuiltIn().get_variable_value("${CAT_DIR}")
    with open(os.path.join(cat_dir, 'references', 'json', 'cat_black_list.json'), 'r') as f:
        cat_black_list = json.load(f)

    cat_black_list_key = f"{display_size}_{vehicle_program}"
    if test_name in cat_black_list:
        if cat_black_list_key in cat_black_list[test_name]:
            return False
    return True

class RetryExecutor:
    """
    A class that allows executing a function with retry mechanism.

    Args:
        func (callable): The function to be executed.
        num_retries (int): The number of times to retry executing the function.
        interval (float): The interval (in seconds) between each retry.

    Methods:
        execute_with_retry(): Executes the function with retry mechanism.

    Returns:
        bool: True if the function is executed successfully, False otherwise.
    """

    def __init__(self, func, num_retries, interval):
        self.func = func
        self.num_retries = num_retries
        self.interval = interval

    def execute_with_retry(self):
        """
        Executes the function with retry mechanism.

        Returns:
            bool: True if the function is executed successfully, False otherwise.
        """
        for _ in range(self.num_retries):
            if self.func():
                return True
            logger.warn(f"Issue when executing {self.func.__name__}. Retrying in {self.interval} seconds...")
            time.sleep(self.interval)
        logger.error(f"Failed to execute {self.func.__name__} after {self.num_retries} retries!")
        return False