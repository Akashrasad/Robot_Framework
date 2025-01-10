#ifndef SCREENEXPERSSIONS_H
#define SCREENEXPERSSIONS_H

#include "StringUtils.h"
#include <array>


namespace screens 
{

static const size_t TotalScreens = 211;
constexpr static const char_t* const ics_animation_startup = "1001";
constexpr static const char_t* const ics_apa_auto_steering_on = "7022";
constexpr static const char_t* const ics_apa_back_ground_update = "7031";
constexpr static const char_t* const ics_apa_camera_view = "7015";
constexpr static const char_t* const ics_apa_canceled_over_max_speed_snackbar = "7020";
constexpr static const char_t* const ics_apa_connecting_to_mybrand_app = "7013";
constexpr static const char_t* const ics_apa_deactiated_speed_snack_bar = "6072";
constexpr static const char_t* const ics_apa_deactivated_snack_bar = "7018";
constexpr static const char_t* const ics_apa_exit_park_drawer = "7002";
constexpr static const char_t* const ics_apa_in_vehicle_park_hand_off = "7012";
constexpr static const char_t* const ics_apa_park_drawer = "7001";
constexpr static const char_t* const ics_apa_park_instr_parallel_left = "7006";
constexpr static const char_t* const ics_apa_park_instr_parallel_right = "7005";
constexpr static const char_t* const ics_apa_park_instr_perp_left = "7004";
constexpr static const char_t* const ics_apa_park_instructions_perp_right = "7003";
constexpr static const char_t* const ics_apa_park_instructions_selection_drawer = "7030";
constexpr static const char_t* const ics_apa_remote_exit_handoff = "7025";
constexpr static const char_t* const ics_apa_remote_park_handoff = "7024";
constexpr static const char_t* const ics_apa_slowdown_appr_max_speed_snackbar = "7019";
constexpr static const char_t* const ics_apa_space_found_parallel_left = "7010";
constexpr static const char_t* const ics_apa_space_found_parallel_left_srp = "7027";
constexpr static const char_t* const ics_apa_space_found_parallel_right = "7009";
constexpr static const char_t* const ics_apa_space_found_parallel_right_srp = "7026";
constexpr static const char_t* const ics_apa_space_found_perp_left = "7008";
constexpr static const char_t* const ics_apa_space_found_perp_left_srp = "7029";
constexpr static const char_t* const ics_apa_space_found_perp_right = "7007";
constexpr static const char_t* const ics_apa_space_found_perp_right_srp = "7028";
constexpr static const char_t* const ics_apa_stay_or_remote_park = "7011";
constexpr static const char_t* const ics_apa_unable_to_connect = "7014";
constexpr static const char_t* const ics_apa_unavailable_snack_bar = "6071";
constexpr static const char_t* const ics_brightness_control_screen = "7051";
constexpr static const char_t* const ics_camera_bowl_mfcfocused = "8012";
constexpr static const char_t* const ics_camera_bowl_touch = "ics_camera_bowl_touch";
constexpr static const char_t* const ics_camera_rvc_standard_trailer = "8002";
constexpr static const char_t* const ics_camera_rvc_standard_trailer_hitch = "8003";
constexpr static const char_t* const ics_camera_rvc_standard_view = "8001";
constexpr static const char_t* const ics_camera_rvc_system_error = "8008";
constexpr static const char_t* const ics_camera_settings = "8013";
constexpr static const char_t* const ics_camera_svr = "ics_camera_svr";
constexpr static const char_t* const ics_camera_svr_full_dialog = "ics_camera_svr_full_dialog";
constexpr static const char_t* const ics_camera_svr_list = "ics_camera_svr_list";
constexpr static const char_t* const ics_default_chinese_keyboard_screen = "615";
constexpr static const char_t* const ics_default_keyboard_screen = "515";
constexpr static const char_t* const ics_default_numerical_screen = "516";
constexpr static const char_t* const ics_default_special_character_screen = "517";
constexpr static const char_t* const ics_exit_button = "8014";
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
constexpr static const char_t* const ics_keyboard_popup_screen = "2002";
constexpr static const char_t* const ics_saftey_camera_feature_unavailable = "6073";
constexpr static const char_t* const ics_spanish_default_keyboard_screen = "614";
constexpr static const char_t* const ics_spanish_default_numerical_screen = "ics_spanish_default_numerical_screen";
constexpr static const char_t* const ics_spanish_default_special_character_screen = "ics_spanish_default_special_character_screen";
constexpr static const char_t* const ics_spanish_keyboard_popup_screen = "2044";
constexpr static const char_t* const ics_virtual_controls_auto_parking_assist = "6014";
constexpr static const char_t* const ics_virtual_controls_cargo_lights_snackbar = "6040";
constexpr static const char_t* const ics_virtual_controls_child_safety_locks = "6005";
constexpr static const char_t* const ics_virtual_controls_controls_home = "6001";
constexpr static const char_t* const ics_virtual_controls_detected = "6030";
constexpr static const char_t* const ics_virtual_controls_doors_and_windows = "6004";
constexpr static const char_t* const ics_virtual_controls_drive_and_park = "6009";
constexpr static const char_t* const ics_virtual_controls_factory_reset_is_temperature_in_range_snackbar = "6070";
constexpr static const char_t* const ics_virtual_controls_factory_reset_is_vehicle_in_park_snackbar = "6069";
constexpr static const char_t* const ics_virtual_controls_hill_descent_control = "6013";
constexpr static const char_t* const ics_virtual_controls_hill_descent_control_snackbar = "ics_virtual_controls_hill_descent_control_snackbar";
constexpr static const char_t* const ics_virtual_controls_keyboard_unavailable_while_driving_snackbar = "6066";
constexpr static const char_t* const ics_virtual_controls_lane_centering_assist = "6074";
constexpr static const char_t* const ics_virtual_controls_lights = "6017";
constexpr static const char_t* const ics_virtual_controls_one_pedal_driving = "6015";
constexpr static const char_t* const ics_virtual_controls_opd_enabled_snackbar = "6089";
constexpr static const char_t* const ics_virtual_controls_options = "6035";
constexpr static const char_t* const ics_virtual_controls_options_name = "6041";
constexpr static const char_t* const ics_virtual_controls_park_assist = "6016";
constexpr static const char_t* const ics_virtual_controls_pin_to_start = "6091";
constexpr static const char_t* const ics_virtual_controls_pin_to_start_successful_start_brake_only = "ics_virtual_controls_pin_to_start_successful_start_brake_only";
constexpr static const char_t* const ics_virtual_controls_pin_to_start_successful_start_stop_button = "ics_virtual_controls_pin_to_start_successful_start_stop_button";
constexpr static const char_t* const ics_virtual_controls_power_window_lockout = "6006";
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
constexpr static const char_t* const ics_virtualcontrols_bakground = "6100";
constexpr static const char_t* const ics_virtualcontrols_cargo_lights = "6026";
constexpr static const char_t* const ics_virtualcontrols_dome_light = "6019";
constexpr static const char_t* const ics_virtualcontrols_doors_windows_door_mismatch_error_snackbar = "6036";
constexpr static const char_t* const ics_virtualcontrols_drive_park_opd_unavailable_snackbar = "6054";
constexpr static const char_t* const ics_virtualcontrols_drive_park_traction_control_unavailable_snackbar = "ics_virtualcontrols_drive_park_traction_control_unavailable_snackbar";
constexpr static const char_t* const ics_virtualcontrols_facotry_reset_in_progress = "6063";
constexpr static const char_t* const ics_virtualcontrols_factory_reset_is_complete = "6064";
constexpr static const char_t* const ics_virtualcontrols_fog_lights = "6022";
constexpr static const char_t* const ics_virtualcontrols_fog_lights_unavailable_snackbar = "ics_virtualcontrols_fog_lights_unavailable_snackbar";
constexpr static const char_t* const ics_virtualcontrols_front_fog_lights = "6023";
constexpr static const char_t* const ics_virtualcontrols_front_rear_fog_lights = "6025";
constexpr static const char_t* const ics_virtualcontrols_headlights = "6020";
constexpr static const char_t* const ics_virtualcontrols_headlights_smart_controls = "6055";
constexpr static const char_t* const ics_virtualcontrols_high_temp = "6065";
constexpr static const char_t* const ics_virtualcontrols_hmi_factory_reset = "6061";
constexpr static const char_t* const ics_virtualcontrols_hmi_factory_reset_confirmation = "6062";
constexpr static const char_t* const ics_virtualcontrols_hmi_recovery_mode_confirmation = "6067";
constexpr static const char_t* const ics_virtualcontrols_learn = "6032";
constexpr static const char_t* const ics_virtualcontrols_learn_success_test = "6033";
constexpr static const char_t* const ics_virtualcontrols_lights_auto_high_beams_snackbar = "6037";
constexpr static const char_t* const ics_virtualcontrols_lights_fog_lights_unavailable_snackbar = "6052";
constexpr static const char_t* const ics_virtualcontrols_lights_headlights_dialog = "6039";
constexpr static const char_t* const ics_virtualcontrols_motion_sensor = "6007";
constexpr static const char_t* const ics_virtualcontrols_no_invehicle_infotainment = "6058";
constexpr static const char_t* const ics_virtualcontrols_one_pedal_driving_failure_snackbar = "ics_virtualcontrols_one_pedal_driving_failure_snackbar";
constexpr static const char_t* const ics_virtualcontrols_one_pedal_driving_unavailable_snackbar = "ics_virtualcontrols_one_pedal_driving_unavailable_snackbar";
constexpr static const char_t* const ics_virtualcontrols_options_delete_all_dialog = "6044";
constexpr static const char_t* const ics_virtualcontrols_options_delete_dialog = "6043";
constexpr static const char_t* const ics_virtualcontrols_pin_to_start_incorrect_entry = "ics_virtualcontrols_pin_to_start_incorrect_entry";
constexpr static const char_t* const ics_virtualcontrols_pin_to_start_timer_expired = "ics_virtualcontrols_pin_to_start_timer_expired";
constexpr static const char_t* const ics_virtualcontrols_pin_to_start_too_many_tries = "ics_virtualcontrols_pin_to_start_too_many_tries";
constexpr static const char_t* const ics_virtualcontrols_power_liftgate_height = "6008";
constexpr static const char_t* const ics_virtualcontrols_program = "6029";
constexpr static const char_t* const ics_virtualcontrols_programming_successful_maximum_snackbar = "6046";
constexpr static const char_t* const ics_virtualcontrols_rear_fog_lights = "6024";
constexpr static const char_t* const ics_virtualcontrols_recovery_mode_inprogress = "6068";
constexpr static const char_t* const ics_virtualcontrols_task_lights = "6027";
constexpr static const char_t* const ics_virtualcontrols_task_lights_snackbar = "6038";
constexpr static const char_t* const ics_virtualcontrols_traction_control_unavailable_snackbar = "6047";
constexpr static const char_t* const ics_virtualcontrols_universal_remotes_Park_snackbar = "6075";
constexpr static const char_t* const ics_virtualcontrols_universal_remotes_edit_snackbar = "6053";
constexpr static const char_t* const ics_virtualcontrols_universal_remotes_start_snackbar = "6045";
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
        ics_virtual_controls_options,
        ics_virtualcontrols_doors_windows_door_mismatch_error_snackbar,
        ics_virtualcontrols_lights_auto_high_beams_snackbar,
        ics_virtualcontrols_task_lights_snackbar,
        ics_virtualcontrols_lights_headlights_dialog,
        ics_virtual_controls_cargo_lights_snackbar,
        ics_virtual_controls_options_name,
        ics_virtualcontrols_options_delete_dialog,
        ics_virtualcontrols_options_delete_all_dialog,
        ics_virtualcontrols_universal_remotes_start_snackbar,
        ics_virtualcontrols_programming_successful_maximum_snackbar,
        ics_virtualcontrols_traction_control_unavailable_snackbar,
        ics_virtualcontrols_lights_fog_lights_unavailable_snackbar,
        ics_virtualcontrols_universal_remotes_edit_snackbar,
        ics_virtualcontrols_drive_park_opd_unavailable_snackbar,
        ics_virtualcontrols_headlights_smart_controls,
        ics_virtualcontrols_no_invehicle_infotainment,
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
        ics_virtualcontrols_universal_remotes_Park_snackbar,
        ics_virtual_controls_opd_enabled_snackbar,
        ics_virtual_controls_pin_to_start,
        ics_virtualcontrols_bakground,
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
        ics_apa_remote_park_handoff,
        ics_apa_remote_exit_handoff,
        ics_apa_space_found_parallel_right_srp,
        ics_apa_space_found_parallel_left_srp,
        ics_apa_space_found_perp_right_srp,
        ics_apa_space_found_perp_left_srp,
        ics_apa_park_instructions_selection_drawer,
        ics_apa_back_ground_update,
        ics_brightness_control_screen,
        ics_camera_rvc_standard_view,
        ics_camera_rvc_standard_trailer,
        ics_camera_rvc_standard_trailer_hitch,
        ics_camera_rvc_system_error,
        ics_vpm_front_camera,
        ics_camera_bowl_mfcfocused,
        ics_camera_settings,
        ics_exit_button,
        ics_vpm_rear_camera,
        ics_vpm_hitch_camera,
        ics_virtualcontrols_one_pedal_driving_unavailable_snackbar,
        ics_virtual_controls_pin_to_start_successful_start_stop_button,
        ics_virtualcontrols_pin_to_start_too_many_tries,
        ics_camera_svr,
        ics_camera_svr_full_dialog,
        ics_virtualcontrols_drive_park_traction_control_unavailable_snackbar,
        ics_virtualcontrols_pin_to_start_incorrect_entry,
        ics_virtualcontrols_fog_lights_unavailable_snackbar,
        ics_virtualcontrols_pin_to_start_timer_expired,
        ics_virtual_controls_hill_descent_control_snackbar,
        ics_virtualcontrols_one_pedal_driving_failure_snackbar,
        ics_camera_bowl_touch,
        ics_spanish_default_numerical_screen,
        ics_virtual_controls_traction_control_competitive,
        ics_spanish_default_special_character_screen,
        ics_virtualcontrols_auto_high_beams_snackbar,
        ics_virtual_controls_pin_to_start_successful_start_brake_only,
        ics_virtualcontrols_auto_high_beams_unavailable_snackbar,
        ics_camera_svr_list,
    }
};


}//namespace screens

#endif // SCREENEXPERSSIONS_H
