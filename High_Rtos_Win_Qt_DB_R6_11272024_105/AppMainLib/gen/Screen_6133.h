// Copyright (C) GM Global Technology Operations LLC 2024.
// All Rights Reserved.
// GM Confidential Restricted.
// 
// Designed and Developed by Rampgroup, © 2024 People Tech Group all rights reserved.

#ifndef SCREEN_6133_H
#define SCREEN_6133_H

#include "BindableScreenLogic.h"
#include "WidgetProperties.h"
#include <array>

namespace gm
{
namespace csm
{


class Screen_6133 : public ::ramp::BindableScreenLogic
{
    public:
    Screen_6133(const std::string&  screen_id)  
    : ::ramp::BindableScreenLogic(screen_id)
    {
    }
    
    private:
    	widget_properties::LabelWidget Label_dyn_virtualcontrols_1_8_v_aux1{"dyn_virtualcontrols_1_8_v_aux1"};
    	widget_properties::LabelWidget Label_dyn_virtualcontrols_1_8_v_aux2{"dyn_virtualcontrols_1_8_v_aux2"};
    	widget_properties::LabelWidget Label_dyn_virtualcontrols_1_8_v_aux3{"dyn_virtualcontrols_1_8_v_aux3"};
    	widget_properties::LabelWidget Label_dyn_virtualcontrols_1_8_v_aux4{"dyn_virtualcontrols_1_8_v_aux4"};
    	widget_properties::LabelWidget Label_dyn_virtualcontrols_1_8_v_aux5{"dyn_virtualcontrols_1_8_v_aux5"};
    	widget_properties::LabelWidget Label_dyn_virtualcontrols_1_8_v_aux6{"dyn_virtualcontrols_1_8_v_aux6"};
    	std::array<BindingId, 6> mBindingsIds;
    protected:
    void onScreenHide() override;
    protected:
    void onScreenShow() override;
};
} // namespace csm
} // namespace gm

#endif // SCREEN_6133_H
