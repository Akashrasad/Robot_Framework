// Copyright (C) GM Global Technology Operations LLC 2024.
// All Rights Reserved.
// GM Confidential Restricted.
// 
// Designed and Developed by Rampgroup, © 2024 People Tech Group all rights reserved.

#ifndef SCREEN_9005_H
#define SCREEN_9005_H

#include "BindableScreenLogic.h"
#include "WidgetProperties.h"
#include <array>

namespace gm
{
namespace csm
{


class Screen_9005 : public ::ramp::BindableScreenLogic
{
    public:
    Screen_9005(const std::string&  screen_id)  
    : ::ramp::BindableScreenLogic(screen_id)
    {
    }
    
    private:
    	widget_properties::ImageWidget Image_img_fan_auto{"img_fan_auto"};
    	widget_properties::ImageWidget Image_img_modeman_auto{"img_modeman_auto"};
    	widget_properties::ImageWidget Image_img_modeman_fan_auto{"img_modeman_fan_auto"};
    	widget_properties::LabelWidget Label_climate_5_0_AUTObtn_csm{"climate_5_0_AUTObtn_csm"};
    	widget_properties::LabelWidget Label_dyn_lbl_fan_number{"dyn_lbl_fan_number"};
    	std::array<BindingId, 6> mBindingsIds;
    protected:
    void onScreenHide() override;
    protected:
    void onScreenShow() override;
};
} // namespace csm
} // namespace gm

#endif // SCREEN_9005_H
