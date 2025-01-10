// Copyright (C) GM Global Technology Operations LLC 2024.
// All Rights Reserved.
// GM Confidential Restricted.
// 
// Designed and Developed by Rampgroup, © 2024 People Tech Group all rights reserved.

#include "Screen_6078.h"

#include "RTOS_InternalData.h"
#include <cstdlib>

namespace gm
{
namespace csm
{


void Screen_6078::onScreenHide()
{
    Image_img_settings_launcher_icon.mVisibility.unBind(gm::csm::PERSISTENT_SETTING_ICON_VISIBILITY, mBindingsIds[0U]);
    Image_img_settings_launcher_icon.mState.unBind(gm::csm::PERSISTENT_SETTING_ICON_STATE, mBindingsIds[1U]);
    Image_img_persistent_controls_voc_lane_keep_assist.mVisibility.unBind(gm::csm::Data_PERSISTENT_CONTROL_LANEKEEPASSIST_VISIBILITY, mBindingsIds[2U]);
    Image_img_persistent_controls_voc_lane_keep_assist.mState.unBind(gm::csm::VIRTUALCONTROLS_LANEKEEPASSIST_STATE_INTERNAL, mBindingsIds[3U]);
    Image_img_expanded_arrow.mVisibility.unBind(gm::csm::Data_SMART_CONTROLS_EXPANDED_ICON_VISIBILITY, mBindingsIds[4U]);
    Image_img_expanded_arrow.mState.unBind(gm::csm::Data_SMART_CONTROLS_EXPANDED_ICON_STATE, mBindingsIds[5U]);
    Image_img_bg.mVisibility.unBind(gm::csm::Data_Persistent_Bg_Visibility, mBindingsIds[6U]);
    Image_img_persistent_controls_control_icon.mVisibility.unBind(gm::csm::Data_Persistent_Controls_Icon_Visibility, mBindingsIds[7U]);
    Image_img_persistent_controls_control_icon.mState.unBind(gm::csm::PERSISTENT_VIRTUAL_CONTROL_ICON_STATE, mBindingsIds[8U]);
    Image_img_persistent_controls_lights_headlights.mVisibility.unBind(gm::csm::Data_PERSISTENT_CONTROL_HEADLIGHTS_VISIBILITY, mBindingsIds[9U]);
}

void Screen_6078::onScreenShow()
{
    mBindingsIds[0U] = Image_img_settings_launcher_icon.mVisibility.bind(gm::csm::PERSISTENT_SETTING_ICON_VISIBILITY);
    mBindingsIds[1U] = Image_img_settings_launcher_icon.mState.bind(gm::csm::PERSISTENT_SETTING_ICON_STATE);
    mBindingsIds[2U] = Image_img_persistent_controls_voc_lane_keep_assist.mVisibility.bind(gm::csm::Data_PERSISTENT_CONTROL_LANEKEEPASSIST_VISIBILITY);
    mBindingsIds[3U] = Image_img_persistent_controls_voc_lane_keep_assist.mState.bind(gm::csm::VIRTUALCONTROLS_LANEKEEPASSIST_STATE_INTERNAL);
    mBindingsIds[4U] = Image_img_expanded_arrow.mVisibility.bind(gm::csm::Data_SMART_CONTROLS_EXPANDED_ICON_VISIBILITY);
    mBindingsIds[5U] = Image_img_expanded_arrow.mState.bind(gm::csm::Data_SMART_CONTROLS_EXPANDED_ICON_STATE);
    mBindingsIds[6U] = Image_img_bg.mVisibility.bind(gm::csm::Data_Persistent_Bg_Visibility);
    mBindingsIds[7U] = Image_img_persistent_controls_control_icon.mVisibility.bind(gm::csm::Data_Persistent_Controls_Icon_Visibility);
    mBindingsIds[8U] = Image_img_persistent_controls_control_icon.mState.bind(gm::csm::PERSISTENT_VIRTUAL_CONTROL_ICON_STATE);
    mBindingsIds[9U] = Image_img_persistent_controls_lights_headlights.mVisibility.bind(gm::csm::Data_PERSISTENT_CONTROL_HEADLIGHTS_VISIBILITY);
}


} // namespace csm
} // namespace gm
