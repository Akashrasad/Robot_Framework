// Copyright (C) GM Global Technology Operations LLC 2024.
// All Rights Reserved.
// GM Confidential Restricted.
// 
// Designed and Developed by Rampgroup, © 2024 People Tech Group all rights reserved.

#include "Screen_6032.h"

#include "RTOS_InternalData.h"
#include <cstdlib>

namespace gm
{
namespace csm
{


void Screen_6032::Widget_Logic_Visibility_virtualcontrols_1_0_4_wakeScreenExit_csm() noexcept
{
    const bool var_002 = gm::csm::VIRTUALCONTROLS_ANDROID_LAUNCH_VISIBILITY.data();
    const bool var_001 = !(var_002);
    
    GroupLabel_virtualcontrols_1_0_4_wakeScreenExit_csm.mVisibility = var_001;
}

void Screen_6032::Widget_Logic_Visibility_img_placeholder_WakeScreen() noexcept
{
    const bool var_004 = gm::csm::VIRTUALCONTROLS_ANDROID_LAUNCH_VISIBILITY.data();
    const bool var_003 = !(var_004);
    
    GroupImage_img_placeholder_WakeScreen.mVisibility = var_003;
}

void Screen_6032::Widget_Logic_Visibility_grp_placeholder_WakeScreen() noexcept
{
    const bool var_006 = gm::csm::VIRTUALCONTROLS_ANDROID_LAUNCH_VISIBILITY.data();
    const bool var_005 = !(var_006);
    
    Group_grp_placeholder_WakeScreen.mVisibility = var_005;
}

void Screen_6032::Widget_Logic_Visibility_img_close() noexcept
{
    const bool var_011 = gm::csm::VIRTUALCONTROLS_ANDROID_NOIVI_STATE.data();
    const bool var_010 = !(var_011);
    
    const bool var_008 = gm::csm::VIRTUALCONTROLS_ANDROID_LAUNCH_VISIBILITY.data();
    const bool var_009 = var_010;
    const bool var_007 = var_008 && var_009;
    
    Image_img_close.mVisibility = var_007;
}

void Screen_6032::onScreenHide()
{
    GroupImage_img_placeholder_WakeScreen.mState.unBind(gm::csm::VIRTUALCONTROLS_WAKESCREEN_ANDROID_BUTTON_STATE, mBindingsIds[0U]);
    Label_virtualcontrols_1_5_0_1_Universal_Remote_csm.mState.unBind(gm::csm::Data_RHD_TITLE_ALIGNMENT_STATE, mBindingsIds[1U]);
}

void Screen_6032::onScreenShow()
{
    addDependency(this, &Screen_6032::Widget_Logic_Visibility_virtualcontrols_1_0_4_wakeScreenExit_csm, gm::csm::VIRTUALCONTROLS_ANDROID_LAUNCH_VISIBILITY);
    addDependency(this, &Screen_6032::Widget_Logic_Visibility_img_placeholder_WakeScreen, gm::csm::VIRTUALCONTROLS_ANDROID_LAUNCH_VISIBILITY);
    mBindingsIds[0U] = GroupImage_img_placeholder_WakeScreen.mState.bind(gm::csm::VIRTUALCONTROLS_WAKESCREEN_ANDROID_BUTTON_STATE);
    mBindingsIds[1U] = Label_virtualcontrols_1_5_0_1_Universal_Remote_csm.mState.bind(gm::csm::Data_RHD_TITLE_ALIGNMENT_STATE);
    addDependency(this, &Screen_6032::Widget_Logic_Visibility_grp_placeholder_WakeScreen, gm::csm::VIRTUALCONTROLS_ANDROID_LAUNCH_VISIBILITY);
    addDependency(this, &Screen_6032::Widget_Logic_Visibility_img_close, gm::csm::VIRTUALCONTROLS_ANDROID_LAUNCH_VISIBILITY,gm::csm::VIRTUALCONTROLS_ANDROID_NOIVI_STATE);
}


} // namespace csm
} // namespace gm
