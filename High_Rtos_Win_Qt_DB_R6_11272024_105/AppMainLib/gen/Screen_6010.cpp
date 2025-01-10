// Copyright (C) GM Global Technology Operations LLC 2024.
// All Rights Reserved.
// GM Confidential Restricted.
// 
// Designed and Developed by Rampgroup, © 2024 People Tech Group all rights reserved.

#include "Screen_6010.h"

#include "RTOS_InternalData.h"
#include <cstdlib>

namespace gm
{
namespace csm
{


void Screen_6010::Widget_Logic_Visibility_img_close() noexcept
{
    const bool var_005 = gm::csm::VIRTUALCONTROLS_ANDROID_NOIVI_STATE.data();
    const bool var_004 = !(var_005);
    
    const bool var_002 = gm::csm::VIRTUALCONTROLS_ANDROID_LAUNCH_VISIBILITY.data();
    const bool var_003 = var_004;
    const bool var_001 = var_002 && var_003;
    
    Image_img_close.mVisibility = var_001;
}

void Screen_6010::Widget_Logic_Visibility_virtualcontrols_1_1_exitBtn_csm() noexcept
{
    const bool var_010 = gm::csm::VIRTUALCONTROLS_ANDROID_NOIVI_STATE.data();
    const bool var_009 = !(var_010);
    
    const bool var_007 = gm::csm::VIRTUALCONTROLS_ANDROID_LAUNCH_VISIBILITY.data();
    const bool var_008 = var_009;
    const bool var_006 = var_007 && var_008;
    
    Label_virtualcontrols_1_1_exitBtn_csm.mVisibility = var_006;
}

void Screen_6010::Widget_Logic_Visibility_grp_placeholder_WakeScreen() noexcept
{
    const bool var_012 = gm::csm::VIRTUALCONTROLS_ANDROID_LAUNCH_VISIBILITY.data();
    const bool var_011 = !(var_012);
    
    Group_grp_placeholder_WakeScreen.mVisibility = var_011;
}

void Screen_6010::onScreenHide()
{
    Image_img_pintostart.mVisibility.unBind(gm::csm::Data_PINTOSTART_VISIBILITY, mBindingsIds[0U]);
    Label_virtualcontrols_1_0_h_safety_csm.mState.unBind(gm::csm::Data_RHD_TITLE_ALIGNMENT_STATE, mBindingsIds[1U]);
    GroupImage_img_placeholder_WakeScreen.mState.unBind(gm::csm::VIRTUALCONTROLS_WAKESCREEN_ANDROID_BUTTON_STATE, mBindingsIds[2U]);
}

void Screen_6010::onScreenShow()
{
    addDependency(this, &Screen_6010::Widget_Logic_Visibility_img_close, gm::csm::VIRTUALCONTROLS_ANDROID_LAUNCH_VISIBILITY,gm::csm::VIRTUALCONTROLS_ANDROID_NOIVI_STATE);
    mBindingsIds[0U] = Image_img_pintostart.mVisibility.bind(gm::csm::Data_PINTOSTART_VISIBILITY);
    addDependency(this, &Screen_6010::Widget_Logic_Visibility_virtualcontrols_1_1_exitBtn_csm, gm::csm::VIRTUALCONTROLS_ANDROID_LAUNCH_VISIBILITY,gm::csm::VIRTUALCONTROLS_ANDROID_NOIVI_STATE);
    mBindingsIds[1U] = Label_virtualcontrols_1_0_h_safety_csm.mState.bind(gm::csm::Data_RHD_TITLE_ALIGNMENT_STATE);
    addDependency(this, &Screen_6010::Widget_Logic_Visibility_grp_placeholder_WakeScreen, gm::csm::VIRTUALCONTROLS_ANDROID_LAUNCH_VISIBILITY);
    mBindingsIds[2U] = GroupImage_img_placeholder_WakeScreen.mState.bind(gm::csm::VIRTUALCONTROLS_WAKESCREEN_ANDROID_BUTTON_STATE);
}


} // namespace csm
} // namespace gm
