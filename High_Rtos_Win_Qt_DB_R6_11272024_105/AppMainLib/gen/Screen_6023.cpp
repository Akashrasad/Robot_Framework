// Copyright (C) GM Global Technology Operations LLC 2024.
// All Rights Reserved.
// GM Confidential Restricted.
// 
// Designed and Developed by Rampgroup, © 2024 People Tech Group all rights reserved.

#include "Screen_6023.h"

#include "RTOS_InternalData.h"
#include <cstdlib>

namespace gm
{
namespace csm
{


void Screen_6023::Widget_Logic_Visibility_img_controls_icn_fog_front() noexcept
{
    const bool var_002 = gm::csm::VIRTUALCONTROLS_CONTROL_PAGE_WHILE_DRIVING_INTERNAL.data();
    const bool var_001 = !(var_002);
    
    Image_img_controls_icn_fog_front.mVisibility = var_001;
}

void Screen_6023::Widget_Logic_Visibility_virtualcontrols_1_4_0_4_fog1_csm() noexcept
{
    const bool var_004 = gm::csm::VIRTUALCONTROLS_CONTROL_PAGE_WHILE_DRIVING_INTERNAL.data();
    const bool var_003 = !(var_004);
    
    Label_virtualcontrols_1_4_0_4_fog1_csm.mVisibility = var_003;
}

void Screen_6023::Widget_Logic_Visibility_img_close() noexcept
{
    const bool var_009 = gm::csm::VIRTUALCONTROLS_ANDROID_NOIVI_STATE.data();
    const bool var_008 = !(var_009);
    
    const bool var_006 = gm::csm::VIRTUALCONTROLS_ANDROID_LAUNCH_VISIBILITY.data();
    const bool var_007 = var_008;
    const bool var_005 = var_006 && var_007;
    
    Image_img_close.mVisibility = var_005;
}

void Screen_6023::Widget_Logic_Visibility_img_placeholder_WakeScreen() noexcept
{
    const bool var_011 = gm::csm::VIRTUALCONTROLS_ANDROID_LAUNCH_VISIBILITY.data();
    const bool var_010 = !(var_011);
    
    GroupImage_img_placeholder_WakeScreen.mVisibility = var_010;
}

void Screen_6023::Widget_Logic_Visibility_grp_placeholder_WakeScreen() noexcept
{
    const bool var_013 = gm::csm::VIRTUALCONTROLS_ANDROID_LAUNCH_VISIBILITY.data();
    const bool var_012 = !(var_013);
    
    Group_grp_placeholder_WakeScreen.mVisibility = var_012;
}

void Screen_6023::Widget_Logic_Visibility_virtualcontrols_1_0_4_wakeScreenExit_csm() noexcept
{
    const bool var_015 = gm::csm::VIRTUALCONTROLS_ANDROID_LAUNCH_VISIBILITY.data();
    const bool var_014 = !(var_015);
    
    GroupLabel_virtualcontrols_1_0_4_wakeScreenExit_csm.mVisibility = var_014;
}

void Screen_6023::onScreenHide()
{
    Label_virtualcontrols_1_4_fogFront_csm.mState.unBind(gm::csm::Data_RHD_TITLE_ALIGNMENT_STATE, mBindingsIds[0U]);
    GroupImage_img_placeholder_WakeScreen.mState.unBind(gm::csm::VIRTUALCONTROLS_WAKESCREEN_ANDROID_BUTTON_STATE, mBindingsIds[1U]);
    Label_virtualcontrols_0_0_detailsUnavailable_csm.mVisibility.unBind(gm::csm::VIRTUALCONTROLS_CONTROL_PAGE_WHILE_DRIVING_INTERNAL, mBindingsIds[2U]);
    Label_virtualcontrols_1_4_0_5_FogFrontOn_csm.mState.unBind(gm::csm::VIRTUALCONTROLS_FRONTFOGLIGHT_STATE_INTERNAL, mBindingsIds[3U]);
    Label_virtualcontrols_1_4_0_5_FogFrontOff_csm.mState.unBind(gm::csm::VIRTUALCONTROLS_FRONTFOGLIGHT_STATE_INTERNAL, mBindingsIds[4U]);
    Image_img_radio_button_Off.mState.unBind(gm::csm::VIRTUALCONTROLS_FRONTFOGLIGHT_STATE_INTERNAL, mBindingsIds[5U]);
    Image_img_radio_button_on.mState.unBind(gm::csm::VIRTUALCONTROLS_FRONTFOGLIGHT_STATE_INTERNAL, mBindingsIds[6U]);
}

void Screen_6023::onScreenShow()
{
    mBindingsIds[0U] = Label_virtualcontrols_1_4_fogFront_csm.mState.bind(gm::csm::Data_RHD_TITLE_ALIGNMENT_STATE);
    addDependency(this, &Screen_6023::Widget_Logic_Visibility_img_controls_icn_fog_front, gm::csm::VIRTUALCONTROLS_CONTROL_PAGE_WHILE_DRIVING_INTERNAL);
    addDependency(this, &Screen_6023::Widget_Logic_Visibility_virtualcontrols_1_4_0_4_fog1_csm, gm::csm::VIRTUALCONTROLS_CONTROL_PAGE_WHILE_DRIVING_INTERNAL);
    addDependency(this, &Screen_6023::Widget_Logic_Visibility_img_close, gm::csm::VIRTUALCONTROLS_ANDROID_LAUNCH_VISIBILITY,gm::csm::VIRTUALCONTROLS_ANDROID_NOIVI_STATE);
    addDependency(this, &Screen_6023::Widget_Logic_Visibility_img_placeholder_WakeScreen, gm::csm::VIRTUALCONTROLS_ANDROID_LAUNCH_VISIBILITY);
    mBindingsIds[1U] = GroupImage_img_placeholder_WakeScreen.mState.bind(gm::csm::VIRTUALCONTROLS_WAKESCREEN_ANDROID_BUTTON_STATE);
    mBindingsIds[2U] = Label_virtualcontrols_0_0_detailsUnavailable_csm.mVisibility.bind(gm::csm::VIRTUALCONTROLS_CONTROL_PAGE_WHILE_DRIVING_INTERNAL);
    addDependency(this, &Screen_6023::Widget_Logic_Visibility_grp_placeholder_WakeScreen, gm::csm::VIRTUALCONTROLS_ANDROID_LAUNCH_VISIBILITY);
    mBindingsIds[3U] = Label_virtualcontrols_1_4_0_5_FogFrontOn_csm.mState.bind(gm::csm::VIRTUALCONTROLS_FRONTFOGLIGHT_STATE_INTERNAL);
    mBindingsIds[4U] = Label_virtualcontrols_1_4_0_5_FogFrontOff_csm.mState.bind(gm::csm::VIRTUALCONTROLS_FRONTFOGLIGHT_STATE_INTERNAL);
    mBindingsIds[5U] = Image_img_radio_button_Off.mState.bind(gm::csm::VIRTUALCONTROLS_FRONTFOGLIGHT_STATE_INTERNAL);
    mBindingsIds[6U] = Image_img_radio_button_on.mState.bind(gm::csm::VIRTUALCONTROLS_FRONTFOGLIGHT_STATE_INTERNAL);
    addDependency(this, &Screen_6023::Widget_Logic_Visibility_virtualcontrols_1_0_4_wakeScreenExit_csm, gm::csm::VIRTUALCONTROLS_ANDROID_LAUNCH_VISIBILITY);
}


} // namespace csm
} // namespace gm
