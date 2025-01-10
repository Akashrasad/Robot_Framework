#ifndef SCREENINTEGERS_H
#define SCREENINTEGERS_H

#include "ScreenExperssions.h"
#include "StringUtils.h"
#include "Templates.h"


namespace screens 
{

constexpr static const char_t* const Hash_ics_apa_auto_steering_on = ramp::Hash(ics_apa_auto_steering_on);
constexpr static const char_t* const Hash_ics_apa_back_ground_update = ramp::Hash(ics_apa_back_ground_update);
constexpr static const char_t* const Hash_ics_apa_camera_view = ramp::Hash(ics_apa_camera_view);
constexpr static const char_t* const Hash_ics_apa_canceled_over_max_speed_snackbar = ramp::Hash(ics_apa_canceled_over_max_speed_snackbar);
constexpr static const char_t* const Hash_ics_apa_deactiated_speed_snack_bar = ramp::Hash(ics_apa_deactiated_speed_snack_bar);
constexpr static const char_t* const Hash_ics_apa_deactivated_snack_bar = ramp::Hash(ics_apa_deactivated_snack_bar);
constexpr static const char_t* const Hash_ics_apa_exit_park_drawer = ramp::Hash(ics_apa_exit_park_drawer);
constexpr static const char_t* const Hash_ics_apa_in_vehicle_park_hand_off = ramp::Hash(ics_apa_in_vehicle_park_hand_off);
constexpr static const char_t* const Hash_ics_apa_park_drawer = ramp::Hash(ics_apa_park_drawer);
constexpr static const char_t* const Hash_ics_apa_park_instr_parallel_left = ramp::Hash(ics_apa_park_instr_parallel_left);
constexpr static const char_t* const Hash_ics_apa_park_instr_parallel_right = ramp::Hash(ics_apa_park_instr_parallel_right);
constexpr static const char_t* const Hash_ics_apa_park_instr_perp_left = ramp::Hash(ics_apa_park_instr_perp_left);
constexpr static const char_t* const Hash_ics_apa_park_instructions_perp_right = ramp::Hash(ics_apa_park_instructions_perp_right);
constexpr static const char_t* const Hash_ics_apa_park_instructions_selection_drawer = ramp::Hash(ics_apa_park_instructions_selection_drawer);
constexpr static const char_t* const Hash_ics_apa_remote_exit_handoff = ramp::Hash(ics_apa_remote_exit_handoff);
constexpr static const char_t* const Hash_ics_apa_remote_park_handoff = ramp::Hash(ics_apa_remote_park_handoff);
constexpr static const char_t* const Hash_ics_apa_slowdown_appr_max_speed_snackbar = ramp::Hash(ics_apa_slowdown_appr_max_speed_snackbar);
constexpr static const char_t* const Hash_ics_apa_space_found_parallel_left = ramp::Hash(ics_apa_space_found_parallel_left);
constexpr static const char_t* const Hash_ics_apa_space_found_parallel_left_srp = ramp::Hash(ics_apa_space_found_parallel_left_srp);
constexpr static const char_t* const Hash_ics_apa_space_found_parallel_right = ramp::Hash(ics_apa_space_found_parallel_right);
constexpr static const char_t* const Hash_ics_apa_space_found_parallel_right_srp = ramp::Hash(ics_apa_space_found_parallel_right_srp);
constexpr static const char_t* const Hash_ics_apa_space_found_perp_left = ramp::Hash(ics_apa_space_found_perp_left);
constexpr static const char_t* const Hash_ics_apa_space_found_perp_left_srp = ramp::Hash(ics_apa_space_found_perp_left_srp);
constexpr static const char_t* const Hash_ics_apa_space_found_perp_right = ramp::Hash(ics_apa_space_found_perp_right);
constexpr static const char_t* const Hash_ics_apa_space_found_perp_right_srp = ramp::Hash(ics_apa_space_found_perp_right_srp);
constexpr static const char_t* const Hash_ics_apa_unavailable_snack_bar = ramp::Hash(ics_apa_unavailable_snack_bar);
constexpr static const char_t* const Hash_ics_virtual_controls_auto_parking_assist = ramp::Hash(ics_virtual_controls_auto_parking_assist);
constexpr static const char_t* const Hash_ics_virtual_controls_cargo_lights_snackbar = ramp::Hash(ics_virtual_controls_cargo_lights_snackbar);
constexpr static const char_t* const Hash_ics_virtual_controls_child_safety_locks = ramp::Hash(ics_virtual_controls_child_safety_locks);
constexpr static const char_t* const Hash_ics_virtual_controls_detected = ramp::Hash(ics_virtual_controls_detected);
constexpr static const char_t* const Hash_ics_virtual_controls_doors_and_windows = ramp::Hash(ics_virtual_controls_doors_and_windows);
constexpr static const char_t* const Hash_ics_virtual_controls_drive_and_park = ramp::Hash(ics_virtual_controls_drive_and_park);
constexpr static const char_t* const Hash_ics_virtual_controls_head_up_display = ramp::Hash(ics_virtual_controls_head_up_display);
constexpr static const char_t* const Hash_ics_virtual_controls_hill_descent_control = ramp::Hash(ics_virtual_controls_hill_descent_control);
constexpr static const char_t* const Hash_ics_virtual_controls_lights = ramp::Hash(ics_virtual_controls_lights);
constexpr static const char_t* const Hash_ics_virtual_controls_one_pedal_driving = ramp::Hash(ics_virtual_controls_one_pedal_driving);
constexpr static const char_t* const Hash_ics_virtual_controls_options = ramp::Hash(ics_virtual_controls_options);
constexpr static const char_t* const Hash_ics_virtual_controls_options_name = ramp::Hash(ics_virtual_controls_options_name);
constexpr static const char_t* const Hash_ics_virtual_controls_power_window_lockout = ramp::Hash(ics_virtual_controls_power_window_lockout);
constexpr static const char_t* const Hash_ics_virtual_controls_programming_successful = ramp::Hash(ics_virtual_controls_programming_successful);
constexpr static const char_t* const Hash_ics_virtual_controls_success_test = ramp::Hash(ics_virtual_controls_success_test);
constexpr static const char_t* const Hash_ics_virtual_controls_traction_control = ramp::Hash(ics_virtual_controls_traction_control);
constexpr static const char_t* const Hash_ics_virtual_controls_traction_control_competitive = ramp::Hash(ics_virtual_controls_traction_control_competitive);
constexpr static const char_t* const Hash_ics_virtual_controls_universal_remotes_start = ramp::Hash(ics_virtual_controls_universal_remotes_start);
constexpr static const char_t* const Hash_ics_virtual_controls_wake_screen_doors_and_windows = ramp::Hash(ics_virtual_controls_wake_screen_doors_and_windows);
constexpr static const char_t* const Hash_ics_virtual_controls_wake_screen_lights = ramp::Hash(ics_virtual_controls_wake_screen_lights);
constexpr static const char_t* const Hash_ics_virtualcontrols_auto_high_beams = ramp::Hash(ics_virtualcontrols_auto_high_beams);
constexpr static const char_t* const Hash_ics_virtualcontrols_auto_high_beams_unavailable_snackbar = ramp::Hash(ics_virtualcontrols_auto_high_beams_unavailable_snackbar);
constexpr static const char_t* const Hash_ics_virtualcontrols_bakground = ramp::Hash(ics_virtualcontrols_bakground);
constexpr static const char_t* const Hash_ics_virtualcontrols_cargo_lights = ramp::Hash(ics_virtualcontrols_cargo_lights);
constexpr static const char_t* const Hash_ics_virtualcontrols_dome_light = ramp::Hash(ics_virtualcontrols_dome_light);
constexpr static const char_t* const Hash_ics_virtualcontrols_doors_windows_door_mismatch_error_snackbar = ramp::Hash(ics_virtualcontrols_doors_windows_door_mismatch_error_snackbar);
constexpr static const char_t* const Hash_ics_virtualcontrols_drive_park_opd_unavailable_snackbar = ramp::Hash(ics_virtualcontrols_drive_park_opd_unavailable_snackbar);
constexpr static const char_t* const Hash_ics_virtualcontrols_drive_park_traction_control_unavailable_snackbar = ramp::Hash(ics_virtualcontrols_drive_park_traction_control_unavailable_snackbar);
constexpr static const char_t* const Hash_ics_virtualcontrols_fog_lights = ramp::Hash(ics_virtualcontrols_fog_lights);
constexpr static const char_t* const Hash_ics_virtualcontrols_fog_lights_unavailable_snackbar = ramp::Hash(ics_virtualcontrols_fog_lights_unavailable_snackbar);
constexpr static const char_t* const Hash_ics_virtualcontrols_front_fog_lights = ramp::Hash(ics_virtualcontrols_front_fog_lights);
constexpr static const char_t* const Hash_ics_virtualcontrols_front_rear_fog_lights = ramp::Hash(ics_virtualcontrols_front_rear_fog_lights);
constexpr static const char_t* const Hash_ics_virtualcontrols_geolocation_not_detected = ramp::Hash(ics_virtualcontrols_geolocation_not_detected);
constexpr static const char_t* const Hash_ics_virtualcontrols_headlights = ramp::Hash(ics_virtualcontrols_headlights);
constexpr static const char_t* const Hash_ics_virtualcontrols_learn = ramp::Hash(ics_virtualcontrols_learn);
constexpr static const char_t* const Hash_ics_virtualcontrols_learn_success_test = ramp::Hash(ics_virtualcontrols_learn_success_test);
constexpr static const char_t* const Hash_ics_virtualcontrols_lights_auto_high_beams_snackbar = ramp::Hash(ics_virtualcontrols_lights_auto_high_beams_snackbar);
constexpr static const char_t* const Hash_ics_virtualcontrols_lights_fog_lights_unavailable_snackbar = ramp::Hash(ics_virtualcontrols_lights_fog_lights_unavailable_snackbar);
constexpr static const char_t* const Hash_ics_virtualcontrols_lights_headlights_dialog = ramp::Hash(ics_virtualcontrols_lights_headlights_dialog);
constexpr static const char_t* const Hash_ics_virtualcontrols_motion_sensor = ramp::Hash(ics_virtualcontrols_motion_sensor);
constexpr static const char_t* const Hash_ics_virtualcontrols_one_pedal_driving_failure_snackbar = ramp::Hash(ics_virtualcontrols_one_pedal_driving_failure_snackbar);
constexpr static const char_t* const Hash_ics_virtualcontrols_one_pedal_driving_unavailable_snackbar = ramp::Hash(ics_virtualcontrols_one_pedal_driving_unavailable_snackbar);
constexpr static const char_t* const Hash_ics_virtualcontrols_options_auto = ramp::Hash(ics_virtualcontrols_options_auto);
constexpr static const char_t* const Hash_ics_virtualcontrols_options_auto_location_not_detected = ramp::Hash(ics_virtualcontrols_options_auto_location_not_detected);
constexpr static const char_t* const Hash_ics_virtualcontrols_options_delete_all_dialog = ramp::Hash(ics_virtualcontrols_options_delete_all_dialog);
constexpr static const char_t* const Hash_ics_virtualcontrols_options_delete_dialog = ramp::Hash(ics_virtualcontrols_options_delete_dialog);
constexpr static const char_t* const Hash_ics_virtualcontrols_options_location_save = ramp::Hash(ics_virtualcontrols_options_location_save);
constexpr static const char_t* const Hash_ics_virtualcontrols_power_liftgate_height = ramp::Hash(ics_virtualcontrols_power_liftgate_height);
constexpr static const char_t* const Hash_ics_virtualcontrols_program = ramp::Hash(ics_virtualcontrols_program);
constexpr static const char_t* const Hash_ics_virtualcontrols_program_d_mode_dialog = ramp::Hash(ics_virtualcontrols_program_d_mode_dialog);
constexpr static const char_t* const Hash_ics_virtualcontrols_program_ur_mode_dialog = ramp::Hash(ics_virtualcontrols_program_ur_mode_dialog);
constexpr static const char_t* const Hash_ics_virtualcontrols_programming_successful_maximum_snackbar = ramp::Hash(ics_virtualcontrols_programming_successful_maximum_snackbar);
constexpr static const char_t* const Hash_ics_virtualcontrols_rear_fog_lights = ramp::Hash(ics_virtualcontrols_rear_fog_lights);
constexpr static const char_t* const Hash_ics_virtualcontrols_task_lights = ramp::Hash(ics_virtualcontrols_task_lights);
constexpr static const char_t* const Hash_ics_virtualcontrols_task_lights_snackbar = ramp::Hash(ics_virtualcontrols_task_lights_snackbar);
constexpr static const char_t* const Hash_ics_virtualcontrols_traction_control_unavailable_snackbar = ramp::Hash(ics_virtualcontrols_traction_control_unavailable_snackbar);
constexpr static const char_t* const Hash_ics_virtualcontrols_universal_remotes_auto_open_close = ramp::Hash(ics_virtualcontrols_universal_remotes_auto_open_close);
constexpr static const char_t* const Hash_ics_virtualcontrols_universal_remotes_edit_snackbar = ramp::Hash(ics_virtualcontrols_universal_remotes_edit_snackbar);
constexpr static const char_t* const Hash_ics_virtualcontrols_universal_remotes_mismatch = ramp::Hash(ics_virtualcontrols_universal_remotes_mismatch);
constexpr static const char_t* const Hash_ics_virtualcontrols_universal_remotes_multiple = ramp::Hash(ics_virtualcontrols_universal_remotes_multiple);
constexpr static const char_t* const Hash_ics_virtualcontrols_universal_remotes_start_snackbar = ramp::Hash(ics_virtualcontrols_universal_remotes_start_snackbar);
constexpr static const char_t* const Hash_ics_virtualcontrols_universal_remotes_system_error = ramp::Hash(ics_virtualcontrols_universal_remotes_system_error);
constexpr static const char_t* const Hash_ics_virtualcontrols_universal_remotes_unavailable_snack_bar = ramp::Hash(ics_virtualcontrols_universal_remotes_unavailable_snack_bar);
constexpr static const char_t* const Hash_ics_virtualcontrols_wake_screen = ramp::Hash(ics_virtualcontrols_wake_screen);


}//namespace screens

#endif // SCREENINTEGERS_H
