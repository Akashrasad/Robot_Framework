*** Settings ***
Library    ../Rtos_launch/launch.py
Library    ../keywords/rtos_Keywords.py
Library    ../full_screen.py
Library    ../screenshot_application.py
Library    ../Batch/cmd_file.py



*** Variables ***
${build}        High_Rtos_Win_Qt_DB_R6_11272024_105


*** Test Cases ***
# Launching the Application
#     Rtos Launch Exe    ${build}
#     Sleep    24s
#     rtos_take_screenshot
#     tap_element_by_reference_image    parked.png
#     maximize_window    MainWindow
#     Sleep    2s
#     capture_window_screenshot    MainWindow
#     rtos_take_screenshot
#     Sleep    1s
Launching the Application
    Rtos Launch Exe    ${build}
    Sleep    24s
    screenshot
    tap_element_by_reference_image    parked.png
    maximize_window    MainWindow
    Sleep    2s
    capture_window_screenshot    MainWindow
Enable signal Virtual Controls
    send_signal_ecomate   VCCSLS_CtlAval    0    false
Enable Virtual Controls
    send_signal_ecomate   VCCSLS_CtlAval    0    true
    send_signal_ecomate   TrcStbScrConfig    1    false   
    send_signal_ecomate    VCCSLS_CtlAval    1    false
    send_signal_ecomate    VCPWLS_CtlAval    1    false
    send_signal_ecomate    PwrRrClsrCstSetAval    1   false 
    send_signal_ecomate    VirtCtlAuxAlrmSnsCtlAval    1    false 
    send_signal_ecomate    VirtCtlIntrCmptRelCtlAval    1    false     
    send_signal_ecomate    VCDLS_DomeLgtAval    1    false
    send_signal_ecomate    FTPP_VirtCtlHdPrkLmpsAvalAuth    1    false
    send_signal_ecomate    VCAHBS_CtlAval    1    false
    send_signal_ecomate    VCFLFS_CtlAval    1    false
    send_signal_ecomate    VCFLRS_CtlAval    1    false
    send_signal_ecomate    VCCLS_CrgLmpAval    1    false
    send_signal_ecomate    VCCLS_CrgLmpHtchAval    1    false
    send_signal_ecomate    VCCLS_CrgBedLmpAval    1    false
    send_signal_ecomate    VCCLS_CrgMirLmpAval    1    false
    send_signal_ecomate    VCTLS_CtlAval    1    false
    send_signal_ecomate    VCDLS_DomeLgtAval    1    false
    send_signal_ecomate    VCFLFS_CtlAval    1    false
    send_signal_ecomate    VCFLRS_CtlAval    1    false
    send_signal_ecomate    VCCLS_CrgLmpAval    1    false
    send_signal_ecomate    FTPP_VirtCtlHdPrkLmpsAvalAuth    1    false
    send_signal_ecomate    VCAHBS_CtlAval    1    false
    send_signal_ecomate    VCTLS_CtlAval    1    false
    send_signal_ecomate    VirtOnePedDrvCtlAval    1    false
    send_signal_ecomate    HillDscntCtlVirtSwAvl    1    false
    send_signal_ecomate    TrcStbScrConfig    3    false 
   
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

Child Safety Lock Availability
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
    send_signal_ecomate    VCCSLS_CurrSeltnVal    1    false
    verify_text_element    Off
    # send_signal_ecomate    VCCSLS_CurrSeltnVal    2    1
    # compare_screenshots_crop    Virtual_Controls/ChildSafetyLock.png    0.2    200    320    1100    1300c:\Users\AkashPrasad\Downloads\back_button.png
    verify_text_element    Turn on to
    tap_element_by_reference_image    back_button.png
    # send_signal_ecomate    VCCSLS_CtlAval    0    0

