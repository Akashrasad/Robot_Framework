// Copyright (C) GM Global Technology Operations LLC 2024.
// All Rights Reserved.
// GM Confidential Restricted.
// 
// Designed and Developed by Rampgroup, © 2024 People Tech Group all rights reserved.

#include "Screen_6041.h"

#include "LangTable.h"
#include "RTOS_InternalData.h"
#include <cstdlib>

namespace gm
{
namespace csm
{


void Screen_6041::Label_virtualcontrols_1_5_6_1_OptionCharCount_csm_bindings()
{
    std::string str_0 = "%1$s";
    auto ret_replace_0 = str_0.replace(0U, str_0.size(), ramp::to_string(gm::csm::VIRTUALCONTROLS_OPTIONNAMECHARACTERS));
	ramp::Unused(ret_replace_0);

    std::string text = gen::PluralsText("virtualcontrols_1_5_6_1_OptionCharCount_csm", gm::csm::VIRTUALCONTROLS_OPTIONNAMECHARACTERS_40.data());
    ramp::FindReplaceString(text,"%1$s", str_0);
    Label_virtualcontrols_1_5_6_1_OptionCharCount_csm = text.c_str();
}

void Screen_6041::Label_virtualcontrols_1_5_6_1_OptionNameTitle_csm_bindings()
{
    std::string text = Label_virtualcontrols_1_5_6_1_OptionNameTitle_csm.mText.getLanguageText();

    ramp::FindReplaceString(text,"%1$s",ramp::to_string(gm::csm::Data_VIRTUAL_CONTROLS_OPTIONS_NAME));
    Label_virtualcontrols_1_5_6_1_OptionNameTitle_csm = text.c_str();
}

void Screen_6041::onScreenHide()
{
    Label_virtualcontrols_1_5_6_1_OptionNameTitle_csm.mState.unBind(gm::csm::Data_RHD_TITLE_ALIGNMENT_STATE, mBindingsIds[3U]);
}

void Screen_6041::onScreenShow()
{
    addDependency(this, &Screen_6041::Label_virtualcontrols_1_5_6_1_OptionCharCount_csm_bindings,gm::csm::VIRTUALCONTROLS_OPTIONNAMECHARACTERS , gm::csm::VIRTUALCONTROLS_OPTIONNAMECHARACTERS_40);
    mBindingsIds[3U] = Label_virtualcontrols_1_5_6_1_OptionNameTitle_csm.mState.bind(gm::csm::Data_RHD_TITLE_ALIGNMENT_STATE);
    addDependency(this, &Screen_6041::Label_virtualcontrols_1_5_6_1_OptionNameTitle_csm_bindings,gm::csm::Data_VIRTUAL_CONTROLS_OPTIONS_NAME);
}


} // namespace csm
} // namespace gm
