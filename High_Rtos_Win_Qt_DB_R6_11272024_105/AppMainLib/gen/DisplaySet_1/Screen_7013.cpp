#include "Screen_7013.h"

#include "RTOS_CustomDataPool.h"
#include "RTOS_InternalData.h"
#include "StringData.h"
#include "WidgetData.h"
#include <cstdlib>

namespace gm
{
namespace csm
{


void Screen_7013::Label_apa_4_12_Connecting_csm_bindings()
{
    std::string text = Label_apa_4_12_Connecting_csm.Text.getLanguageText();

    FindReplaceString(text,"%1$s",ramp::to_string(gm::csm::DATA_REMOTE_PARK_DYNAMIC_LABEL));
    Label_apa_4_12_Connecting_csm = text.c_str();
}

void Screen_7013::onScreenHide()
{
    Label_apa_4_1_selectedbuttonPerpRight_csm.State.unBind(gm::csm::APA_PARK_INSTRUCTIONS_INTERNAL, mBindingsIds[0]);
    ActivityIndicator_img_progress_activity.Animation.unBind(gm::csm::APA_ACTIVITY_INDICATOR_CONNECTING_APP_PROGRESS, mBindingsIds[1]);
}

void Screen_7013::onScreenShow()
{
    mBindingsIds[0] = Label_apa_4_1_selectedbuttonPerpRight_csm.State.bind(gm::csm::APA_PARK_INSTRUCTIONS_INTERNAL);
    mBindingsIds[1] = ActivityIndicator_img_progress_activity.Animation.bind(gm::csm::APA_ACTIVITY_INDICATOR_CONNECTING_APP_PROGRESS);
    addDependency(this, &Screen_7013::Label_apa_4_12_Connecting_csm_bindings,gm::csm::DATA_REMOTE_PARK_DYNAMIC_LABEL);
}


}//namespace csm
}//namespace gm
