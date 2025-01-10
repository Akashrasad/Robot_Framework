#include "Screen_6027.h"

#include "RTOS_InternalData.h"
#include "WidgetData.h"
#include <cstdlib>

namespace gm
{
namespace csm
{


void Screen_6027::Widget_Logic_Visibility_virtualcontrols_1_4_0_9_task_csm()
{
    const auto var_002 = gm::csm::VIRTUALCONTROLS_CONTROL_PAGE_WHILE_DRIVING_INTERNAL.data();
    const auto var_001 = !(var_002);
    
    Label_virtualcontrols_1_4_0_9_task_csm.Visibility = var_001;
}

void Screen_6027::Widget_Logic_Visibility_img_placeholder_WakeScreen()
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

void Screen_6027::Widget_Logic_Visibility_img_control_task()
{
    const auto var_011 = gm::csm::VIRTUALCONTROLS_CONTROL_PAGE_WHILE_DRIVING_INTERNAL.data();
    const auto var_010 = !(var_011);
    
    Image_img_control_task.Visibility = var_010;
}

void Screen_6027::Widget_Logic_Visibility_img_close()
{
    const auto var_016 = gm::csm::VIRTUALCONTROLS_ANDROID_NOIVI_STATE.data();
    const auto var_015 = !(var_016);
    
    const auto var_013 = gm::csm::VIRTUALCONTROLS_ANDROID_LAUNCH_VISIBILITY.data();
    const auto var_014 = var_015;
    const auto var_012 = var_013 && var_014;
    
    Image_img_close.Visibility = var_012;
}

void Screen_6027::onScreenHide()
{
    Label_virtualcontrols_1_4_0_9_TaskLeft_csm.State.unBind(gm::csm::VIRTUALCONTROLS_TASKLIGHT_LEFT_STATE_INTERNAL, mBindingsIds[0]);
    Image_img_check_box_Right_On.State.unBind(gm::csm::VIRTUALCONTROLS_TASKLIGHT_RIGHT_STATE_INTERNAL, mBindingsIds[1]);
    Label_virtualcontrols_0_0_detailsUnavailable_csm.Visibility.unBind(gm::csm::VIRTUALCONTROLS_CONTROL_PAGE_WHILE_DRIVING_INTERNAL, mBindingsIds[2]);
    Image_img_placeholder_WakeScreen.State.unBind(gm::csm::VIRTUALCONTROLS_WAKESCREEN_ANDROID_BUTTON_STATE, mBindingsIds[3]);
    Image_img_check_box_left_On.State.unBind(gm::csm::VIRTUALCONTROLS_TASKLIGHT_LEFT_STATE_INTERNAL, mBindingsIds[4]);
    Label_virtualcontrols_1_4_0_9_task_right_csm.State.unBind(gm::csm::VIRTUALCONTROLS_TASKLIGHT_RIGHT_STATE_INTERNAL, mBindingsIds[5]);
}

void Screen_6027::onScreenShow()
{
    mBindingsIds[0] = Label_virtualcontrols_1_4_0_9_TaskLeft_csm.State.bind(gm::csm::VIRTUALCONTROLS_TASKLIGHT_LEFT_STATE_INTERNAL);
    mBindingsIds[1] = Image_img_check_box_Right_On.State.bind(gm::csm::VIRTUALCONTROLS_TASKLIGHT_RIGHT_STATE_INTERNAL);
    addDependency(this, &Screen_6027::Widget_Logic_Visibility_virtualcontrols_1_4_0_9_task_csm, gm::csm::VIRTUALCONTROLS_CONTROL_PAGE_WHILE_DRIVING_INTERNAL);
    mBindingsIds[2] = Label_virtualcontrols_0_0_detailsUnavailable_csm.Visibility.bind(gm::csm::VIRTUALCONTROLS_CONTROL_PAGE_WHILE_DRIVING_INTERNAL);
    addDependency(this, &Screen_6027::Widget_Logic_Visibility_img_placeholder_WakeScreen, gm::csm::VIRTUALCONTROLS_ANDROID_LAUNCH_VISIBILITY);
    addDependency(this, &Screen_6027::Widget_Logic_Visibility_img_placeholder_WakeScreen, gm::csm::VIRTUALCONTROLS_ANDROID_NOIVI_STATE);
    mBindingsIds[3] = Image_img_placeholder_WakeScreen.State.bind(gm::csm::VIRTUALCONTROLS_WAKESCREEN_ANDROID_BUTTON_STATE);
    addDependency(this, &Screen_6027::Widget_Logic_Visibility_img_control_task, gm::csm::VIRTUALCONTROLS_CONTROL_PAGE_WHILE_DRIVING_INTERNAL);
    addDependency(this, &Screen_6027::Widget_Logic_Visibility_img_close, gm::csm::VIRTUALCONTROLS_ANDROID_LAUNCH_VISIBILITY);
    addDependency(this, &Screen_6027::Widget_Logic_Visibility_img_close, gm::csm::VIRTUALCONTROLS_ANDROID_NOIVI_STATE);
    mBindingsIds[4] = Image_img_check_box_left_On.State.bind(gm::csm::VIRTUALCONTROLS_TASKLIGHT_LEFT_STATE_INTERNAL);
    mBindingsIds[5] = Label_virtualcontrols_1_4_0_9_task_right_csm.State.bind(gm::csm::VIRTUALCONTROLS_TASKLIGHT_RIGHT_STATE_INTERNAL);
}


}//namespace csm
}//namespace gm
