import tarfile, subprocess, os, time, utilities, sys, json
import traceback
from robot.libraries.BuiltIn import BuiltIn
from pathlib import Path
import xml.etree.ElementTree as ET

sys.path.append('../')
import cat_config
import keywords.vehicle_sim_keywords as vsk
from libraries.qnx_helper import QNXFramework
qnxk = QNXFramework.getInstance()
import keywords.image_compare_keywords as ick
from libraries.json_interactions import JSONInteractions
import pandas as pd
from  libraries.cat_logging.cat_logging import CatLogging
from keywords.vehicle_sim_keywords import send_signal_reboot,send_dtach_command

logger = CatLogging.getLogger()


QNX_CORD_JSON_DIRECTORY = str(Path(os.path.abspath(os.path.dirname(__file__)))) + "\\qnx\\qnx_coordinates.json"
FILE_PATH = str(Path(os.path.abspath(os.path.dirname(__file__))).parents[0])
apk_path = os.path.join(FILE_PATH, "libraries", "apks")

is_calibrations_set_g = True
current_cluster = 0
cluster_type = None
total = 0
adb_device = cat_config.adb_devices

def get_cal_base_excel():
    display_size=BuiltIn().get_variable_value("${display_size}")
    vehicle_program=BuiltIn().get_variable_value("${vehicle_program}")
    variant=cat_config.variant

    sheet = pd.read_excel(FILE_PATH + "\\references\\calibrations\\cal.xlsx", usecols=["Calibration Names",vehicle_program+"-"+display_size])

    array = [["Calibration Names",vehicle_program+"-"+display_size]]

    for name in sheet.iterrows():
        array.append(name[1].tolist())

    for i in range(len(array)):
        array[i][0] = str(array[i][0])
        array[i][1] = str(array[i][1])
        verify_calibration(array[i][0],array[i][1])

    return True

def get_cal_excel(looking_cal):
    display_size=cat_config.display_size
    vehicle_program=cat_config.vehicle_program
    variant=cat_config.variant

    looking_cal = str(looking_cal).lower()

    sheet = pd.read_excel(FILE_PATH + "\\references\\calibrations\\cal.xlsx", usecols=["Calibration Names",vehicle_program+"-"+display_size])


    array = [["Calibration Names",vehicle_program+"-"+display_size]]

    for name in sheet.iterrows():
        array.append(name[1].tolist())

    for i in range(len(array)):
        array[i][0] = str(array[i][0]).lower()
        array[i][1] = str(array[i][1]).lower()

    for i in range(len(array)):
        for j in range(len(array[i])):
            if array[i][j]==looking_cal:
                logger.debug("Found it: "+array[i][j+1])
                return array[i][j+1]
        
    logger.debug("Not found!")
    return False

def connect_to_adb():
    """
    Connects to the Android device via ADB.
    """
    if utilities.is_an_IP_address(adb_device):
        # if IP address, then connect to it
        connect_to_adb_with_IP_address(adb_device)
    else:
        utilities.enable_usb_debugging()
        time.sleep(5)

    output = subprocess.Popen("adb -s {} root".format(adb_device), shell=False, stdout=subprocess.PIPE, stderr=subprocess.PIPE)
    
    _, _ = output.communicate()
    _ = output.returncode

    return True

def adb_connected(function):
    """
    Decorator for functions that require ADB connection.
    """
    def wrapper(*args, **kwargs):
        if not is_adb_connected():
            connect_to_adb()

        return function(*args, **kwargs)

    return wrapper

def is_adb_connected():
    """
    Checks if the Android device is connected via ADB.

    We check this by running "adb devices" command in terminal. If we have a device connected, we should
    see something like this:
    
    List of devices attached

    adb_device    device

    """
    output = subprocess.Popen("adb devices", shell=False, stdout=subprocess.PIPE, stderr=subprocess.PIPE)
    out, _ = output.communicate()
    _ = output.returncode
    
    if utilities.is_an_IP_address(adb_device):
        search_string = "{}:5555\\tdevice".format(adb_device)
    else:
        search_string = "{}\\tdevice".format(adb_device)
    
    if search_string not in str(out):
        return False
    
    return True
        
def connect_to_adb_with_IP_address(adb_device):
    start_adb_server()

    output = subprocess.Popen("adb connect {}".format(adb_device), shell=True, stdout=subprocess.PIPE, stderr=subprocess.PIPE)
    out, _ = output.communicate()
    _ = output.returncode

    if not "connected to {}".format(adb_device) in str(out):
        logger.critical("Failed to connect to adb device {}!!".format(adb_device))

def start_adb_server():
    output = subprocess.Popen("adb kill-server", shell=True, stdout=subprocess.PIPE, stderr=subprocess.PIPE)
    out, _ = output.communicate()
    _ = output.returncode

    output = subprocess.Popen("adb start-server", shell=True, stdout=subprocess.PIPE, stderr=subprocess.PIPE)
    out, _ = output.communicate()
    _ = output.returncode

def disconnect_to_adb():
    """
    Connects to the Android device via ADB.
    """
    subprocess.call("adb -s {} unroot".format(adb_device), shell=False)
    if utilities.is_an_IP_address(adb_device):
        # if IP address, then disconnect to it
        subprocess.call("adb disconnect {}".format(adb_device), shell=False)
    else:
        utilities.disable_usb_debugging()

def tap_by_coordinates(x, y):
    """
    Tap on the screen at the specified coordinates.
    Args:
        x: x coordinate of the tap
        y: y coordinate of the tap
    """
    logger.debug(f"tapping at ({x}, {y})")
    subprocess.call("adb -s {} shell input tap {} {}".format(adb_device, x, y), shell=False)

def swipe_by_coordinates(x1, y1, x2, y2, speed=100):
    """
    Swipe from one set of coordinates to another set of coordinates.
    Args:
        x1: x coordinate of the starting point of the swipe
        y1: y coordinate of the starting point of the swipe
        x2: x coordinate of the ending point of the swipe
        y2: y coordinate of the ending point of the swipe
        speed: optional - speed of swipe
    """
    logger.debug(f"swiping from ({x1}, {y1}) to ({x2}, {y2}) at speed: {speed}")
    subprocess.call("adb -s {} shell input swipe {} {} {} {} {}".format(adb_device, x1, y1, x2, y2, speed), shell=False)

def open_app(package_name):
    """
    Opens an app on the connected Android device.
    Args:
        package_name: Package name of the app that should be opened.
    """
    subprocess.call('adb -s {} shell "monkey -p {} -c android.intent.category.LAUNCHER 1"'.format(adb_device, package_name), shell=True)

