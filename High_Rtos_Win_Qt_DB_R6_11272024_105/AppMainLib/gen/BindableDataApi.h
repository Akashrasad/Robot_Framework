// Copyright (C) GM Global Technology Operations LLC 2024.
// All Rights Reserved.
// GM Confidential Restricted.
// 
// Designed and Developed by Rampgroup, © 2024 People Tech Group all rights reserved.

#ifndef BINDABLEDATAAPI_H
#define BINDABLEDATAAPI_H

#include "APA_CustomDataPool.h"
#include "Bindable.h"
#include "Camera_CustomDataPool.h"
#include "DataPool.h"
#include "Hvac_CustomDataPool.h"
#include "RTOS_CustomDataPool.h"
#include "RTOS_InternalData.h"
#include "RTOS_LocalDataPool.h"
#include "VC_CustomDataPool.h"
#include <string>


#ifdef __QNX__
#define DECL_DLL_SPEC __attribute__((__visibility__("default")))
#else
#define DECL_DLL_SPEC __declspec(dllexport)
#endif // __QNX__
namespace gm
{
namespace csm
{


static const std::array<::Bindable<bool>*, 304> mBindables_bool
{
    {
        reinterpret_cast<::Bindable<bool>*>(&gm::csm::APA_CAMERA_SCREENS_VISIBILITY),
    reinterpret_cast<::Bindable<bool>*>(&gm::csm::APA_CANCELED_VISIBILITY_INTERNAL),
    reinterpret_cast<::Bindable<bool>*>(&gm::csm::APA_EXIT_PARK_DRAWER_VISIBILITY_INTERNAL),
    reinterpret_cast<::Bindable<bool>*>(&gm::csm::APA_MANUER_PROGRESSBAR_AMBER_VISIBILITY_INTERNAL),
    reinterpret_cast<::Bindable<bool>*>(&gm::csm::APA_MANUER_PROGRESSBAR_GREEN_VISIBILITY_INTERNAL),
    reinterpret_cast<::Bindable<bool>*>(&gm::csm::Camera_RVC_PEDESTRIAN_VISIBILITY),
    reinterpret_cast<::Bindable<bool>*>(&gm::csm::Camera_VPM_PEDESTRIAN_VISIBILITY),
    reinterpret_cast<::Bindable<bool>*>(&gm::csm::DATA_APA_ISIN_CAMERA_SCREENS),
    reinterpret_cast<::Bindable<bool>*>(&gm::csm::DATA_APA_PEREPENDICULAR_EXIT_FLAG),
    reinterpret_cast<::Bindable<bool>*>(&gm::csm::DATA_MANUEAR_VISIBILITY),
    reinterpret_cast<::Bindable<bool>*>(&gm::csm::DATA_MFC_KEY_ENABLE),
    reinterpret_cast<::Bindable<bool>*>(&gm::csm::DATA_STATEANIMATION_STATUS),
    reinterpret_cast<::Bindable<bool>*>(&gm::csm::Data_APA_ACTIVE_STATUS),
    reinterpret_cast<::Bindable<bool>*>(&gm::csm::Data_APA_AUTO_STEERING_ICON_VISIBILITY),
    reinterpret_cast<::Bindable<bool>*>(&gm::csm::Data_APA_CAMERA_ERROR_ICON_VISIBILITY),
    reinterpret_cast<::Bindable<bool>*>(&gm::csm::Data_APA_CAMERA_VISIBILITY_UPDATE),
    reinterpret_cast<::Bindable<bool>*>(&gm::csm::Data_APA_SPOT_SELENT_KEEP_LKNG_BUTTON_VISIBILITY),
    reinterpret_cast<::Bindable<bool>*>(&gm::csm::Data_APA_SPOT_SELENT_REMOTE_BUTTON_VISIBILITY),
    reinterpret_cast<::Bindable<bool>*>(&gm::csm::Data_APA_SPOT_SELENT_YES_BUTTON_VISIBILITY),
    reinterpret_cast<::Bindable<bool>*>(&gm::csm::Data_APA_ULTRA_CRUISE_SNACK_BAR_REQUEST),
    reinterpret_cast<::Bindable<bool>*>(&gm::csm::Data_APA_UNABLE_EXIT_VISIBILITY),
    reinterpret_cast<::Bindable<bool>*>(&gm::csm::Data_APA_UNABLE_TRY_AGAIN_VISIBILITY),
    reinterpret_cast<::Bindable<bool>*>(&gm::csm::Data_APA_VISIBILITY_FROM_VC),
    reinterpret_cast<::Bindable<bool>*>(&gm::csm::Data_Animation_Status),
    reinterpret_cast<::Bindable<bool>*>(&gm::csm::Data_BRIGHTNESS_UPDATE),
    reinterpret_cast<::Bindable<bool>*>(&gm::csm::Data_CAL_VC_CAMERA_ENABLED),
    reinterpret_cast<::Bindable<bool>*>(&gm::csm::Data_CAMERA_ACTIVE_STATUS),
    reinterpret_cast<::Bindable<bool>*>(&gm::csm::Data_CAMERA_CARGO_BED_VISIBILTY),
    reinterpret_cast<::Bindable<bool>*>(&gm::csm::Data_CAMERA_VISIBLE),
    reinterpret_cast<::Bindable<bool>*>(&gm::csm::Data_CARGO_CAMERA_AVAILABILITY),
    reinterpret_cast<::Bindable<bool>*>(&gm::csm::Data_Close_Button_Visibility),
    reinterpret_cast<::Bindable<bool>*>(&gm::csm::Data_ENABLE_BZSA_OPTIONS),
    reinterpret_cast<::Bindable<bool>*>(&gm::csm::Data_ENABLE_DRIVE_TITLE),
    reinterpret_cast<::Bindable<bool>*>(&gm::csm::Data_ENABLE_LCA_OPTIONS),
    reinterpret_cast<::Bindable<bool>*>(&gm::csm::Data_Exit_Button_Visibility),
    reinterpret_cast<::Bindable<bool>*>(&gm::csm::Data_Extend_Snackbar_Availability_Flag),
    reinterpret_cast<::Bindable<bool>*>(&gm::csm::Data_FACTORY_RESET),
    reinterpret_cast<::Bindable<bool>*>(&gm::csm::Data_FRONT_CAMERA_AVAILABILITY),
    reinterpret_cast<::Bindable<bool>*>(&gm::csm::Data_HMI_INTERFACE_UNINIT),
    reinterpret_cast<::Bindable<bool>*>(&gm::csm::Data_HVAC_AIRCONDITION_HEAT_VISIBLE),
    reinterpret_cast<::Bindable<bool>*>(&gm::csm::Data_HVAC_AIRCONDITION_ONLY_VISIBLE),
    reinterpret_cast<::Bindable<bool>*>(&gm::csm::Data_HVAC_AIR_DIS_AUTO_DIVIDER_VISIBILITY),
    reinterpret_cast<::Bindable<bool>*>(&gm::csm::Data_HVAC_AIR_DIS_AUTO_VISIBILITY),
    reinterpret_cast<::Bindable<bool>*>(&gm::csm::Data_HVAC_AUTO_AIRDIR_FANSPEED_VISIBLITY),
    reinterpret_cast<::Bindable<bool>*>(&gm::csm::Data_HVAC_AUTO_AIRDIR_VISIBLITY),
    reinterpret_cast<::Bindable<bool>*>(&gm::csm::Data_HVAC_AUTO_FANSPEED_VISIBLITY),
    reinterpret_cast<::Bindable<bool>*>(&gm::csm::Data_HVAC_AUTO_FANSPEED_VISIBLITY_SINGLEZONE),
    reinterpret_cast<::Bindable<bool>*>(&gm::csm::Data_HVAC_AUTO_LBL_VISIBILITY),
    reinterpret_cast<::Bindable<bool>*>(&gm::csm::Data_HVAC_BLOCK_FLYOUTS),
    reinterpret_cast<::Bindable<bool>*>(&gm::csm::Data_HVAC_COOL_SEAT_VISIBLE),
    reinterpret_cast<::Bindable<bool>*>(&gm::csm::Data_HVAC_FANNUMBER_VISIBLITY),
    reinterpret_cast<::Bindable<bool>*>(&gm::csm::Data_HVAC_FRONT_POWER_STATE),
    reinterpret_cast<::Bindable<bool>*>(&gm::csm::Data_HVAC_FRONT_SYNC_ALL_INDICATION),
    reinterpret_cast<::Bindable<bool>*>(&gm::csm::Data_HVAC_LAUNCHER_ICON_VISIBILITY),
    reinterpret_cast<::Bindable<bool>*>(&gm::csm::Data_HVAC_REAR_VISIBILITY),
    reinterpret_cast<::Bindable<bool>*>(&gm::csm::Data_HVAC_SEAT_BOTTOM_BAR_VISIBILITY),
    reinterpret_cast<::Bindable<bool>*>(&gm::csm::Data_HVAC_SIZGLE_ZONE_AUTO_VISIBILITY),
    reinterpret_cast<::Bindable<bool>*>(&gm::csm::Data_HVAC_SIZGLE_ZONE_FAN_SPEED__DIVIDER_VISIBILITY),
    reinterpret_cast<::Bindable<bool>*>(&gm::csm::Data_ICS_SANITY_RESULT),
    reinterpret_cast<::Bindable<bool>*>(&gm::csm::Data_ICS_TIME_FORMAT_VISIBILITY),
    reinterpret_cast<::Bindable<bool>*>(&gm::csm::Data_INCORRECT_PASSCODE_VISIBILITY),
    reinterpret_cast<::Bindable<bool>*>(&gm::csm::Data_IS_FULL_BG_IMAGE_ENABLED),
    reinterpret_cast<::Bindable<bool>*>(&gm::csm::Data_IS_HALF_BG_IMAGE_ENABLED),
    reinterpret_cast<::Bindable<bool>*>(&gm::csm::Data_IS_OPD_SCREEN_DISPLAYED),
    reinterpret_cast<::Bindable<bool>*>(&gm::csm::Data_IS_OVERLAY),
    reinterpret_cast<::Bindable<bool>*>(&gm::csm::Data_IS_OVERLAY_ENABLE),
    reinterpret_cast<::Bindable<bool>*>(&gm::csm::Data_IS_PPM_SUPPORTED),
    reinterpret_cast<::Bindable<bool>*>(&gm::csm::Data_KEYBOARD_AVAILABILITY_STATUS),
    reinterpret_cast<::Bindable<bool>*>(&gm::csm::Data_KEYBOARD_BACKSPACE),
    reinterpret_cast<::Bindable<bool>*>(&gm::csm::Data_KEYBOARD_BACKSPACE_CAL),
    reinterpret_cast<::Bindable<bool>*>(&gm::csm::Data_KEYBOARD_DISABLE_CAL),
    reinterpret_cast<::Bindable<bool>*>(&gm::csm::Data_KEYBOARD_ENTER),
    reinterpret_cast<::Bindable<bool>*>(&gm::csm::Data_KEYBOARD_ENTER_CAL),
    reinterpret_cast<::Bindable<bool>*>(&gm::csm::Data_KEYBOARD_HIDE),
    reinterpret_cast<::Bindable<bool>*>(&gm::csm::Data_KEYBOARD_HIDE_CAL),
    reinterpret_cast<::Bindable<bool>*>(&gm::csm::Data_Left_RCTA_VPM_Visibility),
    reinterpret_cast<::Bindable<bool>*>(&gm::csm::Data_Left_RCTA_Visibility),
    reinterpret_cast<::Bindable<bool>*>(&gm::csm::Data_MFC_PPM_DISABLE),
    reinterpret_cast<::Bindable<bool>*>(&gm::csm::Data_NO_IVI_STATE_NO_VISIBILITY),
    reinterpret_cast<::Bindable<bool>*>(&gm::csm::Data_OBSTRUCTIONFOUND_Side_Visibility_2),
    reinterpret_cast<::Bindable<bool>*>(&gm::csm::Data_OBSTRUCTIONFOUND_Visibility_1),
    reinterpret_cast<::Bindable<bool>*>(&gm::csm::Data_OBSTRUCTIONFOUND_Visibility_2),
    reinterpret_cast<::Bindable<bool>*>(&gm::csm::Data_OBSTRUCTIONFOUND_Visibility_3),
    reinterpret_cast<::Bindable<bool>*>(&gm::csm::Data_OBSTRUCTIONFOUND_Visibility_4),
    reinterpret_cast<::Bindable<bool>*>(&gm::csm::Data_PERSISTENT_CONTROL_HEADLIGHTS_VISIBILITY),
    reinterpret_cast<::Bindable<bool>*>(&gm::csm::Data_PERSISTENT_CONTROL_LANEKEEPASSIST_VISIBILITY),
    reinterpret_cast<::Bindable<bool>*>(&gm::csm::Data_PERSISTENT_CONTROL_SPEEDLIMITER_VISIBILITY),
    reinterpret_cast<::Bindable<bool>*>(&gm::csm::Data_PINTOSTART_BRAND_TEXT_VISIBILITY),
    reinterpret_cast<::Bindable<bool>*>(&gm::csm::Data_PINTOSTART_VISIBILITY),
    reinterpret_cast<::Bindable<bool>*>(&gm::csm::Data_Persistent_Bg_Visibility),
    reinterpret_cast<::Bindable<bool>*>(&gm::csm::Data_Persistent_Controls_Icon_Visibility),
    reinterpret_cast<::Bindable<bool>*>(&gm::csm::Data_REAR_CAMERA_AVAILABILITY),
    reinterpret_cast<::Bindable<bool>*>(&gm::csm::Data_RTC_ALIGNMENT_DRIVING_STRAIGHT),
    reinterpret_cast<::Bindable<bool>*>(&gm::csm::Data_RTC_ALIGNMENT_DRIVING_WITHIN_SPEED_LIMIT),
    reinterpret_cast<::Bindable<bool>*>(&gm::csm::Data_RTOS_APPS_VISIBILITY),
    reinterpret_cast<::Bindable<bool>*>(&gm::csm::Data_RVC_ENABLED),
    reinterpret_cast<::Bindable<bool>*>(&gm::csm::Data_Rear_Text_Visibility),
    reinterpret_cast<::Bindable<bool>*>(&gm::csm::Data_Right_RCTA_VPM_Visibility),
    reinterpret_cast<::Bindable<bool>*>(&gm::csm::Data_Right_RCTA_Visibility),
    reinterpret_cast<::Bindable<bool>*>(&gm::csm::Data_SHOW_DISABLE_KEYBOARD),
    reinterpret_cast<::Bindable<bool>*>(&gm::csm::Data_SMART_CONTROLS_EXPANDED_ICON_ENABLED),
    reinterpret_cast<::Bindable<bool>*>(&gm::csm::Data_SMART_CONTROLS_EXPANDED_ICON_VISIBILITY),
    reinterpret_cast<::Bindable<bool>*>(&gm::csm::Data_SVR_APPICON_VISIBILITY),
    reinterpret_cast<::Bindable<bool>*>(&gm::csm::Data_TIMER_EXPIRED_VISIBILITY),
    reinterpret_cast<::Bindable<bool>*>(&gm::csm::Data_TOOMANY_ATTEMPTS_VISIBILITY),
    reinterpret_cast<::Bindable<bool>*>(&gm::csm::Data_TRAILER_CAMERA_AVAILABILITY),
    reinterpret_cast<::Bindable<bool>*>(&gm::csm::Data_UPA_DIDS_ENABLED),
    reinterpret_cast<::Bindable<bool>*>(&gm::csm::Data_UPA_DID_REQ_VISIBILITY),
    reinterpret_cast<::Bindable<bool>*>(&gm::csm::Data_UPA_NO_VISIBILITY),
    reinterpret_cast<::Bindable<bool>*>(&gm::csm::Data_VIRTUALCONTROLS_DRIVE_MODE),
    reinterpret_cast<::Bindable<bool>*>(&gm::csm::Data_VIRTUALCONTROLS_PARKASSIST_ON_OFF_CUSTOM_STATUS),
    reinterpret_cast<::Bindable<bool>*>(&gm::csm::Data_VIRTUALCONTROLS_PARKASSIST_SELECTIONVALUE_SIGNAL),
    reinterpret_cast<::Bindable<bool>*>(&gm::csm::Data_VIRTUALCONTROLS_POWERLIFTGATE_CONTROL_AVAILABILITY_SIGNAL),
    reinterpret_cast<::Bindable<bool>*>(&gm::csm::Data_VIRTUALCONTROLS_UGDO_MISMATCH_CHECK),
    reinterpret_cast<::Bindable<bool>*>(&gm::csm::Data_VIRTUAL_CONTROLS_APAUNAVAILABLE_AT_CURRENTSPEED_SNACKBAR),
    reinterpret_cast<::Bindable<bool>*>(&gm::csm::Data_VIRTUAL_CONTROLS_AUTOPARKASSISTUNAVAILABLE_SNACKBAR),
    reinterpret_cast<::Bindable<bool>*>(&gm::csm::Data_VPM_ACP_MODULE_VISBILITY),
    reinterpret_cast<::Bindable<bool>*>(&gm::csm::Data_VPM_AVAIL_FOR_SURROUND_VIEW),
    reinterpret_cast<::Bindable<bool>*>(&gm::csm::Data_VPM_AXN),
    reinterpret_cast<::Bindable<bool>*>(&gm::csm::Data_VPM_BED_HITCH),
    reinterpret_cast<::Bindable<bool>*>(&gm::csm::Data_VPM_BOWL),
    reinterpret_cast<::Bindable<bool>*>(&gm::csm::Data_VPM_CAMERA_BOWL_BG_VISIBILITY),
    reinterpret_cast<::Bindable<bool>*>(&gm::csm::Data_VPM_CAMERA_ERROR_ICON_VISIBILITY),
    reinterpret_cast<::Bindable<bool>*>(&gm::csm::Data_VPM_CAMERA_UNAVAILBLE_SNACKBAR_VISIBILITY),
    reinterpret_cast<::Bindable<bool>*>(&gm::csm::Data_VPM_CAMERA_VIDEO_DISPLAY_STATUS),
    reinterpret_cast<::Bindable<bool>*>(&gm::csm::Data_VPM_CARGOBEDLAMP_SELECTED),
    reinterpret_cast<::Bindable<bool>*>(&gm::csm::Data_VPM_CARGOBED_PRSCNS_VISIBILITY),
    reinterpret_cast<::Bindable<bool>*>(&gm::csm::Data_VPM_CARGO_BED),
    reinterpret_cast<::Bindable<bool>*>(&gm::csm::Data_VPM_CARGO_BED_ENABLED),
    reinterpret_cast<::Bindable<bool>*>(&gm::csm::Data_VPM_CARGO_BED_PRESENCE),
    reinterpret_cast<::Bindable<bool>*>(&gm::csm::Data_VPM_CURB_ENABLED),
    reinterpret_cast<::Bindable<bool>*>(&gm::csm::Data_VPM_CURB_OVERHEAD_ENABLED),
    reinterpret_cast<::Bindable<bool>*>(&gm::csm::Data_VPM_CURB_OVERHEAD_PRESENCE),
    reinterpret_cast<::Bindable<bool>*>(&gm::csm::Data_VPM_CURB_PRESENCE),
    reinterpret_cast<::Bindable<bool>*>(&gm::csm::Data_VPM_CURB_VIEW),
    reinterpret_cast<::Bindable<bool>*>(&gm::csm::Data_VPM_DISPLAY_FRONT_ON),
    reinterpret_cast<::Bindable<bool>*>(&gm::csm::Data_VPM_DISPLAY_TOW_VIDEO_ON),
    reinterpret_cast<::Bindable<bool>*>(&gm::csm::Data_VPM_DYNAMIC_GUIDELINES_ACTIVE),
    reinterpret_cast<::Bindable<bool>*>(&gm::csm::Data_VPM_DYNAMIC_GUIDELINES_VWG_STATUS),
    reinterpret_cast<::Bindable<bool>*>(&gm::csm::Data_VPM_DYNAMIC_SURROUND_ACTIVE),
    reinterpret_cast<::Bindable<bool>*>(&gm::csm::Data_VPM_FRONTVIEW_ENABLED),
    reinterpret_cast<::Bindable<bool>*>(&gm::csm::Data_VPM_FRONT_OVERHEAD),
    reinterpret_cast<::Bindable<bool>*>(&gm::csm::Data_VPM_FRONT_PERSPECTIVE),
    reinterpret_cast<::Bindable<bool>*>(&gm::csm::Data_VPM_INVISIBLE_TRAILER),
    reinterpret_cast<::Bindable<bool>*>(&gm::csm::Data_VPM_OBSTRUCTIONFOUND_Side_Visibility_2),
    reinterpret_cast<::Bindable<bool>*>(&gm::csm::Data_VPM_OBSTRUCTIONFOUND_Visibility_1),
    reinterpret_cast<::Bindable<bool>*>(&gm::csm::Data_VPM_OBSTRUCTIONFOUND_Visibility_2),
    reinterpret_cast<::Bindable<bool>*>(&gm::csm::Data_VPM_OBSTRUCTIONFOUND_Visibility_3),
    reinterpret_cast<::Bindable<bool>*>(&gm::csm::Data_VPM_OBSTRUCTIONFOUND_Visibility_4),
    reinterpret_cast<::Bindable<bool>*>(&gm::csm::Data_VPM_REAR_HITCH),
    reinterpret_cast<::Bindable<bool>*>(&gm::csm::Data_VPM_REAR_OVERHEAD),
    reinterpret_cast<::Bindable<bool>*>(&gm::csm::Data_VPM_REAR_PEDESTRAIN_AMBER_VISIBILITY),
    reinterpret_cast<::Bindable<bool>*>(&gm::csm::Data_VPM_REAR_PEDESTRAIN_AMBER_VPM_VISIBILITY),
    reinterpret_cast<::Bindable<bool>*>(&gm::csm::Data_VPM_REAR_PEDESTRAIN_RED_VISIBILITY),
    reinterpret_cast<::Bindable<bool>*>(&gm::csm::Data_VPM_REAR_PEDESTRAIN_RED_VPM_VISIBILITY),
    reinterpret_cast<::Bindable<bool>*>(&gm::csm::Data_VPM_REAR_PERSPECTIVE),
    reinterpret_cast<::Bindable<bool>*>(&gm::csm::Data_VPM_REQ_UPA_DID_IO_READ),
    reinterpret_cast<::Bindable<bool>*>(&gm::csm::Data_VPM_REQ_UPA_DID_IO_SHORT_TERM_ADJUSTMENT),
    reinterpret_cast<::Bindable<bool>*>(&gm::csm::Data_VPM_RES_BOWL_VISIBILITY),
    reinterpret_cast<::Bindable<bool>*>(&gm::csm::Data_VPM_RES_FRONTOVERHEAD_VISIBILITY),
    reinterpret_cast<::Bindable<bool>*>(&gm::csm::Data_VPM_RES_FRONT_PERSPECTIVE_VISIBILITY),
    reinterpret_cast<::Bindable<bool>*>(&gm::csm::Data_VPM_RES_GUIDELINES_VISIBILITY),
    reinterpret_cast<::Bindable<bool>*>(&gm::csm::Data_VPM_RES_REARHITCH_VISIBILITY),
    reinterpret_cast<::Bindable<bool>*>(&gm::csm::Data_VPM_RES_REAROVERHEAD_VISIBILITY),
    reinterpret_cast<::Bindable<bool>*>(&gm::csm::Data_VPM_RES_REAR_PERSPECTIVE_VISIBILITY),
    reinterpret_cast<::Bindable<bool>*>(&gm::csm::Data_VPM_RES_SIDEFORWARD_VISIBILITY),
    reinterpret_cast<::Bindable<bool>*>(&gm::csm::Data_VPM_RES_SIDEREARWARD_VISIBILITY),
    reinterpret_cast<::Bindable<bool>*>(&gm::csm::Data_VPM_RES_UNDERBODY_FRONTREAR_VISIBILITY),
    reinterpret_cast<::Bindable<bool>*>(&gm::csm::Data_VPM_RES_UNDERBODY_FRONT_VISIBILITY),
    reinterpret_cast<::Bindable<bool>*>(&gm::csm::Data_VPM_RES_UNDERBODY_REARFRONT_VISIBILITY),
    reinterpret_cast<::Bindable<bool>*>(&gm::csm::Data_VPM_RES_UNDERBODY_REAR_VISIBILITY),
    reinterpret_cast<::Bindable<bool>*>(&gm::csm::Data_VPM_RVC_RES_OBSTRUCTIONCLEARED),
    reinterpret_cast<::Bindable<bool>*>(&gm::csm::Data_VPM_SIDE_FORWARD),
    reinterpret_cast<::Bindable<bool>*>(&gm::csm::Data_VPM_SIDE_PEDESTRAIN_AMBER_VISIBILITY),
    reinterpret_cast<::Bindable<bool>*>(&gm::csm::Data_VPM_SIDE_PEDESTRAIN_AMBER_VPM_VISIBILITY),
    reinterpret_cast<::Bindable<bool>*>(&gm::csm::Data_VPM_SIDE_PEDESTRAIN_RED_VISIBILITY),
    reinterpret_cast<::Bindable<bool>*>(&gm::csm::Data_VPM_SIDE_PEDESTRAIN_RED_VPM_VISIBILITY),
    reinterpret_cast<::Bindable<bool>*>(&gm::csm::Data_VPM_SIDE_REARWARD),
    reinterpret_cast<::Bindable<bool>*>(&gm::csm::Data_VPM_SURROUND_VIEW_PRESENCE),
    reinterpret_cast<::Bindable<bool>*>(&gm::csm::Data_VPM_TRAILER_AUX1),
    reinterpret_cast<::Bindable<bool>*>(&gm::csm::Data_VPM_TRAILER_AUX1_COMBINED),
    reinterpret_cast<::Bindable<bool>*>(&gm::csm::Data_VPM_TRAILER_COMBINED_ENABLED),
    reinterpret_cast<::Bindable<bool>*>(&gm::csm::Data_VPM_TRAILER_COMBINED_PRESENCE),
    reinterpret_cast<::Bindable<bool>*>(&gm::csm::Data_VPM_TRAILER_GUIDELINES_ACTIVE),
    reinterpret_cast<::Bindable<bool>*>(&gm::csm::Data_VPM_TRAILER_GUIDELINES_PRSCNS_AVAILAIBILITY),
    reinterpret_cast<::Bindable<bool>*>(&gm::csm::Data_VPM_TRAILER_GUIDELINES_VWG_STATUS),
    reinterpret_cast<::Bindable<bool>*>(&gm::csm::Data_VPM_TRAILER_INSIDE_ENABLED),
    reinterpret_cast<::Bindable<bool>*>(&gm::csm::Data_VPM_TRAILER_INSIDE_PRESENCE),
    reinterpret_cast<::Bindable<bool>*>(&gm::csm::Data_VPM_TRAILER_MIRROR),
    reinterpret_cast<::Bindable<bool>*>(&gm::csm::Data_VPM_TRAILER_REAR_ENABLED),
    reinterpret_cast<::Bindable<bool>*>(&gm::csm::Data_VPM_TRAILER_REAR_PRESENCE),
    reinterpret_cast<::Bindable<bool>*>(&gm::csm::Data_VPM_TRAILER_SIDE_ENABLED),
    reinterpret_cast<::Bindable<bool>*>(&gm::csm::Data_VPM_TRAILER_SIDE_PRESENCE),
    reinterpret_cast<::Bindable<bool>*>(&gm::csm::Data_VPM_TRAILER_TRANSPARENT_ENABLED),
    reinterpret_cast<::Bindable<bool>*>(&gm::csm::Data_VPM_TRAILER_TRANSPARENT_PRESENCE),
    reinterpret_cast<::Bindable<bool>*>(&gm::csm::Data_VPM_TRAINSPARENT_TRAILER_AVAILABLE),
    reinterpret_cast<::Bindable<bool>*>(&gm::csm::Data_VPM_TRANSPARENTHOOD),
    reinterpret_cast<::Bindable<bool>*>(&gm::csm::Data_VPM_UnderBody_Front_Actv),
    reinterpret_cast<::Bindable<bool>*>(&gm::csm::Data_VPM_UnderBody_Rear_Actv),
    reinterpret_cast<::Bindable<bool>*>(&gm::csm::Data_VPM_ZOOMEDBOWL),
    reinterpret_cast<::Bindable<bool>*>(&gm::csm::Data_VPM_ZOOM_BUTTON_PRESENCE),
    reinterpret_cast<::Bindable<bool>*>(&gm::csm::Data_VPM_ZOOM_BUTTON_SELECTED),
    reinterpret_cast<::Bindable<bool>*>(&gm::csm::EXIT_BUTTON_AVAILABLE_IN_APA),
    reinterpret_cast<::Bindable<bool>*>(&gm::csm::ICS_HEADLIGHTS_ICON_VISIBILITY),
    reinterpret_cast<::Bindable<bool>*>(&gm::csm::ICS_SAFTEY_ICON_VISIBILITY),
    reinterpret_cast<::Bindable<bool>*>(&gm::csm::IPC_RTOS_TCP_CONNECTED),
    reinterpret_cast<::Bindable<bool>*>(&gm::csm::OUTLETS_ACTIVE_TIME_RESPONSE_DUD),
    reinterpret_cast<::Bindable<bool>*>(&gm::csm::OUTLETS_ENERGY_USED_RESPONSE_DUD),
    reinterpret_cast<::Bindable<bool>*>(&gm::csm::OUTLETS_OFFPOWERMODE_SYSTEM_STOP_REQUEST),
    reinterpret_cast<::Bindable<bool>*>(&gm::csm::OUTLETS_OFFPOWERMODE_TIMER_ADD_TIME_REQUEST),
    reinterpret_cast<::Bindable<bool>*>(&gm::csm::OUTLETS_RANGE_RESERVE_RESPONSE_DUD),
    reinterpret_cast<::Bindable<bool>*>(&gm::csm::OUTLETS_REMAINING_TIME_RESPONSE_DUD),
    reinterpret_cast<::Bindable<bool>*>(&gm::csm::OUTLETS_START_SCREEN_BACKBUTTON_VISIBILITY),
    reinterpret_cast<::Bindable<bool>*>(&gm::csm::OUTLETS_TIMER_VALUE_RESPONSE_DUD),
    reinterpret_cast<::Bindable<bool>*>(&gm::csm::OnePedal_Enhanced),
    reinterpret_cast<::Bindable<bool>*>(&gm::csm::OnePedal_High),
    reinterpret_cast<::Bindable<bool>*>(&gm::csm::PASSIVE_POWER_MODE_SHOW_VEHICLE_OFF_SWITCH_MAIN_REQUESTED_LCFA),
    reinterpret_cast<::Bindable<bool>*>(&gm::csm::PASSIVE_POWER_MODE_SHOW_VEHICLE_OFF_SWITCH_REDUNDANT_REQUESTED_LCFA),
    reinterpret_cast<::Bindable<bool>*>(&gm::csm::PERSISTENT_SETTING_ICON_VISIBILITY),
    reinterpret_cast<::Bindable<bool>*>(&gm::csm::POWERBASE_ONE_HOUR_ADDED),
    reinterpret_cast<::Bindable<bool>*>(&gm::csm::RTOS_BRIGHTNESS_VISIBILITY),
    reinterpret_cast<::Bindable<bool>*>(&gm::csm::RTOS_IPC_TCP_CONNECTION_STATUS),
    reinterpret_cast<::Bindable<bool>*>(&gm::csm::RVC_GUIDELINES_VISIBILITY),
    reinterpret_cast<::Bindable<bool>*>(&gm::csm::SMARTCONTROLS_AUTOHIGHBEAM_REQUESTED),
    reinterpret_cast<::Bindable<bool>*>(&gm::csm::SMARTCONTROLS_BRB_REQUESTED),
    reinterpret_cast<::Bindable<bool>*>(&gm::csm::SMARTCONTROLS_CRAB_WALK_AVAILABLE_SIGNAL),
    reinterpret_cast<::Bindable<bool>*>(&gm::csm::SMARTCONTROLS_DOMELIGHT_REQUESTED),
    reinterpret_cast<::Bindable<bool>*>(&gm::csm::SMARTCONTROLS_HEADLIGHT_REQUESTED),
    reinterpret_cast<::Bindable<bool>*>(&gm::csm::SMARTCONTROLS_LOWLIGHT_DIALOG_DSA_STATUS),
    reinterpret_cast<::Bindable<bool>*>(&gm::csm::SMARTCONTROLS_OPD_SETTINGS_INTERNAL),
    reinterpret_cast<::Bindable<bool>*>(&gm::csm::SMARTCONTROLS_PASSIVE_POWER_MODE_EMERGENCY_REQUESTED),
    reinterpret_cast<::Bindable<bool>*>(&gm::csm::SMARTCONTROLS_PASSIVE_POWER_MODE_EXTEND_ACTIVE),
    reinterpret_cast<::Bindable<bool>*>(&gm::csm::SMARTCONTROLS_PASSIVE_POWER_MODE_EXTEND_REQUESTED),
    reinterpret_cast<::Bindable<bool>*>(&gm::csm::SMARTCONTROLS_PASSIVE_POWER_MODE_EXTEND_SNACKBAR),
    reinterpret_cast<::Bindable<bool>*>(&gm::csm::SMARTCONTROLS_PASSIVE_POWER_MODE_Off_VERIFY_SNACKBAR),
    reinterpret_cast<::Bindable<bool>*>(&gm::csm::SMARTCONTROLS_PASSIVE_POWER_MODE_REDUNDANT_REQUESTED),
    reinterpret_cast<::Bindable<bool>*>(&gm::csm::SMARTCONTROLS_PASSIVE_POWER_MODE_REMAINING_SNACKBAR),
    reinterpret_cast<::Bindable<bool>*>(&gm::csm::SMARTCONTROLS_PASSIVE_POWER_MODE_REQUESTED),
    reinterpret_cast<::Bindable<bool>*>(&gm::csm::SMARTCONTROLS_PEEKIN_CHARGE_PORT_ENABLE),
    reinterpret_cast<::Bindable<bool>*>(&gm::csm::SMARTCONTROLS_PEEKIN_OUTLET_TOGGLE),
    reinterpret_cast<::Bindable<bool>*>(&gm::csm::SMARTCONTROLS_RAB_SELECTIONVALUE_SIGNAL),
    reinterpret_cast<::Bindable<bool>*>(&gm::csm::SMARTCONTROLS_TIMER_LIST_ENABLE),
    reinterpret_cast<::Bindable<bool>*>(&gm::csm::SMARTCONTROLS_TRACTION_CONTROL_VISIBILITY),
    reinterpret_cast<::Bindable<bool>*>(&gm::csm::VC_TRACTIONCONTROL_IMAGE_VISIBILITY),
    reinterpret_cast<::Bindable<bool>*>(&gm::csm::VIRTUALCONTROLS_ANDROID_LAUNCH_VISIBILITY),
    reinterpret_cast<::Bindable<bool>*>(&gm::csm::VIRTUALCONTROLS_ANDROID_NOIVI_STATE),
    reinterpret_cast<::Bindable<bool>*>(&gm::csm::VIRTUALCONTROLS_CHILDSAFETYLOCKS_MISMATCHINDICATIONON_SIGNAL),
    reinterpret_cast<::Bindable<bool>*>(&gm::csm::VIRTUALCONTROLS_CHILDSAFETYLOCKS_STATUS),
    reinterpret_cast<::Bindable<bool>*>(&gm::csm::VIRTUALCONTROLS_CHILDSAFETYLOCKS_VISIBILITY),
    reinterpret_cast<::Bindable<bool>*>(&gm::csm::VIRTUALCONTROLS_CONTROL_PAGE_WHILE_DRIVING_INTERNAL),
    reinterpret_cast<::Bindable<bool>*>(&gm::csm::VIRTUALCONTROLS_CRAB_WALK_VISIBILITY),
    reinterpret_cast<::Bindable<bool>*>(&gm::csm::VIRTUALCONTROLS_DATA_SCROLLPAGE_INDICATOR1),
    reinterpret_cast<::Bindable<bool>*>(&gm::csm::VIRTUALCONTROLS_DATA_SCROLLPAGE_INDICATOR2),
    reinterpret_cast<::Bindable<bool>*>(&gm::csm::VIRTUALCONTROLS_DATA_SCROLLPAGE_INDICATOR3),
    reinterpret_cast<::Bindable<bool>*>(&gm::csm::VIRTUALCONTROLS_DATA_SCROLLPAGE_INDICATORBG),
    reinterpret_cast<::Bindable<bool>*>(&gm::csm::VIRTUALCONTROLS_DOME_AUTO_VISIBILITY),
    reinterpret_cast<::Bindable<bool>*>(&gm::csm::VIRTUALCONTROLS_FACEPLATE_BACK_KEY_PRESS),
    reinterpret_cast<::Bindable<bool>*>(&gm::csm::VIRTUALCONTROLS_HEADLIGHT_MENU_BAR_STATUS),
    reinterpret_cast<::Bindable<bool>*>(&gm::csm::VIRTUALCONTROLS_HEADLIGHT_SMARTCONTROL_VISIBILITY),
    reinterpret_cast<::Bindable<bool>*>(&gm::csm::VIRTUALCONTROLS_HEADLIGHT_STATUS),
    reinterpret_cast<::Bindable<bool>*>(&gm::csm::VIRTUALCONTROLS_KEYBOARD_UPDATE),
    reinterpret_cast<::Bindable<bool>*>(&gm::csm::VIRTUALCONTROLS_LANECHANGEALERT_CUSTOMIZATIONCURRENTSETTING_AVAILABILITY),
    reinterpret_cast<::Bindable<bool>*>(&gm::csm::VIRTUALCONTROLS_ONEPEDALDRIVE_CUSTOMIZATION_ALLOWED_FLAG1),
    reinterpret_cast<::Bindable<bool>*>(&gm::csm::VIRTUALCONTROLS_ONEPEDALDRIVE_CUSTOMIZATION_ALLOWED_FLAG2),
    reinterpret_cast<::Bindable<bool>*>(&gm::csm::VIRTUALCONTROLS_ONEPEDALDRIVE_CUSTOMIZATION_ALLOWED_FLAG3),
    reinterpret_cast<::Bindable<bool>*>(&gm::csm::VIRTUALCONTROLS_ONEPEDALDRIVE_CUSTOMIZATION_ALLOWED_FLAG4),
    reinterpret_cast<::Bindable<bool>*>(&gm::csm::VIRTUALCONTROLS_ONEPEDALDRIVE_CUSTOMIZATION_AVAILABILITYFLAG1),
    reinterpret_cast<::Bindable<bool>*>(&gm::csm::VIRTUALCONTROLS_ONEPEDALDRIVE_CUSTOMIZATION_AVAILABILITYFLAG2),
    reinterpret_cast<::Bindable<bool>*>(&gm::csm::VIRTUALCONTROLS_ONEPEDALDRIVE_CUSTOMIZATION_AVAILABILITYFLAG3),
    reinterpret_cast<::Bindable<bool>*>(&gm::csm::VIRTUALCONTROLS_ONEPEDALDRIVE_CUSTOMIZATION_AVAILABILITYFLAG4),
    reinterpret_cast<::Bindable<bool>*>(&gm::csm::VIRTUALCONTROLS_PAB_OFF_INTERNAL),
    reinterpret_cast<::Bindable<bool>*>(&gm::csm::VIRTUALCONTROLS_PAB_OFF_WITH_CANADA_INTERNAL),
    reinterpret_cast<::Bindable<bool>*>(&gm::csm::VIRTUALCONTROLS_PAB_ON_INTERNAL),
    reinterpret_cast<::Bindable<bool>*>(&gm::csm::VIRTUALCONTROLS_PAB_ON_WITH_CANADA_INTERNAL),
    reinterpret_cast<::Bindable<bool>*>(&gm::csm::VIRTUALCONTROLS_PAB_TEXT_INTERNAL),
    reinterpret_cast<::Bindable<bool>*>(&gm::csm::VIRTUALCONTROLS_PERSISTENT_HEADLIGHT_VISIBILITY),
    reinterpret_cast<::Bindable<bool>*>(&gm::csm::VIRTUALCONTROLS_POWERASSIST_AUTO_DEPLOY_AVAILABLE),
    reinterpret_cast<::Bindable<bool>*>(&gm::csm::VIRTUALCONTROLS_POWERASSIST_AUTO_DEPLOY_AVAILABLE_FLAG1),
    reinterpret_cast<::Bindable<bool>*>(&gm::csm::VIRTUALCONTROLS_POWERASSIST_AUTO_DEPLOY_AVAILABLE_FLAG2),
    reinterpret_cast<::Bindable<bool>*>(&gm::csm::VIRTUALCONTROLS_POWERASSIST_CUSTOM_SELECTABLE),
    reinterpret_cast<::Bindable<bool>*>(&gm::csm::VIRTUALCONTROLS_POWERASSIST_MANUAL_DEPLOY_AVAILABLE),
    reinterpret_cast<::Bindable<bool>*>(&gm::csm::VIRTUALCONTROLS_POWERASSIST_MANUAL_DEPLOY_AVAILABLE_FLAG1),
    reinterpret_cast<::Bindable<bool>*>(&gm::csm::VIRTUALCONTROLS_POWERASSIST_MANUAL_DEPLOY_AVAILABLE_FLAG2),
    reinterpret_cast<::Bindable<bool>*>(&gm::csm::VIRTUALCONTROLS_REMOTE_LOCATION_SAVE_STATUS),
    reinterpret_cast<::Bindable<bool>*>(&gm::csm::VIRTUALCONTROLS_REMOTE_TRY_LOCATION_AGAIN_STATUS),
    reinterpret_cast<::Bindable<bool>*>(&gm::csm::VIRTUALCONTROLS_SEATBELT_INTERNAL),
    reinterpret_cast<::Bindable<bool>*>(&gm::csm::VIRTUALCONTROLS_SEATBELT_WITH_CANADA_INTERNAL),
    reinterpret_cast<::Bindable<bool>*>(&gm::csm::VIRTUALCONTROLS_TELEMATICS_IMMOBILIZATION),
    reinterpret_cast<::Bindable<bool>*>(&gm::csm::VIRTUALCONTROLS_TRACTION_COMPETITIVE_MODE_VISIBILITY),
    reinterpret_cast<::Bindable<bool>*>(&gm::csm::VIRTUALCONTROLS_TRACTION_CONTROL_AVAILABLE_SIGNAL),
    reinterpret_cast<::Bindable<bool>*>(&gm::csm::VIRTUALCONTROLS_TRACTION_CONTROL_COMP_AVAILABLE_SIGNAL),
    reinterpret_cast<::Bindable<bool>*>(&gm::csm::VIRTUALCONTROLS_TRACTION_CONTROL_ESC_AVAILABLE_SIGNAL),
    reinterpret_cast<::Bindable<bool>*>(&gm::csm::VIRTUALCONTROLS_UGDO_DISTANCE_FEET_LIST_VISIBILITY),
    reinterpret_cast<::Bindable<bool>*>(&gm::csm::VIRTUALCONTROLS_UGDO_FEATURE_ENABLE),
    reinterpret_cast<::Bindable<bool>*>(&gm::csm::VIRTUALCONTROLS_UGDO_LOCATION_DETECTED_STATUS),
    reinterpret_cast<::Bindable<bool>*>(&gm::csm::VIRTUALCONTROLS_UGDO_OPTIONS_DELETE_STATUS),
    reinterpret_cast<::Bindable<bool>*>(&gm::csm::VIRTUALCONTROLS_UGDO_STATUS),
    reinterpret_cast<::Bindable<bool>*>(&gm::csm::VIRTUALCONTROLS_VALET_MODE),
    reinterpret_cast<::Bindable<bool>*>(&gm::csm::VIRTUAL_CONTROL_HUD_VISIBILITY_FEATURE_INTERNAL),
    reinterpret_cast<::Bindable<bool>*>(&gm::csm::VPE_HMI_CONNECTION_STATUS),
    reinterpret_cast<::Bindable<bool>*>(&gm::csm::VPM_CAMERA_BOWL_VIEW_AVAILABILITY),
    reinterpret_cast<::Bindable<bool>*>(&gm::csm::VPM_CAMERA_REAR_HITCH_AVAILABILITY),
    reinterpret_cast<::Bindable<bool>*>(&gm::csm::VPM_CAMERA_WASH_BUTTON_VISIBILITY),
    reinterpret_cast<::Bindable<bool>*>(&gm::csm::VPM_CAMERA_ZOOM_BUTTON_VISIBILITY)
    }
};


static const std::array<::Bindable<double_t>*, 2> mBindables_double_t
{
    {
        reinterpret_cast<::Bindable<double_t>*>(&gm::csm::VIRTUALCONTROLS_UGDO_LATTITUDE),
    reinterpret_cast<::Bindable<double_t>*>(&gm::csm::VIRTUALCONTROLS_UGDO_LONGITUDE)
    }
};


static const std::array<::Bindable<float_t>*, 11> mBindables_float_t
{
    {
        reinterpret_cast<::Bindable<float_t>*>(&gm::csm::APA_BOSCH_MANUEAR_PROGRESS_MESSAGE),
    reinterpret_cast<::Bindable<float_t>*>(&gm::csm::APA_MANUEAR_PROGRESS_MESSAGE),
    reinterpret_cast<::Bindable<float_t>*>(&gm::csm::Data_HVAC_REAR_BLW_COMMEND),
    reinterpret_cast<::Bindable<float_t>*>(&gm::csm::Data_HVAC_REAR_BLW_SECOND_COMMEND),
    reinterpret_cast<::Bindable<float_t>*>(&gm::csm::Data_ICS_TEMP_INDICATION_VALIDATION),
    reinterpret_cast<::Bindable<float_t>*>(&gm::csm::Data_VEHICLE_SPEED_AVERAGE_DRIVEN_VALUE),
    reinterpret_cast<::Bindable<float_t>*>(&gm::csm::OFFBOARD_OUTLETS_ELECTRICAL_ENERGY_MAX_POWER),
    reinterpret_cast<::Bindable<float_t>*>(&gm::csm::OFFPOWERMODE_ELECTRICAL_ENERGY_USED_THIS_DISCHARGE),
    reinterpret_cast<::Bindable<float_t>*>(&gm::csm::OUTLETS_HIGH_VOLTAGE_BATTERY_PROPULSION_RANGE_MINIMUM_PROJECTED),
    reinterpret_cast<::Bindable<float_t>*>(&gm::csm::PERSISTENT_CONTROL_LANEKEEPASSIST_LONGPRESS_SIGNAL),
    reinterpret_cast<::Bindable<float_t>*>(&gm::csm::VIRTUALCONTROLS_GPS_2D_ABSOLUTE_POS_ERR_ESTIMATE)
    }
};


static const std::array<::Bindable<int32_t>*, 505> mBindables_int32_t
{
    {
        reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::APA_ACTIVITY_INDICATOR_CONNECTING_APP_PROGRESS),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::APA_BOSCH_FOCUS_REQUEST),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::APA_BOSCH_WARNING_INDICATION_REQUEST),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::APA_EXIT_PARK_DRAWER_REQUEST),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::APA_FOCUS_REQUEST),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::APA_PARK_INSTRUCTIONS_INTERNAL),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::APA_PARK_MANUER_PROGRESS_INTERNAL),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::APA_WARNING_INDICATION_REQUEST),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::CAMERA_DISABLE_HYSTERESIS_SPEED),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::CAMERA_SUPPORTVIEW),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::CAMERA_TYPE),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::Camera_ALERT_PEDESTRAIN_STATE),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::Camera_LEFT_RCTA_FLASHON_INTEGER),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::Camera_RIGHT_RCTA_FLASHON_INTEGER),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::Camera_UPA_FLASHON_INTEGER),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::DRIVER_SELECTED_OUTLET_OFFPOWERMODE_VC_NOTALLOWED_STATUS),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::DRIVER_SELECTED_OUTLET_OFFPOWERMODE_VC_REQ),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::DRIVER_SELECTED_OUTLET_OFFPOWERMODE_VC_SELECTION_VALUE),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::DRIVER_SELECTED_OUTLET_OFFPOWERMODE_VC_SELECTION_VALUE_ALLOWED),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::Data_APA_AUTO_PARK_CALIBRATIONS),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::Data_APA_AUTO_STEERING_ICON_ACTIVATED),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::Data_APA_BG_SET),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::Data_APA_BG_UPDATE),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::Data_APA_BOSCH_AUTO_STEERING_ICON_ACTIVATED),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::Data_APA_BOSCH_CROSS_PARK_SOFT_BUTTON_REQ),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::Data_APA_BOSCH_LEFT_SOFT_BUTTON_REQ),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::Data_APA_BOSCH_PARLL_PARK_SOFT_BUTTON_REQ),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::Data_APA_BOSCH_RIGHT_SOFT_BUTTON_REQ),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::Data_APA_CROSS_PARK_SOFT_BUTTON_REQ),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::Data_APA_LEFT_PARK_INSTRUCTION),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::Data_APA_LEFT_SOFT_BUTTON_REQ),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::Data_APA_PARLL_PARK_SOFT_BUTTON_REQ),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::Data_APA_RIGHT_PARK_INSTRUCTION),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::Data_APA_RIGHT_SOFT_BUTTON_REQ),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::Data_APA_SELECTION_EXIT_OUT_STATE),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::Data_APA_SELECTION_KEEP_LOOKING_BUTTON_STATE),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::Data_APA_SELECTION_SUPERVISE_REMOTELY_BUTTON_STATE),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::Data_APA_SELECTION_TRY_AGAIN_STATE),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::Data_APA_SELECTION_YES_BUTTON_STATE),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::Data_APA_SOFT_BUTTON_SELECTED_STATE_RAW),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::Data_APA_SPOT_SELECTION_KEEP_LOOKING_REQUEST),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::Data_APA_SPOT_SELECTION_REMOTE_REQUEST),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::Data_APA_SPOT_SELECTION_REQUEST),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::Data_APA_SPOT_SELECTION_UNABLE_EXIT_OUT_REQ),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::Data_APA_SPOT_SELECTION_UNABLE_TRY_AGAIN_REQ),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::Data_APA_WARNING_INDICATION_REQUEST_INTERNAL),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::Data_Apa_Camera_Internal),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::Data_BZSA_CHECKBOX_SELECTION_STATE),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::Data_Brand_Calibration),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::Data_CAMERA_CARGO_BED_STATE_INTERNAL),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::Data_CAMERA_GEAR_INFO),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::Data_Current_View),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::Data_DRIVE_MODE_FOUR_NAME),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::Data_DRIVE_MODE_NAME1),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::Data_DRIVE_MODE_NAME2),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::Data_DRIVE_MODE_NAME3),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::Data_DRIVE_MODE_NAME5),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::Data_DRIVE_MODE_NAME6),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::Data_DRIVE_MODE_NAME7),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::Data_DRIVE_MODE_NAME8),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::Data_DRIVE_MODE_STATUS1),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::Data_DRIVE_MODE_STATUS2),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::Data_DRIVE_MODE_STATUS3),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::Data_DRIVE_MODE_STATUS4),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::Data_DRIVE_MODE_STATUS5),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::Data_DRIVE_MODE_STATUS6),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::Data_DRIVE_MODE_STATUS7),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::Data_DRIVE_MODE_STATUS8),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::Data_DRIVE_MODE_VISUALIZATION_SCREEN_STATUS),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::Data_GM_Model),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::Data_GM_Model_Type),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::Data_HVAC_AIRCONDITION_VALUE),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::Data_HVAC_AIRDIRECTION_VALUE),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::Data_HVAC_AUTO_INDICATION),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::Data_HVAC_BOTTOM_BAR_BG_TYPE),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::Data_HVAC_DOWN_BLOWERMODE),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::Data_HVAC_FRONT_BLOWER_LEVEL_SETTING),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::Data_HVAC_FRONT_BLOWER_STATE_SETTING),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::Data_HVAC_FRONT_COMPRESSOR_SETTING_AC_ONLY_INDICATION),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::Data_HVAC_FRONT_COMPRESSOR_SETTING_INDICATION),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::Data_HVAC_FRONT_DYNAMIC_LEVEL_FANSPEED),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::Data_HVAC_FRONT_FANSPEED),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::Data_HVAC_FRONT_HEATER_SET),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::Data_HVAC_FRONT_LEFTSETTEMP_INDICATOR),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::Data_HVAC_FRONT_LEFT_AIR_DIS),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::Data_HVAC_FRONT_LEFT_HEATED_SEAT_POP_UP),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::Data_HVAC_FRONT_LEFT_HEATED_SEAT_POP_UP_BACK),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::Data_HVAC_FRONT_LEFT_TEMPERATURE_LEVEL_SETTING),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::Data_HVAC_FRONT_LEFT_TEMPERATURE_STATE_SETTING),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::Data_HVAC_FRONT_LEVEL_FANSPEED),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::Data_HVAC_FRONT_RECIRCULATION_SETTING_INDICATION),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::Data_HVAC_FRONT_RIGHT_BACK_HEATED_SEAT),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::Data_HVAC_FRONT_RIGHT_COOLED_BACK_HEATED_SEAT),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::Data_HVAC_FRONT_RIGHT_COOLED_CUSION_HEATED_SEAT),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::Data_HVAC_FRONT_RIGHT_CUSION_HEATED_SEAT),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::Data_HVAC_FRONT_RIGHT_TEMPERATURE_LEVEL_SETTING),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::Data_HVAC_FRONT_RIGHT_TEMPERATURE_STATE_SETTING),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::Data_HVAC_FRONT_SYNC),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::Data_HVAC_Front_Defrost),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::Data_HVAC_HEATED_BACK_AND_CUSION_SEAT_AVAILABLE),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::Data_HVAC_HEATED_BACK_SEAT_AVAILABLE),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::Data_HVAC_HEATED_COOL_BACK_AND_COOL_CUSION_SEAT_AVAILABLE),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::Data_HVAC_HEATED_SEAT_AVAILABLE_LEFT_AND_RIGHT),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::Data_HVAC_LEFT_HEATED),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::Data_HVAC_LEFT_HEATED_SEAT),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::Data_HVAC_LEFT_HEATED_SEAT_BK_AND_CUSION),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::Data_HVAC_LEFT_HEATED_SEAT_COOLED),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::Data_HVAC_LEFT_HEATED_SEAT_OFF),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::Data_HVAC_LEFT_HEATED_SEAT_POP_UP),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::Data_HVAC_LEFT_SEAT_BOTTOM_BAR),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::Data_HVAC_POWER_INDICATION),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::Data_HVAC_REAR_BLOWER_STATE_SETTING),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::Data_HVAC_REAR_DEFROST_STATE),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::Data_HVAC_REAR_FANSPEED),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::Data_HVAC_REAR_HANDLING_POWER_REQ),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::Data_HVAC_REAR_TEMPERATURE_LEVEL_SETTING),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::Data_HVAC_REAR_TEMPERATURE_STATE_SETTING),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::Data_HVAC_RIGHT_BACK_AND_CUSION_HEATED_SEAT),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::Data_HVAC_RIGHT_BACK_HEATED_SEAT),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::Data_HVAC_RIGHT_COOLED_BACK_AND_CUSION_HEATED_SEAT),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::Data_HVAC_RIGHT_CUSION_HEATED_SEAT),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::Data_HVAC_RIGHT_HEATED_SEAT),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::Data_HVAC_RIGHT_HEATED_SEAT_OFF),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::Data_HVAC_RIGHT_SEAT_BOTTOM_BAR),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::Data_HVAC_Rear_Defrost),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::Data_ICS_LANGUAGE_SETTING_FOR_WINDOWS),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::Data_ICS_SUSD_OLD_SYSTEM_STATES),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::Data_ICS_SUSD_PLC_STATES),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::Data_ICS_SUSD_SYSTEM_STATES),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::Data_ICS_TEMP_UNITS_UPDATE_INTERNAL),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::Data_ICS_TIME_AND_DISPLAY_FORMAT_FOR_WINDOWS),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::Data_JACK_KNIFE_ALERT),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::Data_KEYPAD_ENTER_BUTTON_DYNAMICALLY),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::Data_LANGUAGE_SELECTION),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::Data_LCA_CHECKBOX_SELECTION_STATE),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::Data_NIGHT_VISION_BRIGHTNESS_INTERNAL),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::Data_NIGHT_VISION_CONTRAST_INTERNAL),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::Data_PINTOSTART_DYNAMIC_LABLE_TEXT),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::Data_PINTOSTART_ENTER_PASSCODE_TEXT),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::Data_PINTOSTART_KEY0),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::Data_PINTOSTART_KEY1),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::Data_PINTOSTART_KEY2),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::Data_PINTOSTART_KEY3),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::Data_PINTOSTART_KEY4),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::Data_PINTOSTART_KEY5),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::Data_PINTOSTART_KEY6),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::Data_PINTOSTART_KEY7),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::Data_PINTOSTART_KEY8),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::Data_PINTOSTART_KEY9),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::Data_PINTOSTART_KEY_DELETE),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::Data_PINTOSTART_PIN1),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::Data_PINTOSTART_PIN2),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::Data_PINTOSTART_PIN3),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::Data_PINTOSTART_PIN4),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::Data_PINTOSTART_PIN5),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::Data_PINTOSTART_PIN6),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::Data_PINTOSTART_PLURAL_TEXT),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::Data_RHD_CAMERA_BG_ENABLED),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::Data_RHD_TITLE_ALIGNMENT_STATE),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::Data_RTC_ALIGNMENT_PROGRESS),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::Data_RTC_ALIGNMENT_STATUS),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::Data_RVC_HITCH_ZOOM_TOGGLE),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::Data_RVC_STANDARD_GUIDELINE_TOGGLE),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::Data_RVC_STANDARD_TRAILER_TOGGLE),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::Data_RVC_TRAILER_GUIDELINE_TOGGLE),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::Data_SEAT_STATUS_LEFT_CLIMATE_COOLED_BLOSTER_STATE),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::Data_SEAT_STATUS_LEFT_CLIMATE_COOLED_CUSH_BLOSTER_STATE),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::Data_SETTINGS_VEHICLE_MOVEMENT_STATE_STATUS),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::Data_SHOW_KEYBOARD),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::Data_SMART_CONTROLS_EXPANDED_ICON_STATE),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::Data_STORE_ANIMATION_STATUS),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::Data_STORE_ANIMATION_TYPE_STATUS),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::Data_STORE_POWER_MODE_TYPE_STATUS),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::Data_VCU_K_RVS_TYPE),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::Data_VCU_RVS_TYPE),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::Data_VC_PASSIVE_POWER_MODE_EXTEND_SHUTDOWN_TIMER_PLURAL_TEXT),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::Data_VC_PASSIVE_POWER_MODE_EXTEND_TIMER_PLURAL_TEXT),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::Data_VEHICLE_SPEED_AVERAGE_DRIVEN_AV),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::Data_VEHICLE_SPEED_AVERAGE_DRIVEN_LCFA),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::Data_VEHICLE_SPEED_AVERAGE_NON_DRIVEN_AV),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::Data_VIRTUALCONTROLS_AUX1_LIGHTBAR_SWITCH_INTERNAL),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::Data_VIRTUALCONTROLS_AUX1_MOMONTARY_LATCH_SWITCH_INTERNAL),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::Data_VIRTUALCONTROLS_AUX2_LIGHTBAR_SWITCH_INTERNAL),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::Data_VIRTUALCONTROLS_AUX2_MOMONTARY_LATCH_SWITCH_INTERNAL),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::Data_VIRTUALCONTROLS_AUX3_LIGHTBAR_SWITCH_INTERNAL),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::Data_VIRTUALCONTROLS_AUX3_MOMONTARY_LATCH_SWITCH_INTERNAL),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::Data_VIRTUALCONTROLS_AUX4_LIGHTBAR_SWITCH_INTERNAL),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::Data_VIRTUALCONTROLS_AUX4_MOMONTARY_LATCH_SWITCH_INTERNAL),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::Data_VIRTUALCONTROLS_AUX5_LIGHTBAR_SWITCH_INTERNAL),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::Data_VIRTUALCONTROLS_AUX5_MOMONTARY_LATCH_SWITCH_INTERNAL),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::Data_VIRTUALCONTROLS_AUX6_LIGHTBAR_SWITCH_INTERNAL),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::Data_VIRTUALCONTROLS_AUX6_MOMONTARY_LATCH_SWITCH_INTERNAL),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::Data_VIRTUALCONTROLS_AUX_ICON_SELECTED),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::Data_VIRTUALCONTROLS_AUX_IMAGE1),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::Data_VIRTUALCONTROLS_AUX_IMAGE2),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::Data_VIRTUALCONTROLS_AUX_IMAGE3),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::Data_VIRTUALCONTROLS_AUX_IMAGE4),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::Data_VIRTUALCONTROLS_AUX_IMAGE5),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::Data_VIRTUALCONTROLS_AUX_IMAGE6),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::Data_VIRTUALCONTROLS_AUX_LIGHTBAR_SWITCH_INTERNAL),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::Data_VIRTUALCONTROLS_AUX_MOMONTARY_LATCH_SWITCH_INTERNAL),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::Data_VIRTUALCONTROLS_CURRENT_AUX_SELECTED),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::Data_VIRTUALCONTROLS_PARKASSIST_AVAILABLE_LCFA_SIGNAL),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::Data_VIRTUALCONTROLS_PARKASSIST_AVAILABLE_SIGNAL),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::Data_VIRTUALCONTROLS_PERSISTENT_CONTROL_INTERNAL),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::Data_VIRTUALCONTROLS_POWERLIFTGATE_SELECTIONVALUE_SIGNAL),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::Data_VIRTUALCONTROLS_SPEEDLIMITER_STATE_INTERNAL),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::Data_VIRTUAL_CONTROLS_LANE_CHANGE_ALERT_STATE_INTERNAL),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::Data_VIRTUAL_CONTROL_ENABLE_EDIT_OPTION_STATE),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::Data_VIRTUAL_OFF_PROGRESS_BAR),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::Data_VOLUME_KNOB_CURRENT_VOLUME),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::Data_VOLUME_KNOB_CURRENT_VOLUME_INFO),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::Data_VOLUME_KNOB_MAXIMUM_VOLUME_CAP),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::Data_VOLUME_KNOB_MAXIMUM_VOLUME_CAP_INFO),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::Data_VOLUME_KNOB_MAX_VOLUME_SCALE_INFO),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::Data_VOLUME_KNOB_MINIMUM_VOLUME_CAP),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::Data_VOLUME_KNOB_MINIMUM_VOLUME_CAP_INFO),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::Data_VOLUME_KNOB_VOLUME_STATUS_INFO),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::Data_VOLUME_KNOB_VOLUME_TYPE_INFO),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::Data_VPM_GMC_LEFT_ARROW),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::Data_VPM_GMC_RIGHT_ARROW),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::Data_VPM_MFCBOWL),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::Data_VPM_REAR_PEDESTRAIN_STATE),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::Data_VPM_RES_CAMERATYPE),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::Data_VPM_RES_CAMERA_SUPPORT_VIEW),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::Data_VPM_RES_OBSTRUCTIONFOUND),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::Data_VPM_RES_PEDESTRIAN_STATE),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::Data_VPM_RES_RCTALEFT),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::Data_VPM_RES_RCTARIGHT),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::Data_VPM_RES_STEERINGWHEELANGLE),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::Data_VPM_RES_VIEWPORT),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::Data_VPM_RVC_CAMERA_LAUNCH),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::Data_VPM_VIEWING_STATUS),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::Data_VPM_VIEWING_STATUS_Extended),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::FU_HMIC_Current_ThemeId),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::FU_HMIC_REGION_CALIBRATION_TYPE),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::FU_HMIC_Timer_Tick_50_MilliSec),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::FU_ICS_DisplayCalibrationType),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::ICS_DISPLAY_CONFIGUATION_VALUE),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::ICS_HEADLIGHTS_ICON_TYPE),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::ICS_SAFTEY_ICON_TYPE),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::ICS_SYSTEM_POWER_MODE_STATUS),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::OFFBOARD_OUTLETS_ELECTRICAL_ENERGY_POWER_LEVEL_PERCENT),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::OFFBOARD_OUTLET_OPERATIONAL_STATUS),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::OUTLETS_OFFBOARD_ENERGY_TRANSFER_MINIMUM_SOC_REQUEST),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::OUTLETS_OFFBOARD_ENERGY_TRANSFER_MINIMUM_SOC_RESPONSE),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::OUTLETS_OFFPOWERMODE_SYSTEM_ACTIVE_TIME),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::OUTLETS_OFFPOWERMODE_SYSTEM_STATUS),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::OUTLETS_OFFPOWERMODE_TIMEROPERATION_CUSTOMIZATION_SETTING_REQ),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::OUTLETS_OFFPOWERMODE_TIMEROPERATION_CUSTOMIZATION_SETTING_VALUE),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::OUTLETS_OFFPOWERMODE_TIMER_REMAINING_VALUE),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::OUTLETS_OFFPOWERMODE_TIMER_REQUEST),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::OUTLETS_OFFPOWERMODE_TIMER_RESPONSE),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::OUTLETS_OFFPOWERMODE_VC_AVAILABLE_SIGNAL),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::OUTLETS_RANGE_LOST_THIS_DISCHARGE),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::PERSISTENT_CONTROL_LANEKEEPASSIST_AVAILABLE_SIGNAL),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::PERSISTENT_CONTROL_LANEKEEPASSIST_SELECTIONVALUE_SIGNAL),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::PERSISTENT_CONTROL_SPEEDLIMITER_AVAILABLE_SIGNAL),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::PERSISTENT_CONTROL_SPEEDLIMITER_SELECTIONVALUE_SIGNAL),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::PERSISTENT_CONTROL_SPEEDLIMTER_NOT_ALLOWED_SIGNAL),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::PERSISTENT_SETTING_ICON_STATE),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::PERSISTENT_VIRTUAL_CONTROL_ICON_STATE),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::PINTOSTART_LOCKOUT_MAX_TIME_SIGNAL),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::PINTOSTART_MAX_ATTEMPTS_SIGNAL),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::PINTOSTART_NFC_START_MAX_TIME_SIGNAL),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::PINTOSTART_PIN_LENGTH_SIGNAL),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::PINTOSTART_REMAINING_ATTEMPTS_SIGNAL),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::PINTOSTART_REMAINING_SCREEN_SPECIFIC_TIME_INTERNAL),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::PINTOSTART_REMAINING_SCREEN_SPECIFIC_TIME_SIGNAL),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::PINTOSTART_SCREEN_REQUEST_SIGNAL),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::PINTOSTART_VALID_PIN_MAX_TIME_SIGNAL),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::POWERBASE_HOURS_PLURAL_TEXT),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::POWERBASE_PREVIOUS_TIME),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::RVC_SAFETYSYSTEM_PARKASSIST),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::RVC_STEERINGWHEEL_ANGLE),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::SMARTCONTROLS_BRB_STATUS_INTERNAL),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::SMARTCONTROLS_ONEPEDALDRIVE_SELECTIONVALUE_SIGNAL),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::SMARTCONTROLS_ONEPEDALDRIVE_VISIBILITY_INTERNAL),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::SMARTCONTROLS_OPD_STATE_INTERNAL),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::SMARTCONTROLS_OUTLET_POWERBASE_STATUS),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::SMARTCONTROLS_OUTLET_TIMER_ENABLE),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::SMARTCONTROLS_PASSIVE_POWER_MODE_EXTEND_SHUTDOWN_TIMER),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::SMARTCONTROLS_PASSIVE_POWER_MODE_EXTEND_TIMER_DISPLAY_VALUE),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::SMARTCONTROLS_PEEKIN_ADDHOUR_BUTTON_STATUS),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::SMARTCONTROLS_PEEKIN_CHARGE_PORT_STATUS),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::SMARTCONTROLS_PEEKIN_CHARGE_POWER_PROGRESSBAR_VALUE),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::SMARTCONTROLS_PEEKIN_ENDING_IN_HOURS),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::SMARTCONTROLS_PEEKIN_ENDING_IN_MINUTES),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::SMARTCONTROLS_PEEKIN_TIME_HOURS),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::SMARTCONTROLS_RAB_AVAILABILITY_SIGNAL),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::SMARTCONTROLS_RANGE_USED_DISCHARGE),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::SMARTCONTRSOLS_OUTLET_TIMER_VALUE),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::SMARTCONTRSOLS_RANGE_MILEAGE_NUMBER_VALUE),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::SMARTCONTRSOLS_RANGE_RESERVE_DOWN_ARROW),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::SMARTCONTRSOLS_RANGE_RESERVE_PERCENT_VALUE),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::SMARTCONTRSOLS_RANGE_RESERVE_UP_ARROW),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::SMARTCONTRSOLS_RANGE_RESERVE_ZERO),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::VIRTUALCONTROLS_AIRBAG_DISABLED_SIGNAL),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::VIRTUALCONTROLS_AIRBAG_ENABLED_SIGNAL),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::VIRTUALCONTROLS_ALLCARGOLAMPS_USERCNTRLALLOWED_SIGNAL),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::VIRTUALCONTROLS_AUTOHIGHBEAM_AVAILABLE_SIGNAL),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::VIRTUALCONTROLS_AUTOHIGHBEAM_SELECTIONVALUE_SIGNAL),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::VIRTUALCONTROLS_AUTOHIGHBEAM_STATE_INTERNAL),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::VIRTUALCONTROLS_AUTOHIGHBEAM_USERCNTRLALLOWED_SIGNAL),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::VIRTUALCONTROLS_AUTO_HOLD_AVAILABILITY_SIGNAL),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::VIRTUALCONTROLS_AUTO_HOLD_SELECTIONVALUE_SIGNAL),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::VIRTUALCONTROLS_AUTO_HOLD_STATE_INTERNAL),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::VIRTUALCONTROLS_AUX1_REQUEST_SIGNAL),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::VIRTUALCONTROLS_AUX1_SELECTIONVALUE_SIGNAL),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::VIRTUALCONTROLS_AUX2_REQUEST_SIGNAL),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::VIRTUALCONTROLS_AUX2_SELECTIONVALUE_SIGNAL),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::VIRTUALCONTROLS_AUX3_REQUEST_SIGNAL),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::VIRTUALCONTROLS_AUX3_SELECTIONVALUE_SIGNAL),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::VIRTUALCONTROLS_AUX4_REQUEST_SIGNAL),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::VIRTUALCONTROLS_AUX4_SELECTIONVALUE_SIGNAL),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::VIRTUALCONTROLS_AUX5_REQUEST_SIGNAL),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::VIRTUALCONTROLS_AUX5_SELECTIONVALUE_SIGNAL),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::VIRTUALCONTROLS_AUX6_REQUEST_SIGNAL),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::VIRTUALCONTROLS_AUX6_SELECTIONVALUE_SIGNAL),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::VIRTUALCONTROLS_AUX_AVAILABLE_SIGNAL),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::VIRTUALCONTROLS_BLINDZONESTEERINGASSIST_AVAILABILITY_SIGNAL),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::VIRTUALCONTROLS_BLINDZONESTEERINGASSIST_SELECTIONVALUE_SIGNAL),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::VIRTUALCONTROLS_BLINDZONESTEERINGASSIST_STATE_INTERNAL),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::VIRTUALCONTROLS_BLINDZONESTEERINGASSIST_USERCNTRLALLOWED_SIGNAL),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::VIRTUALCONTROLS_CARGOBEDLAMP_AVAILABLE_SIGNAL),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::VIRTUALCONTROLS_CARGOBEDLAMP_SELECTIONVALUE_SIGNAL),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::VIRTUALCONTROLS_CARGOBED_STATE_INTERNAL),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::VIRTUALCONTROLS_CARGOHITCH_STATE_INTERNAL),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::VIRTUALCONTROLS_CARGOLAMPHITCH_AVAILABLE_SIGNAL),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::VIRTUALCONTROLS_CARGOLAMPHITCH_SELECTIONVALUE_SIGNAL),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::VIRTUALCONTROLS_CARGOLAMPS_AVAILABLE_SIGNAL),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::VIRTUALCONTROLS_CARGOLAMPS_SELECTIONVALUE_SIGNAL),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::VIRTUALCONTROLS_CARGOLAMP_STATE_INTERNAL),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::VIRTUALCONTROLS_CARGOMIRRORS_AVAILABLE_SIGNAL),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::VIRTUALCONTROLS_CARGOMIRRORS_SELECTIONVALUE_SIGNAL),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::VIRTUALCONTROLS_CARGOMIRROR_STATE_INTERNAL),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::VIRTUALCONTROLS_CENTER_DISPLAY_FAULT_SIGNAL),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::VIRTUALCONTROLS_CHARGE_PORT_ALLOWED_SIGNAL),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::VIRTUALCONTROLS_CHARGE_PORT_AVAILABLE_SIGNAL),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::VIRTUALCONTROLS_CHARGE_PORT_CURRENT_STATUS),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::VIRTUALCONTROLS_CHILDSAFETYLOCKS_CONTROL_AVAILABILITY_SIGNAL),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::VIRTUALCONTROLS_CHILDSAFETYLOCKS_SELECTIONVALUE_SIGNAL),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::VIRTUALCONTROLS_CHILDSAFETYLOCKS_STATE_INTERNAL),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::VIRTUALCONTROLS_CONVERSATION_ENHANCE_STATUS_INTERNAL),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::VIRTUALCONTROLS_CONVERSATION_ENHANCE_STATUS_SIGNAL),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::VIRTUALCONTROLS_DATA_SCROLLPAGE_INDICATOR_STATE1),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::VIRTUALCONTROLS_DATA_SCROLLPAGE_INDICATOR_STATE2),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::VIRTUALCONTROLS_DATA_SCROLLPAGE_INDICATOR_STATE3),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::VIRTUALCONTROLS_DOMEDEFEAT_AVAILABLE_SIGNAL),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::VIRTUALCONTROLS_DOMEDEFEAT_SELECTIONVALUE_SIGNAL),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::VIRTUALCONTROLS_DOMEDEFEAT_STATE_INTERNAL),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::VIRTUALCONTROLS_DOMELIGHT_AVAILABLE_SIGNAL),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::VIRTUALCONTROLS_DOMELIGHT_SELECTIONVALUE_SIGNAL),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::VIRTUALCONTROLS_DOMELIGHT_STATE_INTERNAL),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::VIRTUALCONTROLS_DRIVING_SPEED_INTERNAL),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::VIRTUALCONTROLS_DUALCARGOLIGHT_STATE_INTERNAL),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::VIRTUALCONTROLS_DUALFOGLIGHT_STATE_INTERNAL),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::VIRTUALCONTROLS_FACTORY_RESET_INPROGRESS),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::VIRTUALCONTROLS_FRONTFOGLIGHTS_AVAILABLE_SIGNAL),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::VIRTUALCONTROLS_FRONTFOGLIGHTS_SELECTIONVALUE_SIGNAL),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::VIRTUALCONTROLS_FRONTFOGLIGHTS_USERCNTRLALLOWED_SIGNAL),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::VIRTUALCONTROLS_FRONTFOGLIGHT_STATE_INTERNAL),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::VIRTUALCONTROLS_FRONT_SEAT_BELT_SIGNAL),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::VIRTUALCONTROLS_GLOVEBOX_AVAILABLE_SIGNAL),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::VIRTUALCONTROLS_GPS_LATTITUDE),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::VIRTUALCONTROLS_GPS_LONGITUDE),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::VIRTUALCONTROLS_GPS_MODE),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::VIRTUALCONTROLS_HEADLIGHTS_AVAILABLE_SIGNAL),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::VIRTUALCONTROLS_HEADLIGHTS_SELECTIONVALUE_SIGNAL),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::VIRTUALCONTROLS_HEADLIGHT_REMINDER),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::VIRTUALCONTROLS_HEADLIGHT_STATE_INTERNAL),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::VIRTUALCONTROLS_HILLDESCENT_CONTROL_AVAILABILITY_SIGNAL),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::VIRTUALCONTROLS_HILLDESCENT_CONTROL_DISTANCE_UNITS_SIGNAL),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::VIRTUALCONTROLS_HILLDESCENT_STATE_INTERNAL),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::VIRTUALCONTROLS_HILLDESCENT_STATUS_SIGNAL),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::VIRTUALCONTROLS_LANECENTERINGASSIST_AVAILABILITY_SIGNAL),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::VIRTUALCONTROLS_LANECENTERINGASSIST_SELECTIONVALUE_SIGNAL),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::VIRTUALCONTROLS_LANECENTERINGASSIST_STATE_INTERNAL),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::VIRTUALCONTROLS_LANECHANGEALERT_CUSTOMIZATION_CURRENTSETTINGVALUE),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::VIRTUALCONTROLS_LANEKEEPASSIST_STATE_INTERNAL),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::VIRTUALCONTROLS_LEFT_MASSAGE_AVAILABILITY_SIGNAL),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::VIRTUALCONTROLS_LEFT_MASSAGE_INTENSITY_STATUS_INTERNAL),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::VIRTUALCONTROLS_LEFT_MASSAGE_INTENSITY_STATUS_SIGNAL),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::VIRTUALCONTROLS_LIN_ANTENNA_STATUS),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::VIRTUALCONTROLS_LIN_EXECUTED_ACTION),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::VIRTUALCONTROLS_LR_SEATLOCKOUT_AVAILABLE_SIGNAL),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::VIRTUALCONTROLS_MOTIONSENSOR_AVAILABLE_SIGNAL),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::VIRTUALCONTROLS_MOTIONSENSOR_SELECTIONVALUE_SIGNAL),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::VIRTUALCONTROLS_MOTIONSENSOR_STATE_INTERNAL),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::VIRTUALCONTROLS_NIGHTVISION_BRIGHTNESS_SELECTION_VALUE),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::VIRTUALCONTROLS_NIGHTVISION_CONTRAST_SELECTION_VALUE),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::VIRTUALCONTROLS_ONEPEDALDRIVE_AVAILABLE_SIGNAL),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::VIRTUALCONTROLS_ONEPEDALDRIVE_LABEL_STATE_INTERNAL),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::VIRTUALCONTROLS_ONEPEDALDRIVE_SELECTIONVALUE_SIGNAL),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::VIRTUALCONTROLS_ONEPEDALDRIVE_STATE_INTERNAL),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::VIRTUALCONTROLS_ONEPEDALDRIVE_USERALLOWED),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::VIRTUALCONTROLS_OPTIONNAMECHARACTERS),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::VIRTUALCONTROLS_OPTIONNAMECHARACTERS_40),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::VIRTUALCONTROLS_PAB_FLASHOFF_INTEGER),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::VIRTUALCONTROLS_PAB_FLASHOFF_WITH_CANADA_INTEGER),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::VIRTUALCONTROLS_PAB_FLASHON_INTEGER),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::VIRTUALCONTROLS_PAB_FLASHON_WITH_CANADA_INTEGER),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::VIRTUALCONTROLS_PARKASSIST_STATE_INTERNAL),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::VIRTUALCONTROLS_PASSENGER_AIR_BAG_AVAILABILITY_SIGNAL),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::VIRTUALCONTROLS_PASSENGER_AIR_BAG_SELECTIONVALUE_SIGNAL),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::VIRTUALCONTROLS_PASSENGER_AIR_BAG_STATE_INTERNAL),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::VIRTUALCONTROLS_POWERASSIST_AUTO_DEPLOY_SELECTIONVALUE_SIGNAL),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::VIRTUALCONTROLS_POWERASSIST_AUTO_SELECTION_INTERNAL),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::VIRTUALCONTROLS_POWERLIFTGATE_STATE_INTERNAL),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::VIRTUALCONTROLS_POWERWINDOWLOCKOUT_CONTROL_AVAILABILITY_SIGNAL),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::VIRTUALCONTROLS_POWERWINDOWLOCKOUT_SELECTIONVALUE_SIGNAL),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::VIRTUALCONTROLS_POWERWINDOWLOCKOUT_STATE_INTERNAL),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::VIRTUALCONTROLS_RAB_USERCNTRLNOTALLOWED_SIGNAL),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::VIRTUALCONTROLS_REARFOGLIGHTS_AVAILABLE_SIGNAL),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::VIRTUALCONTROLS_REARFOGLIGHTS_SELECTIONVALUE_SIGNAL),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::VIRTUALCONTROLS_REARFOGLIGHTS_USERCNTRLALLOWED_SIGNAL),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::VIRTUALCONTROLS_REARFOGLIGHT_STATE_INTERNAL),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::VIRTUALCONTROLS_REAR_CONTROL_LOCK_INTERNAL),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::VIRTUALCONTROLS_REAR_DISPLAY_FAULT_SIGNAL),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::VIRTUALCONTROLS_REAR_STEERING_AVAILABLE_SIGNAL),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::VIRTUALCONTROLS_REAR_STEERING_CURRENT_STATUS),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::VIRTUALCONTROLS_REAR_STEERING_STATUS_INTERNAL),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::VIRTUALCONTROLS_RIGHT_MASSAGE_AVAILABILITY_SIGNAL),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::VIRTUALCONTROLS_RIGHT_MASSAGE_INTENSITY_STATUS_INTERNAL),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::VIRTUALCONTROLS_RIGHT_MASSAGE_INTENSITY_STATUS_SIGNAL),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::VIRTUALCONTROLS_ROW_INDEX),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::VIRTUALCONTROLS_RR_SEATLOCKOUT_AVAILABLE_SIGNAL),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::VIRTUALCONTROLS_SEATBET_FLASH_CANADA_INTEGER),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::VIRTUALCONTROLS_SEATBET_FLASH_INTEGER),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::VIRTUALCONTROLS_SINGLEFOGLIGHT_STATE_INTERNAL),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::VIRTUALCONTROLS_TASKLIGHTS_AVAILABLE_SIGNAL),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::VIRTUALCONTROLS_TASKLIGHTS_SELECTIONVALUE_SIGNAL),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::VIRTUALCONTROLS_TASKLIGHTS_USERCNTRLALLOWED_SIGNAL),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::VIRTUALCONTROLS_TASKLIGHT_LEFT_STATE_INTERNAL),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::VIRTUALCONTROLS_TASKLIGHT_RIGHT_STATE_INTERNAL),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::VIRTUALCONTROLS_TASKLIGHT_STATE_INTERNAL),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::VIRTUALCONTROLS_THERMALWARNING_STATE),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::VIRTUALCONTROLS_TRACTION_CONTROL_COMP_CURRENT_STATUS_SIGNAL),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::VIRTUALCONTROLS_TRACTION_CONTROL_CURRENT_STATUS_SIGNAL),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::VIRTUALCONTROLS_TRACTION_CONTROL_ESC_CURRENT_STATUS_SIGNAL),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::VIRTUALCONTROLS_TRACTION_ESC_STATE_INTERNAL),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::VIRTUALCONTROLS_TRACTION_STABILITY_SCREEN_CONFIG_SIGNAL),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::VIRTUALCONTROLS_TRACTION_STATE_INTERNAL),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::VIRTUALCONTROLS_UGDO_OPTIONS_AUTO_CLOSE),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::VIRTUALCONTROLS_UGDO_OPTIONS_AUTO_OPEN),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::VIRTUALCONTROLS_UGDO_REMOTES_OPTIONS_INDEX),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::VIRTUALCONTROLS_UGDO_REMOTE_OPTIONS_UPDATE),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::VIRTUALCONTROLS_WAKESCREEN_ANDROID_BUTTON_STATE),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::VIRTUAL_CONTROL_BRIGHTNESS_VALUE_UPDATE_INTERNAL),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::VIRTUAL_CONTROL_HEIGHT_VALUE_UPDATE_INTERNAL),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::VIRTUAL_CONTROL_HUD_POWER_BUTTON_STATE_INTERNAL),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::VIRTUAL_CONTROL_HUD_TEXT_STATE_INTERNAL),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::VIRTUAL_CONTROL_ROTATION_VALUE_UPDATE_INTERNAL),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::VPM_CAMERA_BOWL_X_LOCATION_UPDATE),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::VPM_CAMERA_BOWL_Y_LOCATION_UPDATE),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::VPM_CAMERA_HITCH_X_LOCATION_UPDATE),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::VPM_CAMERA_HITCH_Y_LOCATION_UPDATE),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::VPM_CAMERA_SETTINGS_X_LOCATION_UPDATE),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::VPM_CAMERA_SETTINGS_Y_LOCATION_UPDATE),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::VPM_CAMERA_ZOOM_BUTTON_SELECTION),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::VPM_FF_Camera_View),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::VPM_FRONT_AND_REAR_BUTTONS_STATE_INTERNAL),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::VPM_FRONT_AND_REAR_NORMAL_BUTTONS_STATE_INTERNAL),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::VPM_FRONT_AND_REAR_OVERHEAD_BUTTONS_STATE_INTERNAL),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::VPM_FRONT_AND_REAR_SIDE_BUTTONS_STATE_INTERNAL),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::VPM_FRONT_CAMERA_BOWL_STATE_INTERNAL),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::VPM_MFCBOWL),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::VPM_REAR_CAMERA_HITCH_INTERNAL),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::VPM_SAFETYSYSTEM_GUIDES),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::csm::VPM_SAFETYSYSTEM_PARKASSIST),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::datapool::Data_APA_ACTIVITY_INDICATOR_DATA),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::datapool::Data_APA_BASE_ID),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::datapool::Data_APA_EXIT),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::datapool::Data_APA_MAX),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::datapool::Data_APA_PARK_DRAWER_EXIT),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::datapool::Data_APA_PARK_INSTRUCTION_TYPE),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::datapool::Data_APA_REQ_STATE),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::datapool::Data_APA_WARNING_INDICATION_TYPE),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::datapool::Data_APPROACH_ANIMATION_ACTIVE),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::datapool::Data_APPROACH_ANIMATION_START),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::datapool::Data_BRAND_ANIMATION_START),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::datapool::Data_BRAND_ANIMATION_START_TIMER),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::datapool::Data_DATA_APA_AVAILABLE),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::datapool::Data_DATA_CAMERA_VISIBILITY),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::datapool::Data_DATA_MFC_KEY_HANDLE),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::datapool::Data_DATA_SETTINGICON_STATE),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::datapool::Data_DATA_SETTINGICON_VISIBILITY),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::datapool::Data_RTOS_ANDROID_BLOCK_FLYOUTS),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::datapool::Data_RTOS_ANIMATION_ID),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::datapool::Data_RTOS_APA_SNACKBAR),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::datapool::Data_RTOS_APP_BRIGHTNESS),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::datapool::Data_RTOS_BASE_ID),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::datapool::Data_RTOS_CAMERA_AVAILABLE_STATUS),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::datapool::Data_RTOS_CAMERA_VIEW_AVAILABILITY),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::datapool::Data_RTOS_END_ID),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::datapool::Data_RTOS_IVI_READY_CHECK),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::datapool::Data_RTOS_NOT_IN_REVERSE_GEAR),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::datapool::Data_RTOS_PINTOSTART_SCREEN_ID),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::datapool::Data_RTOS_SAS_REQUEST_RESPONSE),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::datapool::Data_RTOS_SUSD_SYS_STATE),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::datapool::Data_RTOS_TIME_ENABLE),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::datapool::Data_RTOS_VIRTUALOFF_BURNER),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::datapool::Data_RTOS_VOLUME_KNOB_ENABLE),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::datapool::Data_WELCOME_ANIMATION_ENABLED),
    reinterpret_cast<::Bindable<int32_t>*>(&gm::datapool::Data_WELCOME_ANIMATION_START)
    }
};


