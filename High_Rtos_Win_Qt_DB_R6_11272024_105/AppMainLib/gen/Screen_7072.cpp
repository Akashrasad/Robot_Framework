// Copyright (C) GM Global Technology Operations LLC 2024.
// All Rights Reserved.
// GM Confidential Restricted.
// 
// Designed and Developed by Rampgroup, © 2024 People Tech Group all rights reserved.

#include "Screen_7072.h"

#include "RTOS_InternalData.h"
#include <cstdlib>

namespace gm
{
namespace csm
{


void Screen_7072::onScreenHide()
{
    ProgressBar_7072_img_virtualoff_progressbar.mProgressBarValue.unBind(gm::csm::Data_VIRTUAL_OFF_PROGRESS_BAR, mBindingsIds[0U]);
}

void Screen_7072::onScreenShow()
{
    mBindingsIds[0U] = ProgressBar_7072_img_virtualoff_progressbar.mProgressBarValue.bind(gm::csm::Data_VIRTUAL_OFF_PROGRESS_BAR);
}


} // namespace csm
} // namespace gm
