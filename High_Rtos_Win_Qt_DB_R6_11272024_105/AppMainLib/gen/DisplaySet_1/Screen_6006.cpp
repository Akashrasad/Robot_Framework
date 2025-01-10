#include "Screen_6006.h"

#include "RTOS_InternalData.h"
#include "WidgetData.h"
#include <cstdlib>

namespace gm
{
namespace csm
{


void Screen_6006::Widget_Logic_Visibility_img_placeholder_WakeScreen()
{
    const auto var_002 = gm::csm::VIRTUALCONTROLS_ANDROID_LAUNCH_VISIBILITY.data();
    const auto var_001 = !(var_002);
    
    Image_img_placeholder_WakeScreen.Visibility = var_001;
}

void Screen_6006::Widget_Logic_Visibility_virtualcontrols_1_0_4_wakeScreenExit_csm()
{
    const auto var_004 = gm::csm::VIRTUALCONTROLS_ANDROID_LAUNCH_VISIBILITY.data();
    const auto var_003 = !(var_004);
    
    GroupLabel_virtualcontrols_1_0_4_wakeScreenExit_csm.Visibility = var_003;
}

void Screen_6006::Widget_Logic_Visibility_img_control_lockout()
{
    const auto var_006 = gm::csm::VIRTUALCONTROLS_CONTROL_PAGE_WHILE_DRIVING_INTERNAL.data();
    const auto var_005 = !(var_006);
    
    Image_img_control_lockout.Visibility = var_005;
}

void Screen_6006::Widget_Logic_Visibility_img_close()
{
    const auto var_011 = gm::csm::VIRTUALCONTROLS_ANDROID_NOIVI_STATE.data();
    const auto var_010 = !(var_011);
    
    const auto var_008 = gm::csm::VIRTUALCONTROLS_ANDROID_LAUNCH_VISIBILITY.data();
    const auto var_009 = var_010;
    const auto var_007 = var_008 && var_009;
    
    Image_img_close.Visibility = var_007;
}

void Screen_6006::Widget_Logic_Visibility_virtualcontrols_1_2_0_2_lockout_csm()
{
    const auto var_013 = gm::csm::VIRTUALCONTROLS_CONTROL_PAGE_WHILE_DRIVING_INTERNAL.data();
    const auto var_012 = !(var_013);
    
    Label_virtualcontrols_1_2_0_2_lockout_csm.Visibility = var_012;
}

void Screen_6006::Widget_Logic_Visibility_grp_img_close()
{
    const auto var_018 = gm::csm::VIRTUALCONTROLS_ANDROID_NOIVI_STATE.data();
    const auto var_017 = !(var_018);
    
    const auto var_015 = gm::csm::VIRTUALCONTROLS_ANDROID_LAUNCH_VISIBILITY.data();
    const auto var_016 = var_017;
    const auto var_014 = var_015 && var_016;
    
    Group_grp_img_close.Visibility = var_014;
}

void Screen_6006::Widget_Logic_Visibility_virtualcontrols_1_1_exitBtn_csm()
{
    const auto var_023 = gm::csm::VIRTUALCONTROLS_ANDROID_NOIVI_STATE.data();
    const auto var_022 = !(var_023);
    
    const auto var_020 = gm::csm::VIRTUALCONTROLS_ANDROID_LAUNCH_VISIBILITY.data();
    const auto var_021 = var_022;
    const auto var_019 = var_020 && var_021;
    
    GroupLabel_virtualcontrols_1_1_exitBtn_csm.Visibility = var_019;
}

void Screen_6006::onScreenHide()
{
    Image_img_placeholder_WakeScreen.State.unBind(gm::csm::VIRTUALCONTROLS_WAKESCREEN_ANDROID_BUTTON_STATE, mBindingsIds[0]);
    Label_virtualcontrols_1_2_0_2_LockoutOff_csm.State.unBind(gm::csm::VIRTUALCONTROLS_POWERWINDOWLOCKOUT_STATE_INTERNAL, mBindingsIds[1]);
    Image_img_radio_button_off.State.unBind(gm::csm::VIRTUALCONTROLS_POWERWINDOWLOCKOUT_STATE_INTERNAL, mBindingsIds[2]);
    Label_virtualcontrols_1_0_2_1_LockoutOn_csm.State.unBind(gm::csm::VIRTUALCONTROLS_POWERWINDOWLOCKOUT_STATE_INTERNAL, mBindingsIds[3]);
    Label_virtualcontrols_0_0_detailsUnavailable_csm.Visibility.unBind(gm::csm::VIRTUALCONTROLS_CONTROL_PAGE_WHILE_DRIVING_INTERNAL, mBindingsIds[4]);
    Image_img_radio_button_on.State.unBind(gm::csm::VIRTUALCONTROLS_POWERWINDOWLOCKOUT_STATE_INTERNAL, mBindingsIds[5]);
}

void Screen_6006::onScreenShow()
{
    addDependency(this, &Screen_6006::Widget_Logic_Visibility_img_placeholder_WakeScreen, gm::csm::VIRTUALCONTROLS_ANDROID_LAUNCH_VISIBILITY);
    mBindingsIds[0] = Image_img_placeholder_WakeScreen.State.bind(gm::csm::VIRTUALCONTROLS_WAKESCREEN_ANDROID_BUTTON_STATE);
    addDependency(this, &Screen_6006::Widget_Logic_Visibility_virtualcontrols_1_0_4_wakeScreenExit_csm, gm::csm::VIRTUALCONTROLS_ANDROID_LAUNCH_VISIBILITY);
    mBindingsIds[1] = Label_virtualcontrols_1_2_0_2_LockoutOff_csm.State.bind(gm::csm::VIRTUALCONTROLS_POWERWINDOWLOCKOUT_STATE_INTERNAL);
    mBindingsIds[2] = Image_img_radio_button_off.State.bind(gm::csm::VIRTUALCONTROLS_POWERWINDOWLOCKOUT_STATE_INTERNAL);
    addDependency(this, &Screen_6006::Widget_Logic_Visibility_img_control_lockout, gm::csm::VIRTUALCONTROLS_CONTROL_PAGE_WHILE_DRIVING_INTERNAL);
    mBindingsIds[3] = Label_virtualcontrols_1_0_2_1_LockoutOn_csm.State.bind(gm::csm::VIRTUALCONTROLS_POWERWINDOWLOCKOUT_STATE_INTERNAL);
    addDependency(this, &Screen_6006::Widget_Logic_Visibility_img_close, gm::csm::VIRTUALCONTROLS_ANDROID_LAUNCH_VISIBILITY);
    addDependency(this, &Screen_6006::Widget_Logic_Visibility_img_close, gm::csm::VIRTUALCONTROLS_ANDROID_NOIVI_STATE);
    addDependency(this, &Screen_6006::Widget_Logic_Visibility_virtualcontrols_1_2_0_2_lockout_csm, gm::csm::VIRTUALCONTROLS_CONTROL_PAGE_WHILE_DRIVING_INTERNAL);
    mBindingsIds[4] = Label_virtualcontrols_0_0_detailsUnavailable_csm.Visibility.bind(gm::csm::VIRTUALCONTROLS_CONTROL_PAGE_WHILE_DRIVING_INTERNAL);
    addDependency(this, &Screen_6006::Widget_Logic_Visibility_grp_img_close, gm::csm::VIRTUALCONTROLS_ANDROID_LAUNCH_VISIBILITY);
    addDependency(this, &Screen_6006::Widget_Logic_Visibility_grp_img_close, gm::csm::VIRTUALCONTROLS_ANDROID_NOIVI_STATE);
    addDependency(this, &Screen_6006::Widget_Logic_Visibility_virtualcontrols_1_1_exitBtn_csm, gm::csm::VIRTUALCONTROLS_ANDROID_LAUNCH_VISIBILITY);
    addDependency(this, &Screen_6006::Widget_Logic_Visibility_virtualcontrols_1_1_exitBtn_csm, gm::csm::VIRTUALCONTROLS_ANDROID_NOIVI_STATE);
    mBindingsIds[5] = Image_img_radio_button_on.State.bind(gm::csm::VIRTUALCONTROLS_POWERWINDOWLOCKOUT_STATE_INTERNAL);
}


}//namespace csm
}//namespace gm
