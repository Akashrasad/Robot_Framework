#include "Screen_6042.h"

#include "RTOS_InternalData.h"
#include "WidgetData.h"
#include <cstdlib>

namespace gm
{
namespace csm
{


void Screen_6042::Widget_Logic_Visibility_img_placeholder_WakeScreen()
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

void Screen_6042::Widget_Logic_Visibility_virtualcontrols_1_0_4_wakeScreenExit_csm()
{
    const auto var_012 = gm::csm::VIRTUALCONTROLS_ANDROID_NOIVI_STATE.data();
    const auto var_011 = !(var_012);
    
    const auto var_009 = gm::csm::VIRTUALCONTROLS_ANDROID_LAUNCH_VISIBILITY.data();
    const auto var_010 = var_011;
    const auto var_008 = var_009 && var_010;
    
    Label_virtualcontrols_1_0_4_wakeScreenExit_csm.Visibility = var_008;
}

void Screen_6042::Widget_Logic_Visibility_img_close()
{
    const auto var_017 = gm::csm::VIRTUALCONTROLS_ANDROID_NOIVI_STATE.data();
    const auto var_016 = !(var_017);
    
    const auto var_014 = gm::csm::VIRTUALCONTROLS_ANDROID_LAUNCH_VISIBILITY.data();
    const auto var_015 = var_016;
    const auto var_013 = var_014 && var_015;
    
    Image_img_close.Visibility = var_013;
}

void Screen_6042::Widget_Logic_Visibility_apa_3_0_Exit_f_csm()
{
    const auto var_022 = gm::csm::VIRTUALCONTROLS_ANDROID_LAUNCH_VISIBILITY.data();
    const auto var_021 = !(var_022);
    
    const auto var_024 = gm::csm::VIRTUALCONTROLS_ANDROID_NOIVI_STATE.data();
    const auto var_023 = !(var_024);
    
    const auto var_019 = var_021;
    const auto var_020 = var_023;
    const auto var_018 = var_019 && var_020;
    
    Label_apa_3_0_Exit_f_csm.Visibility = var_018;
}

void Screen_6042::onScreenHide()
{
    Image_img_check_box_auto_close.State.unBind(gm::csm::VIRTUALCONTROLS_UGDO_OPTIONS_AUTO_CLOSE, mBindingsIds[0]);
    Image_img_check_box_auto_open.State.unBind(gm::csm::VIRTUALCONTROLS_UGDO_OPTIONS_AUTO_OPEN, mBindingsIds[1]);
    Label_virtualcontrols_1_5_6_3_UGDOAutoClose_csm.State.unBind(gm::csm::VIRTUALCONTROLS_UGDO_OPTIONS_AUTO_CLOSE, mBindingsIds[2]);
    List_6042_ics_vc_options_auto_selected_list.Visibility.unBind(gm::csm::VIRTUALCONTROLS_UGDO_DISTANCE_FEET_LIST_VISIBILITY, mBindingsIds[3]);
    Label_virtualcontrols_1_5_6_3_UGDOAutoOpen_csm.State.unBind(gm::csm::VIRTUALCONTROLS_UGDO_OPTIONS_AUTO_OPEN, mBindingsIds[4]);
    Label_virtualcontrols_1_5_3_2_UGDORange_csm.Visibility.unBind(gm::csm::VIRTUALCONTROLS_UGDO_DISTANCE_FEET_LIST_VISIBILITY, mBindingsIds[5]);
}

void Screen_6042::onScreenShow()
{
    mBindingsIds[0] = Image_img_check_box_auto_close.State.bind(gm::csm::VIRTUALCONTROLS_UGDO_OPTIONS_AUTO_CLOSE);
    mBindingsIds[1] = Image_img_check_box_auto_open.State.bind(gm::csm::VIRTUALCONTROLS_UGDO_OPTIONS_AUTO_OPEN);
    mBindingsIds[2] = Label_virtualcontrols_1_5_6_3_UGDOAutoClose_csm.State.bind(gm::csm::VIRTUALCONTROLS_UGDO_OPTIONS_AUTO_CLOSE);
    mBindingsIds[3] = List_6042_ics_vc_options_auto_selected_list.Visibility.bind(gm::csm::VIRTUALCONTROLS_UGDO_DISTANCE_FEET_LIST_VISIBILITY);
    addDependency(this, &Screen_6042::Widget_Logic_Visibility_img_placeholder_WakeScreen, gm::csm::VIRTUALCONTROLS_ANDROID_LAUNCH_VISIBILITY);
    addDependency(this, &Screen_6042::Widget_Logic_Visibility_img_placeholder_WakeScreen, gm::csm::VIRTUALCONTROLS_ANDROID_NOIVI_STATE);
    mBindingsIds[4] = Label_virtualcontrols_1_5_6_3_UGDOAutoOpen_csm.State.bind(gm::csm::VIRTUALCONTROLS_UGDO_OPTIONS_AUTO_OPEN);
    addDependency(this, &Screen_6042::Widget_Logic_Visibility_virtualcontrols_1_0_4_wakeScreenExit_csm, gm::csm::VIRTUALCONTROLS_ANDROID_LAUNCH_VISIBILITY);
    addDependency(this, &Screen_6042::Widget_Logic_Visibility_virtualcontrols_1_0_4_wakeScreenExit_csm, gm::csm::VIRTUALCONTROLS_ANDROID_NOIVI_STATE);
    mBindingsIds[5] = Label_virtualcontrols_1_5_3_2_UGDORange_csm.Visibility.bind(gm::csm::VIRTUALCONTROLS_UGDO_DISTANCE_FEET_LIST_VISIBILITY);
    addDependency(this, &Screen_6042::Widget_Logic_Visibility_img_close, gm::csm::VIRTUALCONTROLS_ANDROID_LAUNCH_VISIBILITY);
    addDependency(this, &Screen_6042::Widget_Logic_Visibility_img_close, gm::csm::VIRTUALCONTROLS_ANDROID_NOIVI_STATE);
    addDependency(this, &Screen_6042::Widget_Logic_Visibility_apa_3_0_Exit_f_csm, gm::csm::VIRTUALCONTROLS_ANDROID_LAUNCH_VISIBILITY);
    addDependency(this, &Screen_6042::Widget_Logic_Visibility_apa_3_0_Exit_f_csm, gm::csm::VIRTUALCONTROLS_ANDROID_NOIVI_STATE);
}


}//namespace csm
}//namespace gm