static const std::array<::Bindable<ramp::CString<13>>*, 2> mBindables_CString_13
{
    {
        &gm::csm::VIRTUALCONTROLS_TEMP_INTERNAL,
    &gm::csm::VPM_TEMP_INTERNAL
    }
};


static const std::array<::Bindable<std::string>*, 58> mBindables_string
{
    {
        &gm::csm::Camera_VPM_BOTTOM_BAR_LIST_LAYOUT,
    &gm::csm::DATA_REMOTE_PARK_DYNAMIC_LABEL,
    &gm::csm::Data_ANDROID_KEYBOARD_SAVED_TEXT,
    &gm::csm::Data_CRAB_WALK_FEATURE_NAME,
    &gm::csm::Data_HVAC_AIRCONDITION_VALUE_STR,
    &gm::csm::Data_HVAC_AIR_DIS_AUTO_STR,
    &gm::csm::Data_HVAC_FRONT_LEFTSETTEMP,
    &gm::csm::Data_HVAC_FRONT_RIGHTSETTEMP,
    &gm::csm::Data_HVAC_REAR_TEMP,
    &gm::csm::Data_HVAC_TEMP_REAR,
    &gm::csm::Data_ICS_TEMP_INTERNAL,
    &gm::csm::Data_ICS_TIME_INTERNAL,
    &gm::csm::Data_KEYBOARD_INPUT_TEXT,
    &gm::csm::Data_NIGHT_VISION_BRIGHTNESS_TEXT,
    &gm::csm::Data_NIGHT_VISION_CONTRAST_TEXT,
    &gm::csm::Data_NOTIFICATION_SCREEN_ID,
    &gm::csm::Data_OVERLAY_SCREEN_ID,
    &gm::csm::Data_SAVE_CAMERA_SCREEN_ID,
    &gm::csm::Data_SAVE_CAMERA_SMART_CONTROLS_PAGE_ID,
    &gm::csm::Data_SETTINGS_UNITS,
    &gm::csm::Data_TIME_DISPLAY,
    &gm::csm::Data_TRANSAPARENT_TRAILER_STRING_UPDATE,
    &gm::csm::Data_UGDO_REMOTE_NAME_TEXT,
    &gm::csm::Data_VC_TRACTIONCONTROL_DESCRIPTION,
    &gm::csm::Data_VIRTUAL_CONTROLS_AUX1_NAME,
    &gm::csm::Data_VIRTUAL_CONTROLS_AUX2_NAME,
    &gm::csm::Data_VIRTUAL_CONTROLS_AUX3_NAME,
    &gm::csm::Data_VIRTUAL_CONTROLS_AUX4_NAME,
    &gm::csm::Data_VIRTUAL_CONTROLS_AUX5_NAME,
    &gm::csm::Data_VIRTUAL_CONTROLS_AUX6_NAME,
    &gm::csm::Data_VIRTUAL_CONTROLS_AUX_NAME,
    &gm::csm::Data_VIRTUAL_CONTROLS_OPTIONS_NAME,
    &gm::csm::Data_VIRTUAL_CONTROLS_REARSTEERING_STRING_UPDATE,
    &gm::csm::Data_VIRTUAL_CONTROLS_UPDATED_AUX1_NAME,
    &gm::csm::Data_VIRTUAL_CONTROLS_UPDATED_AUX2_NAME,
    &gm::csm::Data_VIRTUAL_CONTROLS_UPDATED_AUX3_NAME,
    &gm::csm::Data_VIRTUAL_CONTROLS_UPDATED_AUX4_NAME,
    &gm::csm::Data_VIRTUAL_CONTROLS_UPDATED_AUX5_NAME,
    &gm::csm::Data_VIRTUAL_CONTROLS_UPDATED_AUX6_NAME,
    &gm::csm::Data_VIRTUAL_CONTROLS_UPDATE_PARK_ASSIST_LABEL_TEXT,
    &gm::csm::Data_VIRTUAL_CONTROLS_UPDATE_RAB_LABEL_TEXT,
    &gm::csm::SMARTCONTROLS_PEEKIN_CHARGE_POWER_PORT_LIMIT,
    &gm::csm::SMARTCONTROLS_PEEKIN_ENDING_TEXT,
    &gm::csm::SMARTCONTROLS_PEEKIN_TIME_AM_OR_PM,
    &gm::csm::SMARTCONTROLS_PEEKIN_TIME_MINUTES,
    &gm::csm::SMARTCONTROLS_SUMMARY_SCREEN_TEXT,
    &gm::csm::SMARTCONTRSOLS_OFFPOWERMODE_ENERGY_USED_DISCHARGE,
    &gm::csm::SMARTCONTRSOLS_OUTLET_HEADER,
    &gm::csm::SMARTCONTRSOLS_RANGE_MEASURE_OF_DISTANCE,
    &gm::csm::SMARTCONTRSOLS_RANGE_RESERVE_PERCENT_TEXT,
    &gm::csm::VIRTUALCONTROLS_OPD_LEVEL_TEXT_INTERNAL,
    &gm::csm::VIRTUALCONTROLS_REMOTENAME,
    &gm::csm::VIRTUALCONTROLS_REMOTENAME_AUTO,
    &gm::csm::VIRTUALCONTROLS_REMOTENAME_NAME,
    &gm::csm::VIRTUALCONTROLS_REMOTENAME_OPTION,
    &gm::csm::VIRTUALCONTROLS_TIME_FOR_MIN_INTERNAL,
    &gm::csm::VIRTUALCONTROLS_UGDO_ASSISTANCE,
    &gm::csm::VPM_TIME_FOR_MIN_INTERNAL
    }
};


