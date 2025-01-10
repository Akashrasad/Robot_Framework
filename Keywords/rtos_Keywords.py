# from MIMAF.peripherals.image_processing.image_verification import verify_image
import subprocess
import pyautogui
import time

import logging
import paramiko
import os, cv2
import time, easyocr
import numpy as np 
import pytesseract
from PIL import Image
from pywinauto import application
from robot.libraries.BuiltIn import BuiltIn
import numpy as np
from PIL import ImageGrab
import pyscreeze
from robot.api import logger
import mss
import mss.tools

# ============================================
#
hostname="127.0.0.1"
port=5001

# Setting up logger
log = logging.getLogger("AppLauncher")
logging.basicConfig(level=logging.INFO)
# logging.basicConfig(level=logging.INFO)
log = logging.getLogger()
# ======================---------------------------------------------------------------------
# log = logging.getLogger(__name__)
# ------------------------------------------------------------------------------------------------------------------------------------- #

# def compare_screenshots(ref_image_name, threshold, save_result=True):
   
#     image_path = os.getcwd() + "\\Images"
#     image_name = "screenshot.png"
#     ref_image_path = os.getcwd() + "\\Images\\References"

#     result_path = os.getcwd() + "\\Images\\Results"
#     result_name = "Comparison_Result.png"
#     if verify_image.verify_image_by_reference(image_path, image_name, ref_image_path, ref_image_name, threshold,
#                                               save_result, result_path, result_name):
#         log.logger.info("Match Found!")
#         return True
#     else:
#         log.logger.info("Reference image '{}' NOT found in '{} with threshold '{}''".format(ref_image_name, result_name,
#                                                                                            threshold))
#         return False
    

    # =======================================================

def verify_text_element(element, alt_element=None):
    """
    Verify the presence of a text element in a screenshot image.
    
    Parameters:
    - element (str): The primary text to search for.
    - alt_element (str, optional): An alternative text to search for if the primary is not found.
    
    Returns:
    - bool: True if either the element or alt_element is found, False otherwise.
    """
    # Path to the OCR language module and image
    language_module_path = os.getcwd() + "\\Language Detection Modules"
    image_path = os.getcwd() + "\\Images\\screenshot.png"
    
    # Initialize the OCR reader
    reader = easyocr.Reader(["en"], model_storage_directory=language_module_path, download_enabled=False)
    
    # Perform text detection on the screenshot image
    element_list = reader.readtext(image_path)
    
    log.info(f"Verifying the presence of '{element}'")
    found = False

    for e in element_list:
        log.info(f"Detected text: {e[1]}")
        if element in e[1]:  # Check if the text matches the element
            log.info(f"Found primary element: '{element}'")
            found = True
            break

    if not found and alt_element:
        log.info(f"'{element}' not found, checking for alternative '{alt_element}'")
        for e in element_list:
            log.info(f"Detected text: {e[1]}")
            if alt_element in e[1]:  # Check if the text matches the alt_element
                log.info(f"Found alternative element: '{alt_element}'")
                found = True
                break

    if found:
        log.info(f"'{element}' or alternative '{alt_element}' found on the screen.")
        return True
    else:
        log.info(f"'{element}' and alternative '{alt_element}' were not found.")
        return False

