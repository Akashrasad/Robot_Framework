#include "Screen_6029.h"

#include "RTOS_InternalData.h"
#include "StringData.h"
#include "WidgetData.h"
#include <cstdlib>

namespace gm
{
namespace csm
{


void Screen_6029::Widget_Logic_Visibility_virtualcontrols_1_1_exitBtn_csm()
{
    const auto var_005 = gm::csm::VIRTUALCONTROLS_ANDROID_NOIVI_STATE.data();
    const auto var_004 = !(var_005);
    
    const auto var_002 = gm::csm::VIRTUALCONTROLS_ANDROID_LAUNCH_VISIBILITY.data();
    const auto var_003 = var_004;
    const auto var_001 = var_002 && var_003;
    
    GroupLabel_virtualcontrols_1_1_exitBtn_csm.Visibility = var_001;
}

void Screen_6029::Widget_Logic_Visibility_grp_img_close()
{
    const auto var_010 = gm::csm::VIRTUALCONTROLS_ANDROID_NOIVI_STATE.data();
    const auto var_009 = !(var_010);
    
    const auto var_007 = gm::csm::VIRTUALCONTROLS_ANDROID_LAUNCH_VISIBILITY.data();
    const auto var_008 = var_009;
    const auto var_006 = var_007 && var_008;
    
    Group_grp_img_close.Visibility = var_006;
}

void Screen_6029::Widget_Logic_Visibility_img_placeholder_WakeScreen()
{
    const auto var_012 = gm::csm::VIRTUALCONTROLS_ANDROID_LAUNCH_VISIBILITY.data();
    const auto var_011 = !(var_012);
    
    Image_img_placeholder_WakeScreen.Visibility = var_011;
}

void Screen_6029::Widget_Logic_Visibility_virtualcontrols_1_0_4_wakeScreenExit_csm()
{
    const auto var_014 = gm::csm::VIRTUALCONTROLS_ANDROID_LAUNCH_VISIBILITY.data();
    const auto var_013 = !(var_014);
    
    Label_virtualcontrols_1_0_4_wakeScreenExit_csm.Visibility = var_013;
}

void Screen_6029::Widget_Logic_Visibility_img_close()
{
    const auto var_019 = gm::csm::VIRTUALCONTROLS_ANDROID_NOIVI_STATE.data();
    const auto var_018 = !(var_019);
    
    const auto var_016 = gm::csm::VIRTUALCONTROLS_ANDROID_LAUNCH_VISIBILITY.data();
    const auto var_017 = var_018;
    const auto var_015 = var_016 && var_017;
    
    Image_img_close.Visibility = var_015;
}

void Screen_6029::Label_virtualcontrols_1_5_0_1_callBtn_csm_bindings()
{
    std::string text = Label_virtualcontrols_1_5_0_1_callBtn_csm.Text.getLanguageText();

    FindReplaceString(text,"%1$s",ramp::to_string(gm::csm::VIRTUALCONTROLS_UGDO_ASSISTANCE));
    Label_virtualcontrols_1_5_0_1_callBtn_csm = text.c_str();
}

void Screen_6029::onScreenHide()
{
    Image_img_placeholder_WakeScreen.State.unBind(gm::csm::VIRTUALCONTROLS_WAKESCREEN_ANDROID_BUTTON_STATE, mBindingsIds[1]);
}

void Screen_6029::onScreenShow()
{
    addDependency(this, &Screen_6029::Label_virtualcontrols_1_5_0_1_callBtn_csm_bindings,gm::csm::VIRTUALCONTROLS_UGDO_ASSISTANCE);
    addDependency(this, &Screen_6029::Widget_Logic_Visibility_virtualcontrols_1_1_exitBtn_csm, gm::csm::VIRTUALCONTROLS_ANDROID_LAUNCH_VISIBILITY);
    addDependency(this, &Screen_6029::Widget_Logic_Visibility_virtualcontrols_1_1_exitBtn_csm, gm::csm::VIRTUALCONTROLS_ANDROID_NOIVI_STATE);
    addDependency(this, &Screen_6029::Widget_Logic_Visibility_grp_img_close, gm::csm::VIRTUALCONTROLS_ANDROID_LAUNCH_VISIBILITY);
    addDependency(this, &Screen_6029::Widget_Logic_Visibility_grp_img_close, gm::csm::VIRTUALCONTROLS_ANDROID_NOIVI_STATE);
    addDependency(this, &Screen_6029::Widget_Logic_Visibility_img_placeholder_WakeScreen, gm::csm::VIRTUALCONTROLS_ANDROID_LAUNCH_VISIBILITY);
    mBindingsIds[1] = Image_img_placeholder_WakeScreen.State.bind(gm::csm::VIRTUALCONTROLS_WAKESCREEN_ANDROID_BUTTON_STATE);
    addDependency(this, &Screen_6029::Widget_Logic_Visibility_virtualcontrols_1_0_4_wakeScreenExit_csm, gm::csm::VIRTUALCONTROLS_ANDROID_LAUNCH_VISIBILITY);
    addDependency(this, &Screen_6029::Widget_Logic_Visibility_img_close, gm::csm::VIRTUALCONTROLS_ANDROID_LAUNCH_VISIBILITY);
    addDependency(this, &Screen_6029::Widget_Logic_Visibility_img_close, gm::csm::VIRTUALCONTROLS_ANDROID_NOIVI_STATE);
}


}//namespace csm
}//namespace gm
