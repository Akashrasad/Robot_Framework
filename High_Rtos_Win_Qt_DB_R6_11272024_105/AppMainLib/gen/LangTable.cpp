// Copyright (C) GM Global Technology Operations LLC 2024.
// All Rights Reserved.
// GM Confidential Restricted.
// 
// Designed and Developed by Rampgroup, © 2024 People Tech Group all rights reserved.

#include "LangTable.h"

#include "Language_ar_SA.h"
#include "Language_bg_BG.h"
#include "Language_cs_CZ.h"
#include "Language_da_DK.h"
#include "Language_de_DE.h"
#include "Language_el_GR.h"
#include "Language_en_AU.h"
#include "Language_en_GB.h"
#include "Language_en_US.h"
#include "Language_en_ZA.h"
#include "Language_es_AR.h"
#include "Language_es_ES.h"
#include "Language_es_MX.h"
#include "Language_fi_FI.h"
#include "Language_fr_CA.h"
#include "Language_fr_FR.h"
#include "Language_he_IL.h"
#include "Language_hr_HR.h"
#include "Language_hu_HU.h"
#include "Language_it_IT.h"
#include "Language_ja_JP.h"
#include "Language_ko_KR.h"
#include "Language_nl_NL.h"
#include "Language_no_NO.h"
#include "Language_pl_PL.h"
#include "Language_pt_BR.h"
#include "Language_pt_PT.h"
#include "Language_ro_RO.h"
#include "Language_ru_RU.h"
#include "Language_sk_SK.h"
#include "Language_sl_SI.h"
#include "Language_sr_CS.h"
#include "Language_sv_SE.h"
#include "Language_th_TH.h"
#include "Language_tr_TR.h"
#include "Language_uk_UA.h"
#include "Language_zh_CN.h"