# -------------------------------------------------------------------
def verify_image_with_reference(ref_image_name, threshold=0.8):
    """
   
    """
    image_path = os.path.join(os.getcwd(), "Images")
    image_name = "screenshot.png"
    img_full_path = os.path.join(image_path, image_name)
   
   
    ref_image_path = os.path.join(os.getcwd(), "Images\\references")
    ref_full_path = os.path.join(ref_image_path,ref_image_name)
 
    img = cv2.imread(img_full_path, 0)
    template = cv2.imread(ref_full_path, 0)
 
    if img is None:
        raise Exception(f"result image located at {img_full_path} can't be found or at a wrong format")
 
    if template is None:
        raise Exception(f"reference image located at {ref_full_path} can't be found or at a wrong format")
 
    print("Searching '{}' with reference image '{}':".format(img_full_path, ref_full_path))
    result = cv2.matchTemplate(img, template, cv2.TM_CCOEFF_NORMED)
    if np.amax(result) > float(threshold):
        print(f"Reference image {ref_full_path} found in {img_full_path} with threshold {threshold}")
        template_result_path = os.path.join(image_path,'image_reference_match')
        if not os.path.exists(template_result_path):
            os.makedirs(template_result_path)
        img_color = cv2.imread(img_full_path)
        # result_full_path = os.path.join(template_result_path, image_name)
        result_full_path = os.path.join(template_result_path, image_name)
        w, h = template.shape[::-1]
        min_val, max_val, min_loc, max_loc = cv2.minMaxLoc(result)
        top_left = max_loc
        bottom_right = (top_left[0] + w, top_left[1] + h)
        cv2.rectangle(img_color, top_left, bottom_right, (0, 255, 0), 2)
        if cv2.imwrite(os.path.join(template_result_path, ref_image_name), img_color):
            print("Saved result image to {}".format(template_result_path))
            return True
        else:
            print("Error saving result image to {}".format(template_result_path))
        return True
    print("Reference image '{}' NOT found in '{} with threshold '{}''".format(ref_full_path, img_full_path, threshold))
    BuiltIn.fail("Reference image was not found")
    # -------------------
    return False
# ------------------------------------------------------------------------------------------------------
# def verify_text_element(element, alt_element=None):
#     language_module_path = os.getcwd() + "\\Language Detection Modules"
#     reader = easyocr.Reader(["en"], model_storage_directory=language_module_path, download_enabled=False)
#   

language_module_paths = os.getcwd() + "\\Images"
def verify_text_element_function(element, alt_element=None):
    language_module_path = os.getcwd() + "\\Language Detection Modules"
    reader = easyocr.Reader(["en"], model_storage_directory=language_module_path, download_enabled=False)
    element_list = reader.readtext(language_module_paths + "\\screenshot.png")
    
    log.logger.info("Verifying the presence of " + element)
    found = False

    for e in element_list:
        log.logger.info(e)
        if element in e[1]:  # Check if the text is in the element
            log.logger.info("Found " + str(element))
            found = True
            break

    if not found and alt_element:
        log.logger.info(f"{element} not found, checking for {alt_element}")
        for e in element_list:
            log.logger.info(e)
            if alt_element in e[1]:  # Check if the text is in the element
                log.logger.info("Found " + str(alt_element))
                found = True
                break

    if found:
        log.logger.info(element + " found on the screen.")
        return True
    else:
        log.logger.info(str(element) + " was not found!")
        return False
# =====================================================================
def tap_element_text_in_image_functionality(element, image_name):
    """
    Function to tap a word element on the screen given the element String.
    The parameter is a String.
    """
    language_module_path = os.getcwd() + "\\Language Detection Modules"
    
    # Initialize EasyOCR reader with the model storage directory
    reader = easyocr.Reader(["en"], model_storage_directory=language_module_path, download_enabled=False)

    result_path = os.getcwd() + "\\Images\\References"
    image_path = os.path.join(result_path, image_name)

    # Read text from the image
    element_list = reader.readtext(image_path)

    logger.info(f"Attempting to tap {element}")

    box_coords = ""
    for e in element_list:
        logger.info(f"Detected text: {e[1]} at location {e[0]}")
        if element in e[1]:  # Check if the element is a substring of the recognized text
            logger.info(f"Found {element}")
            box_coords = e[0]
            break

    if not box_coords:
        logger.error(f"No element found with the name '{element}'!")
        from robot.libraries.BuiltIn import BuiltIn
        BuiltIn().fail("No element found with that name!")
        return

    logger.info(f"{element} found at coordinates {box_coords}")
    average_x = (box_coords[0][0] + box_coords[1][0]) / 2
    average_y = (box_coords[0][1] + box_coords[2][1]) / 2
    logger.info(f"Calculated tap coordinates: ({average_x}, {average_y})")
