// Copyright (C) GM Global Technology Operations LLC 2024.
// All Rights Reserved.
// GM Confidential Restricted.
// 
// Designed and Developed by Rampgroup, © 2024 People Tech Group all rights reserved.

#ifndef SCREEN_9001_H
#define SCREEN_9001_H

#include "BindableScreenLogic.h"
#include "WidgetProperties.h"
#include <array>

namespace gm
{
namespace csm
{


class Screen_9001 : public ::ramp::BindableScreenLogic
{
    public:
    Screen_9001(const std::string&  screen_id)  
    : ::ramp::BindableScreenLogic(screen_id)
    {
    }
    
    private:
    	widget_properties::GroupImageWidget GroupImage_img_air_direction_selected{"grp_fan_level_modeman","img_air_direction_selected"};
    	widget_properties::GroupImageWidget GroupImage_img_fan_level{"grp_fan_level_modeman","img_fan_level"};
    	widget_properties::ImageWidget Image_img_btn_Sync{"img_btn_Sync"};
    	widget_properties::ImageWidget Image_img_btn_left_seat_cool_b_c{"img_btn_left_seat_cool_b_c"};
    	widget_properties::ImageWidget Image_img_btn_right_seat_cool_b_c{"img_btn_right_seat_cool_b_c"};
    	widget_properties::ImageWidget Image_img_hvac_bottom_tab_bg{"img_hvac_bottom_tab_bg"};
    	widget_properties::ImageWidget Image_img_left_cool_seat_divider{"img_left_cool_seat_divider"};
    	widget_properties::ImageWidget Image_img_right_cool_seat_divider{"img_right_cool_seat_divider"};
    	widget_properties::LabelWidget Label_dyn_lbl_left_temp{"dyn_lbl_left_temp"};
    	std::array<BindingId, 9> mBindingsIds;
    protected:
    void onScreenHide() override;
    protected:
    void onScreenShow() override;
};
} // namespace csm
} // namespace gm

#endif // SCREEN_9001_H
