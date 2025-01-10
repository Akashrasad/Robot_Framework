// Copyright (C) GM Global Technology Operations LLC 2024.
// All Rights Reserved.
// GM Confidential Restricted.
// 
// Designed and Developed by Rampgroup, © 2024 People Tech Group all rights reserved.

#ifndef SCREEN_6091_H
#define SCREEN_6091_H

#include "BindableScreenLogic.h"
#include "StringData.h"
#include "WidgetProperties.h"
#include <array>

namespace gm
{
namespace csm
{


class Screen_6091 : public ::ramp::BindableScreenLogic
{
    public:
    Screen_6091(const std::string&  screen_id)  
    : ::ramp::BindableScreenLogic(screen_id)
    {
    }
    
    private:
    	widget_properties::GroupImageWidget GroupImage_img_keypad_btn0{"img_keypad_bg0","img_keypad_btn0"};
    	widget_properties::GroupImageWidget GroupImage_img_keypad_btn1{"img_keypad_bg1","img_keypad_btn1"};
    	widget_properties::GroupImageWidget GroupImage_img_keypad_btn2{"img_keypad_bg2","img_keypad_btn2"};
    	widget_properties::GroupImageWidget GroupImage_img_keypad_btn3{"img_keypad_bg3","img_keypad_btn3"};
    	widget_properties::GroupImageWidget GroupImage_img_keypad_btn4{"img_keypad_bg4","img_keypad_btn4"};
    	widget_properties::GroupImageWidget GroupImage_img_keypad_btn5{"img_keypad_bg5","img_keypad_btn5"};
    	widget_properties::GroupImageWidget GroupImage_img_keypad_btn6{"img_keypad_bg6","img_keypad_btn6"};
    	widget_properties::GroupImageWidget GroupImage_img_keypad_btn7{"img_keypad_bg7","img_keypad_btn7"};
    	widget_properties::GroupImageWidget GroupImage_img_keypad_btn8{"img_keypad_bg8","img_keypad_btn8"};
    	widget_properties::GroupImageWidget GroupImage_img_keypad_btn9{"img_keypad_bg9","img_keypad_btn9"};
    	widget_properties::GroupLabelWidget GroupLabel_settings_keypad_0_csm{"img_keypad_bg0","settings_keypad_0_csm"};
    	widget_properties::GroupLabelWidget GroupLabel_settings_keypad_1_csm{"img_keypad_bg1","settings_keypad_1_csm"};
    	widget_properties::GroupLabelWidget GroupLabel_settings_keypad_2_csm{"img_keypad_bg2","settings_keypad_2_csm"};
    	widget_properties::GroupLabelWidget GroupLabel_settings_keypad_3_csm{"img_keypad_bg3","settings_keypad_3_csm"};
    	widget_properties::GroupLabelWidget GroupLabel_settings_keypad_4_csm{"img_keypad_bg4","settings_keypad_4_csm"};
    	widget_properties::GroupLabelWidget GroupLabel_settings_keypad_5_csm{"img_keypad_bg5","settings_keypad_5_csm"};
    	widget_properties::GroupLabelWidget GroupLabel_settings_keypad_6_csm{"img_keypad_bg6","settings_keypad_6_csm"};
    	widget_properties::GroupLabelWidget GroupLabel_settings_keypad_7_csm{"img_keypad_bg7","settings_keypad_7_csm"};
    	widget_properties::GroupLabelWidget GroupLabel_settings_keypad_8_csm{"img_keypad_bg8","settings_keypad_8_csm"};
    	widget_properties::GroupLabelWidget GroupLabel_settings_keypad_9_csm{"img_keypad_bg9","settings_keypad_9_csm"};
    	widget_properties::ImageWidget Image_img_error_btn1{"img_error_btn1"};
    	widget_properties::ImageWidget Image_img_error_btn2{"img_error_btn2"};
    	widget_properties::ImageWidget Image_img_error_btn3{"img_error_btn3"};
    	widget_properties::ImageWidget Image_img_error_btn4{"img_error_btn4"};
    	widget_properties::ImageWidget Image_img_error_btn5{"img_error_btn5"};
    	widget_properties::ImageWidget Image_img_error_btn6{"img_error_btn6"};
    	widget_properties::ImageWidget Image_img_keypad_delete_btn{"img_keypad_delete_btn"};
    	widget_properties::LabelWidget Label_choreography_6_1F_EnterPasscode_csm{"choreography_6_1F_EnterPasscode_csm"};
    	widget_properties::LabelWidget Label_choreography_9_1F_ForgotPINNote_csm{"choreography_9_1F_ForgotPINNote_csm"};
    	widget_properties::LabelWidget Label_choreography_9_1F_IncorrectPassCode_csm{"choreography_9_1F_IncorrectPassCode_csm"};
    	widget_properties::LabelWidget Label_choreography_9_2F_TooManyAttempts_csm{"choreography_9_2F_TooManyAttempts_csm"};
    	widget_properties::LabelWidget Label_choreography_9_5F_TimerExpired_csm{"choreography_9_5F_TimerExpired_csm"};
    	std::array<BindingId, 39> mBindingsIds;
    private:
    void Label_choreography_9_1F_ForgotPINNote_csm_bindings();
    private:
    void Label_choreography_9_1F_IncorrectPassCode_csm_bindings();
    private:
    void Label_choreography_9_2F_TooManyAttempts_csm_bindings();
    private:
    void Label_choreography_9_5F_TimerExpired_csm_bindings();
    protected:
    void onScreenHide() override;
    protected:
    void onScreenShow() override;
};
} // namespace csm
} // namespace gm

#endif // SCREEN_6091_H