# def tap_element_text_in_image_functionality(element, image_name):
#     """
#     Function to tap a word element on the screen given the element String
#     The parameter is a String
#     """
#     language_module_path = os.getcwd() + "\\Language Detection Modules"
#     reader = easyocr.Reader(["en"], model_storage_directory=language_module_path, download_enabled=False)

#     result_path = os.getcwd() + "\\Images\\References"
#     image_path = os.path.join(result_path, image_name)
#     element_list = reader.readtext(image_path)

#     log.logger.info("Attempting to tap " + element)
#     box_coords = ""
#     for e in element_list:
#         log.logger.info(e)
#         if element in e[1]:  # Check if the element is a substring of the recognized text
#             log.logger.info("Found " + str(element))
#             box_coords = e[0]
#             break
#     if len(box_coords) == 0:
#         BuiltIn().fail("No element found with that name!")
#         return

#     log.logger.info(element + " found at coordinates " + str(box_coords))
#     average_x = (box_coords[0][0] + box_coords[1][0]) / 2
#     average_y = (box_coords[0][1] + box_coords[2][1]) / 2
#     log.logger.info(average_x, average_y)
def tap_element(element_text, display_offset_x=0, display_offset_y=0):
    """
    Taps on a given text element in a screenshot using EasyOCR.

    Parameters:
    - element_text: The text of the element to tap.
    - image_path: Path to the screenshot image where text will be searched.
    - display_offset_x: X offset for the display (if needed for multi-display setups).
    - display_offset_y: Y offset for the display (if needed for multi-display setups).

    Returns:
    - True if the element is found and tapped, False otherwise.
    """
    
    image_paths = os.getcwd() + "\\Images\\screenshot.png"
    # Check if the screenshot image exists
    if not os.path.exists(image_paths):
        log.error(f"Image not found at path: {image_paths}")
        return False

    # Initialize EasyOCR reader
    reader = easyocr.Reader(["en"])

    # Read the text from the screenshot
    element_list = reader.readtext(image_paths)

    # Log detected texts for debugging
    log.info("Attempting to tap on the text: " + element_text)

    # Search for the element in recognized text
    box_coords = []
    for e in element_list:
        detected_text = e[1]
        log.info(f"Detected text: {detected_text} at {e[0]}")
        if element_text.lower() in detected_text.lower():  # Case-insensitive match
            log.info(f"Found '{element_text}' in detected text.")
            box_coords = e[0]  # Bounding box coordinates of the text
            break

    # If text is not found, return False
    if not box_coords:
        log.info(f"'{element_text}' not found in the image.")
        return False

    # Calculate the center coordinates of the detected text box
    average_x = (box_coords[0][0] + box_coords[1][0]) / 2
    average_y = (box_coords[0][1] + box_coords[2][1]) / 2

    # Adjust coordinates based on display offset if necessary
    tap_x = average_x + display_offset_x
    tap_y = average_y + display_offset_y

    # Simulate a tap at the calculated coordinates
    log.info(f"Tapping at coordinates: ({tap_x}, {tap_y})")
    pyautogui.click(tap_x, tap_y)  # Simulate the tap using pyautogui

    return True
# ========================================================


#-------------------------------------------------------------------------------------