def verify_GMRHMIService_apk_installed():
    utilities.RetryExecutor(install_GMRHMIService_apk, num_retries=1, interval=5).execute_with_retry()

def install_GMRHMIService_apk():
    app = "com.example.sampleactivity"
    send_adb_command(f"adb uninstall {app}")
    time.sleep(1)
    logger.info("app is uninstalled peoperly...........................")
    if check_if_apk_installed("com.example.sampleactivity"):
        logger.info("Infopage apks are already installed! Skipping installation...")
        return True
   
    logger.info("Remounting and rebooting device to install GMRHMIService.apk")
 #   send_adb_command(f'adb -s {adb_device} remount')
 #   send_adb_command(f'adb -s {adb_device} reboot')
 
    # TODO: check if wait-for-device works with USB adb connections
 #   send_adb_command(f'adb -s {adb_device} wait-for-device')
 #   send_adb_command(f'adb -s {adb_device} root')
 
    time.sleep(5)
 #   send_adb_command(f'adb -s {adb_device} remount')
 
 #   GMRMHISERVICE_APK_PATH = os.path.join(apk_path, "GMRHMIService.apk")
    INFOPAGE_APK = os.path.join(apk_path, "SampleActivity.apk")
 
 #   send_adb_command(f'adb -s {adb_device} push {GMRMHISERVICE_APK_PATH} /system/priv-app/GMRHMIService/GMRHMIService.apk')
 #   send_adb_command(f'adb -s {adb_device} install -t -r {INFOPAGE_APK}')
    send_adb_command(f'adb install {INFOPAGE_APK}')
 
 #   send_adb_command(f'adb -s {adb_device} reboot')
 
   
 #   send_adb_command(f'adb -s {adb_device} wait-for-device')
 #   send_adb_command(f'adb -s {adb_device} root')
 
    if check_if_apk_installed("com.example.sampleactivity"):
        logger.info("Successfully installed GMRHMIService.apk!")
        return True
    else:
        logger.warn("Issue with GMRHMIService test apk installation process...")
        return False

def check_if_apk_installed(package_name: str) -> bool:
    output = send_adb_command(f'adb -s {adb_device} shell "pm list packages | grep {package_name}"')
    if package_name in output:
        return True
    return False

def retrieve_cals_from_adb(path):
    
    """
    Use this instead of extract_gmlogger when needed
    Extracts 'only' the calibrations from the connected Android device.
    """
    # check if device is connected
    output = subprocess.run("adb -s {} root".format(adb_device), capture_output=True, text=True)

    if ("unable to connect for root" in output.stdout):
        return False

    time.sleep(1)

    output = subprocess.run("adb -s {} pull /data/gmlogger/calibration_values_bootup_copy.txt {}".format(adb_device, path), shell=True, stdout=subprocess.PIPE)
    if output.returncode != 0:
        logger.error(output.stdout.decode())
        return False
    logger.info(output.stdout.decode())


def extract_gmlogger(path):
    """
    Extracts gmlogger from the connected Android device.
    """
    # check if device is connected
    output = subprocess.run("adb -s {} root".format(adb_device), capture_output=True, text=True)

    if ("unable to connect for root" in output.stdout):
        return False

    # pull gmlogger from android
    subprocess.call("adb -s {} shell tar czvf /data/gmlogger.tar.gz data/gmlogger".format(adb_device), shell=True)
    subprocess.call("adb -s {} pull /data/gmlogger.tar.gz {}".format(adb_device, path), shell=True)


def delete_gmlogger(results_folder):
    """
    Saves the calibration txt file in the results folder from the extracted gmlogger and deletes the rest of gmlogger.
    Args:
        results_folder: Name of the results folder that the calibration txt file should be saved in.
    """
    # copy calibration txt file to results folder
    subprocess.call('copy "gmlogger\\data\\gmlogger\\calibration_values_bootup_copy.txt" "{}"'.format(results_folder), shell=True)
    
    # delete gmlogger folder and the tar.gz file
    subprocess.call("del gmlogger.tar.gz", shell=True)
    subprocess.call("rmdir /s /q gmlogger", shell=True)

def verify_calibration(calibration_name, calibration_value):
    """
    Verifies that the specified calibrations are set on the connected Android device.
    Args:
        calibration_name: Name of the calibration that should be verified.
        calibration_value: Value that the calibration should be set to.
    """
    global is_calibrations_set_g 
    flag = 0
    is_calibrations_set = True
    calibration_name = str(calibration_name)+":"
    calibration_value = str(calibration_value)
    override_set = 0
    vip_set = 0

    results_dir = BuiltIn().get_variable_value("${RESULTS_DIR}")
    # open calibration file
    try:
        with open(os.path.join(results_dir, 'calibration_values_bootup_copy.txt')) as f:
            # read txt file line by line to find the calibrations_dictionary key and verify the value
            for line in f:
                if "Calibration Override files" in line:
                    flag = 0
                    continue
                elif "Calibration Values" in line:
                    flag = 1
                    continue
                
                line = line.replace(" ", "")
                if calibration_name in line:
                    push_type = "VIP" if flag else "override" # could also just set this variable in first if/elif
                    if line[:-1].endswith("{}".format(calibration_value)) == False:
                        logger.info("Calibration is {} in {}".format(line, push_type))
                        logger.debug("which is not correct, has to be {}".format(calibration_value))
                        is_calibrations_set = False

                        if push_type=="VIP":
                            vip_set = 0
                        else:
                            override_set = 0
                    else:
                        if push_type=="override":
                            override_set = 1
                        else:
                            vip_set = 1
        f.close()
    except:
        logger.error("No calibration_values_bootup_copy file found...BIG ERROR")

    if (is_calibrations_set==False):
        if (vip_set==0 and override_set==1):
            logger.warn("Calibration is set correctly in override file but not VIP, so cal needs to be vip flashed to take effect")
        elif (vip_set==1 and override_set==0):
            logger.warn("Calibration is set correctly in VIP file but not override, so cal needs to be overwritten in override file...doing it now")
            make_cal(calibration_name, calibration_value)
            logger.warn("Pushed {}{} to override file, should be good".format(calibration_name, calibration_value))
        elif (vip_set==0 and override_set==0):
            logger.warn("Calibration is NOT set correctly in override file and VIP")
            make_cal(calibration_name, calibration_value)
            logger.warn("Pushed {}{} to override file HOWEVER cal may need to be VIP FLASHED to work properly".format(calibration_name, calibration_value))
        else:
            logger.error("ERROR in cal contradiction detected!")
    else:
        logger.info("Calibration is set correctly!")

    return is_calibrations_set

