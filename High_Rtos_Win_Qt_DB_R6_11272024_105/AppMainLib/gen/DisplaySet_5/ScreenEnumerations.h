#ifndef SCREENENUMERATIONS_H
#define SCREENENUMERATIONS_H

#include "ScreenExperssions.h"
#include "Templates.h"


namespace screens 
{

enum class Screen : uint32_t
{
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
    ics_apa_in_vehicle_park_hand_off = ramp::Hash(ics_apa_in_vehicle_park_hand_off),
    ics_apa_connecting_to_mybrand_app = ramp::Hash(ics_apa_connecting_to_mybrand_app),
    ics_apa_unable_to_connect = ramp::Hash(ics_apa_unable_to_connect),
    ics_apa_camera_view = ramp::Hash(ics_apa_camera_view),
    ics_apa_remote_park_handoff = ramp::Hash(ics_apa_remote_park_handoff),
    ics_apa_remote_exit_handoff = ramp::Hash(ics_apa_remote_exit_handoff),
    ics_apa_space_found_parallel_right_srp = ramp::Hash(ics_apa_space_found_parallel_right_srp),
    ics_apa_space_found_parallel_left_srp = ramp::Hash(ics_apa_space_found_parallel_left_srp),
    ics_apa_space_found_perp_right_srp = ramp::Hash(ics_apa_space_found_perp_right_srp),
    ics_apa_space_found_perp_left_srp = ramp::Hash(ics_apa_space_found_perp_left_srp),
    ics_camera_rvc_standard_view = ramp::Hash(ics_camera_rvc_standard_view),
    ics_camera_rvc_standard_trailer = ramp::Hash(ics_camera_rvc_standard_trailer),
    ics_camera_rvc_standard_trailer_hitch = ramp::Hash(ics_camera_rvc_standard_trailer_hitch),
    ics_exit_button = ramp::Hash(ics_exit_button),
    ics_apa_park_instructions_selection_drawer = ramp::Hash(ics_apa_park_instructions_selection_drawer),
};


}//namespace screens

#endif // SCREENENUMERATIONS_H
