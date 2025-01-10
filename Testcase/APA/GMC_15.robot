*** Settings ***
Library    ../Rtos_launch/launch.py
Library    ../keywords/rtos_Keywords.py
Library    ../full_screen.py
Library    ../screenshot_application.py
Library    ../Batch/cmd_file.py
Library    ../keywords/swipe_left.py
Library    ../keywords/scroll_down.py
Library    ../keywords/swipe_right.py






*** Variables ***
${build}        High_Rtos_Win_Qt_DB_R6_11272024_105


*** Test Cases ***
Launching the Application
    Rtos Launch Exe    ${build}
    Sleep    24s
    screenshot
    tap_element_by_reference_image    parked.png
    maximize_window    MainWindow
    Sleep    2s
    capture_window_screenshot    MainWindow
    scroll_down
    

SPA: Focus_Request_VCU
    #Supervised Remote Parking Focus Request: Focus_Request_VCU
    sleep    1s
    send_signal_ecomate    SuprRmtPrkFcsReq    3    false
    sleep    1s

Sanity_01_Searching_Parallel_Right
    #Supervised Remote Parking Warning Indication Request: Searching_Parallel_Right
    send_signal_ecomate    SuprRmtPrkWrnIndReq    1    false
    rtos_take_screenshot
    compare_screenshots    AutoParkAssist/Searching_Parallel_Right.png    0.4    True
    verify_text_element    Start by pulling past a parking space:
    verify_text_element    will let you know when we are in position to back in.

Sanity_02_Searching_Parallel_Left
    #Supervised Remote Parking Warning Indication Request: Searching_Parallel_Left
    send_signal_ecomate    SuprRmtPrkWrnIndReq    2    false
    rtos_take_screenshot
    compare_screenshots    AutoParkAssist/Searching_Parallel_Left.png    0.4    True
    verify_text_element    Parallel Left
    verify_text_element    Start by pulling past a parking space:
    verify_text_element    will let you know when we are in position to back in.

Sanity_03_Searching_Cross_Right
    #Supervised Remote Parking Warning Indication Request: Searching_Cross_Right
    send_signal_ecomate    SuprRmtPrkWrnIndReq    3    false
    rtos_take_screenshot
    compare_screenshots    AutoParkAssist/Searching_Cross_Right.png    0.4    True
    verify_text_element    Perpendicular Right
    verify_text_element    Start by pulling past a parking space:
    verify_text_element    will let you know when we are in position to back in.

Sanity_04_Searching_Cross_Left
    #Supervised Remote Parking Warning Indication Request: Searching_Cross_Left
    send_signal_ecomate    SuprRmtPrkWrnIndReq    4    false
    rtos_take_screenshot
    compare_screenshots    AutoParkAssist/Searching_Cross_Left.png    0.4    True
    verify_text_element    Perpendicular Left
    verify_text_element    Start by pulling past a parking space:
    verify_text_element    will let you know when we are in position to back in.

Sanity_06_Spot_Found_Parallel_Left
    #Supervised Remote Parking Warning Indication Request: Spot_Found_Parallel_Left
    send_signal_ecomate    SuprRmtPrkWrnIndReq    6    false
    rtos_take_screenshot
    compare_screenshots    AutoParkAssist/Spot_Found_Parallel_Left.png    0.4    True
    verify_text_element    Parallel Left
    verify_text_element    Stop your vehicle.
    verify_text_element    Do you want to back in to the space
    verify_text_element    see behind us?

Sanity_07_Spot_Found_Cross_Left
    #Supervised Remote Parking Warning Indication Request: Spot_Found_Cross_Left
    send_signal_ecomate    SuprRmtPrkWrnIndReq    7    false
    rtos_take_screenshot
    compare_screenshots    AutoParkAssist/Spot_Found_Cross_Left.png    0.4    True
    verify_text_element    Perpendicular Left
    verify_text_element    Stop your vehicle.
    verify_text_element    Do you want to back in to the space
    verify_text_element    see behind us?

