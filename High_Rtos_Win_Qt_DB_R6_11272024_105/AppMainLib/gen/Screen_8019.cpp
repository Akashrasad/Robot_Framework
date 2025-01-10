// Copyright (C) GM Global Technology Operations LLC 2024.
// All Rights Reserved.
// GM Confidential Restricted.
// 
// Designed and Developed by Rampgroup, © 2024 People Tech Group all rights reserved.

#include "Screen_8019.h"

#include "RTOS_InternalData.h"
#include <cstdlib>

namespace gm
{
namespace csm
{


void Screen_8019::onScreenHide()
{
    Image_img_progressbar_bg.mVisibility.unBind(gm::csm::Data_VIRTUAL_OFF_ICON_VISIBITY, mBindingsIds[0U]);
    ProgressBar_8019_img_progressbar_1.mVisibility.unBind(gm::csm::Data_VIRTUAL_OFF_ICON_VISIBITY, mBindingsIds[1U]);
    ProgressBar_8019_img_progressbar_1.mProgressBarValue.unBind(gm::csm::Data_VIRTUAL_OFF_PROGRESS_BAR, mBindingsIds[2U]);
}

void Screen_8019::onScreenShow()
{
    mBindingsIds[0U] = Image_img_progressbar_bg.mVisibility.bind(gm::csm::Data_VIRTUAL_OFF_ICON_VISIBITY);
    mBindingsIds[1U] = ProgressBar_8019_img_progressbar_1.mVisibility.bind(gm::csm::Data_VIRTUAL_OFF_ICON_VISIBITY);
    mBindingsIds[2U] = ProgressBar_8019_img_progressbar_1.mProgressBarValue.bind(gm::csm::Data_VIRTUAL_OFF_PROGRESS_BAR);
}


} // namespace csm
} // namespace gm
