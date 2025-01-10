#include "Screen_6026.h"

#include "RTOS_InternalData.h"
#include "WidgetData.h"
#include <cstdlib>

namespace gm
{
namespace csm
{


void Screen_6026::Widget_Logic_Visibility_img_close()
{
    const auto var_005 = gm::csm::VIRTUALCONTROLS_ANDROID_NOIVI_STATE.data();
    const auto var_004 = !(var_005);
    
    const auto var_002 = gm::csm::VIRTUALCONTROLS_ANDROID_LAUNCH_VISIBILITY.data();
    const auto var_003 = var_004;
    const auto var_001 = var_002 && var_003;
    
    Image_img_close.Visibility = var_001;
}

void Screen_6026::Widget_Logic_Visibility_img_placeholder_WakeScreen()
{
    const auto var_010 = gm::csm::VIRTUALCONTROLS_ANDROID_LAUNCH_VISIBILITY.data();
    const auto var_009 = !(var_010);
    
    const auto var_012 = gm::csm::VIRTUALCONTROLS_ANDROID_NOIVI_STATE.data();
    const auto var_011 = !(var_012);
    
    const auto var_007 = var_009;
    const auto var_008 = var_011;
    const auto var_006 = var_007 && var_008;
    
    Image_img_placeholder_WakeScreen.Visibility = var_006;
}

void Screen_6026::Widget_Logic_Visibility_virtualcontrols_1_4_0_8_cargo_csm()
{
    const auto var_014 = gm::csm::VIRTUALCONTROLS_CONTROL_PAGE_WHILE_DRIVING_INTERNAL.data();
    const auto var_013 = !(var_014);
    
    Label_virtualcontrols_1_4_0_8_cargo_csm.Visibility = var_013;
}

void Screen_6026::Widget_Logic_Visibility_img_control_beams()
{
    const auto var_016 = gm::csm::VIRTUALCONTROLS_CONTROL_PAGE_WHILE_DRIVING_INTERNAL.data();
    const auto var_015 = !(var_016);
    
    Image_img_control_beams.Visibility = var_015;
}

void Screen_6026::onScreenHide()
{
    Image_img_placeholder_WakeScreen.State.unBind(gm::csm::VIRTUALCONTROLS_WAKESCREEN_ANDROID_BUTTON_STATE, mBindingsIds[0]);
    Label_virtualcontrols_0_0_detailsUnavailable_csm.Visibility.unBind(gm::csm::VIRTUALCONTROLS_CONTROL_PAGE_WHILE_DRIVING_INTERNAL, mBindingsIds[1]);
}

void Screen_6026::onScreenShow()
{
    addDependency(this, &Screen_6026::Widget_Logic_Visibility_img_close, gm::csm::VIRTUALCONTROLS_ANDROID_LAUNCH_VISIBILITY);
    addDependency(this, &Screen_6026::Widget_Logic_Visibility_img_close, gm::csm::VIRTUALCONTROLS_ANDROID_NOIVI_STATE);
    addDependency(this, &Screen_6026::Widget_Logic_Visibility_img_placeholder_WakeScreen, gm::csm::VIRTUALCONTROLS_ANDROID_LAUNCH_VISIBILITY);
    addDependency(this, &Screen_6026::Widget_Logic_Visibility_img_placeholder_WakeScreen, gm::csm::VIRTUALCONTROLS_ANDROID_NOIVI_STATE);
    mBindingsIds[0] = Image_img_placeholder_WakeScreen.State.bind(gm::csm::VIRTUALCONTROLS_WAKESCREEN_ANDROID_BUTTON_STATE);
    addDependency(this, &Screen_6026::Widget_Logic_Visibility_virtualcontrols_1_4_0_8_cargo_csm, gm::csm::VIRTUALCONTROLS_CONTROL_PAGE_WHILE_DRIVING_INTERNAL);
    addDependency(this, &Screen_6026::Widget_Logic_Visibility_img_control_beams, gm::csm::VIRTUALCONTROLS_CONTROL_PAGE_WHILE_DRIVING_INTERNAL);
    mBindingsIds[1] = Label_virtualcontrols_0_0_detailsUnavailable_csm.Visibility.bind(gm::csm::VIRTUALCONTROLS_CONTROL_PAGE_WHILE_DRIVING_INTERNAL);
}


}//namespace csm
}//namespace gm
