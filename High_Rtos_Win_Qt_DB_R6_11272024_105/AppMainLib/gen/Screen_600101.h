// Copyright (C) GM Global Technology Operations LLC 2024.
// All Rights Reserved.
// GM Confidential Restricted.
// 
// Designed and Developed by Rampgroup, © 2024 People Tech Group all rights reserved.

#ifndef SCREEN_600101_H
#define SCREEN_600101_H

#include "BindableScreenLogic.h"
#include "WidgetProperties.h"
#include <array>

namespace gm
{
namespace csm
{


class Screen_600101 : public ::ramp::BindableScreenLogic
{
    public:
    Screen_600101(const std::string&  screen_id)  
    : ::ramp::BindableScreenLogic(screen_id)
    {
    }
    
    private:
    	widget_properties::ImageWidget Image_img_control_progress_bar_pointer{"img_control_progress_bar_pointer"};
    	widget_properties::ImageWidget Image_img_control_progress_bar_pointer2{"img_control_progress_bar_pointer2"};
    	widget_properties::ImageWidget Image_img_controls_controls_home_close{"img_controls_controls_home_close"};
    	widget_properties::ImageWidget Image_img_pintostart{"img_pintostart"};
    	std::array<BindingId, 5> mBindingsIds;
    private:
    void Widget_Logic_Visibility_img_controls_controls_home_close() noexcept;
    protected:
    void onScreenHide() override;
    protected:
    void onScreenShow() override;
};
} // namespace csm
} // namespace gm

#endif // SCREEN_600101_H
