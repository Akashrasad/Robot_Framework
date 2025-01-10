// Copyright (C) GM Global Technology Operations LLC 2024.
// All Rights Reserved.
// GM Confidential Restricted.
// 
// Designed and Developed by Rampgroup, © 2024 People Tech Group all rights reserved.

#include "Screen_6035.h"

#include "RTOS_InternalData.h"
#include <cstdlib>

namespace gm
{
namespace csm
{


void Screen_6035::Widget_Logic_Visibility_virtualcontrols_1_0_4_wakeScreenExit_csm() noexcept
{
    const bool var_002 = gm::csm::VIRTUALCONTROLS_ANDROID_LAUNCH_VISIBILITY.data();
    const bool var_001 = !(var_002);
    
    GroupLabel_virtualcontrols_1_0_4_wakeScreenExit_csm.mVisibility = var_001;
}

void Screen_6035::Widget_Logic_Visibility_img_placeholder_WakeScreen() noexcept
{
    const bool var_004 = gm::csm::VIRTUALCONTROLS_ANDROID_LAUNCH_VISIBILITY.data();
    const bool var_003 = !(var_004);
    
    GroupImage_img_placeholder_WakeScreen.mVisibility = var_003;
}

void Screen_6035::Widget_Logic_Visibility_img_close() noexcept
{
    const bool var_009 = gm::csm::VIRTUALCONTROLS_ANDROID_NOIVI_STATE.data();
    const bool var_008 = !(var_009);
    
    const bool var_006 = gm::csm::VIRTUALCONTROLS_ANDROID_LAUNCH_VISIBILITY.data();
    const bool var_007 = var_008;
    const bool var_005 = var_006 && var_007;
    
    Image_img_close.mVisibility = var_005;
}

void Screen_6035::Widget_Logic_Visibility_grp_placeholder_WakeScreen() noexcept
{
    const bool var_011 = gm::csm::VIRTUALCONTROLS_ANDROID_LAUNCH_VISIBILITY.data();
    const bool var_010 = !(var_011);
    
    Group_grp_placeholder_WakeScreen.mVisibility = var_010;
}

void Screen_6035::Data_VIRTUAL_CONTROLS_OPTIONS_NAME_bindings()
{
    const auto int_val = ramp::asciitoint(gm::csm::Data_VIRTUAL_CONTROLS_OPTIONS_NAME.data().c_str());
    GroupImage_img_placeholder_WakeScreen.mState = int_val;
}

void Screen_6035::Label_virtualcontrols_1_5_6_OptionsTitle_csm_bindings()
{
    std::string text = Label_virtualcontrols_1_5_6_OptionsTitle_csm.mText.getLanguageText();

    ramp::FindReplaceString(text,"%1$s",ramp::to_string(gm::csm::Data_VIRTUAL_CONTROLS_OPTIONS_NAME));
    Label_virtualcontrols_1_5_6_OptionsTitle_csm = text.c_str();
}

void Screen_6035::onScreenHide()
{
    Label_virtualcontrols_1_5_6_OptionsTitle_csm.mState.unBind(gm::csm::Data_RHD_TITLE_ALIGNMENT_STATE, mBindingsIds[1U]);
    Label_virtualcontrols_1_5_3_Name_csm.mState.unBind(gm::csm::Data_VIRTUAL_CONTROL_ENABLE_EDIT_OPTION_STATE, mBindingsIds[3U]);
    Image_btn_list_options.mState.unBind(gm::csm::Data_VIRTUAL_CONTROL_ENABLE_EDIT_OPTION_STATE, mBindingsIds[4U]);
}

void Screen_6035::onScreenShow()
{
    mBindingsIds[1U] = Label_virtualcontrols_1_5_6_OptionsTitle_csm.mState.bind(gm::csm::Data_RHD_TITLE_ALIGNMENT_STATE);
    addDependency(this, &Screen_6035::Label_virtualcontrols_1_5_6_OptionsTitle_csm_bindings,gm::csm::Data_VIRTUAL_CONTROLS_OPTIONS_NAME);
    addDependency(this, &Screen_6035::Widget_Logic_Visibility_virtualcontrols_1_0_4_wakeScreenExit_csm, gm::csm::VIRTUALCONTROLS_ANDROID_LAUNCH_VISIBILITY);
    addDependency(this, &Screen_6035::Widget_Logic_Visibility_img_placeholder_WakeScreen, gm::csm::VIRTUALCONTROLS_ANDROID_LAUNCH_VISIBILITY);
    addDependency(this, &Screen_6035::Data_VIRTUAL_CONTROLS_OPTIONS_NAME_bindings, gm::csm::Data_VIRTUAL_CONTROLS_OPTIONS_NAME);
    mBindingsIds[3U] = Label_virtualcontrols_1_5_3_Name_csm.mState.bind(gm::csm::Data_VIRTUAL_CONTROL_ENABLE_EDIT_OPTION_STATE);
    addDependency(this, &Screen_6035::Widget_Logic_Visibility_img_close, gm::csm::VIRTUALCONTROLS_ANDROID_LAUNCH_VISIBILITY,gm::csm::VIRTUALCONTROLS_ANDROID_NOIVI_STATE);
    mBindingsIds[4U] = Image_btn_list_options.mState.bind(gm::csm::Data_VIRTUAL_CONTROL_ENABLE_EDIT_OPTION_STATE);
    addDependency(this, &Screen_6035::Widget_Logic_Visibility_grp_placeholder_WakeScreen, gm::csm::VIRTUALCONTROLS_ANDROID_LAUNCH_VISIBILITY);
}


} // namespace csm
} // namespace gm
