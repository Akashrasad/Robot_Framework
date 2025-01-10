#include "Screen_6092.h"

#include "RTOS_InternalData.h"
#include "WidgetData.h"
#include <cstdlib>

namespace gm
{
namespace csm
{


void Screen_6092::Widget_Logic_Visibility_apa_3_0_Exit_f_csm()
{
    const auto var_002 = gm::csm::VIRTUALCONTROLS_ANDROID_NOIVI_STATE.data();
    const auto var_001 = !(var_002);
    
    Label_apa_3_0_Exit_f_csm.Visibility = var_001;
}

void Screen_6092::Widget_Logic_Visibility_virtualcontrols_1_3_7_V_desc_csm()
{
    const auto var_004 = gm::csm::VIRTUALCONTROLS_CONTROL_PAGE_WHILE_DRIVING_INTERNAL.data();
    const auto var_003 = !(var_004);
    
    Label_virtualcontrols_1_3_7_V_desc_csm.Visibility = var_003;
}

void Screen_6092::Widget_Logic_Visibility_img_close()
{
    const auto var_006 = gm::csm::VIRTUALCONTROLS_ANDROID_NOIVI_STATE.data();
    const auto var_005 = !(var_006);
    
    Image_img_close.Visibility = var_005;
}

void Screen_6092::onScreenHide()
{
    Image_img_radio_button_laneKeepAssist_Off.State.unBind(gm::csm::VIRTUALCONTROLS_LANEKEEPASSIST_STATE_INTERNAL, mBindingsIds[0]);
    Label_virtualcontrols_1_4_0_1_DomeOff_csm.State.unBind(gm::csm::VIRTUALCONTROLS_LANEKEEPASSIST_STATE_INTERNAL, mBindingsIds[1]);
    Image_img_radio_button_laneKeepAssist_On.State.unBind(gm::csm::VIRTUALCONTROLS_LANEKEEPASSIST_STATE_INTERNAL, mBindingsIds[2]);
    Label_virtualcontrols_1_4_0_1_DomeOn_csm.State.unBind(gm::csm::VIRTUALCONTROLS_LANEKEEPASSIST_STATE_INTERNAL, mBindingsIds[3]);
    Label_virtualcontrols_0_0_detailsUnavailable_csm.Visibility.unBind(gm::csm::VIRTUALCONTROLS_CONTROL_PAGE_WHILE_DRIVING_INTERNAL, mBindingsIds[4]);
}

void Screen_6092::onScreenShow()
{
    mBindingsIds[0] = Image_img_radio_button_laneKeepAssist_Off.State.bind(gm::csm::VIRTUALCONTROLS_LANEKEEPASSIST_STATE_INTERNAL);
    addDependency(this, &Screen_6092::Widget_Logic_Visibility_apa_3_0_Exit_f_csm, gm::csm::VIRTUALCONTROLS_ANDROID_NOIVI_STATE);
    mBindingsIds[1] = Label_virtualcontrols_1_4_0_1_DomeOff_csm.State.bind(gm::csm::VIRTUALCONTROLS_LANEKEEPASSIST_STATE_INTERNAL);
    addDependency(this, &Screen_6092::Widget_Logic_Visibility_virtualcontrols_1_3_7_V_desc_csm, gm::csm::VIRTUALCONTROLS_CONTROL_PAGE_WHILE_DRIVING_INTERNAL);
    mBindingsIds[2] = Image_img_radio_button_laneKeepAssist_On.State.bind(gm::csm::VIRTUALCONTROLS_LANEKEEPASSIST_STATE_INTERNAL);
    mBindingsIds[3] = Label_virtualcontrols_1_4_0_1_DomeOn_csm.State.bind(gm::csm::VIRTUALCONTROLS_LANEKEEPASSIST_STATE_INTERNAL);
    mBindingsIds[4] = Label_virtualcontrols_0_0_detailsUnavailable_csm.Visibility.bind(gm::csm::VIRTUALCONTROLS_CONTROL_PAGE_WHILE_DRIVING_INTERNAL);
    addDependency(this, &Screen_6092::Widget_Logic_Visibility_img_close, gm::csm::VIRTUALCONTROLS_ANDROID_NOIVI_STATE);
}


}//namespace csm
}//namespace gm
