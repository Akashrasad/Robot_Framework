// Copyright (C) GM Global Technology Operations LLC 2024.
// All Rights Reserved.
// GM Confidential Restricted.
// 
// Designed and Developed by Rampgroup, © 2024 People Tech Group all rights reserved.

#include "Screen_7024.h"

#include "RTOS_InternalData.h"
#include <cstdlib>

namespace gm
{
namespace csm
{


void Screen_7024::Label_apa_4_10_UseTheMyBrandApp_csm_bindings()
{
    std::string text = Label_apa_4_10_UseTheMyBrandApp_csm.mText.getLanguageText();

    ramp::FindReplaceString(text,"%1$s",ramp::to_string(gm::csm::DATA_REMOTE_PARK_DYNAMIC_LABEL));
    Label_apa_4_10_UseTheMyBrandApp_csm = text.c_str();
}

void Screen_7024::onScreenHide()
{
    Group_grp_exit_apa_btn.mVisibility.unBind(gm::csm::EXIT_BUTTON_AVAILABLE_IN_APA, mBindingsIds[0U]);
    Image_img_apa_exit_btn.mVisibility.unBind(gm::csm::EXIT_BUTTON_AVAILABLE_IN_APA, mBindingsIds[1U]);
    Group_grp_exit_apa_btn_mfc.mVisibility.unBind(gm::csm::EXIT_BUTTON_AVAILABLE_IN_APA, mBindingsIds[2U]);
}

void Screen_7024::onScreenShow()
{
    mBindingsIds[0U] = Group_grp_exit_apa_btn.mVisibility.bind(gm::csm::EXIT_BUTTON_AVAILABLE_IN_APA);
    mBindingsIds[1U] = Image_img_apa_exit_btn.mVisibility.bind(gm::csm::EXIT_BUTTON_AVAILABLE_IN_APA);
    mBindingsIds[2U] = Group_grp_exit_apa_btn_mfc.mVisibility.bind(gm::csm::EXIT_BUTTON_AVAILABLE_IN_APA);
    addDependency(this, &Screen_7024::Label_apa_4_10_UseTheMyBrandApp_csm_bindings,gm::csm::DATA_REMOTE_PARK_DYNAMIC_LABEL);
}


} // namespace csm
} // namespace gm
