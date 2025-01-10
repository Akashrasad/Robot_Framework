// Copyright (C) GM Global Technology Operations LLC 2024.
// All Rights Reserved.
// GM Confidential Restricted.
// 
// Designed and Developed by Rampgroup, © 2024 People Tech Group all rights reserved.

#ifndef SCREEN_6110_H
#define SCREEN_6110_H

#include "BindableScreenLogic.h"
#include "WidgetProperties.h"
#include <array>

namespace gm
{
namespace csm
{


class Screen_6110 : public ::ramp::BindableScreenLogic
{
    public:
    Screen_6110(const std::string&  screen_id)  
    : ::ramp::BindableScreenLogic(screen_id)
    {
    }
    
    private:
    	widget_properties::LabelWidget Label_choreography_9_3F_PressStartStopButton_csm{"choreography_9_3F_PressStartStopButton_csm"};
    	widget_properties::LabelWidget Label_choreography_9_4F_PressStartStopButton_csm{"choreography_9_4F_PressStartStopButton_csm"};
    	widget_properties::ProgressBarWidget ProgressBar_6110_img_progressbar{"6110_img_progressbar"};
    	std::array<BindingId, 1> mBindingsIds;
    private:
    void Widget_Logic_Visibility_choreography_9_4F_PressStartStopButton_csm() noexcept;
    private:
    void Widget_Logic_Visibility_choreography_9_3F_PressStartStopButton_csm() noexcept;
    protected:
    void onScreenHide() override;
    protected:
    void onScreenShow() override;
};
} // namespace csm
} // namespace gm

#endif // SCREEN_6110_H
