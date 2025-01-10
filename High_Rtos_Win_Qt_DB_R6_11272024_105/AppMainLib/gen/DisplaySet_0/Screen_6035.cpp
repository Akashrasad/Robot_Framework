#include "Screen_6035.h"

#include "RTOS_InternalData.h"
#include "StringData.h"
#include "WidgetData.h"
#include <cstdlib>

namespace gm
{
namespace csm
{


Screen_6035::Screen_6035():BindableScreenLogic("6035")
{
}

void Screen_6035::Widget_Logic_Visibility_img_close()
{
    const auto var_005 = gm::csm::VIRTUALCONTROLS_ANDROID_NOIVI_STATE.data();
    const auto var_004 = !(var_005);
    
    const auto var_002 = gm::csm::VIRTUALCONTROLS_ANDROID_LAUNCH_VISIBILITY.data();
    const auto var_003 = var_004;
    const auto var_001 = var_002 && var_003;
    
    Image_img_close.Visibility = var_001;
}

void Screen_6035::Widget_Logic_Visibility_apa_3_0_Exit_f_csm()
{
    const auto var_010 = gm::csm::VIRTUALCONTROLS_ANDROID_LAUNCH_VISIBILITY.data();
    const auto var_009 = !(var_010);
    
    const auto var_012 = gm::csm::VIRTUALCONTROLS_ANDROID_NOIVI_STATE.data();
    const auto var_011 = !(var_012);
    
    const auto var_007 = var_009;
    const auto var_008 = var_011;
    const auto var_006 = var_007 && var_008;
    
    Label_apa_3_0_Exit_f_csm.Visibility = var_006;
}

void Screen_6035::Widget_Logic_Visibility_img_placeholder_WakeScreen()
{
    const auto var_017 = gm::csm::VIRTUALCONTROLS_ANDROID_LAUNCH_VISIBILITY.data();
    const auto var_016 = !(var_017);
    
    const auto var_019 = gm::csm::VIRTUALCONTROLS_ANDROID_NOIVI_STATE.data();
    const auto var_018 = !(var_019);
    
    const auto var_014 = var_016;
    const auto var_015 = var_018;
    const auto var_013 = var_014 && var_015;
    
    Image_img_placeholder_WakeScreen.Visibility = var_013;
}

void Screen_6035::Label_virtualcontrols_1_5_6_OptionsTitle_csm_bindings()
{
    std::string text = Label_virtualcontrols_1_5_6_OptionsTitle_csm.Text.getLanguageText();

    FindReplaceString(text,"%1$s",ramp::to_string(gm::csm::Data_VIRTUAL_CONTROLS_OPTIONS_NAME));
    Label_virtualcontrols_1_5_6_OptionsTitle_csm = text.c_str();
}

void Screen_6035::onScreenHide()
{
}

void Screen_6035::onScreenShow()
{
    addDependency(this, &Screen_6035::Label_virtualcontrols_1_5_6_OptionsTitle_csm_bindings,gm::csm::Data_VIRTUAL_CONTROLS_OPTIONS_NAME);
    addDependency(this, &Screen_6035::Widget_Logic_Visibility_img_close, gm::csm::VIRTUALCONTROLS_ANDROID_LAUNCH_VISIBILITY);
    addDependency(this, &Screen_6035::Widget_Logic_Visibility_img_close, gm::csm::VIRTUALCONTROLS_ANDROID_NOIVI_STATE);
    addDependency(this, &Screen_6035::Widget_Logic_Visibility_apa_3_0_Exit_f_csm, gm::csm::VIRTUALCONTROLS_ANDROID_LAUNCH_VISIBILITY);
    addDependency(this, &Screen_6035::Widget_Logic_Visibility_apa_3_0_Exit_f_csm, gm::csm::VIRTUALCONTROLS_ANDROID_NOIVI_STATE);
    addDependency(this, &Screen_6035::Widget_Logic_Visibility_img_placeholder_WakeScreen, gm::csm::VIRTUALCONTROLS_ANDROID_LAUNCH_VISIBILITY);
    addDependency(this, &Screen_6035::Widget_Logic_Visibility_img_placeholder_WakeScreen, gm::csm::VIRTUALCONTROLS_ANDROID_NOIVI_STATE);
}


}//namespace csm
}//namespace gm
