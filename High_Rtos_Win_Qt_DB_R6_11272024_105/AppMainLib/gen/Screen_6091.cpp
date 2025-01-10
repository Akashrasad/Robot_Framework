// Copyright (C) GM Global Technology Operations LLC 2024.
// All Rights Reserved.
// GM Confidential Restricted.
// 
// Designed and Developed by Rampgroup, © 2024 People Tech Group all rights reserved.

#include "Screen_6091.h"

#include "LangTable.h"
#include "RTOS_CustomDataPool.h"
#include "RTOS_InternalData.h"
#include <cstdlib>

namespace gm
{
namespace csm
{


void Screen_6091::Label_choreography_9_1F_ForgotPINNote_csm_bindings()
{
    std::string text = Label_choreography_9_1F_ForgotPINNote_csm.mText.getLanguageText();

    ramp::FindReplaceString(text,"%1$s",ramp::to_string(gm::csm::DATA_REMOTE_PARK_DYNAMIC_LABEL));
    Label_choreography_9_1F_ForgotPINNote_csm = text.c_str();
}

void Screen_6091::Label_choreography_9_1F_IncorrectPassCode_csm_bindings()
{
    std::string str_0 = "%1$s";
    auto ret_replace_0 = str_0.replace(0U, str_0.size(), ramp::to_string(gm::csm::PINTOSTART_REMAINING_ATTEMPTS_SIGNAL));
	ramp::Unused(ret_replace_0);

    std::string text = gen::PluralsText("choreography_9_1F_IncorrectPassCode_csm", gm::csm::Data_PINTOSTART_PLURAL_TEXT.data());
    ramp::FindReplaceString(text,"%1$s", str_0);
    Label_choreography_9_1F_IncorrectPassCode_csm = text.c_str();
}

void Screen_6091::Label_choreography_9_2F_TooManyAttempts_csm_bindings()
{
    std::string str_0 = "%1$s";
    auto ret_replace_0 = str_0.replace(0U, str_0.size(), ramp::to_string(gm::csm::PINTOSTART_REMAINING_SCREEN_SPECIFIC_TIME_SIGNAL));
	ramp::Unused(ret_replace_0);

    std::string text = gen::PluralsText("choreography_9_2F_TooManyAttempts_csm", gm::csm::Data_PINTOSTART_PLURAL_TEXT.data());
    ramp::FindReplaceString(text,"%1$s", str_0);
    Label_choreography_9_2F_TooManyAttempts_csm = text.c_str();
}

void Screen_6091::Label_choreography_9_5F_TimerExpired_csm_bindings()
{
    std::string str_0 = "%1$s";
    auto ret_replace_0 = str_0.replace(0U, str_0.size(), ramp::to_string(gm::csm::PINTOSTART_VALID_PIN_MAX_TIME_SIGNAL));
	ramp::Unused(ret_replace_0);

    std::string text = gen::PluralsText("choreography_9_5F_TimerExpired_csm", gm::csm::Data_PINTOSTART_PLURAL_TEXT.data());
    ramp::FindReplaceString(text,"%1$s", str_0);
    Label_choreography_9_5F_TimerExpired_csm = text.c_str();
}

void Screen_6091::onScreenHide()
{
    Label_choreography_9_2F_TooManyAttempts_csm.mVisibility.unBind(gm::csm::Data_TOOMANY_ATTEMPTS_VISIBILITY, mBindingsIds[0U]);
    GroupLabel_settings_keypad_4_csm.mState.unBind(gm::csm::Data_PINTOSTART_KEY4, mBindingsIds[3U]);
    Label_choreography_9_1F_ForgotPINNote_csm.mVisibility.unBind(gm::csm::Data_PINTOSTART_BRAND_TEXT_VISIBILITY, mBindingsIds[4U]);
    GroupImage_img_keypad_btn5.mState.unBind(gm::csm::Data_PINTOSTART_KEY5, mBindingsIds[6U]);
    Image_img_error_btn5.mState.unBind(gm::csm::Data_PINTOSTART_PIN5, mBindingsIds[7U]);
    Image_img_keypad_delete_btn.mState.unBind(gm::csm::Data_PINTOSTART_KEY_DELETE, mBindingsIds[8U]);
    Image_img_error_btn1.mState.unBind(gm::csm::Data_PINTOSTART_PIN1, mBindingsIds[9U]);
    GroupLabel_settings_keypad_1_csm.mState.unBind(gm::csm::Data_PINTOSTART_KEY1, mBindingsIds[10U]);
    GroupImage_img_keypad_btn4.mState.unBind(gm::csm::Data_PINTOSTART_KEY4, mBindingsIds[11U]);
    GroupImage_img_keypad_btn3.mState.unBind(gm::csm::Data_PINTOSTART_KEY3, mBindingsIds[12U]);
    GroupLabel_settings_keypad_3_csm.mState.unBind(gm::csm::Data_PINTOSTART_KEY3, mBindingsIds[13U]);
    GroupImage_img_keypad_btn1.mState.unBind(gm::csm::Data_PINTOSTART_KEY1, mBindingsIds[14U]);
    GroupImage_img_keypad_btn9.mState.unBind(gm::csm::Data_PINTOSTART_KEY9, mBindingsIds[15U]);
    Label_choreography_9_5F_TimerExpired_csm.mVisibility.unBind(gm::csm::Data_TIMER_EXPIRED_VISIBILITY, mBindingsIds[16U]);
    GroupLabel_settings_keypad_0_csm.mState.unBind(gm::csm::Data_PINTOSTART_KEY0, mBindingsIds[19U]);
    GroupLabel_settings_keypad_2_csm.mState.unBind(gm::csm::Data_PINTOSTART_KEY2, mBindingsIds[20U]);
    GroupImage_img_keypad_btn8.mState.unBind(gm::csm::Data_PINTOSTART_KEY8, mBindingsIds[21U]);
    GroupImage_img_keypad_btn6.mState.unBind(gm::csm::Data_PINTOSTART_KEY6, mBindingsIds[22U]);
    GroupImage_img_keypad_btn2.mState.unBind(gm::csm::Data_PINTOSTART_KEY2, mBindingsIds[23U]);
    GroupLabel_settings_keypad_7_csm.mState.unBind(gm::csm::Data_PINTOSTART_KEY7, mBindingsIds[24U]);
    GroupLabel_settings_keypad_9_csm.mState.unBind(gm::csm::Data_PINTOSTART_KEY9, mBindingsIds[25U]);
    Image_img_error_btn6.mState.unBind(gm::csm::Data_PINTOSTART_PIN6, mBindingsIds[26U]);
    Image_img_error_btn2.mState.unBind(gm::csm::Data_PINTOSTART_PIN2, mBindingsIds[27U]);
    GroupLabel_settings_keypad_8_csm.mState.unBind(gm::csm::Data_PINTOSTART_KEY8, mBindingsIds[28U]);
    GroupImage_img_keypad_btn0.mState.unBind(gm::csm::Data_PINTOSTART_KEY0, mBindingsIds[29U]);
    Image_img_error_btn3.mState.unBind(gm::csm::Data_PINTOSTART_PIN3, mBindingsIds[30U]);
    GroupImage_img_keypad_btn7.mState.unBind(gm::csm::Data_PINTOSTART_KEY7, mBindingsIds[31U]);
    Label_choreography_6_1F_EnterPasscode_csm.mState.unBind(gm::csm::Data_PINTOSTART_ENTER_PASSCODE_TEXT, mBindingsIds[32U]);
    Label_choreography_9_1F_IncorrectPassCode_csm.mVisibility.unBind(gm::csm::Data_INCORRECT_PASSCODE_VISIBILITY, mBindingsIds[33U]);
    Image_img_error_btn4.mState.unBind(gm::csm::Data_PINTOSTART_PIN4, mBindingsIds[36U]);
    GroupLabel_settings_keypad_5_csm.mState.unBind(gm::csm::Data_PINTOSTART_KEY5, mBindingsIds[37U]);
    GroupLabel_settings_keypad_6_csm.mState.unBind(gm::csm::Data_PINTOSTART_KEY6, mBindingsIds[38U]);
}

void Screen_6091::onScreenShow()
{
    mBindingsIds[0U] = Label_choreography_9_2F_TooManyAttempts_csm.mVisibility.bind(gm::csm::Data_TOOMANY_ATTEMPTS_VISIBILITY);
    addDependency(this, &Screen_6091::Label_choreography_9_2F_TooManyAttempts_csm_bindings,gm::csm::PINTOSTART_REMAINING_SCREEN_SPECIFIC_TIME_SIGNAL , gm::csm::Data_PINTOSTART_PLURAL_TEXT);
    mBindingsIds[3U] = GroupLabel_settings_keypad_4_csm.mState.bind(gm::csm::Data_PINTOSTART_KEY4);
    mBindingsIds[4U] = Label_choreography_9_1F_ForgotPINNote_csm.mVisibility.bind(gm::csm::Data_PINTOSTART_BRAND_TEXT_VISIBILITY);
    addDependency(this, &Screen_6091::Label_choreography_9_1F_ForgotPINNote_csm_bindings,gm::csm::DATA_REMOTE_PARK_DYNAMIC_LABEL);
    mBindingsIds[6U] = GroupImage_img_keypad_btn5.mState.bind(gm::csm::Data_PINTOSTART_KEY5);
    mBindingsIds[7U] = Image_img_error_btn5.mState.bind(gm::csm::Data_PINTOSTART_PIN5);
    mBindingsIds[8U] = Image_img_keypad_delete_btn.mState.bind(gm::csm::Data_PINTOSTART_KEY_DELETE);
    mBindingsIds[9U] = Image_img_error_btn1.mState.bind(gm::csm::Data_PINTOSTART_PIN1);
    mBindingsIds[10U] = GroupLabel_settings_keypad_1_csm.mState.bind(gm::csm::Data_PINTOSTART_KEY1);
    mBindingsIds[11U] = GroupImage_img_keypad_btn4.mState.bind(gm::csm::Data_PINTOSTART_KEY4);
    mBindingsIds[12U] = GroupImage_img_keypad_btn3.mState.bind(gm::csm::Data_PINTOSTART_KEY3);
    mBindingsIds[13U] = GroupLabel_settings_keypad_3_csm.mState.bind(gm::csm::Data_PINTOSTART_KEY3);
    mBindingsIds[14U] = GroupImage_img_keypad_btn1.mState.bind(gm::csm::Data_PINTOSTART_KEY1);
    mBindingsIds[15U] = GroupImage_img_keypad_btn9.mState.bind(gm::csm::Data_PINTOSTART_KEY9);
    mBindingsIds[16U] = Label_choreography_9_5F_TimerExpired_csm.mVisibility.bind(gm::csm::Data_TIMER_EXPIRED_VISIBILITY);
    addDependency(this, &Screen_6091::Label_choreography_9_5F_TimerExpired_csm_bindings,gm::csm::PINTOSTART_VALID_PIN_MAX_TIME_SIGNAL , gm::csm::Data_PINTOSTART_PLURAL_TEXT);
    mBindingsIds[19U] = GroupLabel_settings_keypad_0_csm.mState.bind(gm::csm::Data_PINTOSTART_KEY0);
    mBindingsIds[20U] = GroupLabel_settings_keypad_2_csm.mState.bind(gm::csm::Data_PINTOSTART_KEY2);
    mBindingsIds[21U] = GroupImage_img_keypad_btn8.mState.bind(gm::csm::Data_PINTOSTART_KEY8);
    mBindingsIds[22U] = GroupImage_img_keypad_btn6.mState.bind(gm::csm::Data_PINTOSTART_KEY6);
    mBindingsIds[23U] = GroupImage_img_keypad_btn2.mState.bind(gm::csm::Data_PINTOSTART_KEY2);
    mBindingsIds[24U] = GroupLabel_settings_keypad_7_csm.mState.bind(gm::csm::Data_PINTOSTART_KEY7);
    mBindingsIds[25U] = GroupLabel_settings_keypad_9_csm.mState.bind(gm::csm::Data_PINTOSTART_KEY9);
    mBindingsIds[26U] = Image_img_error_btn6.mState.bind(gm::csm::Data_PINTOSTART_PIN6);
    mBindingsIds[27U] = Image_img_error_btn2.mState.bind(gm::csm::Data_PINTOSTART_PIN2);
    mBindingsIds[28U] = GroupLabel_settings_keypad_8_csm.mState.bind(gm::csm::Data_PINTOSTART_KEY8);
    mBindingsIds[29U] = GroupImage_img_keypad_btn0.mState.bind(gm::csm::Data_PINTOSTART_KEY0);
    mBindingsIds[30U] = Image_img_error_btn3.mState.bind(gm::csm::Data_PINTOSTART_PIN3);
    mBindingsIds[31U] = GroupImage_img_keypad_btn7.mState.bind(gm::csm::Data_PINTOSTART_KEY7);
    mBindingsIds[32U] = Label_choreography_6_1F_EnterPasscode_csm.mState.bind(gm::csm::Data_PINTOSTART_ENTER_PASSCODE_TEXT);
    mBindingsIds[33U] = Label_choreography_9_1F_IncorrectPassCode_csm.mVisibility.bind(gm::csm::Data_INCORRECT_PASSCODE_VISIBILITY);
    addDependency(this, &Screen_6091::Label_choreography_9_1F_IncorrectPassCode_csm_bindings,gm::csm::PINTOSTART_REMAINING_ATTEMPTS_SIGNAL , gm::csm::Data_PINTOSTART_PLURAL_TEXT);
    mBindingsIds[36U] = Image_img_error_btn4.mState.bind(gm::csm::Data_PINTOSTART_PIN4);
    mBindingsIds[37U] = GroupLabel_settings_keypad_5_csm.mState.bind(gm::csm::Data_PINTOSTART_KEY5);
    mBindingsIds[38U] = GroupLabel_settings_keypad_6_csm.mState.bind(gm::csm::Data_PINTOSTART_KEY6);
}


} // namespace csm
} // namespace gm
