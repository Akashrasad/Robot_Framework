*** Settings ***
Library    ../Rtos_launch/launch.py
Library    ../keywords/rtos_Keywords.py
Library    ../Batch/cmd_file.py
Library    ../full_screen.py
Library    ../screenshot_application.py



*** Variables ***
${build}        High_Rtos_Win_Qt_DB_R6_11272024_105



*** Test Cases ***



Launching the Application
    Rtos Launch Exe    ${build}
    Sleep    24s
    screenshot
    tap_element_by_reference_image    reverse.png
    maximize_window    MainWindow
    Sleep    2s
    capture_window_screenshot    MainWindow
    screenshot
    Sleep    1s
Verify App Tray icon
    Screenshot
    tap_element_by_reference_image    app_tray.png
verify Height lights smart controls
    send_signal_ecomate    FTPP_VirtCtlHdPrkLmpsAvalAuth    1    false
    Screenshot
    tap_element_by_reference_image    Headlights_smartcontrols.png    
verify OPD smart controls
    send_signal_ecomate    VirtOnePedDrvCtlAval    1    false
    Screenshot
    tap_element_by_reference_image    OPD_smartcontrols.png  