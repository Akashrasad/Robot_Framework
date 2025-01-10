// Copyright (C) GM Global Technology Operations LLC 2024.
// All Rights Reserved.
// GM Confidential Restricted.
// 
// Designed and Developed by Rampgroup, © 2024 People Tech Group all rights reserved.

#ifndef SCREEN_6016_H
#define SCREEN_6016_H

#include "BindableScreenLogic.h"
#include "WidgetProperties.h"
#include <array>

namespace gm
{
namespace csm
{


class Screen_6016 : public ::ramp::BindableScreenLogic
{
    public:
    Screen_6016(const std::string&  screen_id)  
    : ::ramp::BindableScreenLogic(screen_id)
    {
    }
    
    private:
    	widget_properties::GroupLabelWidget GroupLabel_dyn_park_assist_status{"grp_img_park_btn","dyn_park_assist_status"};
    	widget_properties::ImageWidget Image_img_close{"img_close"};
    	widget_properties::ImageWidget Image_img_park_assist{"img_park_assist"};
    	widget_properties::LabelWidget Label_virtualcontrols_0_0_detailsUnavailable_csm{"virtualcontrols_0_0_detailsUnavailable_csm"};
    	widget_properties::LabelWidget Label_virtualcontrols_1_3_card_park_csm{"virtualcontrols_1_3_card_park_csm"};
    	widget_properties::LabelWidget Label_virtualcontrols_1_7_F_ParkAssist_csm{"virtualcontrols_1_7_F_ParkAssist_csm"};
    	std::array<BindingId, 4> mBindingsIds;
    private:
    void Widget_Logic_Visibility_img_park_assist() noexcept;
    private:
    void Widget_Logic_Visibility_virtualcontrols_1_7_F_ParkAssist_csm() noexcept;
    protected:
    void onScreenHide() override;
    protected:
    void onScreenShow() override;
};
} // namespace csm
} // namespace gm

#endif // SCREEN_6016_H
