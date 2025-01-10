// Copyright (C) GM Global Technology Operations LLC 2024.
// All Rights Reserved.
// GM Confidential Restricted.
// 
// Designed and Developed by Rampgroup, © 2024 People Tech Group all rights reserved.

#ifndef SCREEN_6015_H
#define SCREEN_6015_H

#include "BindableScreenLogic.h"
#include "WidgetProperties.h"
#include <array>

namespace gm
{
namespace csm
{


class Screen_6015 : public ::ramp::BindableScreenLogic
{
    public:
    Screen_6015(const std::string&  screen_id)  
    : ::ramp::BindableScreenLogic(screen_id)
    {
    }
    
    private:
    	widget_properties::GroupWidget Group_grp_placeholder_WakeScreen{"grp_placeholder_WakeScreen"};
    	widget_properties::GroupWidget Group_grp_placeholder_WakeScreen_mfc{"grp_placeholder_WakeScreen_mfc"};
    	widget_properties::ImageWidget Image_img_Enhanced_transparent{"img_Enhanced_transparent"};
    	widget_properties::ImageWidget Image_img_High_transparent{"img_High_transparent"};
    	widget_properties::ImageWidget Image_img_bg_opd_black{"img_bg_opd_black"};
    	widget_properties::ImageWidget Image_img_checkbox{"img_checkbox"};
    	widget_properties::ImageWidget Image_img_close{"img_close"};
    	widget_properties::ImageWidget Image_img_driving_pedal{"img_driving_pedal"};
    	widget_properties::ImageWidget Image_img_parking_divider{"img_parking_divider"};
    	widget_properties::ImageWidget Image_img_radio_button_enhanced{"img_radio_button_enhanced"};
    	widget_properties::ImageWidget Image_img_radio_button_high{"img_radio_button_high"};
    	widget_properties::ImageWidget Image_img_radio_button_off{"img_radio_button_off"};
    	widget_properties::ImageWidget Image_img_radio_button_on{"img_radio_button_on"};
    	widget_properties::LabelWidget Label_virtualcontrols_0_0_detailsUnavailable_csm{"virtualcontrols_0_0_detailsUnavailable_csm"};
    	widget_properties::LabelWidget Label_virtualcontrols_1_1_exitBtn_csm{"virtualcontrols_1_1_exitBtn_csm"};
    	widget_properties::LabelWidget Label_virtualcontrols_1_3_0_5_opd_csm{"virtualcontrols_1_3_0_5_opd_csm"};
    	widget_properties::LabelWidget Label_virtualcontrols_1_3_4F_HomeScreen_csm{"virtualcontrols_1_3_4F_HomeScreen_csm"};
    	widget_properties::LabelWidget Label_virtualcontrols_1_3_OPDHigh_csm{"virtualcontrols_1_3_OPDHigh_csm"};
    	widget_properties::LabelWidget Label_virtualcontrols_1_3_OPDHighplus_csm{"virtualcontrols_1_3_OPDHighplus_csm"};
    	widget_properties::LabelWidget Label_virtualcontrols_1_3_OPDNormal_csm{"virtualcontrols_1_3_OPDNormal_csm"};
    	widget_properties::LabelWidget Label_virtualcontrols_1_3_OPDOff_csm{"virtualcontrols_1_3_OPDOff_csm"};
    	widget_properties::LabelWidget Label_virtualcontrols_1_3_cardOPD_csm{"virtualcontrols_1_3_cardOPD_csm"};
    	std::array<BindingId, 20> mBindingsIds;
    private:
    void Widget_Logic_Visibility_virtualcontrols_1_1_exitBtn_csm() noexcept;
    private:
    void Widget_Logic_Visibility_img_parking_divider() noexcept;
    private:
    void Widget_Logic_Visibility_grp_placeholder_WakeScreen() noexcept;
    private:
    void Widget_Logic_Visibility_grp_placeholder_WakeScreen_mfc() noexcept;
    private:
    void Widget_Logic_Visibility_img_close() noexcept;
    private:
    void Widget_Logic_Visibility_virtualcontrols_1_3_0_5_opd_csm() noexcept;
    private:
    void Widget_Logic_Visibility_img_driving_pedal() noexcept;
    protected:
    void onScreenHide() override;
    protected:
    void onScreenShow() override;
};
} // namespace csm
} // namespace gm

#endif // SCREEN_6015_H