Sanity_08_Spot_Found_Parallel_Right
    #Supervised Remote Parking Warning Indication Request: Spot_Found_Parallel_Right
    send_signal_ecomate    SuprRmtPrkWrnIndReq    8    false
    rtos_take_screenshot
    compare_screenshots    AutoParkAssist/Spot_Found_Parallel_Right.png    0.4    True
    verify_text_element    Parallel Right
    verify_text_element    Stop your vehicle.
    verify_text_element    Do you want to back in to the space
    verify_text_element    see behind us?

Sanity_09_Spot_Found_Cross_Right
    #Supervised Remote Parking Warning Indication Request: Spot_Found_Cross_Right
    send_signal_ecomate    SuprRmtPrkWrnIndReq    9    false
    rtos_take_screenshot
    compare_screenshots    AutoParkAssist/Spot_Found_Cross_Right.png    0.4    True
    verify_text_element    Perpendicular Right
    verify_text_element    Stop your vehicle.
    verify_text_element    Do you want to back in to the space
    verify_text_element    see behind us?

Sanity_15_Stop_And_R_Parallel_Left
    #Supervised Remote Parking Warning Indication Request: Stop_And_R_Parallel_Left
    send_signal_ecomate    SuprRmtPrkWrnIndReq    15    false
    rtos_take_screenshot
    compare_screenshots    AutoParkAssist/Stop_And_R_Parallel_Left.png    0.4    True
    verify_text_element    Parallel Left
    verify_text_element    Stop your vehicle.
    verify_text_element    Do you want to back in to the space
    verify_text_element    see behind us?

Sanity_16_Stop_And_R_Cross_Back_Left
    #Supervised Remote Parking Warning Indication Request: Stop_And_R_Cross_Back_Left
    send_signal_ecomate    SuprRmtPrkWrnIndReq    16    false
    rtos_take_screenshot
    compare_screenshots    AutoParkAssist/Stop_And_R_Cross_Back_Left.png    0.4    True
    verify_text_element    Perpendicular Left
    verify_text_element    Stop your vehicle.
    verify_text_element    Do you want to back in to the space
    verify_text_element    see behind us?

Sanity_18_Stop_And_R_Parallel_Right
    #Supervised Remote Parking Warning Indication Request: Stop_And_R_Parallel_Right
    send_signal_ecomate    SuprRmtPrkWrnIndReq    18    false
    rtos_take_screenshot
    compare_screenshots    AutoParkAssist/Stop_And_R_Parallel_Right.png    0.4    True
    verify_text_element    Parallel Right
    verify_text_element    Stop your vehicle.
    verify_text_element    Do you want to back in to the space
    verify_text_element    see behind us?

Sanity_19_Stop_And_R_Cross_Back_Right
    #Supervised Remote Parking Warning Indication Request: Stop_And_R_Cross_Back_Right
    send_signal_ecomate    SuprRmtPrkWrnIndReq    19    false
    rtos_take_screenshot
    compare_screenshots    AutoParkAssist/Stop_And_R_Cross_Back_Right.png    0.4    True
    verify_text_element    Perpendicular Right
    verify_text_element    Stop your vehicle.
    verify_text_element    Do you want to back in to the space
    verify_text_element    see behind us?

Sanity_21_Search_Speed_Warning
    #Supervised Remote Parking Warning Indication Request: Search_Speed_Warning
    send_signal_ecomate    SuprRmtPrkWrnIndReq    21    false
    rtos_take_screenshot
    compare_screenshots    AutoParkAssist/Search_Speed_Warning.png    0.4    True

Sanity_22_Search_Deactivated
    #Supervised Remote Parking Warning Indication Request: Search_Deactivated
    send_signal_ecomate    SuprRmtPrkWrnIndReq    22    false
    rtos_take_screenshot
    compare_screenshots    AutoParkAssist/Search_Deactivated.png    0.4    True

