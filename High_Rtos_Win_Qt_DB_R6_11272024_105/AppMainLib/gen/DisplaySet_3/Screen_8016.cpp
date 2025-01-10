#include "Screen_8016.h"

#include "RTOS_CustomDataPool.h"
#include "RTOS_InternalData.h"
#include "WidgetData.h"
#include <cstdlib>

namespace gm
{
namespace csm
{


void Screen_8016::onScreenHide()
{
    Group_grp_img_exit.Visibility.unBind(gm::csm::Data_Close_Button_Visibility, mBindingsIds[0]);
    Image_img_btn_tabs_camera_bowl.Location.unBind(gm::csm::VPM_CAMERA_BOWL_X_LOCATION_UPDATE, mBindingsIds[1]);
    Image_img_btn_tabs_camera_bowl.Location.unBind(gm::csm::VPM_CAMERA_BOWL_Y_LOCATION_UPDATE, mBindingsIds[2]);
    Image_img_btn_tabs_camera_bowl.Visibility.unBind(gm::csm::Data_VPM_RES_BOWL_VISIBILITY, mBindingsIds[3]);
    Image_img_btn_tabs_camera_bowl.State.unBind(gm::csm::VPM_FRONT_CAMERA_BOWL_STATE_INTERNAL, mBindingsIds[4]);
    Image_img_btn_tabs_camera_hitch.State.unBind(gm::csm::VPM_REAR_CAMERA_HITCH_INTERNAL, mBindingsIds[5]);
}

void Screen_8016::onScreenShow()
{
    mBindingsIds[0] = Group_grp_img_exit.Visibility.bind(gm::csm::Data_Close_Button_Visibility);
    
    auto location_1 = Image_img_btn_tabs_camera_bowl.Location.bind(gm::csm::VPM_CAMERA_BOWL_X_LOCATION_UPDATE, gm::csm::VPM_CAMERA_BOWL_Y_LOCATION_UPDATE);

    mBindingsIds[1] = location_1.first;
    mBindingsIds[2] = location_1.second;

    mBindingsIds[3] = Image_img_btn_tabs_camera_bowl.Visibility.bind(gm::csm::Data_VPM_RES_BOWL_VISIBILITY);
    mBindingsIds[4] = Image_img_btn_tabs_camera_bowl.State.bind(gm::csm::VPM_FRONT_CAMERA_BOWL_STATE_INTERNAL);
    mBindingsIds[5] = Image_img_btn_tabs_camera_hitch.State.bind(gm::csm::VPM_REAR_CAMERA_HITCH_INTERNAL);
}


}//namespace csm
}//namespace gm