def make_cal(calibration_name, calibration_value):
    dir = BuiltIn().get_variable_value("${REFERENCES_DIR}")
    search_word = "{}{}".format(calibration_name, calibration_value)
    global is_calibrations_set_g 
    is_calibrations_set_g = False

    try:
        flag=0
        with open("{}cal.override".format(dir), 'r') as file:
            data = file.readlines()
            for i in data:    # for i in range(len(data)-1):
                if calibration_name in i:
                    logger.info("inside cal.override...cal is set to {}".format(i))
                    i = search_word
                    flag = 1
        file.close()

        logger.info("cal.override found, editting it.....")

        if flag == 1:
            with open("{}cal.override".format(dir), 'w') as file:
                for j in range(len(data)):
                    if calibration_name in data[j]:
                        data[j] = search_word + "\n"

                for j in range(len(data)):
                    file.writelines(data[j])

                logger.info("inside cal.override...rewritting cal")

            file.close()

        if flag == 0:
            with open("{}cal.override".format(dir), "a+") as f:
                f.write("\n" + search_word)
                logger.info("inside cal.override...appending cal with {}".format(search_word))
            f.close()

        # get rid of blank lines
        with open("{}cal.override".format(dir), 'r') as file:
            data = file.readlines()
        file.close()
        with open("{}cal.override".format(dir), 'w') as file:
            for j in range(len(data)):
                if data[j] == "\n":
                    continue
                elif j == len(data)-1 and "\n" == data[j][-1]:
                    data[j] = data[j][:-1]
                file.writelines(data[j])
        file.close()
            
    except FileNotFoundError:
        logger.warn("cal.override not found, making new one.....")
        with open("{}cal.override".format(dir), "a+") as f:
            f.write(search_word)
        f.close()

    return True

def is_reboot_needed():
    dir = BuiltIn().get_variable_value("${REFERENCES_DIR}")
    check_file = os.path.exists("{}cal.override".format(dir))
    global is_calibrations_set_g
    
    if (check_file == False) or (is_calibrations_set_g == True):
        logger.warn("Not rebooting because no override file exists or cals are correct")
        return False
    
    return True

def longer_reboot_needed():
    dir = BuiltIn().get_variable_value("${REFERENCES_DIR}")
    check_file = os.path.exists("{}cal.override".format(dir))
    if (check_file == True):
        with open(dir+"cal.override") as override_file:
            if ('GMModel' in override_file.read()) or ('DISPLAY_CONFIGURATION_MAPPING' in override_file.read()):
                return True
    return False

def push_calibrations():
    # delete_all_overrides()
    dir = BuiltIn().get_variable_value("${REFERENCES_DIR}")
    send_adb_command('adb -s {} root'.format(adb_device))
    time.sleep(2)
    status = send_adb_command('adb -s {} remount'.format(adb_device))
    print("REMOUNT STATUS " + status)
    time.sleep(3)
    send_adb_command('adb -s {} shell rm  /system/priv-app/GMRHMIService/*'.format(adb_device))
    time.sleep(3)
    send_adb_command('adb -s {} shell rm  data/vendor/calibrations/*'.format(adb_device))
    time.sleep(3)
    send_adb_command('adb -s {} shell sync'.format(adb_device))
    path = os.path.join(os.getcwd() ,'src\\cat\\libraries\\apks\\GMRHMIService.apk')
    time.sleep(2)
    send_adb_command('adb -s {} push "{}" /system/priv-app/GMRHMIService/'.format(adb_device,path))
    time.sleep(2)
    dir1 = os.path.join(dir,"override")
    get_all_override_files = os.listdir(os.path.join(dir,"override"))
    for overide in get_all_override_files:
        send_adb_command('adb -s {} push "{}/{}" /data/vendor/calibrations'.format(adb_device, dir1,overide))
    time.sleep(2)
    send_adb_command('adb -s {} shell sync'.format(adb_device))

def get_android_xml_dump():
    cmd = "adb -s {} exec-out uiautomator dump /dev/tty".format(adb_device)
    output = subprocess.run("{}".format(cmd), capture_output=True, text=True)
    return output.stdout.lower()

def find_word_index(word, words):
    """
    Finds a word on the android screen and taps on it if it exists.
    Args:
        word: A word that can be found on the screen (ie the text on a clickable button).
        words: output of xml dump (or string of text to search through).
    """
    print("output is " + words)
    print("looking for word: '" + word.lower() + "'")
    index = words.find(word.lower())
    return index

def find_word_coord(word, words=''):
    """
    Finds a word on the android screen and taps on it if it exists.
    Args:
        word: A word that can be found on the screen (ie the text on a clickable button).
        words: output of xml dump (or string of text to search through).
    """
    if words=='':
        words = get_android_xml_dump()
    index = find_word_index(word, words)
    if (index != -1):
        print("found word")
        leftx, rightx, lefty, righty = get_leftx_rightx_lefty_righty(index, words)
        tapx = (leftx + rightx) / 2 
        tapy = (lefty + righty) / 2

        return tapx, tapy
    else:
        return -1
    
def get_leftx_rightx_lefty_righty(index, words):
    indexBound = words.find("bounds=", index)
    indexBoundEnd = words.find('"', indexBound+8)
    bounds = words[indexBound+8:indexBoundEnd]
    print(bounds)

    leftx = int(bounds[1:bounds.find(',')])
    rightx = int(bounds[bounds.find('[', 1)+1 : bounds.find(',', bounds.find('[', 1)+1)])
    lefty = int(bounds[bounds.find(',')+1:bounds.find(']')])
    righty = int(bounds[bounds.find(',', bounds.find(']')+2)+1 : -1])

    return leftx, rightx, lefty, righty

def find_word_and_tap(word):
    """
    Finds a word on the android screen and taps on it if it exists.
    Args:
        word: A word that can be found on the screen (ie the text on a clickable button).
    """
    coordinates = find_word_coord(word, get_android_xml_dump())
    if coordinates != -1:
        tapx, tapy = coordinates
        logger.info("inside find_word_and_tap ... found {}".format(word))
        tap_by_coordinates(tapx, tapy)
        return True
    
    logger.info("inside find_word_and_tap ... failed to find {}".format(word))
    return False

def find_word_and_tap_repeat(word):
    num = 5
    while num > 0:
        ret = find_word_and_tap(word)
        if ret == True:
            return True
        num = num -1
    logger.warn('looping repeat reached max')
    return False

def calculate_swipe_coordinates(width, height, leftx=0, rightx=0, lefty=0, righty=0):
    x0=(width/2)/3 + (width/2) + leftx
    y0=height/2 + lefty
    x1=(width/2)/3 + leftx
    y1=(height/2)+5 + lefty
    return x0, y0, x1, y1