Power Window Lockout Availability
    verify_text_element    Doors & Windows
    tap_element_by_reference_image    poweWindow_lockout.png
    rtos_take_screenshot
    verify_text_element    Power Window Lockout
    verify_text_element    On
    send_signal_ecomate    VCPWLS_CurrSeltnVal    1    false
    verify_text_element    Off
    send_signal_ecomate    VCPWLS_CurrSeltnVal    2    false
    # compare_screenshots_crop    Virtual_Controls/Power_Window_Lockout.png    0.1    200    320    1100    1300
    verify_text_element    Turn on to
    tap_element_by_reference_image    cross_button.png

Power Rear Gate Height Availability
    rtos_take_screenshot
    verify_text_element    Doors & Windows
    tap_element_by_reference_image    poweWindow_lockout.png
    rtos_take_screenshot
    verify_text_element    Power Rear Gate Height
    verify_text_element    Custom
    send_signal_ecomate    PwrRrClsrCstCurrSetVal    3    false
    verify_text_element    Max Open
    send_signal_ecomate    PwrRrClsrCstCurrSetVal    2    false
    verify_text_element    Off
    send_signal_ecomate    PwrRrClsrCstCurrSetVal    1    false
    # compare_screenshots_crop    Virtual_Controls/Power_Liftgate_Height.png    0.1    150    300    1100    1270
    verify_text_element    Choose how high you
    click_on_image    cross_button.png


Glove Box Release Availability
    rtos_take_screenshot
    verify_text_element    Glove Box Release
    click_on_image    cross_button.png     

Verify HeadLights
    rtos_take_screenshot
    tap_element_by_reference_image    lights.png
    rtos_take_screenshot
    verify_text_element    Lights
    tap_element_by_reference_image    head_lights.png
    rtos_take_screenshot
    verify_text_element    Headlights
    verify_text_element    Off
    send_signal_ecomate    FTPP_HdPrkLmpsCurrSeltnValAuth    1    false
    sleep    3s
    verify_text_element    Auto
    send_signal_ecomate    FTPP_HdPrkLmpsCurrSeltnValAuth    2    false
    sleep    3s
    send_signal_ecomate    FTPP_HdPrkLmpsCurrSeltnValAuth    3    false
    sleep    3s
    verify_text_element    On
    send_signal_ecomate    FTPP_HdPrkLmpsCurrSeltnValAuth    4    false
    sleep    3s
    send_signal_ecomate    FTPP_HdPrkLmpsCurrSeltnValAuth    1    false
    tap_element    Turn Headlight Reminder On
    # compare_screenshots_crop    Virtual_Controls/Head_lights_GMC_15.png    0.2    200    320    1100    1300
    verify_text_element    Choose how and
    click_on_image    cross_button.png

Verify Dome Lights
    rtos_take_screenshot
    verify_text_element    Lights
    tap_element_by_reference_image    dome_light.png
    rtos_take_screenshot
    verify_text_element    Dome Light
    send_signal_ecomate    VCDLS_DomeLgtCurrSeltnVal    2    false
    Sleep    3s
    verify_text_element    On
    send_signal_ecomate    VCDLS_DomeLgtCurrSeltnVal    1    false
    Sleep    3s
    verify_text_element    Off
    send_signal_ecomate    VCDLS_DomeLgtCurrSeltnVal    2    false
    Sleep    3s
    # compare_screenshots_crop    Virtual_Controls/Dome_Light.png    0.2    200    320    1100    1300
    verify_text_element    Turn on for overhead,
    click_on_image    cross_button.png

Verify Auto High Beams
    rtos_take_screenshot
    verify_text_element    Lights
    ap_element_by_reference_image    auto_highBeam.png
    rtos_take_screenshot
    verify_text_element    Auto High Beams
    send_signal_ecomate    VCAHBS_CurrSeltnVal    2    false
    Sleep    3s
    verify_text_element    On
    send_signal_ecomate    VCAHBS_CurrSeltnVal    1    false
    Sleep    3s
    verify_text_element    Off
    send_signal_ecomate    VCAHBS_CurrSeltnVal    2    false
    # compare_screenshots_crop    Virtual_Controls/Auto_High_Beams.png    0.2    200    320    1100    1300
    verify_text_element    When on
    click_on_image    cross_button.png

