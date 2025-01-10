#include "Screen_6091.h"

#include "RTOS_CustomDataPool.h"
#include "RTOS_InternalData.h"
#include "StringData.h"
#include "WidgetData.h"
#include <cstdlib>

namespace gm
{
namespace csm
{


void Screen_6091::Label_virtualcontrols_1_0_TimerExpired_csm_bindings()
{
    std::string text = Label_virtualcontrols_1_0_TimerExpired_csm.Text.getLanguageText();

    FindReplaceString(text,"%1$s",ramp::to_string(gm::csm::PINTOSTART_VALID_PIN_MAX_TIME_SIGNAL));
    Label_virtualcontrols_1_0_TimerExpired_csm = text.c_str();
}

void Screen_6091::Label_virtualcontrols_1_1_IncorrectPasscode_csm_bindings()
{
    std::string text = Label_virtualcontrols_1_1_IncorrectPasscode_csm.Text.getLanguageText();

    FindReplaceString(text,"%1$s",ramp::to_string(gm::csm::PINTOSTART_REMAINING_ATTEMPTS_SIGNAL));
    Label_virtualcontrols_1_1_IncorrectPasscode_csm = text.c_str();
}

void Screen_6091::Label_virtualcontrols_1_2_TooManyAttempts_csm_bindings()
{
    std::string text = Label_virtualcontrols_1_2_TooManyAttempts_csm.Text.getLanguageText();

    FindReplaceString(text,"%1$s",ramp::to_string(gm::csm::PINTOSTART_REMAINING_SCREEN_SPECIFIC_TIME_SIGNAL));
    Label_virtualcontrols_1_2_TooManyAttempts_csm = text.c_str();
}

void Screen_6091::onScreenHide()
{
    Label_virtualcontrols_1_0_TimerExpired_csm.Visibility.unBind(gm::csm::Data_TIMER_EXPIRED_VISIBILITY, mBindingsIds[0]);
    GroupLabel_settings_keypad_4_csm.State.unBind(gm::csm::Data_PINTOSTART_KEY4, mBindingsIds[2]);
    Label_virtualcontrols_1_2_TooManyAttempts_csm.Visibility.unBind(gm::csm::Data_TOOMANY_ATTEMPTS_VISIBILITY, mBindingsIds[3]);
    Image_img_Error_btn1.State.unBind(gm::csm::Data_PINTOSTART_PIN1, mBindingsIds[5]);
    Label_virtualcontrols_1_0_EnterPassCode_csm.State.unBind(gm::csm::Data_PINTOSTART_ENTER_PASSCODE_TEXT, mBindingsIds[6]);
    Image_img_keypad_delete_btn.State.unBind(gm::csm::Data_PINTOSTART_KEY_DELETE, mBindingsIds[7]);
    GroupLabel_settings_keypad_1_csm.State.unBind(gm::csm::Data_PINTOSTART_KEY1, mBindingsIds[8]);
    GroupLabel_settings_keypad_3_csm.State.unBind(gm::csm::Data_PINTOSTART_KEY3, mBindingsIds[9]);
    GroupLabel_settings_keypad_0_csm.State.unBind(gm::csm::Data_PINTOSTART_KEY0, mBindingsIds[10]);
    GroupLabel_settings_keypad_2_csm.State.unBind(gm::csm::Data_PINTOSTART_KEY2, mBindingsIds[11]);
    Image_img_Error_btn2.State.unBind(gm::csm::Data_PINTOSTART_PIN2, mBindingsIds[12]);
    GroupLabel_settings_keypad_7_csm.State.unBind(gm::csm::Data_PINTOSTART_KEY7, mBindingsIds[13]);
    GroupLabel_settings_keypad_9_csm.State.unBind(gm::csm::Data_PINTOSTART_KEY9, mBindingsIds[14]);
    Image_img_Error_btn5.Visibility.unBind(gm::csm::Data_PINTOSTART_PIN5_VISIBILITY, mBindingsIds[15]);
    Image_img_Error_btn5.State.unBind(gm::csm::Data_PINTOSTART_PIN5, mBindingsIds[16]);
    GroupLabel_settings_keypad_8_csm.State.unBind(gm::csm::Data_PINTOSTART_KEY8, mBindingsIds[17]);
    Image_img_Error_btn6.Visibility.unBind(gm::csm::Data_PINTOSTART_PIN6_VISIBILITY, mBindingsIds[18]);
    Image_img_Error_btn6.State.unBind(gm::csm::Data_PINTOSTART_PIN6, mBindingsIds[19]);
    Image_img_Error_btn4.State.unBind(gm::csm::Data_PINTOSTART_PIN4, mBindingsIds[20]);
    Image_img_Error_btn3.State.unBind(gm::csm::Data_PINTOSTART_PIN3, mBindingsIds[21]);
    Label_virtualcontrols_1_1_IncorrectPasscode_csm.Visibility.unBind(gm::csm::Data_INCORRECT_PASSCODE_VISIBILITY, mBindingsIds[22]);
    GroupLabel_settings_keypad_5_csm.State.unBind(gm::csm::Data_PINTOSTART_KEY5, mBindingsIds[24]);
    GroupLabel_settings_keypad_6_csm.State.unBind(gm::csm::Data_PINTOSTART_KEY6, mBindingsIds[25]);
}

void Screen_6091::onScreenShow()
{
    mBindingsIds[0] = Label_virtualcontrols_1_0_TimerExpired_csm.Visibility.bind(gm::csm::Data_TIMER_EXPIRED_VISIBILITY);
    addDependency(this, &Screen_6091::Label_virtualcontrols_1_0_TimerExpired_csm_bindings,gm::csm::PINTOSTART_VALID_PIN_MAX_TIME_SIGNAL);
    mBindingsIds[2] = GroupLabel_settings_keypad_4_csm.State.bind(gm::csm::Data_PINTOSTART_KEY4);
    mBindingsIds[3] = Label_virtualcontrols_1_2_TooManyAttempts_csm.Visibility.bind(gm::csm::Data_TOOMANY_ATTEMPTS_VISIBILITY);
    addDependency(this, &Screen_6091::Label_virtualcontrols_1_2_TooManyAttempts_csm_bindings,gm::csm::PINTOSTART_REMAINING_SCREEN_SPECIFIC_TIME_SIGNAL);
    mBindingsIds[5] = Image_img_Error_btn1.State.bind(gm::csm::Data_PINTOSTART_PIN1);
    mBindingsIds[6] = Label_virtualcontrols_1_0_EnterPassCode_csm.State.bind(gm::csm::Data_PINTOSTART_ENTER_PASSCODE_TEXT);
    mBindingsIds[7] = Image_img_keypad_delete_btn.State.bind(gm::csm::Data_PINTOSTART_KEY_DELETE);
    mBindingsIds[8] = GroupLabel_settings_keypad_1_csm.State.bind(gm::csm::Data_PINTOSTART_KEY1);
    mBindingsIds[9] = GroupLabel_settings_keypad_3_csm.State.bind(gm::csm::Data_PINTOSTART_KEY3);
    mBindingsIds[10] = GroupLabel_settings_keypad_0_csm.State.bind(gm::csm::Data_PINTOSTART_KEY0);
    mBindingsIds[11] = GroupLabel_settings_keypad_2_csm.State.bind(gm::csm::Data_PINTOSTART_KEY2);
    mBindingsIds[12] = Image_img_Error_btn2.State.bind(gm::csm::Data_PINTOSTART_PIN2);
    mBindingsIds[13] = GroupLabel_settings_keypad_7_csm.State.bind(gm::csm::Data_PINTOSTART_KEY7);
    mBindingsIds[14] = GroupLabel_settings_keypad_9_csm.State.bind(gm::csm::Data_PINTOSTART_KEY9);
    mBindingsIds[15] = Image_img_Error_btn5.Visibility.bind(gm::csm::Data_PINTOSTART_PIN5_VISIBILITY);
    mBindingsIds[16] = Image_img_Error_btn5.State.bind(gm::csm::Data_PINTOSTART_PIN5);
    mBindingsIds[17] = GroupLabel_settings_keypad_8_csm.State.bind(gm::csm::Data_PINTOSTART_KEY8);
    mBindingsIds[18] = Image_img_Error_btn6.Visibility.bind(gm::csm::Data_PINTOSTART_PIN6_VISIBILITY);
    mBindingsIds[19] = Image_img_Error_btn6.State.bind(gm::csm::Data_PINTOSTART_PIN6);
    mBindingsIds[20] = Image_img_Error_btn4.State.bind(gm::csm::Data_PINTOSTART_PIN4);
    mBindingsIds[21] = Image_img_Error_btn3.State.bind(gm::csm::Data_PINTOSTART_PIN3);
    mBindingsIds[22] = Label_virtualcontrols_1_1_IncorrectPasscode_csm.Visibility.bind(gm::csm::Data_INCORRECT_PASSCODE_VISIBILITY);
    addDependency(this, &Screen_6091::Label_virtualcontrols_1_1_IncorrectPasscode_csm_bindings,gm::csm::PINTOSTART_REMAINING_ATTEMPTS_SIGNAL);
    mBindingsIds[24] = GroupLabel_settings_keypad_5_csm.State.bind(gm::csm::Data_PINTOSTART_KEY5);
    mBindingsIds[25] = GroupLabel_settings_keypad_6_csm.State.bind(gm::csm::Data_PINTOSTART_KEY6);
}


}//namespace csm
}//namespace gm
