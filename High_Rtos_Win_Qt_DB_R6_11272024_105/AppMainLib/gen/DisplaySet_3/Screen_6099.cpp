#include "Screen_6099.h"

#include "RTOS_CustomDataPool.h"
#include "StringData.h"
#include "WidgetData.h"
#include <cstdlib>

namespace gm
{
namespace csm
{


void Screen_6099::Label_virtualcontrols_1_6_6_4_v_Passive_Power_Mode_snackbar_Remaining_csm_bindings()
{
    std::string text = Label_virtualcontrols_1_6_6_4_v_Passive_Power_Mode_snackbar_Remaining_csm.Text.getLanguageText();

    FindReplaceString(text,"%1$s",ramp::to_string(gm::csm::SMARTCONTROLS_PASSIVE_POWER_MODE_EXTEND_SHUTDOWN_TIMER));
    FindReplaceString(text,"%2$s",ramp::to_string(gm::csm::SMARTCONTROLS_PASSIVE_POWER_MODE_EXTEND_TIMER_DISPLAY_VALUE));
    Label_virtualcontrols_1_6_6_4_v_Passive_Power_Mode_snackbar_Remaining_csm = text.c_str();
}

void Screen_6099::onScreenHide()
{
}

void Screen_6099::onScreenShow()
{
    addDependency(this, &Screen_6099::Label_virtualcontrols_1_6_6_4_v_Passive_Power_Mode_snackbar_Remaining_csm_bindings,gm::csm::SMARTCONTROLS_PASSIVE_POWER_MODE_EXTEND_SHUTDOWN_TIMER , gm::csm::SMARTCONTROLS_PASSIVE_POWER_MODE_EXTEND_TIMER_DISPLAY_VALUE);
}


}//namespace csm
}//namespace gm