def get_android_screen_size():
    vehicle_program = cat_config.vehicle_program
    display_size = cat_config.display_size
    veh_json_key = f"{display_size}_{vehicle_program}"
    veh_json = JSONInteractions().get_jsonFile_Directory(QNX_CORD_JSON_DIRECTORY)
    if vehicle_program in veh_json:
        logger.info('Vehicle correct')
        if "android_screen_size" in veh_json[veh_json_key]:
            if "width" in veh_json[veh_json_key]['android_screen_size']:
                if "height" in veh_json[veh_json_key]['android_screen_size']:
                    height = int(veh_json[veh_json_key]['android_screen_size']['height'])
                    width = int(veh_json[veh_json_key]['android_screen_size']['width'])
                    return width, height
    else:
        logger.critical('Vehicle Not available in: qnx_coordinates.json. Confirm Right Vehicle Name was used.')
    
    logger.critical("android_screen_size is not defined for vehicle program: {}".format(veh_json_key))
    return -1, -1

def find_word_and_tap_scroll_LtoR(word, word2="", loop=0):
    """
    Finds a word on the android screen and taps on it if it exists, if it is not found, 
    scrolls left to right and looks for word again
    Args:
        word: A word that can be found on the screen (ie the text on a clickable button).
        word2: ui element of what to scroll within (ie a certain window or scroll page)
    """
    found = False
    i = 0
    height = 0
    width = 0
    x0=0
    y0=0
    x1=0
    y1=0

    # get screensize
    if word2 == "":
        try:
            height, width = get_android_screen_size()
        except:
            logger.critical('Error in find_word_and_tap_scroll_LtoR')
        if height != 0 and width != 0:
            # calculate swiping left to right coordinates
            x0, y0, x1, y1 = calculate_swipe_coordinates(width, height)
        else:
            logger.warn("height and width is zero!!!")
    else:
        j = 10
        output = get_android_xml_dump()      
        while j != 0:
            j=j-1   
            if find_word_and_tap(word.lower()):
                print("found word")
                found = True             
                return found
            else:
                index = find_word_index(word2.lower(), output)
                indexBound = output[index:output.find(">", index)]
                if "scrollable=\"false\"" in indexBound:
                    index = output.find(">", index)
                    output = output[index:-1]
                    continue
                else:
                    leftx, rightx, lefty, righty = get_leftx_rightx_lefty_righty(index, output)
                    height = (righty-lefty)
                    width = (rightx-leftx)

                    x0, y0, x1, y1 = calculate_swipe_coordinates(width, height, leftx=leftx, rightx=rightx, lefty=lefty, righty=righty)
                    
                    j = 0
    
    while not found:
        i=i+1
        logger.info("swiping to screen with {} - swipe {}".format(word, i))
        # need to make dynamic to any screen 
        swipe_by_coordinates(x0,y0,x1,y1)
        time.sleep(6)
        
        if find_word_and_tap(word.lower()):
            found = True
            return found

        if loop != 0:
            i = loop
        if(i >= 5):
            logger.info("Scrolled LtoR for 5 times and did not find {}, trying RtoL".format(word))
            while i > 0:
                find_word_and_tap_scroll_RtoL(word, word2, i)
                i = i-1
            logger.critical("Scrolled RtoL for 5 times and did not find {}, fail".format(word))
            break
    return found

def find_word_and_tap_scroll_RtoL(word, word2="", loop=0):
    """
    Finds a word on the android screen and taps on it if it exists.
    Args:
        word: A word that can be found on the screen (ie the text on a clickable button).
        word2: ui element of what to scroll within (ie a certain window or scroll page)
    """
    found = False
    i = 0
    height = 0
    width = 0
    x0=0
    y0=0
    x1=0
    y1=0

    # get screensize
    if word2 == "":
        try:
            height, width = get_android_screen_size()
        except:
            logger.critical('Error in find_word_and_tap_scroll_RtoL')
        if height != 0 and width != 0:
            # calculate swiping Right to Left coordinates
            # need to flip x0 and x1 for RtoL
            x1, y0, x0, y1= calculate_swipe_coordinates(width, height)
        else:
            logger.warn("height and width is zero!!!")
    else:
        j = 10
        output = get_android_xml_dump()
        while j != 0:
            j=j-1
            if find_word_and_tap(word.lower()):
                print("found word")
                found = True            
                return found
            else:
                index = find_word_index(word2.lower(), output)
                indexBound = output[index:output.find(">", index)]
                if "scrollable=\"false\"" in indexBound:
                    index = output.find(">", index)
                    output = output[index:-1]
                    continue
                else:
                    leftx, rightx, lefty, righty = get_leftx_rightx_lefty_righty(index, output)
                    height = (righty-lefty)
                    width = (rightx-leftx)

                    x0, y0, x1, y1 = calculate_swipe_coordinates(width, height, leftx=leftx, rightx=rightx, lefty=lefty, righty=righty)

                    j = 0
    
    while not found:
        i=i+1
        logger.info("swiping to screen with {} - swipe {}".format(word, i))
        # TODO: need to make dynamic to any screen 
        swipe_by_coordinates(x0,y0,x1,y1)
        time.sleep(6)
        
        if find_word_and_tap(word.lower()):
            found = True
            return found

        if loop != 0:
            i = loop
        if(i >= 5):
            logger.warn("Scrolled RtoL for 5 times and did not find {}, trying LtoR".format(word))
            while i > 0:
                find_word_and_tap_scroll_LtoR(word, word2, i)
                i = i-1
            logger.critical("Scrolled LtoR for 5 times and did not find {}, fail".format(word))
            break

    return found

def find_word_and_tap_and_hold(word, duration=1000):
    """
    Finds a word on the android screen and taps and holds on it if it exists.
    Args:
        word: A word that can be found on the screen (ie the text on a clickable button).
        duration: duration of the tap and hold
    """
    coordinates = find_word_coord(word, get_android_xml_dump())
    if (coordinates != -1):
        tapx, tapy = coordinates
        tap_and_hold_by_coordinates(tapx, tapy, duration)
        return True
    
    logger.error("failed to find {}".format(word))
    return False

def tap_and_hold_by_coordinates(x, y, duration):
    """
    Tap and hold on the screen at the specified coordinates.
    Args:
        x: x coordinate of the tap and hold
        y: y coordinate of the tap and hold
        duration: duration of the tap and hold
    """
    subprocess.call("adb -s {} shell input swipe {} {} {} {} {}".format(adb_device, x, y, x, y, duration), shell=False)

