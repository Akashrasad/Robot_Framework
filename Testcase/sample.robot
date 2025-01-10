*** Settings ***
Library    ../Rtos_launch/launch.py
Library    ../keywords/rtos_Keywords.py
Library    ../Batch/cmd_file.py
Library    ../full_screen.py


*** Variables ***
${build}        High_Rtos_Win_Qt_DB_R6_11272024_105
${image_path}   C:/Users/AkashPrasad/Documents/Rtos_windows_automation/Rtos_windows_automation/Images/reference/controls.png

*** Test Cases ***
Launching the Application
    Rtos Launch Exe    ${build}
    Sleep    24s
    screenshot
    tap_element_by_reference_image    parked.png
    maximize_window    MainWindow
    screenshot
    Sleep    1s
    verify_image_with_reference    controls.png
    tap_element_by_reference_image    controls.png
    run_script_in_background_working    VCCSLS_CtlAval    1
    # tap_element_text_in_image_functionality    Controls    controls.png       
    # verify_text_element_function    Controls
    screenshot
    # verify_text_element    See More Controls
    tap_element_by_reference_image    see_more_controls.png
    screenshot
    tap_element_by_reference_image    doors&Windows.png
    screenshot
    tap_element_by_reference_image    child_safety_locks.png
    screenshot
    verify_text_element    Child Safety Locks
    # verify_image_with_reference    child_safety_locks_title.png
    verify_image_with_reference    off.png    
    verify_image_with_reference    on.png 
    # verify_image_with_reference    child_safety_locks_description.png
    