// Copyright (C) GM Global Technology Operations LLC 2024.
// All Rights Reserved.
// GM Confidential Restricted.
// 
// Designed and Developed by Rampgroup, © 2024 People Tech Group all rights reserved.

#include "CustomFontColor.h"

#include <map>


namespace gen 
{



static const std::map<std::string , std::vector<std::string>> &custom_fontskinmap_data() 
{
    static const std::map<std::string , std::vector<std::string>> custom_fontskinmap
    {
        {"skin_font_body_content_normal",{"var_font_list_primary_text","var_font_list_secondary_text","var_font_list_centerlabel_text","var_font_left_temp","var_font_list_default_text","var_font_list_default_disabled_text","var_font_list_bold_text","var_font_powerlimit_text","var_font_aux_edit","","var_font_camera_settings","var_font_camera_settings_disabled","var_font_smart_controls","var_font_avg_range_reserve","var_font_range_reserve_text_circle","var_font_peek_in_screen_circle_progressbar_oulets_text"}},
        {"skin_font_body_title",{"var_font_parallel_txt","var_font_perp_right_instr_txt","var_font_body_title","var_font_enterpasscode_txt","var_font_call_assistance","var_font_call_assistance_1"}},
        {"skin_font_dark",{"var_font_camera_view_dynamic_messaging"}},
        {"skin_font_disabled",{"var_font_list_disabled","var_font_primary_button_disabled","var_font_vc_options_name_disabled","var_font_test_btn_txt_disabled","var_font_secondary_button_disabled","var_font_add_remote_btn_txt_disabled","var_font_card_controls_disabled","var_font_radio_btn_off_disbled","var_font_btn_txt_secondary_disabled","var_font_yes_button_disabled","var_font_keep_looking_button_disabled","var_font_btn_tab_one_front_disabled","var_font_keypad_disable","var_font_btn_tab_one_disabled","var_font_tabs_disabled_txt","var_font_settings_txt_disabled","var_font_options_disabled","var_font_desc_text","var_font_radio_btn_off_disabled","var_font_edit_txt_disabled","var_font_primary_button_disabled_1","var_font_yes_button_disabled_1","var_font_time_disabled","var_font_time_default_disabled"}},
        {"skin_font_emergency",{"var_font_title_emergency_txt","var_font_emergency_text","var_font_title_emergency_text"}},
        {"skin_font_exit_btn_normal",{"var_font_progressbar_dyn_txt","var_font_exit_btn_txt","var_font_wake_exit_btn_txt"}},
        {"skin_font_exit_btn_pressed",{"var_font_exit_btn_txt_pressed"}},
        {"skin_font_focused",{"var_font_primary_button_focused","var_font_add_remote_btn_txt_focused","var_font_test_btn_txt_focused","var_font_secondary_button_focused","var_font_btn_txt_secondary_focused","var_font_keep_looking_button_focused","var_font_radio_btn_off_normal","var_font_yes_button_focused","var_font_btn_tab_one_normal_1","var_font_btn_tab_one_normal","var_font_change_selection_txt","var_font_title","var_font_headlight_pop_up_focused"}},
        {"skin_font_normal",{"var_font_exit_btn_txt","var_font_title_VC","var_font_title_VC_1","var_font_title_VC_2","var_font_smart_controls","var_font_pab_btn_normal","var_font_universal_remotes_desc","var_font_headlight_pop_up_focused","var_font_headlight_pop_up_normal","var_font_radio_btn_off_normal_large","var_font_radio_btn_off_focused_large","var_font_vc_options_name_normal","var_font_secondary_button_normal","var_font_btn_txt_secondary_normal","var_font_call_assistance","var_font_universal_remotes_card_secondary_txt","var_font_add_remote_btn_txt_normal","var_font_notification_dialog_text_secondary","var_font_card_controls_normal","var_font_btn_tab_one_normal_1","var_font_btn_tab_one_normal","var_font_perp_right_instr_txt2","var_font_change_selection_txt","var_font_keep_looking_button","var_font_spot_text","var_font_front_txt","var_font_btn_tab_one_front_normal","var_font_button_regular_txt","var_font_title_quick_control_txt","var_font_park_left_perp_label_1","var_font_keypad_normal","var_font_exit_btn_normal","var_font_perp_right_instr_txt","var_font_tabs_normal_txt","var_font_settings_txt","var_font_btn_txt_normal","var_font_park_left_perp_label","var_font_body_text","var_font_primary_button_normal","var_font_radio_btn_off_focused","var_font_test_btn_txt_normal","var_font_teritary_normal","var_font_options_normal","var_font_notification_dialog_checkbox_text","var_font_edit_txt_normal","var_font_snackbar_txt","var_font_set_level_txt_normal","","var_font_time_primary_text","var_font_range_reserve_text","var_font_dynamic_range","var_font_time_default_text","var_font_distance_number","var_font_percent_text","var_font_range_distance_text","var_font_peek_in_circle_oulets_text","var_font_peek_in_distance_number","var_font_summary_option_text","var_font_body_text_1"}},
        {"skin_font_normal_radio",{"var_font_radio_btn_off_normal"}},
        {"skin_font_normal_text",{"var_font_radio_btn_off_focused"}},
        {"skin_font_pressed",{"var_font_smart_controls_pressed","var_font_primary_button_normal","var_font_primary_button_pressed","var_font_secondary_button_pressed","var_font_learn_success_test_body_content_1","var_font_universal_remotes_card_primary_txt","var_font_add_remote_btn_txt_pressed","var_font_learn_success_test_body_content","var_font_test_btn_txt_normal","var_font_test_btn_txt_pressed","var_font_dialog_text","var_font_card_controls_pressed","var_font_pab_btn_pressed","var_font_btn_txt_secondary_pressed","var_font_toomanyattempts","var_font_yes_button","var_font_yes_button_focused","var_font_yes_button_pressed","var_font_keep_looking_button_pressed","var_font_title_facotry_txt","var_font_btn_txt_secondary_pressed_1","var_font_quick_controls_text","var_font_smart_controls_popup_text","var_font_keypad_pressed","var_font_title","var_font_btn_tab_one_pressed","var_font_exit_btn_pressed","var_font_perp_right_instr_txt1","var_font_change_selection_pressed","var_font_keep_looking_button_focused","var_font_camera_view_dynamic_messaging_1","var_font_camera_view_dynamic_messaging","var_font_aos_teltale","var_font_title_pin","var_font_keypad_normal","var_font_title_pin_1","var_font_snackbar_2line_txt","var_font_btn_txt_focused","var_font_snackbar_txt","var_font_power_button_normal","var_font_hmi_factory","var_font_high_temp","var_font_recoverymode_txt","var_font_snackbar_txt_1","var_font_see_more_controls_txt","var_font_change_selection_pressed_txt","var_font_percent_text_red"}},
        {"skin_font_selected",{"var_font_primary_button_selected","var_font_secondary_button_selected","var_font_pab_btn_selected","var_font_yes_button_selected","var_font_btn_tab_one_focused","var_font_keep_looking_button_selected"}},
        {"skin_font_selected_35",{"var_font_btn_tab_one_focused","var_font_tabs_selected_txt"}},
        {"skin_font_snack_bar",{"var_font_snackbar_txt","var_font_power_limit_number"}},
        {"skin_font_tab_disabled",{"var_font_btn_tab_one_disabled"}},
        {"skin_font_tab_selected",{"var_font_btn_tab_one_selected","var_font_btn_tab_one_focused","var_font_btn_tab_one_front_selected"}},
        {"skin_font_title",{"var_font_title","var_font_title_1","var_font_title_2","var_font_title_txt","var_font_change_selection_text"}},
        {"skin_pressed_URL",{"var_font_tabs_pressed_txt"}},
    };
    return custom_fontskinmap;
}

int32_t setCustomFontColor(const char_t* skinid, uint32_t color)
{
    std::map<std::string, std::vector<std::string>>::const_iterator itr;

    for (itr = custom_fontskinmap_data().begin(); itr != custom_fontskinmap_data().end(); itr++)
    {
        if(itr->first == skinid)
        {
            auto& varids = itr->second;
            for (const auto& varid : varids)
            {
                auto Result = ramp::GetRhmiApi()->setFontColor(varid.c_str() , color); 
 				ramp::GetRhmiApi()->inspectResult(Result, "setCustomFontColor", "failed");
            }
        }
    }
    return 0;
}


}//namespace gen