def tap_home():
    """
    Taps on the home button on the android device.
    """
    cmd = "adb -s {} shell input keyevent KEYCODE_HOME".format(adb_device)
    output = subprocess.run("{}".format(cmd), capture_output=True, text=True)
    output = output.stdout
    print(output)
    return True

# need to fix
def scroll_LtoR():
    """
    Scrolls from left to right on the android device.
    Args:
        word: A word that can be found on the screen (ie the text on a clickable button).
    """
    scroll = 'scrollable="true'
    output = get_android_xml_dump()
    index = find_word_index(scroll, output)

    if (index != -1):
        leftx, rightx, lefty, righty = get_leftx_rightx_lefty_righty(index, output)

        tapx = (leftx + lefty) / 2 
        tapy = (righty - lefty) / 2 

        startx = leftx + (leftx/4)
        starty = tapy
        endx = rightx - (rightx/4)
        endy = tapy
        coordStr = str(startx) + ' ' + str(starty) + ' ' + str(endx) + ' ' + str(endy)
        print(coordStr)
        subprocess.call("adb -s {} shell input touchscreen swipe ".format(adb_device) + coordStr + " 1000", shell=True)

    return

# need to fix
def scroll_RtoL():
    """
    Scrolls from right to left on the android device.
    Args:
        word: A word that can be found on the screen.
    """
    scroll = 'scrollable="true'
    output = get_android_xml_dump()
    index = find_word_index(scroll, output)

    if (index != -1):
        leftx, rightx, lefty, righty = get_leftx_rightx_lefty_righty(index, output)

        tapx = (rightx - leftx) / 2 
        tapy = (righty - lefty) / 2 

        endx = leftx + (leftx/4)
        endy = tapy
        startx = rightx - (rightx/4)
        starty = tapy
        coordStr = str(startx) + ' ' + str(starty) + ' ' + str(endx) + ' ' + str(endy)
        print(coordStr)
        subprocess.call("adb -s {} shell input touchscreen swipe ".format(adb_device) + coordStr + " 500", shell=True)

    return True

def scroll_UtoD(word):
    """
    Scrolls from up to down on the android device.
    Args:
        word: ui element to scroll
    """
    scroll = 'scrollable="true'
    output = get_android_xml_dump()
    index = find_word_index(scroll, output)

    if (index != -1):
        leftx, rightx, lefty, righty = get_leftx_rightx_lefty_righty(index, output)

        scrollx = (leftx + rightx) / 2 
        topy = ((((righty + lefty) / 2 ) - lefty) /2) + lefty
        bottomy = ((((righty + lefty) / 2 ) - lefty) /2)*2 + lefty

        coordStr = str(scrollx) + ' ' + ' ' + str(bottomy) + ' ' + str(topy)
        print(coordStr)
        swipe_by_coordinates(scrollx,bottomy,scrollx,topy)
        # subprocess.call("adb shell input touchscreen swipe " + coordStr + " 1000", shell=True)
        return True

    print("failed to find {}".format(word))
    return False

def scroll_UtoD_loop(elementToScrollThrough, elementToClickOn, elementToClickOnFirst=None):
    """
    Scrolls from up to down on the android device and clicks on elementToClickOn, or if provided,
    elementToClickOnFirst if it is found before elementToClickOn.
    Args:
        elementToScrollThrough: ui element to scroll within
        elementToClickOn: A substring of a UI element that can be found on the android screen (ie the text on a clickable button).
        elementToClickOnFirst: optional second word to click on before we find elementToClickOn
    """
    loopNum = 20

    while loopNum > 0:
        loopNum = loopNum - 1
        logger.info("utod loop - loops left {}".format(loopNum))
        cmd = "adb -s {} exec-out uiautomator dump /dev/tty".format(adb_device)
        output = subprocess.run("{}".format(cmd), capture_output=True, text=True)
        output = output.stdout.lower()
        print(output)

        index = output.find(elementToScrollThrough.lower())
        index2 = output.find(elementToClickOn.lower())
        scroll = 'scrollable="true'

        if (index2 != -1):
            if elementToClickOnFirst != None:
                find_word_and_tap_repeat(elementToClickOnFirst)
                time.sleep(1)
            find_word_and_tap_repeat(elementToClickOn)
            return True

        # index = output.find(scroll)
        elif (index != -1):
            indexBound = output.find("bounds=", index)
            indexBoundEnd = output.find('"', indexBound+8)
            bounds = output[indexBound+8:indexBoundEnd]
            print(bounds)

            leftx = int(bounds[1:bounds.find(',')])
            rightx = int(bounds[bounds.find('[', 1)+1 : bounds.find(',', bounds.find('[', 1)+1)])
            
            lefty = int(bounds[bounds.find(',')+1:bounds.find(']')])
            righty = int(bounds[bounds.find(',', bounds.find(']')+2)+1 : -1])

            scrollx = (leftx + rightx) / 2 
            topy = ((((righty + lefty) / 2 ) - lefty) /2)*3 # + lefty 
            bottomy = ((((righty + lefty) / 2 ) - lefty) /2)*2 + lefty

            swipe_by_coordinates(scrollx, bottomy, scrollx, topy)
            time.sleep(1)

    print("failed to utod loop")
    return False

def scroll_DtoU_loop(elementToScrollThrough, elementToClickOn, elementToClickOnFirst=None):
    """
    Scrolls from down to up on the android device and clicks on elementToClickOn, or if provided,
    elementToClickOnFirst if it is found before elementToClickOn.
    Args:
        elementToScrollThrough: ui element to scroll within
        elementToClickOn: A substring of a UI element that can be found on the android screen (ie the text on a clickable button).
        elementToClickOnFirst: optional second word to click on before we find elementToClickOn
    """
    loopNum = 20

    while loopNum > 0:
        loopNum = loopNum - 1
        logger.info("DtoU loop - loops left {}".format(loopNum))
        cmd = "adb -s {} exec-out uiautomator dump /dev/tty".format(adb_device)
        output = subprocess.run("{}".format(cmd), capture_output=True, text=True)
        output = output.stdout.lower()
        print(output)

        index = output.find(elementToScrollThrough.lower())
        index2 = output.find(elementToClickOn.lower())
        scroll = 'scrollable="true'

        if (index2 != -1):
            if elementToClickOnFirst != None:
                find_word_and_tap_repeat(elementToClickOnFirst)
                time.sleep(1)
            find_word_and_tap_repeat(elementToClickOn)
            return True

        # index = output.find(scroll)
        elif (index != -1):
            indexBound = output.find("bounds=", index)
            indexBoundEnd = output.find('"', indexBound+8)
            bounds = output[indexBound+8:indexBoundEnd]
            print(bounds)

            leftx = int(bounds[1:bounds.find(',')])
            rightx = int(bounds[bounds.find('[', 1)+1 : bounds.find(',', bounds.find('[', 1)+1)])
            
            lefty = int(bounds[bounds.find(',')+1:bounds.find(']')])
            righty = int(bounds[bounds.find(',', bounds.find(']')+2)+1 : -1])

            # based on the bounds of (leftx, lefty) and (rightx, righty), find the topy and bottomy that will be used to scroll on device
            


            scrollx = (leftx + rightx) / 2 
            topy = int(((righty + lefty) / 2 - lefty) / 2) * 3 + lefty
            bottomy = int(((righty + lefty) / 2 - lefty) / 2) * 2 + lefty

            swipe_by_coordinates(scrollx, topy, scrollx, bottomy, 150)
            time.sleep(1)

    print("failed to DtoU loop")
    return False

