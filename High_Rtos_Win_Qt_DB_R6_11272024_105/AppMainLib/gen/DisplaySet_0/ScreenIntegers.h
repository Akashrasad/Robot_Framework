#ifndef SCREENINTEGERS_H
#define SCREENINTEGERS_H

#include "ScreenExperssions.h"
#include "StringUtils.h"
#include "Templates.h"


namespace screens 
{

constexpr static const char_t* const Hash_ics_animation_shutdown = ramp::Hash(ics_animation_shutdown);
constexpr static const char_t* const Hash_ics_animation_startup = ramp::Hash(ics_animation_startup);
constexpr static const char_t* const Hash_ics_animation_welcome = ramp::Hash(ics_animation_welcome);
constexpr static const char_t* const Hash_ics_apa_auto_steering_on = ramp::Hash(ics_apa_auto_steering_on);
constexpr static const char_t* const Hash_ics_apa_back_ground_update = ramp::Hash(ics_apa_back_ground_update);
constexpr static const char_t* const Hash_ics_apa_camera_view = ramp::Hash(ics_apa_camera_view);
constexpr static const char_t* const Hash_ics_apa_canceled_over_max_speed_snackbar = ramp::Hash(ics_apa_canceled_over_max_speed_snackbar);
constexpr static const char_t* const Hash_ics_apa_connecting_to_mybrand_app = ramp::Hash(ics_apa_connecting_to_mybrand_app);
constexpr static const char_t* const Hash_ics_apa_deactiated_speed_snack_bar = ramp::Hash(ics_apa_deactiated_speed_snack_bar);
constexpr static const char_t* const Hash_ics_apa_deactivated_snack_bar = ramp::Hash(ics_apa_deactivated_snack_bar);
constexpr static const char_t* const Hash_ics_apa_emergency_brake_off = ramp::Hash(ics_apa_emergency_brake_off);
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
constexpr static const char_t* const Hash_ics_apa_stay_or_remote_park = ramp::Hash(ics_apa_stay_or_remote_park);
constexpr static const char_t* const Hash_ics_apa_unable_to_connect = ramp::Hash(ics_apa_unable_to_connect);
constexpr static const char_t* const Hash_ics_apa_unavailable_snack_bar = ramp::Hash(ics_apa_unavailable_snack_bar);
constexpr static const char_t* const Hash_ics_black_screen = ramp::Hash(ics_black_screen);
constexpr static const char_t* const Hash_ics_brightness_control_screen = ramp::Hash(ics_brightness_control_screen);
constexpr static const char_t* const Hash_ics_camera_guideline_and_icon_turning_interface = ramp::Hash(ics_camera_guideline_and_icon_turning_interface);
constexpr static const char_t* const Hash_ics_camera_icon_overlay_placement = ramp::Hash(ics_camera_icon_overlay_placement);
constexpr static const char_t* const Hash_ics_camera_rvc_fullviewcamera = ramp::Hash(ics_camera_rvc_fullviewcamera);
constexpr static const char_t* const Hash_ics_camera_rvc_standard_trailer = ramp::Hash(ics_camera_rvc_standard_trailer);
constexpr static const char_t* const Hash_ics_camera_rvc_standard_trailer_hitch = ramp::Hash(ics_camera_rvc_standard_trailer_hitch);
constexpr static const char_t* const Hash_ics_camera_rvc_standard_view = ramp::Hash(ics_camera_rvc_standard_view);
constexpr static const char_t* const Hash_ics_camera_rvc_system_error = ramp::Hash(ics_camera_rvc_system_error);
constexpr static const char_t* const Hash_ics_camera_vpm_rearview_topdown_multipart_buttons = ramp::Hash(ics_camera_vpm_rearview_topdown_multipart_buttons);
constexpr static const char_t* const Hash_ics_safety_screen = ramp::Hash(ics_safety_screen);
constexpr static const char_t* const Hash_ics_saftey_camera_feature_unavailable = ramp::Hash(ics_saftey_camera_feature_unavailable);
constexpr static const char_t* const Hash_ics_virtual_controls_auto_parking_assist = ramp::Hash(ics_virtual_controls_auto_parking_assist);
constexpr static const char_t* const Hash_ics_virtual_controls_cargo_lights_snackbar = ramp::Hash(ics_virtual_controls_cargo_lights_snackbar);
constexpr static const char_t* const Hash_ics_virtual_controls_child_safety_locks = ramp::Hash(ics_virtual_controls_child_safety_locks);
constexpr static const char_t* const Hash_ics_virtual_controls_controls_home = ramp::Hash(ics_virtual_controls_controls_home);
constexpr static const char_t* const Hash_ics_virtual_controls_doors_and_windows = ramp::Hash(ics_virtual_controls_doors_and_windows);
constexpr static const char_t* const Hash_ics_virtual_controls_drive_and_park = ramp::Hash(ics_virtual_controls_drive_and_park);
constexpr static const char_t* const Hash_ics_virtual_controls_factory_reset_is_temperature_in_range_snackbar = ramp::Hash(ics_virtual_controls_factory_reset_is_temperature_in_range_snackbar);
constexpr static const char_t* const Hash_ics_virtual_controls_factory_reset_is_vehicle_in_park_snackbar = ramp::Hash(ics_virtual_controls_factory_reset_is_vehicle_in_park_snackbar);
constexpr static const char_t* const Hash_ics_virtual_controls_head_up_display = ramp::Hash(ics_virtual_controls_head_up_display);
constexpr static const char_t* const Hash_ics_virtual_controls_hill_descent_control = ramp::Hash(ics_virtual_controls_hill_descent_control);
constexpr static const char_t* const Hash_ics_virtual_controls_hill_descent_control_snackbar = ramp::Hash(ics_virtual_controls_hill_descent_control_snackbar);
constexpr static const char_t* const Hash_ics_virtual_controls_keyboard_unavailable_while_driving_snackbar = ramp::Hash(ics_virtual_controls_keyboard_unavailable_while_driving_snackbar);
constexpr static const char_t* const Hash_ics_virtual_controls_lane_centering_assist = ramp::Hash(ics_virtual_controls_lane_centering_assist);
constexpr static const char_t* const Hash_ics_virtual_controls_lights = ramp::Hash(ics_virtual_controls_lights);
constexpr static const char_t* const Hash_ics_virtual_controls_one_pedal_driving = ramp::Hash(ics_virtual_controls_one_pedal_driving);
constexpr static const char_t* const Hash_ics_virtual_controls_park_assist = ramp::Hash(ics_virtual_controls_park_assist);
constexpr static const char_t* const Hash_ics_virtual_controls_power_window_lockout = ramp::Hash(ics_virtual_controls_power_window_lockout);
constexpr static const char_t* const Hash_ics_virtual_controls_scroll_first_page = ramp::Hash(ics_virtual_controls_scroll_first_page);
constexpr static const char_t* const Hash_ics_virtual_controls_scroll_second_page = ramp::Hash(ics_virtual_controls_scroll_second_page);
constexpr static const char_t* const Hash_ics_virtual_controls_scroll_third_page = ramp::Hash(ics_virtual_controls_scroll_third_page);
constexpr static const char_t* const Hash_ics_virtual_controls_traction_control = ramp::Hash(ics_virtual_controls_traction_control);
constexpr static const char_t* const Hash_ics_virtualcontrols_auto_high_beams = ramp::Hash(ics_virtualcontrols_auto_high_beams);
constexpr static const char_t* const Hash_ics_virtualcontrols_auto_high_beams_snackbar = ramp::Hash(ics_virtualcontrols_auto_high_beams_snackbar);
constexpr static const char_t* const Hash_ics_virtualcontrols_auto_high_beams_unavailable_snackbar = ramp::Hash(ics_virtualcontrols_auto_high_beams_unavailable_snackbar);
constexpr static const char_t* const Hash_ics_virtualcontrols_bakground = ramp::Hash(ics_virtualcontrols_bakground);
constexpr static const char_t* const Hash_ics_virtualcontrols_cargo_lights = ramp::Hash(ics_virtualcontrols_cargo_lights);
constexpr static const char_t* const Hash_ics_virtualcontrols_dome_light = ramp::Hash(ics_virtualcontrols_dome_light);
constexpr static const char_t* const Hash_ics_virtualcontrols_doors_windows_door_mismatch_error_snackbar = ramp::Hash(ics_virtualcontrols_doors_windows_door_mismatch_error_snackbar);
constexpr static const char_t* const Hash_ics_virtualcontrols_drive_park_opd_unavailable_snackbar = ramp::Hash(ics_virtualcontrols_drive_park_opd_unavailable_snackbar);
constexpr static const char_t* const Hash_ics_virtualcontrols_drive_park_traction_control_unavailable_snackbar = ramp::Hash(ics_virtualcontrols_drive_park_traction_control_unavailable_snackbar);
constexpr static const char_t* const Hash_ics_virtualcontrols_facotry_reset_in_progress = ramp::Hash(ics_virtualcontrols_facotry_reset_in_progress);
constexpr static const char_t* const Hash_ics_virtualcontrols_factory_reset_is_complete = ramp::Hash(ics_virtualcontrols_factory_reset_is_complete);
constexpr static const char_t* const Hash_ics_virtualcontrols_fog_lights = ramp::Hash(ics_virtualcontrols_fog_lights);
constexpr static const char_t* const Hash_ics_virtualcontrols_fog_lights_unavailable_snackbar = ramp::Hash(ics_virtualcontrols_fog_lights_unavailable_snackbar);
constexpr static const char_t* const Hash_ics_virtualcontrols_front_fog_lights = ramp::Hash(ics_virtualcontrols_front_fog_lights);
constexpr static const char_t* const Hash_ics_virtualcontrols_front_rear_fog_lights = ramp::Hash(ics_virtualcontrols_front_rear_fog_lights);
constexpr static const char_t* const Hash_ics_virtualcontrols_headlights = ramp::Hash(ics_virtualcontrols_headlights);
constexpr static const char_t* const Hash_ics_virtualcontrols_headlights_smart_controls = ramp::Hash(ics_virtualcontrols_headlights_smart_controls);
constexpr static const char_t* const Hash_ics_virtualcontrols_high_temp = ramp::Hash(ics_virtualcontrols_high_temp);
constexpr static const char_t* const Hash_ics_virtualcontrols_hmi_factory_reset = ramp::Hash(ics_virtualcontrols_hmi_factory_reset);
constexpr static const char_t* const Hash_ics_virtualcontrols_hmi_factory_reset_confirmation = ramp::Hash(ics_virtualcontrols_hmi_factory_reset_confirmation);
constexpr static const char_t* const Hash_ics_virtualcontrols_hmi_recovery_mode_confirmation = ramp::Hash(ics_virtualcontrols_hmi_recovery_mode_confirmation);
constexpr static const char_t* const Hash_ics_virtualcontrols_lights_auto_high_beams_snackbar = ramp::Hash(ics_virtualcontrols_lights_auto_high_beams_snackbar);
constexpr static const char_t* const Hash_ics_virtualcontrols_lights_fog_lights_unavailable_snackbar = ramp::Hash(ics_virtualcontrols_lights_fog_lights_unavailable_snackbar);
constexpr static const char_t* const Hash_ics_virtualcontrols_lights_headlights_dialog = ramp::Hash(ics_virtualcontrols_lights_headlights_dialog);
constexpr static const char_t* const Hash_ics_virtualcontrols_motion_sensor = ramp::Hash(ics_virtualcontrols_motion_sensor);
constexpr static const char_t* const Hash_ics_virtualcontrols_no_invehicle_infotainment = ramp::Hash(ics_virtualcontrols_no_invehicle_infotainment);
constexpr static const char_t* const Hash_ics_virtualcontrols_one_pedal_driving_failure_snackbar = ramp::Hash(ics_virtualcontrols_one_pedal_driving_failure_snackbar);
constexpr static const char_t* const Hash_ics_virtualcontrols_one_pedal_driving_unavailable_snackbar = ramp::Hash(ics_virtualcontrols_one_pedal_driving_unavailable_snackbar);
constexpr static const char_t* const Hash_ics_virtualcontrols_power_liftgate_height = ramp::Hash(ics_virtualcontrols_power_liftgate_height);
constexpr static const char_t* const Hash_ics_virtualcontrols_programming_successful_maximum_snackbar = ramp::Hash(ics_virtualcontrols_programming_successful_maximum_snackbar);
constexpr static const char_t* const Hash_ics_virtualcontrols_rear_fog_lights = ramp::Hash(ics_virtualcontrols_rear_fog_lights);
constexpr static const char_t* const Hash_ics_virtualcontrols_recovery_mode_inprogress = ramp::Hash(ics_virtualcontrols_recovery_mode_inprogress);
constexpr static const char_t* const Hash_ics_virtualcontrols_task_lights = ramp::Hash(ics_virtualcontrols_task_lights);
constexpr static const char_t* const Hash_ics_virtualcontrols_task_lights_snackbar = ramp::Hash(ics_virtualcontrols_task_lights_snackbar);
constexpr static const char_t* const Hash_ics_virtualcontrols_traction_control_unavailable_snackbar = ramp::Hash(ics_virtualcontrols_traction_control_unavailable_snackbar);
constexpr static const char_t* const Hash_ics_virtualcontrols_universal_remotes_edit_snackbar = ramp::Hash(ics_virtualcontrols_universal_remotes_edit_snackbar);
constexpr static const char_t* const Hash_ics_virtualcontrols_universal_remotes_start_snackbar = ramp::Hash(ics_virtualcontrols_universal_remotes_start_snackbar);


}//namespace screens

#endif // SCREENINTEGERS_H
