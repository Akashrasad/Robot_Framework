#include "Screen_8012.h"

#include "RTOS_CustomDataPool.h"
#include "RTOS_InternalData.h"
#include "WidgetData.h"
#include <cstdlib>

namespace gm
{
namespace csm
{


void Screen_8012::onScreenHide()
{
    Image_img_btn_touchpoint_3.State.unBind(gm::csm::VPM_MFCBOWL, mBindingsIds[0]);
    Image_img_btn_touchpoint_6.State.unBind(gm::csm::VPM_MFCBOWL, mBindingsIds[1]);
    Image_img_tabs_settings.Location.unBind(gm::csm::VPM_CAMERA_SETTINGS_X_LOCATION_UPDATE, mBindingsIds[2]);
    Image_img_tabs_settings.Location.unBind(gm::csm::VPM_CAMERA_SETTINGS_Y_LOCATION_UPDATE, mBindingsIds[3]);
    Image_img_btn_touchpoint_5.State.unBind(gm::csm::VPM_MFCBOWL, mBindingsIds[4]);
    Image_img_btn_touchpoint_2.State.unBind(gm::csm::VPM_MFCBOWL, mBindingsIds[5]);
    Image_img_btn_tabs_camera_bowl.State.unBind(gm::csm::VPM_FRONT_CAMERA_BOWL_STATE_INTERNAL, mBindingsIds[6]);
    Group_grp_img_exit.Visibility.unBind(gm::csm::Data_Close_Button_Visibility, mBindingsIds[7]);
    Image_img_btn_touchpoint_7.State.unBind(gm::csm::VPM_MFCBOWL, mBindingsIds[8]);
    Image_img_btn_touchpoint_8.State.unBind(gm::csm::VPM_MFCBOWL, mBindingsIds[9]);
    Image_img_btn_touchpoint_4.State.unBind(gm::csm::VPM_MFCBOWL, mBindingsIds[10]);
    Image_img_btn_tabs_camera_hitch.Location.unBind(gm::csm::VPM_CAMERA_HITCH_X_LOCATION_UPDATE, mBindingsIds[11]);
    Image_img_btn_tabs_camera_hitch.Location.unBind(gm::csm::VPM_CAMERA_HITCH_Y_LOCATION_UPDATE, mBindingsIds[12]);
    Image_img_btn_tabs_camera_hitch.Visibility.unBind(gm::csm::Data_VPM_RES_REARHITCH_VISIBILITY, mBindingsIds[13]);
    Image_img_btn_tabs_camera_hitch.State.unBind(gm::csm::VPM_REAR_CAMERA_HITCH_INTERNAL, mBindingsIds[14]);
    Image_img_btn_touchpoint_1.State.unBind(gm::csm::VPM_MFCBOWL, mBindingsIds[15]);
}

void Screen_8012::onScreenShow()
{
    mBindingsIds[0] = Image_img_btn_touchpoint_3.State.bind(gm::csm::VPM_MFCBOWL);
    mBindingsIds[1] = Image_img_btn_touchpoint_6.State.bind(gm::csm::VPM_MFCBOWL);
    
    auto location_1 = Image_img_tabs_settings.Location.bind(gm::csm::VPM_CAMERA_SETTINGS_X_LOCATION_UPDATE, gm::csm::VPM_CAMERA_SETTINGS_Y_LOCATION_UPDATE);

    mBindingsIds[2] = location_1.first;
    mBindingsIds[3] = location_1.second;

    mBindingsIds[4] = Image_img_btn_touchpoint_5.State.bind(gm::csm::VPM_MFCBOWL);
    mBindingsIds[5] = Image_img_btn_touchpoint_2.State.bind(gm::csm::VPM_MFCBOWL);
    mBindingsIds[6] = Image_img_btn_tabs_camera_bowl.State.bind(gm::csm::VPM_FRONT_CAMERA_BOWL_STATE_INTERNAL);
    mBindingsIds[7] = Group_grp_img_exit.Visibility.bind(gm::csm::Data_Close_Button_Visibility);
    mBindingsIds[8] = Image_img_btn_touchpoint_7.State.bind(gm::csm::VPM_MFCBOWL);
    mBindingsIds[9] = Image_img_btn_touchpoint_8.State.bind(gm::csm::VPM_MFCBOWL);
    mBindingsIds[10] = Image_img_btn_touchpoint_4.State.bind(gm::csm::VPM_MFCBOWL);
    
    auto location_2 = Image_img_btn_tabs_camera_hitch.Location.bind(gm::csm::VPM_CAMERA_HITCH_X_LOCATION_UPDATE, gm::csm::VPM_CAMERA_HITCH_Y_LOCATION_UPDATE);

    mBindingsIds[11] = location_2.first;
    mBindingsIds[12] = location_2.second;

    mBindingsIds[13] = Image_img_btn_tabs_camera_hitch.Visibility.bind(gm::csm::Data_VPM_RES_REARHITCH_VISIBILITY);
    mBindingsIds[14] = Image_img_btn_tabs_camera_hitch.State.bind(gm::csm::VPM_REAR_CAMERA_HITCH_INTERNAL);
    mBindingsIds[15] = Image_img_btn_touchpoint_1.State.bind(gm::csm::VPM_MFCBOWL);
}


}//namespace csm
}//namespace gm
