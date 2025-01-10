#include "Screen_7029.h"

#include "RTOS_InternalData.h"
#include "WidgetData.h"
#include <cstdlib>

namespace gm
{
namespace csm
{


void Screen_7029::onScreenHide()
{
    GroupImage_img_keep_looking_btn.State.unBind(gm::csm::Data_APA_SELECTION_KEEP_LOOKING_BUTTON_STATE, mBindingsIds[0]);
    GroupLabel_apa_4_13_btn2_f_csm.State.unBind(gm::csm::Data_APA_SELECTION_YES_BUTTON_STATE, mBindingsIds[1]);
    GroupImage_img_park_in_vehicle_btn.State.unBind(gm::csm::Data_APA_SELECTION_YES_BUTTON_STATE, mBindingsIds[2]);
    GroupLabel_apa_4_8_btn2_f_csm.State.unBind(gm::csm::Data_APA_SELECTION_SUPERVISE_REMOTELY_BUTTON_STATE, mBindingsIds[3]);
    GroupImage_img_supervise_remotely_btn.State.unBind(gm::csm::Data_APA_SELECTION_SUPERVISE_REMOTELY_BUTTON_STATE, mBindingsIds[4]);
    GroupLabel_apa_4_4_KeepLooking_csm.State.unBind(gm::csm::Data_APA_SELECTION_KEEP_LOOKING_BUTTON_STATE, mBindingsIds[5]);
}

void Screen_7029::onScreenShow()
{
    mBindingsIds[0] = GroupImage_img_keep_looking_btn.State.bind(gm::csm::Data_APA_SELECTION_KEEP_LOOKING_BUTTON_STATE);
    mBindingsIds[1] = GroupLabel_apa_4_13_btn2_f_csm.State.bind(gm::csm::Data_APA_SELECTION_YES_BUTTON_STATE);
    mBindingsIds[2] = GroupImage_img_park_in_vehicle_btn.State.bind(gm::csm::Data_APA_SELECTION_YES_BUTTON_STATE);
    mBindingsIds[3] = GroupLabel_apa_4_8_btn2_f_csm.State.bind(gm::csm::Data_APA_SELECTION_SUPERVISE_REMOTELY_BUTTON_STATE);
    mBindingsIds[4] = GroupImage_img_supervise_remotely_btn.State.bind(gm::csm::Data_APA_SELECTION_SUPERVISE_REMOTELY_BUTTON_STATE);
    mBindingsIds[5] = GroupLabel_apa_4_4_KeepLooking_csm.State.bind(gm::csm::Data_APA_SELECTION_KEEP_LOOKING_BUTTON_STATE);
}


}//namespace csm
}//namespace gm
