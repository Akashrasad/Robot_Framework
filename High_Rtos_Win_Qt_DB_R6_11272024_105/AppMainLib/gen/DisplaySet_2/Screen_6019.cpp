#include "Screen_6019.h"

#include "RTOS_InternalData.h"
#include "WidgetData.h"
#include <cstdlib>

namespace gm
{
namespace csm
{


void Screen_6019::Widget_Logic_Visibility_img_close()
{
    const auto var_005 = gm::csm::VIRTUALCONTROLS_ANDROID_NOIVI_STATE.data();
    const auto var_004 = !(var_005);
    
    const auto var_002 = gm::csm::VIRTUALCONTROLS_ANDROID_LAUNCH_VISIBILITY.data();
    const auto var_003 = var_004;
    const auto var_001 = var_002 && var_003;
    
    Image_img_close.Visibility = var_001;
}

void Screen_6019::Widget_Logic_Visibility_img_control_icn_dome()
{
    const auto var_007 = gm::csm::VIRTUALCONTROLS_CONTROL_PAGE_WHILE_DRIVING_INTERNAL.data();
    const auto var_006 = !(var_007);
    
    Image_img_control_icn_dome.Visibility = var_006;
}

void Screen_6019::Widget_Logic_Visibility_virtualcontrols_1_4_0_1_dome_csm()
{
    const auto var_009 = gm::csm::VIRTUALCONTROLS_CONTROL_PAGE_WHILE_DRIVING_INTERNAL.data();
    const auto var_008 = !(var_009);
    
    Label_virtualcontrols_1_4_0_1_dome_csm.Visibility = var_008;
}

void Screen_6019::Widget_Logic_Visibility_img_placeholder_WakeScreen()
{
    const auto var_011 = gm::csm::VIRTUALCONTROLS_ANDROID_LAUNCH_VISIBILITY.data();
    const auto var_010 = !(var_011);
    
    Image_img_placeholder_WakeScreen.Visibility = var_010;
}

void Screen_6019::Widget_Logic_Visibility_virtualcontrols_1_0_4_wakeScreenExit_csm()
{
    const auto var_016 = gm::csm::VIRTUALCONTROLS_ANDROID_NOIVI_STATE.data();
    const auto var_015 = !(var_016);
    
    const auto var_013 = gm::csm::VIRTUALCONTROLS_ANDROID_LAUNCH_VISIBILITY.data();
    const auto var_014 = var_015;
    const auto var_012 = var_013 && var_014;
    
    Label_virtualcontrols_1_0_4_wakeScreenExit_csm.Visibility = var_012;
}

void Screen_6019::onScreenHide()
{
    Label_virtualcontrols_0_0_detailsUnavailable_csm.Visibility.unBind(gm::csm::VIRTUALCONTROLS_CONTROL_PAGE_WHILE_DRIVING_INTERNAL, mBindingsIds[0]);
    Image_img_auto_divider.Visibility.unBind(gm::csm::VIRTUALCONTROLS_DOME_AUTO_VISIBILITY, mBindingsIds[1]);
    Image_img_radio_button_on.State.unBind(gm::csm::VIRTUALCONTROLS_DOMELIGHT_STATE_INTERNAL, mBindingsIds[2]);
    Label_virtualcontrols_1_4_0_1_DomeOn_csm.State.unBind(gm::csm::VIRTUALCONTROLS_DOMELIGHT_STATE_INTERNAL, mBindingsIds[3]);
    Label_virtualcontrols_1_4_0_1_DomeOff_csm.State.unBind(gm::csm::VIRTUALCONTROLS_DOMELIGHT_STATE_INTERNAL, mBindingsIds[4]);
    Image_img_radio_button_Off.State.unBind(gm::csm::VIRTUALCONTROLS_DOMELIGHT_STATE_INTERNAL, mBindingsIds[5]);
    Image_img_placeholder_WakeScreen.State.unBind(gm::csm::VIRTUALCONTROLS_WAKESCREEN_ANDROID_BUTTON_STATE, mBindingsIds[6]);
    Label_virtualcontrols_1_4_0_1_dome_auto_csm.Visibility.unBind(gm::csm::VIRTUALCONTROLS_DOME_AUTO_VISIBILITY, mBindingsIds[7]);
    Label_virtualcontrols_1_4_0_1_dome_auto_csm.State.unBind(gm::csm::VIRTUALCONTROLS_DOMEDEFEAT_STATE_INTERNAL, mBindingsIds[8]);
    Image_img_check_box_auto.Visibility.unBind(gm::csm::VIRTUALCONTROLS_DOME_AUTO_VISIBILITY, mBindingsIds[9]);
    Image_img_check_box_auto.State.unBind(gm::csm::VIRTUALCONTROLS_DOMEDEFEAT_STATE_INTERNAL, mBindingsIds[10]);
}

void Screen_6019::onScreenShow()
{
    mBindingsIds[0] = Label_virtualcontrols_0_0_detailsUnavailable_csm.Visibility.bind(gm::csm::VIRTUALCONTROLS_CONTROL_PAGE_WHILE_DRIVING_INTERNAL);
    mBindingsIds[1] = Image_img_auto_divider.Visibility.bind(gm::csm::VIRTUALCONTROLS_DOME_AUTO_VISIBILITY);
    mBindingsIds[2] = Image_img_radio_button_on.State.bind(gm::csm::VIRTUALCONTROLS_DOMELIGHT_STATE_INTERNAL);
    mBindingsIds[3] = Label_virtualcontrols_1_4_0_1_DomeOn_csm.State.bind(gm::csm::VIRTUALCONTROLS_DOMELIGHT_STATE_INTERNAL);
    addDependency(this, &Screen_6019::Widget_Logic_Visibility_img_close, gm::csm::VIRTUALCONTROLS_ANDROID_LAUNCH_VISIBILITY);
    addDependency(this, &Screen_6019::Widget_Logic_Visibility_img_close, gm::csm::VIRTUALCONTROLS_ANDROID_NOIVI_STATE);
    mBindingsIds[4] = Label_virtualcontrols_1_4_0_1_DomeOff_csm.State.bind(gm::csm::VIRTUALCONTROLS_DOMELIGHT_STATE_INTERNAL);
    addDependency(this, &Screen_6019::Widget_Logic_Visibility_img_control_icn_dome, gm::csm::VIRTUALCONTROLS_CONTROL_PAGE_WHILE_DRIVING_INTERNAL);
    addDependency(this, &Screen_6019::Widget_Logic_Visibility_virtualcontrols_1_4_0_1_dome_csm, gm::csm::VIRTUALCONTROLS_CONTROL_PAGE_WHILE_DRIVING_INTERNAL);
    mBindingsIds[5] = Image_img_radio_button_Off.State.bind(gm::csm::VIRTUALCONTROLS_DOMELIGHT_STATE_INTERNAL);
    addDependency(this, &Screen_6019::Widget_Logic_Visibility_img_placeholder_WakeScreen, gm::csm::VIRTUALCONTROLS_ANDROID_LAUNCH_VISIBILITY);
    mBindingsIds[6] = Image_img_placeholder_WakeScreen.State.bind(gm::csm::VIRTUALCONTROLS_WAKESCREEN_ANDROID_BUTTON_STATE);
    addDependency(this, &Screen_6019::Widget_Logic_Visibility_virtualcontrols_1_0_4_wakeScreenExit_csm, gm::csm::VIRTUALCONTROLS_ANDROID_LAUNCH_VISIBILITY);
    addDependency(this, &Screen_6019::Widget_Logic_Visibility_virtualcontrols_1_0_4_wakeScreenExit_csm, gm::csm::VIRTUALCONTROLS_ANDROID_NOIVI_STATE);
    mBindingsIds[7] = Label_virtualcontrols_1_4_0_1_dome_auto_csm.Visibility.bind(gm::csm::VIRTUALCONTROLS_DOME_AUTO_VISIBILITY);
    mBindingsIds[8] = Label_virtualcontrols_1_4_0_1_dome_auto_csm.State.bind(gm::csm::VIRTUALCONTROLS_DOMEDEFEAT_STATE_INTERNAL);
    mBindingsIds[9] = Image_img_check_box_auto.Visibility.bind(gm::csm::VIRTUALCONTROLS_DOME_AUTO_VISIBILITY);
    mBindingsIds[10] = Image_img_check_box_auto.State.bind(gm::csm::VIRTUALCONTROLS_DOMEDEFEAT_STATE_INTERNAL);
}


}//namespace csm
}//namespace gm
