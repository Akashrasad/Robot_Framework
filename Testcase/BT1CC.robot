*** Settings ***
Library    ../Rtos_launch/launch.py
Library    ../keywords/rtos_Keywords.py
Library    ../Batch/cmd_file.py
Library    ../full_screen.py
Library    ../screenshot_application.py


*** Variables ***
${build}        High_Rtos_Win_Qt_DB_R6_11272024_105



*** Test Cases ***
# Launching the Application
#     Rtos Launch Exe    ${build}
#     Sleep    24s
#     screenshot
#     tap_element_by_reference_image    parked.png
#     maximize_window    MainWindow
#     Sleep    2s
#     capture_window_screenshot    MainWindow
#     screenshot
    # Sleep    1s


Launching the Application
    Rtos Launch Exe    ${build}
    Sleep    24s
    screenshot
    tap_element_by_reference_image    parked.png
    maximize_window    MainWindow
    Sleep    2s
    capture_window_screenshot    MainWindow
   
Verify See More Controls
    Sleep    2s
    screenshot
    # tap_at_rectangle    1858    226    1914    280
    tap_element    Controls
    screenshot
    verify_text_element    Controls
    verify_text_element    See More Controls
Verify Controls & Safety
    rtos_take_screenshot
    verify_text_element    Controls &
Enable Virtual Controls
    send_signal_ecomate    VCCSLS_CtlAval    1    3

Child Safety Lock Availability
    Screenshot
    tap_element    Controls
    rtos_take_screenshot
    tap_element_by_reference_image    see_more_controls.png
    rtos_take_screenshot
    tap_element_by_reference_image    doors&Windows.png
    rtos_take_screenshot
    verify_text_element    Doors & Windows
    tap_element_by_reference_image    child_safety_locks.png
    rtos_take_screenshot
    verify_text_element    Child Safety Locks
    verify_text_element    On
    # send_signal_ecomate    VCCSLS_CurrSeltnVal    1    1
    verify_text_element    Off
    # send_signal_ecomate    VCCSLS_CurrSeltnVal    2    1
    # compare_screenshots_crop    Virtual_Controls/ChildSafetyLock.png    0.2    200    320    1100    1300c:\Users\AkashPrasad\Downloads\back_button.png
    verify_text_element    Turn on to
    tap_element_by_reference_image    back_button.png
    # send_signal_ecomate    VCCSLS_CtlAval    0    0

Power Window Lockout Availability
    send_signal_ecomate    VCPWLS_CtlAval    1    3
    # Screenshot
    # tap_element    Controls
    # rtos_take_screenshot
    # tap_element_by_reference_image    see_more_controls.png
    # rtos_take_screenshot
    # tap_element_by_reference_image    doors&Windows.png
    rtos_take_screenshot
    verify_text_element    Doors & Windows
    tap_element_by_reference_image    poweWindow_lockout.png
    rtos_take_screenshot
    verify_text_element    Power Window Lockout
    verify_text_element    On
    # send_signal_ecomate    VCPWLS_CurrSeltnVal    1    1
    verify_text_element    Off
    # send_signal_ecomate    VCPWLS_CurrSeltnVal    2    1
    # compare_screenshots_crop    Virtual_Controls/Power_Window_Lockout.png    0.1    200    320    1100    1300
    verify_text_element    Turn on to
    tap_element_by_reference_image    cross_button.png
    send_signal_ecomate    VCPWLS_CtlAval    0    1

Power Rear Gate Height Availability
    send_signal_ecomate    PwrRrClsrCstSetAval    1    1
    Screenshot
    tap_element    Controls
    rtos_take_screenshot
    tap_element_by_reference_image    see_more_controls.png
    rtos_take_screenshot
    tap_element_by_reference_image    doors&Windows.png
    rtos_take_screenshot
    verify_text_element    Doors & Windows
    tap_element_by_reference_image    poweWindow_lockout.png
    rtos_take_screenshot
    verify_text_element    Power Rear Gate Height
    verify_text_element    Custom
    # send_signal_ecomate    PwrRrClsrCstCurrSetVal    3    1
    verify_text_element    Max Open
    # send_signal_ecomate    PwrRrClsrCstCurrSetVal    2    1
    verify_text_element    Off
    # send_signal_ecomate    PwrRrClsrCstCurrSetVal    1    1
    # compare_screenshots_crop    Virtual_Controls/Power_Liftgate_Height.png    0.1    150    300    1100    1270
    verify_text_element    Choose how high you
    click_on_image    cross_button.png
    send_signal_ecomate    PwrRrClsrCstSetAval    0    1

Glove Box Release Availability
    send_signal_ecomate    PwrRrClsrCstSetAval    1    1
    Screenshot
    tap_element    Controls
    rtos_take_screenshot
    tap_element_by_reference_image    see_more_controls.png
    rtos_take_screenshot
    tap_element_by_reference_image    doors&Windows.png
    rtos_take_screenshot
    verify_text_element    Glove Box Release
    click_on_image    cross_button.png