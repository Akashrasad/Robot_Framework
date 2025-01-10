// Copyright (C) GM Global Technology Operations LLC 2024.
// All Rights Reserved.
// GM Confidential Restricted.
// 
// Designed and Developed by Rampgroup, © 2024 People Tech Group all rights reserved.

#ifndef SCREEN_6014_H
#define SCREEN_6014_H

#include "BindableScreenLogic.h"
#include "WidgetProperties.h"
#include <array>

namespace gm
{
namespace csm
{


class Screen_6014 : public ::ramp::BindableScreenLogic
{
    public:
    Screen_6014(const std::string&  screen_id)  
    : ::ramp::BindableScreenLogic(screen_id)
    {
    }
    
    private:
    	widget_properties::ImageWidget Image_img_auto_parking_assist{"img_auto_parking_assist"};
    	widget_properties::ImageWidget Image_img_close{"img_close"};
    	widget_properties::LabelWidget Label_virtualcontrols_0_0_detailsUnavailable_csm{"virtualcontrols_0_0_detailsUnavailable_csm"};
    	widget_properties::LabelWidget Label_virtualcontrols_1_3_2_f_AutoParkAssist_csm{"virtualcontrols_1_3_2_f_AutoParkAssist_csm"};
    	widget_properties::LabelWidget Label_virtualcontrols_1_3_card_apa_csm{"virtualcontrols_1_3_card_apa_csm"};
    	std::array<BindingId, 2> mBindingsIds;
    private:
    void Widget_Logic_Visibility_virtualcontrols_1_3_2_f_AutoParkAssist_csm() noexcept;
    private:
    void Widget_Logic_Visibility_img_close() noexcept;
    private:
    void Widget_Logic_Visibility_img_auto_parking_assist() noexcept;
    protected:
    void onScreenHide() override;
    protected:
    void onScreenShow() override;
};
} // namespace csm
} // namespace gm

#endif // SCREEN_6014_H
