#include "Screen_6076.h"

#include "RTOS_InternalData.h"
#include "WidgetData.h"
#include <cstdlib>

namespace gm
{
namespace csm
{


void Screen_6076::Widget_Logic_Visibility_img_close()
{
    const auto var_002 = gm::csm::VIRTUALCONTROLS_ANDROID_NOIVI_STATE.data();
    const auto var_001 = !(var_002);
    
    Image_img_close.Visibility = var_001;
}

void Screen_6076::Widget_Logic_Visibility_virtualcontrols_1_3_6_V_desc_csm()
{
    const auto var_004 = gm::csm::VIRTUALCONTROLS_CONTROL_PAGE_WHILE_DRIVING_INTERNAL.data();
    const auto var_003 = !(var_004);
    
    Label_virtualcontrols_1_3_6_V_desc_csm.Visibility = var_003;
}

void Screen_6076::onScreenHide()
{
    Image_img_radio_button_auto_hold_always_on.State.unBind(gm::csm::VIRTUALCONTROLS_AUTO_HOLD_STATE_INTERNAL, mBindingsIds[0]);
    Image_img_radio_button_auto_hold_on.State.unBind(gm::csm::VIRTUALCONTROLS_AUTO_HOLD_STATE_INTERNAL, mBindingsIds[1]);
    Label_virtualcontrols_1_3_HillOn_csm.State.unBind(gm::csm::VIRTUALCONTROLS_AUTO_HOLD_STATE_INTERNAL, mBindingsIds[2]);
    Image_img_radio_button_auto_hold_off.State.unBind(gm::csm::VIRTUALCONTROLS_AUTO_HOLD_STATE_INTERNAL, mBindingsIds[3]);
    Label_virtualcontrols_0_0_detailsUnavailable_csm.Visibility.unBind(gm::csm::VIRTUALCONTROLS_CONTROL_PAGE_WHILE_DRIVING_INTERNAL, mBindingsIds[4]);
    Label_virtualcontrols_1_4_0_1_DomeOnAlways_csm.State.unBind(gm::csm::VIRTUALCONTROLS_AUTO_HOLD_STATE_INTERNAL, mBindingsIds[5]);
    Label_virtualcontrols_1_3_HillOff_csm.State.unBind(gm::csm::VIRTUALCONTROLS_AUTO_HOLD_STATE_INTERNAL, mBindingsIds[6]);
}

void Screen_6076::onScreenShow()
{
    mBindingsIds[0] = Image_img_radio_button_auto_hold_always_on.State.bind(gm::csm::VIRTUALCONTROLS_AUTO_HOLD_STATE_INTERNAL);
    mBindingsIds[1] = Image_img_radio_button_auto_hold_on.State.bind(gm::csm::VIRTUALCONTROLS_AUTO_HOLD_STATE_INTERNAL);
    mBindingsIds[2] = Label_virtualcontrols_1_3_HillOn_csm.State.bind(gm::csm::VIRTUALCONTROLS_AUTO_HOLD_STATE_INTERNAL);
    mBindingsIds[3] = Image_img_radio_button_auto_hold_off.State.bind(gm::csm::VIRTUALCONTROLS_AUTO_HOLD_STATE_INTERNAL);
    mBindingsIds[4] = Label_virtualcontrols_0_0_detailsUnavailable_csm.Visibility.bind(gm::csm::VIRTUALCONTROLS_CONTROL_PAGE_WHILE_DRIVING_INTERNAL);
    addDependency(this, &Screen_6076::Widget_Logic_Visibility_img_close, gm::csm::VIRTUALCONTROLS_ANDROID_NOIVI_STATE);
    mBindingsIds[5] = Label_virtualcontrols_1_4_0_1_DomeOnAlways_csm.State.bind(gm::csm::VIRTUALCONTROLS_AUTO_HOLD_STATE_INTERNAL);
    mBindingsIds[6] = Label_virtualcontrols_1_3_HillOff_csm.State.bind(gm::csm::VIRTUALCONTROLS_AUTO_HOLD_STATE_INTERNAL);
    addDependency(this, &Screen_6076::Widget_Logic_Visibility_virtualcontrols_1_3_6_V_desc_csm, gm::csm::VIRTUALCONTROLS_CONTROL_PAGE_WHILE_DRIVING_INTERNAL);
}


}//namespace csm
}//namespace gm
