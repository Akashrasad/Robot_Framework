// Copyright (C) GM Global Technology Operations LLC 2024.
// All Rights Reserved.
// GM Confidential Restricted.
// 
// Designed and Developed by Rampgroup, © 2024 People Tech Group all rights reserved.

#include "Screen_8032.h"

#include "Camera_CustomDataPool.h"
#include <cstdlib>

namespace gm
{
namespace csm
{


void Screen_8032::Label_safetysystems_2_6_2_CalibrationPercentage2_csm_bindings()
{
    std::string text = Label_safetysystems_2_6_2_CalibrationPercentage2_csm.mText.getLanguageText();

    ramp::FindReplaceString(text,"%1$s",ramp::to_string(gm::csm::Data_RTC_ALIGNMENT_PROGRESS));
    Label_safetysystems_2_6_2_CalibrationPercentage2_csm = text.c_str();
}

void Screen_8032::onScreenHide()
{
    ProgressBar_8032_img_calibration_progressbar.mProgressBarValue.unBind(gm::csm::Data_RTC_ALIGNMENT_PROGRESS, mBindingsIds[0U]);
}

void Screen_8032::onScreenShow()
{
    mBindingsIds[0U] = ProgressBar_8032_img_calibration_progressbar.mProgressBarValue.bind(gm::csm::Data_RTC_ALIGNMENT_PROGRESS);
    addDependency(this, &Screen_8032::Label_safetysystems_2_6_2_CalibrationPercentage2_csm_bindings,gm::csm::Data_RTC_ALIGNMENT_PROGRESS);
}


} // namespace csm
} // namespace gm
