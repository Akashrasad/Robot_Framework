#include "Screen_6016.h"

#include "RTOS_InternalData.h"
#include "WidgetData.h"
#include <cstdlib>

namespace gm
{
namespace csm
{


void Screen_6016::Widget_Logic_Visibility_virtualcontrols_1_3_0_3_park_csm()
{
    const auto var_002 = gm::csm::VIRTUALCONTROLS_CONTROL_PAGE_WHILE_DRIVING_INTERNAL.data();
    const auto var_001 = !(var_002);
    
    Label_virtualcontrols_1_3_0_3_park_csm.Visibility = var_001;
}

void Screen_6016::onScreenHide()
{
    Label_virtualcontrols_0_0_detailsUnavailable_csm.Visibility.unBind(gm::csm::VIRTUALCONTROLS_CONTROL_PAGE_WHILE_DRIVING_INTERNAL, mBindingsIds[0]);
    Label_virtualcontrols_1_0_4_wakeScreenExit_csm.Visibility.unBind(gm::csm::VIRTUALCONTROLS_ANDROID_NOIVI_STATE, mBindingsIds[1]);
    Image_img_radio_button_park_assist_on.State.unBind(gm::csm::VIRTUALCONTROLS_PARKASSIST_STATE_INTERNAL, mBindingsIds[2]);
    Label_virtualcontrols_1_3_0_3_ParkOn_csm.State.unBind(gm::csm::VIRTUALCONTROLS_PARKASSIST_STATE_INTERNAL, mBindingsIds[3]);
    Image_img_close.Visibility.unBind(gm::csm::VIRTUALCONTROLS_ANDROID_NOIVI_STATE, mBindingsIds[4]);
    Label_virtualcontrols_1_3_0_3_ParkOff_csm.State.unBind(gm::csm::VIRTUALCONTROLS_PARKASSIST_STATE_INTERNAL, mBindingsIds[5]);
    Image_img_radio_button_park_assist_off.State.unBind(gm::csm::VIRTUALCONTROLS_PARKASSIST_STATE_INTERNAL, mBindingsIds[6]);
}

void Screen_6016::onScreenShow()
{
    mBindingsIds[0] = Label_virtualcontrols_0_0_detailsUnavailable_csm.Visibility.bind(gm::csm::VIRTUALCONTROLS_CONTROL_PAGE_WHILE_DRIVING_INTERNAL);
    mBindingsIds[1] = Label_virtualcontrols_1_0_4_wakeScreenExit_csm.Visibility.bind(gm::csm::VIRTUALCONTROLS_ANDROID_NOIVI_STATE);
    mBindingsIds[2] = Image_img_radio_button_park_assist_on.State.bind(gm::csm::VIRTUALCONTROLS_PARKASSIST_STATE_INTERNAL);
    addDependency(this, &Screen_6016::Widget_Logic_Visibility_virtualcontrols_1_3_0_3_park_csm, gm::csm::VIRTUALCONTROLS_CONTROL_PAGE_WHILE_DRIVING_INTERNAL);
    mBindingsIds[3] = Label_virtualcontrols_1_3_0_3_ParkOn_csm.State.bind(gm::csm::VIRTUALCONTROLS_PARKASSIST_STATE_INTERNAL);
    mBindingsIds[4] = Image_img_close.Visibility.bind(gm::csm::VIRTUALCONTROLS_ANDROID_NOIVI_STATE);
    mBindingsIds[5] = Label_virtualcontrols_1_3_0_3_ParkOff_csm.State.bind(gm::csm::VIRTUALCONTROLS_PARKASSIST_STATE_INTERNAL);
    mBindingsIds[6] = Image_img_radio_button_park_assist_off.State.bind(gm::csm::VIRTUALCONTROLS_PARKASSIST_STATE_INTERNAL);
}


}//namespace csm
}//namespace gm
