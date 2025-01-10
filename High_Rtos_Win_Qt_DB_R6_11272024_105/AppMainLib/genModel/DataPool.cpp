//Copyright (C) GM Global Technology Operations LLC 2024.
//All Rights Reserved.
//GM Confidential Restricted.
//
//Designed and Developed by Rampgroup, © 2024 People Tech Group all rights reserved.

#include "DataPool.h"

namespace gm
{
namespace datapool
{
// parasoft-begin-suppress MISRA2008-5_0_4_a "Parasoft has an issue with enum types"
// parasoft-begin-suppress AUTOSAR-M7_3_1-a 
// "Making the numeration names dis-ambiguous, by having explicit prefix. this avoids the global namespace pollution." 

ramp::BindableDataPool<int32_t>::Type Data_APA_BASE_ID(APA_BASE_ID);
ramp::BindableDataPool<int32_t>::Type Data_APA_PARK_DRAWER_EXIT(APA_PARK_DRAWER_EXIT);
ramp::BindableDataPool<int32_t>::Type Data_APA_EXIT(APA_EXIT);
ramp::BindableDataPool<int32_t>::Type Data_APA_PARK_INSTRUCTION_TYPE(APA_PARK_INSTRUCTION_TYPE);
ramp::BindableDataPool<int32_t>::Type Data_APA_WARNING_INDICATION_TYPE(APA_WARNING_INDICATION_TYPE);
ramp::BindableDataPool<int32_t>::Type Data_APA_ACTIVITY_INDICATOR_DATA(APA_ACTIVITY_INDICATOR_DATA);
ramp::BindableDataPool<int32_t>::Type Data_APA_REQ_STATE(APA_REQ_STATE);
ramp::BindableDataPool<int32_t>::Type Data_APA_MAX(APA_MAX);

ramp::BindableDataPool<int32_t>::Type Data_RTOS_BASE_ID(RTOS_BASE_ID);
ramp::BindableDataPool<int32_t>::Type Data_RTOS_ANIMATION_ID(RTOS_ANIMATION_ID);
ramp::BindableDataPool<int32_t>::Type Data_RTOS_NOT_IN_REVERSE_GEAR(RTOS_NOT_IN_REVERSE_GEAR);
ramp::BindableDataPool<int32_t>::Type Data_WELCOME_ANIMATION_START(WELCOME_ANIMATION_START);
ramp::BindableDataPool<int32_t>::Type Data_WELCOME_ANIMATION_ENABLED(WELCOME_ANIMATION_ENABLED);
ramp::BindableDataPool<int32_t>::Type Data_APPROACH_ANIMATION_START(APPROACH_ANIMATION_START);
ramp::BindableDataPool<int32_t>::Type Data_BRAND_ANIMATION_START(BRAND_ANIMATION_START);
ramp::BindableDataPool<int32_t>::Type Data_BRAND_ANIMATION_START_TIMER(BRAND_ANIMATION_START_TIMER);
ramp::BindableDataPool<int32_t>::Type Data_RTOS_IVI_READY_CHECK(RTOS_IVI_READY_CHECK);
ramp::BindableDataPool<int32_t>::Type Data_RTOS_APP_BRIGHTNESS(RTOS_APP_BRIGHTNESS);
ramp::BindableDataPool<int32_t>::Type Data_DATA_CAMERA_VISIBILITY(DATA_CAMERA_VISIBILITY);
ramp::BindableDataPool<int32_t>::Type Data_RTOS_VOLUME_KNOB_ENABLE(RTOS_VOLUME_KNOB_ENABLE);
ramp::BindableDataPool<int32_t>::Type Data_RTOS_SUSD_SYS_STATE(RTOS_SUSD_SYS_STATE);
ramp::BindableDataPool<int32_t>::Type Data_RTOS_ANDROID_BLOCK_FLYOUTS(RTOS_ANDROID_BLOCK_FLYOUTS);
ramp::BindableDataPool<int32_t>::Type Data_RTOS_CAMERA_VIEW_AVAILABILITY(RTOS_CAMERA_VIEW_AVAILABILITY);
ramp::BindableDataPool<int32_t>::Type Data_RTOS_PINTOSTART_SCREEN_ID(RTOS_PINTOSTART_SCREEN_ID);
ramp::BindableDataPool<int32_t>::Type Data_RTOS_VIRTUALOFF_BURNER(RTOS_VIRTUALOFF_BURNER);
ramp::BindableDataPool<int32_t>::Type Data_RTOS_SAS_REQUEST_RESPONSE(RTOS_SAS_REQUEST_RESPONSE);
ramp::BindableDataPool<int32_t>::Type Data_RTOS_CAMERA_AVAILABLE_STATUS(RTOS_CAMERA_AVAILABLE_STATUS);
ramp::BindableDataPool<int32_t>::Type Data_DATA_MFC_KEY_HANDLE(DATA_MFC_KEY_HANDLE);
ramp::BindableDataPool<int32_t>::Type Data_RTOS_TIME_ENABLE(RTOS_TIME_ENABLE);
ramp::BindableDataPool<int32_t>::Type Data_DATA_APA_AVAILABLE(DATA_APA_AVAILABLE);
ramp::BindableDataPool<int32_t>::Type Data_DATA_SETTINGICON_STATE(DATA_SETTINGICON_STATE);
ramp::BindableDataPool<int32_t>::Type Data_DATA_SETTINGICON_VISIBILITY(DATA_SETTINGICON_VISIBILITY);
ramp::BindableDataPool<int32_t>::Type Data_RTOS_APA_SNACKBAR(RTOS_APA_SNACKBAR);
ramp::BindableDataPool<int32_t>::Type Data_APPROACH_ANIMATION_ACTIVE(APPROACH_ANIMATION_ACTIVE);
ramp::BindableDataPool<int32_t>::Type Data_RTOS_END_ID(RTOS_END_ID);

// parasoft-end-suppress AUTOSAR-M7_3_1-a 
// parasoft-end-suppress MISRA2008-5_0_4_a "Parasoft has an issue with enum types"

}//namespace datapool
}//namespace gm
