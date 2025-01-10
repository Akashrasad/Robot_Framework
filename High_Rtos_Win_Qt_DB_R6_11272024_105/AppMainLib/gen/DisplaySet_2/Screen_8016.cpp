#include "Screen_8016.h"

#include "RTOS_InternalData.h"
#include "WidgetData.h"
#include <cstdlib>

namespace gm
{
namespace csm
{


void Screen_8016::onScreenHide()
{
    Image_img_btn_tabs_camera_hitch.State.unBind(gm::csm::VPM_REAR_CAMERA_HITCH_INTERNAL, mBindingsIds[0]);
    Group_grp_img_exit.Visibility.unBind(gm::csm::Data_Close_Button_Visibility, mBindingsIds[1]);
    Image_img_btn_tabs_camera_bowl.State.unBind(gm::csm::VPM_FRONT_CAMERA_BOWL_STATE_INTERNAL, mBindingsIds[2]);
}

void Screen_8016::onScreenShow()
{
    mBindingsIds[0] = Image_img_btn_tabs_camera_hitch.State.bind(gm::csm::VPM_REAR_CAMERA_HITCH_INTERNAL);
    mBindingsIds[1] = Group_grp_img_exit.Visibility.bind(gm::csm::Data_Close_Button_Visibility);
    mBindingsIds[2] = Image_img_btn_tabs_camera_bowl.State.bind(gm::csm::VPM_FRONT_CAMERA_BOWL_STATE_INTERNAL);
}


}//namespace csm
}//namespace gm
