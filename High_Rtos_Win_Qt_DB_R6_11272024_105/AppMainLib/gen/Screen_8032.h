// Copyright (C) GM Global Technology Operations LLC 2024.
// All Rights Reserved.
// GM Confidential Restricted.
// 
// Designed and Developed by Rampgroup, © 2024 People Tech Group all rights reserved.

#ifndef SCREEN_8032_H
#define SCREEN_8032_H

#include "BindableScreenLogic.h"
#include "StringData.h"
#include "WidgetProperties.h"
#include <array>

namespace gm
{
namespace csm
{


class Screen_8032 : public ::ramp::BindableScreenLogic
{
    public:
    Screen_8032(const std::string&  screen_id)  
    : ::ramp::BindableScreenLogic(screen_id)
    {
    }
    
    private:
    	widget_properties::LabelWidget Label_safetysystems_2_6_2_CalibrationPercentage2_csm{"safetysystems_2_6_2_CalibrationPercentage2_csm"};
    	widget_properties::ProgressBarWidget ProgressBar_8032_img_calibration_progressbar{"8032_img_calibration_progressbar"};
    	std::array<BindingId, 2> mBindingsIds;
    private:
    void Label_safetysystems_2_6_2_CalibrationPercentage2_csm_bindings();
    protected:
    void onScreenHide() override;
    protected:
    void onScreenShow() override;
};
} // namespace csm
} // namespace gm

#endif // SCREEN_8032_H
