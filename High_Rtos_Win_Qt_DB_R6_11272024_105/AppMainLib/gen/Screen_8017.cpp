// Copyright (C) GM Global Technology Operations LLC 2024.
// All Rights Reserved.
// GM Confidential Restricted.
// 
// Designed and Developed by Rampgroup, © 2024 People Tech Group all rights reserved.

#include "Screen_8017.h"

#include "RTOS_InternalData.h"
#include <cstdlib>

namespace gm
{
namespace csm
{


void Screen_8017::onScreenHide()
{
    Image_img_cargo_light_icon.mState.unBind(gm::csm::Data_CAMERA_CARGO_BED_STATE_INTERNAL, mBindingsIds[0U]);
}

void Screen_8017::onScreenShow()
{
    mBindingsIds[0U] = Image_img_cargo_light_icon.mState.bind(gm::csm::Data_CAMERA_CARGO_BED_STATE_INTERNAL);
}


} // namespace csm
} // namespace gm
