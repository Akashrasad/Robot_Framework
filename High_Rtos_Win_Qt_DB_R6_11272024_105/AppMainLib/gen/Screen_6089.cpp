// Copyright (C) GM Global Technology Operations LLC 2024.
// All Rights Reserved.
// GM Confidential Restricted.
// 
// Designed and Developed by Rampgroup, © 2024 People Tech Group all rights reserved.

#include "Screen_6089.h"

#include "RTOS_InternalData.h"
#include <cstdlib>

namespace gm
{
namespace csm
{


void Screen_6089::Label_virtualcontrols_0_0_1_f_snackbar_csm_bindings()
{
    std::string text = Label_virtualcontrols_0_0_1_f_snackbar_csm.mText.getLanguageText();

    ramp::FindReplaceString(text,"%1$s",ramp::to_string(gm::csm::VIRTUALCONTROLS_OPD_LEVEL_TEXT_INTERNAL));
    Label_virtualcontrols_0_0_1_f_snackbar_csm = text.c_str();
}

void Screen_6089::onScreenHide()
{
}

void Screen_6089::onScreenShow()
{
    addDependency(this, &Screen_6089::Label_virtualcontrols_0_0_1_f_snackbar_csm_bindings,gm::csm::VIRTUALCONTROLS_OPD_LEVEL_TEXT_INTERNAL);
}


} // namespace csm
} // namespace gm