namespace gen 
{
static int32_t ActiveLangID = 8; // For Language_en_US

static const std::map<int32_t , std::map<std::string , std::map<gen::LangId , const char_t*>*>> &lang_theme_map_data() 
{
    static const std::map<int32_t , std::map<std::string , std::map<gen::LangId , const char_t*>*>> lang_theme_map
    {
        {0,{ {"BEV" , get_Theme_Language_ar_SA()["BEV"]},{"D2UC_PHEV_PATAC" , get_Theme_Language_ar_SA()["D2UC_PHEV_PATAC"]},{"S233" , get_Theme_Language_ar_SA()["S233"]}, }},
        {4,{ {"BEV" , get_Theme_Language_de_DE()["BEV"]},{"D2UC_PHEV_PATAC" , get_Theme_Language_de_DE()["D2UC_PHEV_PATAC"]},{"S233" , get_Theme_Language_de_DE()["S233"]}, }},
        {8,{ {"BEV" , get_Theme_Language_en_US()["BEV"]},{"D2UC_PHEV_PATAC" , get_Theme_Language_en_US()["D2UC_PHEV_PATAC"]},{"S233" , get_Theme_Language_en_US()["S233"]}, }},
        {10,{ {"BEV" , get_Theme_Language_es_AR()["BEV"]},{"D2UC_PHEV_PATAC" , get_Theme_Language_es_AR()["D2UC_PHEV_PATAC"]},{"S233" , get_Theme_Language_es_AR()["S233"]}, }},
        {12,{ {"BEV" , get_Theme_Language_es_MX()["BEV"]},{"D2UC_PHEV_PATAC" , get_Theme_Language_es_MX()["D2UC_PHEV_PATAC"]},{"S233" , get_Theme_Language_es_MX()["S233"]}, }},
        {15,{ {"BEV" , get_Theme_Language_fr_CA()["BEV"]},{"D2UC_PHEV_PATAC" , get_Theme_Language_fr_CA()["D2UC_PHEV_PATAC"]},{"S233" , get_Theme_Language_fr_CA()["S233"]}, }},
        {17,{ {"BEV" , get_Theme_Language_he_IL()["BEV"]},{"D2UC_PHEV_PATAC" , get_Theme_Language_he_IL()["D2UC_PHEV_PATAC"]},{"S233" , get_Theme_Language_he_IL()["S233"]}, }},
        {20,{ {"BEV" , get_Theme_Language_it_IT()["BEV"]},{"D2UC_PHEV_PATAC" , get_Theme_Language_it_IT()["D2UC_PHEV_PATAC"]},{"S233" , get_Theme_Language_it_IT()["S233"]}, }},
        {21,{ {"BEV" , get_Theme_Language_ja_JP()["BEV"]},{"D2UC_PHEV_PATAC" , get_Theme_Language_ja_JP()["D2UC_PHEV_PATAC"]},{"S233" , get_Theme_Language_ja_JP()["S233"]}, }},
        {22,{ {"BEV" , get_Theme_Language_ko_KR()["BEV"]},{"D2UC_PHEV_PATAC" , get_Theme_Language_ko_KR()["D2UC_PHEV_PATAC"]},{"S233" , get_Theme_Language_ko_KR()["S233"]}, }},
        {26,{ {"BEV" , get_Theme_Language_nl_NL()["BEV"]},{"D2UC_PHEV_PATAC" , get_Theme_Language_nl_NL()["D2UC_PHEV_PATAC"]},{"S233" , get_Theme_Language_nl_NL()["S233"]}, }},
        {27,{ {"BEV" , get_Theme_Language_no_NO()["BEV"]},{"D2UC_PHEV_PATAC" , get_Theme_Language_no_NO()["D2UC_PHEV_PATAC"]},{"S233" , get_Theme_Language_no_NO()["S233"]}, }},
        {29,{ {"BEV" , get_Theme_Language_pt_BR()["BEV"]},{"D2UC_PHEV_PATAC" , get_Theme_Language_pt_BR()["D2UC_PHEV_PATAC"]},{"S233" , get_Theme_Language_pt_BR()["S233"]}, }},
        {32,{ {"BEV" , get_Theme_Language_ru_RU()["BEV"]},{"D2UC_PHEV_PATAC" , get_Theme_Language_ru_RU()["D2UC_PHEV_PATAC"]},{"S233" , get_Theme_Language_ru_RU()["S233"]}, }},
        {36,{ {"BEV" , get_Theme_Language_sv_SE()["BEV"]},{"D2UC_PHEV_PATAC" , get_Theme_Language_sv_SE()["D2UC_PHEV_PATAC"]},{"S233" , get_Theme_Language_sv_SE()["S233"]}, }},
        {37,{ {"BEV" , get_Theme_Language_th_TH()["BEV"]},{"D2UC_PHEV_PATAC" , get_Theme_Language_th_TH()["D2UC_PHEV_PATAC"]},{"S233" , get_Theme_Language_th_TH()["S233"]}, }},
        {39,{ {"BEV" , get_Theme_Language_uk_UA()["BEV"]},{"D2UC_PHEV_PATAC" , get_Theme_Language_uk_UA()["D2UC_PHEV_PATAC"]},{"S233" , get_Theme_Language_uk_UA()["S233"]}, }},
        {41,{ {"BEV" , get_Theme_Language_zh_CN()["BEV"]},{"D2UC_PHEV_PATAC" , get_Theme_Language_zh_CN()["D2UC_PHEV_PATAC"]},{"S233" , get_Theme_Language_zh_CN()["S233"]}, }},
    };
    return lang_theme_map;
}

static const std::map<int32_t , const std::array<const char_t*, 18774>*> &lang_map_data() 
{
    static const std::map<int32_t , const std::array<const char_t*, 18774>*> lang_map
    {
        {0,&Language_ar_SA_data()},
        {1,&Language_bg_BG_data()},
        {2,&Language_cs_CZ_data()},
        {3,&Language_da_DK_data()},
        {4,&Language_de_DE_data()},
        {5,&Language_el_GR_data()},
        {6,&Language_en_AU_data()},
        {7,&Language_en_GB_data()},
        {8,&Language_en_US_data()},
        {9,&Language_en_ZA_data()},
        {10,&Language_es_AR_data()},
        {11,&Language_es_ES_data()},
        {12,&Language_es_MX_data()},
        {14,&Language_fi_FI_data()},
        {15,&Language_fr_CA_data()},
        {16,&Language_fr_FR_data()},
        {17,&Language_he_IL_data()},
        {18,&Language_hr_HR_data()},
        {19,&Language_hu_HU_data()},
        {20,&Language_it_IT_data()},
        {21,&Language_ja_JP_data()},
        {22,&Language_ko_KR_data()},
        {26,&Language_nl_NL_data()},
        {27,&Language_no_NO_data()},
        {28,&Language_pl_PL_data()},
        {29,&Language_pt_BR_data()},
        {30,&Language_pt_PT_data()},
        {31,&Language_ro_RO_data()},
        {32,&Language_ru_RU_data()},
        {33,&Language_sk_SK_data()},
        {34,&Language_sl_SI_data()},
        {35,&Language_sr_CS_data()},
        {36,&Language_sv_SE_data()},
        {37,&Language_th_TH_data()},
        {38,&Language_tr_TR_data()},
        {39,&Language_uk_UA_data()},
        {41,&Language_zh_CN_data()},
    };
    return lang_map;
}

static const std::map<int32_t , const std::map<std::string, std::array<std::string, 6>>*> &lang_plurals_map_data() 
{
    static const std::map<int32_t , const std::map<std::string, std::array<std::string, 6>>*> lang_plurals_map
    {
        {0,&Language_ar_SA_map_data()},
        {1,&Language_bg_BG_map_data()},
        {2,&Language_cs_CZ_map_data()},
        {3,&Language_da_DK_map_data()},
        {4,&Language_de_DE_map_data()},
        {5,&Language_el_GR_map_data()},
        {6,&Language_en_AU_map_data()},
        {7,&Language_en_GB_map_data()},
        {8,&Language_en_US_map_data()},
        {9,&Language_en_ZA_map_data()},
        {10,&Language_es_AR_map_data()},
        {11,&Language_es_ES_map_data()},
        {12,&Language_es_MX_map_data()},
        {14,&Language_fi_FI_map_data()},
        {15,&Language_fr_CA_map_data()},
        {16,&Language_fr_FR_map_data()},
        {17,&Language_he_IL_map_data()},
        {18,&Language_hr_HR_map_data()},
        {19,&Language_hu_HU_map_data()},
        {20,&Language_it_IT_map_data()},
        {21,&Language_ja_JP_map_data()},
        {22,&Language_ko_KR_map_data()},
        {26,&Language_nl_NL_map_data()},
        {27,&Language_no_NO_map_data()},
        {28,&Language_pl_PL_map_data()},
        {29,&Language_pt_BR_map_data()},
        {30,&Language_pt_PT_map_data()},
        {31,&Language_ro_RO_map_data()},
        {32,&Language_ru_RU_map_data()},
        {33,&Language_sk_SK_map_data()},
        {34,&Language_sl_SI_map_data()},
        {35,&Language_sr_CS_map_data()},
        {36,&Language_sv_SE_map_data()},
        {37,&Language_th_TH_map_data()},
        {38,&Language_tr_TR_map_data()},
        {39,&Language_uk_UA_map_data()},
        {41,&Language_zh_CN_map_data()},
    };
    return lang_plurals_map;
}

const std::map<int32_t , const std::array<const char_t*, 18774>*>& getLangMapData() noexcept
{
    return lang_map_data();
}

const std::map<int32_t , std::map<std::string , std::map<gen::LangId , const char_t*>*>>& getLangThemeMapData() noexcept
{
    return lang_theme_map_data();
}

std::string PluralsText(const std::string& label_id, int32_t item_id)
{

	std::string text = {};

	if(lang_plurals_map_data().find(ActiveLangID)->second->find(label_id) != lang_plurals_map_data().find(ActiveLangID)->second->cend()){
		std::list<int32_t> items = {0,1,2,3,4,5}; // Plural Items

		auto str_data = lang_plurals_map_data().find(ActiveLangID)->second->at(label_id);

		for(const auto& item : items)
		{
			if(item == item_id)
			{
				text = str_data.at(static_cast<uint32_t>(item_id));
				break;
			}
		}
	}
	return text;
}
int32_t setlanguage(int32_t lang_id) noexcept
{
	ActiveLangID = lang_id;
	return ramp::GetRhmiApi()->setLanguage(lang_id);
}


}//namespace gen
