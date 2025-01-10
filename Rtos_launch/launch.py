import os,subprocess
import time
import win32gui
import pyautogui
import win32con
import win32api
import configparser
import platform
# Define the content for the HmicSettings.ini file
# path="D:/New_folder_windows/HighMid_RtosApps_Win_Qt_121/Config.xml"
Build_name="High_Rtos_Win_Qt_DB_R6_11272024_105"
path=os.getcwd()+"\\"+Build_name+"\\Config.xml"
hmic_ini = path.replace('\\', '/')

# text_to_send = r"D:\New_folder_windows\HighMid_RtosApps_Win_Qt_121\GMCals\C223(Bev)-16"
# text_to_send = os.getcwd()+"\\"+Build_name+"\\GMCals\\BT1CC(Bev)-5\\BT1CC(Bev)_8Inch-13"
text_to_send = os.getcwd()+"\\"+Build_name+"\\GMCals\\S233(Bev)-34"
# cals_path = os.getcwd()+"\\"+Build_name+"\\GMCals\\C223(Bev)-16"
cals_path = text_to_send
# file_path = r"D:\New_folder_windows\HighMid_RtosApps_Win_Qt_121\HmicSettings.ini"
file_path = os.getcwd()+"\\"+Build_name+"\\HmicSettings.ini"

# exe_paths=r"D:\New_folder_windows\HighMid_RtosApps_Win_Qt_121\RtosAppMain.exe"
exe_paths= os.getcwd()+"\\"+Build_name+"\\RtosAppMain.exe"
config = configparser.ConfigParser()

# cal="D:/New_folder_windows/HighMid_RtosApps_Win_Qt/GMCals/BT1CC(Bev)-5/BT1CC(Bev)_8Inch-13"
def create_HmicSettingsini():
    ini_content = f"""[General]
    HmicSourcePath={hmic_ini}"""

    # Define the file path for the HmicSettings.ini file


    # Write the content to the file
    with open(file_path, "w") as f:
        f.write(ini_content)

    print(f"File '{file_path}' created with the specified content.")
# ---------

def edit_files_ini():

    my_list=["HmicSettings.ini","RtosAppMain.ini"]
    for file in my_list:
        if file == "HmicSettings.ini":
            HmicSettings_file=os.getcwd()+"\\"+file
            print("file::",HmicSettings_file)
            modified_path = hmic_ini
            print("modified_path:",modified_path)            
            config.read(HmicSettings_file)
            config.set('General', 'HmicSourcePath', modified_path)
            with open(HmicSettings_file, 'w') as config_file:
                config.write(config_file)
        elif file == "RtosAppMain.ini":
            RtosAppMain_file=os.getcwd()+"\\"+file
            print("file::",RtosAppMain_file)
            modified_path2 = cals_path.replace('\\', '/')
            print("modified_path2:",modified_path2)            
            config.read(RtosAppMain_file)
            config.set('General', 'CalibrationFolder', modified_path2)
            with open(RtosAppMain_file, 'w') as config_file2:
                config.write(config_file2)



# ---------
def rtos_launch_Exe(build):
    create_HmicSettingsini()
    edit_files_ini()
    # subprocess.run(['start', 'cmd', '/k', 'call', exe_paths], shell=True)
    if platform.system() == 'Windows':
        # subprocess.Popen(exe_paths, shell=True)
        # subprocess.Popen(['start', '/b', exe_paths], shell=True)
        subprocess.Popen([exe_paths], creationflags=subprocess.CREATE_NEW_CONSOLE)
    else:
        subprocess.Popen(['xterm', '-e', exe_paths])
    time.sleep(5)


    window_title = 'Open Calibration Folder'
    hwnd = win32gui.FindWindow(None, window_title)
    
    if hwnd:
        # Restore and maximize the window
        win32gui.ShowWindow(hwnd, win32con.SW_RESTORE)
        win32gui.SetForegroundWindow(hwnd)
        win32gui.ShowWindow(hwnd, win32con.SW_MAXIMIZE)
    else:
        print(f"Window with title '{window_title}' not found.")
    
    # time.sleep(5)  # Give some time for the window to maximize
    
    # Click on a specific location (adjust the coordinates as needed)
    # pyautogui.click(590, 540)
    
    # time.sleep(3)
    
    # Send text to the window

    pyautogui.typewrite(text_to_send)
    time.sleep(1)
    button_element_handle = win32gui.FindWindowEx(hwnd, 0, 'Button', None)
    
    # Click on the button
    win32api.PostMessage(button_element_handle, win32con.BM_CLICK, 0, 0)


# rtos_launch_Exe()
