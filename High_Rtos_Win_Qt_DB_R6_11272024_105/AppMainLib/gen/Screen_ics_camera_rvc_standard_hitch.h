#ifndef SCREEN_ICS_CAMERA_RVC_STANDARD_HITCH_H
#define SCREEN_ICS_CAMERA_RVC_STANDARD_HITCH_H

#include "BindableScreenLogic.h"
#include "WidgetProperties.h"
#include <array>

namespace gm
{
namespace csm
{


class Screen_ics_camera_rvc_standard_hitch : public BindableScreenLogic
{
    public:
    Screen_ics_camera_rvc_standard_hitch(const std::string&  screen_id)  
    : BindableScreenLogic(screen_id)
    {
    }
    
    private:
    	widget_properties::GroupImageWidget GroupImage_img_btn_close_active{"grp_img_exit","img_btn_close_active"};
    	widget_properties::GroupWidget Group_grp_img_exit{"grp_img_exit"};
    	widget_properties::ImageWidget Image_img_UPA_symbol_1{"img_UPA_symbol_1"};
    	widget_properties::ImageWidget Image_img_UPA_symbol_2{"img_UPA_symbol_2"};
    	widget_properties::ImageWidget Image_img_UPA_symbol_3{"img_UPA_symbol_3"};
    	widget_properties::ImageWidget Image_img_UPA_symbol_4{"img_UPA_symbol_4"};
    	widget_properties::ImageWidget Image_img_bg_black{"img_bg_black"};
    	widget_properties::ImageWidget Image_img_caution_left_Indicator{"img_caution_left_Indicator"};
    	widget_properties::ImageWidget Image_img_caution_right_Indicator{"img_caution_right_Indicator"};
    	widget_properties::ImageWidget Image_img_guideliness_view{"img_guideliness_view"};
    	widget_properties::ImageWidget Image_img_hitch_zoom{"img_hitch_zoom"};
    	widget_properties::ImageWidget Image_img_icn_cameraerror{"img_icn_cameraerror"};
    	widget_properties::ImageWidget Image_img_pedestrain_alert_amber_vpm{"img_pedestrain_alert_amber_vpm"};
    	widget_properties::ImageWidget Image_img_pedestrain_alert_red_vpm{"img_pedestrain_alert_red_vpm"};
    	widget_properties::ImageWidget Image_img_side_pedestrain_amber_alert_rvc{"img_side_pedestrain_amber_alert_rvc"};
    	widget_properties::ImageWidget Image_img_side_pedestrain_red_alert_rvc{"img_side_pedestrain_red_alert_rvc"};
    	widget_properties::ImageWidget Image_img_side_pedestrain_red_amber_alert_rvc{"img_side_pedestrain_red_amber_alert_rvc"};
    	widget_properties::RvcGuideLinesWidget RvcGuideLines_img_rvc_widget{"img_rvc_widget"};
    	std::array<BindingId, 19> mBindingsIds;
    protected:
    void onScreenHide() override;
    protected:
    void onScreenShow() override;
};
} // namespace csm
} // namespace gm

#endif // SCREEN_ICS_CAMERA_RVC_STANDARD_HITCH_H
