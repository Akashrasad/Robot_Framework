// Copyright (C) GM Global Technology Operations LLC 2024.
// All Rights Reserved.
// GM Confidential Restricted.
// 
// Designed and Developed by Rampgroup, © 2024 People Tech Group all rights reserved.

#include "Screen_7050.h"

#include "RTOS_InternalData.h"
#include <cstdlib>

namespace gm
{
namespace csm
{


void Screen_7050::onScreenHide()
{
    Image_img_safety_icons.mVisibility.unBind(gm::csm::ICS_SAFTEY_ICON_VISIBILITY, mBindingsIds[0U]);
    Image_img_safety_icons.mState.unBind(ICS_SAFTEY_ICON_TYPE, mBindingsIds[1U]);
}

void Screen_7050::onScreenShow()
{
    mBindingsIds[0U] = Image_img_safety_icons.mVisibility.bind(gm::csm::ICS_SAFTEY_ICON_VISIBILITY);
    mBindingsIds[1U] = Image_img_safety_icons.mState.bind(ICS_SAFTEY_ICON_TYPE);
}


} // namespace csm
} // namespace gm
