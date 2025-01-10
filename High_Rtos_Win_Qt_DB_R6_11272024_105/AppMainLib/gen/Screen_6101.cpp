// Copyright (C) GM Global Technology Operations LLC 2024.
// All Rights Reserved.
// GM Confidential Restricted.
// 
// Designed and Developed by Rampgroup, © 2024 People Tech Group all rights reserved.

#include "Screen_6101.h"

#include "RTOS_InternalData.h"
#include <cstdlib>

namespace gm
{
namespace csm
{


void Screen_6101::Label_virtualcontrols_1_5_UGDO_csm_bindings()
{
    std::string text = Label_virtualcontrols_1_5_UGDO_csm.mText.getLanguageText();

    ramp::FindReplaceString(text,"%1$s",ramp::to_string(gm::csm::VIRTUALCONTROLS_UGDO_ASSISTANCE));
    Label_virtualcontrols_1_5_UGDO_csm = text.c_str();
}

void Screen_6101::onScreenHide()
{
}

void Screen_6101::onScreenShow()
{
    addDependency(this, &Screen_6101::Label_virtualcontrols_1_5_UGDO_csm_bindings,gm::csm::VIRTUALCONTROLS_UGDO_ASSISTANCE);
}


} // namespace csm
} // namespace gm
