// Copyright (C) GM Global Technology Operations LLC 2024.
// All Rights Reserved.
// GM Confidential Restricted.
// 
// Designed and Developed by Rampgroup, © 2024 People Tech Group all rights reserved.

#ifndef SCREEN_9028_H
#define SCREEN_9028_H

#include "BindableScreenLogic.h"
#include "WidgetProperties.h"
#include <array>

namespace gm
{
namespace csm
{


class Screen_9028 : public ::ramp::BindableScreenLogic
{
    public:
    Screen_9028(const std::string&  screen_id)  
    : ::ramp::BindableScreenLogic(screen_id)
    {
    }
    
    private:
    	widget_properties::ImageWidget Image_img_btn_left_seat_cool_b_c{"img_btn_left_seat_cool_b_c"};
    	widget_properties::ImageWidget Image_img_btn_left_seat_heat_b_c{"img_btn_left_seat_heat_b_c"};
    	widget_properties::ImageWidget Image_img_btn_left_seat_heat_back{"img_btn_left_seat_heat_back"};
    	std::array<BindingId, 3> mBindingsIds;
    protected:
    void onScreenHide() override;
    protected:
    void onScreenShow() override;
};
} // namespace csm
} // namespace gm

#endif // SCREEN_9028_H
