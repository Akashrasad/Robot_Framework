// Copyright (C) GM Global Technology Operations LLC 2024.
// All Rights Reserved.
// GM Confidential Restricted.
// 
// Designed and Developed by Rampgroup, © 2024 People Tech Group all rights reserved.

#ifndef SCREEN_6129_H
#define SCREEN_6129_H

#include "BindableScreenLogic.h"
#include "StringData.h"
#include "WidgetProperties.h"
#include <array>

namespace gm
{
namespace csm
{


class Screen_6129 : public ::ramp::BindableScreenLogic
{
    public:
    Screen_6129(const std::string&  screen_id)  
    : ::ramp::BindableScreenLogic(screen_id)
    {
    }
    
    private:
    	widget_properties::LabelWidget Label_virtualcontrols_1_14_4_5_snackbar_csm{"virtualcontrols_1_14_4_5_snackbar_csm"};
    	std::array<BindingId, 1> mBindingsIds;
    private:
    void Label_virtualcontrols_1_14_4_5_snackbar_csm_bindings();
    protected:
    void onScreenHide() override;
    protected:
    void onScreenShow() override;
};
} // namespace csm
} // namespace gm

#endif // SCREEN_6129_H