Verify Fog Lights
    rtos_take_screenshot
    verify_text_element    Fog
    verify_text_element    Both On
    verify_text_element    Front On
    send_signal_ecomate    VCFLFS_CurrSeltnVal    1    false
    sleep    3s
    send_signal_ecomate    VCFLFS_CurrSeltnVal    2    false
    sleep    3s
    verify_text_element    Rear On
    send_signal_ecomate    VCFLRS_CurrSeltnVal    1    false
    sleep    3s
    send_signal_ecomate    VCFLFS_CurrSeltnVal    1    false
    sleep    3s
    verify_text_element    Both Off
    send_signal_ecomate    VCFLFS_CurrSeltnVal    2    false
    sleep    3s
    send_signal_ecomate    VCFLRS_CurrSeltnVal    2    false
    # compare_screenshots_crop    Virtual_Controls/Fog_Lights.png    0.2    200    320    1100    1300
    verify_text_element    Choose which fog lights to turn
    click_on_image    cross_button.png

Verify Task Lights
    rtos_take_screenshot
    verify_text_element    Lights
    tap_element_by_reference_image    task_lights.png
    rtos_take_screenshot
    verify_text_element    Task Lights
    verify_text_element    Left On
    send_signal_ecomate    VCTLS_CurrSeltnVal    1    false
    Sleep    3s
    send_signal_ecomate    VCTLS_CurrSeltnVal    2    false
    Sleep    3s
    verify_text_element    Right On
    send_signal_ecomate    VCTLS_CurrSeltnVal    3    false
    Sleep    3s
    send_signal_ecomate    VCTLS_CurrSeltnVal    4    false
    Sleep    3s
    # compare_screenshots_crop    Virtual_Controls/Task_Lights.png    0.2    200    320    1100    1300
    verify_text_element    Choose to light either one or both
    click_on_image    cross_button.png

Verify Cargo Lights
    rtos_take_screenshot
    verify_text_element    Lights
    tap_element_by_reference_image    cargo_lights.png
    rtos_take_screenshot
    verify_text_element    Cargo Lights
    verify_text_element    Main
    send_signal_ecomate    VCCLS_CrgLmpCurrSeltnVal    1    false
    sleep    2s
    send_signal_ecomate    VCCLS_CrgLmpCurrSeltnVal    2    false
    sleep    2s
    verify_text_element    Mirror
    send_signal_ecomate    VCCLS_CrgMirLmpCurrSeltnVal    1    false
    sleep    2s
    send_signal_ecomate    VCCLS_CrgMirLmpCurrSeltnVal    2    false
    sleep    2s
    verify_text_element    Pickup
    send_signal_ecomate    VCCLS_CrgBedLmpCurrSeltnVal    1    false
    sleep    2s
    send_signal_ecomate    VCCLS_CrgBedLmpCurrSeltnVal    2    false
    sleep    2s
    verify_text_element    Hitch
    send_signal_ecomate    VCCLS_CrgLmpHtchCurrSeltnVal    1    false
    sleep    2s
    send_signal_ecomate    VCCLS_CrgLmpHtchCurrSeltnVal    2    false
    sleep    2s
    # compare_screenshots_crop    Virtual_Controls/Cargo_Lights.png    0.2    200    320    1100    1300
    verify_text_element    Choose which areas
    click_on_image    cross_button.png
    click_on_image    cross_button.png

Verify Hill Descent Control
    rtos_take_screenshot
    tap_element_by_reference_image    drive_park.png
    rtos_take_screenshot
    tap_element_by_reference_image    hill_descent_control.png
    rtos_take_screenshot
    verify_text_element    Hill Descent Control
    verify_text_element    On
    send_signal_ecomate    BSIRP_HillDscntCtlStsAuth    1    false
    Sleep    3s
    verify_text_element    Off
    send_signal_ecomate    BSIRP_HillDscntCtlStsAuth    0    false
    Sleep    3s
    # compare_screenshots_crop    Virtual_Controls/Hill_Descent_Control.png    0.1    200    320    1100    1300
    verify_text_element    When on
    click_on_image    cross_button.png

