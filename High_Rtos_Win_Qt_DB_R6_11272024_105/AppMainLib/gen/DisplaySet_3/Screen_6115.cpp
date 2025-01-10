#include "Screen_6115.h"

#include "RTOS_CustomDataPool.h"
#include "RTOS_InternalData.h"
#include "StringData.h"
#include "WidgetData.h"
#include <cstdlib>

namespace gm
{
namespace csm
{


void Screen_6115::Label_virtualcontrols_1_14_4_charge_port_powerLimit_csm_bindings()
{
    std::string text = Label_virtualcontrols_1_14_4_charge_port_powerLimit_csm.Text.getLanguageText();

    FindReplaceString(text,"%1$s",ramp::to_string(gm::csm::SMARTCONTROLS_PEEKIN_CHARGE_POWER_PORT_LIMIT));
    Label_virtualcontrols_1_14_4_charge_port_powerLimit_csm = text.c_str();
}

void Screen_6115::Label_virtualcontrols_1_14_4_header_csm_bindings()
{
    std::string text = Label_virtualcontrols_1_14_4_header_csm.Text.getLanguageText();

    FindReplaceString(text,"%1$s",ramp::to_string(gm::csm::SMARTCONTRSOLS_OUTLET_HEADER));
    Label_virtualcontrols_1_14_4_header_csm = text.c_str();
}

void Screen_6115::Label_virtualcontrols_1_14_4_powerLimit_csm_bindings()
{
    std::string text = Label_virtualcontrols_1_14_4_powerLimit_csm.Text.getLanguageText();

    FindReplaceString(text,"%1$s",ramp::to_string(gm::csm::SMARTCONTROLS_PEEKIN_OUTLETS_POWER_PORT_LIMIT));
    Label_virtualcontrols_1_14_4_powerLimit_csm = text.c_str();
}

void Screen_6115::Label_virtualcontrols_1_14_4_rangeUsed_csm_bindings()
{
    std::string text = Label_virtualcontrols_1_14_4_rangeUsed_csm.Text.getLanguageText();

    FindReplaceString(text,"%1$s",ramp::to_string(gm::csm::SMARTCONTROLS_RANGE_USED_DISCHARGE));
    Label_virtualcontrols_1_14_4_rangeUsed_csm = text.c_str();
}

void Screen_6115::onScreenHide()
{
    Label_virtualcontrols_1_14_4_chargePort_csm.Visibility.unBind(gm::csm::SMARTCONTROLS_PEEKIN_CHARGE_PORT_ENABLE, mBindingsIds[0]);
    Label_dyn_lbl_virtualcontrols_1_14_4_timerEnding_csm.Text.unBind(gm::csm::SMARTCONTROLS_PEEKIN_ENDING_TEXT, mBindingsIds[1]);
    Image_img_charge_port_icon.Visibility.unBind(gm::csm::SMARTCONTROLS_PEEKIN_CHARGE_PORT_ENABLE, mBindingsIds[2]);
    Label_virtualcontrols_1_14_4_status_csm.State.unBind(gm::csm::ONBOARD_OUTLET1_OPERATIONAL_STATUS, mBindingsIds[3]);
    Image_img_icon.State.unBind(gm::csm::SMARTCONTROLS_PEEKIN_OUTLET_TOGGLE, mBindingsIds[4]);
    Label_virtualcontrols_1_14_4_charge_port_powerLimit_csm.Visibility.unBind(gm::csm::SMARTCONTROLS_PEEKIN_CHARGE_PORT_ENABLE, mBindingsIds[5]);
    Label_virtualcontrols_1_14_4_status_chargerport_csm.Visibility.unBind(gm::csm::SMARTCONTROLS_PEEKIN_CHARGE_PORT_ENABLE, mBindingsIds[8]);
    Label_virtualcontrols_1_14_4_status_chargerport_csm.State.unBind(gm::csm::OFFBOARD_OUTLET_OPERATIONAL_STATUS, mBindingsIds[9]);
    ProgressBar_6115_img_outlets_pogressbar.ProgressBarValue.unBind(gm::csm::ONBOARD_OUTLETS_ELECTRICAL_ENERGY__POWER_LEVEL_PERCENT, mBindingsIds[10]);
    ProgressBar_6115_img_charge_port_pogressbar.Visibility.unBind(gm::csm::SMARTCONTROLS_PEEKIN_CHARGE_PORT_ENABLE, mBindingsIds[12]);
    ProgressBar_6115_img_charge_port_pogressbar.ProgressBarValue.unBind(gm::csm::OFFBOARD_OUTLETS_ELECTRICAL_ENERGY_POWER_LEVEL_PERCENT, mBindingsIds[13]);
}

void Screen_6115::onScreenShow()
{
    mBindingsIds[0] = Label_virtualcontrols_1_14_4_chargePort_csm.Visibility.bind(gm::csm::SMARTCONTROLS_PEEKIN_CHARGE_PORT_ENABLE);
    mBindingsIds[1] = Label_dyn_lbl_virtualcontrols_1_14_4_timerEnding_csm.Text.bind(gm::csm::SMARTCONTROLS_PEEKIN_ENDING_TEXT);
    mBindingsIds[2] = Image_img_charge_port_icon.Visibility.bind(gm::csm::SMARTCONTROLS_PEEKIN_CHARGE_PORT_ENABLE);
    mBindingsIds[3] = Label_virtualcontrols_1_14_4_status_csm.State.bind(gm::csm::ONBOARD_OUTLET1_OPERATIONAL_STATUS);
    mBindingsIds[4] = Image_img_icon.State.bind(gm::csm::SMARTCONTROLS_PEEKIN_OUTLET_TOGGLE);
    mBindingsIds[5] = Label_virtualcontrols_1_14_4_charge_port_powerLimit_csm.Visibility.bind(gm::csm::SMARTCONTROLS_PEEKIN_CHARGE_PORT_ENABLE);
    addDependency(this, &Screen_6115::Label_virtualcontrols_1_14_4_charge_port_powerLimit_csm_bindings,gm::csm::SMARTCONTROLS_PEEKIN_CHARGE_POWER_PORT_LIMIT);
    addDependency(this, &Screen_6115::Label_virtualcontrols_1_14_4_header_csm_bindings,gm::csm::SMARTCONTRSOLS_OUTLET_HEADER);
    mBindingsIds[8] = Label_virtualcontrols_1_14_4_status_chargerport_csm.Visibility.bind(gm::csm::SMARTCONTROLS_PEEKIN_CHARGE_PORT_ENABLE);
    mBindingsIds[9] = Label_virtualcontrols_1_14_4_status_chargerport_csm.State.bind(gm::csm::OFFBOARD_OUTLET_OPERATIONAL_STATUS);
    mBindingsIds[10] = ProgressBar_6115_img_outlets_pogressbar.ProgressBarValue.bind(gm::csm::ONBOARD_OUTLETS_ELECTRICAL_ENERGY__POWER_LEVEL_PERCENT);
    addDependency(this, &Screen_6115::Label_virtualcontrols_1_14_4_powerLimit_csm_bindings,gm::csm::SMARTCONTROLS_PEEKIN_OUTLETS_POWER_PORT_LIMIT);
    mBindingsIds[12] = ProgressBar_6115_img_charge_port_pogressbar.Visibility.bind(gm::csm::SMARTCONTROLS_PEEKIN_CHARGE_PORT_ENABLE);
    mBindingsIds[13] = ProgressBar_6115_img_charge_port_pogressbar.ProgressBarValue.bind(gm::csm::OFFBOARD_OUTLETS_ELECTRICAL_ENERGY_POWER_LEVEL_PERCENT);
    addDependency(this, &Screen_6115::Label_virtualcontrols_1_14_4_rangeUsed_csm_bindings,gm::csm::SMARTCONTROLS_RANGE_USED_DISCHARGE);
}


}//namespace csm
}//namespace gm
