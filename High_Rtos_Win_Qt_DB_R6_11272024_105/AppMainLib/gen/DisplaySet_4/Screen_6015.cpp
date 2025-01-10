#include "Screen_6015.h"

#include "RTOS_CustomDataPool.h"
#include "RTOS_InternalData.h"
#include "WidgetData.h"
#include <cstdlib>

namespace gm
{
namespace csm
{


void Screen_6015::Widget_Logic_Visibility_virtualcontrols_1_3_OPDHighplus_csm()
{
    const auto var_005 = !gm::csm::VIRTUALCONTROLS_ONEPEDALDRIVE_CUSTOMIZATION_AVAILABILITYFLAG3.data();
    const auto var_004 = !(var_005);
    
    const auto var_002 = var_004;
    const auto var_003 = gm::csm::VIRTUALCONTROLS_ONEPEDALDRIVE_CUSTOMIZATION_AVAILABILITYFLAG4.data();
    const auto var_001 = var_002 && var_003;
    
    Label_virtualcontrols_1_3_OPDHighplus_csm.Visibility = var_001;
}

void Screen_6015::Widget_Logic_Visibility_img_close()
{
    const auto var_007 = gm::csm::VIRTUALCONTROLS_ANDROID_NOIVI_STATE.data();
    const auto var_006 = !(var_007);
    
    Image_img_close.Visibility = var_006;
}

void Screen_6015::Widget_Logic_Visibility_virtualcontrols_1_3_0_5_opd_csm()
{
    const auto var_009 = gm::csm::VIRTUALCONTROLS_CONTROL_PAGE_WHILE_DRIVING_INTERNAL.data();
    const auto var_008 = !(var_009);
    
    Label_virtualcontrols_1_3_0_5_opd_csm.Visibility = var_008;
}

void Screen_6015::Widget_Logic_Visibility_img_driving_pedal()
{
    const auto var_011 = gm::csm::VIRTUALCONTROLS_CONTROL_PAGE_WHILE_DRIVING_INTERNAL.data();
    const auto var_010 = !(var_011);
    
    Image_img_driving_pedal.Visibility = var_010;
}

void Screen_6015::Widget_Logic_Visibility_img_radio_button_enhanced()
{
    const auto var_016 = !gm::csm::VIRTUALCONTROLS_ONEPEDALDRIVE_CUSTOMIZATION_AVAILABILITYFLAG3.data();
    const auto var_015 = !(var_016);
    
    const auto var_013 = var_015;
    const auto var_014 = gm::csm::VIRTUALCONTROLS_ONEPEDALDRIVE_CUSTOMIZATION_AVAILABILITYFLAG4.data();
    const auto var_012 = var_013 && var_014;
    
    Image_img_radio_button_enhanced.Visibility = var_012;
}

void Screen_6015::Widget_Logic_Visibility_img_parking_divider()
{
    const auto var_018 = gm::csm::VIRTUALCONTROLS_ONEPEDALDRIVE_CUSTOMIZATION_AVAILABILITYFLAG3.data();
    const auto var_019 = gm::csm::VIRTUALCONTROLS_ONEPEDALDRIVE_CUSTOMIZATION_AVAILABILITYFLAG4.data();
    const auto var_017 = var_018 || var_019;
    
    Image_img_parking_divider.Visibility = var_017;
}

void Screen_6015::onScreenHide()
{
    Label_virtualcontrols_1_3_OPDHigh_csm.Visibility.unBind(gm::csm::VIRTUALCONTROLS_ONEPEDALDRIVE_CUSTOMIZATION_AVAILABILITYFLAG3, mBindingsIds[0]);
    Label_virtualcontrols_1_3_OPDHigh_csm.State.unBind(gm::csm::VIRTUALCONTROLS_ONEPEDALDRIVE_STATE_INTERNAL, mBindingsIds[1]);
    Image_img_radio_button_on.State.unBind(gm::csm::VIRTUALCONTROLS_ONEPEDALDRIVE_STATE_INTERNAL, mBindingsIds[2]);
    Label_virtualcontrols_1_3_OPDOff_csm.State.unBind(gm::csm::VIRTUALCONTROLS_ONEPEDALDRIVE_STATE_INTERNAL, mBindingsIds[3]);
    Label_virtualcontrols_1_3_OPDHighplus_csm.State.unBind(gm::csm::VIRTUALCONTROLS_ONEPEDALDRIVE_STATE_INTERNAL, mBindingsIds[4]);
    Image_img_radio_button_off.State.unBind(gm::csm::VIRTUALCONTROLS_ONEPEDALDRIVE_STATE_INTERNAL, mBindingsIds[5]);
    Label_virtualcontrols_1_3_OPDOn_csm.State.unBind(gm::csm::VIRTUALCONTROLS_ONEPEDALDRIVE_STATE_INTERNAL, mBindingsIds[6]);
    Label_virtualcontrols_1_3_0_5_opd_csm.State.unBind(gm::csm::VIRTUALCONTROLS_ONEPEDALDRIVE_LABEL_STATE_INTERNAL, mBindingsIds[7]);
    Label_virtualcontrols_0_0_detailsUnavailable_csm.Visibility.unBind(gm::csm::VIRTUALCONTROLS_CONTROL_PAGE_WHILE_DRIVING_INTERNAL, mBindingsIds[8]);
    Image_img_radio_button_high.Visibility.unBind(gm::csm::VIRTUALCONTROLS_ONEPEDALDRIVE_CUSTOMIZATION_AVAILABILITYFLAG3, mBindingsIds[9]);
    Image_img_radio_button_high.State.unBind(gm::csm::VIRTUALCONTROLS_ONEPEDALDRIVE_STATE_INTERNAL, mBindingsIds[10]);
    Image_img_radio_button_enhanced.State.unBind(gm::csm::VIRTUALCONTROLS_ONEPEDALDRIVE_STATE_INTERNAL, mBindingsIds[11]);
}

void Screen_6015::onScreenShow()
{
    mBindingsIds[0] = Label_virtualcontrols_1_3_OPDHigh_csm.Visibility.bind(gm::csm::VIRTUALCONTROLS_ONEPEDALDRIVE_CUSTOMIZATION_AVAILABILITYFLAG3);
    mBindingsIds[1] = Label_virtualcontrols_1_3_OPDHigh_csm.State.bind(gm::csm::VIRTUALCONTROLS_ONEPEDALDRIVE_STATE_INTERNAL);
    mBindingsIds[2] = Image_img_radio_button_on.State.bind(gm::csm::VIRTUALCONTROLS_ONEPEDALDRIVE_STATE_INTERNAL);
    mBindingsIds[3] = Label_virtualcontrols_1_3_OPDOff_csm.State.bind(gm::csm::VIRTUALCONTROLS_ONEPEDALDRIVE_STATE_INTERNAL);
    addDependency(this, &Screen_6015::Widget_Logic_Visibility_virtualcontrols_1_3_OPDHighplus_csm, gm::csm::VIRTUALCONTROLS_ONEPEDALDRIVE_CUSTOMIZATION_AVAILABILITYFLAG3);
    addDependency(this, &Screen_6015::Widget_Logic_Visibility_virtualcontrols_1_3_OPDHighplus_csm, gm::csm::VIRTUALCONTROLS_ONEPEDALDRIVE_CUSTOMIZATION_AVAILABILITYFLAG4);
    mBindingsIds[4] = Label_virtualcontrols_1_3_OPDHighplus_csm.State.bind(gm::csm::VIRTUALCONTROLS_ONEPEDALDRIVE_STATE_INTERNAL);
    mBindingsIds[5] = Image_img_radio_button_off.State.bind(gm::csm::VIRTUALCONTROLS_ONEPEDALDRIVE_STATE_INTERNAL);
    mBindingsIds[6] = Label_virtualcontrols_1_3_OPDOn_csm.State.bind(gm::csm::VIRTUALCONTROLS_ONEPEDALDRIVE_STATE_INTERNAL);
    addDependency(this, &Screen_6015::Widget_Logic_Visibility_img_close, gm::csm::VIRTUALCONTROLS_ANDROID_NOIVI_STATE);
    addDependency(this, &Screen_6015::Widget_Logic_Visibility_virtualcontrols_1_3_0_5_opd_csm, gm::csm::VIRTUALCONTROLS_CONTROL_PAGE_WHILE_DRIVING_INTERNAL);
    mBindingsIds[7] = Label_virtualcontrols_1_3_0_5_opd_csm.State.bind(gm::csm::VIRTUALCONTROLS_ONEPEDALDRIVE_LABEL_STATE_INTERNAL);
    mBindingsIds[8] = Label_virtualcontrols_0_0_detailsUnavailable_csm.Visibility.bind(gm::csm::VIRTUALCONTROLS_CONTROL_PAGE_WHILE_DRIVING_INTERNAL);
    mBindingsIds[9] = Image_img_radio_button_high.Visibility.bind(gm::csm::VIRTUALCONTROLS_ONEPEDALDRIVE_CUSTOMIZATION_AVAILABILITYFLAG3);
    mBindingsIds[10] = Image_img_radio_button_high.State.bind(gm::csm::VIRTUALCONTROLS_ONEPEDALDRIVE_STATE_INTERNAL);
    addDependency(this, &Screen_6015::Widget_Logic_Visibility_img_driving_pedal, gm::csm::VIRTUALCONTROLS_CONTROL_PAGE_WHILE_DRIVING_INTERNAL);
    addDependency(this, &Screen_6015::Widget_Logic_Visibility_img_radio_button_enhanced, gm::csm::VIRTUALCONTROLS_ONEPEDALDRIVE_CUSTOMIZATION_AVAILABILITYFLAG3);
    addDependency(this, &Screen_6015::Widget_Logic_Visibility_img_radio_button_enhanced, gm::csm::VIRTUALCONTROLS_ONEPEDALDRIVE_CUSTOMIZATION_AVAILABILITYFLAG4);
    mBindingsIds[11] = Image_img_radio_button_enhanced.State.bind(gm::csm::VIRTUALCONTROLS_ONEPEDALDRIVE_STATE_INTERNAL);
    addDependency(this, &Screen_6015::Widget_Logic_Visibility_img_parking_divider, gm::csm::VIRTUALCONTROLS_ONEPEDALDRIVE_CUSTOMIZATION_AVAILABILITYFLAG3);
    addDependency(this, &Screen_6015::Widget_Logic_Visibility_img_parking_divider, gm::csm::VIRTUALCONTROLS_ONEPEDALDRIVE_CUSTOMIZATION_AVAILABILITYFLAG4);
}


}//namespace csm
}//namespace gm
