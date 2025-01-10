#include "Screen_8009.h"

#include "RTOS_InternalData.h"
#include "WidgetData.h"
#include <cstdlib>

namespace gm
{
namespace csm
{


void Screen_8009::onScreenHide()
{
    Image_img_UPA_symbol_1_vpm.Visibility.unBind(gm::csm::Data_VPM_OBSTRUCTIONFOUND_Visibility_1, mBindingsIds[0]);
    Image_img_pedestrain_alert_red_vpm_surround.Visibility.unBind(gm::csm::Data_VPM_REAR_PEDESTRAIN_RED_VPM_VISIBILITY, mBindingsIds[1]);
    Image_img_UPA_symbol_3_vpm.Visibility.unBind(gm::csm::Data_VPM_OBSTRUCTIONFOUND_Visibility_3, mBindingsIds[2]);
    Image_img_UPA_symbol_1.Visibility.unBind(Data_OBSTRUCTIONFOUND_Visibility_1, mBindingsIds[3]);
    Image_img_caution_right_Indicator.Visibility.unBind(Data_Right_RCTA_Visibility, mBindingsIds[4]);
    Image_img_btn_close_active.Visibility.unBind(gm::csm::Data_Close_Button_Visibility, mBindingsIds[5]);
    Image_img_UPA_symbol_4_vpm.Visibility.unBind(gm::csm::Data_VPM_OBSTRUCTIONFOUND_Visibility_4, mBindingsIds[6]);
    Image_img_btn_camera_wash.Visibility.unBind(gm::csm::VPM_CAMERA_WASH_BUTTON_VISIBILITY, mBindingsIds[7]);
    Image_img_caution_left_Indicator.Visibility.unBind(Data_Left_RCTA_Visibility, mBindingsIds[8]);
    Image_img_pedestrain_alert_amber_vpm.Visibility.unBind(gm::csm::Data_VPM_REAR_PEDESTRAIN_AMBER_VISIBILITY, mBindingsIds[9]);
    Image_img_btn_camera_zoom_in_out.Visibility.unBind(gm::csm::VPM_CAMERA_ZOOM_BUTTON_VISIBILITY, mBindingsIds[10]);
    Image_img_btn_camera_zoom_in_out.State.unBind(gm::csm::VPM_CAMERA_ZOOM_BUTTON_SELECTION, mBindingsIds[11]);
    Image_img_UPA_symbol_4.Visibility.unBind(Data_OBSTRUCTIONFOUND_Visibility_4, mBindingsIds[12]);
    Image_img_pedestrain_alert_red_vpm.Visibility.unBind(gm::csm::Data_VPM_REAR_PEDESTRAIN_RED_VISIBILITY, mBindingsIds[13]);
    Image_img_UPA_symbol_3.Visibility.unBind(Data_OBSTRUCTIONFOUND_Visibility_3, mBindingsIds[14]);
    Image_img_UPA_symbol_2_vpm.Visibility.unBind(gm::csm::Data_VPM_OBSTRUCTIONFOUND_Visibility_2, mBindingsIds[15]);
    Image_img_caution_right_Indicator_vpm.Visibility.unBind(gm::csm::Data_Right_RCTA_VPM_Visibility, mBindingsIds[16]);
    Image_img_UPA_symbol_2.Visibility.unBind(Data_OBSTRUCTIONFOUND_Visibility_2, mBindingsIds[17]);
    Image_img_caution_left_Indicator_vpm.Visibility.unBind(gm::csm::Data_Left_RCTA_VPM_Visibility, mBindingsIds[18]);
    Image_img_pedestrain_alert_amber_vpm_surround.Visibility.unBind(gm::csm::Data_VPM_REAR_PEDESTRAIN_AMBER_VPM_VISIBILITY, mBindingsIds[19]);
}

void Screen_8009::onScreenShow()
{
    mBindingsIds[0] = Image_img_UPA_symbol_1_vpm.Visibility.bind(gm::csm::Data_VPM_OBSTRUCTIONFOUND_Visibility_1);
    mBindingsIds[1] = Image_img_pedestrain_alert_red_vpm_surround.Visibility.bind(gm::csm::Data_VPM_REAR_PEDESTRAIN_RED_VPM_VISIBILITY);
    mBindingsIds[2] = Image_img_UPA_symbol_3_vpm.Visibility.bind(gm::csm::Data_VPM_OBSTRUCTIONFOUND_Visibility_3);
    mBindingsIds[3] = Image_img_UPA_symbol_1.Visibility.bind(Data_OBSTRUCTIONFOUND_Visibility_1);
    mBindingsIds[4] = Image_img_caution_right_Indicator.Visibility.bind(Data_Right_RCTA_Visibility);
    mBindingsIds[5] = Image_img_btn_close_active.Visibility.bind(gm::csm::Data_Close_Button_Visibility);
    mBindingsIds[6] = Image_img_UPA_symbol_4_vpm.Visibility.bind(gm::csm::Data_VPM_OBSTRUCTIONFOUND_Visibility_4);
    mBindingsIds[7] = Image_img_btn_camera_wash.Visibility.bind(gm::csm::VPM_CAMERA_WASH_BUTTON_VISIBILITY);
    mBindingsIds[8] = Image_img_caution_left_Indicator.Visibility.bind(Data_Left_RCTA_Visibility);
    mBindingsIds[9] = Image_img_pedestrain_alert_amber_vpm.Visibility.bind(gm::csm::Data_VPM_REAR_PEDESTRAIN_AMBER_VISIBILITY);
    mBindingsIds[10] = Image_img_btn_camera_zoom_in_out.Visibility.bind(gm::csm::VPM_CAMERA_ZOOM_BUTTON_VISIBILITY);
    mBindingsIds[11] = Image_img_btn_camera_zoom_in_out.State.bind(gm::csm::VPM_CAMERA_ZOOM_BUTTON_SELECTION);
    mBindingsIds[12] = Image_img_UPA_symbol_4.Visibility.bind(Data_OBSTRUCTIONFOUND_Visibility_4);
    mBindingsIds[13] = Image_img_pedestrain_alert_red_vpm.Visibility.bind(gm::csm::Data_VPM_REAR_PEDESTRAIN_RED_VISIBILITY);
    mBindingsIds[14] = Image_img_UPA_symbol_3.Visibility.bind(Data_OBSTRUCTIONFOUND_Visibility_3);
    mBindingsIds[15] = Image_img_UPA_symbol_2_vpm.Visibility.bind(gm::csm::Data_VPM_OBSTRUCTIONFOUND_Visibility_2);
    mBindingsIds[16] = Image_img_caution_right_Indicator_vpm.Visibility.bind(gm::csm::Data_Right_RCTA_VPM_Visibility);
    mBindingsIds[17] = Image_img_UPA_symbol_2.Visibility.bind(Data_OBSTRUCTIONFOUND_Visibility_2);
    mBindingsIds[18] = Image_img_caution_left_Indicator_vpm.Visibility.bind(gm::csm::Data_Left_RCTA_VPM_Visibility);
    mBindingsIds[19] = Image_img_pedestrain_alert_amber_vpm_surround.Visibility.bind(gm::csm::Data_VPM_REAR_PEDESTRAIN_AMBER_VPM_VISIBILITY);
}


}//namespace csm
}//namespace gm
