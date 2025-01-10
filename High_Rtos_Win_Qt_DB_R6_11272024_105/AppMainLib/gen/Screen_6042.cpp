// Copyright (C) GM Global Technology Operations LLC 2024.
// All Rights Reserved.
// GM Confidential Restricted.
// 
// Designed and Developed by Rampgroup, © 2024 People Tech Group all rights reserved.

#include "Screen_6042.h"

#include "RTOS_InternalData.h"
#include <cstdlib>

namespace gm
{
namespace csm
{


void Screen_6042::Widget_Logic_Visibility_virtualcontrols_1_0_4_wakeScreenExit_csm() noexcept
{
    const bool var_005 = gm::csm::VIRTUALCONTROLS_ANDROID_NOIVI_STATE.data();
    const bool var_004 = !(var_005);
    
    const bool var_002 = gm::csm::VIRTUALCONTROLS_ANDROID_LAUNCH_VISIBILITY.data();
    const bool var_003 = var_004;
    const bool var_001 = var_002 && var_003;
    
    Label_virtualcontrols_1_0_4_wakeScreenExit_csm.mVisibility = var_001;
}

void Screen_6042::Label_virtualcontrols_1_5_6_2_RemoteAutoTitle_csm_bindings()
{
    std::string text = Label_virtualcontrols_1_5_6_2_RemoteAutoTitle_csm.mText.getLanguageText();

    ramp::FindReplaceString(text,"%1$s",ramp::to_string(gm::csm::VIRTUALCONTROLS_REMOTENAME_AUTO));
    Label_virtualcontrols_1_5_6_2_RemoteAutoTitle_csm = text.c_str();
}

void Screen_6042::onScreenHide()
{
    Image_img_check_box_auto_close.mState.unBind(gm::csm::VIRTUALCONTROLS_UGDO_OPTIONS_AUTO_CLOSE, mBindingsIds[0U]);
    Image_img_check_box_auto_open.mState.unBind(gm::csm::VIRTUALCONTROLS_UGDO_OPTIONS_AUTO_OPEN, mBindingsIds[1U]);
    Label_virtualcontrols_1_5_6_3_UGDOAutoClose_csm.mState.unBind(gm::csm::VIRTUALCONTROLS_UGDO_OPTIONS_AUTO_CLOSE, mBindingsIds[2U]);
    List_6042_ics_vc_options_auto_selected_list.mVisibility.unBind(gm::csm::VIRTUALCONTROLS_UGDO_DISTANCE_FEET_LIST_VISIBILITY, mBindingsIds[4U]);
    Label_virtualcontrols_1_5_6_3_UGDOAutoOpen_csm.mState.unBind(gm::csm::VIRTUALCONTROLS_UGDO_OPTIONS_AUTO_OPEN, mBindingsIds[5U]);
    Label_virtualcontrols_1_5_3_2_UGDORange_csm.mVisibility.unBind(gm::csm::VIRTUALCONTROLS_UGDO_DISTANCE_FEET_LIST_VISIBILITY, mBindingsIds[6U]);
}

void Screen_6042::onScreenShow()
{
    mBindingsIds[0U] = Image_img_check_box_auto_close.mState.bind(gm::csm::VIRTUALCONTROLS_UGDO_OPTIONS_AUTO_CLOSE);
    mBindingsIds[1U] = Image_img_check_box_auto_open.mState.bind(gm::csm::VIRTUALCONTROLS_UGDO_OPTIONS_AUTO_OPEN);
    mBindingsIds[2U] = Label_virtualcontrols_1_5_6_3_UGDOAutoClose_csm.mState.bind(gm::csm::VIRTUALCONTROLS_UGDO_OPTIONS_AUTO_CLOSE);
    addDependency(this, &Screen_6042::Label_virtualcontrols_1_5_6_2_RemoteAutoTitle_csm_bindings,gm::csm::VIRTUALCONTROLS_REMOTENAME_AUTO);
    mBindingsIds[4U] = List_6042_ics_vc_options_auto_selected_list.mVisibility.bind(gm::csm::VIRTUALCONTROLS_UGDO_DISTANCE_FEET_LIST_VISIBILITY);
    addDependency(this, &Screen_6042::Widget_Logic_Visibility_virtualcontrols_1_0_4_wakeScreenExit_csm, gm::csm::VIRTUALCONTROLS_ANDROID_LAUNCH_VISIBILITY,gm::csm::VIRTUALCONTROLS_ANDROID_NOIVI_STATE);
    mBindingsIds[5U] = Label_virtualcontrols_1_5_6_3_UGDOAutoOpen_csm.mState.bind(gm::csm::VIRTUALCONTROLS_UGDO_OPTIONS_AUTO_OPEN);
    mBindingsIds[6U] = Label_virtualcontrols_1_5_3_2_UGDORange_csm.mVisibility.bind(gm::csm::VIRTUALCONTROLS_UGDO_DISTANCE_FEET_LIST_VISIBILITY);
}


} // namespace csm
} // namespace gm
