// Copyright (C) GM Global Technology Operations LLC 2024.
// All Rights Reserved.
// GM Confidential Restricted.
// 
// Designed and Developed by Rampgroup, © 2024 People Tech Group all rights reserved.

#include "Screen_9011.h"

#include "RTOS_InternalData.h"
#include <cstdlib>

namespace gm
{
namespace csm
{


void Screen_9011::onScreenHide()
{
    Label_dyn_lbl_time.mText.unBind(gm::csm::Data_TIME_DISPLAY, mBindingsIds[0U]);
}

void Screen_9011::onScreenShow()
{
    mBindingsIds[0U] = Label_dyn_lbl_time.mText.bind(gm::csm::Data_TIME_DISPLAY);
}


} // namespace csm
} // namespace gm
