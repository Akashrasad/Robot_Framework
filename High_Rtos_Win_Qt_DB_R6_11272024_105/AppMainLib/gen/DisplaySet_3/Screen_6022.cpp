#include "Screen_6022.h"

#include "RTOS_InternalData.h"
#include "WidgetData.h"
#include <cstdlib>

namespace gm
{
namespace csm
{


void Screen_6022::Widget_Logic_Visibility_img_placeholder_WakeScreen()
{
    const auto var_002 = gm::csm::VIRTUALCONTROLS_ANDROID_LAUNCH_VISIBILITY.data();
    const auto var_001 = !(var_002);
    
    Image_img_placeholder_WakeScreen.Visibility = var_001;
}

void Screen_6022::Widget_Logic_Visibility_img_close()
{
    const auto var_007 = gm::csm::VIRTUALCONTROLS_ANDROID_NOIVI_STATE.data();
    const auto var_006 = !(var_007);
    
    const auto var_004 = gm::csm::VIRTUALCONTROLS_ANDROID_LAUNCH_VISIBILITY.data();
    const auto var_005 = var_006;
    const auto var_003 = var_004 && var_005;
    
    Image_img_close.Visibility = var_003;
}

void Screen_6022::Widget_Logic_Visibility_virtualcontrols_1_4_0_6_fog_csm()
{
    const auto var_009 = gm::csm::VIRTUALCONTROLS_CONTROL_PAGE_WHILE_DRIVING_INTERNAL.data();
    const auto var_008 = !(var_009);
    
    Label_virtualcontrols_1_4_0_6_fog_csm.Visibility = var_008;
}

void Screen_6022::Widget_Logic_Visibility_img_controls_icn_fog_front()
{
    const auto var_011 = gm::csm::VIRTUALCONTROLS_CONTROL_PAGE_WHILE_DRIVING_INTERNAL.data();
    const auto var_010 = !(var_011);
    
    Image_img_controls_icn_fog_front.Visibility = var_010;
}

void Screen_6022::Widget_Logic_Visibility_virtualcontrols_1_1_exitBtn_csm()
{
    const auto var_016 = gm::csm::VIRTUALCONTROLS_ANDROID_NOIVI_STATE.data();
    const auto var_015 = !(var_016);
    
    const auto var_013 = gm::csm::VIRTUALCONTROLS_ANDROID_LAUNCH_VISIBILITY.data();
    const auto var_014 = var_015;
    const auto var_012 = var_013 && var_014;
    
    GroupLabel_virtualcontrols_1_1_exitBtn_csm.Visibility = var_012;
}

void Screen_6022::Widget_Logic_Visibility_grp_img_close()
{
    const auto var_021 = gm::csm::VIRTUALCONTROLS_ANDROID_NOIVI_STATE.data();
    const auto var_020 = !(var_021);
    
    const auto var_018 = gm::csm::VIRTUALCONTROLS_ANDROID_LAUNCH_VISIBILITY.data();
    const auto var_019 = var_020;
    const auto var_017 = var_018 && var_019;
    
    Group_grp_img_close.Visibility = var_017;
}

void Screen_6022::Widget_Logic_Visibility_virtualcontrols_1_0_4_wakeScreenExit_csm()
{
    const auto var_023 = gm::csm::VIRTUALCONTROLS_ANDROID_LAUNCH_VISIBILITY.data();
    const auto var_022 = !(var_023);
    
    Label_virtualcontrols_1_0_4_wakeScreenExit_csm.Visibility = var_022;
}

void Screen_6022::onScreenHide()
{
    Image_img_radio_button_Off.State.unBind(gm::csm::VIRTUALCONTROLS_SINGLEFOGLIGHT_STATE_INTERNAL, mBindingsIds[0]);
    Label_virtualcontrols_1_4_0_4_FogOn_csm.State.unBind(gm::csm::VIRTUALCONTROLS_SINGLEFOGLIGHT_STATE_INTERNAL, mBindingsIds[1]);
    Image_img_placeholder_WakeScreen.State.unBind(gm::csm::VIRTUALCONTROLS_WAKESCREEN_ANDROID_BUTTON_STATE, mBindingsIds[2]);
    Image_img_radio_button_on.State.unBind(gm::csm::VIRTUALCONTROLS_SINGLEFOGLIGHT_STATE_INTERNAL, mBindingsIds[3]);
    Label_virtualcontrols_1_4_0_4_FogOff_csm.State.unBind(gm::csm::VIRTUALCONTROLS_SINGLEFOGLIGHT_STATE_INTERNAL, mBindingsIds[4]);
    Label_virtualcontrols_0_0_detailsUnavailable_csm.Visibility.unBind(gm::csm::VIRTUALCONTROLS_CONTROL_PAGE_WHILE_DRIVING_INTERNAL, mBindingsIds[5]);
}

void Screen_6022::onScreenShow()
{
    mBindingsIds[0] = Image_img_radio_button_Off.State.bind(gm::csm::VIRTUALCONTROLS_SINGLEFOGLIGHT_STATE_INTERNAL);
    mBindingsIds[1] = Label_virtualcontrols_1_4_0_4_FogOn_csm.State.bind(gm::csm::VIRTUALCONTROLS_SINGLEFOGLIGHT_STATE_INTERNAL);
    addDependency(this, &Screen_6022::Widget_Logic_Visibility_img_placeholder_WakeScreen, gm::csm::VIRTUALCONTROLS_ANDROID_LAUNCH_VISIBILITY);
    mBindingsIds[2] = Image_img_placeholder_WakeScreen.State.bind(gm::csm::VIRTUALCONTROLS_WAKESCREEN_ANDROID_BUTTON_STATE);
    addDependency(this, &Screen_6022::Widget_Logic_Visibility_img_close, gm::csm::VIRTUALCONTROLS_ANDROID_LAUNCH_VISIBILITY);
    addDependency(this, &Screen_6022::Widget_Logic_Visibility_img_close, gm::csm::VIRTUALCONTROLS_ANDROID_NOIVI_STATE);
    addDependency(this, &Screen_6022::Widget_Logic_Visibility_virtualcontrols_1_4_0_6_fog_csm, gm::csm::VIRTUALCONTROLS_CONTROL_PAGE_WHILE_DRIVING_INTERNAL);
    addDependency(this, &Screen_6022::Widget_Logic_Visibility_img_controls_icn_fog_front, gm::csm::VIRTUALCONTROLS_CONTROL_PAGE_WHILE_DRIVING_INTERNAL);
    mBindingsIds[3] = Image_img_radio_button_on.State.bind(gm::csm::VIRTUALCONTROLS_SINGLEFOGLIGHT_STATE_INTERNAL);
    addDependency(this, &Screen_6022::Widget_Logic_Visibility_virtualcontrols_1_1_exitBtn_csm, gm::csm::VIRTUALCONTROLS_ANDROID_LAUNCH_VISIBILITY);
    addDependency(this, &Screen_6022::Widget_Logic_Visibility_virtualcontrols_1_1_exitBtn_csm, gm::csm::VIRTUALCONTROLS_ANDROID_NOIVI_STATE);
    mBindingsIds[4] = Label_virtualcontrols_1_4_0_4_FogOff_csm.State.bind(gm::csm::VIRTUALCONTROLS_SINGLEFOGLIGHT_STATE_INTERNAL);
    mBindingsIds[5] = Label_virtualcontrols_0_0_detailsUnavailable_csm.Visibility.bind(gm::csm::VIRTUALCONTROLS_CONTROL_PAGE_WHILE_DRIVING_INTERNAL);
    addDependency(this, &Screen_6022::Widget_Logic_Visibility_grp_img_close, gm::csm::VIRTUALCONTROLS_ANDROID_LAUNCH_VISIBILITY);
    addDependency(this, &Screen_6022::Widget_Logic_Visibility_grp_img_close, gm::csm::VIRTUALCONTROLS_ANDROID_NOIVI_STATE);
    addDependency(this, &Screen_6022::Widget_Logic_Visibility_virtualcontrols_1_0_4_wakeScreenExit_csm, gm::csm::VIRTUALCONTROLS_ANDROID_LAUNCH_VISIBILITY);
}


}//namespace csm
}//namespace gm
