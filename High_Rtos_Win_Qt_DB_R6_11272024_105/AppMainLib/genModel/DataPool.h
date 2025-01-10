//Copyright (C) GM Global Technology Operations LLC 2024.
//All Rights Reserved.
//GM Confidential Restricted.
//
//Designed and Developed by Rampgroup, © 2024 People Tech Group all rights reserved.

#ifndef DATAPOOL_H
#define DATAPOOL_H

#include "BindableDataPool.h"

#include <cstdint>
// parasoft-begin-suppress AUTOSAR-M7_3_1-a 
// "Making the numeration names disambiguous, by having explicit prefix. this avoids the global namespace pollution" 

namespace gm
{
namespace datapool
{
enum eInfoId:int32_t {
        APA_BASE_ID = 0x3E8, // //1000
        APA_PARK_DRAWER_EXIT = 1001,
        APA_EXIT = 1002,
        APA_PARK_INSTRUCTION_TYPE = 1003,
        APA_WARNING_INDICATION_TYPE = 1004,
        APA_ACTIVITY_INDICATOR_DATA = 1005,
        APA_REQ_STATE = 1006,
        APA_MAX = 0x7D0 // //2000
    };
enum eInfoRtosIds:int32_t {
    RTOS_BASE_ID = 0x1F4, // //500
    RTOS_ANIMATION_ID = 0x1F5, // //501
    RTOS_NOT_IN_REVERSE_GEAR = 0x1F7, // //503
    WELCOME_ANIMATION_START = 0x1F8, // //504
    WELCOME_ANIMATION_ENABLED = 0x1F9, // //505
    APPROACH_ANIMATION_START = 0x1FA, // //506
    BRAND_ANIMATION_START = 0x1FB, // //507
    BRAND_ANIMATION_START_TIMER = 0x1FC, // //508
    RTOS_IVI_READY_CHECK = 0x1FD, // //509
    RTOS_APP_BRIGHTNESS = 0x1FE, // //510
    DATA_CAMERA_VISIBILITY = 0x1FF, // //511
    RTOS_VOLUME_KNOB_ENABLE = 512,
    RTOS_SUSD_SYS_STATE = 513,
    RTOS_ANDROID_BLOCK_FLYOUTS = 514,
    RTOS_CAMERA_VIEW_AVAILABILITY = 515,
    RTOS_PINTOSTART_SCREEN_ID = 516,
    RTOS_VIRTUALOFF_BURNER = 517,
    RTOS_SAS_REQUEST_RESPONSE = 518,
    RTOS_CAMERA_AVAILABLE_STATUS = 519,
    DATA_MFC_KEY_HANDLE = 520, // //520
    RTOS_TIME_ENABLE = 521,
    DATA_APA_AVAILABLE = 522, // //522
    DATA_SETTINGICON_STATE = 523,
    DATA_SETTINGICON_VISIBILITY = 524,
    RTOS_APA_SNACKBAR = 525, // //525
    APPROACH_ANIMATION_ACTIVE = 526,
    RTOS_END_ID = 0x384 // //900
};

extern ramp::BindableDataPool<int32_t>::Type Data_APA_BASE_ID;
extern ramp::BindableDataPool<int32_t>::Type Data_APA_PARK_DRAWER_EXIT;
extern ramp::BindableDataPool<int32_t>::Type Data_APA_EXIT;
extern ramp::BindableDataPool<int32_t>::Type Data_APA_PARK_INSTRUCTION_TYPE;
extern ramp::BindableDataPool<int32_t>::Type Data_APA_WARNING_INDICATION_TYPE;
extern ramp::BindableDataPool<int32_t>::Type Data_APA_ACTIVITY_INDICATOR_DATA;
extern ramp::BindableDataPool<int32_t>::Type Data_APA_REQ_STATE;
extern ramp::BindableDataPool<int32_t>::Type Data_APA_MAX;
extern ramp::BindableDataPool<int32_t>::Type Data_RTOS_BASE_ID;
extern ramp::BindableDataPool<int32_t>::Type Data_RTOS_ANIMATION_ID;
extern ramp::BindableDataPool<int32_t>::Type Data_RTOS_NOT_IN_REVERSE_GEAR;
extern ramp::BindableDataPool<int32_t>::Type Data_WELCOME_ANIMATION_START;
extern ramp::BindableDataPool<int32_t>::Type Data_WELCOME_ANIMATION_ENABLED;
extern ramp::BindableDataPool<int32_t>::Type Data_APPROACH_ANIMATION_START;
extern ramp::BindableDataPool<int32_t>::Type Data_BRAND_ANIMATION_START;
extern ramp::BindableDataPool<int32_t>::Type Data_BRAND_ANIMATION_START_TIMER;
extern ramp::BindableDataPool<int32_t>::Type Data_RTOS_IVI_READY_CHECK;
extern ramp::BindableDataPool<int32_t>::Type Data_RTOS_APP_BRIGHTNESS;
extern ramp::BindableDataPool<int32_t>::Type Data_DATA_CAMERA_VISIBILITY;
extern ramp::BindableDataPool<int32_t>::Type Data_RTOS_VOLUME_KNOB_ENABLE;
extern ramp::BindableDataPool<int32_t>::Type Data_RTOS_SUSD_SYS_STATE;
extern ramp::BindableDataPool<int32_t>::Type Data_RTOS_ANDROID_BLOCK_FLYOUTS;
extern ramp::BindableDataPool<int32_t>::Type Data_RTOS_CAMERA_VIEW_AVAILABILITY;
extern ramp::BindableDataPool<int32_t>::Type Data_RTOS_PINTOSTART_SCREEN_ID;
extern ramp::BindableDataPool<int32_t>::Type Data_RTOS_VIRTUALOFF_BURNER;
extern ramp::BindableDataPool<int32_t>::Type Data_RTOS_SAS_REQUEST_RESPONSE;
extern ramp::BindableDataPool<int32_t>::Type Data_RTOS_CAMERA_AVAILABLE_STATUS;
extern ramp::BindableDataPool<int32_t>::Type Data_DATA_MFC_KEY_HANDLE;
extern ramp::BindableDataPool<int32_t>::Type Data_RTOS_TIME_ENABLE;
extern ramp::BindableDataPool<int32_t>::Type Data_DATA_APA_AVAILABLE;
extern ramp::BindableDataPool<int32_t>::Type Data_DATA_SETTINGICON_STATE;
extern ramp::BindableDataPool<int32_t>::Type Data_DATA_SETTINGICON_VISIBILITY;
extern ramp::BindableDataPool<int32_t>::Type Data_RTOS_APA_SNACKBAR;
extern ramp::BindableDataPool<int32_t>::Type Data_APPROACH_ANIMATION_ACTIVE;
extern ramp::BindableDataPool<int32_t>::Type Data_RTOS_END_ID;
}//namespace datapool
}//namespace gm

// parasoft-end-suppress AUTOSAR-M7_3_1-a 
#endif // DATAPOOL_H
