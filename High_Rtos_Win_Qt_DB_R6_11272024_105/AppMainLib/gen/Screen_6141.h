// Copyright (C) GM Global Technology Operations LLC 2024.
// All Rights Reserved.
// GM Confidential Restricted.
// 
// Designed and Developed by Rampgroup, © 2024 People Tech Group all rights reserved.

#ifndef SCREEN_6141_H
#define SCREEN_6141_H

#include "BindableScreenLogic.h"
#include "WidgetProperties.h"
#include <array>

namespace gm
{
namespace csm
{


class Screen_6141 : public ::ramp::BindableScreenLogic
{
    public:
    Screen_6141(const std::string&  screen_id)  
    : ::ramp::BindableScreenLogic(screen_id)
    {
    }
    
    private:
    	widget_properties::AnimationName AnimationName_SetMaxLimit{"SetMaxLimit"};
    	widget_properties::AnimationName AnimationName_SetMinLimit{"SetMinLimit"};
    	widget_properties::AnimationName AnimationName_audio_progress{"audio_progress"};
    	std::array<BindingId, 3> mBindingsIds;
    protected:
    void onScreenHide() override;
    protected:
    void onScreenShow() override;
};
} // namespace csm
} // namespace gm

#endif // SCREEN_6141_H
