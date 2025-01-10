import os
import cv2
import numpy as np
import pyautogui
import base64
import time

import configparser

def screen_shot(object, data):
    status = "Fail"
    sockstatus = None
    bounds = None
    
    # Load configuration from config.properties file
    config = configparser.ConfigParser()
    config_file_path = r'D:\target_test_CLEA_64bit\Config\config.properties'
    config.read(config_file_path)
    
    # Get project name from configuration
    proj_name = config.get('CONFIG', 'DUT')
    
    if "-" in config['TestDriver']['stepDescription']:
        description = config['TestDriver']['stepDescription'].split("-")
        config['TestDriver']['stepDescription'] = description[0]
    elif not "-" in config['TestDriver']['stepDescription'] and object:
        config['TestDriver']['stepDescription'] = object
    
    path = os.path.join(os.getcwd(), config['TestDriver']['CONFIG']['screenGrabPath'], ReportUtil.currentSuiteName)
    the_dir = os.path.join(path, config['TestDriver']['stepDescription'])
    
    if not os.path.exists(the_dir):
        os.makedirs(the_dir)
        os.chmod(the_dir, 0o777)
    
    path = os.path.join(the_dir, config['TestDriver']['stepDescription'])
    
    if config['TestDriver']['stepDescription'] in path:
        config['TestDriver']['screenshotcount'] += 1
        path += "_" + str(config['TestDriver']['screenshotcount'])
    
    try:
        if object and (proj_name == "IPC" or proj_name == "CSM"):
            screen_size = config['TestDriver']['CONFIG']['screenSize']
            bounds = config['TestDriver']['UIMap'][object + "_" + screen_size]
            config['TestDriver']['logger'].info("ROI bounds " + bounds)
            sockstatus = take_screenshot(bounds)
        else:
            if not object:
                sockstatus = take_screenshot("Image")
            else:
                sockstatus = take_screenshot(bounds)
        
        decoder = base64.b64decode(sockstatus)
        with open(path + ".png", "wb") as f:
            f.write(decoder)
        
        if decoder:
            status = "Pass"
            config['TestDriver']['logger'].info("Image is created")
        
        time.sleep(0.2)
    except Exception as e:
        config['TestDriver']['logger'].error(f"Problem at capturing screenshot: {e}")
    
    return status