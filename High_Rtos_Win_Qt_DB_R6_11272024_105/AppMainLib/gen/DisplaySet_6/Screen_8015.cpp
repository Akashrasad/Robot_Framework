#include "Screen_8015.h"

#include "RTOS_InternalData.h"
#include "WidgetData.h"
#include <cstdlib>

namespace gm
{
namespace csm
{


void Screen_8015::onScreenHide()
{
    Label_safetysystems_2_1_1_side_f_csm.State.unBind(gm::csm::VPM_FRONT_AND_REAR_SIDE_BUTTONS_STATE_INTERNAL, mBindingsIds[0]);
    Image_img_btn_tabs_camera_bowl.State.unBind(gm::csm::VPM_FRONT_CAMERA_BOWL_STATE_INTERNAL, mBindingsIds[1]);
    Label_safetysystems_2_1_1_overhead_f_csm.State.unBind(gm::csm::VPM_FRONT_AND_REAR_OVERHEAD_BUTTONS_STATE_INTERNAL, mBindingsIds[2]);
    Image_img_btn_tabs_camera_hitch.State.unBind(gm::csm::VPM_REAR_CAMERA_HITCH_INTERNAL, mBindingsIds[3]);
    Image_img_tabs_overhead.State.unBind(gm::csm::VPM_FRONT_AND_REAR_OVERHEAD_BUTTONS_STATE_INTERNAL, mBindingsIds[4]);
    Image_img_tabs_side.State.unBind(gm::csm::VPM_FRONT_AND_REAR_SIDE_BUTTONS_STATE_INTERNAL, mBindingsIds[5]);
    Image_img_tabs_normal.State.unBind(gm::csm::VPM_FRONT_AND_REAR_NORMAL_BUTTONS_STATE_INTERNAL, mBindingsIds[6]);
    Label_safetysystems_2_1_1_normal_f_csm.State.unBind(gm::csm::VPM_FRONT_AND_REAR_NORMAL_BUTTONS_STATE_INTERNAL, mBindingsIds[7]);
}

void Screen_8015::onScreenShow()
{
    mBindingsIds[0] = Label_safetysystems_2_1_1_side_f_csm.State.bind(gm::csm::VPM_FRONT_AND_REAR_SIDE_BUTTONS_STATE_INTERNAL);
    mBindingsIds[1] = Image_img_btn_tabs_camera_bowl.State.bind(gm::csm::VPM_FRONT_CAMERA_BOWL_STATE_INTERNAL);
    mBindingsIds[2] = Label_safetysystems_2_1_1_overhead_f_csm.State.bind(gm::csm::VPM_FRONT_AND_REAR_OVERHEAD_BUTTONS_STATE_INTERNAL);
    mBindingsIds[3] = Image_img_btn_tabs_camera_hitch.State.bind(gm::csm::VPM_REAR_CAMERA_HITCH_INTERNAL);
    mBindingsIds[4] = Image_img_tabs_overhead.State.bind(gm::csm::VPM_FRONT_AND_REAR_OVERHEAD_BUTTONS_STATE_INTERNAL);
    mBindingsIds[5] = Image_img_tabs_side.State.bind(gm::csm::VPM_FRONT_AND_REAR_SIDE_BUTTONS_STATE_INTERNAL);
    mBindingsIds[6] = Image_img_tabs_normal.State.bind(gm::csm::VPM_FRONT_AND_REAR_NORMAL_BUTTONS_STATE_INTERNAL);
    mBindingsIds[7] = Label_safetysystems_2_1_1_normal_f_csm.State.bind(gm::csm::VPM_FRONT_AND_REAR_NORMAL_BUTTONS_STATE_INTERNAL);
}


}//namespace csm
}//namespace gm
