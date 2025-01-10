// Copyright (C) GM Global Technology Operations LLC 2024.
// All Rights Reserved.
// GM Confidential Restricted.
// 
// Designed and Developed by Rampgroup, © 2024 People Tech Group all rights reserved.

#ifndef SCREEN_6035_H
#define SCREEN_6035_H

#include "BindableScreenLogic.h"
#include "StringData.h"
#include "WidgetProperties.h"
#include <array>

namespace gm
{
namespace csm
{


class Screen_6035 : public ::ramp::BindableScreenLogic
{
    public:
    Screen_6035(const std::string&  screen_id)  
    : ::ramp::BindableScreenLogic(screen_id)
    {
    }
    
    private:
    	widget_properties::GroupImageWidget GroupImage_img_placeholder_WakeScreen{"grp_placeholder_WakeScreen","img_placeholder_WakeScreen"};
    	widget_properties::GroupLabelWidget GroupLabel_virtualcontrols_1_0_4_wakeScreenExit_csm{"grp_placeholder_WakeScreen_mfc","virtualcontrols_1_0_4_wakeScreenExit_csm"};
    	widget_properties::GroupWidget Group_grp_placeholder_WakeScreen{"grp_placeholder_WakeScreen"};
    	widget_properties::ImageWidget Image_btn_list_options{"btn_list_options"};
    	widget_properties::ImageWidget Image_img_close{"img_close"};
    	widget_properties::LabelWidget Label_virtualcontrols_1_5_3_Name_csm{"virtualcontrols_1_5_3_Name_csm"};
    	widget_properties::LabelWidget Label_virtualcontrols_1_5_6_OptionsTitle_csm{"virtualcontrols_1_5_6_OptionsTitle_csm"};
    	std::array<BindingId, 5> mBindingsIds;
    private:
    void Widget_Logic_Visibility_virtualcontrols_1_0_4_wakeScreenExit_csm() noexcept;
    private:
    void Widget_Logic_Visibility_img_placeholder_WakeScreen() noexcept;
    private:
    void Widget_Logic_Visibility_img_close() noexcept;
    private:
    void Widget_Logic_Visibility_grp_placeholder_WakeScreen() noexcept;
    private:
    void Data_VIRTUAL_CONTROLS_OPTIONS_NAME_bindings();
    private:
    void Label_virtualcontrols_1_5_6_OptionsTitle_csm_bindings();
    protected:
    void onScreenHide() override;
    protected:
    void onScreenShow() override;
};
} // namespace csm
} // namespace gm

#endif // SCREEN_6035_H
