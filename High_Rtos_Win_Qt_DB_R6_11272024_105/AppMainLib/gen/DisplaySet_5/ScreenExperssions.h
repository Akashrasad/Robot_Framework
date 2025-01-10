#ifndef SCREENEXPERSSIONS_H
#define SCREENEXPERSSIONS_H

#include "StringUtils.h"
#include <array>


namespace screens 
{

static const size_t TotalScreens = 25;
constexpr static const char_t* const ics_apa_camera_view = "7015";
constexpr static const char_t* const ics_apa_connecting_to_mybrand_app = "7013";
constexpr static const char_t* const ics_apa_exit_park_drawer = "7002";
constexpr static const char_t* const ics_apa_in_vehicle_park_hand_off = "7012";
constexpr static const char_t* const ics_apa_park_drawer = "7001";
constexpr static const char_t* const ics_apa_park_instr_parallel_left = "7006";
constexpr static const char_t* const ics_apa_park_instr_parallel_right = "7005";
constexpr static const char_t* const ics_apa_park_instr_perp_left = "7004";
constexpr static const char_t* const ics_apa_park_instructions_perp_right = "7003";
constexpr static const char_t* const ics_apa_park_instructions_selection_drawer = "ics_apa_park_instructions_selection_drawer";
constexpr static const char_t* const ics_apa_remote_exit_handoff = "7025";
constexpr static const char_t* const ics_apa_remote_park_handoff = "7024";
constexpr static const char_t* const ics_apa_space_found_parallel_left = "7010";
constexpr static const char_t* const ics_apa_space_found_parallel_left_srp = "7027";
constexpr static const char_t* const ics_apa_space_found_parallel_right = "7009";
constexpr static const char_t* const ics_apa_space_found_parallel_right_srp = "7026";
constexpr static const char_t* const ics_apa_space_found_perp_left = "7008";
constexpr static const char_t* const ics_apa_space_found_perp_left_srp = "7029";
constexpr static const char_t* const ics_apa_space_found_perp_right = "7007";
constexpr static const char_t* const ics_apa_space_found_perp_right_srp = "7028";
constexpr static const char_t* const ics_apa_unable_to_connect = "7014";
constexpr static const char_t* const ics_camera_rvc_standard_trailer = "8002";
constexpr static const char_t* const ics_camera_rvc_standard_trailer_hitch = "8003";
constexpr static const char_t* const ics_camera_rvc_standard_view = "8001";
constexpr static const char_t* const ics_exit_button = "8014";


static const std::array<const char_t*, TotalScreens> screenList
{
    {
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
        ics_apa_remote_park_handoff,
        ics_apa_remote_exit_handoff,
        ics_apa_space_found_parallel_right_srp,
        ics_apa_space_found_parallel_left_srp,
        ics_apa_space_found_perp_right_srp,
        ics_apa_space_found_perp_left_srp,
        ics_camera_rvc_standard_view,
        ics_camera_rvc_standard_trailer,
        ics_camera_rvc_standard_trailer_hitch,
        ics_exit_button,
        ics_apa_park_instructions_selection_drawer,
    }
};


}//namespace screens

#endif // SCREENEXPERSSIONS_H
