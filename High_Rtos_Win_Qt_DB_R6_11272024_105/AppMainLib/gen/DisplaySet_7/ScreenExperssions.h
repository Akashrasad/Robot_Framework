#ifndef SCREENEXPERSSIONS_H
#define SCREENEXPERSSIONS_H

#include "StringUtils.h"
#include <array>


namespace screens 
{

static const size_t TotalScreens = 90;
constexpr static const char_t* const ics_apa_auto_steering_on = "7022";
constexpr static const char_t* const ics_apa_back_ground_update = "7031";
constexpr static const char_t* const ics_apa_camera_view = "7015";
constexpr static const char_t* const ics_apa_canceled_over_max_speed_snackbar = "7020";
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
constexpr static const char_t* const ics_apa_unavailable_snack_bar = "6071";
constexpr static const char_t* const ics_virtual_controls_auto_parking_assist = "6014";
constexpr static const char_t* const ics_virtual_controls_cargo_lights_snackbar = "6040";
constexpr static const char_t* const ics_virtual_controls_child_safety_locks = "6005";
constexpr static const char_t* const ics_virtual_controls_detected = "6030";
constexpr static const char_t* const ics_virtual_controls_doors_and_windows = "6004";
constexpr static const char_t* const ics_virtual_controls_drive_and_park = "6009";
constexpr static const char_t* const ics_virtual_controls_head_up_display = "6059";
constexpr static const char_t* const ics_virtual_controls_hill_descent_control = "6013";
constexpr static const char_t* const ics_virtual_controls_lights = "6017";
constexpr static const char_t* const ics_virtual_controls_one_pedal_driving = "6015";
constexpr static const char_t* const ics_virtual_controls_options = "6035";
constexpr static const char_t* const ics_virtual_controls_options_name = "6041";
constexpr static const char_t* const ics_virtual_controls_power_window_lockout = "6006";
constexpr static const char_t* const ics_virtual_controls_programming_successful = "6034";
constexpr static const char_t* const ics_virtual_controls_success_test = "6031";
constexpr static const char_t* const ics_virtual_controls_traction_control = "6012";
constexpr static const char_t* const ics_virtual_controls_traction_control_competitive = "ics_virtual_controls_traction_control_competitive";
constexpr static const char_t* const ics_virtual_controls_universal_remotes_start = "6028";
constexpr static const char_t* const ics_virtual_controls_wake_screen_doors_and_windows = "ics_virtual_controls_wake_screen_doors_and_windows";
constexpr static const char_t* const ics_virtual_controls_wake_screen_lights = "ics_virtual_controls_wake_screen_lights";
constexpr static const char_t* const ics_virtualcontrols_auto_high_beams = "6021";
constexpr static const char_t* const ics_virtualcontrols_auto_high_beams_unavailable_snackbar = "ics_virtualcontrols_auto_high_beams_unavailable_snackbar";
constexpr static const char_t* const ics_virtualcontrols_bakground = "6100";
constexpr static const char_t* const ics_virtualcontrols_cargo_lights = "6026";
constexpr static const char_t* const ics_virtualcontrols_dome_light = "6019";
constexpr static const char_t* const ics_virtualcontrols_doors_windows_door_mismatch_error_snackbar = "6036";
constexpr static const char_t* const ics_virtualcontrols_drive_park_opd_unavailable_snackbar = "6054";
constexpr static const char_t* const ics_virtualcontrols_drive_park_traction_control_unavailable_snackbar = "ics_virtualcontrols_drive_park_traction_control_unavailable_snackbar";
constexpr static const char_t* const ics_virtualcontrols_fog_lights = "6022";
constexpr static const char_t* const ics_virtualcontrols_fog_lights_unavailable_snackbar = "ics_virtualcontrols_fog_lights_unavailable_snackbar";
constexpr static const char_t* const ics_virtualcontrols_front_fog_lights = "6023";
constexpr static const char_t* const ics_virtualcontrols_front_rear_fog_lights = "6025";
constexpr static const char_t* const ics_virtualcontrols_geolocation_not_detected = "6056";
constexpr static const char_t* const ics_virtualcontrols_headlights = "6020";
constexpr static const char_t* const ics_virtualcontrols_learn = "6032";
constexpr static const char_t* const ics_virtualcontrols_learn_success_test = "6033";
constexpr static const char_t* const ics_virtualcontrols_lights_auto_high_beams_snackbar = "6037";
constexpr static const char_t* const ics_virtualcontrols_lights_fog_lights_unavailable_snackbar = "6052";
constexpr static const char_t* const ics_virtualcontrols_lights_headlights_dialog = "6039";
constexpr static const char_t* const ics_virtualcontrols_motion_sensor = "6007";
constexpr static const char_t* const ics_virtualcontrols_one_pedal_driving_failure_snackbar = "ics_virtualcontrols_one_pedal_driving_failure_snackbar";
constexpr static const char_t* const ics_virtualcontrols_one_pedal_driving_unavailable_snackbar = "ics_virtualcontrols_one_pedal_driving_unavailable_snackbar";
constexpr static const char_t* const ics_virtualcontrols_options_auto = "6042";
constexpr static const char_t* const ics_virtualcontrols_options_auto_location_not_detected = "ics_virtualcontrols_options_auto_location_not_detected";
constexpr static const char_t* const ics_virtualcontrols_options_delete_all_dialog = "6044";
constexpr static const char_t* const ics_virtualcontrols_options_delete_dialog = "6043";
constexpr static const char_t* const ics_virtualcontrols_options_location_save = "6057";
constexpr static const char_t* const ics_virtualcontrols_power_liftgate_height = "6008";
constexpr static const char_t* const ics_virtualcontrols_program = "6029";
constexpr static const char_t* const ics_virtualcontrols_program_d_mode_dialog = "ics_virtualcontrols_program_d_mode_dialog";
constexpr static const char_t* const ics_virtualcontrols_program_ur_mode_dialog = "ics_virtualcontrols_program_ur_mode_dialog";
constexpr static const char_t* const ics_virtualcontrols_programming_successful_maximum_snackbar = "6046";
constexpr static const char_t* const ics_virtualcontrols_rear_fog_lights = "6024";
constexpr static const char_t* const ics_virtualcontrols_task_lights = "6027";
constexpr static const char_t* const ics_virtualcontrols_task_lights_snackbar = "6038";
constexpr static const char_t* const ics_virtualcontrols_traction_control_unavailable_snackbar = "6047";
constexpr static const char_t* const ics_virtualcontrols_universal_remotes_auto_open_close = "ics_virtualcontrols_universal_remotes_auto_open_close";
constexpr static const char_t* const ics_virtualcontrols_universal_remotes_edit_snackbar = "6053";
constexpr static const char_t* const ics_virtualcontrols_universal_remotes_mismatch = "ics_virtualcontrols_universal_remotes_mismatch";
constexpr static const char_t* const ics_virtualcontrols_universal_remotes_multiple = "ics_virtualcontrols_universal_remotes_multiple";
constexpr static const char_t* const ics_virtualcontrols_universal_remotes_start_snackbar = "6045";
constexpr static const char_t* const ics_virtualcontrols_universal_remotes_system_error = "ics_virtualcontrols_universal_remotes_system_error";
constexpr static const char_t* const ics_virtualcontrols_universal_remotes_unavailable_snack_bar = "ics_virtualcontrols_universal_remotes_unavailable_snack_bar";
constexpr static const char_t* const ics_virtualcontrols_wake_screen = "ics_virtualcontrols_wake_screen";


static const std::array<const char_t*, TotalScreens> screenList
{
    {
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
        ics_virtualcontrols_geolocation_not_detected,
        ics_virtualcontrols_options_location_save,
        ics_virtual_controls_head_up_display,
        ics_apa_unavailable_snack_bar,
        ics_apa_deactiated_speed_snack_bar,
        ics_virtualcontrols_bakground,
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
        ics_virtualcontrols_universal_remotes_unavailable_snack_bar,
        ics_virtualcontrols_one_pedal_driving_unavailable_snackbar,
        ics_virtualcontrols_program_d_mode_dialog,
        ics_virtualcontrols_drive_park_traction_control_unavailable_snackbar,
        ics_virtualcontrols_universal_remotes_multiple,
        ics_virtual_controls_wake_screen_doors_and_windows,
        ics_virtualcontrols_fog_lights_unavailable_snackbar,
        ics_virtualcontrols_one_pedal_driving_failure_snackbar,
        ics_virtualcontrols_program_ur_mode_dialog,
        ics_virtual_controls_traction_control_competitive,
        ics_virtual_controls_wake_screen_lights,
        ics_virtualcontrols_universal_remotes_auto_open_close,
        ics_virtualcontrols_wake_screen,
        ics_virtualcontrols_options_auto_location_not_detected,
        ics_virtualcontrols_universal_remotes_mismatch,
        ics_virtualcontrols_auto_high_beams_unavailable_snackbar,
        ics_virtualcontrols_universal_remotes_system_error,
    }
};


}//namespace screens

#endif // SCREENEXPERSSIONS_H
