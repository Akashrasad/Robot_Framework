// Copyright (C) GM Global Technology Operations LLC 2024.
// All Rights Reserved.
// GM Confidential Restricted.
// 
// Designed and Developed by Rampgroup, © 2024 People Tech Group all rights reserved.

#include "Screen_6128.h"

#include "RTOS_InternalData.h"
#include <cstdlib>

namespace gm
{
namespace csm
{


void Screen_6128::Label_virtualcontrols_1_14_4_4V_dialogHeader_csm_bindings()
{
    std::string text = Label_virtualcontrols_1_14_4_4V_dialogHeader_csm.mText.getLanguageText();

    ramp::FindReplaceString(text,"%1$s",ramp::to_string(gm::csm::SMARTCONTRSOLS_OUTLET_HEADER));
    Label_virtualcontrols_1_14_4_4V_dialogHeader_csm = text.c_str();
}

void Screen_6128::Label_virtualcontrols_1_14_4_4_dialogBody_csm_bindings()
{
    std::string text = Label_virtualcontrols_1_14_4_4_dialogBody_csm.mText.getLanguageText();

    ramp::FindReplaceString(text,"%1$s",ramp::to_string(gm::csm::SMARTCONTRSOLS_OUTLET_HEADER));
    Label_virtualcontrols_1_14_4_4_dialogBody_csm = text.c_str();
}

void Screen_6128::onScreenHide()
{
}

void Screen_6128::onScreenShow()
{
    addDependency(this, &Screen_6128::Label_virtualcontrols_1_14_4_4V_dialogHeader_csm_bindings,gm::csm::SMARTCONTRSOLS_OUTLET_HEADER);
    addDependency(this, &Screen_6128::Label_virtualcontrols_1_14_4_4_dialogBody_csm_bindings,gm::csm::SMARTCONTRSOLS_OUTLET_HEADER);
}


} // namespace csm
} // namespace gm
