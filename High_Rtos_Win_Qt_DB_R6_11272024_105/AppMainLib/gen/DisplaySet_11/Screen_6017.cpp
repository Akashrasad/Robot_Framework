#include "Screen_6017.h"

#include "RTOS_InternalData.h"
#include "WidgetData.h"
#include <cstdlib>

namespace gm
{
namespace csm
{


void Screen_6017::Widget_Logic_Visibility_img_close()
{
    const auto var_005 = gm::csm::VIRTUALCONTROLS_ANDROID_NOIVI_STATE.data();
    const auto var_004 = !(var_005);
    
    const auto var_002 = gm::csm::VIRTUALCONTROLS_ANDROID_LAUNCH_VISIBILITY.data();
    const auto var_003 = var_004;
    const auto var_001 = var_002 && var_003;
    
    Image_img_close.Visibility = var_001;
}

void Screen_6017::Widget_Logic_Visibility_img_settings_selector()
{
    const auto var_010 = gm::csm::VIRTUALCONTROLS_ANDROID_NOIVI_STATE.data();
    const auto var_009 = !(var_010);
    
    const auto var_007 = gm::csm::VIRTUALCONTROLS_ANDROID_LAUNCH_VISIBILITY.data();
    const auto var_008 = var_009;
    const auto var_006 = var_007 && var_008;
    
    Image_img_settings_selector.Visibility = var_006;
}

void Screen_6017::Widget_Logic_Visibility_img_placeholder_WakeScreen()
{
    const auto var_015 = gm::csm::VIRTUALCONTROLS_ANDROID_LAUNCH_VISIBILITY.data();
    const auto var_014 = !(var_015);
    
    const auto var_017 = gm::csm::VIRTUALCONTROLS_ANDROID_NOIVI_STATE.data();
    const auto var_016 = !(var_017);
    
    const auto var_012 = var_014;
    const auto var_013 = var_016;
    const auto var_011 = var_012 && var_013;
    
    Image_img_placeholder_WakeScreen.Visibility = var_011;
}

void Screen_6017::onScreenHide()
{
    Image_img_placeholder_WakeScreen.State.unBind(gm::csm::VIRTUALCONTROLS_WAKESCREEN_ANDROID_BUTTON_STATE, mBindingsIds[0]);
}

void Screen_6017::onScreenShow()
{
    addDependency(this, &Screen_6017::Widget_Logic_Visibility_img_close, gm::csm::VIRTUALCONTROLS_ANDROID_LAUNCH_VISIBILITY);
    addDependency(this, &Screen_6017::Widget_Logic_Visibility_img_close, gm::csm::VIRTUALCONTROLS_ANDROID_NOIVI_STATE);
    addDependency(this, &Screen_6017::Widget_Logic_Visibility_img_settings_selector, gm::csm::VIRTUALCONTROLS_ANDROID_LAUNCH_VISIBILITY);
    addDependency(this, &Screen_6017::Widget_Logic_Visibility_img_settings_selector, gm::csm::VIRTUALCONTROLS_ANDROID_NOIVI_STATE);
    addDependency(this, &Screen_6017::Widget_Logic_Visibility_img_placeholder_WakeScreen, gm::csm::VIRTUALCONTROLS_ANDROID_LAUNCH_VISIBILITY);
    addDependency(this, &Screen_6017::Widget_Logic_Visibility_img_placeholder_WakeScreen, gm::csm::VIRTUALCONTROLS_ANDROID_NOIVI_STATE);
    mBindingsIds[0] = Image_img_placeholder_WakeScreen.State.bind(gm::csm::VIRTUALCONTROLS_WAKESCREEN_ANDROID_BUTTON_STATE);
}


}//namespace csm
}//namespace gm
