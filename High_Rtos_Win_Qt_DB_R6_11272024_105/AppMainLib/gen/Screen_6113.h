// Copyright (C) GM Global Technology Operations LLC 2024.
// All Rights Reserved.
// GM Confidential Restricted.
// 
// Designed and Developed by Rampgroup, © 2024 People Tech Group all rights reserved.

#ifndef SCREEN_6113_H
#define SCREEN_6113_H

#include "BindableScreenLogic.h"
#include "StringData.h"
#include "WidgetProperties.h"
#include <array>

namespace gm
{
namespace csm
{


class Screen_6113 : public ::ramp::BindableScreenLogic
{
    public:
    Screen_6113(const std::string&  screen_id)  
    : ::ramp::BindableScreenLogic(screen_id)
    {
    }
    
    private:
    	widget_properties::GroupImageWidget GroupImage_img_keep_on_btn{"grp_keep_on_button","img_keep_on_btn"};
    	widget_properties::GroupLabelWidget GroupLabel_virtualcontrols_1_14_primaryButton_csm{"grp_keep_on_button","virtualcontrols_1_14_primaryButton_csm"};
    	widget_properties::ImageWidget Image_img_btn_back_powerbase{"img_btn_back_powerbase"};
    	widget_properties::ImageWidget Image_img_range_reserve_icon{"img_range_reserve_icon"};
    	widget_properties::ImageWidget Image_img_timer_toggle_btn{"img_timer_toggle_btn"};
    	widget_properties::ImageWidget Image_img_transparent_bg{"img_transparent_bg"};
    	widget_properties::LabelWidget Label_virtualcontrols_1_14_2_header_csm{"virtualcontrols_1_14_2_header_csm"};
    	widget_properties::LabelWidget Label_virtualcontrols_1_14_2_percentMile_csm{"virtualcontrols_1_14_2_percentMile_csm"};
    	widget_properties::LabelWidget Label_virtualcontrols_1_14_body_csm{"virtualcontrols_1_14_body_csm"};
    	widget_properties::LabelWidget Label_virtualcontrols_1_14_header_csm{"virtualcontrols_1_14_header_csm"};
    	widget_properties::LabelWidget Label_virtualcontrols_1_14_hours_csm{"virtualcontrols_1_14_hours_csm"};
    	std::array<BindingId, 12> mBindingsIds;
    private:
    void Widget_Logic_Visibility_img_transparent_bg() noexcept;
    private:
    void Label_virtualcontrols_1_14_hours_csm_bindings() noexcept;
    private:
    void GroupLabel_virtualcontrols_1_14_primaryButton_csm_bindings();
    private:
    void Label_virtualcontrols_1_14_2_percentMile_csm_bindings();
    private:
    void Label_virtualcontrols_1_14_body_csm_bindings();
    protected:
    void onScreenHide() override;
    protected:
    void onScreenShow() override;
};
} // namespace csm
} // namespace gm

#endif // SCREEN_6113_H
