// Copyright (C) GM Global Technology Operations LLC 2024.
// All Rights Reserved.
// GM Confidential Restricted.
// 
// Designed and Developed by Rampgroup, © 2024 People Tech Group all rights reserved.

#include "Screen_6002.h"

#include "RTOS_InternalData.h"
#include <cstdlib>

namespace gm
{
namespace csm
{


void Screen_6002::Widget_Logic_Visibility_grp_placeholder_WakeScreen() noexcept
{
    const bool var_002 = gm::csm::VIRTUALCONTROLS_ANDROID_LAUNCH_VISIBILITY.data();
    const bool var_001 = !(var_002);
    
    Group_grp_placeholder_WakeScreen.mVisibility = var_001;
}

void Screen_6002::Widget_Logic_Visibility_img_close() noexcept
{
    const bool var_007 = gm::csm::VIRTUALCONTROLS_ANDROID_NOIVI_STATE.data();
    const bool var_006 = !(var_007);
    
    const bool var_004 = gm::csm::VIRTUALCONTROLS_ANDROID_LAUNCH_VISIBILITY.data();
    const bool var_005 = var_006;
    const bool var_003 = var_004 && var_005;
    
    Image_img_close.mVisibility = var_003;
}

void Screen_6002::onScreenHide()
{
    Image_img_pintostart_icon.mVisibility.unBind(gm::csm::Data_PINTOSTART_VISIBILITY, mBindingsIds[0U]);
    GroupImage_img_placeholder_WakeScreen.mState.unBind(gm::csm::VIRTUALCONTROLS_WAKESCREEN_ANDROID_BUTTON_STATE, mBindingsIds[1U]);
    Label_virtualcontrols_1_0_ControlsSafety_csm.mState.unBind(gm::csm::Data_RHD_TITLE_ALIGNMENT_STATE, mBindingsIds[2U]);
    Image_img_pintostart_mfc.mVisibility.unBind(gm::csm::Data_PINTOSTART_VISIBILITY, mBindingsIds[3U]);
}

void Screen_6002::onScreenShow()
{
    addDependency(this, &Screen_6002::Widget_Logic_Visibility_grp_placeholder_WakeScreen, gm::csm::VIRTUALCONTROLS_ANDROID_LAUNCH_VISIBILITY);
    addDependency(this, &Screen_6002::Widget_Logic_Visibility_img_close, gm::csm::VIRTUALCONTROLS_ANDROID_LAUNCH_VISIBILITY,gm::csm::VIRTUALCONTROLS_ANDROID_NOIVI_STATE);
    mBindingsIds[0U] = Image_img_pintostart_icon.mVisibility.bind(gm::csm::Data_PINTOSTART_VISIBILITY);
    mBindingsIds[1U] = GroupImage_img_placeholder_WakeScreen.mState.bind(gm::csm::VIRTUALCONTROLS_WAKESCREEN_ANDROID_BUTTON_STATE);
    mBindingsIds[2U] = Label_virtualcontrols_1_0_ControlsSafety_csm.mState.bind(gm::csm::Data_RHD_TITLE_ALIGNMENT_STATE);
    mBindingsIds[3U] = Image_img_pintostart_mfc.mVisibility.bind(gm::csm::Data_PINTOSTART_VISIBILITY);
}


} // namespace csm
} // namespace gm