Sanity_26_Auto_Steering_Active
    #Supervised Remote Parking Warning Indication Request: Auto_Steering_Active
    send_signal_ecomate    SuprRmtPrkWrnIndReq    26    false
    sleep    5s
    rtos_take_screenshot
    verify_text_element    Automatic steering is on. Be prepared to brake:
    verify_text_element    It may take a few moves to complete:

Sanity_27_Auto_Parking_Active
    #Supervised Remote Parking Warning Indication Request: Auto_Parking_Active
    send_signal_ecomate    SuprRmtPrkWrnIndReq    27    false
    rtos_take_screenshot
    verify_text_element    Take your hands off the wheel and release the brake pedal:
    verify_text_element    It may take a few moves to complete.
    verify_text_element    Stay
    verify_text_element    alert.

Sanity_28_Drive_Backward
    #Supervised Remote Parking Warning Indication Request: Drive_Backward
    send_signal_ecomate    SuprRmtPrkWrnIndReq    28    false
    rtos_take_screenshot
    verify_text_element    Back up slowly
    verify_text_element    Beprepared to brake:

Sanity_29_Backward_Move
    #Supervised Remote Parking Warning Indication Request: Backward_Move
    send_signal_ecomate    SuprRmtPrkWrnIndReq    29    false
    rtos_take_screenshot
    verify_text_element    Backing up
    verify_text_element    Stay
    verify_text_element    alert:

Sanity_30_Drive_Forward
    #Supervised Remote Parking Warning Indication Request: Drive_Forward
    send_signal_ecomate    SuprRmtPrkWrnIndReq    30    false
    rtos_take_screenshot
    sleep    1s
    verify_text_element    Drive forward slowly
    verify_text_element    Beprepared to brake:

Sanity_31_Forward_Move
    #Supervised Remote Parking Warning Indication Request: Forward_Move
    send_signal_ecomate    SuprRmtPrkWrnIndReq    31    false
    rtos_take_screenshot
    verify_text_element    Driving forward
    verify_text_element    Stay
    verify_text_element    alert:

Sanity_32_Stop
    #Supervised Remote Parking Warning Indication Request: Stop
    send_signal_ecomate    SuprRmtPrkWrnIndReq    32    false
    rtos_take_screenshot
    compare_screenshots    AutoParkAssist/Stop.png    0.4    True
    verify_text_element    STOP

Sanity_33_Shifting
    #Supervised Remote Parking Warning Indication Request: Shifting
    send_signal_ecomate    SuprRmtPrkWrnIndReq    33    false
    rtos_take_screenshot
    compare_screenshots    AutoParkAssist/Shifting.png    0.4    True
    verify_text_element    Shifting gears
    verify_text_element    Stay
    verify_text_element    alert:

Sanity_34_Position_Reached
    #Supervised Remote Parking Warning Indication Request: Position_Reached
    send_signal_ecomate    SuprRmtPrkWrnIndReq    34    false
    rtos_take_screenshot
    compare_screenshots    AutoParkAssist/Position_Reached.png    0.4    True
    verify_text_element    Maneuvering complete:
    verify_text_element    Press brake to complete Auto Park Assist.

Sanity_35_Take_Control
    #Supervised Remote Parking Warning Indication Request: Take_Control
    send_signal_ecomate    SuprRmtPrkWrnIndReq    35    false
    rtos_take_screenshot
    verify_text_element    Maneuvering complete:
    verify_text_element    Press brake to complete Auto Park Assist.

Sanity_36_Parking_Complete
    #Supervised Remote Parking Warning Indication Request: Parking_Complete
    send_signal_ecomate    SuprRmtPrkWrnIndReq    36    false
    rtos_take_screenshot
    compare_screenshots    AutoParkAssist/ParkIng_Complete.png    0.4    True
    verify_text_element    Parking Complete
    verify_text_element    Press brake to resume control:

