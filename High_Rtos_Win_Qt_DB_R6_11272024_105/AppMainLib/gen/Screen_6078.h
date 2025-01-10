// Copyright (C) GM Global Technology Operations LLC 2024.
// All Rights Reserved.
// GM Confidential Restricted.
// 
// Designed and Developed by Rampgroup, © 2024 People Tech Group all rights reserved.

#ifndef SCREEN_6078_H
#define SCREEN_6078_H

#include "BindableScreenLogic.h"
#include "WidgetProperties.h"
#include <array>

namespace gm
{
namespace csm
{


class Screen_6078 : public ::ramp::BindableScreenLogic
{
    public:
    Screen_6078(const std::string&  screen_id)  
    : ::ramp::BindableScreenLogic(screen_id)
    {
    }
    
    private:
    	widget_properties::ImageWidget Image_img_bg{"img_bg"};
    	widget_properties::ImageWidget Image_img_expanded_arrow{"img_expanded_arrow"};
    	widget_properties::ImageWidget Image_img_persistent_controls_control_icon{"img_persistent_controls_control_icon"};
    	widget_properties::ImageWidget Image_img_persistent_controls_lights_headlights{"img_persistent_controls_lights_headlights"};
    	widget_properties::ImageWidget Image_img_persistent_controls_voc_lane_keep_assist{"img_persistent_controls_voc_lane_keep_assist"};
    	widget_properties::ImageWidget Image_img_settings_launcher_icon{"img_settings_launcher_icon"};
    	std::array<BindingId, 10> mBindingsIds;
    protected:
    void onScreenHide() override;
    protected:
    void onScreenShow() override;
};
} // namespace csm
} // namespace gm

#endif // SCREEN_6078_H
