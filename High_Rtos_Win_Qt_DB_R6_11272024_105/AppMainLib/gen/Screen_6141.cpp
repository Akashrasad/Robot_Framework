// Copyright (C) GM Global Technology Operations LLC 2024.
// All Rights Reserved.
// GM Confidential Restricted.
// 
// Designed and Developed by Rampgroup, © 2024 People Tech Group all rights reserved.

#include "Screen_6141.h"

#include "RTOS_InternalData.h"
#include <cstdlib>

namespace gm
{
namespace csm
{


void Screen_6141::onScreenHide()
{
    AnimationName_audio_progress.mFrameNumber.unBind(gm::csm::Data_VOLUME_KNOB_CURRENT_VOLUME, mBindingsIds[0U]);
    AnimationName_SetMaxLimit.mFrameNumber.unBind(gm::csm::Data_VOLUME_KNOB_MAXIMUM_VOLUME_CAP, mBindingsIds[1U]);
    AnimationName_SetMinLimit.mFrameNumber.unBind(gm::csm::Data_VOLUME_KNOB_MINIMUM_VOLUME_CAP, mBindingsIds[2U]);
}

void Screen_6141::onScreenShow()
{
    mBindingsIds[0U] = AnimationName_audio_progress.mFrameNumber.bind(gm::csm::Data_VOLUME_KNOB_CURRENT_VOLUME);
    mBindingsIds[1U] = AnimationName_SetMaxLimit.mFrameNumber.bind(gm::csm::Data_VOLUME_KNOB_MAXIMUM_VOLUME_CAP);
    mBindingsIds[2U] = AnimationName_SetMinLimit.mFrameNumber.bind(gm::csm::Data_VOLUME_KNOB_MINIMUM_VOLUME_CAP);
}


} // namespace csm
} // namespace gm
