#include "Screen_8010.h"

#include "RTOS_InternalData.h"
#include "WidgetData.h"
#include <cstdlib>

namespace gm
{
namespace csm
{


void Screen_8010::onScreenHide()
{
    Image_img_pedestrain_alert_amber_vpm_surround.Visibility.unBind(gm::csm::Data_VPM_REAR_PEDESTRAIN_AMBER_VPM_VISIBILITY, mBindingsIds[0]);
    Image_img_caution_left_Indicator.Visibility.unBind(Data_Left_RCTA_Visibility, mBindingsIds[1]);
    Image_img_btn_tabs_camera_bowl.State.unBind(gm::csm::VPM_FRONT_CAMERA_BOWL_STATE_INTERNAL, mBindingsIds[2]);
    Image_img_UPA_symbol_3_vpm.Visibility.unBind(gm::csm::Data_VPM_OBSTRUCTIONFOUND_Visibility_3, mBindingsIds[3]);
    Image_img_pedestrain_alert_amber_vpm.Visibility.unBind(gm::csm::Data_VPM_REAR_PEDESTRAIN_AMBER_VISIBILITY, mBindingsIds[4]);
    Image_img_UPA_symbol_2_vpm.Visibility.unBind(gm::csm::Data_VPM_OBSTRUCTIONFOUND_Visibility_2, mBindingsIds[5]);
    Image_img_UPA_symbol_4.Visibility.unBind(gm::csm::Data_OBSTRUCTIONFOUND_Visibility_4, mBindingsIds[6]);
    Image_img_btn_tabs_camera_hitch.State.unBind(gm::csm::VPM_REAR_CAMERA_HITCH_INTERNAL, mBindingsIds[7]);
    Image_img_UPA_symbol_1.Visibility.unBind(gm::csm::Data_OBSTRUCTIONFOUND_Visibility_1, mBindingsIds[8]);
    Group_grp_img_exit.Visibility.unBind(gm::csm::Data_Close_Button_Visibility, mBindingsIds[9]);
    Image_img_UPA_symbol_3.Visibility.unBind(gm::csm::Data_OBSTRUCTIONFOUND_Visibility_3, mBindingsIds[10]);
    Image_img_caution_left_Indicator_vpm.Visibility.unBind(gm::csm::Data_Left_RCTA_VPM_Visibility, mBindingsIds[11]);
    Image_img_UPA_symbol_1_vpm.Visibility.unBind(gm::csm::Data_VPM_OBSTRUCTIONFOUND_Visibility_1, mBindingsIds[12]);
    Image_img_pedestrain_alert_red_vpm_surround.Visibility.unBind(gm::csm::Data_VPM_REAR_PEDESTRAIN_RED_VPM_VISIBILITY, mBindingsIds[13]);
    Image_img_UPA_symbol_4_vpm.Visibility.unBind(gm::csm::Data_VPM_OBSTRUCTIONFOUND_Visibility_4, mBindingsIds[14]);
    Image_img_UPA_symbol_2.Visibility.unBind(gm::csm::Data_OBSTRUCTIONFOUND_Visibility_2, mBindingsIds[15]);
    Image_img_caution_right_Indicator.Visibility.unBind(gm::csm::Data_Right_RCTA_Visibility, mBindingsIds[16]);
    Image_img_pedestrain_alert_red_vpm.Visibility.unBind(gm::csm::Data_VPM_REAR_PEDESTRAIN_RED_VISIBILITY, mBindingsIds[17]);
    Image_img_caution_right_Indicator_vpm.Visibility.unBind(gm::csm::Data_Right_RCTA_VPM_Visibility, mBindingsIds[18]);
}

void Screen_8010::onScreenShow()
{
    mBindingsIds[0] = Image_img_pedestrain_alert_amber_vpm_surround.Visibility.bind(gm::csm::Data_VPM_REAR_PEDESTRAIN_AMBER_VPM_VISIBILITY);
    mBindingsIds[1] = Image_img_caution_left_Indicator.Visibility.bind(Data_Left_RCTA_Visibility);
    mBindingsIds[2] = Image_img_btn_tabs_camera_bowl.State.bind(gm::csm::VPM_FRONT_CAMERA_BOWL_STATE_INTERNAL);
    mBindingsIds[3] = Image_img_UPA_symbol_3_vpm.Visibility.bind(gm::csm::Data_VPM_OBSTRUCTIONFOUND_Visibility_3);
    mBindingsIds[4] = Image_img_pedestrain_alert_amber_vpm.Visibility.bind(gm::csm::Data_VPM_REAR_PEDESTRAIN_AMBER_VISIBILITY);
    mBindingsIds[5] = Image_img_UPA_symbol_2_vpm.Visibility.bind(gm::csm::Data_VPM_OBSTRUCTIONFOUND_Visibility_2);
    mBindingsIds[6] = Image_img_UPA_symbol_4.Visibility.bind(gm::csm::Data_OBSTRUCTIONFOUND_Visibility_4);
    mBindingsIds[7] = Image_img_btn_tabs_camera_hitch.State.bind(gm::csm::VPM_REAR_CAMERA_HITCH_INTERNAL);
    mBindingsIds[8] = Image_img_UPA_symbol_1.Visibility.bind(gm::csm::Data_OBSTRUCTIONFOUND_Visibility_1);
    mBindingsIds[9] = Group_grp_img_exit.Visibility.bind(gm::csm::Data_Close_Button_Visibility);
    mBindingsIds[10] = Image_img_UPA_symbol_3.Visibility.bind(gm::csm::Data_OBSTRUCTIONFOUND_Visibility_3);
    mBindingsIds[11] = Image_img_caution_left_Indicator_vpm.Visibility.bind(gm::csm::Data_Left_RCTA_VPM_Visibility);
    mBindingsIds[12] = Image_img_UPA_symbol_1_vpm.Visibility.bind(gm::csm::Data_VPM_OBSTRUCTIONFOUND_Visibility_1);
    mBindingsIds[13] = Image_img_pedestrain_alert_red_vpm_surround.Visibility.bind(gm::csm::Data_VPM_REAR_PEDESTRAIN_RED_VPM_VISIBILITY);
    mBindingsIds[14] = Image_img_UPA_symbol_4_vpm.Visibility.bind(gm::csm::Data_VPM_OBSTRUCTIONFOUND_Visibility_4);
    mBindingsIds[15] = Image_img_UPA_symbol_2.Visibility.bind(gm::csm::Data_OBSTRUCTIONFOUND_Visibility_2);
    mBindingsIds[16] = Image_img_caution_right_Indicator.Visibility.bind(gm::csm::Data_Right_RCTA_Visibility);
    mBindingsIds[17] = Image_img_pedestrain_alert_red_vpm.Visibility.bind(gm::csm::Data_VPM_REAR_PEDESTRAIN_RED_VISIBILITY);
    mBindingsIds[18] = Image_img_caution_right_Indicator_vpm.Visibility.bind(gm::csm::Data_Right_RCTA_VPM_Visibility);
}


}//namespace csm
}//namespace gm
