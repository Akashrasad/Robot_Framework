// Copyright (C) GM Global Technology Operations LLC 2024.
// All Rights Reserved.
// GM Confidential Restricted.
// 
// Designed and Developed by Rampgroup, © 2024 People Tech Group all rights reserved.

#ifndef SCREEN_6002_H
#define SCREEN_6002_H

#include "BindableScreenLogic.h"
#include "WidgetProperties.h"
#include <array>

namespace gm
{
namespace csm
{


class Screen_6002 : public ::ramp::BindableScreenLogic
{
    public:
    Screen_6002(const std::string&  screen_id)  
    : ::ramp::BindableScreenLogic(screen_id)
    {
    }
    
    private:
    	widget_properties::GroupImageWidget GroupImage_img_placeholder_WakeScreen{"grp_placeholder_WakeScreen","img_placeholder_WakeScreen"};
    	widget_properties::GroupWidget Group_grp_placeholder_WakeScreen{"grp_placeholder_WakeScreen"};
    	widget_properties::ImageWidget Image_img_close{"img_close"};
    	widget_properties::ImageWidget Image_img_pintostart_icon{"img_pintostart_icon"};
    	widget_properties::ImageWidget Image_img_pintostart_mfc{"img_pintostart_mfc"};
    	widget_properties::LabelWidget Label_virtualcontrols_1_0_ControlsSafety_csm{"virtualcontrols_1_0_ControlsSafety_csm"};
    	std::array<BindingId, 4> mBindingsIds;
    private:
    void Widget_Logic_Visibility_grp_placeholder_WakeScreen() noexcept;
    private:
    void Widget_Logic_Visibility_img_close() noexcept;
    protected:
    void onScreenHide() override;
    protected:
    void onScreenShow() override;
};
} // namespace csm
} // namespace gm

#endif // SCREEN_6002_H
