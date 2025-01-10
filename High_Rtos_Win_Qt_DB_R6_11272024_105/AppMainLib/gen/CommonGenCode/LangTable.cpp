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
static int32_t ActiveLangID = 0;

static std::map<int32_t, const std::array<const char*, 14659>*> lang_map
{
    {0,get_Language_ar_SA_map()},
    {1,get_Language_bg_BG_map()},
    {2,get_Language_cs_CZ_map()},
    {3,get_Language_da_DK_map()},
    {4,get_Language_de_DE_map()},
    {5,get_Language_el_GR_map()},
    {6,get_Language_en_AU_map()},
    {7,get_Language_en_GB_map()},
    {8,get_Language_en_US_map()},
    {9,get_Language_en_ZA_map()},
    {10,get_Language_es_AR_map()},
    {11,get_Language_es_ES_map()},
    {12,get_Language_es_MX_map()},
    {14,get_Language_fi_FI_map()},
    {15,get_Language_fr_CA_map()},
    {16,get_Language_fr_FR_map()},
    {17,get_Language_he_IL_map()},
    {18,get_Language_hr_HR_map()},
    {19,get_Language_hu_HU_map()},
    {20,get_Language_it_IT_map()},
    {21,get_Language_ja_JP_map()},
    {22,get_Language_ko_KR_map()},
    {26,get_Language_nl_NL_map()},
    {27,get_Language_no_NO_map()},
    {28,get_Language_pl_PL_map()},
    {29,get_Language_pt_BR_map()},
    {30,get_Language_pt_PT_map()},
    {31,get_Language_ro_RO_map()},
    {32,get_Language_ru_RU_map()},
    {33,get_Language_sk_SK_map()},
    {34,get_Language_sl_SI_map()},
    {35,get_Language_sr_CS_map()},
    {36,get_Language_sv_SE_map()},
    {37,get_Language_th_TH_map()},
    {38,get_Language_tr_TR_map()},
    {39,get_Language_uk_UA_map()},
    {41,get_Language_zh_CN_map()},
};

static std::map<int32_t, std::map<std::string, std::array<std::string, 6>>*> lang_plurals_map
{
    {0,get_Language_ar_SA_pluralmap()},
    {1,get_Language_bg_BG_pluralmap()},
    {2,get_Language_cs_CZ_pluralmap()},
    {3,get_Language_da_DK_pluralmap()},
    {4,get_Language_de_DE_pluralmap()},
    {5,get_Language_el_GR_pluralmap()},
    {6,get_Language_en_AU_pluralmap()},
    {7,get_Language_en_GB_pluralmap()},
    {8,get_Language_en_US_pluralmap()},
    {9,get_Language_en_ZA_pluralmap()},
    {10,get_Language_es_AR_pluralmap()},
    {11,get_Language_es_ES_pluralmap()},
    {12,get_Language_es_MX_pluralmap()},
    {14,get_Language_fi_FI_pluralmap()},
    {15,get_Language_fr_CA_pluralmap()},
    {16,get_Language_fr_FR_pluralmap()},
    {17,get_Language_he_IL_pluralmap()},
    {18,get_Language_hr_HR_pluralmap()},
    {19,get_Language_hu_HU_pluralmap()},
    {20,get_Language_it_IT_pluralmap()},
    {21,get_Language_ja_JP_pluralmap()},
    {22,get_Language_ko_KR_pluralmap()},
    {26,get_Language_nl_NL_pluralmap()},
    {27,get_Language_no_NO_pluralmap()},
    {28,get_Language_pl_PL_pluralmap()},
    {29,get_Language_pt_BR_pluralmap()},
    {30,get_Language_pt_PT_pluralmap()},
    {31,get_Language_ro_RO_pluralmap()},
    {32,get_Language_ru_RU_pluralmap()},
    {33,get_Language_sk_SK_pluralmap()},
    {34,get_Language_sl_SI_pluralmap()},
    {35,get_Language_sr_CS_pluralmap()},
    {36,get_Language_sv_SE_pluralmap()},
    {37,get_Language_th_TH_pluralmap()},
    {38,get_Language_tr_TR_pluralmap()},
    {39,get_Language_uk_UA_pluralmap()},
    {41,get_Language_zh_CN_pluralmap()},
};

std::string PluralsText(const std::string& label_id, int32_t item_id)
{
    std::string text = {};

    std::list<int32_t> items = {0,1,2,3,4,5}; // Plural Items

    auto str_data = lang_plurals_map[ActiveLangID]->at(label_id);

    for(const auto& item : items)
    {
      if(item == item_id)
      {
       text = str_data.at(static_cast<uint32_t>(item_id));
       break;
      }
   }
   
    return text;
}

const char* stringText(const gen::LangId& id)
{
    return gen::lang_map[ActiveLangID]->at(static_cast<uint32_t>(id));
}

void setlanguage(int32_t lang_id)
{
    ActiveLangID = lang_id;
}

const char* getLangStringText(int32_t lang_id, const LangId& id)
{
    return gen::lang_map[lang_id]->at(static_cast<uint32_t>(id));
}


}//namespace gen
