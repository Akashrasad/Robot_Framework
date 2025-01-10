// Copyright (C) GM Global Technology Operations LLC 2024.
// All Rights Reserved.
// GM Confidential Restricted.
// 
// Designed and Developed by Rampgroup, © 2024 People Tech Group all rights reserved.

#ifndef SCREEN_6074_H
#define SCREEN_6074_H

#include "BindableScreenLogic.h"
#include "WidgetProperties.h"
#include <array>

namespace gm
{
namespace csm
{


class Screen_6074 : public ::ramp::BindableScreenLogic
{
    public:
    Screen_6074(const std::string&  screen_id)  
    : ::ramp::BindableScreenLogic(screen_id)
    {
    }
    
    private:
    	widget_properties::ImageWidget Image_img_close{"img_close"};
    	widget_properties::ImageWidget Image_img_lane_centering_icon{"img_lane_centering_icon"};
    	widget_properties::ImageWidget Image_img_radio_button_Off{"img_radio_button_Off"};
    	widget_properties::ImageWidget Image_img_radio_button_on{"img_radio_button_on"};
    	widget_properties::LabelWidget Label_virtualcontrols_0_0_detailsUnavailable_csm{"virtualcontrols_0_0_detailsUnavailable_csm"};
    	widget_properties::LabelWidget Label_virtualcontrols_1_1_exitBtn_csm{"virtualcontrols_1_1_exitBtn_csm"};
    	widget_properties::LabelWidget Label_virtualcontrols_1_3_1_holca_csm{"virtualcontrols_1_3_1_holca_csm"};
    	widget_properties::LabelWidget Label_virtualcontrols_1_3_ParkAssistOff_csm{"virtualcontrols_1_3_ParkAssistOff_csm"};
    	widget_properties::LabelWidget Label_virtualcontrols_1_3_ParkAssistOn_csm{"virtualcontrols_1_3_ParkAssistOn_csm"};
    	widget_properties::LabelWidget Label_virtualcontrols_1_3_card_holca_csm{"virtualcontrols_1_3_card_holca_csm"};
    	std::array<BindingId, 6> mBindingsIds;
    private:
    void Widget_Logic_Visibility_img_close() noexcept;
    private:
    void Widget_Logic_Visibility_virtualcontrols_1_3_1_holca_csm() noexcept;
    private:
    void Widget_Logic_Visibility_virtualcontrols_1_1_exitBtn_csm() noexcept;
    private:
    void Widget_Logic_Visibility_img_lane_centering_icon() noexcept;
    protected:
    void onScreenHide() override;
    protected:
    void onScreenShow() override;
};
} // namespace csm
} // namespace gm

#endif // SCREEN_6074_H
