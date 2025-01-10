// Copyright (C) GM Global Technology Operations LLC 2024.
// All Rights Reserved.
// GM Confidential Restricted.
// 
// Designed and Developed by Rampgroup, © 2024 People Tech Group all rights reserved.

#include "Screen_6001.h"

#include "RTOS_InternalData.h"
#include <cstdlib>

namespace gm
{
namespace csm
{


void Screen_6001::Widget_Logic_Visibility_img_close() noexcept
{
    const bool var_002 = gm::csm::VIRTUALCONTROLS_ANDROID_LAUNCH_VISIBILITY.data();
    const bool var_003 = !gm::csm::VIRTUALCONTROLS_ANDROID_NOIVI_STATE.data();
    const bool var_001 = var_002 && var_003;
    
    Image_img_close.mVisibility = var_001;
}

void Screen_6001::Widget_Logic_Visibility_img_controls_controls_home_close() noexcept
{
    const bool var_005 = gm::csm::VIRTUALCONTROLS_ANDROID_NOIVI_STATE.data();
    const bool var_004 = !(var_005);
    
    Image_img_controls_controls_home_close.mVisibility = var_004;
}

void Screen_6001::Widget_Logic_Visibility_grp_placeholder_WakeScreen() noexcept
{
    const bool var_007 = gm::csm::VIRTUALCONTROLS_ANDROID_LAUNCH_VISIBILITY.data();
    const bool var_006 = !(var_007);
    
    Group_grp_placeholder_WakeScreen.mVisibility = var_006;
}

void Screen_6001::Widget_Logic_Visibility_virtualcontrols_1_0_4_wakeScreenExit_csm() noexcept
{
    const bool var_009 = gm::csm::VIRTUALCONTROLS_ANDROID_LAUNCH_VISIBILITY.data();
    const bool var_008 = !(var_009);
    
    GroupLabel_virtualcontrols_1_0_4_wakeScreenExit_csm.mVisibility = var_008;
}

void Screen_6001::Widget_Logic_Visibility_img_placeholder_WakeScreen() noexcept
{
    const bool var_011 = gm::csm::VIRTUALCONTROLS_ANDROID_LAUNCH_VISIBILITY.data();
    const bool var_010 = !(var_011);
    
    GroupImage_img_placeholder_WakeScreen.mVisibility = var_010;
}

void Screen_6001::Widget_Logic_Visibility_virtualcontrols_1_1_exitBtn_csm() noexcept
{
    const bool var_013 = gm::csm::VIRTUALCONTROLS_ANDROID_LAUNCH_VISIBILITY.data();
    const bool var_014 = !gm::csm::VIRTUALCONTROLS_ANDROID_NOIVI_STATE.data();
    const bool var_012 = var_013 && var_014;
    
    Label_virtualcontrols_1_1_exitBtn_csm.mVisibility = var_012;
}

void Screen_6001::onScreenHide()
{
    Image_img_control_progress_bar_pointer.mVisibility.unBind(gm::csm::VIRTUALCONTROLS_DATA_SCROLLPAGE_INDICATOR1, mBindingsIds[0U]);
    Image_img_control_progress_bar_pointer.mState.unBind(gm::csm::VIRTUALCONTROLS_DATA_SCROLLPAGE_INDICATOR_STATE1, mBindingsIds[1U]);
    Image_img_pintostart.mVisibility.unBind(gm::csm::Data_PINTOSTART_VISIBILITY, mBindingsIds[2U]);
    Image_img_pintostart_icon.mVisibility.unBind(gm::csm::Data_PINTOSTART_VISIBILITY, mBindingsIds[3U]);
    Image_img_control_progress_bar_pointer2.mVisibility.unBind(gm::csm::VIRTUALCONTROLS_DATA_SCROLLPAGE_INDICATOR2, mBindingsIds[4U]);
    Image_img_control_progress_bar_pointer2.mState.unBind(gm::csm::VIRTUALCONTROLS_DATA_SCROLLPAGE_INDICATOR_STATE2, mBindingsIds[5U]);
    Image_img_pintostart_mfc.mVisibility.unBind(gm::csm::Data_PINTOSTART_VISIBILITY, mBindingsIds[6U]);
    GroupImage_img_placeholder_WakeScreen.mState.unBind(gm::csm::VIRTUALCONTROLS_WAKESCREEN_ANDROID_BUTTON_STATE, mBindingsIds[7U]);
    Label_virtualcontrols_1_0_ControlsSafety_csm.mState.unBind(gm::csm::Data_RHD_TITLE_ALIGNMENT_STATE, mBindingsIds[8U]);
    Image_img_control_progress_bar_pointer3.mVisibility.unBind(gm::csm::VIRTUALCONTROLS_DATA_SCROLLPAGE_INDICATOR3, mBindingsIds[9U]);
    Image_img_control_progress_bar_pointer3.mState.unBind(gm::csm::VIRTUALCONTROLS_DATA_SCROLLPAGE_INDICATOR_STATE3, mBindingsIds[10U]);
}

void Screen_6001::onScreenShow()
{
    mBindingsIds[0U] = Image_img_control_progress_bar_pointer.mVisibility.bind(gm::csm::VIRTUALCONTROLS_DATA_SCROLLPAGE_INDICATOR1);
    mBindingsIds[1U] = Image_img_control_progress_bar_pointer.mState.bind(gm::csm::VIRTUALCONTROLS_DATA_SCROLLPAGE_INDICATOR_STATE1);
    mBindingsIds[2U] = Image_img_pintostart.mVisibility.bind(gm::csm::Data_PINTOSTART_VISIBILITY);
    mBindingsIds[3U] = Image_img_pintostart_icon.mVisibility.bind(gm::csm::Data_PINTOSTART_VISIBILITY);
    addDependency(this, &Screen_6001::Widget_Logic_Visibility_img_close, gm::csm::VIRTUALCONTROLS_ANDROID_LAUNCH_VISIBILITY,gm::csm::VIRTUALCONTROLS_ANDROID_NOIVI_STATE);
    mBindingsIds[4U] = Image_img_control_progress_bar_pointer2.mVisibility.bind(gm::csm::VIRTUALCONTROLS_DATA_SCROLLPAGE_INDICATOR2);
    mBindingsIds[5U] = Image_img_control_progress_bar_pointer2.mState.bind(gm::csm::VIRTUALCONTROLS_DATA_SCROLLPAGE_INDICATOR_STATE2);
    addDependency(this, &Screen_6001::Widget_Logic_Visibility_img_controls_controls_home_close, gm::csm::VIRTUALCONTROLS_ANDROID_NOIVI_STATE);
    addDependency(this, &Screen_6001::Widget_Logic_Visibility_grp_placeholder_WakeScreen, gm::csm::VIRTUALCONTROLS_ANDROID_LAUNCH_VISIBILITY);
    mBindingsIds[6U] = Image_img_pintostart_mfc.mVisibility.bind(gm::csm::Data_PINTOSTART_VISIBILITY);
    addDependency(this, &Screen_6001::Widget_Logic_Visibility_virtualcontrols_1_0_4_wakeScreenExit_csm, gm::csm::VIRTUALCONTROLS_ANDROID_LAUNCH_VISIBILITY);
    addDependency(this, &Screen_6001::Widget_Logic_Visibility_img_placeholder_WakeScreen, gm::csm::VIRTUALCONTROLS_ANDROID_LAUNCH_VISIBILITY);
    mBindingsIds[7U] = GroupImage_img_placeholder_WakeScreen.mState.bind(gm::csm::VIRTUALCONTROLS_WAKESCREEN_ANDROID_BUTTON_STATE);
    mBindingsIds[8U] = Label_virtualcontrols_1_0_ControlsSafety_csm.mState.bind(gm::csm::Data_RHD_TITLE_ALIGNMENT_STATE);
    mBindingsIds[9U] = Image_img_control_progress_bar_pointer3.mVisibility.bind(gm::csm::VIRTUALCONTROLS_DATA_SCROLLPAGE_INDICATOR3);
    mBindingsIds[10U] = Image_img_control_progress_bar_pointer3.mState.bind(gm::csm::VIRTUALCONTROLS_DATA_SCROLLPAGE_INDICATOR_STATE3);
    addDependency(this, &Screen_6001::Widget_Logic_Visibility_virtualcontrols_1_1_exitBtn_csm, gm::csm::VIRTUALCONTROLS_ANDROID_LAUNCH_VISIBILITY,gm::csm::VIRTUALCONTROLS_ANDROID_NOIVI_STATE);
}


} // namespace csm
} // namespace gm
