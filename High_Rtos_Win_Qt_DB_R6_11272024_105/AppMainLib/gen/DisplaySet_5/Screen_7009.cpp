#include "Screen_7009.h"

#include "RTOS_InternalData.h"
#include "WidgetData.h"
#include <cstdlib>

namespace gm
{
namespace csm
{


void Screen_7009::onScreenHide()
{
    GroupLabel_apa_4_4_KeepLooking_csm.State.unBind(gm::csm::Data_APA_SELECTION_KEEP_LOOKING_BUTTON_STATE, mBindingsIds[0]);
    GroupImage_img_keep_looking_btn.State.unBind(gm::csm::Data_APA_SELECTION_KEEP_LOOKING_BUTTON_STATE, mBindingsIds[1]);
    GroupImage_img_yes_btn.State.unBind(gm::csm::Data_APA_SELECTION_YES_BUTTON_STATE, mBindingsIds[2]);
    GroupLabel_apa_4_4_YesPark_csm.State.unBind(gm::csm::Data_APA_SELECTION_YES_BUTTON_STATE, mBindingsIds[3]);
}

void Screen_7009::onScreenShow()
{
    mBindingsIds[0] = GroupLabel_apa_4_4_KeepLooking_csm.State.bind(gm::csm::Data_APA_SELECTION_KEEP_LOOKING_BUTTON_STATE);
    mBindingsIds[1] = GroupImage_img_keep_looking_btn.State.bind(gm::csm::Data_APA_SELECTION_KEEP_LOOKING_BUTTON_STATE);
    mBindingsIds[2] = GroupImage_img_yes_btn.State.bind(gm::csm::Data_APA_SELECTION_YES_BUTTON_STATE);
    mBindingsIds[3] = GroupLabel_apa_4_4_YesPark_csm.State.bind(gm::csm::Data_APA_SELECTION_YES_BUTTON_STATE);
}


}//namespace csm
}//namespace gm
