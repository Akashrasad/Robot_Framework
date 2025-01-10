// Copyright (C) GM Global Technology Operations LLC 2024.
// All Rights Reserved.
// GM Confidential Restricted.
// 
// Designed and Developed by Rampgroup, © 2024 People Tech Group all rights reserved.

#ifndef SCREEN_6012_H
#define SCREEN_6012_H

#include "BindableScreenLogic.h"
#include "WidgetProperties.h"
#include <array>

namespace gm
{
namespace csm
{


class Screen_6012 : public ::ramp::BindableScreenLogic
{
    public:
    Screen_6012(const std::string&  screen_id)  
    : ::ramp::BindableScreenLogic(screen_id)
    {
    }
    
    private:
    	widget_properties::ImageWidget Image_img_close{"img_close"};
    	widget_properties::ImageWidget Image_img_competetive_mode_divider{"img_competetive_mode_divider"};
    	widget_properties::ImageWidget Image_img_competetive_mode_transparent{"img_competetive_mode_transparent"};
    	widget_properties::ImageWidget Image_img_radio_button_competitive_on{"img_radio_button_competitive_on"};
    	widget_properties::ImageWidget Image_img_radio_button_traction_Off{"img_radio_button_traction_Off"};
    	widget_properties::ImageWidget Image_img_radio_button_traction_esc_off{"img_radio_button_traction_esc_off"};
    	widget_properties::ImageWidget Image_img_radio_button_traction_esc_on{"img_radio_button_traction_esc_on"};
    	widget_properties::ImageWidget Image_img_traction_control{"img_traction_control"};
    	widget_properties::LabelWidget Label_virtualcontrols_0_0_detailsUnavailable_csm{"virtualcontrols_0_0_detailsUnavailable_csm"};
    	widget_properties::LabelWidget Label_virtualcontrols_1_0_e_traction_esc_off_csm{"virtualcontrols_1_0_e_traction_esc_off_csm"};
    	widget_properties::LabelWidget Label_virtualcontrols_1_0_e_traction_on_csm{"virtualcontrols_1_0_e_traction_on_csm"};
    	widget_properties::LabelWidget Label_virtualcontrols_1_1_exitBtn_csm{"virtualcontrols_1_1_exitBtn_csm"};
    	widget_properties::LabelWidget Label_virtualcontrols_1_3_0_1_1_TractionCompetitive_csm{"virtualcontrols_1_3_0_1_1_TractionCompetitive_csm"};
    	widget_properties::LabelWidget Label_virtualcontrols_1_3_0_1_TractionOff_csm{"virtualcontrols_1_3_0_1_TractionOff_csm"};
    	widget_properties::LabelWidget Label_virtualcontrols_1_3_0_1_tractionTitle_csm{"virtualcontrols_1_3_0_1_tractionTitle_csm"};
    	widget_properties::LabelWidget Label_virtualcontrols_1_3_0_1_traction_csm{"virtualcontrols_1_3_0_1_traction_csm"};
    	std::array<BindingId, 14> mBindingsIds;
    private:
    void Widget_Logic_Visibility_img_close() noexcept;
    private:
    void Widget_Logic_Visibility_img_traction_control() noexcept;
    private:
    void Widget_Logic_Visibility_virtualcontrols_1_3_0_1_traction_csm() noexcept;
    private:
    void Widget_Logic_Visibility_virtualcontrols_1_1_exitBtn_csm() noexcept;
    protected:
    void onScreenHide() override;
    protected:
    void onScreenShow() override;
};
} // namespace csm
} // namespace gm

#endif // SCREEN_6012_H
