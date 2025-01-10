import builtins as __builtin__
import glob
import os, sys
import json
import pickle
import time
from datetime import datetime
import logging
from pywinauto import application
import warnings
import configparser
import pyautogui



def main():
    try:
        click_image_with_delay(image_path, delay=1)
        time.sleep(2)
        sleep()
        time.sleep(2)
        click_image_with_delay(image_paths[0])
        print("Clicked on RUN")
    except Exception as e:
        print(f"An error occurred: {e}")

# Basic logging setup
logging.basicConfig(level=logging.INFO)
logger = logging.getLogger()
logger.addHandler(logging.StreamHandler())  # pass logging to console
logger.info('message')

#Changing directory to Batch folder
cwd = os.getcwd()
#os.chdir(cwd+'\\Batch')
os.chdir(cwd)


#Getting configuration values from config.ini
configParser = configparser.RawConfigParser()   
configFilePath = r'config.ini'
configParser.read(configFilePath)
simulator_Name = configParser.get('config', 'Simulator_Name')


if simulator_Name.lower()=="wecansim":
  #Change directory to WeCanSim folder. 
  sys.path.append("./WeCanSim")
  from weCanSim import *
  cwd = os.getcwd()+"/WeCanSim"
  os.chdir(cwd)
  #Access the weCanSim class
  _wecan=weCanSim()



def sleep():
    try:
        for cycle in range(2):  # Run only 2 cycles
            payload_Tx1 = []

            # Define hardcoded signal pairs for opening the door
            signal_Door_Open = [
                ("IDDAjrSwAtvM", "1"),
                ("IDDAjrSwAtv", "1")
            ]

            # Add signal pairs to payload_Tx1
            for signal_name, signal_value in signal_Door_Open:
                entry = '{"Type" : "Signal","Mode" : "HS","name" : "' + signal_name + '","Value" :"'+ signal_value +'"}'
                print("Entry ", entry)
                payload_Tx1.append(entry)
                
            # Send the first two Can signals for opening the door
            _wecan.send(payload_Tx1)
            print("Door opened")

            # Wait for 5 seconds
            time.sleep(5)

            # Define and send the third signal to close the door
            payload_Tx2 = []

            # Define hardcoded signal pairs for closing the door
            signal_Door_Close = [
                ("IDDAjrSwAtvM", "1"),
                ("IDDAjrSwAtv", "0")
            ]

            # Add signal pairs to payload_Tx2
            for signal_name, signal_value in signal_Door_Close:
                entry = '{"Type" : "Signal","Mode" : "HS","name" : "' + signal_name + '","Value" :"'+ signal_value +'"}'
                print("Entry ", entry)
                payload_Tx2.append(entry)
                print('CAN signal sent for closing the door')
                
            # Send the first two Can signals to close the door
            _wecan.send(payload_Tx2)
            print("Door closed")
            
            # Skip 95-second delay for the second cycle
            if cycle == 0:
                time.sleep(95)
    except Exception as ex:
        print("Problem occurred while sending the CAN signal using WecanSimulator")
        print(ex)



# Function to click on an image with a delay
def click_image_with_delay(image_path, delay=1):
    # Locate the image on the screen
    image_location = pyautogui.locateCenterOnScreen(image_path)
    # Check if the image is found
    if image_location is not None:
        # If found, click on the center of the image
        pyautogui.click(image_location)
        # Wait for the specified delay
        time.sleep(delay)
    else:
        print(f"Image '{image_path}' not found")

# Get a list of files in the "images" folder
# Get a list of files in the "images" folder
image_folder = r"D:\target_test_CLEA_64bit\Batch\images"
image_files = [file for file in os.listdir(image_folder) if file.endswith(('.png', '.jpg', '.jpeg', '.gif'))]
# Sort the image files based on custom order
image_files.sort(key=lambda x: ['run.png', 'acc.png', 'off.png', 'crank.png', 'propulsion.png'].index(x))
# Loop through the image files and add their paths to an array
image_paths = [os.path.join(image_folder, file) for file in image_files]

# Counter to keep track of the index of the image to be clicked next
index = 0

# Loop to continuously click on images
while index < 3:
    # Click on the image at the current index
    click_image_with_delay(image_paths[index])
    
    # Increment the index for the next iteration
    index += 1



    

