// Copyright (C) GM Global Technology Operations LLC 2024.
// All Rights Reserved.
// GM Confidential Restricted.
// 
// Designed and Developed by Rampgroup, © 2024 People Tech Group all rights reserved.

#include "Screen_6099.h"

#include "LangTable.h"
#include "RTOS_CustomDataPool.h"
#include "RTOS_InternalData.h"
#include <cstdlib>

namespace gm
{
namespace csm
{


void Screen_6099::Label_virtualcontrols_1_6_6_5_f_extendTimeout_csm_bindings()
{
    std::string str_0 = "%1$s";
    auto ret_replace_0 = str_0.replace(0U, str_0.size(), ramp::to_string(gm::csm::SMARTCONTROLS_PASSIVE_POWER_MODE_EXTEND_SHUTDOWN_TIMER));
	ramp::Unused(ret_replace_0);

    std::string text = gen::PluralsText("virtualcontrols_1_6_6_5_f_extendTimeout_csm", gm::csm::Data_VC_PASSIVE_POWER_MODE_EXTEND_SHUTDOWN_TIMER_PLURAL_TEXT.data());
    ramp::FindReplaceString(text,"%1$s", str_0);
    Label_virtualcontrols_1_6_6_5_f_extendTimeout_csm = text.c_str();
}

void Screen_6099::onScreenHide()
{
}

void Screen_6099::onScreenShow()
{
    addDependency(this, &Screen_6099::Label_virtualcontrols_1_6_6_5_f_extendTimeout_csm_bindings,gm::csm::SMARTCONTROLS_PASSIVE_POWER_MODE_EXTEND_SHUTDOWN_TIMER , gm::csm::Data_VC_PASSIVE_POWER_MODE_EXTEND_SHUTDOWN_TIMER_PLURAL_TEXT);
}


} // namespace csm
} // namespace gm