Sanity_37_Exit_Park_Complete
    #Supervised Remote Parking Warning Indication Request: Exit_Park_Complete
    send_signal_ecomate    SuprRmtPrkWrnIndReq    37    false
    rtos_take_screenshot
    compare_screenshots    AutoParkAssist/Exit_Park_Complete.png    0.4    True
    verify_text_element    Exit Park Complete
    verify_text_element    Take control.

Sanity_39_Canceled_General
    #Supervised Remote Parking Warning Indication Request: Canceled_General
    send_signal_ecomate    SuprRmtPrkWrnIndReq    39    false
    rtos_take_screenshot
    compare_screenshots    AutoParkAssist/Canceled_General.png    0.4    True
    verify_text_element    Canceled
    verify_text_element    See Owner's Manual

Sanity_40_Canceled_Moves
    #Supervised Remote Parking Warning Indication Request: Canceled_Moves
    send_signal_ecomate    SuprRmtPrkWrnIndReq    40    false
    rtos_take_screenshot
    compare_screenshots    AutoParkAssist/Canceled_Moves.png    0.4    True
    verify_text_element    Canceled
    verify_text_element    Taking too long to complete.

Sanity_41_Canceled_Speed
    #Supervised Remote Parking Warning Indication Request: Canceled_Speed
    send_signal_ecomate    SuprRmtPrkWrnIndReq    41    false
    rtos_take_screenshot
    compare_screenshots    AutoParkAssist/Canceled_Speed.png    0.4    True
    verify_text_element    Canceled
    verify_text_element    Over max
    verify_text_element    speed:

Sanity_42_Canceled_Interference
    #Supervised Remote Parking Warning Indication Request: Canceled_Interference
    send_signal_ecomate    SuprRmtPrkWrnIndReq    42    false
    rtos_take_screenshot
    compare_screenshots    AutoParkAssist/Canceled_Interference.png    0.4    True
    verify_text_element    Canceled
    verify_text_element    Driver
    verify_text_element    interference

Sanity_45_Auto_Parking_Complete
    #Supervised Remote Parking Warning Indication Request: Auto_Parking_Complete
    send_signal_ecomate    SuprRmtPrkWrnIndReq    45    false
    rtos_take_screenshot
    compare_screenshots    AutoParkAssist/Auto_Parking_Complete.png    0.4    True
    verify_text_element    Parking Complete

Sanity_48_Remote_Stay_Alert
    #Supervised Remote Parking Warning Indication Request: Remote_Stay_Alert
    send_signal_ecomate    SuprRmtPrkWrnIndReq    48    false
    rtos_take_screenshot
    verify_text_element    My driver has initiated Auto Remote Parking:
    verify_text_element    Auto steering; braking; and shifting are active:
    verify_text_element    Buckle your seatbelt and stay alert:

Sanity_49_Remote_Connecting
    #Supervised Remote Parking Warning Indication Request: Remote_Connecting
    send_signal_ecomate    SuprRmtPrkWrnIndReq    49    false
    rtos_take_screenshot
    compare_screenshots    AutoParkAssist/Remote_Connecting.png    0.4    True
    verify_text_element    Connecting to your myChevrolet app

Sanity_50_Remote_Cannot_Connect
    #Supervised Remote Parking Warning Indication Request: Remote_Cannot_Connect
    send_signal_ecomate    SuprRmtPrkWrnIndReq    50    false
    rtos_take_screenshot
    compare_screenshots    AutoParkAssist/Remote_Cannot_Connect.png    0.4    True
    verify_text_element    Unable to Connect:
    verify_text_element    Make sure your phone is handy and paired with your vehicle, the myChevrolet
    verify_text_element    mobile app is open, and you're signed in.

Sanity_52_Remote_Shift_To_Park
    #Supervised Remote Parking Warning Indication Request: Remote_Shift_To_Park
    send_signal_ecomate    SuprRmtPrkWrnIndReq    52    false
    rtos_take_screenshot
    verify_text_element    Shift to Park and exit the vehicle.
    verify_text_element    Use the myChevrolet app to supervise the vehicle as it
    verify_text_element    Stay alert:

