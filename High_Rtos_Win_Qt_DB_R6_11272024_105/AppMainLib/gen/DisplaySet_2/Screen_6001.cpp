#include "Screen_6001.h"

#include "RTOS_InternalData.h"
#include "WidgetData.h"
#include <cstdlib>

namespace gm
{
namespace csm
{


void Screen_6001::Widget_Logic_Visibility_img_placeholder_WakeScreen()
{
    const auto var_002 = gm::csm::VIRTUALCONTROLS_ANDROID_LAUNCH_VISIBILITY.data();
    const auto var_001 = !(var_002);
    
    Image_img_placeholder_WakeScreen.Visibility = var_001;
}

void Screen_6001::Widget_Logic_Visibility_virtualcontrols_1_0_4_wakeScreenExit_csm()
{
    const auto var_004 = gm::csm::VIRTUALCONTROLS_ANDROID_LAUNCH_VISIBILITY.data();
    const auto var_005 = !gm::csm::VIRTUALCONTROLS_ANDROID_NOIVI_STATE.data();
    const auto var_003 = var_004 && var_005;
    
    Label_virtualcontrols_1_0_4_wakeScreenExit_csm.Visibility = var_003;
}

void Screen_6001::Widget_Logic_Visibility_img_close()
{
    const auto var_007 = gm::csm::VIRTUALCONTROLS_ANDROID_LAUNCH_VISIBILITY.data();
    const auto var_008 = !gm::csm::VIRTUALCONTROLS_ANDROID_NOIVI_STATE.data();
    const auto var_006 = var_007 && var_008;
    
    Image_img_close.Visibility = var_006;
}

void Screen_6001::onScreenHide()
{
    Image_img_placeholder_WakeScreen.State.unBind(gm::csm::VIRTUALCONTROLS_WAKESCREEN_ANDROID_BUTTON_STATE, mBindingsIds[0]);
    Image_img_control_progress_bar_pointer.Visibility.unBind(gm::csm::VIRTUALCONTROLS_DATA_SCROLLPAGE_INDICATOR1, mBindingsIds[1]);
    Image_img_control_progress_bar_pointer.State.unBind(gm::csm::VIRTUALCONTROLS_DATA_SCROLLPAGE_INDICATOR_STATE1, mBindingsIds[2]);
    Image_img_control_progress_bar_pointer2.Visibility.unBind(gm::csm::VIRTUALCONTROLS_DATA_SCROLLPAGE_INDICATOR2, mBindingsIds[3]);
    Image_img_control_progress_bar_pointer2.State.unBind(gm::csm::VIRTUALCONTROLS_DATA_SCROLLPAGE_INDICATOR_STATE2, mBindingsIds[4]);
    Image_img_control_progress_bar_pointer3.Visibility.unBind(gm::csm::VIRTUALCONTROLS_DATA_SCROLLPAGE_INDICATOR3, mBindingsIds[5]);
    Image_img_control_progress_bar_pointer3.State.unBind(gm::csm::VIRTUALCONTROLS_DATA_SCROLLPAGE_INDICATOR_STATE3, mBindingsIds[6]);
}

void Screen_6001::onScreenShow()
{
    addDependency(this, &Screen_6001::Widget_Logic_Visibility_img_placeholder_WakeScreen, gm::csm::VIRTUALCONTROLS_ANDROID_LAUNCH_VISIBILITY);
    mBindingsIds[0] = Image_img_placeholder_WakeScreen.State.bind(gm::csm::VIRTUALCONTROLS_WAKESCREEN_ANDROID_BUTTON_STATE);
    mBindingsIds[1] = Image_img_control_progress_bar_pointer.Visibility.bind(gm::csm::VIRTUALCONTROLS_DATA_SCROLLPAGE_INDICATOR1);
    mBindingsIds[2] = Image_img_control_progress_bar_pointer.State.bind(gm::csm::VIRTUALCONTROLS_DATA_SCROLLPAGE_INDICATOR_STATE1);
    addDependency(this, &Screen_6001::Widget_Logic_Visibility_virtualcontrols_1_0_4_wakeScreenExit_csm, gm::csm::VIRTUALCONTROLS_ANDROID_LAUNCH_VISIBILITY);
    addDependency(this, &Screen_6001::Widget_Logic_Visibility_virtualcontrols_1_0_4_wakeScreenExit_csm, gm::csm::VIRTUALCONTROLS_ANDROID_NOIVI_STATE);
    addDependency(this, &Screen_6001::Widget_Logic_Visibility_img_close, gm::csm::VIRTUALCONTROLS_ANDROID_LAUNCH_VISIBILITY);
    addDependency(this, &Screen_6001::Widget_Logic_Visibility_img_close, gm::csm::VIRTUALCONTROLS_ANDROID_NOIVI_STATE);
    mBindingsIds[3] = Image_img_control_progress_bar_pointer2.Visibility.bind(gm::csm::VIRTUALCONTROLS_DATA_SCROLLPAGE_INDICATOR2);
    mBindingsIds[4] = Image_img_control_progress_bar_pointer2.State.bind(gm::csm::VIRTUALCONTROLS_DATA_SCROLLPAGE_INDICATOR_STATE2);
    mBindingsIds[5] = Image_img_control_progress_bar_pointer3.Visibility.bind(gm::csm::VIRTUALCONTROLS_DATA_SCROLLPAGE_INDICATOR3);
    mBindingsIds[6] = Image_img_control_progress_bar_pointer3.State.bind(gm::csm::VIRTUALCONTROLS_DATA_SCROLLPAGE_INDICATOR_STATE3);
}


}//namespace csm
}//namespace gm
