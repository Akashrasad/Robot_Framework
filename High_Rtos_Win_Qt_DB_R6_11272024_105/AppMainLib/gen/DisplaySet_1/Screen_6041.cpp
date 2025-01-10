#include "Screen_6041.h"

#include "RTOS_InternalData.h"
#include "StringData.h"
#include "WidgetData.h"
#include <cstdlib>

namespace gm
{
namespace csm
{


void Screen_6041::Label_virtualcontrols_1_5_6_1_OptionCharCount_csm_bindings()
{
    std::string str_0 = "%1$s";
    str_0.replace(0, str_0.size(), ramp::to_string(gm::csm::VIRTUALCONTROLS_OPTIONNAMECHARACTERS));

    Label_virtualcontrols_1_5_6_1_OptionCharCount_csm = text.c_str();
}

void Screen_6041::Label_virtualcontrols_1_5_6_1_OptionNameTitle_csm_bindings()
{
    std::string text = Label_virtualcontrols_1_5_6_1_OptionNameTitle_csm.Text.getLanguageText();

    FindReplaceString(text,"%1$s",ramp::to_string(gm::csm::Data_VIRTUAL_CONTROLS_OPTIONS_NAME));
    Label_virtualcontrols_1_5_6_1_OptionNameTitle_csm = text.c_str();
}

void Screen_6041::onScreenHide()
{
    Label_dyn_lbl_remote_1.Text.unBind(gm::csm::Data_VIRTUAL_CONTROLS_OPTIONS_NAME, mBindingsIds[1]);
}

void Screen_6041::onScreenShow()
{
    addDependency(this, &Screen_6041::Label_virtualcontrols_1_5_6_1_OptionCharCount_csm_bindings,gm::csm::VIRTUALCONTROLS_OPTIONNAMECHARACTERS);
    mBindingsIds[1] = Label_dyn_lbl_remote_1.Text.bind(gm::csm::Data_VIRTUAL_CONTROLS_OPTIONS_NAME);
    addDependency(this, &Screen_6041::Label_virtualcontrols_1_5_6_1_OptionNameTitle_csm_bindings,gm::csm::Data_VIRTUAL_CONTROLS_OPTIONS_NAME);
}


}//namespace csm
}//namespace gm