static const std::array<::Bindable<uint16_t>*, 1> mBindables_uint16_t
{
    {
        reinterpret_cast<::Bindable<uint16_t>*>(&gm::csm::ICS_DISPLAY_BRIGHTNESS_VALUE)
    }
};


static const std::array<::Bindable<uint32_t>*, 11> mBindables_uint32_t
{
    {
        reinterpret_cast<::Bindable<uint32_t>*>(&gm::csm::Data_APA_CAMERA_SUPPORT_VIEW),
    reinterpret_cast<::Bindable<uint32_t>*>(&gm::csm::Data_Language_Setting),
    reinterpret_cast<::Bindable<uint32_t>*>(&gm::csm::Data_TIMER_TICK),
    reinterpret_cast<::Bindable<uint32_t>*>(&gm::csm::FU_HMIC_Timer_Tick_180_MilliSec),
    reinterpret_cast<::Bindable<uint32_t>*>(&gm::csm::FU_HMIC_Timer_Tick_20_MilliSec),
    reinterpret_cast<::Bindable<uint32_t>*>(&gm::csm::FU_HMIC_Timer_Tick_250_MilliSec),
    reinterpret_cast<::Bindable<uint32_t>*>(&gm::csm::FU_HMIC_Timer_Tick_3000_MilliSec),
    reinterpret_cast<::Bindable<uint32_t>*>(&gm::csm::Rtos_HMIC_CurrentScreen),
    reinterpret_cast<::Bindable<uint32_t>*>(&gm::csm::VIRTUALCONTROLS_AUX_NAMECHARACTER_COUNT),
    reinterpret_cast<::Bindable<uint32_t>*>(&gm::csm::VIRTUALCONTROLS_CHARACTER_COUNT),
    reinterpret_cast<::Bindable<uint32_t>*>(&gm::csm::VIRTUALCONTROLS_REMOTES_DISTANCE_FEETS)
    }
};


