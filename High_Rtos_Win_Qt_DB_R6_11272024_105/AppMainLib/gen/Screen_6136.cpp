// Copyright (C) GM Global Technology Operations LLC 2024.
// All Rights Reserved.
// GM Confidential Restricted.
// 
// Designed and Developed by Rampgroup, © 2024 People Tech Group all rights reserved.

#include "Screen_6136.h"

#include "RTOS_InternalData.h"
#include <cstdlib>

namespace gm
{
namespace csm
{


void Screen_6136::onScreenHide()
{
    Label_dyn_aux_name_csm.mText.unBind(gm::csm::Data_VIRTUAL_CONTROLS_AUX_NAME, mBindingsIds[0U]);
}

void Screen_6136::onScreenShow()
{
    mBindingsIds[0U] = Label_dyn_aux_name_csm.mText.bind(gm::csm::Data_VIRTUAL_CONTROLS_AUX_NAME);
}


} // namespace csm
} // namespace gm
