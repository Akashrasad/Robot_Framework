// Copyright (C) GM Global Technology Operations LLC 2024.
// All Rights Reserved.
// GM Confidential Restricted.
// 
// Designed and Developed by Rampgroup, © 2024 People Tech Group all rights reserved.

#ifndef SCREEN_6150_H
#define SCREEN_6150_H

#include "BindableScreenLogic.h"
#include "WidgetProperties.h"
#include <array>

namespace gm
{
namespace csm
{


class Screen_6150 : public ::ramp::BindableScreenLogic
{
    public:
    Screen_6150(const std::string&  screen_id)  
    : ::ramp::BindableScreenLogic(screen_id)
    {
    }
    
    private:
    	widget_properties::GroupWidget Group_grp_placeholder_WakeScreen{"grp_placeholder_WakeScreen"};
    	widget_properties::ImageWidget Image_img_bzsa_divider{"img_bzsa_divider"};
    	widget_properties::ImageWidget Image_img_checkbox_bzsa{"img_checkbox_bzsa"};
    	widget_properties::ImageWidget Image_img_checkbox_lca{"img_checkbox_lca"};
    	widget_properties::ImageWidget Image_img_close{"img_close"};
    	widget_properties::ImageWidget Image_img_control_lka_bzsa_and_holca{"img_control_lka_bzsa_and_holca"};
    	widget_properties::ImageWidget Image_img_lca_divider{"img_lca_divider"};
    	widget_properties::ImageWidget Image_img_placeholder_WakeScreen{"img_placeholder_WakeScreen"};
    	widget_properties::ImageWidget Image_img_radio_button_lane_off{"img_radio_button_lane_off"};
    	widget_properties::ImageWidget Image_img_radio_button_lane_on{"img_radio_button_lane_on"};
    	widget_properties::LabelWidget Label_dyn_bzsa_lable{"dyn_bzsa_lable"};
    	widget_properties::LabelWidget Label_virtualcontrols_0_0_detailsUnavailable_csm{"virtualcontrols_0_0_detailsUnavailable_csm"};
    	widget_properties::LabelWidget Label_virtualcontrols_1_0_4_wakeScreenExit_csm{"virtualcontrols_1_0_4_wakeScreenExit_csm"};
    	widget_properties::LabelWidget Label_virtualcontrols_1_3_7_u_centering_csm{"virtualcontrols_1_3_7_u_centering_csm"};
    	widget_properties::LabelWidget Label_virtualcontrols_1_3_7_u_desc_csm{"virtualcontrols_1_3_7_u_desc_csm"};
    	widget_properties::LabelWidget Label_virtualcontrols_1_3_h_cardLKA_csm{"virtualcontrols_1_3_h_cardLKA_csm"};
    	widget_properties::LabelWidget Label_virtualcontrols_1_4_0_1_DomeOff_csm{"virtualcontrols_1_4_0_1_DomeOff_csm"};
    	widget_properties::LabelWidget Label_virtualcontrols_1_4_0_1_DomeOn_csm{"virtualcontrols_1_4_0_1_DomeOn_csm"};
    	std::array<BindingId, 17> mBindingsIds;
    private:
    void Widget_Logic_Visibility_img_close() noexcept;
    private:
    void Widget_Logic_Visibility_virtualcontrols_1_0_4_wakeScreenExit_csm() noexcept;
    private:
    void Widget_Logic_Visibility_img_placeholder_WakeScreen() noexcept;
    private:
    void Widget_Logic_Visibility_grp_placeholder_WakeScreen() noexcept;
    private:
    void Widget_Logic_Visibility_img_control_lka_bzsa_and_holca() noexcept;
    private:
    void Widget_Logic_Visibility_virtualcontrols_1_3_7_u_desc_csm() noexcept;
    protected:
    void onScreenHide() override;
    protected:
    void onScreenShow() override;
};
} // namespace csm
} // namespace gm

#endif // SCREEN_6150_H
