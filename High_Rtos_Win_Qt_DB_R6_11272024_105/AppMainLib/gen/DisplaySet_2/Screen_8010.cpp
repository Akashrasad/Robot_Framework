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
    Image_img_btn_tabs_camera_bowl.State.unBind(gm::csm::VPM_FRONT_CAMERA_BOWL_STATE_INTERNAL, mBindingsIds[0]);
    Image_img_UPA_symbol_3_vpm.Visibility.unBind(Data_OBSTRUCTIONFOUND_Visibility_3, mBindingsIds[1]);
    Image_img_pedestrain_alert_amber_vpm.Visibility.unBind(gm::csm::Data_VPM_REAR_PEDESTRAIN_AMBER_VISIBILITY, mBindingsIds[2]);
    Image_img_UPA_symbol_2_vpm.Visibility.unBind(Data_OBSTRUCTIONFOUND_Visibility_2, mBindingsIds[3]);
    Image_img_btn_tabs_camera_hitch.State.unBind(gm::csm::VPM_REAR_CAMERA_HITCH_INTERNAL, mBindingsIds[4]);
    Group_grp_img_exit.Visibility.unBind(gm::csm::Data_Close_Button_Visibility, mBindingsIds[5]);
    Image_img_caution_left_Indicator_vpm.Visibility.unBind(Data_Left_RCTA_Visibility, mBindingsIds[6]);
    Image_img_UPA_symbol_1_vpm.Visibility.unBind(Data_OBSTRUCTIONFOUND_Visibility_1, mBindingsIds[7]);
    Image_img_UPA_symbol_4_vpm.Visibility.unBind(Data_OBSTRUCTIONFOUND_Visibility_4, mBindingsIds[8]);
    Image_img_pedestrain_alert_red_vpm.Visibility.unBind(gm::csm::Data_VPM_REAR_PEDESTRAIN_RED_VISIBILITY, mBindingsIds[9]);
    Image_img_caution_right_Indicator_vpm.Visibility.unBind(Data_Right_RCTA_Visibility, mBindingsIds[10]);
}

void Screen_8010::onScreenShow()
{
    mBindingsIds[0] = Image_img_btn_tabs_camera_bowl.State.bind(gm::csm::VPM_FRONT_CAMERA_BOWL_STATE_INTERNAL);
    mBindingsIds[1] = Image_img_UPA_symbol_3_vpm.Visibility.bind(Data_OBSTRUCTIONFOUND_Visibility_3);
    mBindingsIds[2] = Image_img_pedestrain_alert_amber_vpm.Visibility.bind(gm::csm::Data_VPM_REAR_PEDESTRAIN_AMBER_VISIBILITY);
    mBindingsIds[3] = Image_img_UPA_symbol_2_vpm.Visibility.bind(Data_OBSTRUCTIONFOUND_Visibility_2);
    mBindingsIds[4] = Image_img_btn_tabs_camera_hitch.State.bind(gm::csm::VPM_REAR_CAMERA_HITCH_INTERNAL);
    mBindingsIds[5] = Group_grp_img_exit.Visibility.bind(gm::csm::Data_Close_Button_Visibility);
    mBindingsIds[6] = Image_img_caution_left_Indicator_vpm.Visibility.bind(Data_Left_RCTA_Visibility);
    mBindingsIds[7] = Image_img_UPA_symbol_1_vpm.Visibility.bind(Data_OBSTRUCTIONFOUND_Visibility_1);
    mBindingsIds[8] = Image_img_UPA_symbol_4_vpm.Visibility.bind(Data_OBSTRUCTIONFOUND_Visibility_4);
    mBindingsIds[9] = Image_img_pedestrain_alert_red_vpm.Visibility.bind(gm::csm::Data_VPM_REAR_PEDESTRAIN_RED_VISIBILITY);
    mBindingsIds[10] = Image_img_caution_right_Indicator_vpm.Visibility.bind(Data_Right_RCTA_Visibility);
}


}//namespace csm
}//namespace gm
