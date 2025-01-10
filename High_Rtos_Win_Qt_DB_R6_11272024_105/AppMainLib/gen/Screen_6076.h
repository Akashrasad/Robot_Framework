// Copyright (C) GM Global Technology Operations LLC 2024.
// All Rights Reserved.
// GM Confidential Restricted.
// 
// Designed and Developed by Rampgroup, © 2024 People Tech Group all rights reserved.

#ifndef SCREEN_6076_H
#define SCREEN_6076_H

#include "BindableScreenLogic.h"
#include "WidgetProperties.h"
#include <array>

namespace gm
{
namespace csm
{


class Screen_6076 : public ::ramp::BindableScreenLogic
{
    public:
    Screen_6076(const std::string&  screen_id)  
    : ::ramp::BindableScreenLogic(screen_id)
    {
    }
    
    private:
    	widget_properties::ImageWidget Image_img_controls_icn_autohold{"img_controls_icn_autohold"};
    	widget_properties::ImageWidget Image_img_radio_button_auto_hold_always_on{"img_radio_button_auto_hold_always_on"};
    	widget_properties::ImageWidget Image_img_radio_button_auto_hold_off{"img_radio_button_auto_hold_off"};
    	widget_properties::ImageWidget Image_img_radio_button_auto_hold_on{"img_radio_button_auto_hold_on"};
    	widget_properties::LabelWidget Label_virtualcontrols_0_0_detailsUnavailable_csm{"virtualcontrols_0_0_detailsUnavailable_csm"};
    	widget_properties::LabelWidget Label_virtualcontrols_1_3_6_V_desc_csm{"virtualcontrols_1_3_6_V_desc_csm"};
    	widget_properties::LabelWidget Label_virtualcontrols_1_3_HillOff_csm{"virtualcontrols_1_3_HillOff_csm"};
    	widget_properties::LabelWidget Label_virtualcontrols_1_3_HillOn_csm{"virtualcontrols_1_3_HillOn_csm"};
    	widget_properties::LabelWidget Label_virtualcontrols_1_3_h_hold_csm{"virtualcontrols_1_3_h_hold_csm"};
    	widget_properties::LabelWidget Label_virtualcontrols_1_4_0_1_DomeOnAlways_csm{"virtualcontrols_1_4_0_1_DomeOnAlways_csm"};
    	std::array<BindingId, 8> mBindingsIds;
    private:
    void Widget_Logic_Visibility_virtualcontrols_1_3_6_V_desc_csm() noexcept;
    private:
    void Widget_Logic_Visibility_img_controls_icn_autohold() noexcept;
    protected:
    void onScreenHide() override;
    protected:
    void onScreenShow() override;
};
} // namespace csm
} // namespace gm

#endif // SCREEN_6076_H
