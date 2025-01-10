// Copyright (C) GM Global Technology Operations LLC 2024.
// All Rights Reserved.
// GM Confidential Restricted.
// 
// Designed and Developed by Rampgroup, © 2024 People Tech Group all rights reserved.

#include "Screen_7031.h"

#include "RTOS_InternalData.h"
#include <cstdlib>

namespace gm
{
namespace csm
{


void Screen_7031::onScreenHide()
{
    Image_img_apa_bg.mState.unBind(gm::csm::Data_APA_BG_SET, mBindingsIds[0U]);
}

void Screen_7031::onScreenShow()
{
    mBindingsIds[0U] = Image_img_apa_bg.mState.bind(gm::csm::Data_APA_BG_SET);
}


} // namespace csm
} // namespace gm
