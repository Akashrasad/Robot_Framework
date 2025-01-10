#include "Screen_7024.h"

#include "RTOS_InternalData.h"
#include "StringData.h"
#include "WidgetData.h"
#include <cstdlib>

namespace gm
{
namespace csm
{


void Screen_7024::Label_apa_4_10_RemoteParkHandoff_csm_bindings()
{
    std::string text = Label_apa_4_10_RemoteParkHandoff_csm.Text.getLanguageText();

    FindReplaceString(text,"%1$s",ramp::to_string(gm::csm::DATA_REMOTE_PARK_DYNAMIC_LABEL));
    Label_apa_4_10_RemoteParkHandoff_csm = text.c_str();
}

void Screen_7024::onScreenHide()
{
}

void Screen_7024::onScreenShow()
{
    addDependency(this, &Screen_7024::Label_apa_4_10_RemoteParkHandoff_csm_bindings,gm::csm::DATA_REMOTE_PARK_DYNAMIC_LABEL);
}


}//namespace csm
}//namespace gm
