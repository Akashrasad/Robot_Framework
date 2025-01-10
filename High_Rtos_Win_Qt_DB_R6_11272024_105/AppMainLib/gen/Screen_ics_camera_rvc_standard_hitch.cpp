#include "Screen_ics_camera_rvc_standard_hitch.h"

#include "RTOS_InternalData.h"
#include <cstdlib>

namespace gm
{
namespace csm
{


void Screen_ics_camera_rvc_standard_hitch::onScreenHide()
{
    Image_img_icn_cameraerror.mVisibility.unBind(gm::csm::Data_VPM_CAMERA_ERROR_ICON_VISIBILITY, mBindingsIds[0U]);
    Image_img_pedestrain_alert_red_vpm.mVisibility.unBind(gm::csm::Data_VPM_REAR_PEDESTRAIN_RED_VISIBILITY, mBindingsIds[1U]);
    Image_img_caution_right_Indicator.mVisibility.unBind(gm::csm::Data_Right_RCTA_Visibility, mBindingsIds[2U]);
    Image_img_hitch_zoom.mState.unBind(gm::csm::Data_RVC_HITCH_ZOOM_TOGGLE, mBindingsIds[3U]);
    Image_img_bg_black.mState.unBind(gm::csm::Data_RHD_CAMERA_BG_ENABLED, mBindingsIds[4U]);
    Image_img_side_pedestrain_red_amber_alert_rvc.mVisibility.unBind(gm::csm::Data_OBSTRUCTIONFOUND_Side_Visibility_2, mBindingsIds[5U]);
    Image_img_UPA_symbol_1.mVisibility.unBind(gm::csm::Data_OBSTRUCTIONFOUND_Visibility_1, mBindingsIds[6U]);
    Image_img_pedestrain_alert_amber_vpm.mVisibility.unBind(gm::csm::Data_VPM_REAR_PEDESTRAIN_AMBER_VISIBILITY, mBindingsIds[7U]);
    Image_img_UPA_symbol_3.mVisibility.unBind(gm::csm::Data_OBSTRUCTIONFOUND_Visibility_3, mBindingsIds[8U]);
    GroupImage_img_btn_close_active.mVisibility.unBind(gm::csm::Data_Close_Button_Visibility, mBindingsIds[9U]);
    Image_img_caution_left_Indicator.mVisibility.unBind(gm::csm::Data_Left_RCTA_Visibility, mBindingsIds[10U]);
    Image_img_UPA_symbol_4.mVisibility.unBind(gm::csm::Data_OBSTRUCTIONFOUND_Visibility_4, mBindingsIds[11U]);
    Image_img_guideliness_view.mState.unBind(gm::csm::Data_RVC_STANDARD_GUIDELINE_TOGGLE, mBindingsIds[12U]);
    Image_img_UPA_symbol_2.mVisibility.unBind(gm::csm::Data_OBSTRUCTIONFOUND_Visibility_2, mBindingsIds[13U]);
    RvcGuideLines_img_rvc_widget.mVisibility.unBind(gm::csm::RVC_GUIDELINES_VISIBILITY, mBindingsIds[14U]);
    RvcGuideLines_img_rvc_widget.mWheelAngle.unBind(gm::csm::RVC_STEERINGWHEEL_ANGLE, mBindingsIds[15U]);
    Group_grp_img_exit.mVisibility.unBind(gm::csm::Data_Close_Button_Visibility, mBindingsIds[16U]);
    Image_img_side_pedestrain_amber_alert_rvc.mVisibility.unBind(gm::csm::Data_VPM_SIDE_PEDESTRAIN_AMBER_VISIBILITY, mBindingsIds[17U]);
    Image_img_side_pedestrain_red_alert_rvc.mVisibility.unBind(gm::csm::Data_VPM_SIDE_PEDESTRAIN_RED_VISIBILITY, mBindingsIds[18U]);
}

void Screen_ics_camera_rvc_standard_hitch::onScreenShow()
{
    mBindingsIds[0U] = Image_img_icn_cameraerror.mVisibility.bind(gm::csm::Data_VPM_CAMERA_ERROR_ICON_VISIBILITY);
    mBindingsIds[1U] = Image_img_pedestrain_alert_red_vpm.mVisibility.bind(gm::csm::Data_VPM_REAR_PEDESTRAIN_RED_VISIBILITY);
    mBindingsIds[2U] = Image_img_caution_right_Indicator.mVisibility.bind(gm::csm::Data_Right_RCTA_Visibility);
    mBindingsIds[3U] = Image_img_hitch_zoom.mState.bind(gm::csm::Data_RVC_HITCH_ZOOM_TOGGLE);
    mBindingsIds[4U] = Image_img_bg_black.mState.bind(gm::csm::Data_RHD_CAMERA_BG_ENABLED);
    mBindingsIds[5U] = Image_img_side_pedestrain_red_amber_alert_rvc.mVisibility.bind(gm::csm::Data_OBSTRUCTIONFOUND_Side_Visibility_2);
    mBindingsIds[6U] = Image_img_UPA_symbol_1.mVisibility.bind(gm::csm::Data_OBSTRUCTIONFOUND_Visibility_1);
    mBindingsIds[7U] = Image_img_pedestrain_alert_amber_vpm.mVisibility.bind(gm::csm::Data_VPM_REAR_PEDESTRAIN_AMBER_VISIBILITY);
    mBindingsIds[8U] = Image_img_UPA_symbol_3.mVisibility.bind(gm::csm::Data_OBSTRUCTIONFOUND_Visibility_3);
    mBindingsIds[9U] = GroupImage_img_btn_close_active.mVisibility.bind(gm::csm::Data_Close_Button_Visibility);
    mBindingsIds[10U] = Image_img_caution_left_Indicator.mVisibility.bind(gm::csm::Data_Left_RCTA_Visibility);
    mBindingsIds[11U] = Image_img_UPA_symbol_4.mVisibility.bind(gm::csm::Data_OBSTRUCTIONFOUND_Visibility_4);
    mBindingsIds[12U] = Image_img_guideliness_view.mState.bind(gm::csm::Data_RVC_STANDARD_GUIDELINE_TOGGLE);
    mBindingsIds[13U] = Image_img_UPA_symbol_2.mVisibility.bind(gm::csm::Data_OBSTRUCTIONFOUND_Visibility_2);
    mBindingsIds[14U] = RvcGuideLines_img_rvc_widget.mVisibility.bind(gm::csm::RVC_GUIDELINES_VISIBILITY);
    mBindingsIds[15U] = RvcGuideLines_img_rvc_widget.mWheelAngle.bind(gm::csm::RVC_STEERINGWHEEL_ANGLE);
    mBindingsIds[16U] = Group_grp_img_exit.mVisibility.bind(gm::csm::Data_Close_Button_Visibility);
    mBindingsIds[17U] = Image_img_side_pedestrain_amber_alert_rvc.mVisibility.bind(gm::csm::Data_VPM_SIDE_PEDESTRAIN_AMBER_VISIBILITY);
    mBindingsIds[18U] = Image_img_side_pedestrain_red_alert_rvc.mVisibility.bind(gm::csm::Data_VPM_SIDE_PEDESTRAIN_RED_VISIBILITY);
}


} // namespace csm
} // namespace gm
