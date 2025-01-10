#include "Screen_6020.h"

#include "RTOS_InternalData.h"
#include "WidgetData.h"
#include <cstdlib>

namespace gm
{
namespace csm
{


void Screen_6020::Widget_Logic_Visibility_img_controls_icn_headlights_u550()
{
    const auto var_002 = gm::csm::VIRTUALCONTROLS_CONTROL_PAGE_WHILE_DRIVING_INTERNAL.data();
    const auto var_001 = !(var_002);
    
    Image_img_controls_icn_headlights_u550.Visibility = var_001;
}

void Screen_6020::Widget_Logic_Visibility_virtualcontrols_1_1_exitBtn_csm()
{
    const auto var_007 = gm::csm::VIRTUALCONTROLS_ANDROID_LAUNCH_VISIBILITY.data();
    const auto var_006 = !(var_007);
    
    const auto var_009 = gm::csm::VIRTUALCONTROLS_ANDROID_NOIVI_STATE.data();
    const auto var_008 = !(var_009);
    
    const auto var_004 = var_006;
    const auto var_005 = var_008;
    const auto var_003 = var_004 && var_005;
    
    Label_virtualcontrols_1_1_exitBtn_csm.Visibility = var_003;
}

void Screen_6020::Widget_Logic_Visibility_virtualcontrols_1_4_0_2_headlights_csm()
{
    const auto var_011 = gm::csm::VIRTUALCONTROLS_CONTROL_PAGE_WHILE_DRIVING_INTERNAL.data();
    const auto var_010 = !(var_011);
    
    Label_virtualcontrols_1_4_0_2_headlights_csm.Visibility = var_010;
}

void Screen_6020::Widget_Logic_Visibility_img_placeholder_WakeScreen()
{
    const auto var_016 = gm::csm::VIRTUALCONTROLS_ANDROID_LAUNCH_VISIBILITY.data();
    const auto var_015 = !(var_016);
    
    const auto var_018 = gm::csm::VIRTUALCONTROLS_ANDROID_NOIVI_STATE.data();
    const auto var_017 = !(var_018);
    
    const auto var_013 = var_015;
    const auto var_014 = var_017;
    const auto var_012 = var_013 && var_014;
    
    Image_img_placeholder_WakeScreen.Visibility = var_012;
}

void Screen_6020::Widget_Logic_Visibility_img_close()
{
    const auto var_023 = gm::csm::VIRTUALCONTROLS_ANDROID_NOIVI_STATE.data();
    const auto var_022 = !(var_023);
    
    const auto var_020 = gm::csm::VIRTUALCONTROLS_ANDROID_LAUNCH_VISIBILITY.data();
    const auto var_021 = var_022;
    const auto var_019 = var_020 && var_021;
    
    Image_img_close.Visibility = var_019;
}

void Screen_6020::onScreenHide()
{
    Label_virtualcontrols_1_4_0_2_HeadlightsOn_csm.State.unBind(gm::csm::VIRTUALCONTROLS_HEADLIGHT_STATE_INTERNAL, mBindingsIds[0]);
    Image_img_radio_button_headlight_off.State.unBind(gm::csm::VIRTUALCONTROLS_HEADLIGHT_STATE_INTERNAL, mBindingsIds[1]);
    Image_img_radio_button_headlight_on.State.unBind(gm::csm::VIRTUALCONTROLS_HEADLIGHT_STATE_INTERNAL, mBindingsIds[2]);
    Label_virtualcontrols_1_4_0_2_HeadlightsAuto_csm.State.unBind(gm::csm::VIRTUALCONTROLS_HEADLIGHT_STATE_INTERNAL, mBindingsIds[3]);
    Label_virtualcontrols_1_4_0_2_headlightsOff_csm.State.unBind(gm::csm::VIRTUALCONTROLS_HEADLIGHT_STATE_INTERNAL, mBindingsIds[4]);
    Label_virtualcontrols_0_0_detailsUnavailable_csm.Visibility.unBind(gm::csm::VIRTUALCONTROLS_CONTROL_PAGE_WHILE_DRIVING_INTERNAL, mBindingsIds[5]);
    Label_virtualcontrols_1_4_0_2_HeadlightsParking_csm.State.unBind(gm::csm::VIRTUALCONTROLS_HEADLIGHT_STATE_INTERNAL, mBindingsIds[6]);
    Image_img_placeholder_WakeScreen.State.unBind(gm::csm::VIRTUALCONTROLS_WAKESCREEN_ANDROID_BUTTON_STATE, mBindingsIds[7]);
    Image_img_radio_button_headlight_parking.State.unBind(gm::csm::VIRTUALCONTROLS_HEADLIGHT_STATE_INTERNAL, mBindingsIds[8]);
    Image_img_radio_button_headlight_auto.State.unBind(gm::csm::VIRTUALCONTROLS_HEADLIGHT_STATE_INTERNAL, mBindingsIds[9]);
    Image_img_checkbox.State.unBind(gm::csm::VIRTUALCONTROLS_HEADLIGHT_REMINDER, mBindingsIds[10]);
}

void Screen_6020::onScreenShow()
{
    addDependency(this, &Screen_6020::Widget_Logic_Visibility_img_controls_icn_headlights_u550, gm::csm::VIRTUALCONTROLS_CONTROL_PAGE_WHILE_DRIVING_INTERNAL);
    addDependency(this, &Screen_6020::Widget_Logic_Visibility_virtualcontrols_1_1_exitBtn_csm, gm::csm::VIRTUALCONTROLS_ANDROID_LAUNCH_VISIBILITY);
    addDependency(this, &Screen_6020::Widget_Logic_Visibility_virtualcontrols_1_1_exitBtn_csm, gm::csm::VIRTUALCONTROLS_ANDROID_NOIVI_STATE);
    mBindingsIds[0] = Label_virtualcontrols_1_4_0_2_HeadlightsOn_csm.State.bind(gm::csm::VIRTUALCONTROLS_HEADLIGHT_STATE_INTERNAL);
    mBindingsIds[1] = Image_img_radio_button_headlight_off.State.bind(gm::csm::VIRTUALCONTROLS_HEADLIGHT_STATE_INTERNAL);
    mBindingsIds[2] = Image_img_radio_button_headlight_on.State.bind(gm::csm::VIRTUALCONTROLS_HEADLIGHT_STATE_INTERNAL);
    addDependency(this, &Screen_6020::Widget_Logic_Visibility_virtualcontrols_1_4_0_2_headlights_csm, gm::csm::VIRTUALCONTROLS_CONTROL_PAGE_WHILE_DRIVING_INTERNAL);
    mBindingsIds[3] = Label_virtualcontrols_1_4_0_2_HeadlightsAuto_csm.State.bind(gm::csm::VIRTUALCONTROLS_HEADLIGHT_STATE_INTERNAL);
    mBindingsIds[4] = Label_virtualcontrols_1_4_0_2_headlightsOff_csm.State.bind(gm::csm::VIRTUALCONTROLS_HEADLIGHT_STATE_INTERNAL);
    mBindingsIds[5] = Label_virtualcontrols_0_0_detailsUnavailable_csm.Visibility.bind(gm::csm::VIRTUALCONTROLS_CONTROL_PAGE_WHILE_DRIVING_INTERNAL);
    mBindingsIds[6] = Label_virtualcontrols_1_4_0_2_HeadlightsParking_csm.State.bind(gm::csm::VIRTUALCONTROLS_HEADLIGHT_STATE_INTERNAL);
    addDependency(this, &Screen_6020::Widget_Logic_Visibility_img_placeholder_WakeScreen, gm::csm::VIRTUALCONTROLS_ANDROID_LAUNCH_VISIBILITY);
    addDependency(this, &Screen_6020::Widget_Logic_Visibility_img_placeholder_WakeScreen, gm::csm::VIRTUALCONTROLS_ANDROID_NOIVI_STATE);
    mBindingsIds[7] = Image_img_placeholder_WakeScreen.State.bind(gm::csm::VIRTUALCONTROLS_WAKESCREEN_ANDROID_BUTTON_STATE);
    mBindingsIds[8] = Image_img_radio_button_headlight_parking.State.bind(gm::csm::VIRTUALCONTROLS_HEADLIGHT_STATE_INTERNAL);
    mBindingsIds[9] = Image_img_radio_button_headlight_auto.State.bind(gm::csm::VIRTUALCONTROLS_HEADLIGHT_STATE_INTERNAL);
    mBindingsIds[10] = Image_img_checkbox.State.bind(gm::csm::VIRTUALCONTROLS_HEADLIGHT_REMINDER);
    addDependency(this, &Screen_6020::Widget_Logic_Visibility_img_close, gm::csm::VIRTUALCONTROLS_ANDROID_LAUNCH_VISIBILITY);
    addDependency(this, &Screen_6020::Widget_Logic_Visibility_img_close, gm::csm::VIRTUALCONTROLS_ANDROID_NOIVI_STATE);
}


}//namespace csm
}//namespace gm
