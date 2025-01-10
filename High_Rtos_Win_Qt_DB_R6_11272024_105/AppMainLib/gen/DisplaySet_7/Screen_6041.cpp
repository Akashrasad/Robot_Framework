#include "Screen_6041.h"

#include "RTOS_InternalData.h"
#include "StringData.h"
#include "WidgetData.h"
#include <cstdlib>

namespace gm
{
namespace csm
{


void Screen_6041::Widget_Logic_Visibility_img_placeholder_WakeScreen()
{
    const auto var_005 = gm::csm::VIRTUALCONTROLS_ANDROID_LAUNCH_VISIBILITY.data();
    const auto var_004 = !(var_005);
    
    const auto var_007 = gm::csm::VIRTUALCONTROLS_ANDROID_NOIVI_STATE.data();
    const auto var_006 = !(var_007);
    
    const auto var_002 = var_004;
    const auto var_003 = var_006;
    const auto var_001 = var_002 && var_003;
    
    Image_img_placeholder_WakeScreen.Visibility = var_001;
}

void Screen_6041::Widget_Logic_Visibility_img_close()
{
    const auto var_012 = gm::csm::VIRTUALCONTROLS_ANDROID_NOIVI_STATE.data();
    const auto var_011 = !(var_012);
    
    const auto var_009 = gm::csm::VIRTUALCONTROLS_ANDROID_LAUNCH_VISIBILITY.data();
    const auto var_010 = var_011;
    const auto var_008 = var_009 && var_010;
    
    Image_img_close.Visibility = var_008;
}

void Screen_6041::Label_virtualcontrols_1_5_6_1_OptionCharCount_csm_bindings()
{
    std::string str_0 = "%1$s";
    str_0.replace(0, str_0.size(), ramp::to_string(gm::csm::VIRTUALCONTROLS_OPTIONNAMECHARACTERS));

    Label_virtualcontrols_1_5_6_1_OptionCharCount_csm = text.c_str();
}

void Screen_6041::Label_virtualcontrols_1_5_6_1_OptionNameTitle_csm_bindings()
{
    std::string text = Label_virtualcontrols_1_5_6_1_OptionNameTitle_csm.Text.getLanguageText();

    FindReplaceString(text,"%1$s",ramp::to_string(gm::csm::VIRTUALCONTROLS_REMOTENAME));
    Label_virtualcontrols_1_5_6_1_OptionNameTitle_csm = text.c_str();
}

void Screen_6041::onScreenHide()
{
    Image_img_placeholder_WakeScreen.State.unBind(gm::csm::VIRTUALCONTROLS_WAKESCREEN_ANDROID_BUTTON_STATE, mBindingsIds[0]);
    Label_dyn_lbl_remote_1.Text.unBind(gm::csm::Data_VIRTUAL_CONTROLS_OPTIONS_NAME, mBindingsIds[2]);
}

void Screen_6041::onScreenShow()
{
    addDependency(this, &Screen_6041::Widget_Logic_Visibility_img_placeholder_WakeScreen, gm::csm::VIRTUALCONTROLS_ANDROID_LAUNCH_VISIBILITY);
    addDependency(this, &Screen_6041::Widget_Logic_Visibility_img_placeholder_WakeScreen, gm::csm::VIRTUALCONTROLS_ANDROID_NOIVI_STATE);
    mBindingsIds[0] = Image_img_placeholder_WakeScreen.State.bind(gm::csm::VIRTUALCONTROLS_WAKESCREEN_ANDROID_BUTTON_STATE);
    addDependency(this, &Screen_6041::Label_virtualcontrols_1_5_6_1_OptionCharCount_csm_bindings,gm::csm::VIRTUALCONTROLS_OPTIONNAMECHARACTERS);
    mBindingsIds[2] = Label_dyn_lbl_remote_1.Text.bind(gm::csm::Data_VIRTUAL_CONTROLS_OPTIONS_NAME);
    addDependency(this, &Screen_6041::Widget_Logic_Visibility_img_close, gm::csm::VIRTUALCONTROLS_ANDROID_LAUNCH_VISIBILITY);
    addDependency(this, &Screen_6041::Widget_Logic_Visibility_img_close, gm::csm::VIRTUALCONTROLS_ANDROID_NOIVI_STATE);
    addDependency(this, &Screen_6041::Label_virtualcontrols_1_5_6_1_OptionNameTitle_csm_bindings,gm::csm::VIRTUALCONTROLS_REMOTENAME);
}


}//namespace csm
}//namespace gm
