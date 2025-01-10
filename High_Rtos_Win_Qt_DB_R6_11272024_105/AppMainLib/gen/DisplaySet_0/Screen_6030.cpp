#include "Screen_6030.h"

#include "RTOS_InternalData.h"
#include "WidgetData.h"
#include <cstdlib>

namespace gm
{
namespace csm
{


Screen_6030::Screen_6030():BindableScreenLogic("6030")
{
}

void Screen_6030::Widget_Logic_Visibility_apa_3_0_Exit_f_csm()
{
    const auto var_005 = gm::csm::VIRTUALCONTROLS_ANDROID_LAUNCH_VISIBILITY.data();
    const auto var_004 = !(var_005);
    
    const auto var_007 = gm::csm::VIRTUALCONTROLS_ANDROID_NOIVI_STATE.data();
    const auto var_006 = !(var_007);
    
    const auto var_002 = var_004;
    const auto var_003 = var_006;
    const auto var_001 = var_002 && var_003;
    
    Label_apa_3_0_Exit_f_csm.Visibility = var_001;
}

void Screen_6030::Widget_Logic_Visibility_img_placeholder_WakeScreen()
{
    const auto var_012 = gm::csm::VIRTUALCONTROLS_ANDROID_LAUNCH_VISIBILITY.data();
    const auto var_011 = !(var_012);
    
    const auto var_014 = gm::csm::VIRTUALCONTROLS_ANDROID_NOIVI_STATE.data();
    const auto var_013 = !(var_014);
    
    const auto var_009 = var_011;
    const auto var_010 = var_013;
    const auto var_008 = var_009 && var_010;
    
    Image_img_placeholder_WakeScreen.Visibility = var_008;
}

void Screen_6030::Widget_Logic_Visibility_img_close()
{
    const auto var_019 = gm::csm::VIRTUALCONTROLS_ANDROID_NOIVI_STATE.data();
    const auto var_018 = !(var_019);
    
    const auto var_016 = gm::csm::VIRTUALCONTROLS_ANDROID_LAUNCH_VISIBILITY.data();
    const auto var_017 = var_018;
    const auto var_015 = var_016 && var_017;
    
    Image_img_close.Visibility = var_015;
}

void Screen_6030::onScreenHide()
{
    Image_img_placeholder_WakeScreen.State.unBind(gm::csm::VIRTUALCONTROLS_WAKESCREEN_ANDROID_BUTTON_STATE, mBindingsIds[0]);
}

void Screen_6030::onScreenShow()
{
    addDependency(this, &Screen_6030::Widget_Logic_Visibility_apa_3_0_Exit_f_csm, gm::csm::VIRTUALCONTROLS_ANDROID_LAUNCH_VISIBILITY);
    addDependency(this, &Screen_6030::Widget_Logic_Visibility_apa_3_0_Exit_f_csm, gm::csm::VIRTUALCONTROLS_ANDROID_NOIVI_STATE);
    addDependency(this, &Screen_6030::Widget_Logic_Visibility_img_placeholder_WakeScreen, gm::csm::VIRTUALCONTROLS_ANDROID_LAUNCH_VISIBILITY);
    addDependency(this, &Screen_6030::Widget_Logic_Visibility_img_placeholder_WakeScreen, gm::csm::VIRTUALCONTROLS_ANDROID_NOIVI_STATE);
    mBindingsIds[0] = Image_img_placeholder_WakeScreen.State.bind(gm::csm::VIRTUALCONTROLS_WAKESCREEN_ANDROID_BUTTON_STATE);
    addDependency(this, &Screen_6030::Widget_Logic_Visibility_img_close, gm::csm::VIRTUALCONTROLS_ANDROID_LAUNCH_VISIBILITY);
    addDependency(this, &Screen_6030::Widget_Logic_Visibility_img_close, gm::csm::VIRTUALCONTROLS_ANDROID_NOIVI_STATE);
}


}//namespace csm
}//namespace gm
