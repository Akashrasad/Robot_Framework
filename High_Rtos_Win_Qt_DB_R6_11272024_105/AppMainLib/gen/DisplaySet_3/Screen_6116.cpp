#include "Screen_6116.h"

#include "RTOS_InternalData.h"
#include "StringData.h"
#include "WidgetData.h"
#include <cstdlib>

namespace gm
{
namespace csm
{


void Screen_6116::Label_virtualcontrols_1_14_5_header_csm_bindings()
{
    std::string text = Label_virtualcontrols_1_14_5_header_csm.Text.getLanguageText();

    FindReplaceString(text,"%1$s",ramp::to_string(gm::csm::SMARTCONTRSOLS_OUTLET_HEADER));
    Label_virtualcontrols_1_14_5_header_csm = text.c_str();
}

void Screen_6116::Label_virtualcontrols_1_14_5_powerUsedNumber_csm_bindings()
{
    std::string text = Label_virtualcontrols_1_14_5_powerUsedNumber_csm.Text.getLanguageText();

    FindReplaceString(text,"%1$s",ramp::to_string(gm::csm::SMARTCONTRSOLS_OFFPOWERMODE_ENERGY_USED_DISCHARGE));
    Label_virtualcontrols_1_14_5_powerUsedNumber_csm = text.c_str();
}

void Screen_6116::Label_virtualcontrols_1_14_5_rangeUsedNumber_csm_bindings()
{
    std::string text = Label_virtualcontrols_1_14_5_rangeUsedNumber_csm.Text.getLanguageText();

    FindReplaceString(text,"%1$s",ramp::to_string(gm::csm::SMARTCONTROLS_RANGE_USED_DISCHARGE));
    Label_virtualcontrols_1_14_5_rangeUsedNumber_csm = text.c_str();
}

void Screen_6116::Label_virtualcontrols_1_14_5_sessionTime_csm_bindings()
{
    std::string text = Label_virtualcontrols_1_14_5_sessionTime_csm.Text.getLanguageText();

    FindReplaceString(text,"%1$s",ramp::to_string(gm::csm::SMARTCONTROLS_PEEKIN_ENDING_IN_HOURS));
    FindReplaceString(text,"%2$s",ramp::to_string(gm::csm::SMARTCONTROLS_PEEKIN_ENDING_IN_MINUTES));
    Label_virtualcontrols_1_14_5_sessionTime_csm = text.c_str();
}

void Screen_6116::onScreenHide()
{
    Label_dyn_lbl_virtualcontrols_1_14_5_body_csm.Text.unBind(gm::csm::SMARTCONTROLS_SUMMARY_SCREEN_TEXT, mBindingsIds[0]);
}

void Screen_6116::onScreenShow()
{
    mBindingsIds[0] = Label_dyn_lbl_virtualcontrols_1_14_5_body_csm.Text.bind(gm::csm::SMARTCONTROLS_SUMMARY_SCREEN_TEXT);
    addDependency(this, &Screen_6116::Label_virtualcontrols_1_14_5_powerUsedNumber_csm_bindings,gm::csm::SMARTCONTRSOLS_OFFPOWERMODE_ENERGY_USED_DISCHARGE);
    addDependency(this, &Screen_6116::Label_virtualcontrols_1_14_5_rangeUsedNumber_csm_bindings,gm::csm::SMARTCONTROLS_RANGE_USED_DISCHARGE);
    addDependency(this, &Screen_6116::Label_virtualcontrols_1_14_5_sessionTime_csm_bindings,gm::csm::SMARTCONTROLS_PEEKIN_ENDING_IN_HOURS , gm::csm::SMARTCONTROLS_PEEKIN_ENDING_IN_MINUTES);
    addDependency(this, &Screen_6116::Label_virtualcontrols_1_14_5_header_csm_bindings,gm::csm::SMARTCONTRSOLS_OUTLET_HEADER);
}


}//namespace csm
}//namespace gm
