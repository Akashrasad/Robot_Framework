// Copyright (C) GM Global Technology Operations LLC 2024.
// All Rights Reserved.
// GM Confidential Restricted.
// 
// Designed and Developed by Rampgroup, © 2024 People Tech Group all rights reserved.

#ifndef SCREEN_6165_H
#define SCREEN_6165_H

#include "BindableScreenLogic.h"
#include "WidgetProperties.h"
#include <array>

namespace gm
{
namespace csm
{


class Screen_6165 : public ::ramp::BindableScreenLogic
{
    public:
    Screen_6165(const std::string&  screen_id)  
    : ::ramp::BindableScreenLogic(screen_id)
    {
    }
    
    private:
    	widget_properties::GroupLabelWidget GroupLabel_dyn_rear_auto_status{"grp_img_rab_btn","dyn_rear_auto_status"};
    	widget_properties::ImageWidget Image_img_controls_rear_breaking_close{"img_controls_rear_breaking_close"};
    	widget_properties::ImageWidget Image_img_rear_auto_breaking{"img_rear_auto_breaking"};
    	widget_properties::LabelWidget Label_virtualcontrols_0_0_detailsUnavailable_csm{"virtualcontrols_0_0_detailsUnavailable_csm"};
    	widget_properties::LabelWidget Label_virtualcontrols_1_7_F_RABTitle_csm{"virtualcontrols_1_7_F_RABTitle_csm"};
    	widget_properties::LabelWidget Label_virtualcontrols_1_7_F_RAB_csm{"virtualcontrols_1_7_F_RAB_csm"};
    	std::array<BindingId, 3> mBindingsIds;
    private:
    void Widget_Logic_Visibility_img_rear_auto_breaking() noexcept;
    private:
    void Widget_Logic_Visibility_virtualcontrols_1_7_F_RAB_csm() noexcept;
    private:
    void Widget_Logic_Visibility_img_controls_rear_breaking_close() noexcept;
    protected:
    void onScreenHide() override;
    protected:
    void onScreenShow() override;
};
} // namespace csm
} // namespace gm

#endif // SCREEN_6165_H