Verify One-Pedal Driving
    rtos_take_screenshot
    tap_element_by_reference_image    one_pedal_driving.png
    rtos_take_screenshot
    tap_element_by_reference_image    show_on_homeScreen.png
    sleep    2s
    tap_element_by_reference_image    show_on_homeScreen.png
    verify_text_element    Off
    send_signal_ecomate    OnePedDrvCstCurrSetVal    1    false
    sleep    3s
    verify_text_element    Normal
    send_signal_ecomate    OnePedDrvCstCurrSetVal    2    false
    Sleep    3s
    # compare_screenshots_crop    Virtual_Controls/One_Pedal_Driving.png    0.2    200    320    1100    1300
    verify_text_element    When on
    click_on_image    cross_button.png

Verify Motion Sensor
    rtos_take_screenshot
    tap_element_by_reference_image     motion_sensor.png
    rtos_take_screenshot
    verify_text_element    Motion Sensor
    verify_text_element    Off
    send_signal_ecomate    AuxAlrmSnsCurrSeltnVal    1    false
    Sleep    3s
    verify_text_element    On
    send_signal_ecomate    AuxAlrmSnsCurrSeltnVal    2    1false
    Sleep    3s
    send_signal_ecomate    AuxAlrmSnsCurrSeltnVal    1    false
    Sleep    3s
    # compare_screenshots_crop    Virtual_Controls/Motion_Sensor.png    0.2    200    320    1100    1300
    verify_text_element    When on
    click_on_image    cross_button.png
Verify Traction Control
    rtos_take_screenshot
    tap_element_by_reference_image    traction_control.png
    rtos_take_screenshot
    send_signal_ecomate    TCSCustAv    1    false
    send_signal_ecomate    VehStbEnhcmntCustAv    1    false
    send_signal_ecomate    VehStbCompMdCustAv    1    false
    Sleep    5s
    verify_text_element    Traction Control Off
    send_signal_ecomate    TrcStbScrConfig    2    false
    send_signal_ecomate    TCSCurStat    1    false
    send_signal_ecomate    VehStbEnhcmntCurStat    0    false
    send_signal_ecomate    VehStbCompMdCurStat    1    false
    sleep    2s
    verify_text_element    ESC Off and Traction
    send_signal_ecomate    TCSCurStat    1    false
    send_signal_ecomate    VehStbEnhcmntCurStat    1    false
    send_signal_ecomate    VehStbCompMdCurStat    1    false
    sleep    2s
    verify_text_element    ESC On and Traction
    send_signal_ecomate    TCSCurStat    0    false
    send_signal_ecomate    VehStbEnhcmntCurStat    0    false
    send_signal_ecomate    VehStbCompMdCurStat    1    false
    sleep    2s
    verify_text_element    Competitive Mode
    send_signal_ecomate    TrcStbScrConfig    3    false
    send_signal_ecomate    TCSCurStat    1    false
    send_signal_ecomate    VehStbEnhcmntCurStat    1    false
    send_signal_ecomate    VehStbCompMdCurStat    0    false
    send_signal_ecomate    TCSCurStat    1    false
    send_signal_ecomate    VehStbEnhcmntCurStat    1    false
    send_signal_ecomate    VehStbCompMdCurStat    1    false
    Sleep    5s
    # compare_screenshots_crop    Virtual_Controls/Traction_Control.png    0.2    200    320    1100    1300
    verify_text_element    When on
    click_on_image    cross_button.png

Auto Park Assist
    rtos_take_screenshot
    tap_element_by_reference_image    Auto_park_Assist.png
    rtos_take_screenshot
    verify_text_element    Auto Park Assist
    verify_text_element    Begin
    # compare_screenshots_crop    Virtual_Controls/AutoParkAssist.png    0.1    200    320    1100    1300
    verify_text_element    Auto Park Assist maneuvers your
    click_on_image    cross_button.png

Disable Virtual Controls
    send_signal_ecomate    VCCSLS_CtlAval    0    true
  