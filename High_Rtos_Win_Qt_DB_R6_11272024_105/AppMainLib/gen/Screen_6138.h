// Copyright (C) GM Global Technology Operations LLC 2024.
// All Rights Reserved.
// GM Confidential Restricted.
// 
// Designed and Developed by Rampgroup, © 2024 People Tech Group all rights reserved.

#ifndef SCREEN_6138_H
#define SCREEN_6138_H

#include "BindableScreenLogic.h"
#include "WidgetProperties.h"
#include <array>

namespace gm
{
namespace csm
{


class Screen_6138 : public ::ramp::BindableScreenLogic
{
    public:
    Screen_6138(const std::string&  screen_id)  
    : ::ramp::BindableScreenLogic(screen_id)
    {
    }
    
    private:
    	widget_properties::GroupImageWidget GroupImage_img_placeholder_WakeScreen{"grp_placeholder_WakeScreen","img_placeholder_WakeScreen"};
    	widget_properties::GroupLabelWidget GroupLabel_dyn_charge_port_status{"grp_img_launch_btn","dyn_charge_port_status"};
    	widget_properties::GroupLabelWidget GroupLabel_virtualcontrols_1_0_4_wakeScreenExit_csm{"grp_placeholder_WakeScreen_mfc","virtualcontrols_1_0_4_wakeScreenExit_csm"};
    	widget_properties::GroupWidget Group_grp_placeholder_WakeScreen{"grp_placeholder_WakeScreen"};
    	widget_properties::ImageWidget Image_img_charge_port_door_release{"img_charge_port_door_release"};
    	widget_properties::ImageWidget Image_img_close{"img_close"};
    	widget_properties::LabelWidget Label_virtualcontrols_0_0_detailsUnavailable_csm{"virtualcontrols_0_0_detailsUnavailable_csm"};
    	widget_properties::LabelWidget Label_virtualcontrols_1_2_5_1F_ChargePort_csm{"virtualcontrols_1_2_5_1F_ChargePort_csm"};
    	widget_properties::LabelWidget Label_virtualcontrols_1_2_5_F_ChargePortDoorTitle_csm{"virtualcontrols_1_2_5_F_ChargePortDoorTitle_csm"};
    	std::array<BindingId, 4> mBindingsIds;
    private:
    void Widget_Logic_Visibility_img_close() noexcept;
    private:
    void Widget_Logic_Visibility_virtualcontrols_1_0_4_wakeScreenExit_csm() noexcept;
    private:
    void Widget_Logic_Visibility_img_charge_port_door_release() noexcept;
    private:
    void Widget_Logic_Visibility_img_placeholder_WakeScreen() noexcept;
    private:
    void Widget_Logic_Visibility_virtualcontrols_1_2_5_1F_ChargePort_csm() noexcept;
    private:
    void Widget_Logic_Visibility_grp_placeholder_WakeScreen() noexcept;
    protected:
    void onScreenHide() override;
    protected:
    void onScreenShow() override;
};
} // namespace csm
} // namespace gm

#endif // SCREEN_6138_H
