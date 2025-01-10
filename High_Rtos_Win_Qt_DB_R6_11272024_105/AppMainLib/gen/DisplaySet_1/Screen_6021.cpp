#include "Screen_6021.h"

#include "RTOS_InternalData.h"
#include "WidgetData.h"
#include <cstdlib>

namespace gm
{
namespace csm
{


void Screen_6021::Widget_Logic_Visibility_virtualcontrols_1_1_exitBtn_csm()
{
    const auto var_005 = gm::csm::VIRTUALCONTROLS_ANDROID_NOIVI_STATE.data();
    const auto var_004 = !(var_005);
    
    const auto var_002 = gm::csm::VIRTUALCONTROLS_ANDROID_LAUNCH_VISIBILITY.data();
    const auto var_003 = var_004;
    const auto var_001 = var_002 && var_003;
    
    GroupLabel_virtualcontrols_1_1_exitBtn_csm.Visibility = var_001;
}

void Screen_6021::Widget_Logic_Visibility_img_placeholder_WakeScreen()
{
    const auto var_007 = gm::csm::VIRTUALCONTROLS_ANDROID_LAUNCH_VISIBILITY.data();
    const auto var_006 = !(var_007);
    
    Image_img_placeholder_WakeScreen.Visibility = var_006;
}

void Screen_6021::Widget_Logic_Visibility_virtualcontrols_1_0_4_wakeScreenExit_csm()
{
    const auto var_009 = gm::csm::VIRTUALCONTROLS_ANDROID_LAUNCH_VISIBILITY.data();
    const auto var_008 = !(var_009);
    
    Label_virtualcontrols_1_0_4_wakeScreenExit_csm.Visibility = var_008;
}

void Screen_6021::Widget_Logic_Visibility_img_close()
{
    const auto var_014 = gm::csm::VIRTUALCONTROLS_ANDROID_NOIVI_STATE.data();
    const auto var_013 = !(var_014);
    
    const auto var_011 = gm::csm::VIRTUALCONTROLS_ANDROID_LAUNCH_VISIBILITY.data();
    const auto var_012 = var_013;
    const auto var_010 = var_011 && var_012;
    
    Image_img_close.Visibility = var_010;
}

void Screen_6021::Widget_Logic_Visibility_img_controls_icn_high_auto_beam()
{
    const auto var_016 = gm::csm::VIRTUALCONTROLS_CONTROL_PAGE_WHILE_DRIVING_INTERNAL.data();
    const auto var_015 = !(var_016);
    
    Image_img_controls_icn_high_auto_beam.Visibility = var_015;
}

void Screen_6021::Widget_Logic_Visibility_grp_img_close()
{
    const auto var_021 = gm::csm::VIRTUALCONTROLS_ANDROID_NOIVI_STATE.data();
    const auto var_020 = !(var_021);
    
    const auto var_018 = gm::csm::VIRTUALCONTROLS_ANDROID_LAUNCH_VISIBILITY.data();
    const auto var_019 = var_020;
    const auto var_017 = var_018 && var_019;
    
    Group_grp_img_close.Visibility = var_017;
}

void Screen_6021::Widget_Logic_Visibility_virtualcontrols_1_4_0_3_beams_csm()
{
    const auto var_023 = gm::csm::VIRTUALCONTROLS_CONTROL_PAGE_WHILE_DRIVING_INTERNAL.data();
    const auto var_022 = !(var_023);
    
    Label_virtualcontrols_1_4_0_3_beams_csm.Visibility = var_022;
}

void Screen_6021::onScreenHide()
{
    Image_img_radio_button_Off.State.unBind(gm::csm::VIRTUALCONTROLS_AUTOHIGHBEAM_STATE_INTERNAL, mBindingsIds[0]);
    Label_virtualcontrols_0_0_detailsUnavailable_csm.Visibility.unBind(gm::csm::VIRTUALCONTROLS_CONTROL_PAGE_WHILE_DRIVING_INTERNAL, mBindingsIds[1]);
    Image_img_placeholder_WakeScreen.State.unBind(gm::csm::VIRTUALCONTROLS_WAKESCREEN_ANDROID_BUTTON_STATE, mBindingsIds[2]);
    Image_img_radio_button_on.State.unBind(gm::csm::VIRTUALCONTROLS_AUTOHIGHBEAM_STATE_INTERNAL, mBindingsIds[3]);
    Label_virtualcontrols_1_4_0_3_BeamsOff_csm.State.unBind(gm::csm::VIRTUALCONTROLS_AUTOHIGHBEAM_STATE_INTERNAL, mBindingsIds[4]);
    Label_virtualcontrols_1_4_0_3_BeamsOn_csm.State.unBind(gm::csm::VIRTUALCONTROLS_AUTOHIGHBEAM_STATE_INTERNAL, mBindingsIds[5]);
}

void Screen_6021::onScreenShow()
{
    mBindingsIds[0] = Image_img_radio_button_Off.State.bind(gm::csm::VIRTUALCONTROLS_AUTOHIGHBEAM_STATE_INTERNAL);
    addDependency(this, &Screen_6021::Widget_Logic_Visibility_virtualcontrols_1_1_exitBtn_csm, gm::csm::VIRTUALCONTROLS_ANDROID_LAUNCH_VISIBILITY);
    addDependency(this, &Screen_6021::Widget_Logic_Visibility_virtualcontrols_1_1_exitBtn_csm, gm::csm::VIRTUALCONTROLS_ANDROID_NOIVI_STATE);
    mBindingsIds[1] = Label_virtualcontrols_0_0_detailsUnavailable_csm.Visibility.bind(gm::csm::VIRTUALCONTROLS_CONTROL_PAGE_WHILE_DRIVING_INTERNAL);
    addDependency(this, &Screen_6021::Widget_Logic_Visibility_img_placeholder_WakeScreen, gm::csm::VIRTUALCONTROLS_ANDROID_LAUNCH_VISIBILITY);
    mBindingsIds[2] = Image_img_placeholder_WakeScreen.State.bind(gm::csm::VIRTUALCONTROLS_WAKESCREEN_ANDROID_BUTTON_STATE);
    mBindingsIds[3] = Image_img_radio_button_on.State.bind(gm::csm::VIRTUALCONTROLS_AUTOHIGHBEAM_STATE_INTERNAL);
    mBindingsIds[4] = Label_virtualcontrols_1_4_0_3_BeamsOff_csm.State.bind(gm::csm::VIRTUALCONTROLS_AUTOHIGHBEAM_STATE_INTERNAL);
    addDependency(this, &Screen_6021::Widget_Logic_Visibility_virtualcontrols_1_0_4_wakeScreenExit_csm, gm::csm::VIRTUALCONTROLS_ANDROID_LAUNCH_VISIBILITY);
    mBindingsIds[5] = Label_virtualcontrols_1_4_0_3_BeamsOn_csm.State.bind(gm::csm::VIRTUALCONTROLS_AUTOHIGHBEAM_STATE_INTERNAL);
    addDependency(this, &Screen_6021::Widget_Logic_Visibility_img_close, gm::csm::VIRTUALCONTROLS_ANDROID_LAUNCH_VISIBILITY);
    addDependency(this, &Screen_6021::Widget_Logic_Visibility_img_close, gm::csm::VIRTUALCONTROLS_ANDROID_NOIVI_STATE);
    addDependency(this, &Screen_6021::Widget_Logic_Visibility_img_controls_icn_high_auto_beam, gm::csm::VIRTUALCONTROLS_CONTROL_PAGE_WHILE_DRIVING_INTERNAL);
    addDependency(this, &Screen_6021::Widget_Logic_Visibility_grp_img_close, gm::csm::VIRTUALCONTROLS_ANDROID_LAUNCH_VISIBILITY);
    addDependency(this, &Screen_6021::Widget_Logic_Visibility_grp_img_close, gm::csm::VIRTUALCONTROLS_ANDROID_NOIVI_STATE);
    addDependency(this, &Screen_6021::Widget_Logic_Visibility_virtualcontrols_1_4_0_3_beams_csm, gm::csm::VIRTUALCONTROLS_CONTROL_PAGE_WHILE_DRIVING_INTERNAL);
}


}//namespace csm
}//namespace gm
