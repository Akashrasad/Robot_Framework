#include "Screen_7028.h"

#include "RTOS_InternalData.h"
#include "WidgetData.h"
#include <cstdlib>

namespace gm
{
namespace csm
{


void Screen_7028::onScreenHide()
{
    Group_grp_park_in_vehicle_btn.Visibility.unBind(gm::csm::Data_APA_SPOT_SELENT_YES_BUTTON_VISIBILITY, mBindingsIds[0]);
    GroupImage_img_keep_looking_btn.State.unBind(gm::csm::Data_APA_SELECTION_KEEP_LOOKING_BUTTON_STATE, mBindingsIds[1]);
    GroupImage_img_park_in_vehicle_btn.State.unBind(gm::csm::Data_APA_SELECTION_YES_BUTTON_STATE, mBindingsIds[2]);
    Group_grp_keep_looking_btn.Visibility.unBind(gm::csm::Data_APA_SPOT_SELENT_KEEP_LKNG_BUTTON_VISIBILITY, mBindingsIds[3]);
    GroupLabel_apa_4_13_btn2_f_csm.State.unBind(gm::csm::Data_APA_SELECTION_YES_BUTTON_STATE, mBindingsIds[4]);
    GroupLabel_apa_4_4_KeepLooking_csm.State.unBind(gm::csm::Data_APA_SELECTION_KEEP_LOOKING_BUTTON_STATE, mBindingsIds[5]);
    GroupLabel_apa_4_8_btn2_f_csm.State.unBind(gm::csm::Data_APA_SELECTION_SUPERVISE_REMOTELY_BUTTON_STATE, mBindingsIds[6]);
    GroupImage_img_supervise_remotely_btn.State.unBind(gm::csm::Data_APA_SELECTION_SUPERVISE_REMOTELY_BUTTON_STATE, mBindingsIds[7]);
    Group_grp_supervise_remotely_btn.Visibility.unBind(gm::csm::Data_APA_SPOT_SELENT_REMOTE_BUTTON_VISIBILITY, mBindingsIds[8]);
}

void Screen_7028::onScreenShow()
{
    mBindingsIds[0] = Group_grp_park_in_vehicle_btn.Visibility.bind(gm::csm::Data_APA_SPOT_SELENT_YES_BUTTON_VISIBILITY);
    mBindingsIds[1] = GroupImage_img_keep_looking_btn.State.bind(gm::csm::Data_APA_SELECTION_KEEP_LOOKING_BUTTON_STATE);
    mBindingsIds[2] = GroupImage_img_park_in_vehicle_btn.State.bind(gm::csm::Data_APA_SELECTION_YES_BUTTON_STATE);
    mBindingsIds[3] = Group_grp_keep_looking_btn.Visibility.bind(gm::csm::Data_APA_SPOT_SELENT_KEEP_LKNG_BUTTON_VISIBILITY);
    mBindingsIds[4] = GroupLabel_apa_4_13_btn2_f_csm.State.bind(gm::csm::Data_APA_SELECTION_YES_BUTTON_STATE);
    mBindingsIds[5] = GroupLabel_apa_4_4_KeepLooking_csm.State.bind(gm::csm::Data_APA_SELECTION_KEEP_LOOKING_BUTTON_STATE);
    mBindingsIds[6] = GroupLabel_apa_4_8_btn2_f_csm.State.bind(gm::csm::Data_APA_SELECTION_SUPERVISE_REMOTELY_BUTTON_STATE);
    mBindingsIds[7] = GroupImage_img_supervise_remotely_btn.State.bind(gm::csm::Data_APA_SELECTION_SUPERVISE_REMOTELY_BUTTON_STATE);
    mBindingsIds[8] = Group_grp_supervise_remotely_btn.Visibility.bind(gm::csm::Data_APA_SPOT_SELENT_REMOTE_BUTTON_VISIBILITY);
}


}//namespace csm
}//namespace gm
