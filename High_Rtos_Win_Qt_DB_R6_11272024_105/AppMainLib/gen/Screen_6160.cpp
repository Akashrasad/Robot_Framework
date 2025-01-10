// Copyright (C) GM Global Technology Operations LLC 2024.
// All Rights Reserved.
// GM Confidential Restricted.
// 
// Designed and Developed by Rampgroup, © 2024 People Tech Group all rights reserved.

#include "Screen_6160.h"

#include "RTOS_InternalData.h"
#include <cstdlib>

namespace gm
{
namespace csm
{


void Screen_6160::Label_virtualcontrols_1_3_10_2_V_SidewinderDialog_csm_bindings()
{
    std::string text = Label_virtualcontrols_1_3_10_2_V_SidewinderDialog_csm.mText.getLanguageText();

    ramp::FindReplaceString(text,"%1$s",ramp::to_string(gm::csm::Data_CRAB_WALK_FEATURE_NAME));
    Label_virtualcontrols_1_3_10_2_V_SidewinderDialog_csm = text.c_str();
}

void Screen_6160::onScreenHide()
{
}

void Screen_6160::onScreenShow()
{
    addDependency(this, &Screen_6160::Label_virtualcontrols_1_3_10_2_V_SidewinderDialog_csm_bindings,gm::csm::Data_CRAB_WALK_FEATURE_NAME);
}


} // namespace csm
} // namespace gm
