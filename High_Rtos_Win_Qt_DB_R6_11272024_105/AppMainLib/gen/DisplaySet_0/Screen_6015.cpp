#include "Screen_6015.h"

#include "RTOS_InternalData.h"
#include "WidgetData.h"
#include <cstdlib>

namespace gm
{
namespace csm
{


void Screen_6015::Widget_Logic_Visibility_img_close()
{
    const auto var_002 = gm::csm::VIRTUALCONTROLS_ANDROID_NOIVI_STATE.data();
    const auto var_001 = !(var_002);
    
    Image_img_close.Visibility = var_001;
}

void Screen_6015::Widget_Logic_Visibility_virtualcontrols_1_3_0_5_opd_csm()
{
    const auto var_004 = gm::csm::VIRTUALCONTROLS_CONTROL_PAGE_WHILE_DRIVING_INTERNAL.data();
    const auto var_003 = !(var_004);
    
    Label_virtualcontrols_1_3_0_5_opd_csm.Visibility = var_003;
}

void Screen_6015::Widget_Logic_Visibility_img_driving_pedal()
{
    const auto var_006 = gm::csm::VIRTUALCONTROLS_CONTROL_PAGE_WHILE_DRIVING_INTERNAL.data();
    const auto var_005 = !(var_006);
    
    Image_img_driving_pedal.Visibility = var_005;
}

void Screen_6015::Widget_Logic_Visibility_img_parking_divider()
{
    const auto var_008 = gm::csm::OnePedal_High.data();
    const auto var_009 = gm::csm::OnePedal_Enhanced.data();
    const auto var_007 = var_008 || var_009;
    
    Image_img_parking_divider.Visibility = var_007;
}

void Screen_6015::onScreenHide()
{
    Label_virtualcontrols_1_3_OPDHigh_csm.Visibility.unBind(gm::csm::OnePedal_High, mBindingsIds[0]);
    Label_virtualcontrols_1_3_OPDHigh_csm.State.unBind(gm::csm::VIRTUALCONTROLS_ONEPEDALDRIVE_STATE_INTERNAL, mBindingsIds[1]);
    Image_img_radio_button_on.State.unBind(gm::csm::VIRTUALCONTROLS_ONEPEDALDRIVE_STATE_INTERNAL, mBindingsIds[2]);
    Label_virtualcontrols_1_3_OPDOff_csm.State.unBind(gm::csm::VIRTUALCONTROLS_ONEPEDALDRIVE_STATE_INTERNAL, mBindingsIds[3]);
    Label_virtualcontrols_1_3_OPDHighplus_csm.Visibility.unBind(gm::csm::OnePedal_Enhanced, mBindingsIds[4]);
    Label_virtualcontrols_1_3_OPDHighplus_csm.State.unBind(gm::csm::VIRTUALCONTROLS_ONEPEDALDRIVE_STATE_INTERNAL, mBindingsIds[5]);
    Image_img_radio_button_off.State.unBind(gm::csm::VIRTUALCONTROLS_ONEPEDALDRIVE_STATE_INTERNAL, mBindingsIds[6]);
    Label_virtualcontrols_1_3_OPDOn_csm.State.unBind(gm::csm::VIRTUALCONTROLS_ONEPEDALDRIVE_STATE_INTERNAL, mBindingsIds[7]);
    Label_virtualcontrols_1_3_0_5_opd_csm.State.unBind(gm::csm::VIRTUALCONTROLS_ONEPEDALDRIVE_LABEL_STATE_INTERNAL, mBindingsIds[8]);
    Label_virtualcontrols_0_0_detailsUnavailable_csm.Visibility.unBind(gm::csm::VIRTUALCONTROLS_CONTROL_PAGE_WHILE_DRIVING_INTERNAL, mBindingsIds[9]);
    Image_img_radio_button_high.Visibility.unBind(gm::csm::OnePedal_High, mBindingsIds[10]);
    Image_img_radio_button_high.State.unBind(gm::csm::VIRTUALCONTROLS_ONEPEDALDRIVE_STATE_INTERNAL, mBindingsIds[11]);
    Image_img_radio_button_enhanced.Visibility.unBind(gm::csm::OnePedal_Enhanced, mBindingsIds[12]);
    Image_img_radio_button_enhanced.State.unBind(gm::csm::VIRTUALCONTROLS_ONEPEDALDRIVE_STATE_INTERNAL, mBindingsIds[13]);
}

void Screen_6015::onScreenShow()
{
    mBindingsIds[0] = Label_virtualcontrols_1_3_OPDHigh_csm.Visibility.bind(gm::csm::OnePedal_High);
    mBindingsIds[1] = Label_virtualcontrols_1_3_OPDHigh_csm.State.bind(gm::csm::VIRTUALCONTROLS_ONEPEDALDRIVE_STATE_INTERNAL);
    mBindingsIds[2] = Image_img_radio_button_on.State.bind(gm::csm::VIRTUALCONTROLS_ONEPEDALDRIVE_STATE_INTERNAL);
    mBindingsIds[3] = Label_virtualcontrols_1_3_OPDOff_csm.State.bind(gm::csm::VIRTUALCONTROLS_ONEPEDALDRIVE_STATE_INTERNAL);
    mBindingsIds[4] = Label_virtualcontrols_1_3_OPDHighplus_csm.Visibility.bind(gm::csm::OnePedal_Enhanced);
    mBindingsIds[5] = Label_virtualcontrols_1_3_OPDHighplus_csm.State.bind(gm::csm::VIRTUALCONTROLS_ONEPEDALDRIVE_STATE_INTERNAL);
    mBindingsIds[6] = Image_img_radio_button_off.State.bind(gm::csm::VIRTUALCONTROLS_ONEPEDALDRIVE_STATE_INTERNAL);
    mBindingsIds[7] = Label_virtualcontrols_1_3_OPDOn_csm.State.bind(gm::csm::VIRTUALCONTROLS_ONEPEDALDRIVE_STATE_INTERNAL);
    addDependency(this, &Screen_6015::Widget_Logic_Visibility_img_close, gm::csm::VIRTUALCONTROLS_ANDROID_NOIVI_STATE);
    addDependency(this, &Screen_6015::Widget_Logic_Visibility_virtualcontrols_1_3_0_5_opd_csm, gm::csm::VIRTUALCONTROLS_CONTROL_PAGE_WHILE_DRIVING_INTERNAL);
    mBindingsIds[8] = Label_virtualcontrols_1_3_0_5_opd_csm.State.bind(gm::csm::VIRTUALCONTROLS_ONEPEDALDRIVE_LABEL_STATE_INTERNAL);
    mBindingsIds[9] = Label_virtualcontrols_0_0_detailsUnavailable_csm.Visibility.bind(gm::csm::VIRTUALCONTROLS_CONTROL_PAGE_WHILE_DRIVING_INTERNAL);
    mBindingsIds[10] = Image_img_radio_button_high.Visibility.bind(gm::csm::OnePedal_High);
    mBindingsIds[11] = Image_img_radio_button_high.State.bind(gm::csm::VIRTUALCONTROLS_ONEPEDALDRIVE_STATE_INTERNAL);
    addDependency(this, &Screen_6015::Widget_Logic_Visibility_img_driving_pedal, gm::csm::VIRTUALCONTROLS_CONTROL_PAGE_WHILE_DRIVING_INTERNAL);
    mBindingsIds[12] = Image_img_radio_button_enhanced.Visibility.bind(gm::csm::OnePedal_Enhanced);
    mBindingsIds[13] = Image_img_radio_button_enhanced.State.bind(gm::csm::VIRTUALCONTROLS_ONEPEDALDRIVE_STATE_INTERNAL);
    addDependency(this, &Screen_6015::Widget_Logic_Visibility_img_parking_divider, gm::csm::OnePedal_High);
    addDependency(this, &Screen_6015::Widget_Logic_Visibility_img_parking_divider, gm::csm::OnePedal_Enhanced);
}


}//namespace csm
}//namespace gm
