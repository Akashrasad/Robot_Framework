// Copyright (C) GM Global Technology Operations LLC 2024.
// All Rights Reserved.
// GM Confidential Restricted.
// 
// Designed and Developed by Rampgroup, © 2024 People Tech Group all rights reserved.

#include "Screen_6008.h"

#include "RTOS_InternalData.h"
#include <cstdlib>

namespace gm
{
namespace csm
{


void Screen_6008::Widget_Logic_Visibility_virtualcontrols_1_0_4_wakeScreenExit_csm() noexcept
{
    const bool var_002 = gm::csm::VIRTUALCONTROLS_ANDROID_LAUNCH_VISIBILITY.data();
    const bool var_001 = !(var_002);
    
    GroupLabel_virtualcontrols_1_0_4_wakeScreenExit_csm.mVisibility = var_001;
}

void Screen_6008::Widget_Logic_Visibility_virtualcontrols_1_1_exitBtn_csm() noexcept
{
    const bool var_007 = gm::csm::VIRTUALCONTROLS_ANDROID_NOIVI_STATE.data();
    const bool var_006 = !(var_007);
    
    const bool var_004 = gm::csm::VIRTUALCONTROLS_ANDROID_LAUNCH_VISIBILITY.data();
    const bool var_005 = var_006;
    const bool var_003 = var_004 && var_005;
    
    Label_virtualcontrols_1_1_exitBtn_csm.mVisibility = var_003;
}

void Screen_6008::Widget_Logic_Visibility_virtualcontrols_1_2_0_4_liftgate_csm() noexcept
{
    const bool var_009 = gm::csm::VIRTUALCONTROLS_CONTROL_PAGE_WHILE_DRIVING_INTERNAL.data();
    const bool var_008 = !(var_009);
    
    Label_virtualcontrols_1_2_0_4_liftgate_csm.mVisibility = var_008;
}

void Screen_6008::Widget_Logic_Visibility_grp_placeholder_WakeScreen() noexcept
{
    const bool var_011 = gm::csm::VIRTUALCONTROLS_ANDROID_LAUNCH_VISIBILITY.data();
    const bool var_010 = !(var_011);
    
    Group_grp_placeholder_WakeScreen.mVisibility = var_010;
}

void Screen_6008::Widget_Logic_Visibility_img_close() noexcept
{
    const bool var_016 = gm::csm::VIRTUALCONTROLS_ANDROID_NOIVI_STATE.data();
    const bool var_015 = !(var_016);
    
    const bool var_013 = gm::csm::VIRTUALCONTROLS_ANDROID_LAUNCH_VISIBILITY.data();
    const bool var_014 = var_015;
    const bool var_012 = var_013 && var_014;
    
    Image_img_close.mVisibility = var_012;
}

void Screen_6008::Widget_Logic_Visibility_img_placeholder_WakeScreen() noexcept
{
    const bool var_018 = gm::csm::VIRTUALCONTROLS_ANDROID_LAUNCH_VISIBILITY.data();
    const bool var_017 = !(var_018);
    
    GroupImage_img_placeholder_WakeScreen.mVisibility = var_017;
}

void Screen_6008::Widget_Logic_Visibility_img_liftgate() noexcept
{
    const bool var_020 = gm::csm::VIRTUALCONTROLS_CONTROL_PAGE_WHILE_DRIVING_INTERNAL.data();
    const bool var_019 = !(var_020);
    
    Image_img_liftgate.mVisibility = var_019;
}

void Screen_6008::onScreenHide()
{
    Label_virtualcontrols_1_2_0_4_liftgate_max_csm.mState.unBind(gm::csm::VIRTUALCONTROLS_POWERLIFTGATE_STATE_INTERNAL, mBindingsIds[0U]);
    Image_img_radio_button_custom.mState.unBind(gm::csm::VIRTUALCONTROLS_POWERLIFTGATE_STATE_INTERNAL, mBindingsIds[1U]);
    Image_img_radio_button_maxopen.mState.unBind(gm::csm::VIRTUALCONTROLS_POWERLIFTGATE_STATE_INTERNAL, mBindingsIds[2U]);
    Label_virtualcontrols_0_0_detailsUnavailable_csm.mVisibility.unBind(gm::csm::VIRTUALCONTROLS_CONTROL_PAGE_WHILE_DRIVING_INTERNAL, mBindingsIds[3U]);
    Label_virtualcontrols_1_2_0_4_liftgate_custom_csm.mState.unBind(gm::csm::VIRTUALCONTROLS_POWERLIFTGATE_STATE_INTERNAL, mBindingsIds[4U]);
    Image_img_radio_button_Off_manual.mState.unBind(gm::csm::VIRTUALCONTROLS_POWERLIFTGATE_STATE_INTERNAL, mBindingsIds[5U]);
    Label_virtualcontrols_1_2_0_4_LiftgateTitle_csm.mState.unBind(gm::csm::Data_RHD_TITLE_ALIGNMENT_STATE, mBindingsIds[6U]);
    GroupImage_img_placeholder_WakeScreen.mState.unBind(gm::csm::VIRTUALCONTROLS_WAKESCREEN_ANDROID_BUTTON_STATE, mBindingsIds[7U]);
    Label_virtualcontrols_1_2_0_4_liftgate_off_csm.mState.unBind(gm::csm::VIRTUALCONTROLS_POWERLIFTGATE_STATE_INTERNAL, mBindingsIds[8U]);
}

void Screen_6008::onScreenShow()
{
    mBindingsIds[0U] = Label_virtualcontrols_1_2_0_4_liftgate_max_csm.mState.bind(gm::csm::VIRTUALCONTROLS_POWERLIFTGATE_STATE_INTERNAL);
    mBindingsIds[1U] = Image_img_radio_button_custom.mState.bind(gm::csm::VIRTUALCONTROLS_POWERLIFTGATE_STATE_INTERNAL);
    mBindingsIds[2U] = Image_img_radio_button_maxopen.mState.bind(gm::csm::VIRTUALCONTROLS_POWERLIFTGATE_STATE_INTERNAL);
    mBindingsIds[3U] = Label_virtualcontrols_0_0_detailsUnavailable_csm.mVisibility.bind(gm::csm::VIRTUALCONTROLS_CONTROL_PAGE_WHILE_DRIVING_INTERNAL);
    mBindingsIds[4U] = Label_virtualcontrols_1_2_0_4_liftgate_custom_csm.mState.bind(gm::csm::VIRTUALCONTROLS_POWERLIFTGATE_STATE_INTERNAL);
    addDependency(this, &Screen_6008::Widget_Logic_Visibility_virtualcontrols_1_0_4_wakeScreenExit_csm, gm::csm::VIRTUALCONTROLS_ANDROID_LAUNCH_VISIBILITY);
    addDependency(this, &Screen_6008::Widget_Logic_Visibility_virtualcontrols_1_1_exitBtn_csm, gm::csm::VIRTUALCONTROLS_ANDROID_LAUNCH_VISIBILITY,gm::csm::VIRTUALCONTROLS_ANDROID_NOIVI_STATE);
    mBindingsIds[5U] = Image_img_radio_button_Off_manual.mState.bind(gm::csm::VIRTUALCONTROLS_POWERLIFTGATE_STATE_INTERNAL);
    addDependency(this, &Screen_6008::Widget_Logic_Visibility_virtualcontrols_1_2_0_4_liftgate_csm, gm::csm::VIRTUALCONTROLS_CONTROL_PAGE_WHILE_DRIVING_INTERNAL);
    addDependency(this, &Screen_6008::Widget_Logic_Visibility_grp_placeholder_WakeScreen, gm::csm::VIRTUALCONTROLS_ANDROID_LAUNCH_VISIBILITY);
    addDependency(this, &Screen_6008::Widget_Logic_Visibility_img_close, gm::csm::VIRTUALCONTROLS_ANDROID_LAUNCH_VISIBILITY,gm::csm::VIRTUALCONTROLS_ANDROID_NOIVI_STATE);
    mBindingsIds[6U] = Label_virtualcontrols_1_2_0_4_LiftgateTitle_csm.mState.bind(gm::csm::Data_RHD_TITLE_ALIGNMENT_STATE);
    addDependency(this, &Screen_6008::Widget_Logic_Visibility_img_placeholder_WakeScreen, gm::csm::VIRTUALCONTROLS_ANDROID_LAUNCH_VISIBILITY);
    mBindingsIds[7U] = GroupImage_img_placeholder_WakeScreen.mState.bind(gm::csm::VIRTUALCONTROLS_WAKESCREEN_ANDROID_BUTTON_STATE);
    mBindingsIds[8U] = Label_virtualcontrols_1_2_0_4_liftgate_off_csm.mState.bind(gm::csm::VIRTUALCONTROLS_POWERLIFTGATE_STATE_INTERNAL);
    addDependency(this, &Screen_6008::Widget_Logic_Visibility_img_liftgate, gm::csm::VIRTUALCONTROLS_CONTROL_PAGE_WHILE_DRIVING_INTERNAL);
}


} // namespace csm
} // namespace gm
