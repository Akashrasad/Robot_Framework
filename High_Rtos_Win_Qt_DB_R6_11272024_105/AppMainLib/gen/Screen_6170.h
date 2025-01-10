// Copyright (C) GM Global Technology Operations LLC 2024.
// All Rights Reserved.
// GM Confidential Restricted.
// 
// Designed and Developed by Rampgroup, © 2024 People Tech Group all rights reserved.

#ifndef SCREEN_6170_H
#define SCREEN_6170_H

#include "BindableScreenLogic.h"
#include "WidgetProperties.h"
#include <array>

namespace gm
{
namespace csm
{


class Screen_6170 : public ::ramp::BindableScreenLogic
{
    public:
    Screen_6170(const std::string&  screen_id)  
    : ::ramp::BindableScreenLogic(screen_id)
    {
    }
    
    private:
    	widget_properties::GroupLabelWidget GroupLabel_dyn_brightness_display{"grp_brightness_display","dyn_brightness_display"};
    	widget_properties::GroupLabelWidget GroupLabel_dyn_contrast_display{"grp_contrast_display","dyn_contrast_display"};
    	widget_properties::ImageWidget Image_img_brightness_decrease{"img_brightness_decrease"};
    	widget_properties::ImageWidget Image_img_brightness_increase{"img_brightness_increase"};
    	widget_properties::ImageWidget Image_img_contrast_decrease{"img_contrast_decrease"};
    	widget_properties::ImageWidget Image_img_contrast_increase{"img_contrast_increase"};
    	std::array<BindingId, 6> mBindingsIds;
    protected:
    void onScreenHide() override;
    protected:
    void onScreenShow() override;
};
} // namespace csm
} // namespace gm

#endif // SCREEN_6170_H
