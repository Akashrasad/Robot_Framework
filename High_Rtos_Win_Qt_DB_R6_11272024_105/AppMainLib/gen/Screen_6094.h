// Copyright (C) GM Global Technology Operations LLC 2024.
// All Rights Reserved.
// GM Confidential Restricted.
// 
// Designed and Developed by Rampgroup, © 2024 People Tech Group all rights reserved.

#ifndef SCREEN_6094_H
#define SCREEN_6094_H

#include "BindableScreenLogic.h"
#include "WidgetProperties.h"
#include <array>

namespace gm
{
namespace csm
{


class Screen_6094 : public ::ramp::BindableScreenLogic
{
    public:
    Screen_6094(const std::string&  screen_id)  
    : ::ramp::BindableScreenLogic(screen_id)
    {
    }
    
    private:
    	widget_properties::ImageWidget Image_img_close{"img_close"};
    	widget_properties::ImageWidget Image_img_lane_centering_icon{"img_lane_centering_icon"};
    	widget_properties::ImageWidget Image_img_radio_button_Off{"img_radio_button_Off"};
    	widget_properties::ImageWidget Image_img_radio_button_on{"img_radio_button_on"};
    	widget_properties::LabelWidget Label_apa_3_0_Exit_f_csm{"apa_3_0_Exit_f_csm"};
    	widget_properties::LabelWidget Label_virtualcontrols_0_0_detailsUnavailable_csm{"virtualcontrols_0_0_detailsUnavailable_csm"};
    	widget_properties::LabelWidget Label_virtualcontrols_1_3_7_u_desc_csm{"virtualcontrols_1_3_7_u_desc_csm"};
    	widget_properties::LabelWidget Label_virtualcontrols_1_3_7_v_lkaOff_csm{"virtualcontrols_1_3_7_v_lkaOff_csm"};
    	widget_properties::LabelWidget Label_virtualcontrols_1_3_7_v_lkaOn_csm{"virtualcontrols_1_3_7_v_lkaOn_csm"};
    	widget_properties::LabelWidget Label_virtualcontrols_1_3_ah_cardLKA_csm{"virtualcontrols_1_3_ah_cardLKA_csm"};
    	std::array<BindingId, 6> mBindingsIds;
    private:
    void Widget_Logic_Visibility_img_close() noexcept;
    private:
    void Widget_Logic_Visibility_img_lane_centering_icon() noexcept;
    private:
    void Widget_Logic_Visibility_virtualcontrols_1_3_7_u_desc_csm() noexcept;
    private:
    void Widget_Logic_Visibility_apa_3_0_Exit_f_csm() noexcept;
    protected:
    void onScreenHide() override;
    protected:
    void onScreenShow() override;
};
} // namespace csm
} // namespace gm

#endif // SCREEN_6094_H