static const std::array<::Bindable<uint8_t>*, 9> mBindables_uint8_t
{
    {
        reinterpret_cast<::Bindable<uint8_t>*>(&gm::csm::VIRTUALCONTROLS_DELETED_CHANNEL_NUMBER),
    reinterpret_cast<::Bindable<uint8_t>*>(&gm::csm::VIRTUALCONTROLS_LIN_2_WAY_FEDDBACK),
    reinterpret_cast<::Bindable<uint8_t>*>(&gm::csm::VIRTUALCONTROLS_LIN_AVAILABLE_CHANNEL_NUMBER),
    reinterpret_cast<::Bindable<uint8_t>*>(&gm::csm::VIRTUALCONTROLS_LIN_COM_STATUS),
    reinterpret_cast<::Bindable<uint8_t>*>(&gm::csm::VIRTUALCONTROLS_LIN_EXECUTED_CHANNEL_NUMBER),
    reinterpret_cast<::Bindable<uint8_t>*>(&gm::csm::VIRTUALCONTROLS_LIN_PROGRAMMED_CHANNEL_NUMBER),
    reinterpret_cast<::Bindable<uint8_t>*>(&gm::csm::VIRTUALCONTROLS_LIN_SELF_TEST_RESULTS),
    reinterpret_cast<::Bindable<uint8_t>*>(&gm::csm::VIRTUALCONTROLS_UGDO_COUNT),
    reinterpret_cast<::Bindable<uint8_t>*>(&gm::csm::VIRTUALCONTROLS_UGDO_REMOTES_UNDER_GEOFENCING)
    }
};

