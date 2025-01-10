#ifndef SCREENEXPERSSIONS_H
#define SCREENEXPERSSIONS_H

#include "StringUtils.h"
#include <array>


namespace screens 
{

static const size_t TotalScreens = 358;
constexpr static const char_t* const ics_animation_startup = "1001";
constexpr static const char_t* const ics_apa_auto_steering_on = "7022";
constexpr static const char_t* const ics_apa_back_ground_update = "7031";
constexpr static const char_t* const ics_apa_camera_view = "7015";
constexpr static const char_t* const ics_apa_canceled_over_max_speed_snackbar = "7020";
constexpr static const char_t* const ics_apa_connecting_to_mybrand_app = "7013";
constexpr static const char_t* const ics_apa_deactiated_speed_snack_bar = "6072";
constexpr static const char_t* const ics_apa_deactivated_snack_bar = "7018";
constexpr static const char_t* const ics_apa_emergency_brake_off = "7023";
constexpr static const char_t* const ics_apa_exit_park_drawer = "7002";
constexpr static const char_t* const ics_apa_exit_selection = "7039";
constexpr static const char_t* const ics_apa_in_vehicle_park_hand_off = "7012";
constexpr static const char_t* const ics_apa_park_drawer = "7001";
constexpr static const char_t* const ics_apa_park_instr_parallel_left = "7006";
constexpr static const char_t* const ics_apa_park_instr_parallel_right = "7005";
constexpr static const char_t* const ics_apa_park_instr_perp_left = "7004";
constexpr static const char_t* const ics_apa_park_instructions_perp_right = "7003";
constexpr static const char_t* const ics_apa_park_instructions_selection_drawer = "7030";
constexpr static const char_t* const ics_apa_park_selection = "7038";
constexpr static const char_t* const ics_apa_remote_exit_handoff = "7025";
constexpr static const char_t* const ics_apa_remote_park_handoff = "7024";
constexpr static const char_t* const ics_apa_shift_to_reverse_parallel_left = "7036";
constexpr static const char_t* const ics_apa_shift_to_reverse_parallel_right = "7037";
constexpr static const char_t* const ics_apa_slowdown_appr_max_speed_snackbar = "7019";
constexpr static const char_t* const ics_apa_space_found_parallel_left = "7010";
constexpr static const char_t* const ics_apa_space_found_parallel_left_srp = "7027";
constexpr static const char_t* const ics_apa_space_found_parallel_right = "7009";
constexpr static const char_t* const ics_apa_space_found_parallel_right_srp = "7026";
constexpr static const char_t* const ics_apa_space_found_perp_left = "7008";
constexpr static const char_t* const ics_apa_space_found_perp_left_srp = "7029";
constexpr static const char_t* const ics_apa_space_found_perp_right = "7007";
constexpr static const char_t* const ics_apa_space_found_perp_right_srp = "7028";
constexpr static const char_t* const ics_apa_spot_found_parallel_left = "7033";
constexpr static const char_t* const ics_apa_spot_found_parallel_right = "7032";
constexpr static const char_t* const ics_apa_spot_found_perp_left = "7035";
constexpr static const char_t* const ics_apa_spot_found_perp_right = "7034";
constexpr static const char_t* const ics_apa_stay_or_remote_park = "7011";
constexpr static const char_t* const ics_apa_unable_to_connect = "7014";
constexpr static const char_t* const ics_apa_unavailable_snack_bar = "6071";
constexpr static const char_t* const ics_apa_unavailable_snack_bar_at_ultra_cruise = "6093";
constexpr static const char_t* const ics_brightness_control_screen = "7051";
constexpr static const char_t* const ics_camera_aux_camera_not_connected_uvs_only = "ics_camera_aux_camera_not_connected_uvs_only";
constexpr static const char_t* const ics_camera_bowl_mfcfocused = "8012";
constexpr static const char_t* const ics_camera_bowl_touch = "ics_camera_bowl_touch";
constexpr static const char_t* const ics_camera_calibration_unsuccessful_snackbar = "ics_camera_calibration_unsuccessful_snackbar";
constexpr static const char_t* const ics_camera_drive_forward_snackbar = "ics_camera_drive_forward_snackbar";
constexpr static const char_t* const ics_camera_guideline_and_icon_turning_interface = "ics_camera_guideline_and_icon_turning_interface";
constexpr static const char_t* const ics_camera_icon_overlay_placement = "ics_camera_icon_overlay_placement";
constexpr static const char_t* const ics_camera_jack_knife_amber_snackbar = "ics_camera_jack_knife_amber_snackbar";
constexpr static const char_t* const ics_camera_jack_knife_red_snackbar = "ics_camera_jack_knife_red_snackbar";
constexpr static const char_t* const ics_camera_rvc_fullviewcamera = "8004";
constexpr static const char_t* const ics_camera_rvc_standard_trailer = "8002";
constexpr static const char_t* const ics_camera_rvc_standard_trailer_hitch = "8003";
constexpr static const char_t* const ics_camera_rvc_standard_view = "8001";
constexpr static const char_t* const ics_camera_rvc_system_error = "8008";
constexpr static const char_t* const ics_camera_settings = "8013";
constexpr static const char_t* const ics_camera_svr = "ics_camera_svr";
constexpr static const char_t* const ics_camera_svr_full_dialog = "ics_camera_svr_full_dialog";
constexpr static const char_t* const ics_camera_svr_list = "ics_camera_svr_list";
constexpr static const char_t* const ics_camera_vpm_rearview_topdown_multipart_buttons = "8009";
constexpr static const char_t* const ics_default_chinese_keyboard_screen = "615";
constexpr static const char_t* const ics_default_keyboard_screen = "515";
constexpr static const char_t* const ics_default_numerical_screen = "516";
constexpr static const char_t* const ics_default_special_character_screen = "517";
constexpr static const char_t* const ics_exit_button = "8014";
constexpr static const char_t* const ics_hvac_bottom_bar_right_singlezone_seats = "9013";
constexpr static const char_t* const ics_highmid_keyboard_alphabet_key10_popup = "2004";
constexpr static const char_t* const ics_highmid_keyboard_alphabet_key11_popup = "2005";
constexpr static const char_t* const ics_highmid_keyboard_alphabet_key12_popup = "2006";
constexpr static const char_t* const ics_highmid_keyboard_alphabet_key1_popup = "2003";
constexpr static const char_t* const ics_highmid_keyboard_alphabet_key23_popup = "2008";
constexpr static const char_t* const ics_highmid_keyboard_alphabet_key26_popup = "2009";
constexpr static const char_t* const ics_highmid_keyboard_alphabet_key2_popup = "2007";
constexpr static const char_t* const ics_highmid_keyboard_alphabet_key3_popup = "2010";
constexpr static const char_t* const ics_highmid_keyboard_alphabet_key4_popup = "2011";
constexpr static const char_t* const ics_highmid_keyboard_alphabet_key5_popup = "2012";
constexpr static const char_t* const ics_highmid_keyboard_alphabet_key6_popup = "2013";
constexpr static const char_t* const ics_highmid_keyboard_alphabet_key7_popup = "2014";
constexpr static const char_t* const ics_highmid_keyboard_alphabet_key8_popup = "2015";
constexpr static const char_t* const ics_highmid_keyboard_alphabet_key9_popup = "2016";
constexpr static const char_t* const ics_highmid_keyboard_numeric_key10_popup = "2018";
constexpr static const char_t* const ics_highmid_keyboard_numeric_key14_popup = "2019";
constexpr static const char_t* const ics_highmid_keyboard_numeric_key16_popup = "2020";
constexpr static const char_t* const ics_highmid_keyboard_numeric_key17_popup = "2021";
constexpr static const char_t* const ics_highmid_keyboard_numeric_key18_popup = "2022";
constexpr static const char_t* const ics_highmid_keyboard_numeric_key19_popup = "2023";
constexpr static const char_t* const ics_highmid_keyboard_numeric_key1_popup = "2017";
constexpr static const char_t* const ics_highmid_keyboard_numeric_key21_popup = "2025";
constexpr static const char_t* const ics_highmid_keyboard_numeric_key22_popup = "2026";
constexpr static const char_t* const ics_highmid_keyboard_numeric_key27_popup = "2027";
constexpr static const char_t* const ics_highmid_keyboard_numeric_key2_popup = "2024";
constexpr static const char_t* const ics_highmid_keyboard_numeric_key3_popup = "2028";
constexpr static const char_t* const ics_highmid_keyboard_numeric_key4_popup = "2029";
constexpr static const char_t* const ics_highmid_keyboard_numeric_key5_popup = "2030";
constexpr static const char_t* const ics_highmid_keyboard_numeric_key7_popup = "2031";
constexpr static const char_t* const ics_highmid_keyboard_symbol_key13_popup = "2032";
constexpr static const char_t* const ics_highmid_keyboard_symbol_key15_popup = "2033";
constexpr static const char_t* const ics_highmid_keyboard_symbol_key16_popup = "2034";
constexpr static const char_t* const ics_highmid_keyboard_symbol_key17_popup = "2035";
constexpr static const char_t* const ics_highmid_keyboard_symbol_key24_popup = "2037";
constexpr static const char_t* const ics_highmid_keyboard_symbol_key25_popup = "2038";
constexpr static const char_t* const ics_highmid_keyboard_symbol_key2_popup = "2036";
constexpr static const char_t* const ics_highmid_keyboard_symbol_key32_popup = "2039";
constexpr static const char_t* const ics_highmid_keyboard_symbol_key4_popup = "2040";
constexpr static const char_t* const ics_highmid_keyboard_symbol_key6_popup = "2041";
constexpr static const char_t* const ics_highmid_keyboard_symbol_key9_popup = "2042";
constexpr static const char_t* const ics_highmid_spanish_keyboard_alphabet_key10_popup = "2046";
constexpr static const char_t* const ics_highmid_spanish_keyboard_alphabet_key11_popup = "2047";
constexpr static const char_t* const ics_highmid_spanish_keyboard_alphabet_key1_popup = "2045";
constexpr static const char_t* const ics_highmid_spanish_keyboard_alphabet_key24_popup = "2049";
constexpr static const char_t* const ics_highmid_spanish_keyboard_alphabet_key27_popup = "2050";
constexpr static const char_t* const ics_highmid_spanish_keyboard_alphabet_key2_popup = "2048";
constexpr static const char_t* const ics_highmid_spanish_keyboard_alphabet_key3_popup = "2051";
constexpr static const char_t* const ics_highmid_spanish_keyboard_alphabet_key4_popup = "2052";
constexpr static const char_t* const ics_highmid_spanish_keyboard_alphabet_key5_popup = "2053";
constexpr static const char_t* const ics_highmid_spanish_keyboard_alphabet_key6_popup = "2054";
constexpr static const char_t* const ics_highmid_spanish_keyboard_alphabet_key7_popup = "2055";
constexpr static const char_t* const ics_highmid_spanish_keyboard_alphabet_key8_popup = "2056";
constexpr static const char_t* const ics_highmid_spanish_keyboard_alphabet_key9_popup = "2057";
constexpr static const char_t* const ics_highmid_spanish_keyboard_numeric_key10_popup = "2059";
constexpr static const char_t* const ics_highmid_spanish_keyboard_numeric_key14_popup = "2060";
constexpr static const char_t* const ics_highmid_spanish_keyboard_numeric_key16_popup = "2061";
constexpr static const char_t* const ics_highmid_spanish_keyboard_numeric_key17_popup = "2062";
constexpr static const char_t* const ics_highmid_spanish_keyboard_numeric_key18_popup = "2063";
constexpr static const char_t* const ics_highmid_spanish_keyboard_numeric_key19_popup = "2064";
constexpr static const char_t* const ics_highmid_spanish_keyboard_numeric_key1_popup = "2058";
constexpr static const char_t* const ics_highmid_spanish_keyboard_numeric_key21_popup = "2066";
constexpr static const char_t* const ics_highmid_spanish_keyboard_numeric_key22_popup = "2067";
constexpr static const char_t* const ics_highmid_spanish_keyboard_numeric_key27_popup = "2068";
constexpr static const char_t* const ics_highmid_spanish_keyboard_numeric_key2_popup = "2065";
constexpr static const char_t* const ics_highmid_spanish_keyboard_numeric_key3_popup = "2069";
constexpr static const char_t* const ics_highmid_spanish_keyboard_numeric_key4_popup = "2070";
constexpr static const char_t* const ics_highmid_spanish_keyboard_numeric_key5_popup = "2071";
constexpr static const char_t* const ics_highmid_spanish_keyboard_numeric_key7_popup = "2072";
constexpr static const char_t* const ics_highmid_spanish_keyboard_screen = "2043";
constexpr static const char_t* const ics_highmid_spanish_keyboard_symbol_key13_popup = "2073";
constexpr static const char_t* const ics_highmid_spanish_keyboard_symbol_key15_popup = "2074";
constexpr static const char_t* const ics_highmid_spanish_keyboard_symbol_key16_popup = "2075";
constexpr static const char_t* const ics_highmid_spanish_keyboard_symbol_key17_popup = "2076";
constexpr static const char_t* const ics_highmid_spanish_keyboard_symbol_key24_popup = "2078";
constexpr static const char_t* const ics_highmid_spanish_keyboard_symbol_key25_popup = "2079";
constexpr static const char_t* const ics_highmid_spanish_keyboard_symbol_key2_popup = "2077";
constexpr static const char_t* const ics_highmid_spanish_keyboard_symbol_key32_popup = "2080";
constexpr static const char_t* const ics_highmid_spanish_keyboard_symbol_key4_popup = "2081";
constexpr static const char_t* const ics_highmid_spanish_keyboard_symbol_key6_popup = "2082";
constexpr static const char_t* const ics_highmid_spanish_keyboard_symbol_key9_popup = "2083";
constexpr static const char_t* const ics_hvac_bottom_bar_Control = "9001";
constexpr static const char_t* const ics_hvac_bottom_bar_air_direction = "9004";
constexpr static const char_t* const ics_hvac_bottom_bar_control_c234_single_zone = "9012";
constexpr static const char_t* const ics_hvac_bottom_bar_left_seats = "9002";
constexpr static const char_t* const ics_hvac_bottom_bar_left_singlezone_seats = "9014";
constexpr static const char_t* const ics_hvac_bottom_bar_right_seats = "9003";
constexpr static const char_t* const ics_hvac_bottom_fly_out_air_direction = "ics_hvac_bottom_fly_out_air_direction";
constexpr static const char_t* const ics_hvac_bottom_fly_out_seat_controls_left = "ics_hvac_bottom_fly_out_seat_controls_left";
constexpr static const char_t* const ics_hvac_bottom_fly_out_seat_controls_right = "ics_hvac_bottom_fly_out_seat_controls_right";
constexpr static const char_t* const ics_hvac_bottom_fly_out_temperature_controls_left = "ics_hvac_bottom_fly_out_temperature_controls_left";
constexpr static const char_t* const ics_hvac_bottom_fly_out_temperature_controls_right = "ics_hvac_bottom_fly_out_temperature_controls_right";
constexpr static const char_t* const ics_keyboard_popup_screen = "2002";
constexpr static const char_t* const ics_persistent_smart_controls = "6078";
constexpr static const char_t* const ics_persistent_smart_controls_pop_up = "6090";
constexpr static const char_t* const ics_safety_screen = "7050";
constexpr static const char_t* const ics_saftey_camera_feature_unavailable = "6073";
constexpr static const char_t* const ics_spanish_default_keyboard_screen = "614";
constexpr static const char_t* const ics_spanish_default_numerical_screen = "ics_spanish_default_numerical_screen";
constexpr static const char_t* const ics_spanish_default_special_character_screen = "ics_spanish_default_special_character_screen";
constexpr static const char_t* const ics_spanish_keyboard_popup_screen = "2044";
constexpr static const char_t* const ics_svr_acp_continuous_recording = "ics_svr_acp_continuous_recording";
constexpr static const char_t* const ics_svr_acp_delete_video = "ics_svr_acp_delete_video";
constexpr static const char_t* const ics_svr_acp_emergency_call_setting = "ics_svr_acp_emergency_call_setting";
constexpr static const char_t* const ics_svr_acp_file_cannot_be_played_snackbar = "ics_svr_acp_file_cannot_be_played_snackbar";
constexpr static const char_t* const ics_svr_acp_format_failed_snackbar = "ics_svr_acp_format_failed_snackbar";
constexpr static const char_t* const ics_svr_acp_format_successful_snackbar = "ics_svr_acp_format_successful_snackbar";
constexpr static const char_t* const ics_svr_acp_must_be_parked_to_setup = "ics_svr_acp_must_be_parked_to_setup";
constexpr static const char_t* const ics_svr_acp_park_Vehicle_to_continue_scrolling = "ics_svr_acp_park_Vehicle_to_continue_scrolling";
constexpr static const char_t* const ics_svr_acp_park_your_Vehicle_to_continue_scrolling = "ics_svr_acp_park_your_Vehicle_to_continue_scrolling";
constexpr static const char_t* const ics_svr_acp_sd_card_empty = "ics_svr_acp_sd_card_empty";
constexpr static const char_t* const ics_svr_acp_sd_card_file_explorer_directory = "ics_svr_acp_sd_card_file_explorer_directory";
constexpr static const char_t* const ics_svr_acp_sd_card_need_to_be_formatted = "ics_svr_acp_sd_card_need_to_be_formatted";
constexpr static const char_t* const ics_svr_acp_theft_setting = "ics_svr_acp_theft_setting";
constexpr static const char_t* const ics_svr_acp_unable_to_open = "ics_svr_acp_unable_to_open";
constexpr static const char_t* const ics_svr_acp_used_when_parked = "ics_svr_acp_used_when_parked";
constexpr static const char_t* const ics_svr_acp_video_saved_snackbar = "ics_svr_acp_video_saved_snackbar";
constexpr static const char_t* const ics_svr_acp_wipe_and_format_sd_card = "ics_svr_acp_wipe_and_format_sd_card";
constexpr static const char_t* const ics_svr_all_sd_card_full_snackbar = "ics_svr_all_sd_card_full_snackbar";
constexpr static const char_t* const ics_svr_back_ground = "ics_svr_back_ground";
constexpr static const char_t* const ics_svr_crash_setting = "ics_svr_crash_setting";
constexpr static const char_t* const ics_svr_first_use_disclaimer = "ics_svr_first_use_disclaimer";
constexpr static const char_t* const ics_svr_format_failed_snackbar = "ics_svr_format_failed_snackbar";
constexpr static const char_t* const ics_svr_format_successful_snackbar = "ics_svr_format_successful_snackbar";
constexpr static const char_t* const ics_svr_main_screen_no_videos = "ics_svr_main_screen_no_videos";
constexpr static const char_t* const ics_svr_main_screen_sd_Card_full = "ics_svr_main_screen_sd_Card_full";
constexpr static const char_t* const ics_svr_sd_card_empty = "ics_svr_sd_card_empty";
constexpr static const char_t* const ics_svr_sd_card_file_explorer_root = "ics_svr_sd_card_file_explorer_root";
constexpr static const char_t* const ics_svr_sd_card_full_snackbar = "ics_svr_sd_card_full_snackbar";
constexpr static const char_t* const ics_svr_sd_card_read_write_error_dialog = "ics_svr_sd_card_read_write_error_dialog";
constexpr static const char_t* const ics_svr_sd_card_required = "ics_svr_sd_card_required";
constexpr static const char_t* const ics_svr_unable_to_open = "ics_svr_unable_to_open";
constexpr static const char_t* const ics_svr_unavailable_snackbar = "ics_svr_unavailable_snackbar";
constexpr static const char_t* const ics_svr_video_erased_snackbar = "ics_svr_video_erased_snackbar";
constexpr static const char_t* const ics_svr_vpm_can_only_be_used_when_parked = "ics_svr_vpm_can_only_be_used_when_parked";
constexpr static const char_t* const ics_svr_vpm_continuous_recording = "ics_svr_vpm_continuous_recording";
constexpr static const char_t* const ics_svr_vpm_file_cannot_be_played_snackbar = "ics_svr_vpm_file_cannot_be_played_snackbar";
constexpr static const char_t* const ics_svr_vpm_main_screen = "ics_svr_vpm_main_screen";
constexpr static const char_t* const ics_svr_vpm_recent_recordings = "ics_svr_vpm_recent_recordings";
constexpr static const char_t* const ics_svr_vpm_saved_recordings = "ics_svr_vpm_saved_recordings";
constexpr static const char_t* const ics_svr_vpm_saved_recordings_with_triggered_recordings = "ics_svr_vpm_saved_recordings_with_triggered_recordings";
constexpr static const char_t* const ics_svr_vpm_video_file_will_be_erased_snackbar = "ics_svr_vpm_video_file_will_be_erased_snackbar";
constexpr static const char_t* const ics_svr_vpm_video_player_mosaic_view = "ics_svr_vpm_video_player_mosaic_view";
constexpr static const char_t* const ics_svr_vpm_video_player_single_view = "ics_svr_vpm_video_player_single_view";
constexpr static const char_t* const ics_svr_vpm_video_saved_snackbar = "ics_svr_vpm_video_saved_snackbar";
constexpr static const char_t* const ics_virtual_controls_auto_parking_assist = "6014";
constexpr static const char_t* const ics_virtual_controls_aux_not_available_snackbar = "ics_virtual_controls_aux_not_available_snackbar";
constexpr static const char_t* const ics_virtual_controls_cargo_lights_snackbar = "6040";
constexpr static const char_t* const ics_virtual_controls_child_safety_locks = "6005";
constexpr static const char_t* const ics_virtual_controls_controls_home = "6001";
constexpr static const char_t* const ics_virtual_controls_detected = "6030";
constexpr static const char_t* const ics_virtual_controls_doors_and_windows = "6004";
constexpr static const char_t* const ics_virtual_controls_drive = "ics_virtual_controls_drive";
constexpr static const char_t* const ics_virtual_controls_drive_and_park = "6009";
constexpr static const char_t* const ics_virtual_controls_drive_bzsa_unavailable_snackbar = "6095";
constexpr static const char_t* const ics_virtual_controls_drive_lka_unavailable_snackbar = "ics_virtual_controls_drive_lka_unavailable_snackbar";
constexpr static const char_t* const ics_virtual_controls_factory_reset_is_temperature_in_range_snackbar = "6070";
constexpr static const char_t* const ics_virtual_controls_factory_reset_is_vehicle_in_park_snackbar = "6069";
constexpr static const char_t* const ics_virtual_controls_head_up_display = "6059";
constexpr static const char_t* const ics_virtual_controls_hill_descent_control = "6013";
constexpr static const char_t* const ics_virtual_controls_hill_descent_control_snackbar = "ics_virtual_controls_hill_descent_control_snackbar";
constexpr static const char_t* const ics_virtual_controls_keyboard_unavailable_while_driving_snackbar = "6066";
constexpr static const char_t* const ics_virtual_controls_lane_assistance_bzsa_unavailable_snackbar = "ics_virtual_controls_lane_assistance_bzsa_unavailable_snackbar";
constexpr static const char_t* const ics_virtual_controls_lane_assistance_off_state_snackbar = "ics_virtual_controls_lane_assistance_off_state_snackbar";
constexpr static const char_t* const ics_virtual_controls_lane_assistance_unavailable_snackbar = "ics_virtual_controls_lane_assistance_unavailable_snackbar";
constexpr static const char_t* const ics_virtual_controls_lane_centering_assist = "6074";
constexpr static const char_t* const ics_virtual_controls_lights = "6017";
constexpr static const char_t* const ics_virtual_controls_multiple_smart_controls = "ics_virtual_controls_multiple_smart_controls";
constexpr static const char_t* const ics_virtual_controls_one_pedal_driving = "6015";
constexpr static const char_t* const ics_virtual_controls_opd_enabled_snackbar = "6089";
constexpr static const char_t* const ics_virtual_controls_options = "6035";
constexpr static const char_t* const ics_virtual_controls_options_name = "6041";
constexpr static const char_t* const ics_virtual_controls_options_snackbar = "ics_virtual_controls_options_snackbar";
constexpr static const char_t* const ics_virtual_controls_outlets_quick_control_snackbar = "6112";
constexpr static const char_t* const ics_virtual_controls_park = "6077";
constexpr static const char_t* const ics_virtual_controls_park_assist = "6016";
constexpr static const char_t* const ics_virtual_controls_passive_power_mode_off_verify_snackbar = "6096";
constexpr static const char_t* const ics_virtual_controls_persistent_controls_speed_limiter_cruise_control_off_snackbar = "6083";
constexpr static const char_t* const ics_virtual_controls_persistent_controls_speed_limiter_not_allowed_snackbar = "6084";
constexpr static const char_t* const ics_virtual_controls_pin_to_start = "6091";
constexpr static const char_t* const ics_virtual_controls_pin_to_start_nfc = "6111";
constexpr static const char_t* const ics_virtual_controls_pin_to_start_passcode_system_unavailable = "ics_virtual_controls_pin_to_start_passcode_system_unavailable";
constexpr static const char_t* const ics_virtual_controls_pin_to_start_successful_start_brake_only = "ics_virtual_controls_pin_to_start_successful_start_brake_only";
constexpr static const char_t* const ics_virtual_controls_pin_to_start_successful_start_stop_button = "6110";
constexpr static const char_t* const ics_virtual_controls_power_window_lockout = "6006";
constexpr static const char_t* const ics_virtual_controls_programming_successful = "6034";
constexpr static const char_t* const ics_virtual_controls_programming_successful_press_burndown = "6101";
constexpr static const char_t* const ics_virtual_controls_scroll_first_page = "6500";
constexpr static const char_t* const ics_virtual_controls_scroll_second_page = "6501";
constexpr static const char_t* const ics_virtual_controls_scroll_third_page = "6502";
constexpr static const char_t* const ics_virtual_controls_success_test = "6031";
constexpr static const char_t* const ics_virtual_controls_traction_control = "6012";
constexpr static const char_t* const ics_virtual_controls_traction_control_competitive = "ics_virtual_controls_traction_control_competitive";
constexpr static const char_t* const ics_virtual_controls_universal_remotes_start = "6028";
constexpr static const char_t* const ics_virtualcontrols_auto_high_beams = "6021";
constexpr static const char_t* const ics_virtualcontrols_auto_high_beams_snackbar = "ics_virtualcontrols_auto_high_beams_snackbar";
constexpr static const char_t* const ics_virtualcontrols_auto_high_beams_unavailable_snackbar = "ics_virtualcontrols_auto_high_beams_unavailable_snackbar";
constexpr static const char_t* const ics_virtualcontrols_auto_hold = "6076";
constexpr static const char_t* const ics_virtualcontrols_auto_hold_not_allowed_snackbar = "ics_virtualcontrols_auto_hold_not_allowed_snackbar";
constexpr static const char_t* const ics_virtualcontrols_bakground = "6100";
constexpr static const char_t* const ics_virtualcontrols_cargo_lights = "6026";
constexpr static const char_t* const ics_virtualcontrols_dome_light = "6019";
constexpr static const char_t* const ics_virtualcontrols_doors_windows_door_mismatch_error_snackbar = "6036";
constexpr static const char_t* const ics_virtualcontrols_drive_auto_hold_unavailable_snackbar = "ics_virtualcontrols_drive_auto_hold_unavailable_snackbar";
constexpr static const char_t* const ics_virtualcontrols_drive_park_opd_unavailable_snackbar = "6054";
constexpr static const char_t* const ics_virtualcontrols_drive_park_traction_control_unavailable_snackbar = "ics_virtualcontrols_drive_park_traction_control_unavailable_snackbar";
constexpr static const char_t* const ics_virtualcontrols_facotry_reset_in_progress = "6063";
constexpr static const char_t* const ics_virtualcontrols_factory_reset_is_complete = "6064";
constexpr static const char_t* const ics_virtualcontrols_fog_lights = "6022";
constexpr static const char_t* const ics_virtualcontrols_fog_lights_unavailable_snackbar = "ics_virtualcontrols_fog_lights_unavailable_snackbar";
constexpr static const char_t* const ics_virtualcontrols_front_fog_lights = "6023";
constexpr static const char_t* const ics_virtualcontrols_front_rear_fog_lights = "6025";
constexpr static const char_t* const ics_virtualcontrols_geolocation_not_detected = "6056";
constexpr static const char_t* const ics_virtualcontrols_handheld_mode = "6085";
constexpr static const char_t* const ics_virtualcontrols_headlights = "6020";
constexpr static const char_t* const ics_virtualcontrols_headlights_smart_controls = "6055";
constexpr static const char_t* const ics_virtualcontrols_high_temp = "6065";
constexpr static const char_t* const ics_virtualcontrols_hmi_factory_reset = "6061";
constexpr static const char_t* const ics_virtualcontrols_hmi_factory_reset_confirmation = "6062";
constexpr static const char_t* const ics_virtualcontrols_hmi_recovery_mode_confirmation = "6067";
constexpr static const char_t* const ics_virtualcontrols_lane_assistance_with_bzsa = "ics_virtualcontrols_lane_assistance_with_bzsa";
constexpr static const char_t* const ics_virtualcontrols_lane_assistance_with_bzsa_and_holca = "ics_virtualcontrols_lane_assistance_with_bzsa_and_holca";
constexpr static const char_t* const ics_virtualcontrols_lane_assistance_with_holca = "ics_virtualcontrols_lane_assistance_with_holca";
constexpr static const char_t* const ics_virtualcontrols_lane_keep_assist = "6092";
constexpr static const char_t* const ics_virtualcontrols_lane_keep_assist_bzsa_only = "6094";
constexpr static const char_t* const ics_virtualcontrols_learn = "6032";
constexpr static const char_t* const ics_virtualcontrols_learn_success_test = "6033";
constexpr static const char_t* const ics_virtualcontrols_lights_auto_high_beams_snackbar = "6037";
constexpr static const char_t* const ics_virtualcontrols_lights_fog_lights_unavailable_snackbar = "6052";
constexpr static const char_t* const ics_virtualcontrols_lights_headlights_dialog = "6039";
constexpr static const char_t* const ics_virtualcontrols_motion_sensor = "6007";
constexpr static const char_t* const ics_virtualcontrols_no_invehicle_infotainment = "6058";
constexpr static const char_t* const ics_virtualcontrols_one_pedal_driving_failure_snackbar = "ics_virtualcontrols_one_pedal_driving_failure_snackbar";
constexpr static const char_t* const ics_virtualcontrols_one_pedal_driving_unavailable_snackbar = "ics_virtualcontrols_one_pedal_driving_unavailable_snackbar";
constexpr static const char_t* const ics_virtualcontrols_options_auto = "6042";
constexpr static const char_t* const ics_virtualcontrols_options_auto_location_not_detected = "ics_virtualcontrols_options_auto_location_not_detected";
constexpr static const char_t* const ics_virtualcontrols_options_delete_all_dialog = "6044";
constexpr static const char_t* const ics_virtualcontrols_options_delete_dialog = "6043";
constexpr static const char_t* const ics_virtualcontrols_options_location_save = "6057";
constexpr static const char_t* const ics_virtualcontrols_options_update_location = "ics_virtualcontrols_options_update_location";
constexpr static const char_t* const ics_virtualcontrols_outlets_disabled_ota = "6224";
constexpr static const char_t* const ics_virtualcontrols_outlets_dwl = "6214";
constexpr static const char_t* const ics_virtualcontrols_outlets_start_screen = "6113";
constexpr static const char_t* const ics_virtualcontrols_passive_power_mode_emergency_detected = "6097";
constexpr static const char_t* const ics_virtualcontrols_passive_power_mode_extend_snackbar = "6098";
constexpr static const char_t* const ics_virtualcontrols_passive_power_mode_snackbar_remaining = "6099";
constexpr static const char_t* const ics_virtualcontrols_peek_in_screen_time_added_snackbar = "6213";
constexpr static const char_t* const ics_virtualcontrols_peekin_screen_Time_running_out_notification = "6212";
constexpr static const char_t* const ics_virtualcontrols_peekin_screen_circle_active_charging = "ics_virtualcontrols_peekin_screen_circle_active_charging";
constexpr static const char_t* const ics_virtualcontrols_peekin_screen_circle_alt = "6115";
constexpr static const char_t* const ics_virtualcontrols_peekin_screen_circle_alt_until_range_reserve = "ics_virtualcontrols_peekin_screen_circle_alt_until_range_reserve";
constexpr static const char_t* const ics_virtualcontrols_peekin_screen_end_notification = "6211";
constexpr static const char_t* const ics_virtualcontrols_persistent_controls_lane_keep_assist_snackbar = "6082";
constexpr static const char_t* const ics_virtualcontrols_persistent_controls_speed_limiter_auto_active_snackbar = "6080";
constexpr static const char_t* const ics_virtualcontrols_persistent_controls_speed_limiter_off_and_resume_snakbar = "6081";
constexpr static const char_t* const ics_virtualcontrols_power_liftgate_height = "6008";
constexpr static const char_t* const ics_virtualcontrols_power_reargate_height = "ics_virtualcontrols_power_reargate_height";
constexpr static const char_t* const ics_virtualcontrols_program = "6029";
constexpr static const char_t* const ics_virtualcontrols_program_d_mode_dialog = "6086";
constexpr static const char_t* const ics_virtualcontrols_program_ur_mode_dialog = "6087";
constexpr static const char_t* const ics_virtualcontrols_programming_successful_maximum_snackbar = "6046";
constexpr static const char_t* const ics_virtualcontrols_range_reserve = "6114";
constexpr static const char_t* const ics_virtualcontrols_range_reserve_tdl_set_to_100_confirm = "6208";
constexpr static const char_t* const ics_virtualcontrols_range_reserve_tdl_set_to_zero_confirm = "6207";
constexpr static const char_t* const ics_virtualcontrols_range_reverse_reduce_propulsion = "6209";
constexpr static const char_t* const ics_virtualcontrols_rear_fog_lights = "6024";
constexpr static const char_t* const ics_virtualcontrols_recovery_mode_inprogress = "6068";
constexpr static const char_t* const ics_virtualcontrols_service_needed_fault = "6203";
constexpr static const char_t* const ics_virtualcontrols_start_screen_circut_breaker_fault = "6202";
constexpr static const char_t* const ics_virtualcontrols_start_screen_customer_action_fault = "6204";
constexpr static const char_t* const ics_virtualcontrols_start_screen_soc_low_fault = "6205";
constexpr static const char_t* const ics_virtualcontrols_start_screen_tdl_set_thinking = "6225";
constexpr static const char_t* const ics_virtualcontrols_start_screen_tdl_set_thinking_snackbar = "6201";
constexpr static const char_t* const ics_virtualcontrols_start_screen_vehicle_conditions_not_met_fault = "6206";
constexpr static const char_t* const ics_virtualcontrols_summary_screen = "6116";
constexpr static const char_t* const ics_virtualcontrols_summary_screen_service_needed = "ics_virtualcontrols_summary_screen_service_needed";
constexpr static const char_t* const ics_virtualcontrols_summary_screen_soc_low = "ics_virtualcontrols_summary_screen_soc_low";
constexpr static const char_t* const ics_virtualcontrols_task_lights = "6027";
constexpr static const char_t* const ics_virtualcontrols_task_lights_snackbar = "6038";
constexpr static const char_t* const ics_virtualcontrols_traction_control_unavailable_snackbar = "6047";
constexpr static const char_t* const ics_virtualcontrols_turn_vehicle_off_message = "6226";
constexpr static const char_t* const ics_virtualcontrols_universal_remotes_auto_open_close = "ics_virtualcontrols_universal_remotes_auto_open_close";
constexpr static const char_t* const ics_virtualcontrols_universal_remotes_edit_snackbar = "6053";
constexpr static const char_t* const ics_virtualcontrols_universal_remotes_mismatch = "ics_virtualcontrols_universal_remotes_mismatch";
constexpr static const char_t* const ics_virtualcontrols_universal_remotes_multiple = "6075";
constexpr static const char_t* const ics_virtualcontrols_universal_remotes_start_snackbar = "6045";
constexpr static const char_t* const ics_virtualcontrols_universal_remotes_system_error = "ics_virtualcontrols_universal_remotes_system_error";
constexpr static const char_t* const ics_virtualcontrols_universal_remotes_unavailable_snack_bar = "ics_virtualcontrols_universal_remotes_unavailable_snack_bar";
constexpr static const char_t* const ics_vpm_front_camera = "8010";
constexpr static const char_t* const ics_vpm_hitch_camera = "8016";
constexpr static const char_t* const ics_vpm_rear_camera = "8015";


static const std::array<const char_t*, TotalScreens> screenList
{
    {
        ics_default_keyboard_screen,
        ics_default_numerical_screen,
        ics_default_special_character_screen,
        ics_spanish_default_keyboard_screen,
        ics_default_chinese_keyboard_screen,
        ics_animation_startup,
        ics_keyboard_popup_screen,
        ics_highmid_keyboard_alphabet_key1_popup,
        ics_highmid_keyboard_alphabet_key10_popup,
        ics_highmid_keyboard_alphabet_key11_popup,
        ics_highmid_keyboard_alphabet_key12_popup,
        ics_highmid_keyboard_alphabet_key2_popup,
        ics_highmid_keyboard_alphabet_key23_popup,
        ics_highmid_keyboard_alphabet_key26_popup,
        ics_highmid_keyboard_alphabet_key3_popup,
        ics_highmid_keyboard_alphabet_key4_popup,
        ics_hvac_bottom_bar_left_singlezone_seats,
        ics_highmid_keyboard_alphabet_key5_popup,
        ics_highmid_keyboard_alphabet_key6_popup,
        ics_highmid_keyboard_alphabet_key7_popup,
        ics_highmid_keyboard_alphabet_key8_popup,
        ics_highmid_keyboard_alphabet_key9_popup,
        ics_highmid_keyboard_numeric_key1_popup,
        ics_highmid_keyboard_numeric_key10_popup,
        ics_highmid_keyboard_numeric_key14_popup,
        ics_highmid_keyboard_numeric_key16_popup,
        ics_highmid_keyboard_numeric_key17_popup,
        ics_highmid_keyboard_numeric_key18_popup,
        ics_highmid_keyboard_numeric_key19_popup,
        ics_highmid_keyboard_numeric_key2_popup,
        ics_highmid_keyboard_numeric_key21_popup,
        ics_highmid_keyboard_numeric_key22_popup,
        ics_highmid_keyboard_numeric_key27_popup,
        ics_highmid_keyboard_numeric_key3_popup,
        ics_highmid_keyboard_numeric_key4_popup,
        ics_highmid_keyboard_numeric_key5_popup,
        ics_highmid_keyboard_numeric_key7_popup,
        ics_highmid_keyboard_symbol_key13_popup,
        ics_highmid_keyboard_symbol_key15_popup,
        ics_highmid_keyboard_symbol_key16_popup,
        ics_highmid_keyboard_symbol_key17_popup,
        ics_highmid_keyboard_symbol_key2_popup,
        ics_highmid_keyboard_symbol_key24_popup,
        ics_highmid_keyboard_symbol_key25_popup,
        ics_highmid_keyboard_symbol_key32_popup,
        ics_highmid_keyboard_symbol_key4_popup,
        ics_highmid_keyboard_symbol_key6_popup,
        ics_highmid_keyboard_symbol_key9_popup,
        ics_highmid_spanish_keyboard_screen,
        ics_spanish_keyboard_popup_screen,
        ics_highmid_spanish_keyboard_alphabet_key1_popup,
        ics_highmid_spanish_keyboard_alphabet_key10_popup,
        ics_highmid_spanish_keyboard_alphabet_key11_popup,
        ics_highmid_spanish_keyboard_alphabet_key2_popup,
        ics_highmid_spanish_keyboard_alphabet_key24_popup,
        ics_highmid_spanish_keyboard_alphabet_key27_popup,
        ics_highmid_spanish_keyboard_alphabet_key3_popup,
        ics_highmid_spanish_keyboard_alphabet_key4_popup,
        ics_highmid_spanish_keyboard_alphabet_key5_popup,
        ics_highmid_spanish_keyboard_alphabet_key6_popup,
        ics_highmid_spanish_keyboard_alphabet_key7_popup,
        ics_highmid_spanish_keyboard_alphabet_key8_popup,
        ics_highmid_spanish_keyboard_alphabet_key9_popup,
        ics_highmid_spanish_keyboard_numeric_key1_popup,
        ics_highmid_spanish_keyboard_numeric_key10_popup,
        ics_highmid_spanish_keyboard_numeric_key14_popup,
        ics_highmid_spanish_keyboard_numeric_key16_popup,
        ics_highmid_spanish_keyboard_numeric_key17_popup,
        ics_highmid_spanish_keyboard_numeric_key18_popup,
        ics_highmid_spanish_keyboard_numeric_key19_popup,
        ics_highmid_spanish_keyboard_numeric_key2_popup,
        ics_highmid_spanish_keyboard_numeric_key21_popup,
        ics_highmid_spanish_keyboard_numeric_key22_popup,
        ics_highmid_spanish_keyboard_numeric_key27_popup,
        ics_highmid_spanish_keyboard_numeric_key3_popup,
        ics_highmid_spanish_keyboard_numeric_key4_popup,
        ics_highmid_spanish_keyboard_numeric_key5_popup,
        ics_highmid_spanish_keyboard_numeric_key7_popup,
        ics_highmid_spanish_keyboard_symbol_key13_popup,
        ics_highmid_spanish_keyboard_symbol_key15_popup,
        ics_highmid_spanish_keyboard_symbol_key16_popup,
        ics_highmid_spanish_keyboard_symbol_key17_popup,
        ics_highmid_spanish_keyboard_symbol_key2_popup,
        ics_highmid_spanish_keyboard_symbol_key24_popup,
        ics_highmid_spanish_keyboard_symbol_key25_popup,
        ics_highmid_spanish_keyboard_symbol_key32_popup,
        ics_highmid_spanish_keyboard_symbol_key4_popup,
        ics_highmid_spanish_keyboard_symbol_key6_popup,
        ics_highmid_spanish_keyboard_symbol_key9_popup,
        ics_virtual_controls_controls_home,
        ics_hvac_bottom_bar_right_singlezone_seats,
        ics_virtual_controls_doors_and_windows,
        ics_virtual_controls_child_safety_locks,
        ics_virtual_controls_power_window_lockout,
        ics_virtualcontrols_motion_sensor,
        ics_virtualcontrols_power_liftgate_height,
        ics_virtual_controls_drive_and_park,
        ics_virtual_controls_traction_control,
        ics_virtual_controls_hill_descent_control,
        ics_virtual_controls_auto_parking_assist,
        ics_virtual_controls_one_pedal_driving,
        ics_virtual_controls_park_assist,
        ics_virtual_controls_lights,
        ics_virtualcontrols_dome_light,
        ics_virtualcontrols_headlights,
        ics_virtualcontrols_auto_high_beams,
        ics_virtualcontrols_fog_lights,
        ics_virtualcontrols_front_fog_lights,
        ics_virtualcontrols_rear_fog_lights,
        ics_virtualcontrols_front_rear_fog_lights,
        ics_virtualcontrols_cargo_lights,
        ics_virtualcontrols_task_lights,
        ics_virtual_controls_universal_remotes_start,
        ics_virtualcontrols_program,
        ics_virtual_controls_detected,
        ics_virtual_controls_success_test,
        ics_virtualcontrols_learn,
        ics_virtualcontrols_learn_success_test,
        ics_virtual_controls_programming_successful,
        ics_virtual_controls_options,
        ics_virtualcontrols_doors_windows_door_mismatch_error_snackbar,
        ics_virtualcontrols_lights_auto_high_beams_snackbar,
        ics_virtualcontrols_task_lights_snackbar,
        ics_virtualcontrols_lights_headlights_dialog,
        ics_virtual_controls_cargo_lights_snackbar,
        ics_virtual_controls_options_name,
        ics_virtualcontrols_options_auto,
        ics_virtualcontrols_options_delete_dialog,
        ics_virtualcontrols_options_delete_all_dialog,
        ics_virtualcontrols_universal_remotes_start_snackbar,
        ics_virtualcontrols_programming_successful_maximum_snackbar,
        ics_virtualcontrols_traction_control_unavailable_snackbar,
        ics_virtualcontrols_lights_fog_lights_unavailable_snackbar,
        ics_virtualcontrols_universal_remotes_edit_snackbar,
        ics_virtualcontrols_drive_park_opd_unavailable_snackbar,
        ics_virtualcontrols_headlights_smart_controls,
        ics_virtualcontrols_geolocation_not_detected,
        ics_virtualcontrols_options_location_save,
        ics_virtualcontrols_no_invehicle_infotainment,
        ics_virtual_controls_head_up_display,
        ics_virtualcontrols_hmi_factory_reset,
        ics_virtualcontrols_hmi_factory_reset_confirmation,
        ics_virtualcontrols_facotry_reset_in_progress,
        ics_virtualcontrols_factory_reset_is_complete,
        ics_virtualcontrols_high_temp,
        ics_virtual_controls_keyboard_unavailable_while_driving_snackbar,
        ics_virtualcontrols_hmi_recovery_mode_confirmation,
        ics_virtualcontrols_recovery_mode_inprogress,
        ics_virtual_controls_factory_reset_is_vehicle_in_park_snackbar,
        ics_virtual_controls_factory_reset_is_temperature_in_range_snackbar,
        ics_apa_unavailable_snack_bar,
        ics_apa_deactiated_speed_snack_bar,
        ics_saftey_camera_feature_unavailable,
        ics_virtual_controls_lane_centering_assist,
        ics_virtualcontrols_universal_remotes_multiple,
        ics_virtualcontrols_auto_hold,
        ics_virtual_controls_park,
        ics_persistent_smart_controls,
        ics_virtualcontrols_persistent_controls_speed_limiter_auto_active_snackbar,
        ics_virtualcontrols_persistent_controls_speed_limiter_off_and_resume_snakbar,
        ics_virtualcontrols_persistent_controls_lane_keep_assist_snackbar,
        ics_virtual_controls_persistent_controls_speed_limiter_cruise_control_off_snackbar,
        ics_virtual_controls_persistent_controls_speed_limiter_not_allowed_snackbar,
        ics_virtualcontrols_handheld_mode,
        ics_virtualcontrols_program_d_mode_dialog,
        ics_virtualcontrols_program_ur_mode_dialog,
        ics_virtual_controls_opd_enabled_snackbar,
        ics_persistent_smart_controls_pop_up,
        ics_virtual_controls_pin_to_start,
        ics_virtualcontrols_lane_keep_assist,
        ics_apa_unavailable_snack_bar_at_ultra_cruise,
        ics_virtualcontrols_lane_keep_assist_bzsa_only,
        ics_virtual_controls_drive_bzsa_unavailable_snackbar,
        ics_virtual_controls_passive_power_mode_off_verify_snackbar,
        ics_virtualcontrols_passive_power_mode_emergency_detected,
        ics_virtualcontrols_passive_power_mode_extend_snackbar,
        ics_virtualcontrols_passive_power_mode_snackbar_remaining,
        ics_virtualcontrols_bakground,
        ics_virtual_controls_programming_successful_press_burndown,
        ics_virtual_controls_pin_to_start_successful_start_stop_button,
        ics_virtual_controls_pin_to_start_nfc,
        ics_virtual_controls_outlets_quick_control_snackbar,
        ics_virtualcontrols_outlets_start_screen,
        ics_virtualcontrols_range_reserve,
        ics_virtualcontrols_peekin_screen_circle_alt,
        ics_virtualcontrols_summary_screen,
        ics_virtualcontrols_start_screen_tdl_set_thinking_snackbar,
        ics_virtualcontrols_start_screen_circut_breaker_fault,
        ics_virtualcontrols_service_needed_fault,
        ics_virtualcontrols_start_screen_customer_action_fault,
        ics_virtualcontrols_start_screen_soc_low_fault,
        ics_virtualcontrols_start_screen_vehicle_conditions_not_met_fault,
        ics_virtualcontrols_range_reserve_tdl_set_to_zero_confirm,
        ics_virtualcontrols_range_reserve_tdl_set_to_100_confirm,
        ics_virtualcontrols_range_reverse_reduce_propulsion,
        ics_virtualcontrols_peekin_screen_end_notification,
        ics_virtualcontrols_peekin_screen_Time_running_out_notification,
        ics_virtualcontrols_peek_in_screen_time_added_snackbar,
        ics_virtualcontrols_outlets_dwl,
        ics_virtualcontrols_outlets_disabled_ota,
        ics_virtualcontrols_start_screen_tdl_set_thinking,
        ics_virtualcontrols_turn_vehicle_off_message,
        ics_virtual_controls_scroll_first_page,
        ics_virtual_controls_scroll_second_page,
        ics_virtual_controls_scroll_third_page,
        ics_apa_park_drawer,
        ics_apa_exit_park_drawer,
        ics_apa_park_instructions_perp_right,
        ics_apa_park_instr_perp_left,
        ics_apa_park_instr_parallel_right,
        ics_apa_park_instr_parallel_left,
        ics_apa_space_found_perp_right,
        ics_apa_space_found_perp_left,
        ics_apa_space_found_parallel_right,
        ics_apa_space_found_parallel_left,
        ics_apa_stay_or_remote_park,
        ics_apa_in_vehicle_park_hand_off,
        ics_apa_connecting_to_mybrand_app,
        ics_apa_unable_to_connect,
        ics_apa_camera_view,
        ics_apa_deactivated_snack_bar,
        ics_apa_slowdown_appr_max_speed_snackbar,
        ics_apa_canceled_over_max_speed_snackbar,
        ics_apa_auto_steering_on,
        ics_apa_emergency_brake_off,
        ics_apa_remote_park_handoff,
        ics_apa_remote_exit_handoff,
        ics_apa_space_found_parallel_right_srp,
        ics_apa_space_found_parallel_left_srp,
        ics_apa_space_found_perp_right_srp,
        ics_apa_space_found_perp_left_srp,
        ics_apa_park_instructions_selection_drawer,
        ics_apa_back_ground_update,
        ics_apa_spot_found_parallel_right,
        ics_apa_spot_found_parallel_left,
        ics_apa_spot_found_perp_right,
        ics_apa_spot_found_perp_left,
        ics_apa_shift_to_reverse_parallel_left,
        ics_apa_shift_to_reverse_parallel_right,
        ics_apa_park_selection,
        ics_apa_exit_selection,
        ics_safety_screen,
        ics_brightness_control_screen,
        ics_camera_rvc_standard_view,
        ics_camera_rvc_standard_trailer,
        ics_camera_rvc_standard_trailer_hitch,
        ics_camera_rvc_fullviewcamera,
        ics_camera_rvc_system_error,
        ics_camera_vpm_rearview_topdown_multipart_buttons,
        ics_vpm_front_camera,
        ics_camera_bowl_mfcfocused,
        ics_camera_settings,
        ics_exit_button,
        ics_vpm_rear_camera,
        ics_vpm_hitch_camera,
        ics_hvac_bottom_bar_Control,
        ics_hvac_bottom_bar_left_seats,
        ics_hvac_bottom_bar_right_seats,
        ics_hvac_bottom_bar_air_direction,
        ics_hvac_bottom_bar_control_c234_single_zone,
        ics_hvac_bottom_bar_right_singlezone_seats,
        ics_hvac_bottom_bar_left_singlezone_seats,
        ics_hvac_bottom_fly_out_seat_controls_left,
        ics_svr_main_screen_sd_Card_full,
        ics_virtualcontrols_universal_remotes_unavailable_snack_bar,
        ics_virtualcontrols_one_pedal_driving_unavailable_snackbar,
        ics_virtual_controls_options_snackbar,
        ics_svr_acp_sd_card_file_explorer_directory,
        ics_camera_calibration_unsuccessful_snackbar,
        ics_svr_acp_format_successful_snackbar,
        ics_svr_acp_must_be_parked_to_setup,
        ics_camera_svr,
        ics_virtual_controls_drive_lka_unavailable_snackbar,
        ics_svr_vpm_video_saved_snackbar,
        ics_svr_unable_to_open,
        ics_svr_vpm_main_screen,
        ics_svr_crash_setting,
        ics_virtualcontrols_summary_screen_service_needed,
        ics_camera_svr_full_dialog,
        ics_svr_vpm_saved_recordings,
        ics_camera_jack_knife_amber_snackbar,
        ics_svr_all_sd_card_full_snackbar,
        ics_svr_acp_theft_setting,
        ics_svr_acp_video_saved_snackbar,
        ics_virtualcontrols_drive_park_traction_control_unavailable_snackbar,
        ics_virtual_controls_lane_assistance_off_state_snackbar,
        ics_camera_jack_knife_red_snackbar,
        ics_svr_acp_format_failed_snackbar,
        ics_virtualcontrols_summary_screen_soc_low,
        ics_virtualcontrols_peekin_screen_circle_alt_until_range_reserve,
        ics_svr_acp_park_Vehicle_to_continue_scrolling,
        ics_svr_acp_emergency_call_setting,
        ics_virtual_controls_aux_not_available_snackbar,
        ics_virtualcontrols_fog_lights_unavailable_snackbar,
        ics_svr_acp_sd_card_empty,
        ics_svr_format_failed_snackbar,
        ics_svr_vpm_continuous_recording,
        ics_virtual_controls_hill_descent_control_snackbar,
        ics_svr_acp_unable_to_open,
        ics_virtualcontrols_one_pedal_driving_failure_snackbar,
        ics_svr_video_erased_snackbar,
        ics_svr_main_screen_no_videos,
        ics_svr_back_ground,
        ics_svr_sd_card_file_explorer_root,
        ics_camera_aux_camera_not_connected_uvs_only,
        ics_svr_sd_card_required,
        ics_svr_first_use_disclaimer,
        ics_camera_bowl_touch,
        ics_virtualcontrols_drive_auto_hold_unavailable_snackbar,
        ics_svr_vpm_video_player_single_view,
        ics_svr_acp_continuous_recording,
        ics_virtual_controls_lane_assistance_unavailable_snackbar,
        ics_svr_acp_wipe_and_format_sd_card,
        ics_svr_vpm_file_cannot_be_played_snackbar,
        ics_svr_acp_used_when_parked,
        ics_hvac_bottom_fly_out_air_direction,
        ics_camera_drive_forward_snackbar,
        ics_spanish_default_numerical_screen,
        ics_svr_sd_card_read_write_error_dialog,
        ics_virtual_controls_traction_control_competitive,
        ics_svr_vpm_video_player_mosaic_view,
        ics_svr_vpm_saved_recordings_with_triggered_recordings,
        ics_virtualcontrols_lane_assistance_with_bzsa,
        ics_hvac_bottom_fly_out_seat_controls_right,
        ics_spanish_default_special_character_screen,
        ics_camera_guideline_and_icon_turning_interface,
        ics_virtualcontrols_options_update_location,
        ics_svr_sd_card_empty,
        ics_virtual_controls_pin_to_start_passcode_system_unavailable,
        ics_virtualcontrols_universal_remotes_auto_open_close,
        ics_virtualcontrols_auto_hold_not_allowed_snackbar,
        ics_svr_acp_file_cannot_be_played_snackbar,
        ics_svr_acp_park_your_Vehicle_to_continue_scrolling,
        ics_virtualcontrols_lane_assistance_with_bzsa_and_holca,
        ics_virtualcontrols_options_auto_location_not_detected,
        ics_virtual_controls_lane_assistance_bzsa_unavailable_snackbar,
        ics_virtualcontrols_auto_high_beams_snackbar,
        ics_virtualcontrols_lane_assistance_with_holca,
        ics_svr_acp_sd_card_need_to_be_formatted,
        ics_hvac_bottom_fly_out_temperature_controls_right,
        ics_svr_vpm_recent_recordings,
        ics_svr_vpm_video_file_will_be_erased_snackbar,
        ics_svr_vpm_can_only_be_used_when_parked,
        ics_virtualcontrols_peekin_screen_circle_active_charging,
        ics_virtual_controls_pin_to_start_successful_start_brake_only,
        ics_virtual_controls_drive,
        ics_virtualcontrols_universal_remotes_mismatch,
        ics_virtualcontrols_auto_high_beams_unavailable_snackbar,
        ics_virtualcontrols_power_reargate_height,
        ics_svr_unavailable_snackbar,
        ics_svr_sd_card_full_snackbar,
        ics_svr_acp_delete_video,
        ics_camera_icon_overlay_placement,
        ics_virtual_controls_multiple_smart_controls,
        ics_camera_svr_list,
        ics_hvac_bottom_fly_out_temperature_controls_left,
        ics_virtualcontrols_universal_remotes_system_error,
        ics_svr_format_successful_snackbar,
    }
};


}//namespace screens

#endif // SCREENEXPERSSIONS_H
