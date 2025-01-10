// Copyright (C) GM Global Technology Operations LLC 2024.
// All Rights Reserved.
// GM Confidential Restricted.
// 
// Designed and Developed by Rampgroup, © 2024 People Tech Group all rights reserved.

#ifndef SCREEN_6009_H
#define SCREEN_6009_H

#include "BindableScreenLogic.h"
#include "WidgetProperties.h"
#include <array>

namespace gm
{
namespace csm
{


class Screen_6009 : public ::ramp::BindableScreenLogic
{
    public:
    Screen_6009(const std::string&  screen_id)  
    : ::ramp::BindableScreenLogic(screen_id)
    {
    }
    
    private:
    	widget_properties::GroupWidget Group_grp_placeholder_WakeScreen{"grp_placeholder_WakeScreen"};
    	widget_properties::ImageWidget Image_img_close{"img_close"};
    	widget_properties::ImageWidget Image_img_pintostart{"img_pintostart"};
    	widget_properties::LabelWidget Label_virtualcontrols_1_0_drive_csm{"virtualcontrols_1_0_drive_csm"};
    	widget_properties::LabelWidget Label_virtualcontrols_1_1_exitBtn_csm{"virtualcontrols_1_1_exitBtn_csm"};
    	widget_properties::LabelWidget Label_virtualcontrols_1_3_f_DrivePark_csm{"virtualcontrols_1_3_f_DrivePark_csm"};
    	std::array<BindingId, 4> mBindingsIds;
    private:
    void Widget_Logic_Visibility_virtualcontrols_1_1_exitBtn_csm() noexcept;
    private:
    void Widget_Logic_Visibility_grp_placeholder_WakeScreen() noexcept;
    private:
    void Widget_Logic_Visibility_img_close() noexcept;
    private:
    void Widget_Logic_Visibility_virtualcontrols_1_3_f_DrivePark_csm() noexcept;
    protected:
    void onScreenHide() override;
    protected:
    void onScreenShow() override;
};
} // namespace csm
} // namespace gm

#endif // SCREEN_6009_H