def android_screenshot(results_folder, screenshot_name):
        """
        Takes a screenshot of the car's infotainment screen, downloads that image and then deletes it off the car's storage.
        Args:
            results_folder: The directory where the screenshot will be saved.
            screenshot_name: The name of the screenshot (please include .png).
        """
        # capture screenshot on android device
        subprocess.call("adb -s {} shell screencap -p /data/local/tmp/{}".format(adb_device, screenshot_name), shell=True)
        android_pull_screenshot(results_folder, screenshot_name)
        return  True

def android_screenshot_map_view(results_folder, screenshot_name):
        """
        Takes a screenshot of the car's infotainment screen, downloads that image and then deletes it off the car's storage.
        Args:
            results_folder: The directory where the screenshot will be saved.
            screenshot_name: The name of the screenshot (please include .png).
        """
        # capture screenshot of map view on android device
        subprocess.call("adb -s {} shell screencap -p -d 2 /data/local/tmp/{}".format(adb_device, screenshot_name), shell=True)
        android_pull_screenshot(results_folder, screenshot_name)
        return  True

def android_pull_screenshot(results_folder, screenshot_name):
    # create results folder directory for android screenshots if it does not exist
    results_folder = os.path.join(results_folder, utilities.ANDROID_SCREENSHOTS)
    if not os.path.exists(results_folder):
        os.makedirs(results_folder)

    # pull screenshot from android device
    subprocess.call("adb -s {} pull /data/local/tmp/{} \"{}\"".format(adb_device, screenshot_name, results_folder), shell=True)
    # delete screenshot from android device
    subprocess.call("adb -s {} shell rm -r /data/local/tmp/{}".format(adb_device, screenshot_name), shell=True)

def send_adb_command(command):
    """
    Sends an adb command to the android terminal.
    Args:
        command: The full adb command to be sent (ex: adb root)
    """
    output = subprocess.run(command, capture_output=True, text=True)
    logger.info(output.stdout)
    return output.stdout

def verify_base_cal(display_size=cat_config.display_size, vehicle_program=cat_config.vehicle_program, variant=cat_config.variant):
    # excel sheet
    get_cal_base_excel()
    return True

def set_radio_fav(display_size=cat_config.display_size, vehicle_program=cat_config.vehicle_program, variant=cat_config.variant):
    radio_fav = ""
    global total
    global current_cluster
    veh_json_key = f"{display_size}_{vehicle_program}"

    # get radio fav from info.json
    try:
        veh_json = JSONInteractions().get_jsonFile_Directory(QNX_CORD_JSON_DIRECTORY)
        if veh_json_key in veh_json:
            if "info" in veh_json[veh_json_key]:
                if "radio_fav" in veh_json[veh_json_key]["info"]:
                    radio_fav = str(veh_json[veh_json_key]["info"]["radio_fav"])
                else:
                    logger.critical('radio fav not set in info.json')
        else:
            logger.critical('Vehicle Not available in: info.json. Confirm Right Vehicle Name was used.')
    except:
        logger.critical('Error in set_radio_fav')

    # based on variant, call tap word and do actions
    find_word_and_tap_and_hold(radio_fav)

    # all 8in the same? need swc twice for all?
    # if vehicle_program=="31xxG" or vehicle_program=="31xxC":
    # if display_size == "8in":
    if current_cluster != 2:
        sum = total-current_cluster+2
        sum = sum % total
        taps_to_change_cluster_eight(sum)

    return True

def set_maps_blue_arrow(display_size=cat_config.display_size, vehicle_program=cat_config.vehicle_program, variant=cat_config.variant):
    veh_json_key = f"{display_size}_{vehicle_program}"
    blue_arrow = ""
    global total
    global current_cluster

    # get radio fav from info.json
    try:
        veh_json = JSONInteractions().get_jsonFile_Directory(QNX_CORD_JSON_DIRECTORY)
        if veh_json_key in veh_json:
            if "info" in veh_json[veh_json_key]:
                if "maps_blue_arrow" in veh_json[veh_json_key]["info"]:
                    blue_arrow = str(veh_json[veh_json_key]["info"]["maps_blue_arrow"])
                else:
                    logger.critical('maps_blue_arrow not set in info.json')
        else:
            logger.critical('Vehicle Not available in: info.json. Confirm Right Vehicle Name was used.')
    except:
        logger.critical('Error in set_maps_blue_arrow')

    # all 8in the same? need swc twice for all?
    # based on variant, call tap word and do actions
    find_word_and_tap(blue_arrow)
    # if vehicle_program=="31xxG" or vehicle_program=="31xxC":
    #     if display_size == "8in":
    clus_view_num = 2
    if current_cluster != clus_view_num:
        sum = total-current_cluster+clus_view_num
        sum = sum % total
        taps_to_change_cluster_eight(sum)

    return True

def set_current_cluster_view_index(cluster_view_index: int) -> None:
    global current_cluster
    current_cluster = cluster_view_index

def get_current_cluster_view_index() -> int:
    global current_cluster
    return current_cluster

def is_cluster_view_supported(cluster_view: str) -> bool:
    """
    Returns True if the cluster view is supported for the current vehicle program and display size.
    Args:
        cluster_view: The cluster view to check if it is supported.
    """
    veh_json_key = f"{cat_config.display_size}_{cat_config.vehicle_program}"
    
    veh_json = JSONInteractions().get_jsonFile_Directory(QNX_CORD_JSON_DIRECTORY)
    
    if veh_json_key in veh_json:
        if "supported_cluster_views" in veh_json[veh_json_key]:
            return cluster_view in veh_json[veh_json_key]["supported_cluster_views"]
        else:
            logger.critical("'supported_cluster_views' object is not defined in qnx_coordinates.json for vehicle program {}!".format(veh_json_key))
    else:
        logger.critical("{} is not defined in qnx_coordinates.json!".format(veh_json_key))
        
    return False

