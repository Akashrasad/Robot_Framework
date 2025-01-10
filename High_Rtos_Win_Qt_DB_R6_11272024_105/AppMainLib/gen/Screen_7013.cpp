// Copyright (C) GM Global Technology Operations LLC 2024.
// All Rights Reserved.
// GM Confidential Restricted.
// 
// Designed and Developed by Rampgroup, © 2024 People Tech Group all rights reserved.

#include "Screen_7013.h"

#include "APA_CustomDataPool.h"
#include "RTOS_InternalData.h"
#include <cstdlib>

namespace gm
{
namespace csm
{


void Screen_7013::Label_apa_4_12_Connecting_csm_bindings()
{
    std::string text = Label_apa_4_12_Connecting_csm.mText.getLanguageText();

    ramp::FindReplaceString(text,"%1$s",ramp::to_string(gm::csm::DATA_REMOTE_PARK_DYNAMIC_LABEL));
    Label_apa_4_12_Connecting_csm = text.c_str();
}

void Screen_7013::onScreenHide()
{
    Group_grp_exit_apa_btn_mfc.mVisibility.unBind(gm::csm::EXIT_BUTTON_AVAILABLE_IN_APA, mBindingsIds[0U]);
    Label_apa_4_1_selectedbuttonPerpRight_csm.mState.unBind(gm::csm::APA_PARK_INSTRUCTIONS_INTERNAL, mBindingsIds[1U]);
    ActivityIndicator_img_progress_activity.mAnimation.unBind(gm::csm::APA_ACTIVITY_INDICATOR_CONNECTING_APP_PROGRESS, mBindingsIds[2U]);
    Group_grp_exit_apa_btn.mVisibility.unBind(gm::csm::EXIT_BUTTON_AVAILABLE_IN_APA, mBindingsIds[3U]);
    Image_img_apa_exit_btn.mVisibility.unBind(gm::csm::EXIT_BUTTON_AVAILABLE_IN_APA, mBindingsIds[4U]);
}

void Screen_7013::onScreenShow()
{
    mBindingsIds[0U] = Group_grp_exit_apa_btn_mfc.mVisibility.bind(gm::csm::EXIT_BUTTON_AVAILABLE_IN_APA);
    mBindingsIds[1U] = Label_apa_4_1_selectedbuttonPerpRight_csm.mState.bind(gm::csm::APA_PARK_INSTRUCTIONS_INTERNAL);
    mBindingsIds[2U] = ActivityIndicator_img_progress_activity.mAnimation.bind(gm::csm::APA_ACTIVITY_INDICATOR_CONNECTING_APP_PROGRESS);
    mBindingsIds[3U] = Group_grp_exit_apa_btn.mVisibility.bind(gm::csm::EXIT_BUTTON_AVAILABLE_IN_APA);
    mBindingsIds[4U] = Image_img_apa_exit_btn.mVisibility.bind(gm::csm::EXIT_BUTTON_AVAILABLE_IN_APA);
    addDependency(this, &Screen_7013::Label_apa_4_12_Connecting_csm_bindings,gm::csm::DATA_REMOTE_PARK_DYNAMIC_LABEL);
}


} // namespace csm
} // namespace gm
