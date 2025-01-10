#include "Screen_6024.h"

#include "RTOS_InternalData.h"
#include "WidgetData.h"
#include <cstdlib>

namespace gm
{
namespace csm
{


void Screen_6024::Widget_Logic_Visibility_grp_img_close()
{
    const auto var_005 = gm::csm::VIRTUALCONTROLS_ANDROID_NOIVI_STATE.data();
    const auto var_004 = !(var_005);
    
    const auto var_002 = gm::csm::VIRTUALCONTROLS_ANDROID_LAUNCH_VISIBILITY.data();
    const auto var_003 = var_004;
    const auto var_001 = var_002 && var_003;
    
    Group_grp_img_close.Visibility = var_001;
}

void Screen_6024::Widget_Logic_Visibility_virtualcontrols_1_0_4_wakeScreenExit_csm()
{
    const auto var_007 = gm::csm::VIRTUALCONTROLS_ANDROID_LAUNCH_VISIBILITY.data();
    const auto var_006 = !(var_007);
    
    Label_virtualcontrols_1_0_4_wakeScreenExit_csm.Visibility = var_006;
}

void Screen_6024::Widget_Logic_Visibility_img_close()
{
    const auto var_012 = gm::csm::VIRTUALCONTROLS_ANDROID_NOIVI_STATE.data();
    const auto var_011 = !(var_012);
    
    const auto var_009 = gm::csm::VIRTUALCONTROLS_ANDROID_LAUNCH_VISIBILITY.data();
    const auto var_010 = var_011;
    const auto var_008 = var_009 && var_010;
    
    Image_img_close.Visibility = var_008;
}

void Screen_6024::Widget_Logic_Visibility_img_controls_icn_fog_rear()
{
    const auto var_014 = gm::csm::VIRTUALCONTROLS_CONTROL_PAGE_WHILE_DRIVING_INTERNAL.data();
    const auto var_013 = !(var_014);
    
    Image_img_controls_icn_fog_rear.Visibility = var_013;
}

void Screen_6024::Widget_Logic_Visibility_virtualcontrols_1_1_exitBtn_csm()
{
    const auto var_019 = gm::csm::VIRTUALCONTROLS_ANDROID_NOIVI_STATE.data();
    const auto var_018 = !(var_019);
    
    const auto var_016 = gm::csm::VIRTUALCONTROLS_ANDROID_LAUNCH_VISIBILITY.data();
    const auto var_017 = var_018;
    const auto var_015 = var_016 && var_017;
    
    GroupLabel_virtualcontrols_1_1_exitBtn_csm.Visibility = var_015;
}

void Screen_6024::Widget_Logic_Visibility_img_placeholder_WakeScreen()
{
    const auto var_021 = gm::csm::VIRTUALCONTROLS_ANDROID_LAUNCH_VISIBILITY.data();
    const auto var_020 = !(var_021);
    
    Image_img_placeholder_WakeScreen.Visibility = var_020;
}

void Screen_6024::Widget_Logic_Visibility_virtualcontrols_1_4_0_6_fog_csm()
{
    const auto var_023 = gm::csm::VIRTUALCONTROLS_CONTROL_PAGE_WHILE_DRIVING_INTERNAL.data();
    const auto var_022 = !(var_023);
    
    Label_virtualcontrols_1_4_0_6_fog_csm.Visibility = var_022;
}

void Screen_6024::onScreenHide()
{
    Image_img_radio_button_off.State.unBind(gm::csm::VIRTUALCONTROLS_REARFOGLIGHT_STATE_INTERNAL, mBindingsIds[0]);
    Image_img_radio_button_on.State.unBind(gm::csm::VIRTUALCONTROLS_REARFOGLIGHT_STATE_INTERNAL, mBindingsIds[1]);
    Label_virtualcontrols_1_4_0_6_FogRearOn_csm.State.unBind(gm::csm::VIRTUALCONTROLS_REARFOGLIGHT_STATE_INTERNAL, mBindingsIds[2]);
    Label_virtualcontrols_1_4_0_6_FogRearOff_csm.State.unBind(gm::csm::VIRTUALCONTROLS_REARFOGLIGHT_STATE_INTERNAL, mBindingsIds[3]);
    Label_virtualcontrols_0_0_detailsUnavailable_csm.Visibility.unBind(gm::csm::VIRTUALCONTROLS_CONTROL_PAGE_WHILE_DRIVING_INTERNAL, mBindingsIds[4]);
    Image_img_placeholder_WakeScreen.State.unBind(gm::csm::VIRTUALCONTROLS_WAKESCREEN_ANDROID_BUTTON_STATE, mBindingsIds[5]);
}

void Screen_6024::onScreenShow()
{
    addDependency(this, &Screen_6024::Widget_Logic_Visibility_grp_img_close, gm::csm::VIRTUALCONTROLS_ANDROID_LAUNCH_VISIBILITY);
    addDependency(this, &Screen_6024::Widget_Logic_Visibility_grp_img_close, gm::csm::VIRTUALCONTROLS_ANDROID_NOIVI_STATE);
    addDependency(this, &Screen_6024::Widget_Logic_Visibility_virtualcontrols_1_0_4_wakeScreenExit_csm, gm::csm::VIRTUALCONTROLS_ANDROID_LAUNCH_VISIBILITY);
    mBindingsIds[0] = Image_img_radio_button_off.State.bind(gm::csm::VIRTUALCONTROLS_REARFOGLIGHT_STATE_INTERNAL);
    mBindingsIds[1] = Image_img_radio_button_on.State.bind(gm::csm::VIRTUALCONTROLS_REARFOGLIGHT_STATE_INTERNAL);
    addDependency(this, &Screen_6024::Widget_Logic_Visibility_img_close, gm::csm::VIRTUALCONTROLS_ANDROID_LAUNCH_VISIBILITY);
    addDependency(this, &Screen_6024::Widget_Logic_Visibility_img_close, gm::csm::VIRTUALCONTROLS_ANDROID_NOIVI_STATE);
    mBindingsIds[2] = Label_virtualcontrols_1_4_0_6_FogRearOn_csm.State.bind(gm::csm::VIRTUALCONTROLS_REARFOGLIGHT_STATE_INTERNAL);
    mBindingsIds[3] = Label_virtualcontrols_1_4_0_6_FogRearOff_csm.State.bind(gm::csm::VIRTUALCONTROLS_REARFOGLIGHT_STATE_INTERNAL);
    addDependency(this, &Screen_6024::Widget_Logic_Visibility_img_controls_icn_fog_rear, gm::csm::VIRTUALCONTROLS_CONTROL_PAGE_WHILE_DRIVING_INTERNAL);
    mBindingsIds[4] = Label_virtualcontrols_0_0_detailsUnavailable_csm.Visibility.bind(gm::csm::VIRTUALCONTROLS_CONTROL_PAGE_WHILE_DRIVING_INTERNAL);
    addDependency(this, &Screen_6024::Widget_Logic_Visibility_virtualcontrols_1_1_exitBtn_csm, gm::csm::VIRTUALCONTROLS_ANDROID_LAUNCH_VISIBILITY);
    addDependency(this, &Screen_6024::Widget_Logic_Visibility_virtualcontrols_1_1_exitBtn_csm, gm::csm::VIRTUALCONTROLS_ANDROID_NOIVI_STATE);
    addDependency(this, &Screen_6024::Widget_Logic_Visibility_img_placeholder_WakeScreen, gm::csm::VIRTUALCONTROLS_ANDROID_LAUNCH_VISIBILITY);
    mBindingsIds[5] = Image_img_placeholder_WakeScreen.State.bind(gm::csm::VIRTUALCONTROLS_WAKESCREEN_ANDROID_BUTTON_STATE);
    addDependency(this, &Screen_6024::Widget_Logic_Visibility_virtualcontrols_1_4_0_6_fog_csm, gm::csm::VIRTUALCONTROLS_CONTROL_PAGE_WHILE_DRIVING_INTERNAL);
}


}//namespace csm
}//namespace gm
