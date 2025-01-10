// Copyright (C) GM Global Technology Operations LLC 2024.
// All Rights Reserved.
// GM Confidential Restricted.
// 
// Designed and Developed by Rampgroup, © 2024 People Tech Group all rights reserved.

#include "Screen_8029.h"

#include "RTOS_InternalData.h"
#include <cstdlib>

namespace gm
{
namespace csm
{


void Screen_8029::onScreenHide()
{
    Group_grp_img_exit.mVisibility.unBind(gm::csm::Data_Close_Button_Visibility, mBindingsIds[0U]);
}

void Screen_8029::onScreenShow()
{
    mBindingsIds[0U] = Group_grp_img_exit.mVisibility.bind(gm::csm::Data_Close_Button_Visibility);
}


} // namespace csm
} // namespace gm
