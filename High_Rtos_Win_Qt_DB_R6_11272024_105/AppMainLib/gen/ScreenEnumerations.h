// Copyright (C) GM Global Technology Operations LLC 2024.
// All Rights Reserved.
// GM Confidential Restricted.
// 
// Designed and Developed by Rampgroup, © 2024 People Tech Group all rights reserved.

#ifndef SCREENENUMERATIONS_H
#define SCREENENUMERATIONS_H

#include "ScreenExperssions.h"
#include "Templates.h"


namespace screens 
{

enum class Screen : uint32_t
{
    ics_default_keyboard_screen = ramp::Hash(ics_default_keyboard_screen),
    ics_default_numerical_screen = ramp::Hash(ics_default_numerical_screen),
    ics_default_special_character_screen = ramp::Hash(ics_default_special_character_screen),
    ics_spanish_default_keyboard_screen = ramp::Hash(ics_spanish_default_keyboard_screen),
    ics_default_chinese_keyboard_screen = ramp::Hash(ics_default_chinese_keyboard_screen),
    ics_animation_welcome = ramp::Hash(ics_animation_welcome),
    ics_animation_startup = ramp::Hash(ics_animation_startup),
    ics_animation_shutdown = ramp::Hash(ics_animation_shutdown),
    ics_black_screen = ramp::Hash(ics_black_screen),
    ics_keyboard_popup_screen = ramp::Hash(ics_keyboard_popup_screen),
    ics_highmid_keyboard_alphabet_key1_popup = ramp::Hash(ics_highmid_keyboard_alphabet_key1_popup),
    ics_highmid_keyboard_alphabet_key10_popup = ramp::Hash(ics_highmid_keyboard_alphabet_key10_popup),
    ics_highmid_keyboard_alphabet_key11_popup = ramp::Hash(ics_highmid_keyboard_alphabet_key11_popup),
    ics_highmid_keyboard_alphabet_key12_popup = ramp::Hash(ics_highmid_keyboard_alphabet_key12_popup),
    ics_highmid_keyboard_alphabet_key2_popup = ramp::Hash(ics_highmid_keyboard_alphabet_key2_popup),
    ics_highmid_keyboard_alphabet_key23_popup = ramp::Hash(ics_highmid_keyboard_alphabet_key23_popup),
    ics_highmid_keyboard_alphabet_key26_popup = ramp::Hash(ics_highmid_keyboard_alphabet_key26_popup),
    ics_highmid_keyboard_alphabet_key3_popup = ramp::Hash(ics_highmid_keyboard_alphabet_key3_popup),
    ics_highmid_keyboard_alphabet_key4_popup = ramp::Hash(ics_highmid_keyboard_alphabet_key4_popup),
    ics_highmid_keyboard_alphabet_key5_popup = ramp::Hash(ics_highmid_keyboard_alphabet_key5_popup),
    ics_highmid_keyboard_alphabet_key6_popup = ramp::Hash(ics_highmid_keyboard_alphabet_key6_popup),
    ics_highmid_keyboard_alphabet_key7_popup = ramp::Hash(ics_highmid_keyboard_alphabet_key7_popup),
    ics_highmid_keyboard_alphabet_key8_popup = ramp::Hash(ics_highmid_keyboard_alphabet_key8_popup),
    ics_highmid_keyboard_alphabet_key9_popup = ramp::Hash(ics_highmid_keyboard_alphabet_key9_popup),
    ics_highmid_keyboard_numeric_key1_popup = ramp::Hash(ics_highmid_keyboard_numeric_key1_popup),
    ics_highmid_keyboard_numeric_key10_popup = ramp::Hash(ics_highmid_keyboard_numeric_key10_popup),
    ics_highmid_keyboard_numeric_key14_popup = ramp::Hash(ics_highmid_keyboard_numeric_key14_popup),
    ics_highmid_keyboard_numeric_key16_popup = ramp::Hash(ics_highmid_keyboard_numeric_key16_popup),
    ics_highmid_keyboard_numeric_key17_popup = ramp::Hash(ics_highmid_keyboard_numeric_key17_popup),
    ics_highmid_keyboard_numeric_key18_popup = ramp::Hash(ics_highmid_keyboard_numeric_key18_popup),
    ics_highmid_keyboard_numeric_key19_popup = ramp::Hash(ics_highmid_keyboard_numeric_key19_popup),
    ics_highmid_keyboard_numeric_key2_popup = ramp::Hash(ics_highmid_keyboard_numeric_key2_popup),
    ics_highmid_keyboard_numeric_key21_popup = ramp::Hash(ics_highmid_keyboard_numeric_key21_popup),
    ics_highmid_keyboard_numeric_key22_popup = ramp::Hash(ics_highmid_keyboard_numeric_key22_popup),
    ics_highmid_keyboard_numeric_key27_popup = ramp::Hash(ics_highmid_keyboard_numeric_key27_popup),
    ics_highmid_keyboard_numeric_key3_popup = ramp::Hash(ics_highmid_keyboard_numeric_key3_popup),
    ics_highmid_keyboard_numeric_key4_popup = ramp::Hash(ics_highmid_keyboard_numeric_key4_popup),
    ics_highmid_keyboard_numeric_key5_popup = ramp::Hash(ics_highmid_keyboard_numeric_key5_popup),
    ics_highmid_keyboard_numeric_key7_popup = ramp::Hash(ics_highmid_keyboard_numeric_key7_popup),
    ics_highmid_keyboard_symbol_key13_popup = ramp::Hash(ics_highmid_keyboard_symbol_key13_popup),
    ics_highmid_keyboard_symbol_key15_popup = ramp::Hash(ics_highmid_keyboard_symbol_key15_popup),
    ics_highmid_keyboard_symbol_key16_popup = ramp::Hash(ics_highmid_keyboard_symbol_key16_popup),
    ics_highmid_keyboard_symbol_key17_popup = ramp::Hash(ics_highmid_keyboard_symbol_key17_popup),
    ics_highmid_keyboard_symbol_key2_popup = ramp::Hash(ics_highmid_keyboard_symbol_key2_popup),
    ics_highmid_keyboard_symbol_key24_popup = ramp::Hash(ics_highmid_keyboard_symbol_key24_popup),
    ics_highmid_keyboard_symbol_key25_popup = ramp::Hash(ics_highmid_keyboard_symbol_key25_popup),
    ics_highmid_keyboard_symbol_key32_popup = ramp::Hash(ics_highmid_keyboard_symbol_key32_popup),
    ics_highmid_keyboard_symbol_key4_popup = ramp::Hash(ics_highmid_keyboard_symbol_key4_popup),
    ics_highmid_keyboard_symbol_key6_popup = ramp::Hash(ics_highmid_keyboard_symbol_key6_popup),
    ics_highmid_keyboard_symbol_key9_popup = ramp::Hash(ics_highmid_keyboard_symbol_key9_popup),
    ics_highmid_spanish_keyboard_screen = ramp::Hash(ics_highmid_spanish_keyboard_screen),
    ics_spanish_keyboard_popup_screen = ramp::Hash(ics_spanish_keyboard_popup_screen),
    ics_highmid_spanish_keyboard_alphabet_key1_popup = ramp::Hash(ics_highmid_spanish_keyboard_alphabet_key1_popup),
    ics_highmid_spanish_keyboard_alphabet_key10_popup = ramp::Hash(ics_highmid_spanish_keyboard_alphabet_key10_popup),
    ics_highmid_spanish_keyboard_alphabet_key11_popup = ramp::Hash(ics_highmid_spanish_keyboard_alphabet_key11_popup),
    ics_highmid_spanish_keyboard_alphabet_key2_popup = ramp::Hash(ics_highmid_spanish_keyboard_alphabet_key2_popup),
    ics_highmid_spanish_keyboard_alphabet_key24_popup = ramp::Hash(ics_highmid_spanish_keyboard_alphabet_key24_popup),
    ics_highmid_spanish_keyboard_alphabet_key27_popup = ramp::Hash(ics_highmid_spanish_keyboard_alphabet_key27_popup),
    ics_highmid_spanish_keyboard_alphabet_key3_popup = ramp::Hash(ics_highmid_spanish_keyboard_alphabet_key3_popup),
    ics_highmid_spanish_keyboard_alphabet_key4_popup = ramp::Hash(ics_highmid_spanish_keyboard_alphabet_key4_popup),
    ics_highmid_spanish_keyboard_alphabet_key5_popup = ramp::Hash(ics_highmid_spanish_keyboard_alphabet_key5_popup),
    ics_highmid_spanish_keyboard_alphabet_key6_popup = ramp::Hash(ics_highmid_spanish_keyboard_alphabet_key6_popup),
    ics_highmid_spanish_keyboard_alphabet_key7_popup = ramp::Hash(ics_highmid_spanish_keyboard_alphabet_key7_popup),
    ics_highmid_spanish_keyboard_alphabet_key8_popup = ramp::Hash(ics_highmid_spanish_keyboard_alphabet_key8_popup),
    ics_highmid_spanish_keyboard_alphabet_key9_popup = ramp::Hash(ics_highmid_spanish_keyboard_alphabet_key9_popup),
    ics_highmid_spanish_keyboard_numeric_key1_popup = ramp::Hash(ics_highmid_spanish_keyboard_numeric_key1_popup),
    ics_highmid_spanish_keyboard_numeric_key10_popup = ramp::Hash(ics_highmid_spanish_keyboard_numeric_key10_popup),
    ics_highmid_spanish_keyboard_numeric_key14_popup = ramp::Hash(ics_highmid_spanish_keyboard_numeric_key14_popup),
    ics_highmid_spanish_keyboard_numeric_key16_popup = ramp::Hash(ics_highmid_spanish_keyboard_numeric_key16_popup),
    ics_highmid_spanish_keyboard_numeric_key17_popup = ramp::Hash(ics_highmid_spanish_keyboard_numeric_key17_popup),
    ics_highmid_spanish_keyboard_numeric_key18_popup = ramp::Hash(ics_highmid_spanish_keyboard_numeric_key18_popup),
    ics_highmid_spanish_keyboard_numeric_key19_popup = ramp::Hash(ics_highmid_spanish_keyboard_numeric_key19_popup),
    ics_highmid_spanish_keyboard_numeric_key2_popup = ramp::Hash(ics_highmid_spanish_keyboard_numeric_key2_popup),
    ics_highmid_spanish_keyboard_numeric_key21_popup = ramp::Hash(ics_highmid_spanish_keyboard_numeric_key21_popup),
    ics_highmid_spanish_keyboard_numeric_key22_popup = ramp::Hash(ics_highmid_spanish_keyboard_numeric_key22_popup),
    ics_highmid_spanish_keyboard_numeric_key27_popup = ramp::Hash(ics_highmid_spanish_keyboard_numeric_key27_popup),
    ics_highmid_spanish_keyboard_numeric_key3_popup = ramp::Hash(ics_highmid_spanish_keyboard_numeric_key3_popup),
    ics_highmid_spanish_keyboard_numeric_key4_popup = ramp::Hash(ics_highmid_spanish_keyboard_numeric_key4_popup),
    ics_highmid_spanish_keyboard_numeric_key5_popup = ramp::Hash(ics_highmid_spanish_keyboard_numeric_key5_popup),
    ics_highmid_spanish_keyboard_numeric_key7_popup = ramp::Hash(ics_highmid_spanish_keyboard_numeric_key7_popup),
    ics_highmid_spanish_keyboard_symbol_key13_popup = ramp::Hash(ics_highmid_spanish_keyboard_symbol_key13_popup),
    ics_highmid_spanish_keyboard_symbol_key15_popup = ramp::Hash(ics_highmid_spanish_keyboard_symbol_key15_popup),
    ics_highmid_spanish_keyboard_symbol_key16_popup = ramp::Hash(ics_highmid_spanish_keyboard_symbol_key16_popup),
    ics_highmid_spanish_keyboard_symbol_key17_popup = ramp::Hash(ics_highmid_spanish_keyboard_symbol_key17_popup),
    ics_highmid_spanish_keyboard_symbol_key2_popup = ramp::Hash(ics_highmid_spanish_keyboard_symbol_key2_popup),
    ics_highmid_spanish_keyboard_symbol_key24_popup = ramp::Hash(ics_highmid_spanish_keyboard_symbol_key24_popup),
    ics_highmid_spanish_keyboard_symbol_key25_popup = ramp::Hash(ics_highmid_spanish_keyboard_symbol_key25_popup),
    ics_highmid_spanish_keyboard_symbol_key32_popup = ramp::Hash(ics_highmid_spanish_keyboard_symbol_key32_popup),
    ics_highmid_spanish_keyboard_symbol_key4_popup = ramp::Hash(ics_highmid_spanish_keyboard_symbol_key4_popup),
    ics_highmid_spanish_keyboard_symbol_key6_popup = ramp::Hash(ics_highmid_spanish_keyboard_symbol_key6_popup),
    ics_highmid_spanish_keyboard_symbol_key9_popup = ramp::Hash(ics_highmid_spanish_keyboard_symbol_key9_popup),
    ics_virtual_controls_controls_home = ramp::Hash(ics_virtual_controls_controls_home),
    ics_virtual_controls_home_cards = ramp::Hash(ics_virtual_controls_home_cards),
    ics_virtual_controls_doors_and_windows = ramp::Hash(ics_virtual_controls_doors_and_windows),
    ics_virtual_controls_child_safety_locks = ramp::Hash(ics_virtual_controls_child_safety_locks),
    ics_virtual_controls_power_window_lockout = ramp::Hash(ics_virtual_controls_power_window_lockout),
    ics_virtualcontrols_motion_sensor = ramp::Hash(ics_virtualcontrols_motion_sensor),
    ics_virtualcontrols_power_liftgate_height = ramp::Hash(ics_virtualcontrols_power_liftgate_height),
    ics_virtual_controls_drive_and_park = ramp::Hash(ics_virtual_controls_drive_and_park),
    ics_virtual_controls_safety = ramp::Hash(ics_virtual_controls_safety),
    ics_virtual_controls_traction_control = ramp::Hash(ics_virtual_controls_traction_control),
    ics_virtual_controls_hill_descent_control = ramp::Hash(ics_virtual_controls_hill_descent_control),
    ics_virtual_controls_auto_parking_assist = ramp::Hash(ics_virtual_controls_auto_parking_assist),
    ics_virtual_controls_one_pedal_driving = ramp::Hash(ics_virtual_controls_one_pedal_driving),
    ics_virtual_controls_park_assist = ramp::Hash(ics_virtual_controls_park_assist),
    ics_virtual_controls_lights = ramp::Hash(ics_virtual_controls_lights),
    ics_virtualcontrols_dome_light = ramp::Hash(ics_virtualcontrols_dome_light),
    ics_virtualcontrols_headlights = ramp::Hash(ics_virtualcontrols_headlights),
    ics_virtualcontrols_auto_high_beams = ramp::Hash(ics_virtualcontrols_auto_high_beams),
    ics_virtualcontrols_fog_lights = ramp::Hash(ics_virtualcontrols_fog_lights),
    ics_virtualcontrols_front_fog_lights = ramp::Hash(ics_virtualcontrols_front_fog_lights),
    ics_virtualcontrols_rear_fog_lights = ramp::Hash(ics_virtualcontrols_rear_fog_lights),
    ics_virtualcontrols_front_rear_fog_lights = ramp::Hash(ics_virtualcontrols_front_rear_fog_lights),
    ics_virtualcontrols_cargo_lights = ramp::Hash(ics_virtualcontrols_cargo_lights),
    ics_virtualcontrols_task_lights = ramp::Hash(ics_virtualcontrols_task_lights),
    ics_virtual_controls_universal_remotes_start = ramp::Hash(ics_virtual_controls_universal_remotes_start),
    ics_virtualcontrols_program = ramp::Hash(ics_virtualcontrols_program),
    ics_virtual_controls_detected = ramp::Hash(ics_virtual_controls_detected),
    ics_virtual_controls_success_test = ramp::Hash(ics_virtual_controls_success_test),
    ics_virtualcontrols_learn = ramp::Hash(ics_virtualcontrols_learn),
    ics_virtualcontrols_learn_success_test = ramp::Hash(ics_virtualcontrols_learn_success_test),
    ics_virtual_controls_programming_successful = ramp::Hash(ics_virtual_controls_programming_successful),
    ics_virtual_controls_options = ramp::Hash(ics_virtual_controls_options),
    ics_virtualcontrols_doors_windows_door_mismatch_error_snackbar = ramp::Hash(ics_virtualcontrols_doors_windows_door_mismatch_error_snackbar),
    ics_virtualcontrols_lights_auto_high_beams_snackbar = ramp::Hash(ics_virtualcontrols_lights_auto_high_beams_snackbar),
    ics_virtualcontrols_task_lights_snackbar = ramp::Hash(ics_virtualcontrols_task_lights_snackbar),
    ics_virtualcontrols_lights_headlights_dialog = ramp::Hash(ics_virtualcontrols_lights_headlights_dialog),
    ics_virtual_controls_cargo_lights_snackbar = ramp::Hash(ics_virtual_controls_cargo_lights_snackbar),
    ics_virtual_controls_options_name = ramp::Hash(ics_virtual_controls_options_name),
    ics_virtualcontrols_options_auto = ramp::Hash(ics_virtualcontrols_options_auto),
    ics_virtualcontrols_options_delete_dialog = ramp::Hash(ics_virtualcontrols_options_delete_dialog),
    ics_virtualcontrols_options_delete_all_dialog = ramp::Hash(ics_virtualcontrols_options_delete_all_dialog),
    ics_virtualcontrols_universal_remotes_start_snackbar = ramp::Hash(ics_virtualcontrols_universal_remotes_start_snackbar),
    ics_virtualcontrols_programming_successful_maximum_snackbar = ramp::Hash(ics_virtualcontrols_programming_successful_maximum_snackbar),
    ics_virtualcontrols_traction_control_unavailable_snackbar = ramp::Hash(ics_virtualcontrols_traction_control_unavailable_snackbar),
    ics_virtualcontrols_lights_fog_lights_unavailable_snackbar = ramp::Hash(ics_virtualcontrols_lights_fog_lights_unavailable_snackbar),
    ics_virtualcontrols_universal_remotes_edit_snackbar = ramp::Hash(ics_virtualcontrols_universal_remotes_edit_snackbar),
    ics_virtualcontrols_drive_park_opd_unavailable_snackbar = ramp::Hash(ics_virtualcontrols_drive_park_opd_unavailable_snackbar),
    ics_virtualcontrols_headlights_smart_controls = ramp::Hash(ics_virtualcontrols_headlights_smart_controls),
    ics_virtualcontrols_geolocation_not_detected = ramp::Hash(ics_virtualcontrols_geolocation_not_detected),
    ics_virtualcontrols_options_location_save = ramp::Hash(ics_virtualcontrols_options_location_save),
    ics_virtualcontrols_no_invehicle_infotainment = ramp::Hash(ics_virtualcontrols_no_invehicle_infotainment),
    ics_virtual_controls_head_up_display = ramp::Hash(ics_virtual_controls_head_up_display),
    ics_virtualcontrols_hmi_factory_reset = ramp::Hash(ics_virtualcontrols_hmi_factory_reset),
    ics_virtualcontrols_hmi_factory_reset_confirmation = ramp::Hash(ics_virtualcontrols_hmi_factory_reset_confirmation),
    ics_virtualcontrols_facotry_reset_in_progress = ramp::Hash(ics_virtualcontrols_facotry_reset_in_progress),
    ics_virtualcontrols_factory_reset_is_complete = ramp::Hash(ics_virtualcontrols_factory_reset_is_complete),
    ics_virtualcontrols_high_temp = ramp::Hash(ics_virtualcontrols_high_temp),
    ics_virtual_controls_keyboard_unavailable_while_driving_snackbar = ramp::Hash(ics_virtual_controls_keyboard_unavailable_while_driving_snackbar),
    ics_virtualcontrols_hmi_recovery_mode_confirmation = ramp::Hash(ics_virtualcontrols_hmi_recovery_mode_confirmation),
    ics_virtual_controls_factory_reset_is_vehicle_in_park_snackbar = ramp::Hash(ics_virtual_controls_factory_reset_is_vehicle_in_park_snackbar),
    ics_virtual_controls_factory_reset_is_temperature_in_range_snackbar = ramp::Hash(ics_virtual_controls_factory_reset_is_temperature_in_range_snackbar),
    ics_apa_unavailable_snack_bar = ramp::Hash(ics_apa_unavailable_snack_bar),
    ics_apa_deactiated_speed_snack_bar = ramp::Hash(ics_apa_deactiated_speed_snack_bar),
    ics_saftey_camera_feature_unavailable = ramp::Hash(ics_saftey_camera_feature_unavailable),
    ics_virtual_controls_lane_centering_assist = ramp::Hash(ics_virtual_controls_lane_centering_assist),
    ics_virtualcontrols_universal_remotes_multiple = ramp::Hash(ics_virtualcontrols_universal_remotes_multiple),
    ics_virtualcontrols_auto_hold = ramp::Hash(ics_virtualcontrols_auto_hold),
    ics_virtual_controls_park = ramp::Hash(ics_virtual_controls_park),
    ics_persistent_smart_controls = ramp::Hash(ics_persistent_smart_controls),
    ics_virtualcontrols_persistent_controls_speed_limiter_auto_active_snackbar = ramp::Hash(ics_virtualcontrols_persistent_controls_speed_limiter_auto_active_snackbar),
    ics_virtualcontrols_persistent_controls_lane_keep_assist_snackbar = ramp::Hash(ics_virtualcontrols_persistent_controls_lane_keep_assist_snackbar),
    ics_virtual_controls_persistent_controls_speed_limiter_cruise_control_off_snackbar = ramp::Hash(ics_virtual_controls_persistent_controls_speed_limiter_cruise_control_off_snackbar),
    ics_virtual_controls_persistent_controls_speed_limiter_not_allowed_snackbar = ramp::Hash(ics_virtual_controls_persistent_controls_speed_limiter_not_allowed_snackbar),
    ics_virtualcontrols_handheld_mode = ramp::Hash(ics_virtualcontrols_handheld_mode),
    ics_virtualcontrols_program_d_mode_dialog = ramp::Hash(ics_virtualcontrols_program_d_mode_dialog),
    ics_virtualcontrols_program_ur_mode_dialog = ramp::Hash(ics_virtualcontrols_program_ur_mode_dialog),
    ics_virtual_controls_controls_home_aux = ramp::Hash(ics_virtual_controls_controls_home_aux),
    ics_virtual_controls_opd_enabled_snackbar = ramp::Hash(ics_virtual_controls_opd_enabled_snackbar),
    ics_persistent_smart_controls_pop_up = ramp::Hash(ics_persistent_smart_controls_pop_up),
    ics_virtual_controls_pin_to_start = ramp::Hash(ics_virtual_controls_pin_to_start),
    ics_virtualcontrols_lane_keep_assist = ramp::Hash(ics_virtualcontrols_lane_keep_assist),
    ics_apa_unavailable_snack_bar_at_ultra_cruise = ramp::Hash(ics_apa_unavailable_snack_bar_at_ultra_cruise),
    ics_virtualcontrols_lane_keep_assist_bzsa_only = ramp::Hash(ics_virtualcontrols_lane_keep_assist_bzsa_only),
    ics_virtual_controls_drive_bzsa_unavailable_snackbar = ramp::Hash(ics_virtual_controls_drive_bzsa_unavailable_snackbar),
    ics_virtual_controls_passive_power_mode_off_verify_snackbar = ramp::Hash(ics_virtual_controls_passive_power_mode_off_verify_snackbar),
    ics_virtualcontrols_passive_power_mode_emergency_detected = ramp::Hash(ics_virtualcontrols_passive_power_mode_emergency_detected),
    ics_virtualcontrols_passive_power_mode_extend_snackbar = ramp::Hash(ics_virtualcontrols_passive_power_mode_extend_snackbar),
    ics_virtualcontrols_passive_power_mode_snackbar_remaining = ramp::Hash(ics_virtualcontrols_passive_power_mode_snackbar_remaining),
    ics_virtualcontrols_bakground = ramp::Hash(ics_virtualcontrols_bakground),
    ics_virtual_controls_programming_successful_press_burndown = ramp::Hash(ics_virtual_controls_programming_successful_press_burndown),
    ics_virtual_controls_pin_to_start_successful_start_stop_button = ramp::Hash(ics_virtual_controls_pin_to_start_successful_start_stop_button),
    ics_virtual_controls_pin_to_start_nfc = ramp::Hash(ics_virtual_controls_pin_to_start_nfc),
    ics_virtual_controls_outlets_quick_control_snackbar = ramp::Hash(ics_virtual_controls_outlets_quick_control_snackbar),
    ics_virtualcontrols_outlets_start_screen = ramp::Hash(ics_virtualcontrols_outlets_start_screen),
    ics_virtualcontrols_range_reserve = ramp::Hash(ics_virtualcontrols_range_reserve),
    ics_virtualcontrols_peekin_screen_circle_alt = ramp::Hash(ics_virtualcontrols_peekin_screen_circle_alt),
    ics_virtualcontrols_summary_screen = ramp::Hash(ics_virtualcontrols_summary_screen),
    ics_virtualcontrols_start_screen_tdl_set_thinking_snackbar = ramp::Hash(ics_virtualcontrols_start_screen_tdl_set_thinking_snackbar),
    ics_virtualcontrols_start_screen_circut_breaker_fault = ramp::Hash(ics_virtualcontrols_start_screen_circut_breaker_fault),
    ics_virtualcontrols_service_needed_fault = ramp::Hash(ics_virtualcontrols_service_needed_fault),
    ics_virtualcontrols_start_screen_customer_action_fault = ramp::Hash(ics_virtualcontrols_start_screen_customer_action_fault),
    ics_virtualcontrols_start_screen_soc_low_fault = ramp::Hash(ics_virtualcontrols_start_screen_soc_low_fault),
    ics_virtualcontrols_start_screen_vehicle_conditions_not_met_fault = ramp::Hash(ics_virtualcontrols_start_screen_vehicle_conditions_not_met_fault),
    ics_virtualcontrols_range_reserve_tdl_set_to_zero_confirm = ramp::Hash(ics_virtualcontrols_range_reserve_tdl_set_to_zero_confirm),
    ics_virtualcontrols_range_reserve_tdl_set_to_100_confirm = ramp::Hash(ics_virtualcontrols_range_reserve_tdl_set_to_100_confirm),
    ics_virtualcontrols_range_reverse_reduce_propulsion = ramp::Hash(ics_virtualcontrols_range_reverse_reduce_propulsion),
    ics_virtualcontrols_turn_vehicle_off_message = ramp::Hash(ics_virtualcontrols_turn_vehicle_off_message),
    ics_virtualcontrols_peekin_screen_end_notification = ramp::Hash(ics_virtualcontrols_peekin_screen_end_notification),
    ics_virtualcontrols_peekin_screen_time_running_out_notification = ramp::Hash(ics_virtualcontrols_peekin_screen_time_running_out_notification),
    ics_virtualcontrols_peek_in_screen_time_added_snackbar = ramp::Hash(ics_virtualcontrols_peek_in_screen_time_added_snackbar),
    ics_virtualcontrols_outlets_dwl = ramp::Hash(ics_virtualcontrols_outlets_dwl),
    ics_virtualcontrols_outlets_disabled_ota = ramp::Hash(ics_virtualcontrols_outlets_disabled_ota),
    ics_aos_calibration_with_telltale = ramp::Hash(ics_aos_calibration_with_telltale),
    ics_virtual_controls_aux_switches = ramp::Hash(ics_virtual_controls_aux_switches),
    ics_virtual_controls_aux_edit = ramp::Hash(ics_virtual_controls_aux_edit),
    ics_vc_aux_not_available_snackbar = ramp::Hash(ics_vc_aux_not_available_snackbar),
    ics_virtual_controls_aux_name = ramp::Hash(ics_virtual_controls_aux_name),
    ics_virtual_controls_speed_limiter = ramp::Hash(ics_virtual_controls_speed_limiter),
    ics_virtual_controls_charge_port_door = ramp::Hash(ics_virtual_controls_charge_port_door),
    ics_virtualcontrols_charge_port_door_unavailable_snackbar = ramp::Hash(ics_virtualcontrols_charge_port_door_unavailable_snackbar),
    ics_virtualcontrols_universal_remotes_unavailable_snack_bar = ramp::Hash(ics_virtualcontrols_universal_remotes_unavailable_snack_bar),
    ics_vehicle_knob = ramp::Hash(ics_vehicle_knob),
    ics_virtualcontrols_universal_remotes_mismatch = ramp::Hash(ics_virtualcontrols_universal_remotes_mismatch),
    ics_virtualcontrols_universal_remotes_park_snackbar = ramp::Hash(ics_virtualcontrols_universal_remotes_park_snackbar),
    ics_vc_ppm_vehicle_off_snackbar = ramp::Hash(ics_vc_ppm_vehicle_off_snackbar),
    ics_vc_ppm_confirm_off_snackbar = ramp::Hash(ics_vc_ppm_confirm_off_snackbar),
    ics_camera_ppm_vehicle_off_snackbar = ramp::Hash(ics_camera_ppm_vehicle_off_snackbar),
    ics_camera_ppm_confirm_off_snackbar = ramp::Hash(ics_camera_ppm_confirm_off_snackbar),
    ics_virtualcontrols_lane_assistance_with_bzsa_and_holca = ramp::Hash(ics_virtualcontrols_lane_assistance_with_bzsa_and_holca),
    ics_virtual_controls_lane_assistance_bzsa_unavailable_snackbar = ramp::Hash(ics_virtual_controls_lane_assistance_bzsa_unavailable_snackbar),
    ics_virtual_controls_lane_assistance_off_state_snackbar = ramp::Hash(ics_virtual_controls_lane_assistance_off_state_snackbar),
    ics_virtual_controls_lane_assistance_unavailable_snackbar = ramp::Hash(ics_virtual_controls_lane_assistance_unavailable_snackbar),
    ics_camera_aux_camera_not_connected_uvs_only = ramp::Hash(ics_camera_aux_camera_not_connected_uvs_only),
    ics_camera_calibration_unsuccessful_snackbar = ramp::Hash(ics_camera_calibration_unsuccessful_snackbar),
    ics_camera_drive_forward_snackbar = ramp::Hash(ics_camera_drive_forward_snackbar),
    ics_camera_jack_knife_amber_snackbar = ramp::Hash(ics_camera_jack_knife_amber_snackbar),
    ics_camera_jack_knife_red_snackbar = ramp::Hash(ics_camera_jack_knife_red_snackbar),
    ics_virtual_controls_rear_steering = ramp::Hash(ics_virtual_controls_rear_steering),
    ics_virtualcontrols_rear_steering_crabwalk_dialog = ramp::Hash(ics_virtualcontrols_rear_steering_crabwalk_dialog),
    ics_virtual_controls_conversation_enhance = ramp::Hash(ics_virtual_controls_conversation_enhance),
    ics_virtualcontrols_rear_control_lock = ramp::Hash(ics_virtualcontrols_rear_control_lock),
    ics_virtualcontrols_power_assist_steps = ramp::Hash(ics_virtualcontrols_power_assist_steps),
    ics_virtualcontrols_power_assist_steps_unavailable_snackbar = ramp::Hash(ics_virtualcontrols_power_assist_steps_unavailable_snackbar),
    ics_virtual_controls_rear_auto_breaking = ramp::Hash(ics_virtual_controls_rear_auto_breaking),
    ics_virtual_controls_pab = ramp::Hash(ics_virtual_controls_pab),
    ics_virtualcontrols_pab_change_notification = ramp::Hash(ics_virtualcontrols_pab_change_notification),
    ics_virtualcontrols_pab_snackbar = ramp::Hash(ics_virtualcontrols_pab_snackbar),
    ics_virtual_controls_seat_massage = ramp::Hash(ics_virtual_controls_seat_massage),
    ics_virtual_controls_night_vision = ramp::Hash(ics_virtual_controls_night_vision),
    ics_virtualcontrols_start_screen_tdl_set_thinking = ramp::Hash(ics_virtualcontrols_start_screen_tdl_set_thinking),
    ics_persistent_headlights_menu_options = ramp::Hash(ics_persistent_headlights_menu_options),
    ics_virtual_controls_scroll_first_page = ramp::Hash(ics_virtual_controls_scroll_first_page),
    ics_virtual_controls_scroll_second_page = ramp::Hash(ics_virtual_controls_scroll_second_page),
    ics_virtual_controls_scroll_third_page = ramp::Hash(ics_virtual_controls_scroll_third_page),
    ics_virtual_controls_scroll_first_page_aux = ramp::Hash(ics_virtual_controls_scroll_first_page_aux),
    ics_virtual_controls_scroll_second_page_aux = ramp::Hash(ics_virtual_controls_scroll_second_page_aux),
    ics_apa_park_drawer = ramp::Hash(ics_apa_park_drawer),
    ics_apa_exit_park_drawer = ramp::Hash(ics_apa_exit_park_drawer),
    ics_apa_park_instructions_perp_right = ramp::Hash(ics_apa_park_instructions_perp_right),
    ics_apa_park_instr_perp_left = ramp::Hash(ics_apa_park_instr_perp_left),
    ics_apa_park_instr_parallel_right = ramp::Hash(ics_apa_park_instr_parallel_right),
    ics_apa_park_instr_parallel_left = ramp::Hash(ics_apa_park_instr_parallel_left),
    ics_apa_space_found_perp_right = ramp::Hash(ics_apa_space_found_perp_right),
    ics_apa_space_found_perp_left = ramp::Hash(ics_apa_space_found_perp_left),
    ics_apa_space_found_parallel_right = ramp::Hash(ics_apa_space_found_parallel_right),
    ics_apa_space_found_parallel_left = ramp::Hash(ics_apa_space_found_parallel_left),
    ics_apa_stay_or_remote_park = ramp::Hash(ics_apa_stay_or_remote_park),
    ics_apa_in_vehicle_park_hand_off = ramp::Hash(ics_apa_in_vehicle_park_hand_off),
    ics_apa_connecting_to_mybrand_app = ramp::Hash(ics_apa_connecting_to_mybrand_app),
    ics_apa_unable_to_connect = ramp::Hash(ics_apa_unable_to_connect),
    ics_apa_camera_view = ramp::Hash(ics_apa_camera_view),
    ics_apa_deactiated_snack_bar = ramp::Hash(ics_apa_deactiated_snack_bar),
    ics_apa_slowdown_appr_max_speed_snackbar = ramp::Hash(ics_apa_slowdown_appr_max_speed_snackbar),
    ics_apa_canceled_over_max_speed_snackbar = ramp::Hash(ics_apa_canceled_over_max_speed_snackbar),
    ics_apa_auto_steering_on = ramp::Hash(ics_apa_auto_steering_on),
    ics_apa_emergency_brake_off = ramp::Hash(ics_apa_emergency_brake_off),
    ics_apa_remote_park_handoff = ramp::Hash(ics_apa_remote_park_handoff),
    ics_apa_remote_exit_handoff = ramp::Hash(ics_apa_remote_exit_handoff),
    ics_apa_space_found_parallel_right_srp = ramp::Hash(ics_apa_space_found_parallel_right_srp),
    ics_apa_space_found_parallel_left_srp = ramp::Hash(ics_apa_space_found_parallel_left_srp),
    ics_apa_space_found_perp_right_srp = ramp::Hash(ics_apa_space_found_perp_right_srp),
    ics_apa_space_found_perp_left_srp = ramp::Hash(ics_apa_space_found_perp_left_srp),
    ics_apa_park_instructions_selection_drawer = ramp::Hash(ics_apa_park_instructions_selection_drawer),
    ics_apa_back_ground_update = ramp::Hash(ics_apa_back_ground_update),
    ics_apa_spot_found_parallel_right = ramp::Hash(ics_apa_spot_found_parallel_right),
    ics_apa_spot_found_parallel_left = ramp::Hash(ics_apa_spot_found_parallel_left),
    ics_apa_spot_found_perp_right = ramp::Hash(ics_apa_spot_found_perp_right),
    ics_apa_spot_found_perp_left = ramp::Hash(ics_apa_spot_found_perp_left),
    ics_apa_shift_to_reverse_parallel_left = ramp::Hash(ics_apa_shift_to_reverse_parallel_left),
    ics_apa_shift_to_reverse_parallel_right = ramp::Hash(ics_apa_shift_to_reverse_parallel_right),
    ics_apa_park_selection = ramp::Hash(ics_apa_park_selection),
    ics_apa_exit_selection = ramp::Hash(ics_apa_exit_selection),
    ics_apa_maneuvermessaging = ramp::Hash(ics_apa_maneuvermessaging),
    ics_safety_screen = ramp::Hash(ics_safety_screen),
    ics_brightness_control_screen = ramp::Hash(ics_brightness_control_screen),
    ics_brightness_control_screen_lhd = ramp::Hash(ics_brightness_control_screen_lhd),
    ics_disable_touch_screen = ramp::Hash(ics_disable_touch_screen),
    ics_disable_touch_snack_bar = ramp::Hash(ics_disable_touch_snack_bar),
    ics_virtualoff_china_regulation = ramp::Hash(ics_virtualoff_china_regulation),
    ics_virtualcontrols_lane_change_alert_notification = ramp::Hash(ics_virtualcontrols_lane_change_alert_notification),
    ics_camera_rvc_standard_view = ramp::Hash(ics_camera_rvc_standard_view),
    ics_camera_rvc_standard_trailer = ramp::Hash(ics_camera_rvc_standard_trailer),
    ics_camera_rvc_standard_trailer_hitch = ramp::Hash(ics_camera_rvc_standard_trailer_hitch),
    ics_camera_rvc_fullviewcamera = ramp::Hash(ics_camera_rvc_fullviewcamera),
    ics_camera_rvc_standard_hitch = ramp::Hash(ics_camera_rvc_standard_hitch),
    ics_camera_rvc_system_error = ramp::Hash(ics_camera_rvc_system_error),
    ics_camera_vpm_rearview_topdown_multipart_buttons = ramp::Hash(ics_camera_vpm_rearview_topdown_multipart_buttons),
    ics_vpm_front_camera = ramp::Hash(ics_vpm_front_camera),
    ics_camera_bowl_mfcfocused = ramp::Hash(ics_camera_bowl_mfcfocused),
    ics_camera_settings = ramp::Hash(ics_camera_settings),
    ics_exit_button = ramp::Hash(ics_exit_button),
    ics_vpm_rear_camera = ramp::Hash(ics_vpm_rear_camera),
    ics_vpm_hitch_camera = ramp::Hash(ics_vpm_hitch_camera),
    ics_camera_cargo_bed_view = ramp::Hash(ics_camera_cargo_bed_view),
    ics_camera_vpm_menu = ramp::Hash(ics_camera_vpm_menu),
    ics_camera_smart_control_main_screen = ramp::Hash(ics_camera_smart_control_main_screen),
    ics_camera_smart_control_scroll_first_page = ramp::Hash(ics_camera_smart_control_scroll_first_page),
    ics_camera_smart_control_scroll_second_page = ramp::Hash(ics_camera_smart_control_scroll_second_page),
    ics_camera_smart_control_scroll_third_page = ramp::Hash(ics_camera_smart_control_scroll_third_page),
    ics_camera_smart_control_scroll_fourth_page = ramp::Hash(ics_camera_smart_control_scroll_fourth_page),
    ics_camera_generic_transparent_trailer_snackbar = ramp::Hash(ics_camera_generic_transparent_trailer_snackbar),
    ics_camera_button_behavior_snackbar = ramp::Hash(ics_camera_button_behavior_snackbar),
    ics_vpm_trailer_camera = ramp::Hash(ics_vpm_trailer_camera),
    ics_camera_top_bar_list = ramp::Hash(ics_camera_top_bar_list),
    ics_camera_cvs_vpm_menu = ramp::Hash(ics_camera_cvs_vpm_menu),
    ics_camera_transparent_trailer_driveforward = ramp::Hash(ics_camera_transparent_trailer_driveforward),
    ics_camera_transparent_trailer_highspeed = ramp::Hash(ics_camera_transparent_trailer_highspeed),
    ics_camera_transparent_trailer_no_straight = ramp::Hash(ics_camera_transparent_trailer_no_straight),
    ics_camera_transparent_trailer_unable = ramp::Hash(ics_camera_transparent_trailer_unable),
    ics_camera_upa_symbols = ramp::Hash(ics_camera_upa_symbols),
    ics_hvac_bottom_bar_dual_zone = ramp::Hash(ics_hvac_bottom_bar_dual_zone),
    ics_hvac_bottom_bar_single_zone = ramp::Hash(ics_hvac_bottom_bar_single_zone),
    ics_hvac_bottom_bar_left_seats_flyout = ramp::Hash(ics_hvac_bottom_bar_left_seats_flyout),
    ics_hvac_bottom_bar_right_seats_flyout = ramp::Hash(ics_hvac_bottom_bar_right_seats_flyout),
    ics_hvac_bottom_bar_air_direction_flyout = ramp::Hash(ics_hvac_bottom_bar_air_direction_flyout),
    ics_hvac_bottom_bar_left_temp_flyout = ramp::Hash(ics_hvac_bottom_bar_left_temp_flyout),
    ics_hvac_bottom_bar_right_temp_flyout = ramp::Hash(ics_hvac_bottom_bar_right_temp_flyout),
    ics_hvac_bottom_bar_sz_left_temp_flyout = ramp::Hash(ics_hvac_bottom_bar_sz_left_temp_flyout),
    ics_time_display = ramp::Hash(ics_time_display),
    ics_hvac_menu_left_two_options_flyout = ramp::Hash(ics_hvac_menu_left_two_options_flyout),
    ics_hvac_menu_left_three_options_flyout = ramp::Hash(ics_hvac_menu_left_three_options_flyout),
    ics_hvac_menu_left_three_heated_options_flyout = ramp::Hash(ics_hvac_menu_left_three_heated_options_flyout),
    ics_hvac_menu_left_four_options_flyout = ramp::Hash(ics_hvac_menu_left_four_options_flyout),
    ics_hvac_menu_right_two_options_flyout = ramp::Hash(ics_hvac_menu_right_two_options_flyout),
    ics_hvac_menu_right_three_options_flyout = ramp::Hash(ics_hvac_menu_right_three_options_flyout),
    ics_hvac_menu_right_three_heated_options_flyout = ramp::Hash(ics_hvac_menu_right_three_heated_options_flyout),
    ics_hvac_menu_right_four_options_flyout = ramp::Hash(ics_hvac_menu_right_four_options_flyout),
    ics_hvac_menu_left_two_options_sz_flyout = ramp::Hash(ics_hvac_menu_left_two_options_sz_flyout),
    ics_hvac_menu_left_three_options_sz_flyout = ramp::Hash(ics_hvac_menu_left_three_options_sz_flyout),
    ics_hvac_menu_left_three_heated_options_sz_flyout = ramp::Hash(ics_hvac_menu_left_three_heated_options_sz_flyout),
    ics_hvac_menu_left_four_options_sz_flyout = ramp::Hash(ics_hvac_menu_left_four_options_sz_flyout),
    ics_hvac_menu_right_two_options_sz_flyout = ramp::Hash(ics_hvac_menu_right_two_options_sz_flyout),
    ics_hvac_menu_right_three_options_sz_flyout = ramp::Hash(ics_hvac_menu_right_three_options_sz_flyout),
    ics_hvac_menu_right_three_heated_options_sz_flyout = ramp::Hash(ics_hvac_menu_right_three_heated_options_sz_flyout),
    ics_hvac_menu_right_four_options_sz_flyout = ramp::Hash(ics_hvac_menu_right_four_options_sz_flyout),
    ics_hvac_sz_fan_speed_flyout = ramp::Hash(ics_hvac_sz_fan_speed_flyout),
    ics_development_home = ramp::Hash(ics_development_home),
    ics_development_home_off_cut = ramp::Hash(ics_development_home_off_cut),
    ics_persistent_volume_controls = ramp::Hash(ics_persistent_volume_controls),
    ics_camera_backup_safety_pop_up = ramp::Hash(ics_camera_backup_safety_pop_up),
    ics_virtualcontrols_one_pedal_driving_unavailable_snackbar = ramp::Hash(ics_virtualcontrols_one_pedal_driving_unavailable_snackbar),
    ics_virtual_controls_options_snackbar = ramp::Hash(ics_virtual_controls_options_snackbar),
    ics_virtual_controls_drive_lka_unavailable_snackbar = ramp::Hash(ics_virtual_controls_drive_lka_unavailable_snackbar),
    ics_virtualcontrols_drive_park_traction_control_unavailable_snackbar = ramp::Hash(ics_virtualcontrols_drive_park_traction_control_unavailable_snackbar),
    ics_virtual_controls_controls_home_t1ugf = ramp::Hash(ics_virtual_controls_controls_home_t1ugf),
    ics_virtual_controls_scroll_first_page_t1ugf = ramp::Hash(ics_virtual_controls_scroll_first_page_t1ugf),
    ics_virtual_controls_scroll_second_page_t1ugf = ramp::Hash(ics_virtual_controls_scroll_second_page_t1ugf),
    ics_virtual_controls_wake_screen_doors_and_windows = ramp::Hash(ics_virtual_controls_wake_screen_doors_and_windows),
    ics_virtual_controls_aux_not_available_snackbar = ramp::Hash(ics_virtual_controls_aux_not_available_snackbar),
    ics_virtualcontrols_fog_lights_unavailable_snackbar = ramp::Hash(ics_virtualcontrols_fog_lights_unavailable_snackbar),
    ics_virtual_controls_hill_descent_control_snackbar = ramp::Hash(ics_virtual_controls_hill_descent_control_snackbar),
    ics_camera_bowl_touch = ramp::Hash(ics_camera_bowl_touch),
    ics_virtualcontrols_drive_auto_hold_unavailable_snackbar = ramp::Hash(ics_virtualcontrols_drive_auto_hold_unavailable_snackbar),
    ics_spanish_default_numerical_screen = ramp::Hash(ics_spanish_default_numerical_screen),
    ics_virtual_controls_traction_control_competitive = ramp::Hash(ics_virtual_controls_traction_control_competitive),
    ics_virtual_controls_wake_screen_lights = ramp::Hash(ics_virtual_controls_wake_screen_lights),
    ics_spanish_default_special_character_screen = ramp::Hash(ics_spanish_default_special_character_screen),
    ics_camera_guideline_and_icon_turning_interface = ramp::Hash(ics_camera_guideline_and_icon_turning_interface),
    ics_virtualcontrols_options_update_location = ramp::Hash(ics_virtualcontrols_options_update_location),
    ics_virtual_controls_pin_to_start_passcode_system_unavailable = ramp::Hash(ics_virtual_controls_pin_to_start_passcode_system_unavailable),
    ics_virtualcontrols_universal_remotes_auto_open_close = ramp::Hash(ics_virtualcontrols_universal_remotes_auto_open_close),
    ics_virtualcontrols_auto_hold_not_allowed_snackbar = ramp::Hash(ics_virtualcontrols_auto_hold_not_allowed_snackbar),
    ics_virtualcontrols_wake_screen = ramp::Hash(ics_virtualcontrols_wake_screen),
    ics_virtualcontrols_options_auto_location_not_detected = ramp::Hash(ics_virtualcontrols_options_auto_location_not_detected),
    ics_virtualcontrols_auto_high_beams_snackbar = ramp::Hash(ics_virtualcontrols_auto_high_beams_snackbar),
    ics_virtual_controls_pin_to_start_successful_start_brake_only = ramp::Hash(ics_virtual_controls_pin_to_start_successful_start_brake_only),
    ics_virtual_controls_drive = ramp::Hash(ics_virtual_controls_drive),
    ics_virtualcontrols_auto_high_beams_unavailable_snackbar = ramp::Hash(ics_virtualcontrols_auto_high_beams_unavailable_snackbar),
    ics_virtualcontrols_power_reargate_height = ramp::Hash(ics_virtualcontrols_power_reargate_height),
    ics_camera_icon_overlay_placement = ramp::Hash(ics_camera_icon_overlay_placement),
    ics_virtual_controls_multiple_smart_controls = ramp::Hash(ics_virtual_controls_multiple_smart_controls),
    ics_virtualcontrols_outlets_while_vehicle_off = ramp::Hash(ics_virtualcontrols_outlets_while_vehicle_off),
    ics_virtualcontrols_universal_remotes_system_error = ramp::Hash(ics_virtualcontrols_universal_remotes_system_error),
};

} // namespace screens

#endif // SCREENENUMERATIONS_H