def change_cluster_view(cluster_view: str) -> None:
    """
    Changes the cluster to the specified cluster view, assuming the cluster view is supported.
    Args:
        cluster_view: The cluster view to change to.
    """
    global cluster_type
    display_size=cat_config.display_size
    vehicle_program=cat_config.vehicle_program
    variant=cat_config.variant
    veh_json_key = f"{display_size}_{vehicle_program}"

    veh_json = JSONInteractions().get_jsonFile_Directory(QNX_CORD_JSON_DIRECTORY)

    if veh_json_key in veh_json:
        if "supported_cluster_views" in veh_json[veh_json_key]:
            if cluster_view in veh_json[veh_json_key]["supported_cluster_views"]:
                new_cluster_view_index = veh_json[veh_json_key]["supported_cluster_views"].index(cluster_view)
                if cluster_type == "swc":                    
                    current_cluster_view_index = get_current_cluster_view_index()
                    
                    # need to figure out how many swc taps are needed to get to the new cluster view
                    if current_cluster_view_index == new_cluster_view_index:
                        # already at the "new" cluster view
                        return
                    elif current_cluster_view_index < new_cluster_view_index:
                        taps = new_cluster_view_index - current_cluster_view_index
                    else:
                        taps = len(veh_json[veh_json_key]["supported_cluster_views"]) - current_cluster_view_index + new_cluster_view_index

                    swc_command = "clusterView"

                    # for 54in vehicles, we need to send upPress to open a cluster view menu. Then downPress to navigate the menu
                    if display_size == "54in":
                        vsk.send_swc("upPress")
                        time.sleep(2)

                        # we technically can use upPress again to navigate up in the cluster view menu
                        # but going down in the menu allows "taps" logic above to stay the same
                        swc_command = "downPress"

                    while taps != 0:
                        vsk.send_swc(swc_command)
                        taps = taps - 1
                        time.sleep(2)
                    
                    # for 54in vehicles, we need to select the cluster view in the menu
                    if display_size == "54in":
                        vsk.send_swc("selectPress")

                    set_current_cluster_view_index(veh_json[veh_json_key]["supported_cluster_views"].index(cluster_view))
                elif cluster_type == "touch":
                    if cluster_view in veh_json[veh_json_key]:
                        x = int(veh_json[veh_json_key][cluster_view]["x"])
                        y = int(veh_json[veh_json_key][cluster_view]["y"])
                        qnxk.tap_by_coordinates(x, y)
                        
                        set_current_cluster_view_index(new_cluster_view_index)
                    else:
                        logger.critical("Coordinates for where to tap to change cluster view to {} is not defined for vehicle program {}".format(cluster_view, veh_json_key))

                else:
                    logger.critical("Failed to change cluster view, {} is not a valid cluster_type".format(cluster_type))
            else:
                logger.critical("{} is not defined as a supported cluster view in qnx_coordinates.json for vehicle program {}!".format(cluster_view, veh_json_key))
        else:
            logger.critical("'supported_cluster_views' object is not defined in qnx_coordinates.json for vehicle program {}!".format(veh_json_key))
    else:
        logger.critical("{} is not defined in qnx_coordinates.json!".format(veh_json_key))

def map_view_screenshot_validate(screenshot_name, display_num, dir, qnx_image_path, qnx_image_name, qnx_ref_image_path, qnx_ref_image_name, qnx_threshold, qnx_save_result, qnx_result_path, qnx_result_name, adb_image_name, adb_image_name_png, adb_ref_image_name, adb_result_name):
    """
    custom function to take screenshot of map view if applicable
    Args:
        screenshot_name: name to save screenshot as (.png) 
        display_num: QNX display number to capture 
        dir: Directory to save screenshots area_of_interest

        qnx_image_path: path to image to search 
        qnx_image_name: image filename 
        qnx_ref_image_path: path to reference image 
        qnx_ref_image_name: reference image filename 
        qnx_threshold: threshold for verification. A higher value is more strict (0 - 0.99) 
        qnx_save_result: True/False - save image as evidence of verification (green box around reference image that was found) 
        qnx_result_path: folder path to save result image with highlight of reference image 
        qnx_result_name: name of results image file (.png)
        
        adb_image_name: image filename 
        adb_image_name_png: image filename with .png
        adb_ref_image_name: reference image filename 
        adb_result_name: name of results image file (.png)
    """
    global qnxk

    cv = "map"
    if not is_cluster_view_supported(cv):
        cv = "infotainment"
    
    change_cluster_view(cv)

    time.sleep(7)
    logger.info('Android screenshot of map cluster view')
    android_screenshot_map_view(dir, qnx_image_name)
    time.sleep(1)
    try:
        logger.info('verify QNX screenshot of map cluster view')
        ick.verify_image_by_reference(qnx_image_path, qnx_image_name, qnx_ref_image_path, qnx_ref_image_name, qnx_threshold, qnx_save_result, qnx_result_path, qnx_result_name, is_android=True)
    except:
        logger.critical(traceback.print_exc())

def taps_to_change_cluster_eight(taps=0):
    global total
    global current_cluster
    display_size=cat_config.display_size
    vehicle_program=cat_config.vehicle_program
    variant=cat_config.variant

    if display_size == "8in":
        if cluster_type == "swc":
            taps_to_change_cluster(taps)

def taps_to_change_cluster(taps=0):
    global current_cluster
    global total
    global cluster_type
    global QNX_CORD_JSON_DIRECTORY
    display_size=cat_config.display_size
    vehicle_program=cat_config.vehicle_program
    variant=cat_config.variant

    if cluster_type == "swc":
        while taps != 0:
            logger.info("swc clicked")
            vsk.send_swc("clusterView")
            time.sleep(1)
            taps = taps - 1
            current_cluster = current_cluster + 1
            current_cluster = current_cluster % total
    elif cluster_type == "touch":
        # get coordinate and tap qnx
        return
    else:
        return False
    return True

def update_current_cluster_eight(num):
    global total
    global current_cluster
    display_size=cat_config.display_size
    vehicle_program=cat_config.vehicle_program
    variant=cat_config.variant

    if display_size == "8in":
        if cluster_type == "swc":
            update_current_cluster(num)

def update_current_cluster(num):
    global current_cluster
    current_cluster = int(num)
    return True