def launch_application():
    cwd = os.getcwd()
    
    # Define the folder and executable name
    folder_name = "High_Rtos_Win_Qt_DB_R6_11122024_93"
    exe_name = "RtosAppMain.exe"
    
    # Construct the full path to the folder
    folder_path = os.path.join(cwd, folder_name)
    
    # Check if the folder exists
    if os.path.isdir(folder_path):
        # Construct the path to the executable
        exe_path = os.path.join(folder_path, exe_name)
    
        # Check if the executable file exists
        if os.path.isfile(exe_path):
            try:
                # Run the executable silently (without showing any windows)
                subprocess.Popen(exe_path, creationflags=subprocess.CREATE_NO_WINDOW)
                print(f"Successfully ran {exe_name} silently from {folder_name}")
            except Exception as e:
                print(f"Error running {exe_name}: {e}")
        else:
            print(f"{exe_name} not found in {folder_name}.")
    else:
        print(f"{folder_name} not found in the current directory.")
    
    return False
#======================================================================================================================
def tap_element_by_reference_image(reference_image_name, confidence=0.8):
    """

    """
    image_path = os.path.join(os.getcwd(), "Images")
    image_name = "screenshot.png"
    img_full_path = os.path.join(image_path,image_name)
    
    ref_image_path = os.path.join(os.getcwd(), "Images\\references")
    reference_image_path = os.path.join(ref_image_path,reference_image_name)
    
    # Read the full image and reference image
    image = cv2.imread(img_full_path)
    template = cv2.imread(reference_image_path)

    # Convert both images to grayscale
    full_gray = cv2.cvtColor(image, cv2.COLOR_BGR2GRAY)
    reference_gray = cv2.cvtColor(template, cv2.COLOR_BGR2GRAY)

    if image is None:
        raise Exception(f"result image located at {img_full_path} can't be found or at a wrong format")

    if template is None:
        raise Exception(f"reference image located at {reference_image_path} can't be found or at a wrong format")
    
    # Perform template matching
    result = cv2.matchTemplate(full_gray, reference_gray, cv2.TM_CCOEFF_NORMED)

    # Find the coordinates of the maximum correlation value
    min_val, max_val, min_loc, max_loc = cv2.minMaxLoc(result)
    print('max_loc', max_loc)
    try:
        # Locate the image on the screen
        print(f"Image found and clicked at: {reference_image_name}")
        # location = pyautogui.locateCenterOnScreen(reference_image_name, confidence=confidence)
        location = pyautogui.locateCenterOnScreen(reference_image_path, confidence=confidence)
        print(f"Image found and clicked at: {reference_image_path}")
        if location is not None:
            # If found, click the center of the image
            pyautogui.click(location)
            print(f"Image found and clicked at: {location}")
            
        else:
            BuiltIn.fail("Error occurred while tapping")

    except Exception as e:
        BuiltIn.fail("Error occurred while tapping")
        print("Error occurred while tapping:", str(e))
        return False
    
    time.sleep(10)

# ==========================================================================================
def rtos_take_screenshot():
    """
    Takes a screenshot and saves it to the 'Images' folder within the current working directory.
    If the folder does not exist, it is created.
    
    Returns:
        str: The full path where the screenshot is saved.
    """
    try:
        # Define the destination directory and file path
        destination_dir = os.path.join(os.getcwd(), "Images")
        destination_path = os.path.join(destination_dir, "screenshot.png")
        
        # Ensure the 'Images' directory exists
        os.makedirs(destination_dir, exist_ok=True)
        
        # Take a screenshot
        screenshot = ImageGrab.grab()
        
        # Save the screenshot
        screenshot.save(destination_path)
        
        print(f"Screenshot saved at: {destination_path}")
        return destination_path
    except Exception as e:
        print(f"Error while taking screenshot: {e}")
        return None
