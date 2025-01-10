import os
import pyautogui
import time
exe_path = r"C:\Users\AkashPrasad\Documents\Rtos_windows_automation\Rtos_windows_automation\High_Rtos_Win_Qt_DB_R6_11122024_93\RtosAppMain.exe"
os.startfile(exe_path)
file_path_1 = r"C:\Users\AkashPrasad\Documents\Rtos_windows_automation\Rtos_windows_automation\High_Rtos_Win_Qt_DB_R6_11122024_93\GMCals\Canyon_11inch_Rvc(Ice)-50"
time.sleep(5)
pyautogui.typewrite(file_path_1 , interval=0.1)
time.sleep(5)
pyautogui.press("tab")
time.sleep(3)
pyautogui.press("enter")
time.sleep(3)
