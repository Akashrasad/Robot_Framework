// Copyright (C) GM Global Technology Operations LLC 2024.
// All Rights Reserved.
// GM Confidential Restricted.
// 
// Designed and Developed by Rampgroup, © 2024 People Tech Group all rights reserved.

#include "Screen_6025.h"

#include "RTOS_InternalData.h"
#include <cstdlib>

namespace gm
{
namespace csm
{


void Screen_6025::Widget_Logic_Visibility_virtualcontrols_1_4_0_7_fog_front_rear_csm() noexcept
{
    const bool var_002 = gm::csm::VIRTUALCONTROLS_CONTROL_PAGE_WHILE_DRIVING_INTERNAL.data();
    const bool var_001 = !(var_002);
    
    Label_virtualcontrols_1_4_0_7_fog_front_rear_csm.mVisibility = var_001;
}

void Screen_6025::Widget_Logic_Visibility_img_close() noexcept
{
    const bool var_007 = gm::csm::VIRTUALCONTROLS_ANDROID_NOIVI_STATE.data();
    const bool var_006 = !(var_007);
    
    const bool var_004 = gm::csm::VIRTUALCONTROLS_ANDROID_LAUNCH_VISIBILITY.data();
    const bool var_005 = var_006;
    const bool var_003 = var_004 && var_005;
    
    Image_img_close.mVisibility = var_003;
}

void Screen_6025::Widget_Logic_Visibility_img_controls_icn_fog_front() noexcept
{
    const bool var_009 = gm::csm::VIRTUALCONTROLS_CONTROL_PAGE_WHILE_DRIVING_INTERNAL.data();
    const bool var_008 = !(var_009);
    
    Image_img_controls_icn_fog_front.mVisibility = var_008;
}

void Screen_6025::Widget_Logic_Visibility_virtualcontrols_1_0_4_wakeScreenExit_csm() noexcept
{
    const bool var_011 = gm::csm::VIRTUALCONTROLS_ANDROID_LAUNCH_VISIBILITY.data();
    const bool var_010 = !(var_011);
    
    GroupLabel_virtualcontrols_1_0_4_wakeScreenExit_csm.mVisibility = var_010;
}

void Screen_6025::Widget_Logic_Visibility_img_placeholder_WakeScreen() noexcept
{
    const bool var_013 = gm::csm::VIRTUALCONTROLS_ANDROID_LAUNCH_VISIBILITY.data();
    const bool var_012 = !(var_013);
    
    GroupImage_img_placeholder_WakeScreen.mVisibility = var_012;
}

void Screen_6025::Widget_Logic_Visibility_grp_placeholder_WakeScreen() noexcept
{
    const bool var_015 = gm::csm::VIRTUALCONTROLS_ANDROID_LAUNCH_VISIBILITY.data();
    const bool var_014 = !(var_015);
    
    Group_grp_placeholder_WakeScreen.mVisibility = var_014;
}

void Screen_6025::onScreenHide()
{
    Label_virtualcontrols_0_0_detailsUnavailable_csm.mVisibility.unBind(gm::csm::VIRTUALCONTROLS_CONTROL_PAGE_WHILE_DRIVING_INTERNAL, mBindingsIds[0U]);
    Image_img_radio_button_Rear_On.mState.unBind(gm::csm::VIRTUALCONTROLS_DUALFOGLIGHT_STATE_INTERNAL, mBindingsIds[1U]);
    Label_virtualcontrols_1_4_fog_csm.mState.unBind(gm::csm::Data_RHD_TITLE_ALIGNMENT_STATE, mBindingsIds[2U]);
    Label_virtualcontrols_1_4_0_7_fog_front_rear_both_on_csm.mState.unBind(gm::csm::VIRTUALCONTROLS_DUALFOGLIGHT_STATE_INTERNAL, mBindingsIds[3U]);
    Image_img_radio_button_Both_Off.mState.unBind(gm::csm::VIRTUALCONTROLS_DUALFOGLIGHT_STATE_INTERNAL, mBindingsIds[4U]);
    Label_virtualcontrols_1_4_0_7_fog_front_rear_front_on_csm.mState.unBind(gm::csm::VIRTUALCONTROLS_DUALFOGLIGHT_STATE_INTERNAL, mBindingsIds[5U]);
    GroupImage_img_placeholder_WakeScreen.mState.unBind(gm::csm::VIRTUALCONTROLS_WAKESCREEN_ANDROID_BUTTON_STATE, mBindingsIds[6U]);
    Label_virtualcontrols_1_4_0_7_fog_front_rear_rear_on_csm.mState.unBind(gm::csm::VIRTUALCONTROLS_DUALFOGLIGHT_STATE_INTERNAL, mBindingsIds[7U]);
    Image_img_radio_button_Front_On.mState.unBind(gm::csm::VIRTUALCONTROLS_DUALFOGLIGHT_STATE_INTERNAL, mBindingsIds[8U]);
    Label_virtualcontrols_1_4_0_7_fog_front_rear_both_off_csm.mState.unBind(gm::csm::VIRTUALCONTROLS_DUALFOGLIGHT_STATE_INTERNAL, mBindingsIds[9U]);
    Image_img_radio_button_Both_On.mState.unBind(gm::csm::VIRTUALCONTROLS_DUALFOGLIGHT_STATE_INTERNAL, mBindingsIds[10U]);
}

void Screen_6025::onScreenShow()
{
    mBindingsIds[0U] = Label_virtualcontrols_0_0_detailsUnavailable_csm.mVisibility.bind(gm::csm::VIRTUALCONTROLS_CONTROL_PAGE_WHILE_DRIVING_INTERNAL);
    mBindingsIds[1U] = Image_img_radio_button_Rear_On.mState.bind(gm::csm::VIRTUALCONTROLS_DUALFOGLIGHT_STATE_INTERNAL);
    mBindingsIds[2U] = Label_virtualcontrols_1_4_fog_csm.mState.bind(gm::csm::Data_RHD_TITLE_ALIGNMENT_STATE);
    addDependency(this, &Screen_6025::Widget_Logic_Visibility_virtualcontrols_1_4_0_7_fog_front_rear_csm, gm::csm::VIRTUALCONTROLS_CONTROL_PAGE_WHILE_DRIVING_INTERNAL);
    addDependency(this, &Screen_6025::Widget_Logic_Visibility_img_close, gm::csm::VIRTUALCONTROLS_ANDROID_LAUNCH_VISIBILITY,gm::csm::VIRTUALCONTROLS_ANDROID_NOIVI_STATE);
    addDependency(this, &Screen_6025::Widget_Logic_Visibility_img_controls_icn_fog_front, gm::csm::VIRTUALCONTROLS_CONTROL_PAGE_WHILE_DRIVING_INTERNAL);
    mBindingsIds[3U] = Label_virtualcontrols_1_4_0_7_fog_front_rear_both_on_csm.mState.bind(gm::csm::VIRTUALCONTROLS_DUALFOGLIGHT_STATE_INTERNAL);
    mBindingsIds[4U] = Image_img_radio_button_Both_Off.mState.bind(gm::csm::VIRTUALCONTROLS_DUALFOGLIGHT_STATE_INTERNAL);
    mBindingsIds[5U] = Label_virtualcontrols_1_4_0_7_fog_front_rear_front_on_csm.mState.bind(gm::csm::VIRTUALCONTROLS_DUALFOGLIGHT_STATE_INTERNAL);
    addDependency(this, &Screen_6025::Widget_Logic_Visibility_virtualcontrols_1_0_4_wakeScreenExit_csm, gm::csm::VIRTUALCONTROLS_ANDROID_LAUNCH_VISIBILITY);
    addDependency(this, &Screen_6025::Widget_Logic_Visibility_img_placeholder_WakeScreen, gm::csm::VIRTUALCONTROLS_ANDROID_LAUNCH_VISIBILITY);
    mBindingsIds[6U] = GroupImage_img_placeholder_WakeScreen.mState.bind(gm::csm::VIRTUALCONTROLS_WAKESCREEN_ANDROID_BUTTON_STATE);
    addDependency(this, &Screen_6025::Widget_Logic_Visibility_grp_placeholder_WakeScreen, gm::csm::VIRTUALCONTROLS_ANDROID_LAUNCH_VISIBILITY);
    mBindingsIds[7U] = Label_virtualcontrols_1_4_0_7_fog_front_rear_rear_on_csm.mState.bind(gm::csm::VIRTUALCONTROLS_DUALFOGLIGHT_STATE_INTERNAL);
    mBindingsIds[8U] = Image_img_radio_button_Front_On.mState.bind(gm::csm::VIRTUALCONTROLS_DUALFOGLIGHT_STATE_INTERNAL);
    mBindingsIds[9U] = Label_virtualcontrols_1_4_0_7_fog_front_rear_both_off_csm.mState.bind(gm::csm::VIRTUALCONTROLS_DUALFOGLIGHT_STATE_INTERNAL);
    mBindingsIds[10U] = Image_img_radio_button_Both_On.mState.bind(gm::csm::VIRTUALCONTROLS_DUALFOGLIGHT_STATE_INTERNAL);
}


} // namespace csm
} // namespace gm
