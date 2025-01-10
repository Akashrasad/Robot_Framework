// Copyright (C) GM Global Technology Operations LLC 2024.
// All Rights Reserved.
// GM Confidential Restricted.
// 
// Designed and Developed by Rampgroup, © 2024 People Tech Group all rights reserved.

#include "Screen_6006.h"

#include "RTOS_InternalData.h"
#include <cstdlib>

namespace gm
{
namespace csm
{


void Screen_6006::Widget_Logic_Visibility_virtualcontrols_1_1_exitBtn_csm() noexcept
{
    const bool var_005 = gm::csm::VIRTUALCONTROLS_ANDROID_NOIVI_STATE.data();
    const bool var_004 = !(var_005);
    
    const bool var_002 = gm::csm::VIRTUALCONTROLS_ANDROID_LAUNCH_VISIBILITY.data();
    const bool var_003 = var_004;
    const bool var_001 = var_002 && var_003;
    
    Label_virtualcontrols_1_1_exitBtn_csm.mVisibility = var_001;
}

void Screen_6006::Widget_Logic_Visibility_img_control_lockout() noexcept
{
    const bool var_007 = gm::csm::VIRTUALCONTROLS_CONTROL_PAGE_WHILE_DRIVING_INTERNAL.data();
    const bool var_006 = !(var_007);
    
    Image_img_control_lockout.mVisibility = var_006;
}

void Screen_6006::Widget_Logic_Visibility_img_close() noexcept
{
    const bool var_012 = gm::csm::VIRTUALCONTROLS_ANDROID_NOIVI_STATE.data();
    const bool var_011 = !(var_012);
    
    const bool var_009 = gm::csm::VIRTUALCONTROLS_ANDROID_LAUNCH_VISIBILITY.data();
    const bool var_010 = var_011;
    const bool var_008 = var_009 && var_010;
    
    Image_img_close.mVisibility = var_008;
}

void Screen_6006::Widget_Logic_Visibility_grp_placeholder_WakeScreen() noexcept
{
    const bool var_014 = gm::csm::VIRTUALCONTROLS_ANDROID_LAUNCH_VISIBILITY.data();
    const bool var_013 = !(var_014);
    
    Group_grp_placeholder_WakeScreen.mVisibility = var_013;
}

void Screen_6006::Widget_Logic_Visibility_virtualcontrols_1_2_0_2_lockout_csm() noexcept
{
    const bool var_016 = gm::csm::VIRTUALCONTROLS_CONTROL_PAGE_WHILE_DRIVING_INTERNAL.data();
    const bool var_015 = !(var_016);
    
    Label_virtualcontrols_1_2_0_2_lockout_csm.mVisibility = var_015;
}

void Screen_6006::Widget_Logic_Visibility_controls_icn_lockout_normal() noexcept
{
    const bool var_018 = gm::csm::VIRTUALCONTROLS_CONTROL_PAGE_WHILE_DRIVING_INTERNAL.data();
    const bool var_017 = !(var_018);
    
    Image_controls_icn_lockout_normal.mVisibility = var_017;
}

void Screen_6006::onScreenHide()
{
    Label_virtualcontrols_1_2_0_2WinLockTitle_csm.mState.unBind(gm::csm::Data_RHD_TITLE_ALIGNMENT_STATE, mBindingsIds[0U]);
    Label_virtualcontrols_1_2_0_2_LockoutOff_csm.mState.unBind(gm::csm::VIRTUALCONTROLS_POWERWINDOWLOCKOUT_STATE_INTERNAL, mBindingsIds[1U]);
    Image_img_radio_button_off.mState.unBind(gm::csm::VIRTUALCONTROLS_POWERWINDOWLOCKOUT_STATE_INTERNAL, mBindingsIds[2U]);
    Label_virtualcontrols_1_0_2_1_LockoutOn_csm.mState.unBind(gm::csm::VIRTUALCONTROLS_POWERWINDOWLOCKOUT_STATE_INTERNAL, mBindingsIds[3U]);
    GroupImage_img_placeholder_WakeScreen.mState.unBind(gm::csm::VIRTUALCONTROLS_WAKESCREEN_ANDROID_BUTTON_STATE, mBindingsIds[4U]);
    Label_virtualcontrols_0_0_detailsUnavailable_csm.mVisibility.unBind(gm::csm::VIRTUALCONTROLS_CONTROL_PAGE_WHILE_DRIVING_INTERNAL, mBindingsIds[5U]);
    Image_img_radio_button_on.mState.unBind(gm::csm::VIRTUALCONTROLS_POWERWINDOWLOCKOUT_STATE_INTERNAL, mBindingsIds[6U]);
}

void Screen_6006::onScreenShow()
{
    addDependency(this, &Screen_6006::Widget_Logic_Visibility_virtualcontrols_1_1_exitBtn_csm, gm::csm::VIRTUALCONTROLS_ANDROID_LAUNCH_VISIBILITY,gm::csm::VIRTUALCONTROLS_ANDROID_NOIVI_STATE);
    mBindingsIds[0U] = Label_virtualcontrols_1_2_0_2WinLockTitle_csm.mState.bind(gm::csm::Data_RHD_TITLE_ALIGNMENT_STATE);
    mBindingsIds[1U] = Label_virtualcontrols_1_2_0_2_LockoutOff_csm.mState.bind(gm::csm::VIRTUALCONTROLS_POWERWINDOWLOCKOUT_STATE_INTERNAL);
    mBindingsIds[2U] = Image_img_radio_button_off.mState.bind(gm::csm::VIRTUALCONTROLS_POWERWINDOWLOCKOUT_STATE_INTERNAL);
    addDependency(this, &Screen_6006::Widget_Logic_Visibility_img_control_lockout, gm::csm::VIRTUALCONTROLS_CONTROL_PAGE_WHILE_DRIVING_INTERNAL);
    mBindingsIds[3U] = Label_virtualcontrols_1_0_2_1_LockoutOn_csm.mState.bind(gm::csm::VIRTUALCONTROLS_POWERWINDOWLOCKOUT_STATE_INTERNAL);
    mBindingsIds[4U] = GroupImage_img_placeholder_WakeScreen.mState.bind(gm::csm::VIRTUALCONTROLS_WAKESCREEN_ANDROID_BUTTON_STATE);
    addDependency(this, &Screen_6006::Widget_Logic_Visibility_img_close, gm::csm::VIRTUALCONTROLS_ANDROID_LAUNCH_VISIBILITY,gm::csm::VIRTUALCONTROLS_ANDROID_NOIVI_STATE);
    addDependency(this, &Screen_6006::Widget_Logic_Visibility_grp_placeholder_WakeScreen, gm::csm::VIRTUALCONTROLS_ANDROID_LAUNCH_VISIBILITY);
    addDependency(this, &Screen_6006::Widget_Logic_Visibility_virtualcontrols_1_2_0_2_lockout_csm, gm::csm::VIRTUALCONTROLS_CONTROL_PAGE_WHILE_DRIVING_INTERNAL);
    mBindingsIds[5U] = Label_virtualcontrols_0_0_detailsUnavailable_csm.mVisibility.bind(gm::csm::VIRTUALCONTROLS_CONTROL_PAGE_WHILE_DRIVING_INTERNAL);
    addDependency(this, &Screen_6006::Widget_Logic_Visibility_controls_icn_lockout_normal, gm::csm::VIRTUALCONTROLS_CONTROL_PAGE_WHILE_DRIVING_INTERNAL);
    mBindingsIds[6U] = Image_img_radio_button_on.mState.bind(gm::csm::VIRTUALCONTROLS_POWERWINDOWLOCKOUT_STATE_INTERNAL);
}


} // namespace csm
} // namespace gm