#ifdef __cplusplus
extern "C" { 
#endif

DECL_DLL_SPEC void showScreen_Helper(const char_t* value);

#ifdef __cplusplus
}
#endif



#ifdef __cplusplus
extern "C" { 
#endif

DECL_DLL_SPEC void hideScreen_Helper(const char_t* value);

#ifdef __cplusplus
}
#endif



#ifdef __cplusplus
extern "C" { 
#endif

DECL_DLL_SPEC void setData_bool(uint32_t id, bool value);

#ifdef __cplusplus
}
#endif



#ifdef __cplusplus
extern "C" { 
#endif

DECL_DLL_SPEC void setData_double_t(uint32_t id, double_t value);

#ifdef __cplusplus
}
#endif



#ifdef __cplusplus
extern "C" { 
#endif

DECL_DLL_SPEC void setData_float_t(uint32_t id, float_t value);

#ifdef __cplusplus
}
#endif



#ifdef __cplusplus
extern "C" { 
#endif

DECL_DLL_SPEC void setData_int32_t(uint32_t id, int32_t value);

#ifdef __cplusplus
}
#endif



#ifdef __cplusplus
extern "C" { 
#endif

DECL_DLL_SPEC void setData_CString_13(uint32_t id, ramp::CString<13> value);

#ifdef __cplusplus
}
#endif



#ifdef __cplusplus
extern "C" { 
#endif

DECL_DLL_SPEC void setData_string(uint32_t id, const char_t* value);

#ifdef __cplusplus
}
#endif



#ifdef __cplusplus
extern "C" { 
#endif

DECL_DLL_SPEC void setData_uint16_t(uint32_t id, uint16_t value);

#ifdef __cplusplus
}
#endif



#ifdef __cplusplus
extern "C" { 
#endif

DECL_DLL_SPEC void setData_uint32_t(uint32_t id, uint32_t value);

#ifdef __cplusplus
}
#endif



#ifdef __cplusplus
extern "C" { 
#endif

DECL_DLL_SPEC void setData_uint8_t(uint32_t id, uint8_t value);

#ifdef __cplusplus
}
#endif


} // namespace csm
} // namespace gm

#endif // BINDABLEDATAAPI_H
