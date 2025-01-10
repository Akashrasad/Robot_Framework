// Copyright (C) GM Global Technology Operations LLC 2024.
// All Rights Reserved.
// GM Confidential Restricted.
// 
// Designed and Developed by Rampgroup, © 2024 People Tech Group all rights reserved.

#include "Screen_6116.h"

#include "RTOS_InternalData.h"
#include <cstdlib>

namespace gm
{
namespace csm
{


void Screen_6116::Label_virtualcontrols_1_14_5_header_csm_bindings()
{
    std::string text = Label_virtualcontrols_1_14_5_header_csm.mText.getLanguageText();

    ramp::FindReplaceString(text,"%1$s",ramp::to_string(gm::csm::SMARTCONTRSOLS_OUTLET_HEADER));
    Label_virtualcontrols_1_14_5_header_csm = text.c_str();
}

void Screen_6116::Label_virtualcontrols_1_14_5_powerUsedNumber_csm_bindings()
{
    std::string text = Label_virtualcontrols_1_14_5_powerUsedNumber_csm.mText.getLanguageText();

    ramp::FindReplaceString(text,"%1$s",ramp::to_string(gm::csm::SMARTCONTRSOLS_OFFPOWERMODE_ENERGY_USED_DISCHARGE));
    Label_virtualcontrols_1_14_5_powerUsedNumber_csm = text.c_str();
}

void Screen_6116::Label_virtualcontrols_1_14_5_rangeUsedNumber_csm_bindings()
{
    std::string text = Label_virtualcontrols_1_14_5_rangeUsedNumber_csm.mText.getLanguageText();

    ramp::FindReplaceString(text,"%1$s",ramp::to_string(gm::csm::SMARTCONTROLS_RANGE_USED_DISCHARGE));
    Label_virtualcontrols_1_14_5_rangeUsedNumber_csm = text.c_str();
}

void Screen_6116::Label_virtualcontrols_1_14_5_sessionTime_csm_bindings()
{
    std::string text = Label_virtualcontrols_1_14_5_sessionTime_csm.mText.getLanguageText();

    ramp::FindReplaceString(text,"%1$s",ramp::to_string(gm::csm::SMARTCONTROLS_PEEKIN_ENDING_IN_HOURS));
    ramp::FindReplaceString(text,"%2$s",ramp::to_string(gm::csm::SMARTCONTROLS_PEEKIN_ENDING_IN_MINUTES));
    Label_virtualcontrols_1_14_5_sessionTime_csm = text.c_str();
}

void Screen_6116::onScreenHide()
{
    Label_dyn_lbl_virtualcontrols_1_14_5_body_csm.mText.unBind(gm::csm::SMARTCONTROLS_SUMMARY_SCREEN_TEXT, mBindingsIds[0U]);
}

void Screen_6116::onScreenShow()
{
    mBindingsIds[0U] = Label_dyn_lbl_virtualcontrols_1_14_5_body_csm.mText.bind(gm::csm::SMARTCONTROLS_SUMMARY_SCREEN_TEXT);
    addDependency(this, &Screen_6116::Label_virtualcontrols_1_14_5_powerUsedNumber_csm_bindings,gm::csm::SMARTCONTRSOLS_OFFPOWERMODE_ENERGY_USED_DISCHARGE);
    addDependency(this, &Screen_6116::Label_virtualcontrols_1_14_5_rangeUsedNumber_csm_bindings,gm::csm::SMARTCONTROLS_RANGE_USED_DISCHARGE);
    addDependency(this, &Screen_6116::Label_virtualcontrols_1_14_5_sessionTime_csm_bindings,gm::csm::SMARTCONTROLS_PEEKIN_ENDING_IN_HOURS , gm::csm::SMARTCONTROLS_PEEKIN_ENDING_IN_MINUTES);
    addDependency(this, &Screen_6116::Label_virtualcontrols_1_14_5_header_csm_bindings,gm::csm::SMARTCONTRSOLS_OUTLET_HEADER);
}


} // namespace csm
} // namespace gm
