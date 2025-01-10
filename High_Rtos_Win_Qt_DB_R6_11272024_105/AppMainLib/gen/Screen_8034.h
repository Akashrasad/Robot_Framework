// Copyright (C) GM Global Technology Operations LLC 2024.
// All Rights Reserved.
// GM Confidential Restricted.
// 
// Designed and Developed by Rampgroup, © 2024 People Tech Group all rights reserved.

#ifndef SCREEN_8034_H
#define SCREEN_8034_H

#include "BindableScreenLogic.h"
#include "Flashing.h"
#include "WidgetProperties.h"
#include <array>

namespace gm
{
namespace csm
{


class Screen_8034 : public ::ramp::BindableScreenLogic
{
    public:
    Screen_8034(const std::string&  screen_id)  
    : ::ramp::BindableScreenLogic(screen_id)
    {
    }
    
    private:
    	 ::Bindable<bool> mImg_UPA_symbol_1Visibility;
    	 ::Bindable<bool> mImg_UPA_symbol_1_vpmVisibility;
    	 ::Bindable<bool> mImg_UPA_symbol_2Visibility;
    	 ::Bindable<bool> mImg_UPA_symbol_2_vpmVisibility;
    	 ::Bindable<bool> mImg_UPA_symbol_3Visibility;
    	 ::Bindable<bool> mImg_UPA_symbol_3_vpmVisibility;
    	 ::Bindable<bool> mImg_UPA_symbol_4Visibility;
    	 ::Bindable<bool> mImg_UPA_symbol_4_vpmVisibility;
    	 ::Bindable<bool> mImg_caution_left_IndicatorVisibility;
    	 ::Bindable<bool> mImg_caution_left_Indicator_vpmVisibility;
    	 ::Bindable<bool> mImg_caution_right_IndicatorVisibility;
    	 ::Bindable<bool> mImg_caution_right_Indicator_vpmVisibility;
    	 ::Bindable<bool> mImg_pedestrain_alert_vpmVisibility;
    	 ::Bindable<bool> mImg_pedestrain_alert_vpm_surroundVisibility;
    	 ::Bindable<bool> mImg_side_pedestrain_alertVisibility;
    	 ::Bindable<bool> mImg_side_pedestrain_alert_rvcVisibility;
    	 ::Bindable<bool> mImg_side_pedestrain_red_amber_alertVisibility;
    	 ::Bindable<bool> mImg_side_pedestrain_red_amber_alert_rvcVisibility;
    	widget_properties::ImageWidget Image_img_UPA_symbol_1{"img_UPA_symbol_1"};
    	widget_properties::ImageWidget Image_img_UPA_symbol_1_vpm{"img_UPA_symbol_1_vpm"};
    	widget_properties::ImageWidget Image_img_UPA_symbol_2{"img_UPA_symbol_2"};
    	widget_properties::ImageWidget Image_img_UPA_symbol_2_vpm{"img_UPA_symbol_2_vpm"};
    	widget_properties::ImageWidget Image_img_UPA_symbol_3{"img_UPA_symbol_3"};
    	widget_properties::ImageWidget Image_img_UPA_symbol_3_vpm{"img_UPA_symbol_3_vpm"};
    	widget_properties::ImageWidget Image_img_UPA_symbol_4{"img_UPA_symbol_4"};
    	widget_properties::ImageWidget Image_img_UPA_symbol_4_vpm{"img_UPA_symbol_4_vpm"};
    	widget_properties::ImageWidget Image_img_caution_left_Indicator{"img_caution_left_Indicator"};
    	widget_properties::ImageWidget Image_img_caution_left_Indicator_vpm{"img_caution_left_Indicator_vpm"};
    	widget_properties::ImageWidget Image_img_caution_right_Indicator{"img_caution_right_Indicator"};
    	widget_properties::ImageWidget Image_img_caution_right_Indicator_vpm{"img_caution_right_Indicator_vpm"};
    	widget_properties::ImageWidget Image_img_icn_cameraerror{"img_icn_cameraerror"};
    	widget_properties::ImageWidget Image_img_pedestrain_alert_vpm{"img_pedestrain_alert_vpm"};
    	widget_properties::ImageWidget Image_img_pedestrain_alert_vpm_surround{"img_pedestrain_alert_vpm_surround"};
    	widget_properties::ImageWidget Image_img_side_pedestrain_alert{"img_side_pedestrain_alert"};
    	widget_properties::ImageWidget Image_img_side_pedestrain_alert_rvc{"img_side_pedestrain_alert_rvc"};
    	widget_properties::ImageWidget Image_img_side_pedestrain_red_amber_alert{"img_side_pedestrain_red_amber_alert"};
    	widget_properties::ImageWidget Image_img_side_pedestrain_red_amber_alert_rvc{"img_side_pedestrain_red_amber_alert_rvc"};
    	std::array<BindingId, 5> mBindingsIds;
    	::ramp::Flashing* mFlashing_1{nullptr};
    	::ramp::Flashing* mFlashing_10{nullptr};
    	::ramp::Flashing* mFlashing_11{nullptr};
    	::ramp::Flashing* mFlashing_12{nullptr};
    	::ramp::Flashing* mFlashing_13{nullptr};
    	::ramp::Flashing* mFlashing_14{nullptr};
    	::ramp::Flashing* mFlashing_15{nullptr};
    	::ramp::Flashing* mFlashing_16{nullptr};
    	::ramp::Flashing* mFlashing_17{nullptr};
    	::ramp::Flashing* mFlashing_18{nullptr};
    	::ramp::Flashing* mFlashing_2{nullptr};
    	::ramp::Flashing* mFlashing_3{nullptr};
    	::ramp::Flashing* mFlashing_4{nullptr};
    	::ramp::Flashing* mFlashing_5{nullptr};
    	::ramp::Flashing* mFlashing_6{nullptr};
    	::ramp::Flashing* mFlashing_7{nullptr};
    	::ramp::Flashing* mFlashing_8{nullptr};
    	::ramp::Flashing* mFlashing_9{nullptr};
    private:
    void Widget_Logic_Visibility_img_pedestrain_alert_vpm() noexcept;
    private:
    void Widget_Logic_Visibility_img_UPA_symbol_1_vpm() noexcept;
    private:
    void Widget_Logic_Visibility_img_UPA_symbol_2() noexcept;
    private:
    void Widget_Logic_Visibility_img_pedestrain_alert_vpm_surround() noexcept;
    private:
    void Widget_Logic_Visibility_img_caution_left_Indicator_vpm() noexcept;
    private:
    void Widget_Logic_Visibility_img_UPA_symbol_3() noexcept;
    private:
    void Widget_Logic_Visibility_img_UPA_symbol_3_vpm() noexcept;
    private:
    void Widget_Logic_Visibility_img_side_pedestrain_alert_rvc() noexcept;
    private:
    void Widget_Logic_Visibility_img_side_pedestrain_red_amber_alert_rvc() noexcept;
    private:
    void Widget_Logic_Visibility_img_UPA_symbol_4() noexcept;
    private:
    void Widget_Logic_Visibility_img_UPA_symbol_4_vpm() noexcept;
    private:
    void Widget_Logic_Visibility_img_side_pedestrain_alert() noexcept;
    private:
    void Widget_Logic_Visibility_img_side_pedestrain_red_amber_alert() noexcept;
    private:
    void Widget_Logic_Visibility_img_caution_right_Indicator() noexcept;
    private:
    void Widget_Logic_Visibility_img_caution_left_Indicator() noexcept;
    private:
    void Widget_Logic_Visibility_img_UPA_symbol_2_vpm() noexcept;
    private:
    void Widget_Logic_Visibility_img_UPA_symbol_1() noexcept;
    private:
    void Widget_Logic_Visibility_img_caution_right_Indicator_vpm() noexcept;
    protected:
    void onScreenHide() override;
    protected:
    void onScreenShow() override;
};
} // namespace csm
} // namespace gm

#endif // SCREEN_8034_H