Sanity_54_Remote_Canceled_Range
    #Supervised Remote Parking Warning Indication Request: Remote_Canceled_Range
    send_signal_ecomate    SuprRmtPrkWrnIndReq    54    false
    rtos_take_screenshot
    compare_screenshots    AutoParkAssist/Remote_Canceled_Range.png    0.4    True
    verify_text_element    Canceled
    verify_text_element    Phone is too far away from vehicle.

Sanity_55_Remote_Canceled_Supervision
    #Supervised Remote Parking Warning Indication Request: Remote_Canceled_Supervision
    send_signal_ecomate    SuprRmtPrkWrnIndReq    55    false
    rtos_take_screenshot
    compare_screenshots    AutoParkAssist/Remote_Canceled_Supervision.png    0.4    True
    verify_text_element    Canceled
    verify_text_element    Driver stopped supervising:

Sanity_58_Remote_Paused_Supervision
    #Supervised Remote Parking Warning Indication Request: Remote_Paused_Supervision
    send_signal_ecomate    SuprRmtPrkWrnIndReq    58    false
    rtos_take_screenshot
    compare_screenshots    AutoParkAssist/Remote_Paused_Supervision.png    0.4    True
    verify_text_element    Paused
    verify_text_element    Driver stopped supervising

Sanity_60_Search_Drawer_Exit
    #Supervised Remote Parking Warning Indication Request: Search_Drawer_Exit
    send_signal_ecomate    SuprRmtPrkWrnIndReq    60    false
    rtos_take_screenshot
    compare_screenshots    AutoParkAssist/Search_Drawer_Exit_icon1.png    0.4    True
    compare_screenshots    AutoParkAssist/Search_Drawer_Exit_icon2.png    0.4    True
    compare_screenshots    AutoParkAssist/Search_Drawer_Exit_icon3.png    0.4    True
    compare_screenshots    AutoParkAssist/Search_Drawer_Exit_icon4.png    0.4    True
    verify_text_element    Park
    verify_text_element    Exit Space
    verify_text_element    How would you like to exit?

Sanity_61_Search_Drawer_Park
    #Supervised Remote Parking Warning Indication Request: Search_Drawer_Park
    send_signal_ecomate    SuprRmtPrkWrnIndReq    61    false
    rtos_take_screenshot
    compare_screenshots    AutoParkAssist/Search_Drawer_Park_icon1.png    0.4    True
    compare_screenshots    AutoParkAssist/Search_Drawer_Park_icon2.png    0.4    True
    compare_screenshots    AutoParkAssist/Search_Drawer_Park_icon3.png    0.4    True
    compare_screenshots    AutoParkAssist/Search_Drawer_Park_icon4.png    0.4    True
    verify_text_element    Park
    verify_text_element    How would you like to
    verify_text_element    park?

Sanity_65_Pause_Obstruction
    #Supervised Remote Parking Warning Indication Request: Pause_Obstruction
    send_signal_ecomate    SuprRmtPrkWrnIndReq    65    false
    rtos_take_screenshot
    compare_screenshots    AutoParkAssist/Pause_Obstruction.png    0.4    True
    verify_text_element    Paused
    verify_text_element    Obstruction detected:

Sanity_66_Cancel_Obstruction
    #Supervised Remote Parking Warning Indication Request: Cancel_Obstruction
    send_signal_ecomate    SuprRmtPrkWrnIndReq    66    false
    rtos_take_screenshot
    compare_screenshots    AutoParkAssist/Cancel_Obstruction.png    0.4    True
    verify_text_element    Canceled
    verify_text_element    Obstruction still present:

Teardown
    send_signal_ecomate    SuprRmtPrkWrnIndReq    0    false
    send_signal_ecomate    SuprRmtPrkFcsReq    0    false
    sleep    1s
