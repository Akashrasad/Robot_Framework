// Copyright (C) GM Global Technology Operations LLC 2024.
// All Rights Reserved.
// GM Confidential Restricted.
// 
// Designed and Developed by Rampgroup, © 2024 People Tech Group all rights reserved.

#ifndef SCREEN_6116_H
#define SCREEN_6116_H

#include "BindableScreenLogic.h"
#include "StringData.h"
#include "WidgetProperties.h"
#include <array>

namespace gm
{
namespace csm
{


class Screen_6116 : public ::ramp::BindableScreenLogic
{
    public:
    Screen_6116(const std::string&  screen_id)  
    : ::ramp::BindableScreenLogic(screen_id)
    {
    }
    
    private:
    	widget_properties::LabelWidget Label_dyn_lbl_virtualcontrols_1_14_5_body_csm{"dyn_lbl_virtualcontrols_1_14_5_body_csm"};
    	widget_properties::LabelWidget Label_virtualcontrols_1_14_5_header_csm{"virtualcontrols_1_14_5_header_csm"};
    	widget_properties::LabelWidget Label_virtualcontrols_1_14_5_powerUsedNumber_csm{"virtualcontrols_1_14_5_powerUsedNumber_csm"};
    	widget_properties::LabelWidget Label_virtualcontrols_1_14_5_rangeUsedNumber_csm{"virtualcontrols_1_14_5_rangeUsedNumber_csm"};
    	widget_properties::LabelWidget Label_virtualcontrols_1_14_5_sessionTime_csm{"virtualcontrols_1_14_5_sessionTime_csm"};
    	std::array<BindingId, 6> mBindingsIds;
    private:
    void Label_virtualcontrols_1_14_5_header_csm_bindings();
    private:
    void Label_virtualcontrols_1_14_5_powerUsedNumber_csm_bindings();
    private:
    void Label_virtualcontrols_1_14_5_rangeUsedNumber_csm_bindings();
    private:
    void Label_virtualcontrols_1_14_5_sessionTime_csm_bindings();
    protected:
    void onScreenHide() override;
    protected:
    void onScreenShow() override;
};
} // namespace csm
} // namespace gm

#endif // SCREEN_6116_H
