// Copyright (C) GM Global Technology Operations LLC 2024.
// All Rights Reserved.
// GM Confidential Restricted.
// 
// Designed and Developed by Rampgroup, © 2024 People Tech Group all rights reserved.

#ifndef SCREEN_6226_H
#define SCREEN_6226_H

#include "BindableScreenLogic.h"
#include "WidgetProperties.h"
#include <array>

namespace gm
{
namespace csm
{


class Screen_6226 : public ::ramp::BindableScreenLogic
{
    public:
    Screen_6226(const std::string&  screen_id)  
    : ::ramp::BindableScreenLogic(screen_id)
    {
    }
    
    private:
    	widget_properties::ImageWidget Image_img_headlight_on{"img_headlight_on"};
    	widget_properties::ImageWidget Image_img_headlight_parking{"img_headlight_parking"};
    	widget_properties::ImageWidget Image_img_radio_button_headlight_auto{"img_radio_button_headlight_auto"};
    	widget_properties::ImageWidget Image_img_radio_button_headlight_off{"img_radio_button_headlight_off"};
    	widget_properties::ImageWidget Image_img_radio_button_headlight_on{"img_radio_button_headlight_on"};
    	widget_properties::ImageWidget Image_img_radio_button_headlight_parking{"img_radio_button_headlight_parking"};
    	widget_properties::LabelWidget Label_virtualcontrols_1_0_u_PersHeadlightsAuto_csm{"virtualcontrols_1_0_u_PersHeadlightsAuto_csm"};
    	widget_properties::LabelWidget Label_virtualcontrols_1_0_u_PersHeadlightsOff_csm{"virtualcontrols_1_0_u_PersHeadlightsOff_csm"};
    	std::array<BindingId, 8> mBindingsIds;
    protected:
    void onScreenHide() override;
    protected:
    void onScreenShow() override;
};
} // namespace csm
} // namespace gm

#endif // SCREEN_6226_H
