// Copyright (C) GM Global Technology Operations LLC 2024.
// All Rights Reserved.
// GM Confidential Restricted.
// 
// Designed and Developed by Rampgroup, © 2024 People Tech Group all rights reserved.

#ifndef VIEWEXPRESSIONS_H
#define VIEWEXPRESSIONS_H

#include "RampTypes.h"
#include <array>


namespace views 
{

 constexpr static size_t TotalViews = 121;
 constexpr static const char_t* const animation_view = "animation_view";
 constexpr static const char_t* const ics_1line_snackbar_view = "ics_1line_snackbar_view";
 constexpr static const char_t* const ics_2line_snackbar_view = "ics_2line_snackbar_view";
 constexpr static const char_t* const ics_3line_snackbar_view = "ics_3line_snackbar_view";
 constexpr static const char_t* const ics_aos_calibration_view = "ics_aos_calibration_view";
 constexpr static const char_t* const ics_apa_park_view = "ics_apa_park_view";
 constexpr static const char_t* const ics_apa_park_view_2000_974 = "ics_apa_park_view_2000_974";
 constexpr static const char_t* const ics_apa_park_view_3950_1320 = "ics_apa_park_view_3950_1320";
 constexpr static const char_t* const ics_apa_park_view_bg = "ics_apa_park_view_bg";
 constexpr static const char_t* const ics_apa_park_view_bg_2000_974 = "ics_apa_park_view_bg_2000_974";
 constexpr static const char_t* const ics_apa_park_view_bg_3950_1320 = "ics_apa_park_view_bg_3950_1320";
 constexpr static const char_t* const ics_apa_view = "ics_apa_view";
 constexpr static const char_t* const ics_apa_view_bg = "ics_apa_view_bg";
 constexpr static const char_t* const ics_camera_ctt_trailer_snackbars = "ics_camera_ctt_trailer_snackbars";
 constexpr static const char_t* const ics_camera_ctt_trailer_two_line_snackbars = "ics_camera_ctt_trailer_two_line_snackbars";
 constexpr static const char_t* const ics_camera_error_view = "ics_camera_error_view";
 constexpr static const char_t* const ics_camera_main_view = "ics_camera_main_view";
 constexpr static const char_t* const ics_camera_single_image_vpm_view = "ics_camera_single_image_vpm_view";
 constexpr static const char_t* const ics_camera_smart_control_view = "ics_camera_smart_control_view";
 constexpr static const char_t* const ics_camera_snackbar_view = "ics_camera_snackbar_view";
 constexpr static const char_t* const ics_camera_top_bar_view = "ics_camera_top_bar_view";
 constexpr static const char_t* const ics_camera_upa_symbols_view = "ics_camera_upa_symbols_view";
 constexpr static const char_t* const ics_camera_view = "ics_camera_view";
 constexpr static const char_t* const ics_dev_bottom_view = "ics_dev_bottom_view";
 constexpr static const char_t* const ics_dev_top_view = "ics_dev_top_view";
 constexpr static const char_t* const ics_dev_view = "ics_dev_view";
 constexpr static const char_t* const ics_dev_view_top_view = "ics_dev_view_top_view";
 constexpr static const char_t* const ics_dimming_view = "ics_dimming_view";
 constexpr static const char_t* const ics_dimming_view_lhd = "ics_dimming_view_lhd";
 constexpr static const char_t* const ics_generic_keyboard_view = "ics_generic_keyboard_view";
 constexpr static const char_t* const ics_hvac_bottom_air_direction_flyout_view = "ics_hvac_bottom_air_direction_flyout_view";
 constexpr static const char_t* const ics_hvac_bottom_bar_fly_out_air_direction_view = "ics_hvac_bottom_bar_fly_out_air_direction_view";
 constexpr static const char_t* const ics_hvac_bottom_bar_fly_out_seat_controls_left_view = "ics_hvac_bottom_bar_fly_out_seat_controls_left_view";
 constexpr static const char_t* const ics_hvac_bottom_bar_fly_out_seat_controls_right_view = "ics_hvac_bottom_bar_fly_out_seat_controls_right_view";
 constexpr static const char_t* const ics_hvac_bottom_bar_fly_out_temperature_controls_left_view = "ics_hvac_bottom_bar_fly_out_temperature_controls_left_view";
 constexpr static const char_t* const ics_hvac_bottom_bar_fly_out_temperature_controls_right_view = "ics_hvac_bottom_bar_fly_out_temperature_controls_right_view";
 constexpr static const char_t* const ics_hvac_bottom_bar_flyouts_view = "ics_hvac_bottom_bar_flyouts_view";
 constexpr static const char_t* const ics_hvac_bottom_bar_flyouts_view_left = "ics_hvac_bottom_bar_flyouts_view_left";
 constexpr static const char_t* const ics_hvac_bottom_bar_flyouts_view_right = "ics_hvac_bottom_bar_flyouts_view_right";
 constexpr static const char_t* const ics_hvac_bottom_bar_sz_flyouts_left_view = "ics_hvac_bottom_bar_sz_flyouts_left_view";
 constexpr static const char_t* const ics_hvac_bottom_bar_sz_right_flyouts_view = "ics_hvac_bottom_bar_sz_right_flyouts_view";
 constexpr static const char_t* const ics_hvac_bottom_bar_time_view = "ics_hvac_bottom_bar_time_view";
 constexpr static const char_t* const ics_hvac_bottom_bar_view = "ics_hvac_bottom_bar_view";
 constexpr static const char_t* const ics_jackknife_snackbar_view = "ics_jackknife_snackbar_view";
 constexpr static const char_t* const ics_keyboard_popup_view = "ics_keyboard_popup_view";
 constexpr static const char_t* const ics_main_view = "ics_main_view";
 constexpr static const char_t* const ics_notification_dismiss_simple_dialog_large_view = "ics_notification_dismiss_simple_dialog_large_view";
 constexpr static const char_t* const ics_notification_dismiss_simple_dialog_regular = "ics_notification_dismiss_simple_dialog_regular";
 constexpr static const char_t* const ics_notification_simple_dialog_action_buttons_large_view = "ics_notification_simple_dialog_action_buttons_large_view";
 constexpr static const char_t* const ics_notification_simple_dialog_action_buttons_view = "ics_notification_simple_dialog_action_buttons_view";
 constexpr static const char_t* const ics_notification_simple_dialog_dismiss_regular = "ics_notification_simple_dialog_dismiss_regular";
 constexpr static const char_t* const ics_notification_simple_dialog_dismiss_view = "ics_notification_simple_dialog_dismiss_view";
 constexpr static const char_t* const ics_notification_simple_dialog_dissmiss_view = "ics_notification_simple_dialog_dissmiss_view";
 constexpr static const char_t* const ics_notification_simple_dialog_dissmiss_view1 = "ics_notification_simple_dialog_dissmiss_view1";
 constexpr static const char_t* const ics_notification_simple_dialog_large_view = "ics_notification_simple_dialog_large_view";
 constexpr static const char_t* const ics_notification_simple_dialog_no_content_view = "ics_notification_simple_dialog_no_content_view";
 constexpr static const char_t* const ics_notification_simple_dialog_regular = "ics_notification_simple_dialog_regular";
 constexpr static const char_t* const ics_notification_simple_dialog_regular_1575_594 = "ics_notification_simple_dialog_regular_1575_594";
 constexpr static const char_t* const ics_notification_simple_dialog_regular_1757_663 = "ics_notification_simple_dialog_regular_1757_663";
 constexpr static const char_t* const ics_notification_simple_dialog_small_view = "ics_notification_simple_dialog_small_view";
 constexpr static const char_t* const ics_notification_simple_dialog_view = "ics_notification_simple_dialog_view";
 constexpr static const char_t* const ics_notification_view = "ics_notification_view";
 constexpr static const char_t* const ics_notification_view_1543_362 = "ics_notification_view_1543_362";
 constexpr static const char_t* const ics_notification_view_1545_463 = "ics_notification_view_1545_463";
 constexpr static const char_t* const ics_notification_view_1578_542 = "ics_notification_view_1578_542";
 constexpr static const char_t* const ics_notification_view_1651_503 = "ics_notification_view_1651_503";
 constexpr static const char_t* const ics_notification_view_2138_602 = "ics_notification_view_2138_602";
 constexpr static const char_t* const ics_notification_view_2138_820 = "ics_notification_view_2138_820";
 constexpr static const char_t* const ics_notification_view_large = "ics_notification_view_large";
 constexpr static const char_t* const ics_notification_view_medium = "ics_notification_view_medium";
 constexpr static const char_t* const ics_persistent_controls_view = "ics_persistent_controls_view";
 constexpr static const char_t* const ics_persistent_headlights_menu_options_view = "ics_persistent_headlights_menu_options_view";
 constexpr static const char_t* const ics_persistent_smart_controls_pop_up_view = "ics_persistent_smart_controls_pop_up_view";
 constexpr static const char_t* const ics_persistent_smart_controls_view = "ics_persistent_smart_controls_view";
 constexpr static const char_t* const ics_persistent_volume_knob_view = "ics_persistent_volume_knob_view";
 constexpr static const char_t* const ics_poweroutlets_notification_view_simple_dialog_body_content = "ics_poweroutlets_notification_view_simple_dialog_body_content";
 constexpr static const char_t* const ics_ppm_smart_controls_camera_view = "ics_ppm_smart_controls_camera_view";
 constexpr static const char_t* const ics_ppm_smart_controls_view = "ics_ppm_smart_controls_view";
 constexpr static const char_t* const ics_pts_view = "ics_pts_view";
 constexpr static const char_t* const ics_safety_view = "ics_safety_view";
 constexpr static const char_t* const ics_saftey_view = "ics_saftey_view";
 constexpr static const char_t* const ics_simple_dialog_2line_body_view = "ics_simple_dialog_2line_body_view";
 constexpr static const char_t* const ics_smart_controls_bottom_persistent_view = "ics_smart_controls_bottom_persistent_view";
 constexpr static const char_t* const ics_snackbar_1line_camera_view = "ics_snackbar_1line_camera_view";
 constexpr static const char_t* const ics_snackbar_1line_view = "ics_snackbar_1line_view";
 constexpr static const char_t* const ics_snackbar_1line_view_2138_184 = "ics_snackbar_1line_view_2138_184";
 constexpr static const char_t* const ics_snackbar_2line_dismiss_view = "ics_snackbar_2line_dismiss_view";
 constexpr static const char_t* const ics_snackbar_2line_view = "ics_snackbar_2line_view";
 constexpr static const char_t* const ics_snackbar_2line_view_2138_294 = "ics_snackbar_2line_view_2138_294";
 constexpr static const char_t* const ics_snackbar_3line_view = "ics_snackbar_3line_view";
 constexpr static const char_t* const ics_snackbar_camera_view = "ics_snackbar_camera_view";
 constexpr static const char_t* const ics_snackbar_view_1543_139 = "ics_snackbar_view_1543_139";
 constexpr static const char_t* const ics_snakbar_1line_view = "ics_snakbar_1line_view";
 constexpr static const char_t* const ics_snakbar_2line_view = "ics_snakbar_2line_view";
 constexpr static const char_t* const ics_snakbar_3line_view = "ics_snakbar_3line_view";
 constexpr static const char_t* const ics_touch_disable_snackbar_view = "ics_touch_disable_snackbar_view";
 constexpr static const char_t* const ics_touch_disabled_screen_view = "ics_touch_disabled_screen_view";
 constexpr static const char_t* const ics_vc_factory_reset_view = "ics_vc_factory_reset_view";
 constexpr static const char_t* const ics_vc_poweroutlets_snackbar_view = "ics_vc_poweroutlets_snackbar_view";
 constexpr static const char_t* const ics_vc_statusbar_notification_view = "ics_vc_statusbar_notification_view";
 constexpr static const char_t* const ics_vehicle_knob_view = "ics_vehicle_knob_view";
 constexpr static const char_t* const ics_virtual_china_regulation_view = "ics_virtual_china_regulation_view";
 constexpr static const char_t* const ics_virtual_controls_opd_view = "ics_virtual_controls_opd_view";
 constexpr static const char_t* const ics_virtual_controls_power_outlets_view = "ics_virtual_controls_power_outlets_view";
 constexpr static const char_t* const ics_virtual_controls_sroll_view_1740_974 = "ics_virtual_controls_sroll_view_1740_974";
 constexpr static const char_t* const main_view_34 = "main_view_34";
 constexpr static const char_t* const virtual_controls_background_view = "virtual_controls_background_view";
 constexpr static const char_t* const virtual_controls_full_notification_emergency_view = "virtual_controls_full_notification_emergency_view";
 constexpr static const char_t* const virtual_controls_full_notification_view = "virtual_controls_full_notification_view";
 constexpr static const char_t* const virtual_controls_power_outlets_view = "virtual_controls_power_outlets_view";
 constexpr static const char_t* const virtual_controls_scroll_view = "virtual_controls_scroll_view";
 constexpr static const char_t* const virtual_controls_scroll_view_2592_1133 = "virtual_controls_scroll_view_2592_1133";
 constexpr static const char_t* const virtual_controls_scroll_view_2930_1320 = "virtual_controls_scroll_view_2930_1320";
 constexpr static const char_t* const virtual_controls_t1ugf_scroll_view = "virtual_controls_t1ugf_scroll_view";
 constexpr static const char_t* const virtual_controls_view = "virtual_controls_view";
 constexpr static const char_t* const virtual_controls_view_2000_974 = "virtual_controls_view_2000_974";
 constexpr static const char_t* const virtual_controls_view_3950_1320 = "virtual_controls_view_3950_1320";
 constexpr static const char_t* const virtual_controls_view_bg = "virtual_controls_view_bg";
 constexpr static const char_t* const virtual_controls_view_bg_2000_974 = "virtual_controls_view_bg_2000_974";
 constexpr static const char_t* const virtual_controls_view_bg_2880_1130 = "virtual_controls_view_bg_2880_1130";
 constexpr static const char_t* const virtual_controls_view_bg_3950_1320 = "virtual_controls_view_bg_3950_1320";

} // namespace views

#endif // VIEWEXPRESSIONS_H
