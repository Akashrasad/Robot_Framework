#include "Screen_6074.h"

#include "RTOS_InternalData.h"
#include "WidgetData.h"
#include <cstdlib>

namespace gm
{
namespace csm
{


void Screen_6074::Widget_Logic_Visibility_virtualcontrols_1_3_1_holca_csm()
{
    const auto var_002 = gm::csm::VIRTUALCONTROLS_CONTROL_PAGE_WHILE_DRIVING_INTERNAL.data();
    const auto var_001 = !(var_002);
    
    Label_virtualcontrols_1_3_1_holca_csm.Visibility = var_001;
}

void Screen_6074::Widget_Logic_Visibility_img_close()
{
    const auto var_004 = gm::csm::VIRTUALCONTROLS_ANDROID_NOIVI_STATE.data();
    const auto var_003 = !(var_004);
    
    GroupImage_img_close.Visibility = var_003;
}

void Screen_6074::onScreenHide()
{
    Label_virtualcontrols_1_3_ParkAssistOn_csm.State.unBind(gm::csm::VIRTUALCONTROLS_LANECENTERINGASSIST_STATE_INTERNAL, mBindingsIds[0]);
    Label_virtualcontrols_0_0_detailsUnavailable_csm.Visibility.unBind(gm::csm::VIRTUALCONTROLS_CONTROL_PAGE_WHILE_DRIVING_INTERNAL, mBindingsIds[1]);
    Image_img_radio_button_Off.State.unBind(gm::csm::VIRTUALCONTROLS_LANECENTERINGASSIST_STATE_INTERNAL, mBindingsIds[2]);
    Label_virtualcontrols_1_3_ParkAssistOff_csm.State.unBind(gm::csm::VIRTUALCONTROLS_LANECENTERINGASSIST_STATE_INTERNAL, mBindingsIds[3]);
    Image_img_radio_button_on.State.unBind(gm::csm::VIRTUALCONTROLS_LANECENTERINGASSIST_STATE_INTERNAL, mBindingsIds[4]);
}

void Screen_6074::onScreenShow()
{
    mBindingsIds[0] = Label_virtualcontrols_1_3_ParkAssistOn_csm.State.bind(gm::csm::VIRTUALCONTROLS_LANECENTERINGASSIST_STATE_INTERNAL);
    addDependency(this, &Screen_6074::Widget_Logic_Visibility_virtualcontrols_1_3_1_holca_csm, gm::csm::VIRTUALCONTROLS_CONTROL_PAGE_WHILE_DRIVING_INTERNAL);
    mBindingsIds[1] = Label_virtualcontrols_0_0_detailsUnavailable_csm.Visibility.bind(gm::csm::VIRTUALCONTROLS_CONTROL_PAGE_WHILE_DRIVING_INTERNAL);
    mBindingsIds[2] = Image_img_radio_button_Off.State.bind(gm::csm::VIRTUALCONTROLS_LANECENTERINGASSIST_STATE_INTERNAL);
    mBindingsIds[3] = Label_virtualcontrols_1_3_ParkAssistOff_csm.State.bind(gm::csm::VIRTUALCONTROLS_LANECENTERINGASSIST_STATE_INTERNAL);
    mBindingsIds[4] = Image_img_radio_button_on.State.bind(gm::csm::VIRTUALCONTROLS_LANECENTERINGASSIST_STATE_INTERNAL);
    addDependency(this, &Screen_6074::Widget_Logic_Visibility_img_close, gm::csm::VIRTUALCONTROLS_ANDROID_NOIVI_STATE);
}


}//namespace csm
}//namespace gm
