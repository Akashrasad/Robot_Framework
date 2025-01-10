#include "Screen_6025.h"

#include "RTOS_InternalData.h"
#include "WidgetData.h"
#include <cstdlib>

namespace gm
{
namespace csm
{


void Screen_6025::Widget_Logic_Visibility_img_controls_icn_fog_front()
{
    const auto var_002 = gm::csm::VIRTUALCONTROLS_CONTROL_PAGE_WHILE_DRIVING_INTERNAL.data();
    const auto var_001 = !(var_002);
    
    Image_img_controls_icn_fog_front.Visibility = var_001;
}

void Screen_6025::Widget_Logic_Visibility_img_placeholder_WakeScreen()
{
    const auto var_007 = gm::csm::VIRTUALCONTROLS_ANDROID_LAUNCH_VISIBILITY.data();
    const auto var_006 = !(var_007);
    
    const auto var_009 = gm::csm::VIRTUALCONTROLS_ANDROID_NOIVI_STATE.data();
    const auto var_008 = !(var_009);
    
    const auto var_004 = var_006;
    const auto var_005 = var_008;
    const auto var_003 = var_004 && var_005;
    
    Image_img_placeholder_WakeScreen.Visibility = var_003;
}

void Screen_6025::Widget_Logic_Visibility_img_close()
{
    const auto var_014 = gm::csm::VIRTUALCONTROLS_ANDROID_NOIVI_STATE.data();
    const auto var_013 = !(var_014);
    
    const auto var_011 = gm::csm::VIRTUALCONTROLS_ANDROID_LAUNCH_VISIBILITY.data();
    const auto var_012 = var_013;
    const auto var_010 = var_011 && var_012;
    
    Image_img_close.Visibility = var_010;
}

void Screen_6025::Widget_Logic_Visibility_virtualcontrols_1_1_exitBtn_csm()
{
    const auto var_019 = gm::csm::VIRTUALCONTROLS_ANDROID_LAUNCH_VISIBILITY.data();
    const auto var_018 = !(var_019);
    
    const auto var_021 = gm::csm::VIRTUALCONTROLS_ANDROID_NOIVI_STATE.data();
    const auto var_020 = !(var_021);
    
    const auto var_016 = var_018;
    const auto var_017 = var_020;
    const auto var_015 = var_016 && var_017;
    
    Label_virtualcontrols_1_1_exitBtn_csm.Visibility = var_015;
}

void Screen_6025::Widget_Logic_Visibility_virtualcontrols_1_4_0_7_fog_front_rear_csm()
{
    const auto var_023 = gm::csm::VIRTUALCONTROLS_CONTROL_PAGE_WHILE_DRIVING_INTERNAL.data();
    const auto var_022 = !(var_023);
    
    Label_virtualcontrols_1_4_0_7_fog_front_rear_csm.Visibility = var_022;
}

void Screen_6025::onScreenHide()
{
    Image_img_placeholder_WakeScreen.State.unBind(gm::csm::VIRTUALCONTROLS_WAKESCREEN_ANDROID_BUTTON_STATE, mBindingsIds[0]);
    Label_virtualcontrols_0_0_detailsUnavailable_csm.Visibility.unBind(gm::csm::VIRTUALCONTROLS_CONTROL_PAGE_WHILE_DRIVING_INTERNAL, mBindingsIds[1]);
    Image_img_radio_button_Rear_On.State.unBind(gm::csm::VIRTUALCONTROLS_DUALFOGLIGHT_STATE_INTERNAL, mBindingsIds[2]);
    Label_virtualcontrols_1_4_0_7_fog_front_rear_both_on_csm.State.unBind(gm::csm::VIRTUALCONTROLS_DUALFOGLIGHT_STATE_INTERNAL, mBindingsIds[3]);
    Image_img_radio_button_Both_Off.State.unBind(gm::csm::VIRTUALCONTROLS_DUALFOGLIGHT_STATE_INTERNAL, mBindingsIds[4]);
    Label_virtualcontrols_1_4_0_7_fog_front_rear_front_on_csm.State.unBind(gm::csm::VIRTUALCONTROLS_DUALFOGLIGHT_STATE_INTERNAL, mBindingsIds[5]);
    Label_virtualcontrols_1_4_0_7_fog_front_rear_rear_on_csm.State.unBind(gm::csm::VIRTUALCONTROLS_DUALFOGLIGHT_STATE_INTERNAL, mBindingsIds[6]);
    Image_img_radio_button_Front_On.State.unBind(gm::csm::VIRTUALCONTROLS_DUALFOGLIGHT_STATE_INTERNAL, mBindingsIds[7]);
    Label_virtualcontrols_1_4_0_7_fog_front_rear_both_off_csm.State.unBind(gm::csm::VIRTUALCONTROLS_DUALFOGLIGHT_STATE_INTERNAL, mBindingsIds[8]);
    Image_img_radio_button_Both_On.State.unBind(gm::csm::VIRTUALCONTROLS_DUALFOGLIGHT_STATE_INTERNAL, mBindingsIds[9]);
}

void Screen_6025::onScreenShow()
{
    addDependency(this, &Screen_6025::Widget_Logic_Visibility_img_controls_icn_fog_front, gm::csm::VIRTUALCONTROLS_CONTROL_PAGE_WHILE_DRIVING_INTERNAL);
    addDependency(this, &Screen_6025::Widget_Logic_Visibility_img_placeholder_WakeScreen, gm::csm::VIRTUALCONTROLS_ANDROID_LAUNCH_VISIBILITY);
    addDependency(this, &Screen_6025::Widget_Logic_Visibility_img_placeholder_WakeScreen, gm::csm::VIRTUALCONTROLS_ANDROID_NOIVI_STATE);
    mBindingsIds[0] = Image_img_placeholder_WakeScreen.State.bind(gm::csm::VIRTUALCONTROLS_WAKESCREEN_ANDROID_BUTTON_STATE);
    mBindingsIds[1] = Label_virtualcontrols_0_0_detailsUnavailable_csm.Visibility.bind(gm::csm::VIRTUALCONTROLS_CONTROL_PAGE_WHILE_DRIVING_INTERNAL);
    mBindingsIds[2] = Image_img_radio_button_Rear_On.State.bind(gm::csm::VIRTUALCONTROLS_DUALFOGLIGHT_STATE_INTERNAL);
    addDependency(this, &Screen_6025::Widget_Logic_Visibility_img_close, gm::csm::VIRTUALCONTROLS_ANDROID_LAUNCH_VISIBILITY);
    addDependency(this, &Screen_6025::Widget_Logic_Visibility_img_close, gm::csm::VIRTUALCONTROLS_ANDROID_NOIVI_STATE);
    mBindingsIds[3] = Label_virtualcontrols_1_4_0_7_fog_front_rear_both_on_csm.State.bind(gm::csm::VIRTUALCONTROLS_DUALFOGLIGHT_STATE_INTERNAL);
    mBindingsIds[4] = Image_img_radio_button_Both_Off.State.bind(gm::csm::VIRTUALCONTROLS_DUALFOGLIGHT_STATE_INTERNAL);
    mBindingsIds[5] = Label_virtualcontrols_1_4_0_7_fog_front_rear_front_on_csm.State.bind(gm::csm::VIRTUALCONTROLS_DUALFOGLIGHT_STATE_INTERNAL);
    addDependency(this, &Screen_6025::Widget_Logic_Visibility_virtualcontrols_1_1_exitBtn_csm, gm::csm::VIRTUALCONTROLS_ANDROID_LAUNCH_VISIBILITY);
    addDependency(this, &Screen_6025::Widget_Logic_Visibility_virtualcontrols_1_1_exitBtn_csm, gm::csm::VIRTUALCONTROLS_ANDROID_NOIVI_STATE);
    mBindingsIds[6] = Label_virtualcontrols_1_4_0_7_fog_front_rear_rear_on_csm.State.bind(gm::csm::VIRTUALCONTROLS_DUALFOGLIGHT_STATE_INTERNAL);
    mBindingsIds[7] = Image_img_radio_button_Front_On.State.bind(gm::csm::VIRTUALCONTROLS_DUALFOGLIGHT_STATE_INTERNAL);
    mBindingsIds[8] = Label_virtualcontrols_1_4_0_7_fog_front_rear_both_off_csm.State.bind(gm::csm::VIRTUALCONTROLS_DUALFOGLIGHT_STATE_INTERNAL);
    addDependency(this, &Screen_6025::Widget_Logic_Visibility_virtualcontrols_1_4_0_7_fog_front_rear_csm, gm::csm::VIRTUALCONTROLS_CONTROL_PAGE_WHILE_DRIVING_INTERNAL);
    mBindingsIds[9] = Image_img_radio_button_Both_On.State.bind(gm::csm::VIRTUALCONTROLS_DUALFOGLIGHT_STATE_INTERNAL);
}


}//namespace csm
}//namespace gm
