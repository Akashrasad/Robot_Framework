#include "Screen_8013.h"

#include "RTOS_CustomDataPool.h"
#include "RTOS_InternalData.h"
#include "WidgetData.h"
#include <cstdlib>

namespace gm
{
namespace csm
{


void Screen_8013::onScreenHide()
{
    Image_img_UPA_symbol_4.Visibility.unBind(gm::csm::Data_OBSTRUCTIONFOUND_Visibility_4, mBindingsIds[0]);
    Image_img_caution_right_Indicator_vpm.Visibility.unBind(gm::csm::Data_Right_RCTA_VPM_Visibility, mBindingsIds[1]);
    Image_img_UPA_symbol_4_vpm.Visibility.unBind(gm::csm::Data_VPM_OBSTRUCTIONFOUND_Visibility_4, mBindingsIds[2]);
    Image_img_UPA_symbol_3.Visibility.unBind(gm::csm::Data_OBSTRUCTIONFOUND_Visibility_3, mBindingsIds[3]);
    Image_img_caution_left_Indicator.Visibility.unBind(gm::csm::Data_Left_RCTA_Visibility, mBindingsIds[4]);
    Image_img_UPA_symbol_2_vpm.Visibility.unBind(gm::csm::Data_VPM_OBSTRUCTIONFOUND_Visibility_2, mBindingsIds[5]);
    Image_img_caution_right_Indicator.Visibility.unBind(gm::csm::Data_Right_RCTA_Visibility, mBindingsIds[6]);
    Image_img_pedestrain_alert_red_vpm.Visibility.unBind(gm::csm::Data_VPM_REAR_PEDESTRAIN_RED_VISIBILITY, mBindingsIds[7]);
    Image_img_UPA_symbol_2.Visibility.unBind(gm::csm::Data_OBSTRUCTIONFOUND_Visibility_2, mBindingsIds[8]);
    Image_img_pedestrain_alert_amber_vpm_surround.Visibility.unBind(gm::csm::Data_VPM_REAR_PEDESTRAIN_AMBER_VPM_VISIBILITY, mBindingsIds[9]);
    Image_img_btn_tabs_camera_hitch.Location.unBind(gm::csm::VPM_CAMERA_HITCH_X_LOCATION_UPDATE, mBindingsIds[10]);
    Image_img_btn_tabs_camera_hitch.Location.unBind(gm::csm::VPM_CAMERA_HITCH_Y_LOCATION_UPDATE, mBindingsIds[11]);
    Image_img_btn_tabs_camera_hitch.Visibility.unBind(gm::csm::Data_VPM_RES_REARHITCH_VISIBILITY, mBindingsIds[12]);
    Image_img_btn_tabs_camera_hitch.State.unBind(gm::csm::VPM_REAR_CAMERA_HITCH_INTERNAL, mBindingsIds[13]);
    Image_img_pedestrain_alert_amber_vpm.Visibility.unBind(gm::csm::Data_VPM_REAR_PEDESTRAIN_AMBER_VISIBILITY, mBindingsIds[14]);
    Image_img_btn_tabs_camera_bowl.Location.unBind(gm::csm::VPM_CAMERA_BOWL_X_LOCATION_UPDATE, mBindingsIds[15]);
    Image_img_btn_tabs_camera_bowl.Location.unBind(gm::csm::VPM_CAMERA_BOWL_Y_LOCATION_UPDATE, mBindingsIds[16]);
    Image_img_btn_tabs_camera_bowl.Visibility.unBind(gm::csm::Data_VPM_RES_BOWL_VISIBILITY, mBindingsIds[17]);
    Image_img_btn_tabs_camera_bowl.State.unBind(gm::csm::VPM_FRONT_CAMERA_BOWL_STATE_INTERNAL, mBindingsIds[18]);
    Image_img_caution_left_Indicator_vpm.Visibility.unBind(gm::csm::Data_Left_RCTA_VPM_Visibility, mBindingsIds[19]);
    Image_img_pedestrain_alert_red_vpm_surround.Visibility.unBind(gm::csm::Data_VPM_REAR_PEDESTRAIN_RED_VPM_VISIBILITY, mBindingsIds[20]);
    Image_img_UPA_symbol_3_vpm.Visibility.unBind(gm::csm::Data_VPM_OBSTRUCTIONFOUND_Visibility_3, mBindingsIds[21]);
    Image_img_UPA_symbol_1_vpm.Visibility.unBind(gm::csm::Data_VPM_OBSTRUCTIONFOUND_Visibility_1, mBindingsIds[22]);
    Group_grp_img_exit.Visibility.unBind(gm::csm::Data_Close_Button_Visibility, mBindingsIds[23]);
    Image_img_UPA_symbol_1.Visibility.unBind(gm::csm::Data_OBSTRUCTIONFOUND_Visibility_1, mBindingsIds[24]);
}

void Screen_8013::onScreenShow()
{
    mBindingsIds[0] = Image_img_UPA_symbol_4.Visibility.bind(gm::csm::Data_OBSTRUCTIONFOUND_Visibility_4);
    mBindingsIds[1] = Image_img_caution_right_Indicator_vpm.Visibility.bind(gm::csm::Data_Right_RCTA_VPM_Visibility);
    mBindingsIds[2] = Image_img_UPA_symbol_4_vpm.Visibility.bind(gm::csm::Data_VPM_OBSTRUCTIONFOUND_Visibility_4);
    mBindingsIds[3] = Image_img_UPA_symbol_3.Visibility.bind(gm::csm::Data_OBSTRUCTIONFOUND_Visibility_3);
    mBindingsIds[4] = Image_img_caution_left_Indicator.Visibility.bind(gm::csm::Data_Left_RCTA_Visibility);
    mBindingsIds[5] = Image_img_UPA_symbol_2_vpm.Visibility.bind(gm::csm::Data_VPM_OBSTRUCTIONFOUND_Visibility_2);
    mBindingsIds[6] = Image_img_caution_right_Indicator.Visibility.bind(gm::csm::Data_Right_RCTA_Visibility);
    mBindingsIds[7] = Image_img_pedestrain_alert_red_vpm.Visibility.bind(gm::csm::Data_VPM_REAR_PEDESTRAIN_RED_VISIBILITY);
    mBindingsIds[8] = Image_img_UPA_symbol_2.Visibility.bind(gm::csm::Data_OBSTRUCTIONFOUND_Visibility_2);
    mBindingsIds[9] = Image_img_pedestrain_alert_amber_vpm_surround.Visibility.bind(gm::csm::Data_VPM_REAR_PEDESTRAIN_AMBER_VPM_VISIBILITY);
    
    auto location_1 = Image_img_btn_tabs_camera_hitch.Location.bind(gm::csm::VPM_CAMERA_HITCH_X_LOCATION_UPDATE, gm::csm::VPM_CAMERA_HITCH_Y_LOCATION_UPDATE);

    mBindingsIds[10] = location_1.first;
    mBindingsIds[11] = location_1.second;

    mBindingsIds[12] = Image_img_btn_tabs_camera_hitch.Visibility.bind(gm::csm::Data_VPM_RES_REARHITCH_VISIBILITY);
    mBindingsIds[13] = Image_img_btn_tabs_camera_hitch.State.bind(gm::csm::VPM_REAR_CAMERA_HITCH_INTERNAL);
    mBindingsIds[14] = Image_img_pedestrain_alert_amber_vpm.Visibility.bind(gm::csm::Data_VPM_REAR_PEDESTRAIN_AMBER_VISIBILITY);
    
    auto location_2 = Image_img_btn_tabs_camera_bowl.Location.bind(gm::csm::VPM_CAMERA_BOWL_X_LOCATION_UPDATE, gm::csm::VPM_CAMERA_BOWL_Y_LOCATION_UPDATE);

    mBindingsIds[15] = location_2.first;
    mBindingsIds[16] = location_2.second;

    mBindingsIds[17] = Image_img_btn_tabs_camera_bowl.Visibility.bind(gm::csm::Data_VPM_RES_BOWL_VISIBILITY);
    mBindingsIds[18] = Image_img_btn_tabs_camera_bowl.State.bind(gm::csm::VPM_FRONT_CAMERA_BOWL_STATE_INTERNAL);
    mBindingsIds[19] = Image_img_caution_left_Indicator_vpm.Visibility.bind(gm::csm::Data_Left_RCTA_VPM_Visibility);
    mBindingsIds[20] = Image_img_pedestrain_alert_red_vpm_surround.Visibility.bind(gm::csm::Data_VPM_REAR_PEDESTRAIN_RED_VPM_VISIBILITY);
    mBindingsIds[21] = Image_img_UPA_symbol_3_vpm.Visibility.bind(gm::csm::Data_VPM_OBSTRUCTIONFOUND_Visibility_3);
    mBindingsIds[22] = Image_img_UPA_symbol_1_vpm.Visibility.bind(gm::csm::Data_VPM_OBSTRUCTIONFOUND_Visibility_1);
    mBindingsIds[23] = Group_grp_img_exit.Visibility.bind(gm::csm::Data_Close_Button_Visibility);
    mBindingsIds[24] = Image_img_UPA_symbol_1.Visibility.bind(gm::csm::Data_OBSTRUCTIONFOUND_Visibility_1);
}


}//namespace csm
}//namespace gm
