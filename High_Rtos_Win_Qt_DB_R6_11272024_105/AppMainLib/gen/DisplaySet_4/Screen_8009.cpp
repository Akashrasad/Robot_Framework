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
    Image_img_UPA_symbol_1.Visibility.unBind(Data_OBSTRUCTIONFOUND_Visibility_1, mBindingsIds[0]);
    Image_img_caution_right_Indicator.Visibility.unBind(Data_Right_RCTA_Visibility, mBindingsIds[1]);
    Image_img_btn_close_active.Visibility.unBind(gm::csm::Data_Close_Button_Visibility, mBindingsIds[2]);
    Image_img_btn_camera_wash.Visibility.unBind(gm::csm::VPM_CAMERA_WASH_BUTTON_VISIBILITY, mBindingsIds[3]);
    Image_img_pedestrain_alert_amber_vpm.Visibility.unBind(gm::csm::Data_VPM_REAR_PEDESTRAIN_AMBER_VISIBILITY, mBindingsIds[4]);
    Image_img_btn_camera_zoom_in_out.Visibility.unBind(gm::csm::VPM_CAMERA_ZOOM_BUTTON_VISIBILITY, mBindingsIds[5]);
    Image_img_btn_camera_zoom_in_out.State.unBind(gm::csm::VPM_CAMERA_ZOOM_BUTTON_SELECTION, mBindingsIds[6]);
    Image_img_UPA_symbol_4.Visibility.unBind(Data_OBSTRUCTIONFOUND_Visibility_4, mBindingsIds[7]);
    Image_img_pedestrain_alert_red_vpm.Visibility.unBind(gm::csm::Data_VPM_REAR_PEDESTRAIN_RED_VISIBILITY, mBindingsIds[8]);
    Image_img_UPA_symbol_3.Visibility.unBind(Data_OBSTRUCTIONFOUND_Visibility_3, mBindingsIds[9]);
    Image_img_UPA_symbol_2.Visibility.unBind(Data_OBSTRUCTIONFOUND_Visibility_2, mBindingsIds[10]);
}

void Screen_8009::onScreenShow()
{
    mBindingsIds[0] = Image_img_UPA_symbol_1.Visibility.bind(Data_OBSTRUCTIONFOUND_Visibility_1);
    mBindingsIds[1] = Image_img_caution_right_Indicator.Visibility.bind(Data_Right_RCTA_Visibility);
    mBindingsIds[2] = Image_img_btn_close_active.Visibility.bind(gm::csm::Data_Close_Button_Visibility);
    mBindingsIds[3] = Image_img_btn_camera_wash.Visibility.bind(gm::csm::VPM_CAMERA_WASH_BUTTON_VISIBILITY);
    mBindingsIds[4] = Image_img_pedestrain_alert_amber_vpm.Visibility.bind(gm::csm::Data_VPM_REAR_PEDESTRAIN_AMBER_VISIBILITY);
    mBindingsIds[5] = Image_img_btn_camera_zoom_in_out.Visibility.bind(gm::csm::VPM_CAMERA_ZOOM_BUTTON_VISIBILITY);
    mBindingsIds[6] = Image_img_btn_camera_zoom_in_out.State.bind(gm::csm::VPM_CAMERA_ZOOM_BUTTON_SELECTION);
    mBindingsIds[7] = Image_img_UPA_symbol_4.Visibility.bind(Data_OBSTRUCTIONFOUND_Visibility_4);
    mBindingsIds[8] = Image_img_pedestrain_alert_red_vpm.Visibility.bind(gm::csm::Data_VPM_REAR_PEDESTRAIN_RED_VISIBILITY);
    mBindingsIds[9] = Image_img_UPA_symbol_3.Visibility.bind(Data_OBSTRUCTIONFOUND_Visibility_3);
    mBindingsIds[10] = Image_img_UPA_symbol_2.Visibility.bind(Data_OBSTRUCTIONFOUND_Visibility_2);
}


}//namespace csm
}//namespace gm
