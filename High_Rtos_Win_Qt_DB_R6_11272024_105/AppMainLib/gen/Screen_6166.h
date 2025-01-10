// Copyright (C) GM Global Technology Operations LLC 2024.
// All Rights Reserved.
// GM Confidential Restricted.
// 
// Designed and Developed by Rampgroup, © 2024 People Tech Group all rights reserved.

#ifndef SCREEN_6166_H
#define SCREEN_6166_H

#include "BindableScreenLogic.h"
#include "WidgetProperties.h"
#include <array>

namespace gm
{
namespace csm
{


class Screen_6166 : public ::ramp::BindableScreenLogic
{
    public:
    Screen_6166(const std::string&  screen_id)  
    : ::ramp::BindableScreenLogic(screen_id)
    {
    }
    
    private:
    	widget_properties::GroupImageWidget GroupImage_img_pab_btn{"grp_img_passinger_btn","img_pab_btn"};
    	widget_properties::ImageWidget Image_img_pab{"img_pab"};
    	widget_properties::LabelWidget Label_virtualcontrols_0_0_detailsUnavailable_csm{"virtualcontrols_0_0_detailsUnavailable_csm"};
    	widget_properties::LabelWidget Label_virtualcontrols_1_8_3_f_PAB_csm{"virtualcontrols_1_8_3_f_PAB_csm"};
    	std::array<BindingId, 2> mBindingsIds;
    private:
    void Widget_Logic_Visibility_virtualcontrols_1_8_3_f_PAB_csm() noexcept;
    private:
    void Widget_Logic_Visibility_img_pab() noexcept;
    protected:
    void onScreenHide() override;
    protected:
    void onScreenShow() override;
};
} // namespace csm
} // namespace gm

#endif // SCREEN_6166_H
