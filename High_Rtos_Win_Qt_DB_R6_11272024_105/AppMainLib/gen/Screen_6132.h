// Copyright (C) GM Global Technology Operations LLC 2024.
// All Rights Reserved.
// GM Confidential Restricted.
// 
// Designed and Developed by Rampgroup, © 2024 People Tech Group all rights reserved.

#ifndef SCREEN_6132_H
#define SCREEN_6132_H

#include "BindableScreenLogic.h"
#include "Flashing.h"
#include "WidgetProperties.h"
#include <array>

namespace gm
{
namespace csm
{


class Screen_6132 : public ::ramp::BindableScreenLogic
{
    public:
    Screen_6132(const std::string&  screen_id)  
    : ::ramp::BindableScreenLogic(screen_id)
    {
    }
    
    private:
    	 ::Bindable<bool> mGrp_airbag_offVisibility;
    	 ::Bindable<bool> mGrp_img_onVisibility;
    	 ::Bindable<bool> mImg_airbag_off_calVisibility;
    	 ::Bindable<bool> mImg_airbag_on_calVisibility;
    	 ::Bindable<bool> mImg_airbag_warning_calVisibility;
    	 ::Bindable<bool> mImg_passenger_seat_beltVisibility;
    	 ::Bindable<bool> mImg_passenger_seat_belt_calVisibility;
    	widget_properties::GroupWidget Group_grp_airbag_off{"grp_airbag_off"};
    	widget_properties::GroupWidget Group_grp_img_on{"grp_img_on"};
    	widget_properties::ImageWidget Image_img_airbag_off_cal{"img_airbag_off_cal"};
    	widget_properties::ImageWidget Image_img_airbag_on_cal{"img_airbag_on_cal"};
    	widget_properties::ImageWidget Image_img_airbag_warning_cal{"img_airbag_warning_cal"};
    	widget_properties::ImageWidget Image_img_passenger_seat_belt{"img_passenger_seat_belt"};
    	widget_properties::ImageWidget Image_img_passenger_seat_belt_cal{"img_passenger_seat_belt_cal"};
    	widget_properties::LabelWidget Label_uiframework_passengerAirBag_csm{"uiframework_passengerAirBag_csm"};
    	std::array<BindingId, 1> mBindingsIds;
    	::ramp::Flashing* mFlashing_1{nullptr};
    	::ramp::Flashing* mFlashing_2{nullptr};
    	::ramp::Flashing* mFlashing_3{nullptr};
    	::ramp::Flashing* mFlashing_4{nullptr};
    	::ramp::Flashing* mFlashing_5{nullptr};
    	::ramp::Flashing* mFlashing_6{nullptr};
    	::ramp::Flashing* mFlashing_7{nullptr};
    private:
    void Widget_Logic_Visibility_img_airbag_off_cal() noexcept;
    private:
    void Widget_Logic_Visibility_grp_img_on() noexcept;
    private:
    void Widget_Logic_Visibility_grp_airbag_off() noexcept;
    private:
    void Widget_Logic_Visibility_img_passenger_seat_belt() noexcept;
    private:
    void Widget_Logic_Visibility_img_passenger_seat_belt_cal() noexcept;
    private:
    void Widget_Logic_Visibility_img_airbag_on_cal() noexcept;
    private:
    void Widget_Logic_Visibility_img_airbag_warning_cal() noexcept;
    protected:
    void onScreenHide() override;
    protected:
    void onScreenShow() override;
};
} // namespace csm
} // namespace gm

#endif // SCREEN_6132_H
