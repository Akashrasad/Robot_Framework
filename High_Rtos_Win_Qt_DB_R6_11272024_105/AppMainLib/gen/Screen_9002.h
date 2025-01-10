// Copyright (C) GM Global Technology Operations LLC 2024.
// All Rights Reserved.
// GM Confidential Restricted.
// 
// Designed and Developed by Rampgroup, © 2024 People Tech Group all rights reserved.

#ifndef SCREEN_9002_H
#define SCREEN_9002_H

#include "BindableScreenLogic.h"
#include "WidgetProperties.h"
#include <array>

namespace gm
{
namespace csm
{


class Screen_9002 : public ::ramp::BindableScreenLogic
{
    public:
    Screen_9002(const std::string&  screen_id)  
    : ::ramp::BindableScreenLogic(screen_id)
    {
    }
    
    private:
    	widget_properties::GroupWidget Group_grp_auto_single_zone{"grp_auto_single_zone"};
    	widget_properties::ImageWidget Image_img_btn_left_seat_cool_b_c{"img_btn_left_seat_cool_b_c"};
    	widget_properties::ImageWidget Image_img_btn_right_seat_cool_b_c{"img_btn_right_seat_cool_b_c"};
    	widget_properties::ImageWidget Image_img_fan_single_zone{"img_fan_single_zone"};
    	widget_properties::ImageWidget Image_img_hvac_bottom_tab_bg{"img_hvac_bottom_tab_bg"};
    	widget_properties::ImageWidget Image_img_hvac_bottombar_right_seat_divider{"img_hvac_bottombar_right_seat_divider"};
    	widget_properties::ImageWidget Image_img_hvac_launcher_expand_full{"img_hvac_launcher_expand_full"};
    	widget_properties::ImageWidget Image_img_hvac_modeman_auto{"img_hvac_modeman_auto"};
    	widget_properties::ImageWidget Image_img_left_coolseat_divider{"img_left_coolseat_divider"};
    	widget_properties::ImageWidget Image_img_right_cool_seat_divider{"img_right_cool_seat_divider"};
    	std::array<BindingId, 10> mBindingsIds;
    protected:
    void onScreenHide() override;
    protected:
    void onScreenShow() override;
};
} // namespace csm
} // namespace gm

#endif // SCREEN_9002_H
