// Copyright (C) GM Global Technology Operations LLC 2024.
// All Rights Reserved.
// GM Confidential Restricted.
// 
// Designed and Developed by Rampgroup, © 2024 People Tech Group all rights reserved.

#ifndef SCREEN_6092_H
#define SCREEN_6092_H

#include "BindableScreenLogic.h"
#include "WidgetProperties.h"
#include <array>

namespace gm
{
namespace csm
{


class Screen_6092 : public ::ramp::BindableScreenLogic
{
    public:
    Screen_6092(const std::string&  screen_id)  
    : ::ramp::BindableScreenLogic(screen_id)
    {
    }
    
    private:
    	widget_properties::ImageWidget Image_img_close{"img_close"};
    	widget_properties::ImageWidget Image_img_lane_keep_assist_normal{"img_lane_keep_assist_normal"};
    	widget_properties::ImageWidget Image_img_radio_button_laneKeepAssist_Off{"img_radio_button_laneKeepAssist_Off"};
    	widget_properties::ImageWidget Image_img_radio_button_laneKeepAssist_On{"img_radio_button_laneKeepAssist_On"};
    	widget_properties::LabelWidget Label_apa_3_0_Exit_f_csm{"apa_3_0_Exit_f_csm"};
    	widget_properties::LabelWidget Label_virtualcontrols_0_0_detailsUnavailable_csm{"virtualcontrols_0_0_detailsUnavailable_csm"};
    	widget_properties::LabelWidget Label_virtualcontrols_1_3_7_u_desc_csm{"virtualcontrols_1_3_7_u_desc_csm"};
    	widget_properties::LabelWidget Label_virtualcontrols_1_3_card_lka_csm{"virtualcontrols_1_3_card_lka_csm"};
    	widget_properties::LabelWidget Label_virtualcontrols_1_4_0_1_DomeOff_csm{"virtualcontrols_1_4_0_1_DomeOff_csm"};
    	widget_properties::LabelWidget Label_virtualcontrols_1_4_0_1_DomeOn_csm{"virtualcontrols_1_4_0_1_DomeOn_csm"};
    	std::array<BindingId, 6> mBindingsIds;
    private:
    void Widget_Logic_Visibility_apa_3_0_Exit_f_csm() noexcept;
    private:
    void Widget_Logic_Visibility_virtualcontrols_1_3_7_u_desc_csm() noexcept;
    private:
    void Widget_Logic_Visibility_img_close() noexcept;
    private:
    void Widget_Logic_Visibility_img_lane_keep_assist_normal() noexcept;
    protected:
    void onScreenHide() override;
    protected:
    void onScreenShow() override;
};
} // namespace csm
} // namespace gm

#endif // SCREEN_6092_H
