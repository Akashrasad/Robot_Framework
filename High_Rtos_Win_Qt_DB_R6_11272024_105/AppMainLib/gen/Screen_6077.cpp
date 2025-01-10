// Copyright (C) GM Global Technology Operations LLC 2024.
// All Rights Reserved.
// GM Confidential Restricted.
// 
// Designed and Developed by Rampgroup, © 2024 People Tech Group all rights reserved.

#include "Screen_6077.h"

#include "RTOS_InternalData.h"
#include <cstdlib>

namespace gm
{
namespace csm
{


void Screen_6077::onScreenHide()
{
    Label_virtualcontrols_1_0_park_csm.mState.unBind(gm::csm::Data_RHD_TITLE_ALIGNMENT_STATE, mBindingsIds[0U]);
}

void Screen_6077::onScreenShow()
{
    mBindingsIds[0U] = Label_virtualcontrols_1_0_park_csm.mState.bind(gm::csm::Data_RHD_TITLE_ALIGNMENT_STATE);
}


} // namespace csm
} // namespace gm
