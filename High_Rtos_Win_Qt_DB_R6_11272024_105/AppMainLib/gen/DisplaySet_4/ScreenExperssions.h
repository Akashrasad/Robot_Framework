#ifndef SCREENEXPERSSIONS_H
#define SCREENEXPERSSIONS_H

#include "StringUtils.h"
#include <array>


namespace screens 
{

static const size_t TotalScreens = 217;
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
constexpr static const char_t* const ics_apa_unable_to_connect = "7014";
constexpr static const char_t* const ics_apa_unavailable_snack_bar = "6071";
constexpr static const char_t* const ics_apa_unavailable_snack_bar_at_ultra_cruise = "ics_apa_unavailable_snack_bar_at_ultra_cruise";
constexpr static const char_t* const ics_brightness_control_screen = "7051";
constexpr static const char_t* const ics_camera_aux_camera_not_connected_uvs_only = "ics_camera_aux_camera_not_connected_uvs_only";
constexpr static const char_t* const ics_camera_backup_safety_pop_up = "ics_camera_backup_safety_pop_up";
constexpr static const char_t* const ics_camera_calibration_unsuccessful_snackbar = "ics_camera_calibration_unsuccessful_snackbar";
constexpr static const char_t* const ics_camera_drive_forward_snackbar = "ics_camera_drive_forward_snackbar";
constexpr static const char_t* const ics_camera_rvc_standard_trailer = "8002";
constexpr static const char_t* const ics_camera_rvc_standard_trailer_hitch = "8003";
constexpr static const char_t* const ics_camera_rvc_standard_view = "8001";
constexpr static const char_t* const ics_camera_rvc_system_error = "8008";
constexpr static const char_t* const ics_camera_settings = "8013";
constexpr static const char_t* const ics_camera_vpm_rearview_topdown_multipart_buttons = "ics_camera_vpm_rearview_topdown_multipart_buttons";
constexpr static const char_t* const ics_hvac_bottom_bar_Control = "9001";
constexpr static const char_t* const ics_hvac_bottom_bar_air_direction = "9004";
constexpr static const char_t* const ics_hvac_bottom_bar_control_c234_single_zone = "9012";
constexpr static const char_t* const ics_hvac_bottom_bar_left_seats = "9002";
constexpr static const char_t* const ics_hvac_bottom_bar_left_singlezone_seats = "9014";
constexpr static const char_t* const ics_hvac_bottom_bar_right_seats = "9003";
constexpr static const char_t* const ics_hvac_bottom_bar_right_singlezone_seats = "9013";
constexpr static const char_t* const ics_persistent_smart_controls = "6078";
constexpr static const char_t* const ics_persistent_smart_controls_pop_up = "6090";
constexpr static const char_t* const ics_safety_screen = "7050";
constexpr static const char_t* const ics_svr_acp_continuous_recording = "ics_svr_acp_continuous_recording";
constexpr static const char_t* const ics_svr_acp_delete_video = "ics_svr_acp_delete_video";
constexpr static const char_t* const ics_svr_acp_emergency_call_setting = "ics_svr_acp_emergency_call_setting";
constexpr static const char_t* const ics_svr_acp_file_cannot_be_played_snackbar = "ics_svr_acp_file_cannot_be_played_snackbar";
constexpr static const char_t* const ics_svr_acp_format_failed_snackbar = "ics_svr_acp_format_failed_snackbar";
constexpr static const char_t* const ics_svr_acp_format_successful_snackbar = "ics_svr_acp_format_successful_snackbar";
constexpr static const char_t* const ics_svr_acp_must_be_parked_to_setup = "ics_svr_acp_must_be_parked_to_setup";
constexpr static const char_t* const ics_svr_acp_park_Vehicle_to_continue_scrolling = "ics_svr_acp_park_Vehicle_to_continue_scrolling";
constexpr static const char_t* const ics_svr_acp_sd_card_empty = "ics_svr_acp_sd_card_empty";
constexpr static const char_t* const ics_svr_acp_sd_card_file_explorer_directory = "ics_svr_acp_sd_card_file_explorer_directory";
constexpr static const char_t* const ics_svr_acp_sd_card_need_to_be_formatted = "ics_svr_acp_sd_card_need_to_be_formatted";
constexpr static const char_t* const ics_svr_acp_theft_setting = "ics_svr_acp_theft_setting";
constexpr static const char_t* const ics_svr_acp_unable_to_open = "ics_svr_acp_unable_to_open";
constexpr static const char_t* const ics_svr_acp_used_when_parked = "ics_svr_acp_used_when_parked";
constexpr static const char_t* const ics_svr_acp_video_saved_snackbar = "ics_svr_acp_video_saved_snackbar";
constexpr static const char_t* const ics_svr_acp_wipe_and_format_sd_card = "ics_svr_acp_wipe_and_format_sd_card";
constexpr static const char_t* const ics_svr_crash_setting = "ics_svr_crash_setting";
constexpr static const char_t* const ics_svr_first_use_disclaimer = "ics_svr_first_use_disclaimer";
constexpr static const char_t* const ics_svr_sd_card_file_explorer_root = "ics_svr_sd_card_file_explorer_root";
constexpr static const char_t* const ics_svr_sd_card_full_snackbar = "ics_svr_sd_card_full_snackbar";
constexpr static const char_t* const ics_svr_sd_card_read_write_error_dialog = "ics_svr_sd_card_read_write_error_dialog";
constexpr static const char_t* const ics_svr_sd_card_required = "ics_svr_sd_card_required";
constexpr static const char_t* const ics_svr_unavailable_snackbar = "ics_svr_unavailable_snackbar";
constexpr static const char_t* const ics_svr_video_erased_snackbar = "ics_svr_video_erased_snackbar";
constexpr static const char_t* const ics_svr_vpm_continuous_recording = "ics_svr_vpm_continuous_recording";
constexpr static const char_t* const ics_svr_vpm_file_cannot_be_played_snackbar = "ics_svr_vpm_file_cannot_be_played_snackbar";
constexpr static const char_t* const ics_svr_vpm_main_screen = "ics_svr_vpm_main_screen";
constexpr static const char_t* const ics_svr_vpm_video_player_mosaic_view = "ics_svr_vpm_video_player_mosaic_view";
constexpr static const char_t* const ics_svr_vpm_video_saved_snackbar = "ics_svr_vpm_video_saved_snackbar";
constexpr static const char_t* const ics_virtual_controls_auto_parking_assist = "6014";
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
constexpr static const char_t* const ics_virtual_controls_one_pedal_driving = "6015";
constexpr static const char_t* const ics_virtual_controls_options = "6035";
constexpr static const char_t* const ics_virtual_controls_options_name = "6041";
constexpr static const char_t* const ics_virtual_controls_options_snackbar = "ics_virtual_controls_options_snackbar";
constexpr static const char_t* const ics_virtual_controls_outlets_quick_control_snackbar = "6112";
constexpr static const char_t* const ics_virtual_controls_park = "6077";
constexpr static const char_t* const ics_virtual_controls_park_assist = "6016";
constexpr static const char_t* const ics_virtual_controls_passive_power_mode_off_verify_snackbar = "6096";
constexpr static const char_t* const ics_virtual_controls_persistent_controls_speed_limiter_cruise_control_off_snackbar = "6083";
constexpr static const char_t* const ics_virtual_controls_persistent_controls_speed_limiter_not_allowed_snackbar = "6084";
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
constexpr static const char_t* const ics_virtualcontrols_outlets_start_screen = "6200";
constexpr static const char_t* const ics_virtualcontrols_outlets_while_vehicle_off = "ics_virtualcontrols_outlets_while_vehicle_off";
constexpr static const char_t* const ics_virtualcontrols_passive_power_mode_emergency_detected = "6097";
constexpr static const char_t* const ics_virtualcontrols_passive_power_mode_extend_snackbar = "6098";
constexpr static const char_t* const ics_virtualcontrols_passive_power_mode_snackbar_remaining = "6099";
constexpr static const char_t* const ics_virtualcontrols_peek_in_screen_time_added_snackbar = "6213";
constexpr static const char_t* const ics_virtualcontrols_peekin_screen_Time_running_out_notification = "6212";
constexpr static const char_t* const ics_virtualcontrols_peekin_screen_circle_active_charging = "6221";
constexpr static const char_t* const ics_virtualcontrols_peekin_screen_circle_alt = "6220";
constexpr static const char_t* const ics_virtualcontrols_peekin_screen_circle_alt_until_range_reserve = "6222";
constexpr static const char_t* const ics_virtualcontrols_peekin_screen_end_notification = "6211";
constexpr static const char_t* const ics_virtualcontrols_persistent_controls_lane_keep_assist_snackbar = "6082";
constexpr static const char_t* const ics_virtualcontrols_persistent_controls_speed_limiter_auto_active_snackbar = "6080";
constexpr static const char_t* const ics_virtualcontrols_persistent_controls_speed_limiter_manual_active_snackbar = "6079";
constexpr static const char_t* const ics_virtualcontrols_persistent_controls_speed_limiter_off_and_resume_snakbar = "6081";
constexpr static const char_t* const ics_virtualcontrols_power_liftgate_height = "6008";
constexpr static const char_t* const ics_virtualcontrols_power_reargate_height = "ics_virtualcontrols_power_reargate_height";
constexpr static const char_t* const ics_virtualcontrols_program = "6029";
constexpr static const char_t* const ics_virtualcontrols_program_d_mode_dialog = "6086";
constexpr static const char_t* const ics_virtualcontrols_program_ur_mode_dialog = "6087";
constexpr static const char_t* const ics_virtualcontrols_programming_successful_maximum_snackbar = "6046";
constexpr static const char_t* const ics_virtualcontrols_range_reserve = "6219";
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
constexpr static const char_t* const ics_virtualcontrols_summary_screen = "6216";
constexpr static const char_t* const ics_virtualcontrols_summary_screen_service_needed = "6217";
constexpr static const char_t* const ics_virtualcontrols_summary_screen_soc_low = "6218";
constexpr static const char_t* const ics_virtualcontrols_task_lights = "6027";
constexpr static const char_t* const ics_virtualcontrols_task_lights_snackbar = "6038";
constexpr static const char_t* const ics_virtualcontrols_traction_control_unavailable_snackbar = "6047";
constexpr static const char_t* const ics_virtualcontrols_turn_vehicle_off_message = "ics_virtualcontrols_turn_vehicle_off_message";
constexpr static const char_t* const ics_virtualcontrols_universal_remotes_auto_open_close = "ics_virtualcontrols_universal_remotes_auto_open_close";
constexpr static const char_t* const ics_virtualcontrols_universal_remotes_edit_snackbar = "6053";
constexpr static const char_t* const ics_virtualcontrols_universal_remotes_mismatch = "ics_virtualcontrols_universal_remotes_mismatch";
constexpr static const char_t* const ics_virtualcontrols_universal_remotes_multiple = "6075";
constexpr static const char_t* const ics_virtualcontrols_universal_remotes_start_snackbar = "6045";
constexpr static const char_t* const ics_virtualcontrols_universal_remotes_system_error = "ics_virtualcontrols_universal_remotes_system_error";
constexpr static const char_t* const ics_virtualcontrols_universal_remotes_unavailable_snack_bar = "ics_virtualcontrols_universal_remotes_unavailable_snack_bar";
constexpr static const char_t* const ics_vpm_rear_camera = "8015";


static const std::array<const char_t*, TotalScreens> screenList
{
    {
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
        ics_virtual_controls_lane_centering_assist,
        ics_virtualcontrols_universal_remotes_multiple,
        ics_virtualcontrols_auto_hold,
        ics_virtual_controls_park,
        ics_persistent_smart_controls,
        ics_virtualcontrols_persistent_controls_speed_limiter_manual_active_snackbar,
        ics_virtualcontrols_persistent_controls_speed_limiter_auto_active_snackbar,
        ics_virtualcontrols_persistent_controls_speed_limiter_off_and_resume_snakbar,
        ics_virtualcontrols_persistent_controls_lane_keep_assist_snackbar,
        ics_virtual_controls_persistent_controls_speed_limiter_cruise_control_off_snackbar,
        ics_virtual_controls_persistent_controls_speed_limiter_not_allowed_snackbar,
        ics_virtualcontrols_handheld_mode,
        ics_virtualcontrols_program_d_mode_dialog,
        ics_virtualcontrols_program_ur_mode_dialog,
        ics_persistent_smart_controls_pop_up,
        ics_virtualcontrols_lane_keep_assist,
        ics_virtualcontrols_lane_keep_assist_bzsa_only,
        ics_virtual_controls_drive_bzsa_unavailable_snackbar,
        ics_virtual_controls_passive_power_mode_off_verify_snackbar,
        ics_virtualcontrols_passive_power_mode_emergency_detected,
        ics_virtualcontrols_passive_power_mode_extend_snackbar,
        ics_virtualcontrols_passive_power_mode_snackbar_remaining,
        ics_virtualcontrols_bakground,
        ics_virtual_controls_programming_successful_press_burndown,
        ics_virtual_controls_outlets_quick_control_snackbar,
        ics_virtualcontrols_outlets_start_screen,
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
        ics_virtualcontrols_summary_screen,
        ics_virtualcontrols_summary_screen_service_needed,
        ics_virtualcontrols_summary_screen_soc_low,
        ics_virtualcontrols_range_reserve,
        ics_virtualcontrols_peekin_screen_circle_alt,
        ics_virtualcontrols_peekin_screen_circle_active_charging,
        ics_virtualcontrols_peekin_screen_circle_alt_until_range_reserve,
        ics_virtualcontrols_outlets_disabled_ota,
        ics_virtualcontrols_start_screen_tdl_set_thinking,
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
        ics_safety_screen,
        ics_brightness_control_screen,
        ics_camera_rvc_standard_view,
        ics_camera_rvc_standard_trailer,
        ics_camera_rvc_standard_trailer_hitch,
        ics_camera_rvc_system_error,
        ics_camera_settings,
        ics_vpm_rear_camera,
        ics_hvac_bottom_bar_Control,
        ics_hvac_bottom_bar_left_seats,
        ics_hvac_bottom_bar_right_seats,
        ics_hvac_bottom_bar_air_direction,
        ics_hvac_bottom_bar_control_c234_single_zone,
        ics_hvac_bottom_bar_right_singlezone_seats,
        ics_hvac_bottom_bar_left_singlezone_seats,
        ics_camera_backup_safety_pop_up,
        ics_virtualcontrols_universal_remotes_unavailable_snack_bar,
        ics_virtualcontrols_one_pedal_driving_unavailable_snackbar,
        ics_virtual_controls_options_snackbar,
        ics_svr_acp_sd_card_file_explorer_directory,
        ics_camera_calibration_unsuccessful_snackbar,
        ics_apa_unavailable_snack_bar_at_ultra_cruise,
        ics_svr_acp_format_successful_snackbar,
        ics_svr_acp_must_be_parked_to_setup,
        ics_virtual_controls_drive_lka_unavailable_snackbar,
        ics_svr_vpm_video_saved_snackbar,
        ics_svr_vpm_main_screen,
        ics_camera_vpm_rearview_topdown_multipart_buttons,
        ics_svr_crash_setting,
        ics_svr_acp_theft_setting,
        ics_svr_acp_video_saved_snackbar,
        ics_virtualcontrols_drive_park_traction_control_unavailable_snackbar,
        ics_virtual_controls_lane_assistance_off_state_snackbar,
        ics_svr_acp_format_failed_snackbar,
        ics_svr_acp_park_Vehicle_to_continue_scrolling,
        ics_svr_acp_emergency_call_setting,
        ics_virtualcontrols_fog_lights_unavailable_snackbar,
        ics_svr_acp_sd_card_empty,
        ics_svr_vpm_continuous_recording,
        ics_virtualcontrols_turn_vehicle_off_message,
        ics_virtual_controls_hill_descent_control_snackbar,
        ics_svr_acp_unable_to_open,
        ics_virtualcontrols_one_pedal_driving_failure_snackbar,
        ics_svr_video_erased_snackbar,
        ics_svr_sd_card_file_explorer_root,
        ics_camera_aux_camera_not_connected_uvs_only,
        ics_svr_sd_card_required,
        ics_svr_first_use_disclaimer,
        ics_virtualcontrols_drive_auto_hold_unavailable_snackbar,
        ics_svr_acp_continuous_recording,
        ics_virtual_controls_lane_assistance_unavailable_snackbar,
        ics_svr_acp_wipe_and_format_sd_card,
        ics_svr_vpm_file_cannot_be_played_snackbar,
        ics_svr_acp_used_when_parked,
        ics_camera_drive_forward_snackbar,
        ics_svr_sd_card_read_write_error_dialog,
        ics_virtual_controls_traction_control_competitive,
        ics_svr_vpm_video_player_mosaic_view,
        ics_virtualcontrols_lane_assistance_with_bzsa,
        ics_virtualcontrols_options_update_location,
        ics_virtualcontrols_universal_remotes_auto_open_close,
        ics_virtualcontrols_auto_hold_not_allowed_snackbar,
        ics_svr_acp_file_cannot_be_played_snackbar,
        ics_virtualcontrols_lane_assistance_with_bzsa_and_holca,
        ics_virtualcontrols_options_auto_location_not_detected,
        ics_virtual_controls_lane_assistance_bzsa_unavailable_snackbar,
        ics_virtualcontrols_auto_high_beams_snackbar,
        ics_virtualcontrols_lane_assistance_with_holca,
        ics_svr_acp_sd_card_need_to_be_formatted,
        ics_virtual_controls_drive,
        ics_virtualcontrols_universal_remotes_mismatch,
        ics_virtualcontrols_auto_high_beams_unavailable_snackbar,
        ics_virtualcontrols_power_reargate_height,
        ics_svr_unavailable_snackbar,
        ics_svr_sd_card_full_snackbar,
        ics_svr_acp_delete_video,
        ics_virtualcontrols_outlets_while_vehicle_off,
        ics_virtualcontrols_universal_remotes_system_error,
    }
};


}//namespace screens

#endif // SCREENEXPERSSIONS_H