def update_total_cluster(display_size=cat_config.display_size, vehicle_program=cat_config.vehicle_program, variant=cat_config.variant):
    global total
    global current_cluster
    global cluster_type

    veh_json_key = f"{display_size}_{vehicle_program}"

    if vehicle_program == "all_programs":
        logger.info('vehicle program is all_programs so skipping update_total_cluster')
        return True

    try:
        veh_json = JSONInteractions().get_jsonFile_Directory(QNX_CORD_JSON_DIRECTORY)
        if veh_json_key in veh_json:
            if "info" in veh_json[veh_json_key]:
                if "cluster_view" in veh_json[veh_json_key]["info"]:
                    if "total" in veh_json[veh_json_key]["info"]["cluster_view"]:
                        total = int(veh_json[veh_json_key]["info"]["cluster_view"]["total"])
                        current_cluster = 0
                        logger.info("total cluster views is {}".format(total))
                    else:
                        logger.critical('cluster view total not set in info.json')

                    if "type" in veh_json[veh_json_key]["info"]["cluster_view"]:
                        cluster_type = str(veh_json[veh_json_key]["info"]["cluster_view"]["type"]).lower()
                        logger.info("cluster_type is {}".format(cluster_type))
                    else:
                        logger.critical('cluster_type not set in info.json')
                else:
                    logger.critical('cluster view not set in info.json')
        else:
            logger.critical('Vehicle Not available in: info.json. Confirm Right Vehicle Name was used.')

    except:
        logger.critical('Error in update_total_cluster')
    
    return True

def return_cluster_home():
    change_cluster_view("single_gauge")

def is_vehicle_bev(display_size=cat_config.display_size, vehicle_program=cat_config.vehicle_program, variant=cat_config.variant):
    # excel sheet reading
    if str(get_cal_excel("KeOCD_int_VEHICLE_PROPULSION_TYPE")) == "3":
        return True
    return False

def delete_all_overrides():
    send_adb_command('adb -s {} shell "rm /data/vendor/calibrations/*"'.format(adb_device))
    time.sleep(2)
    return

def reset_terterm():
    # PRE REQ - close tera term 
    commands = """$port= new-Object System.IO.Ports.SerialPort COM{},115200,None,8,one
$port.open()
$port.WriteLine("'reset'")
$port.Close()""".format(cat_config.com_num)
    
    run_teraterm_commands(commands)
    time.sleep(60)

    return True

def run_teraterm_commands(commands):
    # kill open com port before starting new session
    output = subprocess.run('start /wait TASKKILL /F /IM ttermpro.exe', capture_output=True, text=True, shell=True)
    # run commands
    output = subprocess.run('powershell -command ' + commands, capture_output=True, text=True)

    return output

def open_vehicle_info_app():
    subprocess.run("adb -s {} shell am start -n com.gm.vehicleinfo/com.gm.vehicleinfo.presentation.main.MainActivity".format(adb_device), shell=True)
    # wait for app to open and welcome screen animation to finish
    time.sleep(10)

def open_infopage_activity_app():
    subprocess.run(f"adb -s {adb_device} shell monkey -p com.example.sampleactivity -c android.intent.category.LAUNCHER 1", shell=True)
    time.sleep(2)

def show_infopage_on_cluster(infopage: str):
    if infopage.upper() not in utilities.VALID_INFO_PAGES:
        logger.error(f"ERROR: {infopage} is not a known info page!! Check VALID_INFO_PAGES for known info pages.")
        return False
    
    open_infopage_activity_app()

    scroll_DtoU_loop("com.example.sampleactivity:id/listView", infopage)
    xml_dump = get_android_xml_dump().removesuffix("ui hierchary dumped to: /dev/tty\n")
    root_node = ET.fromstring(xml_dump)

    if root_node is None:
        logger.error(f"ERROR: Not able to show infopage {infopage}!!!")
        return

    show_node = find_show_button_for_infopage(root_node, infopage.lower())

    if show_node is None:
        logger.error(f"ERROR: Not able to show infopage {infopage}!!!")
        return

    xy1, xy2 = get_bounds_of_node(show_node)
    x, y = get_center_of_bounds(xy1, xy2)

    tap_by_coordinates(x, y)
    time.sleep(2)
    close_infopage_activity_app()

def hide_infopage_on_cluster():
    open_infopage_activity_app()
    xml_dump = get_android_xml_dump().removesuffix("ui hierchary dumped to: /dev/tty\n")
    root_node = ET.fromstring(xml_dump)

    # Pressing any hide button will hide the currently shown info page
    parent_node = find_parent_node_that_includes_text(root_node, "hide")

    if parent_node is None:
        logger.error("ERROR: Not able to hide the currently shown infopage!!!")
        return

    hide_node = find_child_node_that_includes_text(parent_node, "hide")

    if hide_node is None:
        logger.error("ERROR: Not able to hide the currently shown infopage!!!")
        return

    xy1, xy2 = get_bounds_of_node(hide_node)
    x, y = get_center_of_bounds(xy1, xy2)

    tap_by_coordinates(x, y)
    time.sleep(2)
    close_infopage_activity_app()
    
def close_infopage_activity_app():
    subprocess.run(f"adb -s {adb_device} shell am force-stop com.example.sampleactivity", shell=True)

def find_parent_node_that_includes_text(node: ET.Element, text: str) -> ET.Element | None:
    return node.find(f".//*[@text='{text}']/..")

def find_child_node_that_includes_text(node: ET.Element, text: str) -> ET.Element | None:
    return node.find(f"*[@text='{text}']")

def find_show_button_for_infopage(node: ET.Element, infopage: str) -> ET.Element | None:
    parent_node = find_parent_node_that_includes_text(node, infopage)
    if parent_node is None:
        logger.critical(f"Could not find parent node for {infopage}!!")
        return None
    
    show_node = find_child_node_that_includes_text(parent_node, "show")

    if show_node is None:
        logger.critical(f"Could not find show button for {infopage}!!")
        return None
    return show_node

def get_bounds_of_node(node: ET.Element) -> tuple[dict[str, int], dict[str, int]]:
    bounds = node.attrib["bounds"]
    bounds = bounds.replace("][", " ")
    bounds = bounds.replace("[", "")
    bounds = bounds.replace("]", "")
    bounds = bounds.replace(",", " ")
    bounds = bounds.split(" ")

    xy1 = {"x": int(bounds[0]), "y": int(bounds[1])}
    xy2 = {"x": int(bounds[2]), "y": int(bounds[3])}
    return xy1, xy2

def get_center_of_bounds(xy1, xy2):
    return (xy1["x"] + xy2["x"]) / 2, (xy1["y"] + xy2["y"]) / 2

def open_android_settings_application():
    subprocess.run("adb -s {} shell am start -a android.settings.SETTINGS".format(adb_device), shell=True)
    # wait for app to open
    time.sleep(3)