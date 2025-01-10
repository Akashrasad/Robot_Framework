#include "Screen_6012.h"

#include "RTOS_InternalData.h"
#include "WidgetData.h"
#include <cstdlib>

namespace gm
{
namespace csm
{


void Screen_6012::Widget_Logic_Visibility_img_close()
{
    const auto var_002 = gm::csm::VIRTUALCONTROLS_ANDROID_NOIVI_STATE.data();
    const auto var_001 = !(var_002);
    
    Image_img_close.Visibility = var_001;
}

void Screen_6012::Widget_Logic_Visibility_img_traction_control()
{
    const auto var_004 = gm::csm::VIRTUALCONTROLS_CONTROL_PAGE_WHILE_DRIVING_INTERNAL.data();
    const auto var_003 = !(var_004);
    
    Image_img_traction_control.Visibility = var_003;
}

void Screen_6012::Widget_Logic_Visibility_virtualcontrols_1_3_0_1_traction_csm()
{
    const auto var_006 = gm::csm::VIRTUALCONTROLS_CONTROL_PAGE_WHILE_DRIVING_INTERNAL.data();
    const auto var_005 = !(var_006);
    
    Label_virtualcontrols_1_3_0_1_traction_csm.Visibility = var_005;
}

void Screen_6012::onScreenHide()
{
    Label_virtualcontrols_1_0_e_traction_esc_off_csm.State.unBind(gm::csm::VIRTUALCONTROLS_TRACTION_ESC_STATE_INTERNAL, mBindingsIds[0]);
    Label_virtualcontrols_1_0_e_traction_on_csm.State.unBind(gm::csm::VIRTUALCONTROLS_TRACTION_ESC_STATE_INTERNAL, mBindingsIds[1]);
    Image_img_radio_button_traction_Off.State.unBind(gm::csm::VIRTUALCONTROLS_TRACTION_ESC_STATE_INTERNAL, mBindingsIds[2]);
    Label_virtualcontrols_0_0_detailsUnavailable_csm.Visibility.unBind(gm::csm::VIRTUALCONTROLS_CONTROL_PAGE_WHILE_DRIVING_INTERNAL, mBindingsIds[3]);
    Label_virtualcontrols_1_3_0_1_1_TractionCompetitive_csm.Visibility.unBind(gm::csm::VIRTUALCONTROLS_TRACTION_COMPETITIVE_MODE_VISIBILITY, mBindingsIds[4]);
    Label_virtualcontrols_1_3_0_1_1_TractionCompetitive_csm.State.unBind(gm::csm::VIRTUALCONTROLS_TRACTION_ESC_STATE_INTERNAL, mBindingsIds[5]);
    Label_virtualcontrols_1_3_0_1_TractionOff_csm.State.unBind(gm::csm::VIRTUALCONTROLS_TRACTION_ESC_STATE_INTERNAL, mBindingsIds[6]);
    Image_img_radio_button_competitive_on.Visibility.unBind(gm::csm::VIRTUALCONTROLS_TRACTION_COMPETITIVE_MODE_VISIBILITY, mBindingsIds[7]);
    Image_img_radio_button_competitive_on.State.unBind(gm::csm::VIRTUALCONTROLS_TRACTION_ESC_STATE_INTERNAL, mBindingsIds[8]);
    Image_img_radio_button_traction_esc_on.State.unBind(gm::csm::VIRTUALCONTROLS_TRACTION_ESC_STATE_INTERNAL, mBindingsIds[9]);
    Image_img_competetive_mode_divider.Visibility.unBind(gm::csm::VIRTUALCONTROLS_TRACTION_COMPETITIVE_MODE_VISIBILITY, mBindingsIds[10]);
    Image_img_radio_button_traction_esc_off.State.unBind(gm::csm::VIRTUALCONTROLS_TRACTION_ESC_STATE_INTERNAL, mBindingsIds[11]);
}

void Screen_6012::onScreenShow()
{
    mBindingsIds[0] = Label_virtualcontrols_1_0_e_traction_esc_off_csm.State.bind(gm::csm::VIRTUALCONTROLS_TRACTION_ESC_STATE_INTERNAL);
    addDependency(this, &Screen_6012::Widget_Logic_Visibility_img_close, gm::csm::VIRTUALCONTROLS_ANDROID_NOIVI_STATE);
    mBindingsIds[1] = Label_virtualcontrols_1_0_e_traction_on_csm.State.bind(gm::csm::VIRTUALCONTROLS_TRACTION_ESC_STATE_INTERNAL);
    mBindingsIds[2] = Image_img_radio_button_traction_Off.State.bind(gm::csm::VIRTUALCONTROLS_TRACTION_ESC_STATE_INTERNAL);
    addDependency(this, &Screen_6012::Widget_Logic_Visibility_img_traction_control, gm::csm::VIRTUALCONTROLS_CONTROL_PAGE_WHILE_DRIVING_INTERNAL);
    mBindingsIds[3] = Label_virtualcontrols_0_0_detailsUnavailable_csm.Visibility.bind(gm::csm::VIRTUALCONTROLS_CONTROL_PAGE_WHILE_DRIVING_INTERNAL);
    mBindingsIds[4] = Label_virtualcontrols_1_3_0_1_1_TractionCompetitive_csm.Visibility.bind(gm::csm::VIRTUALCONTROLS_TRACTION_COMPETITIVE_MODE_VISIBILITY);
    mBindingsIds[5] = Label_virtualcontrols_1_3_0_1_1_TractionCompetitive_csm.State.bind(gm::csm::VIRTUALCONTROLS_TRACTION_ESC_STATE_INTERNAL);
    mBindingsIds[6] = Label_virtualcontrols_1_3_0_1_TractionOff_csm.State.bind(gm::csm::VIRTUALCONTROLS_TRACTION_ESC_STATE_INTERNAL);
    mBindingsIds[7] = Image_img_radio_button_competitive_on.Visibility.bind(gm::csm::VIRTUALCONTROLS_TRACTION_COMPETITIVE_MODE_VISIBILITY);
    mBindingsIds[8] = Image_img_radio_button_competitive_on.State.bind(gm::csm::VIRTUALCONTROLS_TRACTION_ESC_STATE_INTERNAL);
    addDependency(this, &Screen_6012::Widget_Logic_Visibility_virtualcontrols_1_3_0_1_traction_csm, gm::csm::VIRTUALCONTROLS_CONTROL_PAGE_WHILE_DRIVING_INTERNAL);
    mBindingsIds[9] = Image_img_radio_button_traction_esc_on.State.bind(gm::csm::VIRTUALCONTROLS_TRACTION_ESC_STATE_INTERNAL);
    mBindingsIds[10] = Image_img_competetive_mode_divider.Visibility.bind(gm::csm::VIRTUALCONTROLS_TRACTION_COMPETITIVE_MODE_VISIBILITY);
    mBindingsIds[11] = Image_img_radio_button_traction_esc_off.State.bind(gm::csm::VIRTUALCONTROLS_TRACTION_ESC_STATE_INTERNAL);
}


}//namespace csm
}//namespace gm