# def rtos_take_screenshot():
    """
    Takes a screenshot and saves it to the 'Images' folder within the current working directory.
    If the folder does not exist, it is created.
    
    Returns:
        str: The full path where the screenshot is saved.
    """
    
    # """
    # Takes a screenshot and saves it to the 'Images' folder within the current working directory.
    # If the folder does not exist, it is created.
    
    # Returns:
    #     str: The full path where the screenshot is saved.
    # """
    # try:
    #     # Define the destination directory and file path
    #     # destination_dir = os.path.join(os.getcwd(), "Images")
    #     destination_dir = "Images\\screenshot.png"
        
    #     # Ensure the 'Images' directory exists
    #     # os.makedirs(destination_dir, exist_ok=True)
        
    #     # Take a screenshot
    #     with mss.mss() as sct:
    #     # Define the region to capture
    #         monitor = {"top": 150, "left": 0, "width": 1998, "height": 1154}
        
    #     # Capture the screenshot
    #         screenshot = sct.grab(monitor)
        
    #     # Save the screenshot to the specified output path
    #         mss.tools.to_png(screenshot.rgb, screenshot.size, output=destination_dir)
    #     # print(f"Screenshot saved to {destination_dir}")
    #     # screenshot = ImageGrab.grab()
        
    #     # # Save the screenshot
    #     # screenshot.save(destination_path)
        
    #     print(f"Screenshot saved at: {destination_dir}")
    #     # return destination_path
    # except Exception as e:
    #     print(f"Error while taking screenshot: {e}")
    #     return None
# rtos_take_screenshot()  

# ==========================================================================================

def screenshot():
    """
    Takes a screenshot and saves it to the 'Images' folder within the current working directory.
    If the folder does not exist, it is created.
    
    Returns:
        str: The full path where the screenshot is saved.
    """
    try:
        # Define the destination directory and file path
        destination_dir = os.path.join(os.getcwd(), "Images")
        destination_path = os.path.join(destination_dir, "screenshot.png")
        
        # Ensure the 'Images' directory exists
        os.makedirs(destination_dir, exist_ok=True)
        
        # Take a screenshot
        screenshot = ImageGrab.grab()
        
        # Save the screenshot
        screenshot.save(destination_path)
        
        print(f"Screenshot saved at: {destination_path}")
        return destination_path
    except Exception as e:
        print(f"Error while taking screenshot: {e}")
        return None
# =============================================================================
def click_on_image(image_path, confidence=0.8):
    """
    Finds an image on the screen and clicks it.
    
    :param image_path: Path to the reference image (absolute or relative path)
    :param confidence: Match confidence (default is 0.8)
    """
    try:
        # Locate the image on the screen
        location = pyautogui.locateCenterOnScreen(image_path, confidence=confidence)
        if location is not None:
            # If found, click the center of the image
            pyautogui.click(location)
            print(f"Image found and clicked at: {location}")
        else:
            print("Image not found on the screen.")
    except Exception as e:
        print(f"An error occurred: {e}")

#===========================================================================================
#  old code not used in this framework
def establish_connection():
    # Create a socket object
    client_socket = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
    # Connect to the server
    server_address = (hostname, port)
    client_socket.connect(server_address)
    # Return the client socket
    return client_socket

def get_screenshot(client_socket):
    json_request = {
        "ClickType": "5",
        "WidgetID": "Image",
        "CallbackID": "0",
        "Index": "0"
    }
    
    # Convert the JSON object to a string
    json_request_str = json.dumps(json_request)
    # Send the JSON-encoded string to the server
    client_socket.sendall(json_request_str.encode('utf-8'))
    # Optionally, receive a response from the server
    # response = client_socket.recv(1024)
    response = client_socket.recv(1024)
    print("Server response:", response.decode('utf-8'))

def element_click(client_socket):
    json_request = {
        "ClickType": "0",
        "WidgetID": "dev_home_icon_3",
        "CallbackID": "70000_78_21213",
        "Text": "0",
        "Index": "0"
    }
    # Convert the JSON object to a string
    json_request_str = json.dumps(json_request)
    # Send the JSON-encoded string to the server
    client_socket.sendall(json_request_str.encode('utf-8'))
    # Optionally, receive a response from the server
    response = client_socket.recv(1024)
    
    print("Server response:", response.decode('utf-8'))
    print("Element has been clicked")




  

    

