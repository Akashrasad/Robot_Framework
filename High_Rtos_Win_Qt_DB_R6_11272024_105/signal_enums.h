/*
 * Copyright (C) GM Global Technology Operations LLC 2024.
 * All Rights Reserved.
 * GM Confidential Restricted.
 */

/*
* This file was generated from tools/arxml
* Based on arxml version - GB_ASR_VCU_24_24_175.3p0_4.2.1_PreEcuC_No_ODX.arxml
*                        - GB_ASR_VCU_RTOS_ETH_24_24_175.2p0_4.2.2_PreEcuC_No_ODX.arxml
*/

#ifndef ARXML_SIGNALENUMS_H_
#define ARXML_SIGNALENUMS_H_

#include <cstdint>
#include <signal_table.h>

/*
 * This file contains all the signal enums from the ARXML.
 */

namespace gm { namespace inc { namespace vdata {

enum class AAASSRP_StrgReqStsAuth : int32_t {
    Unknown = 0,
    Active = 1,
    Inactive = 2,
};

enum class ACCAutoSetSpdCstChgSetReq : int32_t {
    No_Action = 0,
    Off = 1,
    On = 2,
};

enum class ACCAutoSetSpdCstCurrSetVal : int32_t {
    Setting_Unknown = 0,
    Off = 1,
    On = 2,
};

enum class ACCAutoStSpStat : int32_t {
    No_Set_Speed_Change = 0,
    Proposed_Speed_Limit_Change = 1,
    Accepted_Speed_Limit_Change = 2,
    Declined_Speed_Limit_Change = 3,
};

enum class ACCCSR_Aux1Anm : int32_t {
    No_Action = 0,
    OFF = 1,
    Animation_Type_1 = 2,
    Animation_Type_2 = 3,
    Animation_Type_3 = 4,
    Animation_Type_4 = 5,
    Animation_Type_5 = 6,
    Animation_Type_6 = 7,
    Animation_Type_7 = 8,
    Animation_Type_8 = 9,
    Animation_Type_9 = 10,
    Animation_Type_10 = 11,
    Animation_Type_11 = 12,
    Animation_Type_12 = 13,
    Animation_Type_13 = 14,
    Animation_Type_14 = 15,
};

enum class ACCCSR_Aux1Brghtns : int32_t {
    No_Action = 0,
    BrightnessLevel_1 = 1,
    BrightnessLevel_2 = 2,
    BrightnessLevel_3 = 3,
    BrightnessLevel_4 = 4,
    ReservedLevel_5 = 5,
    ReservedLevel_6 = 6,
    ReservedLevel_7 = 7,
};

enum class ACCCSR_Aux1Colr : int32_t {
    No_Action = 0,
    OFF = 1,
    Color_Type_1 = 2,
    Color_Type_2 = 3,
    Color_Type_3 = 4,
    Color_Type_4 = 5,
    Color_Type_5 = 6,
    Color_Type_6 = 7,
    Color_Type_7 = 8,
    Color_Type_8 = 9,
    Color_Type_9 = 10,
    Color_Type_10 = 11,
    Color_Type_11 = 12,
    Color_Type_12 = 13,
    Color_Type_13 = 14,
    Color_Type_14 = 15,
    Color_Type_15 = 16,
    Color_Type_16 = 17,
    Color_Type_17 = 18,
    Color_Type_18 = 19,
    Color_Type_19 = 20,
    Color_Type_20 = 21,
    Color_Type_21 = 22,
    Color_Type_22 = 23,
    Color_Type_23 = 24,
    Color_Type_24 = 25,
    Color_Type_25 = 26,
    Color_Type_26 = 27,
    Color_Type_27 = 28,
    Color_Type_28 = 29,
    Color_Type_29 = 30,
    Color_Type_30 = 31,
    Color_Type_31 = 32,
    Color_Type_32 = 33,
    Color_Type_33 = 34,
    Color_Type_34 = 35,
    Color_Type_35 = 36,
    Color_Type_36 = 37,
    Color_Type_37 = 38,
    Color_Type_38 = 39,
    Color_Type_39 = 40,
    Color_Type_40 = 41,
    Color_Type_41 = 42,
    Color_Type_42 = 43,
    Color_Type_43 = 44,
    Color_Type_44 = 45,
    Color_Type_45 = 46,
    Color_Type_46 = 47,
    Color_Type_47 = 48,
    Color_Type_48 = 49,
    Color_Type_49 = 50,
    Color_Type_50 = 51,
    Color_Type_51 = 52,
    Color_Type_52 = 53,
    Color_Type_53 = 54,
    Color_Type_54 = 55,
    Color_Type_55 = 56,
    Color_Type_56 = 57,
    Color_Type_57 = 58,
    Color_Type_58 = 59,
    Color_Type_59 = 60,
    Color_Type_60 = 61,
    Color_Type_61 = 62,
    Color_Type_62 = 63,
    Color_Type_63 = 64,
    Color_Type_64 = 65,
    Color_Type_65 = 66,
    Color_Type_66 = 67,
    Color_Type_67 = 68,
    Color_Type_68 = 69,
    Color_Type_69 = 70,
    Color_Type_70 = 71,
    Color_Type_71 = 72,
    Color_Type_72 = 73,
    Color_Type_73 = 74,
    Color_Type_74 = 75,
    Color_Type_75 = 76,
    Color_Type_76 = 77,
    Color_Type_77 = 78,
    Color_Type_78 = 79,
    Color_Type_79 = 80,
    Color_Type_80 = 81,
    Color_Type_81 = 82,
    Color_Type_82 = 83,
    Color_Type_83 = 84,
    Color_Type_84 = 85,
    Color_Type_85 = 86,
    Color_Type_86 = 87,
    Color_Type_87 = 88,
    Color_Type_88 = 89,
    Color_Type_89 = 90,
    Color_Type_90 = 91,
    Color_Type_91 = 92,
    Color_Type_92 = 93,
    Color_Type_93 = 94,
    Color_Type_94 = 95,
    Color_Type_95 = 96,
    Color_Type_96 = 97,
    Color_Type_97 = 98,
    Color_Type_98 = 99,
    Color_Type_99 = 100,
    Color_Type_100 = 101,
    Color_Type_101 = 102,
    Color_Type_102 = 103,
    Color_Type_103 = 104,
    Color_Type_104 = 105,
    Color_Type_105 = 106,
    Color_Type_106 = 107,
    Color_Type_107 = 108,
    Color_Type_108 = 109,
    Color_Type_109 = 110,
    Color_Type_110 = 111,
    Color_Type_111 = 112,
    Color_Type_112 = 113,
    Color_Type_113 = 114,
    Color_Type_114 = 115,
    Color_Type_115 = 116,
    Color_Type_116 = 117,
    Color_Type_117 = 118,
    Color_Type_118 = 119,
    Color_Type_119 = 120,
    Color_Type_120 = 121,
    Color_Type_121 = 122,
    Color_Type_122 = 123,
    Color_Type_123 = 124,
    Color_Type_124 = 125,
    Color_Type_125 = 126,
    Color_Type_126 = 127,
};

enum class ACCCSR_Aux2Anm : int32_t {
    No_Action = 0,
    Off = 1,
    Animation_Type_1 = 2,
    Animation_Type_2 = 3,
    Animation_Type_3 = 4,
    Animation_Type_4 = 5,
    Animation_Type_5 = 6,
    Animation_Type_6 = 7,
    Animation_Type_7 = 8,
    Animation_Type_8 = 9,
    Animation_Type_9 = 10,
    Animation_Type_10 = 11,
    Animation_Type_11 = 12,
    Animation_Type_12 = 13,
    Animation_Type_13 = 14,
    Animation_Type_14 = 15,
};

enum class ACCCSR_Aux2Brghtns : int32_t {
    No_Action = 0,
    Brightness_Level_1 = 1,
    Brightness_Level_2 = 2,
    Brightness_Level_3 = 3,
    Brightness_Level_4 = 4,
};

enum class ACCCSR_Aux2Colr : int32_t {
    No_Action = 0,
    Off = 1,
    Color_Type_1 = 2,
    Color_Type_2 = 3,
    Color_Type_3 = 4,
    Color_Type_4 = 5,
    Color_Type_5 = 6,
    Color_Type_6 = 7,
    Color_Type_7 = 8,
    Color_Type_8 = 9,
    Color_Type_9 = 10,
    Color_Type_10 = 11,
    Color_Type_11 = 12,
    Color_Type_12 = 13,
    Color_Type_13 = 14,
    Color_Type_14 = 15,
    Color_Type_15 = 16,
    Color_Type_16 = 17,
    Color_Type_17 = 18,
    Color_Type_18 = 19,
    Color_Type_19 = 20,
    Color_Type_20 = 21,
    Color_Type_21 = 22,
    Color_Type_22 = 23,
    Color_Type_23 = 24,
    Color_Type_24 = 25,
    Color_Type_25 = 26,
    Color_Type_26 = 27,
    Color_Type_27 = 28,
    Color_Type_28 = 29,
    Color_Type_29 = 30,
    Color_Type_30 = 31,
    Color_Type_31 = 32,
    Color_Type_32 = 33,
    Color_Type_33 = 34,
    Color_Type_34 = 35,
    Color_Type_35 = 36,
    Color_Type_36 = 37,
    Color_Type_37 = 38,
    Color_Type_38 = 39,
    Color_Type_39 = 40,
    Color_Type_40 = 41,
    Color_Type_41 = 42,
    Color_Type_42 = 43,
    Color_Type_43 = 44,
    Color_Type_44 = 45,
    Color_Type_45 = 46,
    Color_Type_46 = 47,
    Color_Type_47 = 48,
    Color_Type_48 = 49,
    Color_Type_49 = 50,
    Color_Type_50 = 51,
    Color_Type_51 = 52,
    Color_Type_52 = 53,
    Color_Type_53 = 54,
    Color_Type_54 = 55,
    Color_Type_55 = 56,
    Color_Type_56 = 57,
    Color_Type_57 = 58,
    Color_Type_58 = 59,
    Color_Type_59 = 60,
    Color_Type_60 = 61,
    Color_Type_61 = 62,
    Color_Type_62 = 63,
    Color_Type_63 = 64,
    Color_Type_64 = 65,
    Color_Type_65 = 66,
    Color_Type_66 = 67,
    Color_Type_67 = 68,
    Color_Type_68 = 69,
    Color_Type_69 = 70,
    Color_Type_70 = 71,
    Color_Type_71 = 72,
    Color_Type_72 = 73,
    Color_Type_73 = 74,
    Color_Type_74 = 75,
    Color_Type_75 = 76,
    Color_Type_76 = 77,
    Color_Type_77 = 78,
    Color_Type_78 = 79,
    Color_Type_79 = 80,
    Color_Type_80 = 81,
    Color_Type_81 = 82,
    Color_Type_82 = 83,
    Color_Type_83 = 84,
    Color_Type_84 = 85,
    Color_Type_85 = 86,
    Color_Type_86 = 87,
    Color_Type_87 = 88,
    Color_Type_88 = 89,
    Color_Type_89 = 90,
    Color_Type_90 = 91,
    Color_Type_91 = 92,
    Color_Type_92 = 93,
    Color_Type_93 = 94,
    Color_Type_94 = 95,
    Color_Type_95 = 96,
    Color_Type_96 = 97,
    Color_Type_97 = 98,
    Color_Type_98 = 99,
    Color_Type_99 = 100,
    Color_Type_100 = 101,
    Color_Type_101 = 102,
    Color_Type_102 = 103,
    Color_Type_103 = 104,
    Color_Type_104 = 105,
    Color_Type_105 = 106,
    Color_Type_106 = 107,
    Color_Type_107 = 108,
    Color_Type_108 = 109,
    Color_Type_109 = 110,
    Color_Type_110 = 111,
    Color_Type_111 = 112,
    Color_Type_112 = 113,
    Color_Type_113 = 114,
    Color_Type_114 = 115,
    Color_Type_115 = 116,
    Color_Type_116 = 117,
    Color_Type_117 = 118,
    Color_Type_118 = 119,
    Color_Type_119 = 120,
    Color_Type_120 = 121,
    Color_Type_121 = 122,
    Color_Type_122 = 123,
    Color_Type_123 = 124,
    Color_Type_124 = 125,
    Color_Type_125 = 126,
    Color_Type_126 = 127,
};

enum class ACCCSR_Aux3Anm : int32_t {
    No_Action = 0,
    Off = 1,
    Animation_Type_1 = 2,
    Animation_Type_2 = 3,
    Animation_Type_3 = 4,
    Animation_Type_4 = 5,
    Animation_Type_5 = 6,
    Animation_Type_6 = 7,
    Animation_Type_7 = 8,
    Animation_Type_8 = 9,
    Animation_Type_9 = 10,
    Animation_Type_10 = 11,
    Animation_Type_11 = 12,
    Animation_Type_12 = 13,
    Animation_Type_13 = 14,
    Animation_Type_14 = 15,
};

enum class ACCCSR_Aux3Brghtns : int32_t {
    No_Action = 0,
    Brightness_Level_1 = 1,
    Brightness_Level_2 = 2,
    Brightness_Level_3 = 3,
    Brightness_Level_4 = 4,
};

enum class ACCCSR_Aux3Colr : int32_t {
    No_Action = 0,
    Off = 1,
    Color_Type_1 = 2,
    Color_Type_2 = 3,
    Color_Type_3 = 4,
    Color_Type_4 = 5,
    Color_Type_5 = 6,
    Color_Type_6 = 7,
    Color_Type_7 = 8,
    Color_Type_8 = 9,
    Color_Type_9 = 10,
    Color_Type_10 = 11,
    Color_Type_11 = 12,
    Color_Type_12 = 13,
    Color_Type_13 = 14,
    Color_Type_14 = 15,
    Color_Type_15 = 16,
    Color_Type_16 = 17,
    Color_Type_17 = 18,
    Color_Type_18 = 19,
    Color_Type_19 = 20,
    Color_Type_20 = 21,
    Color_Type_21 = 22,
    Color_Type_22 = 23,
    Color_Type_23 = 24,
    Color_Type_24 = 25,
    Color_Type_25 = 26,
    Color_Type_26 = 27,
    Color_Type_27 = 28,
    Color_Type_28 = 29,
    Color_Type_29 = 30,
    Color_Type_30 = 31,
    Color_Type_31 = 32,
    Color_Type_32 = 33,
    Color_Type_33 = 34,
    Color_Type_34 = 35,
    Color_Type_35 = 36,
    Color_Type_36 = 37,
    Color_Type_37 = 38,
    Color_Type_38 = 39,
    Color_Type_39 = 40,
    Color_Type_40 = 41,
    Color_Type_41 = 42,
    Color_Type_42 = 43,
    Color_Type_43 = 44,
    Color_Type_44 = 45,
    Color_Type_45 = 46,
    Color_Type_46 = 47,
    Color_Type_47 = 48,
    Color_Type_48 = 49,
    Color_Type_49 = 50,
    Color_Type_50 = 51,
    Color_Type_51 = 52,
    Color_Type_52 = 53,
    Color_Type_53 = 54,
    Color_Type_54 = 55,
    Color_Type_55 = 56,
    Color_Type_56 = 57,
    Color_Type_57 = 58,
    Color_Type_58 = 59,
    Color_Type_59 = 60,
    Color_Type_60 = 61,
    Color_Type_61 = 62,
    Color_Type_62 = 63,
    Color_Type_63 = 64,
    Color_Type_64 = 65,
    Color_Type_65 = 66,
    Color_Type_66 = 67,
    Color_Type_67 = 68,
    Color_Type_68 = 69,
    Color_Type_69 = 70,
    Color_Type_70 = 71,
    Color_Type_71 = 72,
    Color_Type_72 = 73,
    Color_Type_73 = 74,
    Color_Type_74 = 75,
    Color_Type_75 = 76,
    Color_Type_76 = 77,
    Color_Type_77 = 78,
    Color_Type_78 = 79,
    Color_Type_79 = 80,
    Color_Type_80 = 81,
    Color_Type_81 = 82,
    Color_Type_82 = 83,
    Color_Type_83 = 84,
    Color_Type_84 = 85,
    Color_Type_85 = 86,
    Color_Type_86 = 87,
    Color_Type_87 = 88,
    Color_Type_88 = 89,
    Color_Type_89 = 90,
    Color_Type_90 = 91,
    Color_Type_91 = 92,
    Color_Type_92 = 93,
    Color_Type_93 = 94,
    Color_Type_94 = 95,
    Color_Type_95 = 96,
    Color_Type_96 = 97,
    Color_Type_97 = 98,
    Color_Type_98 = 99,
    Color_Type_99 = 100,
    Color_Type_100 = 101,
    Color_Type_101 = 102,
    Color_Type_102 = 103,
    Color_Type_103 = 104,
    Color_Type_104 = 105,
    Color_Type_105 = 106,
    Color_Type_106 = 107,
    Color_Type_107 = 108,
    Color_Type_108 = 109,
    Color_Type_109 = 110,
    Color_Type_110 = 111,
    Color_Type_111 = 112,
    Color_Type_112 = 113,
    Color_Type_113 = 114,
    Color_Type_114 = 115,
    Color_Type_115 = 116,
    Color_Type_116 = 117,
    Color_Type_117 = 118,
    Color_Type_118 = 119,
    Color_Type_119 = 120,
    Color_Type_120 = 121,
    Color_Type_121 = 122,
    Color_Type_122 = 123,
    Color_Type_123 = 124,
    Color_Type_124 = 125,
    Color_Type_125 = 126,
    Color_Type_126 = 127,
};

enum class ACCCSR_IntrAnm : int32_t {
    No_Action = 0,
    OFF = 1,
    Animation_Type_1 = 2,
    Animation_Type_2 = 3,
    Animation_Type_3 = 4,
    Animation_Type_4 = 5,
    Animation_Type_5 = 6,
    Animation_Type_6 = 7,
    Animation_Type_7 = 8,
    Animation_Type_8 = 9,
    Animation_Type_9 = 10,
    Animation_Type_10 = 11,
    Animation_Type_11 = 12,
    Animation_Type_12 = 13,
    Animation_Type_13 = 14,
    Animation_Type_14 = 15,
};

enum class ACCCSR_IntrBrghtns : int32_t {
    No_Action = 0,
    BrightnessLevel_1 = 1,
    BrightnessLevel_2 = 2,
    BrightnessLevel_3 = 3,
    BrightnessLevel_4 = 4,
    ReservedLevel_5 = 5,
    ReservedLevel_6 = 6,
    ReservedLevel_7 = 7,
};

enum class ACCCSR_IntrColr : int32_t {
    No_Action = 0,
    OFF = 1,
    Color_Type_1 = 2,
    Color_Type_2 = 3,
    Color_Type_3 = 4,
    Color_Type_4 = 5,
    Color_Type_5 = 6,
    Color_Type_6 = 7,
    Color_Type_7 = 8,
    Color_Type_8 = 9,
    Color_Type_9 = 10,
    Color_Type_10 = 11,
    Color_Type_11 = 12,
    Color_Type_12 = 13,
    Color_Type_13 = 14,
    Color_Type_14 = 15,
    Color_Type_15 = 16,
    Color_Type_16 = 17,
    Color_Type_17 = 18,
    Color_Type_18 = 19,
    Color_Type_19 = 20,
    Color_Type_20 = 21,
    Color_Type_21 = 22,
    Color_Type_22 = 23,
    Color_Type_23 = 24,
    Color_Type_24 = 25,
    Color_Type_25 = 26,
    Color_Type_26 = 27,
    Color_Type_27 = 28,
    Color_Type_28 = 29,
    Color_Type_29 = 30,
    Color_Type_30 = 31,
    Color_Type_31 = 32,
    Color_Type_32 = 33,
    Color_Type_33 = 34,
    Color_Type_34 = 35,
    Color_Type_35 = 36,
    Color_Type_36 = 37,
    Color_Type_37 = 38,
    Color_Type_38 = 39,
    Color_Type_39 = 40,
    Color_Type_40 = 41,
    Color_Type_41 = 42,
    Color_Type_42 = 43,
    Color_Type_43 = 44,
    Color_Type_44 = 45,
    Color_Type_45 = 46,
    Color_Type_46 = 47,
    Color_Type_47 = 48,
    Color_Type_48 = 49,
    Color_Type_49 = 50,
    Color_Type_50 = 51,
    Color_Type_51 = 52,
    Color_Type_52 = 53,
    Color_Type_53 = 54,
    Color_Type_54 = 55,
    Color_Type_55 = 56,
    Color_Type_56 = 57,
    Color_Type_57 = 58,
    Color_Type_58 = 59,
    Color_Type_59 = 60,
    Color_Type_60 = 61,
    Color_Type_61 = 62,
    Color_Type_62 = 63,
    Color_Type_63 = 64,
    Color_Type_64 = 65,
    Color_Type_65 = 66,
    Color_Type_66 = 67,
    Color_Type_67 = 68,
    Color_Type_68 = 69,
    Color_Type_69 = 70,
    Color_Type_70 = 71,
    Color_Type_71 = 72,
    Color_Type_72 = 73,
    Color_Type_73 = 74,
    Color_Type_74 = 75,
    Color_Type_75 = 76,
    Color_Type_76 = 77,
    Color_Type_77 = 78,
    Color_Type_78 = 79,
    Color_Type_79 = 80,
    Color_Type_80 = 81,
    Color_Type_81 = 82,
    Color_Type_82 = 83,
    Color_Type_83 = 84,
    Color_Type_84 = 85,
    Color_Type_85 = 86,
    Color_Type_86 = 87,
    Color_Type_87 = 88,
    Color_Type_88 = 89,
    Color_Type_89 = 90,
    Color_Type_90 = 91,
    Color_Type_91 = 92,
    Color_Type_92 = 93,
    Color_Type_93 = 94,
    Color_Type_94 = 95,
    Color_Type_95 = 96,
    Color_Type_96 = 97,
    Color_Type_97 = 98,
    Color_Type_98 = 99,
    Color_Type_99 = 100,
    Color_Type_100 = 101,
    Color_Type_101 = 102,
    Color_Type_102 = 103,
    Color_Type_103 = 104,
    Color_Type_104 = 105,
    Color_Type_105 = 106,
    Color_Type_106 = 107,
    Color_Type_107 = 108,
    Color_Type_108 = 109,
    Color_Type_109 = 110,
    Color_Type_110 = 111,
    Color_Type_111 = 112,
    Color_Type_112 = 113,
    Color_Type_113 = 114,
    Color_Type_114 = 115,
    Color_Type_115 = 116,
    Color_Type_116 = 117,
    Color_Type_117 = 118,
    Color_Type_118 = 119,
    Color_Type_119 = 120,
    Color_Type_120 = 121,
    Color_Type_121 = 122,
    Color_Type_122 = 123,
    Color_Type_123 = 124,
    Color_Type_124 = 125,
    Color_Type_125 = 126,
    Color_Type_126 = 127,
};

enum class ACCCSV_Aux1Anm : int32_t {
    Setting_Unknown = 0,
    Off = 1,
    Animation_Type_1 = 2,
    Animation_Type_2 = 3,
    Animation_Type_3 = 4,
    Animation_Type_4 = 5,
    Animation_Type_5 = 6,
    Animation_Type_6 = 7,
    Animation_Type_7 = 8,
    Animation_Type_8 = 9,
    Animation_Type_9 = 10,
    Animation_Type_10 = 11,
    Animation_Type_11 = 12,
    Animation_Type_12 = 13,
    Animation_Type_13 = 14,
    Animation_Type_14 = 15,
};

enum class ACCCSV_Aux1Brghtns : int32_t {
    Setting_Unknown = 0,
    BrightnessLevel_1 = 1,
    BrightnessLevel_2 = 2,
    BrightnessLevel_3 = 3,
    BrightnessLevel_4 = 4,
    ReservedLevel_5 = 5,
    ReservedLevel_6 = 6,
    ReservedLevel_7 = 7,
};

enum class ACCCSV_Aux1Colr : int32_t {
    Setting_Unknown = 0,
    Off = 1,
    Color_Type_1 = 2,
    Color_Type_2 = 3,
    Color_Type_3 = 4,
    Color_Type_4 = 5,
    Color_Type_5 = 6,
    Color_Type_6 = 7,
    Color_Type_7 = 8,
    Color_Type_8 = 9,
    Color_Type_9 = 10,
    Color_Type_10 = 11,
    Color_Type_11 = 12,
    Color_Type_12 = 13,
    Color_Type_13 = 14,
    Color_Type_14 = 15,
    Color_Type_15 = 16,
    Color_Type_16 = 17,
    Color_Type_17 = 18,
    Color_Type_18 = 19,
    Color_Type_19 = 20,
    Color_Type_20 = 21,
    Color_Type_21 = 22,
    Color_Type_22 = 23,
    Color_Type_23 = 24,
    Color_Type_24 = 25,
    Color_Type_25 = 26,
    Color_Type_26 = 27,
    Color_Type_27 = 28,
    Color_Type_28 = 29,
    Color_Type_29 = 30,
    Color_Type_30 = 31,
    Color_Type_31 = 32,
    Color_Type_32 = 33,
    Color_Type_33 = 34,
    Color_Type_34 = 35,
    Color_Type_35 = 36,
    Color_Type_36 = 37,
    Color_Type_37 = 38,
    Color_Type_38 = 39,
    Color_Type_39 = 40,
    Color_Type_40 = 41,
    Color_Type_41 = 42,
    Color_Type_42 = 43,
    Color_Type_43 = 44,
    Color_Type_44 = 45,
    Color_Type_45 = 46,
    Color_Type_46 = 47,
    Color_Type_47 = 48,
    Color_Type_48 = 49,
    Color_Type_49 = 50,
    Color_Type_50 = 51,
    Color_Type_51 = 52,
    Color_Type_52 = 53,
    Color_Type_53 = 54,
    Color_Type_54 = 55,
    Color_Type_55 = 56,
    Color_Type_56 = 57,
    Color_Type_57 = 58,
    Color_Type_58 = 59,
    Color_Type_59 = 60,
    Color_Type_60 = 61,
    Color_Type_61 = 62,
    Color_Type_62 = 63,
    Color_Type_63 = 64,
    Color_Type_64 = 65,
    Color_Type_65 = 66,
    Color_Type_66 = 67,
    Color_Type_67 = 68,
    Color_Type_68 = 69,
    Color_Type_69 = 70,
    Color_Type_70 = 71,
    Color_Type_71 = 72,
    Color_Type_72 = 73,
    Color_Type_73 = 74,
    Color_Type_74 = 75,
    Color_Type_75 = 76,
    Color_Type_76 = 77,
    Color_Type_77 = 78,
    Color_Type_78 = 79,
    Color_Type_79 = 80,
    Color_Type_80 = 81,
    Color_Type_81 = 82,
    Color_Type_82 = 83,
    Color_Type_83 = 84,
    Color_Type_84 = 85,
    Color_Type_85 = 86,
    Color_Type_86 = 87,
    Color_Type_87 = 88,
    Color_Type_88 = 89,
    Color_Type_89 = 90,
    Color_Type_90 = 91,
    Color_Type_91 = 92,
    Color_Type_92 = 93,
    Color_Type_93 = 94,
    Color_Type_94 = 95,
    Color_Type_95 = 96,
    Color_Type_96 = 97,
    Color_Type_97 = 98,
    Color_Type_98 = 99,
    Color_Type_99 = 100,
    Color_Type_100 = 101,
    Color_Type_101 = 102,
    Color_Type_102 = 103,
    Color_Type_103 = 104,
    Color_Type_104 = 105,
    Color_Type_105 = 106,
    Color_Type_106 = 107,
    Color_Type_107 = 108,
    Color_Type_108 = 109,
    Color_Type_109 = 110,
    Color_Type_110 = 111,
    Color_Type_111 = 112,
    Color_Type_112 = 113,
    Color_Type_113 = 114,
    Color_Type_114 = 115,
    Color_Type_115 = 116,
    Color_Type_116 = 117,
    Color_Type_117 = 118,
    Color_Type_118 = 119,
    Color_Type_119 = 120,
    Color_Type_120 = 121,
    Color_Type_121 = 122,
    Color_Type_122 = 123,
    Color_Type_123 = 124,
    Color_Type_124 = 125,
    Color_Type_125 = 126,
    Color_Type_126 = 127,
};

enum class ACCCSV_Aux2Anm : int32_t {
    Setting_Unknown = 0,
    Off = 1,
    Animation_Type_1 = 2,
    Animation_Type_2 = 3,
    Animation_Type_3 = 4,
    Animation_Type_4 = 5,
    Animation_Type_5 = 6,
    Animation_Type_6 = 7,
    Animation_Type_7 = 8,
    Animation_Type_8 = 9,
    Animation_Type_9 = 10,
    Animation_Type_10 = 11,
    Animation_Type_11 = 12,
    Animation_Type_12 = 13,
    Animation_Type_13 = 14,
    Animation_Type_14 = 15,
};

enum class ACCCSV_Aux2Brghtns : int32_t {
    Setting_Unknown = 0,
    Brightness_Level_1 = 1,
    Brightness_Level_2 = 2,
    Brightness_Level_3 = 3,
    Brightness_Level_4 = 4,
};

enum class ACCCSV_Aux2Colr : int32_t {
    Setting_Unknown = 0,
    Off = 1,
    Color_Type_1 = 2,
    Color_Type_2 = 3,
    Color_Type_3 = 4,
    Color_Type_4 = 5,
    Color_Type_5 = 6,
    Color_Type_6 = 7,
    Color_Type_7 = 8,
    Color_Type_8 = 9,
    Color_Type_9 = 10,
    Color_Type_10 = 11,
    Color_Type_11 = 12,
    Color_Type_12 = 13,
    Color_Type_13 = 14,
    Color_Type_14 = 15,
    Color_Type_15 = 16,
    Color_Type_16 = 17,
    Color_Type_17 = 18,
    Color_Type_18 = 19,
    Color_Type_19 = 20,
    Color_Type_20 = 21,
    Color_Type_21 = 22,
    Color_Type_22 = 23,
    Color_Type_23 = 24,
    Color_Type_24 = 25,
    Color_Type_25 = 26,
    Color_Type_26 = 27,
    Color_Type_27 = 28,
    Color_Type_28 = 29,
    Color_Type_29 = 30,
    Color_Type_30 = 31,
    Color_Type_31 = 32,
    Color_Type_32 = 33,
    Color_Type_33 = 34,
    Color_Type_34 = 35,
    Color_Type_35 = 36,
    Color_Type_36 = 37,
    Color_Type_37 = 38,
    Color_Type_38 = 39,
    Color_Type_39 = 40,
    Color_Type_40 = 41,
    Color_Type_41 = 42,
    Color_Type_42 = 43,
    Color_Type_43 = 44,
    Color_Type_44 = 45,
    Color_Type_45 = 46,
    Color_Type_46 = 47,
    Color_Type_47 = 48,
    Color_Type_48 = 49,
    Color_Type_49 = 50,
    Color_Type_50 = 51,
    Color_Type_51 = 52,
    Color_Type_52 = 53,
    Color_Type_53 = 54,
    Color_Type_54 = 55,
    Color_Type_55 = 56,
    Color_Type_56 = 57,
    Color_Type_57 = 58,
    Color_Type_58 = 59,
    Color_Type_59 = 60,
    Color_Type_60 = 61,
    Color_Type_61 = 62,
    Color_Type_62 = 63,
    Color_Type_63 = 64,
    Color_Type_64 = 65,
    Color_Type_65 = 66,
    Color_Type_66 = 67,
    Color_Type_67 = 68,
    Color_Type_68 = 69,
    Color_Type_69 = 70,
    Color_Type_70 = 71,
    Color_Type_71 = 72,
    Color_Type_72 = 73,
    Color_Type_73 = 74,
    Color_Type_74 = 75,
    Color_Type_75 = 76,
    Color_Type_76 = 77,
    Color_Type_77 = 78,
    Color_Type_78 = 79,
    Color_Type_79 = 80,
    Color_Type_80 = 81,
    Color_Type_81 = 82,
    Color_Type_82 = 83,
    Color_Type_83 = 84,
    Color_Type_84 = 85,
    Color_Type_85 = 86,
    Color_Type_86 = 87,
    Color_Type_87 = 88,
    Color_Type_88 = 89,
    Color_Type_89 = 90,
    Color_Type_90 = 91,
    Color_Type_91 = 92,
    Color_Type_92 = 93,
    Color_Type_93 = 94,
    Color_Type_94 = 95,
    Color_Type_95 = 96,
    Color_Type_96 = 97,
    Color_Type_97 = 98,
    Color_Type_98 = 99,
    Color_Type_99 = 100,
    Color_Type_100 = 101,
    Color_Type_101 = 102,
    Color_Type_102 = 103,
    Color_Type_103 = 104,
    Color_Type_104 = 105,
    Color_Type_105 = 106,
    Color_Type_106 = 107,
    Color_Type_107 = 108,
    Color_Type_108 = 109,
    Color_Type_109 = 110,
    Color_Type_110 = 111,
    Color_Type_111 = 112,
    Color_Type_112 = 113,
    Color_Type_113 = 114,
    Color_Type_114 = 115,
    Color_Type_115 = 116,
    Color_Type_116 = 117,
    Color_Type_117 = 118,
    Color_Type_118 = 119,
    Color_Type_119 = 120,
    Color_Type_120 = 121,
    Color_Type_121 = 122,
    Color_Type_122 = 123,
    Color_Type_123 = 124,
    Color_Type_124 = 125,
    Color_Type_125 = 126,
    Color_Type_126 = 127,
};

enum class ACCCSV_Aux3Anm : int32_t {
    Setting_Unknown = 0,
    Off = 1,
    Animation_Type_1 = 2,
    Animation_Type_2 = 3,
    Animation_Type_3 = 4,
    Animation_Type_4 = 5,
    Animation_Type_5 = 6,
    Animation_Type_6 = 7,
    Animation_Type_7 = 8,
    Animation_Type_8 = 9,
    Animation_Type_9 = 10,
    Animation_Type_10 = 11,
    Animation_Type_11 = 12,
    Animation_Type_12 = 13,
    Animation_Type_13 = 14,
    Animation_Type_14 = 15,
};

enum class ACCCSV_Aux3Brghtns : int32_t {
    Setting_Unknown = 0,
    Brightness_Level_1 = 1,
    Brightness_Level_2 = 2,
    Brightness_Level_3 = 3,
    Brightness_Level_4 = 4,
};

enum class ACCCSV_Aux3Colr : int32_t {
    Setting_Unknown = 0,
    Off = 1,
    Color_Type_1 = 2,
    Color_Type_2 = 3,
    Color_Type_3 = 4,
    Color_Type_4 = 5,
    Color_Type_5 = 6,
    Color_Type_6 = 7,
    Color_Type_7 = 8,
    Color_Type_8 = 9,
    Color_Type_9 = 10,
    Color_Type_10 = 11,
    Color_Type_11 = 12,
    Color_Type_12 = 13,
    Color_Type_13 = 14,
    Color_Type_14 = 15,
    Color_Type_15 = 16,
    Color_Type_16 = 17,
    Color_Type_17 = 18,
    Color_Type_18 = 19,
    Color_Type_19 = 20,
    Color_Type_20 = 21,
    Color_Type_21 = 22,
    Color_Type_22 = 23,
    Color_Type_23 = 24,
    Color_Type_24 = 25,
    Color_Type_25 = 26,
    Color_Type_26 = 27,
    Color_Type_27 = 28,
    Color_Type_28 = 29,
    Color_Type_29 = 30,
    Color_Type_30 = 31,
    Color_Type_31 = 32,
    Color_Type_32 = 33,
    Color_Type_33 = 34,
    Color_Type_34 = 35,
    Color_Type_35 = 36,
    Color_Type_36 = 37,
    Color_Type_37 = 38,
    Color_Type_38 = 39,
    Color_Type_39 = 40,
    Color_Type_40 = 41,
    Color_Type_41 = 42,
    Color_Type_42 = 43,
    Color_Type_43 = 44,
    Color_Type_44 = 45,
    Color_Type_45 = 46,
    Color_Type_46 = 47,
    Color_Type_47 = 48,
    Color_Type_48 = 49,
    Color_Type_49 = 50,
    Color_Type_50 = 51,
    Color_Type_51 = 52,
    Color_Type_52 = 53,
    Color_Type_53 = 54,
    Color_Type_54 = 55,
    Color_Type_55 = 56,
    Color_Type_56 = 57,
    Color_Type_57 = 58,
    Color_Type_58 = 59,
    Color_Type_59 = 60,
    Color_Type_60 = 61,
    Color_Type_61 = 62,
    Color_Type_62 = 63,
    Color_Type_63 = 64,
    Color_Type_64 = 65,
    Color_Type_65 = 66,
    Color_Type_66 = 67,
    Color_Type_67 = 68,
    Color_Type_68 = 69,
    Color_Type_69 = 70,
    Color_Type_70 = 71,
    Color_Type_71 = 72,
    Color_Type_72 = 73,
    Color_Type_73 = 74,
    Color_Type_74 = 75,
    Color_Type_75 = 76,
    Color_Type_76 = 77,
    Color_Type_77 = 78,
    Color_Type_78 = 79,
    Color_Type_79 = 80,
    Color_Type_80 = 81,
    Color_Type_81 = 82,
    Color_Type_82 = 83,
    Color_Type_83 = 84,
    Color_Type_84 = 85,
    Color_Type_85 = 86,
    Color_Type_86 = 87,
    Color_Type_87 = 88,
    Color_Type_88 = 89,
    Color_Type_89 = 90,
    Color_Type_90 = 91,
    Color_Type_91 = 92,
    Color_Type_92 = 93,
    Color_Type_93 = 94,
    Color_Type_94 = 95,
    Color_Type_95 = 96,
    Color_Type_96 = 97,
    Color_Type_97 = 98,
    Color_Type_98 = 99,
    Color_Type_99 = 100,
    Color_Type_100 = 101,
    Color_Type_101 = 102,
    Color_Type_102 = 103,
    Color_Type_103 = 104,
    Color_Type_104 = 105,
    Color_Type_105 = 106,
    Color_Type_106 = 107,
    Color_Type_107 = 108,
    Color_Type_108 = 109,
    Color_Type_109 = 110,
    Color_Type_110 = 111,
    Color_Type_111 = 112,
    Color_Type_112 = 113,
    Color_Type_113 = 114,
    Color_Type_114 = 115,
    Color_Type_115 = 116,
    Color_Type_116 = 117,
    Color_Type_117 = 118,
    Color_Type_118 = 119,
    Color_Type_119 = 120,
    Color_Type_120 = 121,
    Color_Type_121 = 122,
    Color_Type_122 = 123,
    Color_Type_123 = 124,
    Color_Type_124 = 125,
    Color_Type_125 = 126,
    Color_Type_126 = 127,
};

enum class ACCCSV_IntrAnm : int32_t {
    Setting_Unknown = 0,
    Off = 1,
    Animation_Type_1 = 2,
    Animation_Type_2 = 3,
    Animation_Type_3 = 4,
    Animation_Type_4 = 5,
    Animation_Type_5 = 6,
    Animation_Type_6 = 7,
    Animation_Type_7 = 8,
    Animation_Type_8 = 9,
    Animation_Type_9 = 10,
    Animation_Type_10 = 11,
    Animation_Type_11 = 12,
    Animation_Type_12 = 13,
    Animation_Type_13 = 14,
    Animation_Type_14 = 15,
};

enum class ACCCSV_IntrBrghtns : int32_t {
    Setting_Unknown = 0,
    BrightnessLevel_1 = 1,
    BrightnessLevel_2 = 2,
    BrightnessLevel_3 = 3,
    BrightnessLevel_4 = 4,
    ReservedLevel_5 = 5,
    ReservedLevel_6 = 6,
    ReservedLevel_7 = 7,
};

enum class ACCCSV_IntrColr : int32_t {
    Setting_Unknown = 0,
    Off = 1,
    Color_Type_1 = 2,
    Color_Type_2 = 3,
    Color_Type_3 = 4,
    Color_Type_4 = 5,
    Color_Type_5 = 6,
    Color_Type_6 = 7,
    Color_Type_7 = 8,
    Color_Type_8 = 9,
    Color_Type_9 = 10,
    Color_Type_10 = 11,
    Color_Type_11 = 12,
    Color_Type_12 = 13,
    Color_Type_13 = 14,
    Color_Type_14 = 15,
    Color_Type_15 = 16,
    Color_Type_16 = 17,
    Color_Type_17 = 18,
    Color_Type_18 = 19,
    Color_Type_19 = 20,
    Color_Type_20 = 21,
    Color_Type_21 = 22,
    Color_Type_22 = 23,
    Color_Type_23 = 24,
    Color_Type_24 = 25,
    Color_Type_25 = 26,
    Color_Type_26 = 27,
    Color_Type_27 = 28,
    Color_Type_28 = 29,
    Color_Type_29 = 30,
    Color_Type_30 = 31,
    Color_Type_31 = 32,
    Color_Type_32 = 33,
    Color_Type_33 = 34,
    Color_Type_34 = 35,
    Color_Type_35 = 36,
    Color_Type_36 = 37,
    Color_Type_37 = 38,
    Color_Type_38 = 39,
    Color_Type_39 = 40,
    Color_Type_40 = 41,
    Color_Type_41 = 42,
    Color_Type_42 = 43,
    Color_Type_43 = 44,
    Color_Type_44 = 45,
    Color_Type_45 = 46,
    Color_Type_46 = 47,
    Color_Type_47 = 48,
    Color_Type_48 = 49,
    Color_Type_49 = 50,
    Color_Type_50 = 51,
    Color_Type_51 = 52,
    Color_Type_52 = 53,
    Color_Type_53 = 54,
    Color_Type_54 = 55,
    Color_Type_55 = 56,
    Color_Type_56 = 57,
    Color_Type_57 = 58,
    Color_Type_58 = 59,
    Color_Type_59 = 60,
    Color_Type_60 = 61,
    Color_Type_61 = 62,
    Color_Type_62 = 63,
    Color_Type_63 = 64,
    Color_Type_64 = 65,
    Color_Type_65 = 66,
    Color_Type_66 = 67,
    Color_Type_67 = 68,
    Color_Type_68 = 69,
    Color_Type_69 = 70,
    Color_Type_70 = 71,
    Color_Type_71 = 72,
    Color_Type_72 = 73,
    Color_Type_73 = 74,
    Color_Type_74 = 75,
    Color_Type_75 = 76,
    Color_Type_76 = 77,
    Color_Type_77 = 78,
    Color_Type_78 = 79,
    Color_Type_79 = 80,
    Color_Type_80 = 81,
    Color_Type_81 = 82,
    Color_Type_82 = 83,
    Color_Type_83 = 84,
    Color_Type_84 = 85,
    Color_Type_85 = 86,
    Color_Type_86 = 87,
    Color_Type_87 = 88,
    Color_Type_88 = 89,
    Color_Type_89 = 90,
    Color_Type_90 = 91,
    Color_Type_91 = 92,
    Color_Type_92 = 93,
    Color_Type_93 = 94,
    Color_Type_94 = 95,
    Color_Type_95 = 96,
    Color_Type_96 = 97,
    Color_Type_97 = 98,
    Color_Type_98 = 99,
    Color_Type_99 = 100,
    Color_Type_100 = 101,
    Color_Type_101 = 102,
    Color_Type_102 = 103,
    Color_Type_103 = 104,
    Color_Type_104 = 105,
    Color_Type_105 = 106,
    Color_Type_106 = 107,
    Color_Type_107 = 108,
    Color_Type_108 = 109,
    Color_Type_109 = 110,
    Color_Type_110 = 111,
    Color_Type_111 = 112,
    Color_Type_112 = 113,
    Color_Type_113 = 114,
    Color_Type_114 = 115,
    Color_Type_115 = 116,
    Color_Type_116 = 117,
    Color_Type_117 = 118,
    Color_Type_118 = 119,
    Color_Type_119 = 120,
    Color_Type_120 = 121,
    Color_Type_121 = 122,
    Color_Type_122 = 123,
    Color_Type_123 = 124,
    Color_Type_124 = 125,
    Color_Type_125 = 126,
    Color_Type_126 = 127,
};

enum class ACCGoNtfrChmEvntSt : int32_t {
    NO_ACTION = 0,
    ACTIVE = 1,
};

enum class ACCHdwySttng : int32_t {
    FAR = 0,
    MEDIUM = 1,
    NEAR = 2,
};

enum class ACCSpdLimSgnUnt : int32_t {
    km_h = 0,
    mph = 1,
};

enum class ACCSysSlctdMd : int32_t {
    Cruise_Control_Mode_Switching_Not_Supported = 0,
    Adaptive_Cruise_Control = 1,
    Enhanced_Cruise_Control = 2,
};

enum class ACCompCmnd : int32_t {
    Off = 0,
    On = 1,
};

enum class ACGIP_SrrndVsnRLSModeCmdAuth : int32_t {
    Not_Reporting_Lane_Data = 0,
    Reporting_Lane_Data = 1,
};

enum class ACLvl2ChrgCordLimCstCurrSetReq : int32_t {
    No_Action = 0,
    Reduced_1 = 1,
    Reduced_2 = 2,
    Maximum = 3,
};

enum class ACLvl2ChrgCordLimCstCurrSetResp : int32_t {
    No_Action = 0,
    Reduced_1 = 1,
    Reduced_2 = 2,
    Maximum = 3,
};

enum class ADASAutoRsmChmEvntStat : int32_t {
    No_Action = 0,
    Active = 1,
    Cancel_Chime = 2,
};

enum class ADASIS_NAVILINK_BldUpFlg : int32_t {
    NOT_VALID = 0,
    VALID = 1,
};

enum class ADASIS_NAVILINK_CntrldAccssRd : int32_t {
    ROAD_IS_NOT_CONTROLLED_ACCESS_ROAD = 0,
    ROAD_IS_CONTROLLED_ACCESS_ROAD = 1,
};

enum class ADASIS_NAVILINK_CntryCd : int32_t {
    AD = 0,
    AT = 1,
    BE = 2,
    CZ = 3,
    DK = 4,
    EE = 5,
    FR = 6,
    DE = 7,
    GR = 8,
    HU = 9,
    IE = 10,
    IT = 11,
    BY = 12,
    BG = 13,
    CY = 14,
    MT = 15,
    HR = 16,
    TR = 17,
    RS = 18,
    ME = 19,
    LV = 20,
    LT = 21,
    LU = 22,
    NL = 23,
    NO = 24,
    PL = 25,
    PT = 26,
    UK = 27,
    SK = 28,
    SI = 29,
    ES = 30,
    SE = 31,
    CH = 32,
    RO = 33,
    RU = 34,
    UA = 35,
    BA = 36,
    AL = 37,
    MD = 38,
    IS = 39,
    MK = 40,
    US = 41,
    ZA = 42,
    AU = 43,
    NZ = 44,
    KR = 45,
    CN = 46,
    CA = 47,
    MX = 48,
    FI = 49,
    OTHER = 50,
    UNKNOWN = 51,
};

enum class ADASIS_NAVILINK_DgMpCnSpdLmTyp : int32_t {
    LANE_DEPENDENT = 0,
    ONLY_BY_FOG = 1,
    ONLY_BY_NIGHT = 2,
    ONLY_BY_DAY = 3,
    BY_TIME_OF_DAY = 4,
    ONLY_BY_RAIN = 5,
    ONLY_BY_SNOW = 6,
    UNKNOWN = 7,
};

enum class ADASIS_NAVILINK_DgtlMpEfSpdLm : int32_t {
    UNKNOWN = 0,
    Underscore_5_KM_H_MPH_ = 1,
    Num7_KM_H_MPH_ = 2,
    Num10_KM_H_MPH_ = 3,
    Num15_KM_H_MPH_ = 4,
    Num20_KM_H_MPH_ = 5,
    Num25_KM_H_MPH_ = 6,
    Num30_KM_H_MPH_ = 7,
    Num35_KM_H_MPH_ = 8,
    Num40_KM_H_MPH_ = 9,
    Num45_KM_H_MPH_ = 10,
    Num50_KM_H_MPH_ = 11,
    Num55_KM_H_MPH_ = 12,
    Num60_KM_H = 13,
    MPH_65_KM_H_MPH_ = 14,
    Num70_KM_H_MPH_ = 15,
    Num75_KM_H_MPH_ = 16,
    Num80_KM_H_MPH_ = 17,
    Num85_KM_H_MPH_ = 18,
    Num90_KM_H_MPH_ = 19,
    Num95_KM_H_MPH_ = 20,
    Num100_KM_H_MPH_ = 21,
    Num105_KM_H_MPH_ = 22,
    Num110_KM_H_MPH_ = 23,
    Num115_KM_H_MPH_ = 24,
    Num120_KM_H_MPH_ = 25,
    Num130_KM_H_MPH_ = 26,
    Num140_KM_H_MPH_ = 27,
    Num150_KM_H_MPH_ = 28,
    Num160_KM_H_MPH_ = 29,
    UNLIMITED = 30,
    NOT_AVAILABLE = 31,
};

enum class ADASIS_NAVILINK_DgtlMpPsngRst : int32_t {
    NO_PASSING_RESTRICTIONS = 0,
    GENERAL_NO_OVERTAKE = 1,
    FLUCTUATING_E_G_LED_SIGNS_ = 2,
    CONDITIONAL_PASSENGER_CAR_WITH_TRAILER = 3,
    CONDITIONAL_TRACTORS_ARE_ALLOWED_TO_OVERTAKE = 4,
    CONDITIONAL_WHEN_WET = 5,
    CONDITIONAL_WHEN_SNOW = 6,
    UNKNOWN_CONDITION = 7,
};

enum class ADASIS_NAVILINK_DgtlMpSpdCtgry : int32_t {
    Underscore_130_KPH_OR_80_MPH = 0,
    Num101_130_KPH_OR_65_80_MPH = 1,
    Num91_100_KPH_OR_55_64_MPH = 2,
    Num71_90_KPH_OR_41_54_MPH = 3,
    Num51_70_KPH_OR_31_40_MPH = 4,
    Num31_50_KPH_OR_21_30_MPH = 5,
    Num11_30_KPH_OR_6_20_MPH = 6,
    Underscore_11_KPH_OR_6_MPH = 7,
    UNKNOWN = 8,
};

enum class ADASIS_NAVILINK_DigMpCndlSpdLmt : int32_t {
    UNKNOWN = 0,
    Underscore_5_KM_H_MPH_ = 1,
    Num7_KM_H_MPH_ = 2,
    Num10_KM_H_MPH_ = 3,
    Num15_KM_H_MPH_ = 4,
    Num20_KM_H_MPH_ = 5,
    Num25_KM_H_MPH_ = 6,
    Num30_KM_H_MPH_ = 7,
    Num35_KM_H_MPH_ = 8,
    Num40_KM_H_MPH_ = 9,
    Num45_KM_H_MPH_ = 10,
    Num50_KM_H_MPH_ = 11,
    Num55_KM_H_MPH_ = 12,
    Num60_KM_H = 13,
    MPH_65_KM_H_MPH_ = 14,
    Num70_KM_H_MPH_ = 15,
    Num75_KM_H_MPH_ = 16,
    Num80_KM_H_MPH_ = 17,
    Num85_KM_H_MPH_ = 18,
    Num90_KM_H_MPH_ = 19,
    Num95_KM_H_MPH_ = 20,
    Num100_KM_H_MPH_ = 21,
    Num105_KM_H_MPH_ = 22,
    Num110_KM_H_MPH_ = 23,
    Num115_KM_H_MPH_ = 24,
    Num120_KM_H_MPH_ = 25,
    Num130_KM_H_MPH_ = 26,
    Num140_KM_H_MPH_ = 27,
    Num150_KM_H_MPH_ = 28,
    Num160_KM_H_MPH_ = 29,
    UNLIMITED = 30,
    NOT_AVAILABLE = 31,
};

enum class ADASIS_NAVILINK_DigMpDrvngSd : int32_t {
    DRIVING_SIDE_LEFT = 0,
    DRIVING_SIDE_RIGHT = 1,
};

enum class ADASIS_NAVILINK_DigMpEfSpdLmTyp : int32_t {
    IMPLICIT = 0,
    ON_TRAFFIC_SIGN = 1,
    ONLY_BY_NIGHT = 2,
    ONLY_BY_DAY = 3,
    TIME_OF_DAY = 4,
    ONLY_BY_RAIN = 5,
    ONLY_BY_SNOW_OR_FOG = 6,
    UNKOWN = 7,
};

enum class ADASIS_NAVILINK_DigMpPstSpdLmAs : int32_t {
    NOT_ASSURED = 0,
    ASSURED = 1,
};

enum class ADASIS_NAVILINK_DigMpVerQtr : int32_t {
    QUARTER_1 = 0,
    QUARTER_2 = 1,
    QUARTER_3 = 2,
    QUARTER_4 = 3,
};

enum class ADASIS_NAVILINK_DigMpVerYr : int32_t {
    Num2000 = 0,
    Num2001 = 1,
    Num2002 = 2,
    Num2003 = 3,
    Num2004 = 4,
    Num2005 = 5,
    Num2006 = 6,
    Num2007 = 7,
    Num2008 = 8,
    Num2009 = 9,
    Num2010 = 10,
    Num2011 = 11,
    Num2012 = 12,
    Num2013 = 13,
    Num2014 = 14,
    Num2015 = 15,
    Num2016 = 16,
    Num2017 = 17,
    Num2018 = 18,
    Num2019 = 19,
    Num2020 = 20,
    Num2021 = 21,
    Num2022 = 22,
    Num2023 = 23,
    Num2024 = 24,
    Num2025 = 25,
    Num2026 = 26,
    Num2027 = 27,
    Num2028 = 28,
    Num2029 = 29,
    Num2030 = 30,
    Num2031 = 31,
    Num2032 = 32,
    Num2033 = 33,
    Num2034 = 34,
    Num2035 = 35,
    Num2036 = 36,
    Num2037 = 37,
    Num2038 = 38,
    Num2039 = 39,
    Num2040 = 40,
    Num2041 = 41,
    Num2042 = 42,
    Num2043 = 43,
    Num2044 = 44,
    Num2045 = 45,
    Num2046 = 46,
    Num2047 = 47,
    Num2048 = 48,
    Num2049 = 49,
    Num2050 = 50,
    Num2051 = 51,
    Num2052 = 52,
    Num2053 = 53,
    Num2054 = 54,
    Num2055 = 55,
    Num2056 = 56,
    Num2057 = 57,
    Num2058 = 58,
    Num2059 = 59,
    Num2060 = 60,
    Num2061 = 61,
    Num2062 = 62,
    NOT_APPLICABLE = 63,
};

enum class ADASIS_NAVILINK_FncRdClss : int32_t {
    LOCAL = 0,
    SFREEWAY = 1,
    FREEWAY = 2,
    PED_MALL = 3,
    HIGHWAY = 4,
    ARTERIAL = 5,
    ALLEY = 6,
    COLLECTOR = 7,
};

enum class ADASIS_NAVILINK_LnCtgry : int32_t {
    NO_INFO_AVAILABLE = 0,
    ONE_LANE = 1,
    TWO_OR_THREE_LANES = 2,
    FOUR_OR_MORE_LANES = 3,
};

enum class ADASIS_NAVILINK_MpDtAv : int32_t {
    NOT_VALID = 0,
    VALID = 1,
};

enum class ADASIS_NAVILINK_SpdLmtUnt : int32_t {
    MILES_H = 0,
    KM_H = 1,
};

enum class ADASIS_NAVILINK_SprtdLnRd : int32_t {
    ROAD_IS_NOT_CONTROLLED_ACCESS_ROAD = 0,
    ROAD_IS_CONTROLLED_ACCESS_ROAD = 1,
};

enum class ADASLtdCpbltyStatIndReq : int32_t {
    No_Indication = 0,
    Map_Route_Not_Available = 1,
    Low_Velocity_Maneuvers_Not_Available = 2,
    Drive_Straight_Only = 3,
    Highway_Only = 4,
    Longitudinal_Override = 5,
    Lateral_Override = 6,
    Full_Capability = 7,
    Reserved_8 = 8,
    Reserved_9 = 9,
    Reserved_10 = 10,
    Reserved_11 = 11,
    Reserved_12 = 12,
    Reserved_13 = 13,
    Reserved_14 = 14,
    Reserved_15 = 15,
};

enum class ADASLtdCpbltyStatRsnIndReq : int32_t {
    No_Indication = 0,
    No_Communication_to_Navigation = 1,
    No_Route_Entered = 2,
    Sensor_Blocked = 3,
    Sensor_Failed = 4,
    Sensor_Unavailable = 5,
    Camera_Blocked = 6,
    Camera_Failed = 7,
    Camera_Unavailable = 8,
    Turn_Signal_Failure = 9,
    Driver_Has_Taken_Control = 10,
    Trailer_Connected = 11,
};

enum class ADASMsgDispLocLtdPerfRsnInd : int32_t {
    None = 0,
    Cluster_Display = 1,
    Center_Stack_Display = 2,
    Both = 3,
};

enum class ADASMsgDispLocLtdPerfStatInd : int32_t {
    None = 0,
    Cluster_Display = 1,
    Center_Stack_Display = 2,
    Both = 3,
};

enum class ADASMsgDispLocNonActvInd : int32_t {
    None = 0,
    Cluster_Display = 1,
    Center_Stack_Display = 2,
    Both = 3,
};

enum class ADASSetSpdIndReq : int32_t {
    Indication_Off = 0,
    White_Indicator = 1,
    Green_Indicator = 2,
    Yellow_Indicator = 3,
    Red_Indicator = 4,
    Blue_Indicator = 5,
};

enum class ADASTrmLvlInd : int32_t {
    None = 0,
    Super = 1,
    Ultra = 2,
};

enum class ADASXferOfCtlIndReq : int32_t {
    No_Indication = 0,
    Long_Auto_Resume = 1,
    Driver_Initiated_Motion_Required = 2,
    Driver_Initiated_Steering_Required = 3,
    Non_Urgent = 4,
    Urgent = 5,
    Non_Responsive_Driver = 6,
    Non_Urgent_Follow_Route = 7,
};

enum class APABkBtnSts : int32_t {
    No_Request = 0,
    Back_Request = 1,
};

enum class APACR_CmpltChmEvntStat : int32_t {
    NO_ACTION = 0,
    ACTIVE = 1,
    CANCEL_CHIME = 2,
};

enum class APACR_CncldChmEvntStat : int32_t {
    NO_ACTION = 0,
    ACTIVE = 1,
    CANCEL_CHIME = 2,
};

enum class APACR_FaildChmEvntStat : int32_t {
    NO_ACTION = 0,
    ACTIVE = 1,
    CANCEL_CHIME = 2,
};

enum class APACR_SptFndChmEvntStat : int32_t {
    NO_ACTION = 0,
    ACTIVE = 1,
    CANCEL_CHIME = 2,
};

enum class APACR_StopChmEvntStat : int32_t {
    NO_ACTION = 0,
    ACTIVE = 1,
    CANCEL_CHIME = 2,
};

enum class APACrsBkInSftBtnReq : int32_t {
    Hidden = 0,
    Disabled = 1,
    Enabled = 2,
    Highlighted = 3,
};

enum class APACrsBkInSftBtnSts : int32_t {
    Not_Pressed = 0,
    Pressed = 1,
};

enum class APACrsFrtInSftBtnReq : int32_t {
    Hidden = 0,
    Disabled = 1,
    Enabled = 2,
    Highlighted = 3,
};

enum class APACrssBckInSftBtnRqst : int32_t {
    HIDDEN = 0,
    DISABLED = 1,
    ENABLED = 2,
    HIGHLIGHTED = 3,
};

enum class APACrssBckInSftBtnStat : int32_t {
    NOT_PRESSED = 0,
    PRESSED = 1,
};

enum class APACrssFrntInSftBtnRqst : int32_t {
    HIDDEN = 0,
    DISABLED = 1,
    ENABLED = 2,
    HIGHLIGHTED = 3,
};

enum class APACrssFrntInSftBtnStat : int32_t {
    Not_Pressed = 0,
    Pressed = 1,
};

enum class APAExplrModeSftBtnReq : int32_t {
    Hidden = 0,
    Disabled = 1,
    Enabled = 2,
    Highlighted = 3,
};

enum class APAExtPrkSftBtnReq : int32_t {
    Hidden = 0,
    Disabled = 1,
    Enabled = 2,
    Highlighted = 3,
};

enum class APAExtPrkSftBtnRqst : int32_t {
    HIDDEN = 0,
    DISABLED = 1,
    ENABLED = 2,
    HIGHLIGHTED = 3,
};

enum class APAExtPrkSftBtnStat : int32_t {
    NOT_PRESSED = 0,
    PRESSED = 1,
};

enum class APAExtPrkSftBtnSts : int32_t {
    Not_Pressed = 0,
    Pressed = 1,
};

enum class APAFcStatCSM : int32_t {
    NO_FOCUS = 0,
    FOCUS = 1,
};

enum class APAFcStatIPC : int32_t {
    NO_FOCUS = 0,
    FOCUS = 1,
};

enum class APALftSftBtnRqst : int32_t {
    HIDDEN = 0,
    DISABLED = 1,
    ENABLED = 2,
    HIGHLIGHTED = 3,
};

enum class APALftSftBtnStat : int32_t {
    NOT_PRESSED = 0,
    PRESSED = 1,
};

enum class APALftSftBtnStatIPC : int32_t {
    NOT_PRESSED = 0,
    PRESSED = 1,
};

enum class APALtSftBtnReq : int32_t {
    Hidden = 0,
    Disabled = 1,
    Enabled = 2,
    Highlighted = 3,
};

enum class APALtSftBtnSts : int32_t {
    Not_Pressed = 0,
    Pressed = 1,
};

enum class APALtSftBtnStsIPC : int32_t {
    Not_Pressed = 0,
    Pressed = 1,
};

enum class APAParallelPrkSftBtnSts : int32_t {
    Not_Pressed = 0,
    Pressed = 1,
};

enum class APAPrllPrkSftBtnReq : int32_t {
    Hidden = 0,
    Disabled = 1,
    Enabled = 2,
    Highlighted = 3,
};

enum class APAPrllPrkSftBtnRqst : int32_t {
    HIDDEN = 0,
    DISABLED = 1,
    ENABLED = 2,
    HIGHLIGHTED = 3,
};

enum class APAPrllPrkSftBtnStat : int32_t {
    NOT_PRESSED = 0,
    PRESSED = 1,
};

enum class APARghtSftBtnRqst : int32_t {
    HIDDEN = 0,
    DISABLED = 1,
    ENABLED = 2,
    HIGHLIGHTED = 3,
};

enum class APARghtSftBtnStat : int32_t {
    NOT_PRESSED = 0,
    PRESSED = 1,
};

enum class APARghtSftBtnStatIPC : int32_t {
    NOT_PRESSED = 0,
    PRESSED = 1,
};

enum class APARtSftBtnReq : int32_t {
    Hidden = 0,
    Disabled = 1,
    Enabled = 2,
    Highlighted = 3,
};

enum class APARtSftBtnSts : int32_t {
    Not_Pressed = 0,
    Pressed = 1,
};

enum class APARtSftBtnStsIPC : int32_t {
    Not_Pressed = 0,
    Pressed = 1,
};

enum class APASftBtnSeltdStatRw : int32_t {
    Not_Pressed = 0,
    Pressed = 1,
    Unknown = 2,
    Failed = 3,
};

enum class APASrchSftBtnRqst : int32_t {
    HIDDEN = 0,
    DISABLED = 1,
    ENABLED = 2,
    HIGHLIGHTED = 3,
};

enum class APASrchSftBtnStat : int32_t {
    NOT_PRESSED = 0,
    PRESSED = 1,
};

enum class APASrchingSftBtnReq : int32_t {
    Hidden = 0,
    Disabled = 1,
    Enabled = 2,
    Highlighted = 3,
};

enum class APASrchingSftBtnSts : int32_t {
    Not_Pressed = 0,
    Pressed = 1,
};

enum class APASuprPrkSts : int32_t {
    No_Request = 0,
    In_Vehicle_Request = 1,
    Supervised_Request = 2,
};

enum class APAWI_AutoStrgIconReq : int32_t {
    NO_ICON = 0,
    ACTIVE = 1,
    DEACTIVATED = 2,
};

enum class APAWI_FcsReq : int32_t {
    NO_REQUEST = 0,
    FOCUS_REQUEST_IPC = 1,
    FOCUS_REQUEST_CSM = 2,
};

enum class APAWI_WrnIndReq : int32_t {
    OFF = 0,
    SEARCHING_PARALLEL_RIGHT = 1,
    SEARCHING_PARALLEL_LEFT = 2,
    SEARCHING_CROSS_RIGHT = 3,
    SEARCHING_CROSS_LEFT = 4,
    SPOT_FOUND = 5,
    SPOT_FOUND_PARALLEL_LEFT = 6,
    SPOT_FOUND_CROSS_LEFT = 7,
    SPOT_FOUND_PARALLEL_RIGHT = 8,
    SPOT_FOUND_CROSS_RIGHT = 9,
    MOVE_AHEAD = 10,
    MOVE_AHEAD_PARALLEL_LEFT = 11,
    MOVE_AHEAD_CROSS_LEFT = 12,
    MOVE_AHEAD_PARALLEL_RIGHT = 13,
    MOVE_AHEAD_CROSS_RIGHT = 14,
    STOP_AND_R_PARALLEL_LEFT = 15,
    STOP_AND_R_CROSS_BACK_LEFT = 16,
    STOP_AND_R_CROSS_FRONT_LEFT = 17,
    STOP_AND_R_PARALLEL_RIGHT = 18,
    STOP_AND_R_CROSS_BACK_RIGHT = 19,
    STOP_AND_R_CROSS_FRONT_RIGHT = 20,
    SEARCH_SPEED_WARNING = 21,
    SEARCH_DEACTIVATED = 22,
    EXIT_PARK_TO_LEFT = 23,
    EXIT_PARK_TO_RIGHT = 24,
    SELECT_DRIVE_GEAR = 25,
    AUTO_STEERING_ACTIVE = 26,
    AUTO_PARKING_ACTIVE = 27,
    DRIVE_BACKWARD = 28,
    BACKWARD_MOVE = 29,
    DRIVE_FORWARD = 30,
    FORWARD_MOVE = 31,
    STOP = 32,
    SHIFTING = 33,
    POSITION_REACHED = 34,
    TAKE_CONTROL = 35,
    PARKING_COMPLETE = 36,
    EXIT_PARK_COMPLETE = 37,
    DEACTIVATED = 38,
    CANCELED_GENERAL = 39,
    CANCELED_MOVES = 40,
    CANCELED_SPEED = 41,
    CANCELED_INTERFERENCE = 42,
    CANCELED_EXIT_PARK = 43,
    STOPPING = 44,
    AUTO_PARKING_COMPLETE = 45,
    RELEASE_BRAKE = 46,
    IN_VEHICLE_OR_REMOTE = 47,
    REMOTE_STAY_ALERT = 48,
    REMOTE_CONNECTING = 49,
    REMOTE_CANNOT_CONNECT = 50,
    REMOTE_NO_DEVICE = 51,
    REMOTE_SHIFT_TO_PARK = 52,
    REMOTE_RETRY = 53,
    REMOTE_CANCELED_RANGE = 54,
    REMOTE_CANCELED_SUPERVISION = 55,
    REMOTE_CANCELED_CONNECTION = 56,
    REMOTE_PAUSED_RANGE = 57,
    REMOTE_PAUSED_SUPERVISION = 58,
    REMOTE_PAUSED_CONNECTION = 59,
};

enum class ASDRP_LnCntrCtlIndReqAuth : int32_t {
    Indication_Off = 0,
    White_Indicator = 1,
    Green_Indicator = 2,
    Yellow_Indicator = 3,
    Red_Indicator = 4,
    Blue_Indicator = 5,
};

enum class ASDRP_LnCntrWrnExtdIndReqAuth : int32_t {
    No_Indication = 0,
    Can_Not_See_Lanes = 1,
    Tight_Curve = 2,
    Freeway_Ends = 3,
    Construction = 4,
    Excessive_Speed = 5,
    Vehicles_Proximity = 6,
    Unavailable = 7,
    Attention_Unknown = 8,
    Due_to_Weather = 9,
    Take_Steering = 10,
    Take_Vehicle_Control = 11,
    Service_Driver_Assist_System = 12,
    Lane_Following_Locked_Out = 13,
    Reserved_1 = 14,
    Lane_Ending = 15,
    Exit_Lane = 16,
    GM_Authority = 17,
    Vehicle_Setting = 18,
    Adaptive_Cruise = 19,
    Controlled_Access = 20,
    Driver_Attention_Off_Road = 21,
    GPS_Unavailable = 22,
    Driver_Action = 23,
    Vehicle_Center = 24,
    Sensor_Impaired = 25,
    Opening_Left = 26,
    Opening_Right = 27,
    Changing_Left = 28,
    Changing_Right = 29,
    Complete_Left = 30,
    Complete_Right = 31,
    Unable_Left = 32,
    Unable_Right = 33,
    Cancelled_Left = 34,
    Cancelled_Right = 35,
    Timed_Out_Left = 36,
    Timed_Out_Right = 37,
    Trailer_Narrow_Lane = 38,
    Trailer_Dimensions = 39,
    Trailer_Braking = 40,
    Trailer_Overloaded = 41,
    Trailer_Stability = 42,
    Subscription_Required = 43,
    Roundabout = 44,
    Dirt_Road = 45,
    Parking_Lot = 46,
    Refer_to_Ultra_Cruise_App = 47,
    GM_Backoffice_Disabled = 48,
    APA_Active = 49,
    Seatbelt_Not_Fastened = 50,
    Teen_Driver_Active = 51,
    Toll_Booth_Ahead = 52,
    End_of_Route = 53,
    End_of_Route_Approaching = 54,
    Toll_Booth_Approaching = 55,
    Ride_Height_Out_of_Range = 56,
    Snow_Mode = 57,
    Road_Geometry_Not_Supported = 58,
    No_Lead_Vehicle = 59,
    Approaching_Speed_Threshold = 60,
    Driver_Follow_Route_Escalation = 61,
    Change_Lane_Route_Right = 62,
    Change_Lane_Route_Left = 63,
};

enum class ASTC_ChimSnkSpkrPos : int32_t {
    NO_ACTION = 0,
    FULL_FRONT = 1,
    FULL_REAR = 2,
    FULL_LEFT = 3,
    FULL_RIGHT = 4,
    RIGHT_FRONT = 5,
    RIGHT_REAR = 6,
    LEFT_FRONT = 7,
    LEFT_REAR = 8,
    RESERVED_1 = 9,
    RESERVED_2 = 10,
    RESERVED_3 = 11,
    RESERVED_4 = 12,
    RESERVED_5 = 13,
    RESERVED_6 = 14,
    RESERVED_7 = 15,
};

enum class ASTC_DSPMd : int32_t {
    NO_ACTION = 0,
    DSP_MODE_0 = 1,
    DSP_MODE_1 = 2,
    DSP_MODE_2 = 3,
    DSP_MODE_3 = 4,
    DSP_MODE_4 = 5,
    DSP_MODE_5 = 6,
    DSP_MODE_6 = 7,
    DSP_MODE_7 = 8,
    RESERVED_1 = 9,
    RESERVED_2 = 10,
    RESERVED_3 = 11,
    RESERVED_4 = 12,
    RESERVED_5 = 13,
    RESERVED_6 = 14,
    RESERVED_7 = 15,
};

enum class ActvRollCtlFrtWrnIndReq : int32_t {
    No_Indication = 0,
    No_Impact_Derating = 1,
    Service = 2,
};

enum class ActvRollCtlRrWrnIndReq : int32_t {
    No_Indication = 0,
    No_Impact_Derating = 1,
    Service = 2,
};

enum class ActvRrSplrVirtCtlAval : int32_t {
    Not_Available = 0,
    Available = 1,
};

enum class ActvRrSplrVirtCtlCurrSeltnVal : int32_t {
    Unknown = 0,
    No_Indication = 1,
    Stowed = 2,
    Stowing = 3,
    Deployed = 4,
    Deploying = 5,
    Obstruction_Detected = 6,
};

enum class ActvRrSplrVirtCtlReq : int32_t {
    No_Action = 0,
    Stow = 1,
    Deploy = 2,
};

enum class ActvRrSplrVirtUserCtlAllwd : int32_t {
    Allowed = 0,
    Not_Allowed = 1,
};

enum class ActvRrSplrWrnIndReq : int32_t {
    No_Indication = 0,
    Obstruction = 1,
    Temporarily_Disabled = 2,
    Service = 3,
};

enum class AdpAndCnvntlCruzCtlIndReq : int32_t {
    No_Action = 0,
    Cruise_Control_and_Adaptive_Cruise_Control_Telltale_Off = 1,
    Cruise_Control_Unavailable_Telltale_On = 2,
    Cruise_Control_White_Telltale_On = 3,
    Cruise_Control_Green_Telltale_On = 4,
    Cruise_Control_Blue_Telltale_On = 5,
    Adaptive_Cruise_Control_Unavailable_Telltale_On = 6,
    Adaptive_Cruise_Control_White_Telltale_On = 7,
    Adaptive_Cruise_Control_Green_Telltale_On = 8,
    Adaptive_Cruise_Control_Blue_Telltale_On = 9,
};

enum class AdpLghtRspTypCstChgSetReq : int32_t {
    NO_ACTION = 0,
    OFF = 1,
    CORNER_AND_CURVE_LIGHTING = 2,
    INTELLIGENT_LIGHT_DISTRIBUTION = 3,
    INTELLIGENT_LIGHT_DISTRIBUTION_GPS_ASSISTANCE = 4,
    RESERVED_5 = 5,
    RESERVED_6 = 6,
    RESERVED_7 = 7,
};

enum class AdpLghtRspTypCstCurSetVal : int32_t {
    SETTING_UNKNOWN = 0,
    OFF = 1,
    CORNER_AND_CURVE_LIGHTING = 2,
    INTELLIGENT_LIGHT_DISTRIBUTION = 3,
    INTELLIGENT_LIGHT_DISTRIBUTION_GPS_ASSISTANCE = 4,
    RESERVED_5 = 5,
    RESERVED_6 = 6,
    RESERVED_7 = 7,
};

enum class AdvdFrtLgtSysIndReq : int32_t {
    NO_INDICATION = 0,
    FAILURE_INDICATION = 1,
    TOURIST_MODE_SETTING_CHANGED = 2,
    TOURIST_MODE_REMINDER = 3,
};

enum class AirDflctrIndReq : int32_t {
    Off = 0,
    Service = 1,
    Stuck = 2,
};

enum class AirQltySensCstChgSetReq : int32_t {
    NO_ACTION = 0,
    OFF = 1,
    LOW_SENSITIVITY = 2,
    HI_SENSITIVITY = 3,
    RESERVED_4 = 4,
    RESERVED_5 = 5,
    RESERVED_6 = 6,
    RESERVED_7 = 7,
};

enum class AirQltySnsCstCrStVal : int32_t {
    SETTING_UNKNOWN = 0,
    OFF = 1,
    LOW_SENSITIVITY = 2,
    HI_SENSITIVITY = 3,
    RESERVED_1 = 4,
    RESERVED_2 = 5,
    RESERVED_3 = 6,
    RESERVED_4 = 7,
};

enum class AirbgStsIndReq : int32_t {
    OFF = 0,
    ON = 1,
    Num0_5_Hz = 2,
    Num1_Hz = 3,
    Num2_Hz = 4,
    Num4_Hz = 5,
    RESERVED_1 = 6,
    RESERVED_2 = 7,
};

enum class AmbtLgtGblPrxmtyEnCstChgSetReq : int32_t {
    No_Action = 0,
    Enable = 1,
    Disable = 2,
};

enum class AmbtLgtGblPrxmtyEnCstCurrSetVal : int32_t {
    Setting_Unknown = 0,
    Enable = 1,
    Disable = 2,
};

enum class AmpCallAudPlybkSOH : int32_t {
    Unknown = 0,
    Healthy = 1,
    Faulted = 2,
};

enum class AmpSOHAEDSPModeCurrStat : int32_t {
    No_Action = 0,
    DSP_Mode_0 = 1,
    DSP_Mode_1 = 2,
    DSP_Mode_2 = 3,
    DSP_Mode_3 = 4,
    DSP_Mode_4 = 5,
    DSP_Mode_5 = 6,
    DSP_Mode_6 = 7,
    DSP_Mode_7 = 8,
};

enum class AmpSOHALMutCaus : int32_t {
    Unknown = 0,
    CAN_Requested = 1,
    DSP_Mode_Changed = 2,
    Other_Internal = 3,
};

enum class AnmlWrnIndReq : int32_t {
    Off = 0,
    Animal_Advisory = 1,
    Animal_Alert = 2,
};

enum class AntDvMtgnVirtCtlAllwd : int32_t {
    Not_Allowed = 0,
    Allowed = 1,
    Failed = 2,
};

enum class AntDvMtgnVirtCtlAval : int32_t {
    Not_Available = 0,
    Available = 1,
};

enum class AntDvMtgnVirtCtlReq : int32_t {
    No_Request = 0,
    Anti_Dive_Disabled = 1,
    Anti_Dive_Enabled = 2,
};

enum class AntDvMtgnVirtCtlSts : int32_t {
    Unknown = 0,
    Enabled = 1,
    Disabled = 2,
};

enum class ArflBsdOnOccpFrtPsCstChgSetReq : int32_t {
    No_Action = 0,
    Off = 1,
    On = 2,
};

enum class ArflBsdOnOccpFrtPsCstCurrSetVal : int32_t {
    Setting_Unknown = 0,
    Off = 1,
    On = 2,
};

enum class ArflBsdOnOccpRrPsCstChgSetReq : int32_t {
    No_Action = 0,
    Off = 1,
    On = 2,
};

enum class ArflBsdOnOccpRrPsCstCurrSetVal : int32_t {
    Setting_Unknown = 0,
    Off = 1,
    On = 2,
};

enum class ArtcldRnngBrdSt : int32_t {
    No_Action = 0,
    Resume_Normal_Operation = 1,
    Running_Boards_Deployed = 2,
    Running_Boards_Stowed = 3,
    Running_Boards_Cargo_Access = 4,
    Running_Boards_Inhibited = 5,
    Running_Boards_Could_Not_Extend = 6,
};

enum class AslpDrvrCstChgSetReq : int32_t {
    NO_ACTION = 0,
    OFF = 1,
    ON = 2,
    RESERVED_3 = 3,
    RESERVED_4 = 4,
    RESERVED_5 = 5,
    RESERVED_6 = 6,
    RESERVED_7 = 7,
};

enum class AslpDrvrCstCurrSetVal : int32_t {
    SETTING_UNKNOWN = 0,
    OFF = 1,
    ON = 2,
    RESERVED_3 = 3,
    RESERVED_4 = 4,
    RESERVED_5 = 5,
    RESERVED_6 = 6,
    RESERVED_7 = 7,
};

enum class AtTrnsGrSftDrct : int32_t {
    No_Shift_in_Progress = 0,
    Upshift_in_Progress = 1,
    Downshift_in_Progress = 2,
};

enum class AudSeltdSrcReq : int32_t {
    No_Action = 0,
    AM = 1,
    FM = 2,
    XM = 3,
    DAB = 4,
    MediaPlayer = 5,
    IPOD = 6,
    Bluetooth = 7,
    AUX = 8,
    Audio_Disk_Player = 9,
    LVM_Stereo_Audio = 10,
    Internet_App_Audio = 11,
    RSI_1 = 12,
    RSI_2 = 13,
    RadioSourceReserve14 = 14,
    RadioSourceReserve15 = 15,
    RadioSourceReserve16 = 16,
    RadioSourceReserve17 = 17,
    RadioSourceReserve18 = 18,
    RadioSourceReserve19 = 19,
    RadioSourceReserve20 = 20,
    RadioSourceReserve21 = 21,
    RadioSourceReserve22 = 22,
    RadioSourceReserve23 = 23,
    RadioSourceReserve24 = 24,
    RadioSourceReserve25 = 25,
    RadioSourceReserve26 = 26,
    RadioSourceReserve27 = 27,
    RadioSourceReserve29 = 28,
    RadioSourceReserve30 = 29,
    RadioSourceReserve31 = 30,
};

enum class AutDrvLckCstChgSetReq : int32_t {
    NO_ACTION = 0,
    OFF = 1,
    ON = 2,
    RESERVED_3 = 3,
    RESERVED_4 = 4,
    RESERVED_5 = 5,
    RESERVED_6 = 6,
    RESERVED_7 = 7,
};

enum class AutDrvLckCstCurSetVal : int32_t {
    SETTING_UNKNOWN = 0,
    OFF = 1,
    ON = 2,
    RESERVED_3 = 3,
    RESERVED_4 = 4,
    RESERVED_5 = 5,
    RESERVED_6 = 6,
    RESERVED_7 = 7,
};

enum class AutMemRclCstCurSetVal : int32_t {
    SETTING_UNKNOWN = 0,
    OFF = 1,
    ON = 2,
    AUTO_MEMORY_RECALL = 3,
    EASY_EXIT = 4,
    AUTO_MEMORY_AND_EASY_EXIT_RECALLS = 5,
    RESERVED_7 = 6,
};

enum class AutMirFldCstCurSetVal : int32_t {
    SETTING_UNKNOWN = 0,
    Off = 1,
    On = 2,
    RESERVED_3 = 3,
    RESERVED_4 = 4,
    RESERVED_5 = 5,
    RESERVED_6 = 6,
    RESERVED_7 = 7,
};

enum class AutUnlckCstChgSetReq : int32_t {
    NO_ACTION = 0,
    OFF = 1,
    ALL_DOORS = 2,
    DRIVER_DOOR = 3,
    RESERVED_4 = 4,
    RESERVED_5 = 5,
    RESERVED_6 = 6,
    RESERVED_7 = 7,
};

enum class AutUnlckCstCurSetVal : int32_t {
    NO_ACTION = 0,
    OFF = 1,
    ALL_DOORS = 2,
    DRIVER_DOOR = 3,
    RESERVED_4 = 4,
    RESERVED_5 = 5,
    RESERVED_6 = 6,
    RESERVED_7 = 7,
};

enum class AuthIntrUserIdDevSts : int32_t {
    Idle = 0,
    Auth_In_Process = 1,
    Auth_In_Process_Single_Authenticated = 2,
    Auth_Complete_Not_Authenticated = 3,
    Auth_Complete_Authenticated = 4,
    Auth_Complete_Undetermined = 5,
};

enum class AutoAirDstCstChgSetReq : int32_t {
    NO_ACTION = 0,
    DIFFUSE_AIRFLOW = 1,
    NORMAL = 2,
    DIRECT_AIRFLOW = 3,
    OSCILLATING_AIRFLOW = 4,
    RESERVED_5 = 5,
    RESERVED_6 = 6,
    RESERVED_7 = 7,
};

enum class AutoAirDstCstCrStVal : int32_t {
    SETTING_UNKNOWN = 0,
    DIFFUSE_AIRFLOW = 1,
    NORMAL = 2,
    DIRECT_AIRFLOW = 3,
    OSCILLATING_AIRFLOW = 4,
    RESERVED_1 = 5,
    RESERVED_2 = 6,
    RESERVED_3 = 7,
};

enum class AutoAirOtltAmgCstChgSetReq : int32_t {
    No_Action = 0,
    Off = 1,
    On = 2,
};

enum class AutoAirOtltAmgCstCurrSetVal : int32_t {
    Setting_Unknown = 0,
    Off = 1,
    On = 2,
};

enum class AutoCoolServFllIndReq : int32_t {
    No_Indication = 0,
    ACSF_Enabled = 1,
    ACSF_Completed_Successfully = 2,
    ACSF_Canceled = 3,
};

enum class AutoCoolStCstChgSetReq : int32_t {
    NO_ACTION = 0,
    OFF = 1,
    ON = 2,
    RESERVED_3 = 3,
    RESERVED_4 = 4,
    RESERVED_5 = 5,
    RESERVED_6 = 6,
    RESERVED_7 = 7,
};

enum class AutoCoolStCstCrStVal : int32_t {
    SETTING_UNKNOWN = 0,
    OFF = 1,
    ON = 2,
    RESERVED_1 = 3,
    RESERVED_2 = 4,
    RESERVED_3 = 5,
    RESERVED_4 = 6,
    RESERVED_5 = 7,
};

enum class AutoCtlrGnrcChmEvntStat : int32_t {
    No_Action = 0,
    Active = 1,
    Cancel_Chime = 2,
};

enum class AutoDfgCstChgSetReq : int32_t {
    NO_ACTION = 0,
    OFF = 1,
    ON = 2,
    RESERVED_3 = 3,
    RESERVED_4 = 4,
    RESERVED_5 = 5,
    RESERVED_6 = 6,
    RESERVED_7 = 7,
};

enum class AutoDfgCstCrStVal : int32_t {
    SETTING_UNKNOWN = 0,
    OFF = 1,
    ON = 2,
    RESERVED_1 = 3,
    RESERVED_2 = 4,
    RESERVED_3 = 5,
    RESERVED_4 = 6,
    RESERVED_5 = 7,
};

enum class AutoFanCstChgSetReq : int32_t {
    NO_ACTION = 0,
    LOW = 1,
    NORMAL = 2,
    HIGH = 3,
    RESERVED_4 = 4,
    RESERVED_5 = 5,
    RESERVED_6 = 6,
    RESERVED_7 = 7,
};

enum class AutoFanCstCrStVal : int32_t {
    SETTING_UNKNOWN = 0,
    LOW = 1,
    NORMAL = 2,
    HIGH = 3,
    RESERVED_1 = 4,
    RESERVED_2 = 5,
    RESERVED_3 = 6,
    RESERVED_4 = 7,
};

enum class AutoHtdStCstChgSetReq : int32_t {
    NO_ACTION = 0,
    OFF = 1,
    ON = 2,
    RESERVED_3 = 3,
    RESERVED_4 = 4,
    RESERVED_5 = 5,
    RESERVED_6 = 6,
    RESERVED_7 = 7,
};

enum class AutoHtdStCstCrStVal : int32_t {
    SETTING_UNKNOWN = 0,
    OFF = 1,
    ON = 2,
    RESERVED_1 = 3,
    RESERVED_2 = 4,
    RESERVED_3 = 5,
    RESERVED_4 = 6,
    RESERVED_5 = 7,
};

enum class AutoLnChgCstChgSetReq : int32_t {
    No_Action = 0,
    Off = 1,
    On = 2,
    LCOD = 3,
    LCOD_and_ALC = 4,
};

enum class AutoLnChgCstCurrSetVal : int32_t {
    Setting_Unkown = 0,
    Off = 1,
    On = 2,
    LCOD = 3,
    LCOD_and_ALC = 4,
};

enum class AutoMemRclCstChgSetReq : int32_t {
    NO_ACTION = 0,
    OFF = 1,
    ON = 2,
    AUTO_MEMORY_RECALL = 3,
    EASY_EXIT = 4,
    AUTO_MEMORY_AND_EASY_EXIT_RECALLS = 5,
    RESERVED6 = 6,
    RESERVED7 = 7,
};

enum class AutoMrFldCstChgSetReq : int32_t {
    NO_ACTION = 0,
    OFF = 1,
    ON = 2,
    RESERVED_3 = 3,
    RESERVED_4 = 4,
    RESERVED_5 = 5,
    RESERVED_6 = 6,
    RESERVED_7 = 7,
};

enum class AutoNckScrfCstChgSetReq : int32_t {
    No_Action = 0,
    Off = 1,
    On = 2,
    Sync_to_Heated_Seats = 3,
};

enum class AutoNckScrfCstCurrSetVal : int32_t {
    Setting_Unknown = 0,
    Off = 1,
    On = 2,
    Sync_to_Heated_Seats = 3,
};

enum class AutoRrWpCstChgSetReq : int32_t {
    NO_ACTION = 0,
    OFF = 1,
    ON = 2,
    RESERVED_3 = 3,
    RESERVED_4 = 4,
    RESERVED_5 = 5,
    RESERVED_6 = 6,
    RESERVED_7 = 7,
};

enum class AutoRrWpCstCurSetVal : int32_t {
    SETTING_UNKNOWN = 0,
    OFF = 1,
    ON = 2,
    RESERVED_3 = 3,
    RESERVED_4 = 4,
    RESERVED_5 = 5,
    RESERVED_6 = 6,
    RESERVED_7 = 7,
};

enum class AutoTrnspHdActvnCstChgSetReq : int32_t {
    No_Action = 0,
    Active = 1,
    Inactive = 2,
};

enum class AutoTrnspHdActvnCstCurrSetVal : int32_t {
    Setting_Unknown = 0,
    Active = 1,
    Inactive = 2,
};

enum class AutoVehHldVirtCtlAval : int32_t {
    Not_Available = 0,
    Available = 1,
};

enum class AutoVehHldVirtCurrSeltnVal : int32_t {
    Unknown = 0,
    Disabled = 1,
    Enabled_Once_Key_Cycle = 2,
    Enabled_Always = 3,
};

enum class AutoVehHldVirtReq : int32_t {
    No_Action = 0,
    Disable = 1,
    Enable_One_Key_Cycle = 2,
    Enable_Always = 3,
};

enum class AuxAlrmSnsCurrSeltnVal : int32_t {
    Unknown = 0,
    On = 1,
    Off = 2,
};

enum class AxlLckUnavailIndReq : int32_t {
    No_Action = 0,
    Rear_Axle_Not_Locked = 1,
    Not_in_4WD_Low = 2,
    Speed_Too_High = 3,
    Not_During_Hill_Decent = 4,
    Generic_Unavailable = 5,
    Not_in_Terrain = 6,
    Not_in_Terrain_or_Offroad = 7,
};

enum class B2RChmEvntStat : int32_t {
    No_Action = 0,
    Active = 1,
    Cancel_Chime = 2,
};

enum class BGI1P_OutsdAmbtLgtLvlStsAuth : int32_t {
    Unknown = 0,
    Day = 1,
    Night = 2,
};

enum class BGI1P_RmtStrtStsAuth : int32_t {
    Inactive = 0,
    Active = 1,
};

enum class BSDIP_EPBSysStsIndReqAuth : int32_t {
    Off = 0,
    On = 1,
    Num0_5_Hz = 2,
    Num1_Hz = 3,
    Num2_Hz = 4,
    Num4_Hz = 5,
};

enum class BSDIP_EPBSysWrnIndReqAuth : int32_t {
    Off = 0,
    On = 1,
    Num0_5_Hz = 2,
    Num1_Hz = 3,
    Num2_Hz = 4,
    Num4_Hz = 5,
};

enum class BSDIP_ESCVisIndReqAuth : int32_t {
    OFF = 0,
    ON = 1,
    Num2_Hz = 2,
};

enum class BSIRP_HillDscntCtlStsAuth : int32_t {
    Not_Enabled = 0,
    Enabled = 1,
    Active = 2,
};

enum class BSISP_ESCSysStsAuth : int32_t {
    Normal_Operation = 0,
    Failed = 1,
    Initializing = 2,
    Enhanced_Operation = 3,
    Driver_Disable = 4,
};

enum class BSISP_ETRSHydrlcBrkgStsAuth : int32_t {
    Not_Active = 0,
    Active = 1,
    Failed = 2,
};

enum class BSISP_TCSDrvrIntntAuth : int32_t {
    Disabled = 0,
    Enabled = 1,
};

enum class BSPMP_BkupSysPwrModeAuth : int32_t {
    Off = 0,
    Accessory = 1,
    Run = 2,
    Start_Request = 3,
    Propulsion = 4,
};

enum class BSSIP_BrkAsstBrkBstStsAuth : int32_t {
    No_Boost = 0,
    Normal_Boost = 1,
    Boost_with_Warning = 2,
    Shut_Down_Boost = 3,
    No_Boost_EPB_Assist = 4,
    Hydraulic_Leak_Detection = 5,
    Half_System_Boost = 6,
    Diagnostic_Mode = 7,
    Brake_Fade_1 = 8,
    Brake_Fade_2 = 9,
};

enum class BSSIP_LnchCtlModeStsAuth : int32_t {
    Disable = 0,
    General = 1,
    General_Custom = 2,
    High_Traction = 3,
    High_Traction_Custom = 4,
    Line_Lock = 5,
    Line_Lock_Press_Brake = 6,
    Line_Lock_Release_Brake = 7,
};

enum class BVSCRP_ACCAxlTrqCmdLimStsAuth : int32_t {
    Request_Not_Limited = 0,
    Request_Value_Limited_Minimum = 1,
    Request_Value_Limited_Maximum = 2,
    Request_Rate_Limited = 3,
};

enum class BVSCRP_ACCAxlTrqCmdReqStsAuth : int32_t {
    No_Request = 0,
    Request_Honored = 1,
    Lost_Arbitration = 2,
    Request_Denied = 3,
    Request_Suspended_Till_Driver_Input = 4,
};

enum class BVSCRP_CPSAxlTrqCmdLimStsAuth : int32_t {
    Request_Not_Limited = 0,
    Request_Value_Limited_to_Minimum = 1,
    Request_Value_Limited_to_Maximum = 2,
    Request_Rate_Limited = 3,
};

enum class BVSCRP_CPSAxlTrqCmdReqStsAuth : int32_t {
    No_Request = 0,
    Request_Honored = 1,
    Lost_Arbitration = 2,
    Serial_Data_Failure_Temporary = 3,
    Serial_Data_Failure_Permanent = 4,
    Control_System_Failure_Temporary = 5,
    Control_System_Failure_Permanent = 6,
};

enum class Bat12VCfg : int32_t {
    PbA_Only = 0,
    Li_Only = 1,
    Dual_PbA = 2,
    Dual_Li = 3,
    Dual_Mix_PbA_Primary = 4,
    Dual_Mix_Li_Primary = 5,
    Reserved = 6,
    Unknown_Batt_Type = 7,
};

enum class BattVltIRq : int32_t {
    Battery_Voltage_OK = 0,
    Battery_Voltage_Low = 1,
    Battery_Voltage_High = 2,
    Battery_Voltage_Very_Low = 3,
};

enum class BdyCtlTopSpdLimSrcAuth : int32_t {
    None = 0,
    Teen = 1,
    Valet = 2,
    HoodOpen = 3,
    Reserved = 7,
};

enum class BklghtngCnfg : int32_t {
    Off = 0,
    On = 1,
    Local = 2,
};

enum class BlkhdDrLoclActvnChmEvntStat : int32_t {
    No_Action = 0,
    Active = 1,
    Cancel_Chime = 2,
};

enum class BlkhdDrObstclChmEvntStat : int32_t {
    No_Action = 0,
    Active = 1,
    Cancel_Chime = 2,
};

enum class BlkhdDrRmtActvnChmEvntStat : int32_t {
    No_Action = 0,
    Active = 1,
    Cancel_Chime = 2,
};

enum class BlndZnStrgAsstVirtCtlAval : int32_t {
    Not_Available = 0,
    Available = 1,
};

enum class BlndZnStrgAsstVirtCtlReq : int32_t {
    No_Action = 0,
    Off = 1,
    On = 2,
};

enum class BlndZnStrgAsstVirtUserCtlAllwd : int32_t {
    Not_Allowed = 0,
    Allowed = 1,
};

enum class BlndZnStrgAsstVrtCtlCurrSltnVl : int32_t {
    Unknown = 0,
    Off = 1,
    On = 2,
};

enum class BrkFldLvlSt : int32_t {
    Normal = 0,
    Low = 1,
    Unknown = 2,
};

enum class BrkPadLifeFrtDistWrnIndReq : int32_t {
    No_Action = 0,
    Low = 1,
    Display_Distance = 2,
};

enum class BrkPadLifeRrDistWrnIndReq : int32_t {
    No_Action = 0,
    Low = 1,
    Display_Distance = 2,
};

enum class BrkPadLifeStsIndReq : int32_t {
    No_Action = 0,
    Not_Present = 1,
    Ok = 2,
    Change_Soon = 3,
    Change_Now = 4,
    Disabled = 5,
    Service = 6,
};

enum class BrkPadLifeSysDrvrReq : int32_t {
    No_Action = 0,
    Disable = 1,
    Enable = 2,
    Reset_Front = 3,
    Reset_Rear = 4,
};

enum class BrkSysBstWrnIndReq : int32_t {
    No_Indication = 0,
    Service_Brake_Boost = 1,
    Brake_Assist_Failure = 2,
    Brake_System_Failure = 3,
};

enum class BrkSysDrftModeDispSts : int32_t {
    None = 0,
    Pending = 1,
    On = 2,
    Off = 3,
};

enum class BrkSysDrftModeUnvWrnIndReq : int32_t {
    None = 0,
    In_Terrain_Mode = 1,
    Generic = 2,
};

enum class BrkSysHillStrtAsstStat : int32_t {
    Inactive = 0,
    Brake_Pressure_Hold = 1,
    Normal_Pressure_Decay = 2,
    Drive_off_Pressure_Decay = 3,
    Reserved_4 = 4,
    Reserved_5 = 5,
    Reserved_6 = 6,
    Reserved_7 = 7,
};

enum class BrkTempStsIndReq : int32_t {
    No_Action = 0,
    Normal = 1,
    Warm = 2,
    Hot = 3,
    Overheated = 4,
};

enum class ByclDtnArbdIndStat : int32_t {
    No_Indication = 0,
    Off = 1,
    Right_Level_1 = 2,
    Left_Level_1 = 3,
    Right_Level_2 = 4,
    Left_Level_2 = 5,
    Left_and_Right_Level_1 = 6,
    Left_and_Right_Level_2 = 7,
};

enum class ByclDtnArbdLvl1ChmEvntStat : int32_t {
    No_Action = 0,
    Active = 1,
    Cancel_Chime = 2,
};

enum class ByclDtnArbdLvl2ChmEvntStat : int32_t {
    No_Action = 0,
    Active = 1,
    Cancel_Chime = 2,
};

enum class ByclDtnCstChgSetReq : int32_t {
    No_Action = 0,
    Off = 1,
    Alert = 2,
};

enum class ByclDtnCstCurrSetVal : int32_t {
    Setting_Unknown = 0,
    Off = 1,
    Alert = 2,
};

enum class CBIP_ACCBrkgStsAuth : int32_t {
    Not_Active = 0,
    Active = 1,
    Failed = 2,
};

enum class CBIP_ClsnImntBrkgStsAuth : int32_t {
    Not_Active = 0,
    Active = 1,
    Failed = 2,
};

enum class CCSI_CrtclChmPrdcrSOH : int32_t {
    Unknown = 0,
    Healthy = 1,
    Faulted = 2,
};

enum class CSI_ChmPrdcrSOH : int32_t {
    Unknown = 0,
    Healthy = 1,
    Faulted = 2,
};

enum class CTDStat : int32_t {
    OFF = 0,
    ARMED = 1,
    DISARMED = 2,
    ALARM_ACTIVE = 3,
    ARMING_DELAY = 4,
    POST_ALARM_DELAY = 5,
};

enum class CTGI2P_CnvtTopStsAuth : int32_t {
    Indeterminate = 0,
    Fully_Closed = 1,
    Fully_Open = 2,
    Closing = 3,
    Opening = 4,
    Halted = 5,
};

enum class CbnAirClnFltrtnCstChgSetReq : int32_t {
    No_Action = 0,
    Off = 1,
    On = 2,
};

enum class CbnAirClnFltrtnCstCurrSetVal : int32_t {
    Setting_Unknown = 0,
    Off = 1,
    On = 2,
};

enum class CbnPrcndtngSchReq : int32_t {
    No_Action = 0,
    Inactive = 1,
    Compute_Request = 2,
    Active = 3,
};

enum class CbnPrcndtngSts : int32_t {
    No_Action = 0,
    Inactive = 1,
    Active = 2,
    Performance_Limited = 3,
    Cabin_At_Target = 4,
    Disabled = 5,
};

enum class ChmMngrSoH : int32_t {
    UNKNOWN = 0,
    INITIALIZED = 1,
    RESERVED_2 = 2,
    RESERVED_3 = 3,
    RESERVED_4 = 4,
    RESERVED_5 = 5,
    RESERVED_6 = 6,
    RESERVED_7 = 7,
};

enum class ChmPrdcrQdrntLFSOH : int32_t {
    Unknown = 0,
    Healthy = 1,
    Faulted = 2,
};

enum class ChmPrdcrQdrntLRSOH : int32_t {
    Unknown = 0,
    Healthy = 1,
    Faulted = 2,
};

enum class ChmPrdcrQdrntRFSOH : int32_t {
    Unknown = 0,
    Healthy = 1,
    Faulted = 2,
};

enum class ChmPrdcrQdrntRRSOH : int32_t {
    Unknown = 0,
    Healthy = 1,
    Faulted = 2,
};

enum class ChrgCommAdvdSesnRtndCtlMode : int32_t {
    Unknown = 0,
    Scheduled = 1,
    Dynamic = 2,
};

enum class ChrgCommAvdSesnRtndConnectorTyp : int32_t {
    Unknown = 0,
    DC_Core = 1,
    DC_Extended = 2,
    DC_Dual_2 = 3,
    DC_Dual_4 = 4,
    AC_Single_Phase = 5,
    AC_ThreePhase = 6,
};

enum class ChrgCommBridgeAdvdPausWkupDtn : int32_t {
    No_Action = 0,
    Wakeup = 1,
    Disconnect = 2,
    Error = 3,
};

enum class ChrgCommBridgeDrvrNtfn : int32_t {
    None = 0,
    Temporary_Error = 1,
    OTA_Restriction = 2,
    Charging_Station_Fault = 3,
    Internal_Service_Fault = 4,
};

enum class ChrgCommBridgeIntrnlFltSts : int32_t {
    PLC_BridgeHealth_Unknown = 0,
    PLC_BridgeHealth_NoFault = 1,
    PLC_BridgeHealth_Faulted = 2,
};

enum class ChrgCommBridgeOprtlSts : int32_t {
    PLC_Bridge_Unknown = 0,
    PLC_Bridge_InActive = 1,
    PLC_Bridge_Active = 2,
    PLC_Bridge_Disabled = 3,
};

enum class ChrgCommCtlPilotPrsntSts : int32_t {
    None = 0,
    State_A_E_F = 1,
    State_B = 2,
    State_C_D = 3,
};

enum class ChrgCommCtlrAdvdPausReq : int32_t {
    Unknown = 0,
    Pause = 1,
    Resume = 2,
    New_Session = 3,
};

enum class ChrgCommCtlrCommEnblSts : int32_t {
    No_Action = 0,
    Initiate_Communication = 1,
    Disable_Communication = 2,
    Restart_Communication = 3,
    HLC_Communication = 4,
    Failed = 5,
};

enum class ChrgCommGtwayChrgAuthSts : int32_t {
    Unknown = 0,
    Pending = 1,
    Enable = 2,
    Disable = 3,
};

enum class ChrgCommGtwayCommPrtclTyp : int32_t {
    Unknown = 0,
    None = 1,
    DIN = 2,
    ISO15118 = 3,
};

enum class ChrgCommGtwayIntrnlFltSts : int32_t {
    PLC_GWHealth_Unknown = 0,
    PLC_GWHealth_NoFault = 1,
    PLC_GWHealth_Faulted = 2,
};

enum class ChrgCommGtwayOprtlSts : int32_t {
    PLC_GW_Unknown = 0,
    PLC_GW_InActive = 1,
    PLC_GW_Active = 2,
    PLC_GW_Disabled = 3,
};

enum class ChrgCommSLACSts : int32_t {
    Idle = 0,
    Parameter_Discovery_Request = 1,
    Parameter_Discovery_Response = 2,
    Sounding_Indication = 3,
    Start_Attenuation_Characterization_Indication = 4,
    Attenuation_Characterization_Indication = 5,
    Attenuation_Characterization_Indication_Response = 6,
    SLAC_Match_Request = 7,
    SLAC_Match_Confirmation = 8,
    Set_Key_Request = 9,
    Set_Key_Confirmation = 10,
    SLAC_Complete = 11,
    SLAC_Failed = 12,
};

enum class ChrgCordThftAlrtCstCurrSetVal : int32_t {
    No_Action = 0,
    Off = 1,
    On = 2,
};

enum class ChrgCordThftAlrtCstSetReq : int32_t {
    No_Action = 0,
    Off = 1,
    On = 2,
};

enum class ChrgDatReq : int32_t {
    No_Action = 0,
    Wakeup_Init_All = 1,
    Reinit_All = 2,
    Reinit_Partial = 3,
};

enum class ChrgPortDrClsrUserCtlAllwd : int32_t {
    Not_Allowed = 0,
    Allowed = 1,
};

enum class ChrgPortDrClsrVirtCtlAval : int32_t {
    Not_Available = 0,
    Available = 1,
};

enum class ChrgPortDrClsrVirtCtlReq : int32_t {
    No_Action = 0,
    Open = 1,
    Close = 2,
};

enum class ChrgPortDrCurrStat : int32_t {
    Unknown = 0,
    Open = 1,
    Close = 2,
};

enum class ChrgPortDrIndReq : int32_t {
    Inactive = 0,
    Open_Park = 1,
    Open_Moving = 2,
    Fault = 3,
};

enum class ChrgPwrLossAlrtCstCurrSetVal : int32_t {
    No_Action = 0,
    Off = 1,
    On = 2,
};

enum class ChrgPwrLossAlrtCstSetReq : int32_t {
    No_Action = 0,
    Off = 1,
    On = 2,
};

enum class ChrgStnAdvdDplyTyp : int32_t {
    Unknown = 0,
    Public_EVSE = 1,
    Home_EVSE = 2,
    Private_EVSE = 3,
    Portable_EVSE = 4,
};

enum class ChrgStnAdvdMfrTyp : int32_t {
    Unknown = 0,
    GM_EVSE = 1,
    GM_Partner_EVSE = 2,
    Non_GM_EVSE = 3,
};

enum class ChrgStnEngyXferDir : int32_t {
    Charging = 0,
    Discharging = 1,
};

enum class ChrgSysAudblIndCstSetReq : int32_t {
    No_Action = 0,
    Off = 1,
    On = 2,
};

enum class ChrgrSysAudblIndCstCurrSetVal : int32_t {
    No_Action = 0,
    Off = 1,
    On = 2,
};

enum class CldrMth : int32_t {
    Unknown = 0,
    January = 1,
    February = 2,
    March = 3,
    April = 4,
    May = 5,
    June = 6,
    July = 7,
    August = 8,
    September = 9,
    October = 10,
    November = 11,
    December = 12,
};

enum class ClmCtlRrBlw2CtlCktFlrSts : int32_t {
    Indeterminate = 0,
    Pass_Criteria_Met = 1,
    Fail_Criteria_Met = 2,
};

enum class ClmCtlRrBlw2CtlCktOORHiFlrSts : int32_t {
    Indeterminate = 0,
    Pass_Criteria_Met = 1,
    Fail_Criteria_Met = 2,
};

enum class ClmCtlRrBlw2CtlCktOORLoFlrSts : int32_t {
    Indeterminate = 0,
    Pass_Criteria_Met = 1,
    Fail_Criteria_Met = 2,
};

enum class ClmCtlRrBlwCtlCktFlrSts : int32_t {
    Indeterminate = 0,
    Pass_Criteria_Met = 1,
    Fail_Criteria_Met = 2,
};

enum class ClmCtlRrBlwCtlCktOORHiFlrSts : int32_t {
    Indeterminate = 0,
    Pass_Criteria_Met = 1,
    Fail_Criteria_Met = 2,
};

enum class ClmCtlRrBlwCtlCktOORLoFlrSts : int32_t {
    Indeterminate = 0,
    Pass_Criteria_Met = 1,
    Fail_Criteria_Met = 2,
};

enum class ClstrAnmStat : int32_t {
    Uninitialized = 0,
    Ready = 1,
    WelcomePlay = 2,
    StartPlay = 3,
    ShutdownPlay = 4,
};

enum class CmbdDrHndlActvLF : int32_t {
    INACTIVE = 0,
    ACTIVE = 1,
};

enum class CmbdDrHndlActvRF : int32_t {
    INACTIVE = 0,
    ACTIVE = 1,
};

enum class CmdSndRwCtStbtVisInd : int32_t {
    No_Indication = 0,
    Unbuckled_Indication = 1,
    Buckled_Indication = 2,
    Unbuckled_Flashing_Indication = 3,
};

enum class CmdSndRwLtStbtVisInd : int32_t {
    No_Indication = 0,
    Unbuckled_Indication = 1,
    Buckled_Indication = 2,
    Unbuckled_Flashing_Indication = 3,
};

enum class CmdSndRwRtStbtVisInd : int32_t {
    No_Indication = 0,
    Unbuckled_Indication = 1,
    Buckled_Indication = 2,
    Unbuckled_Flashing_Indication = 3,
};

enum class CmdThrdRwCtStbtVisInd : int32_t {
    No_Indication = 0,
    Unbuckled_Indication = 1,
    Buckled_Indication = 2,
    Unbuckled_Flashing_Indication = 3,
};

enum class CmdThrdRwLtStbtVisInd : int32_t {
    No_Indication = 0,
    Unbuckled_Indication = 1,
    Buckled_Indication = 2,
    Unbuckled_Flashing_Indication = 3,
};

enum class CmdThrdRwRtStbtVisInd : int32_t {
    No_Indication = 0,
    Unbuckled_Indication = 1,
    Buckled_Indication = 2,
    Unbuckled_Flashing_Indication = 3,
};

enum class CmpsDecZone : int32_t {
    Unknown = 0,
    Zone_1 = 1,
    Zone_2 = 2,
    Zone_3 = 3,
    Zone_4 = 4,
    Zone_5 = 5,
    Zone_6 = 6,
    Zone_7 = 7,
    Zone_8 = 8,
    Zone_9 = 9,
    zone_10 = 10,
    Zone_11 = 11,
    Zone_12 = 12,
    Zone_13 = 13,
    Zone_14 = 14,
    Zone_15 = 15,
};

enum class CmpsModFltPrs : int32_t {
    False = 0,
    True = 1,
};

enum class CmpsModManCalInPrc : int32_t {
    False = 0,
    True = 1,
};

enum class CmpsOctHding : int32_t {
    N = 0,
    NE = 1,
    E = 2,
    SE = 3,
    S = 4,
    SW = 5,
    W = 6,
    NW = 7,
};

enum class CmpsOctHdingDataSrc : int32_t {
    Stored_Value = 0,
    Calculated_Value = 1,
};

enum class CmpsSatrtd : int32_t {
    False = 0,
    True = 1,
};

enum class CmpsZnNvrSet : int32_t {
    False = 0,
    True = 1,
};

enum class CnvntlCruzCtlIndReqAuth : int32_t {
    No_Action = 0,
    Cruise_Control_Telltale_Off = 1,
    Cruise_Control_Unavailable_Telltale_On = 2,
    Cruise_Control_White_Telltale_On = 3,
    Cruise_Control_Green_Telltale_On = 4,
    Cruise_Control_Blue_Telltale_On = 5,
};

enum class CnvtBkWndPstnSts : int32_t {
    Denormalized = 0,
    Fully_Closed = 1,
    Less_Than_Position_A = 2,
    Position_A = 3,
    Greater_Than_A_but_less_than_Position_C = 4,
    Position_C = 5,
    Greater_than_Position_C_but_less_than_Fully_open = 6,
    Fully_Open = 7,
};

enum class CnvtblTpWndMtnReq : int32_t {
    NO_ACTION = 0,
    OPEN = 1,
    CLOSE = 2,
    COMFORT_OPEN = 3,
    COMFORT_CLOSE = 4,
};

enum class ConThftAlrmTrg : int32_t {
    NO_DATA = 0,
    DRIVER_DOOR_AJAR = 1,
    CODRIVER_DOOR_AJAR = 2,
    LEFT_REAR_DOOR_AJAR = 3,
    RIGHT_REAR_DOOR_AJAR = 4,
    GLASS_BREAKAGE = 5,
    HOOD_AJAR = 6,
    INTRUSION = 7,
    INCLINATION = 8,
    REAR_CLOSURE_AJAR = 9,
    LIFTGLASS_AJAR = 10,
    TARGA_AJAR = 11,
    TONNEAU_AJAR = 12,
    VEHICLE_POWER_MODE = 13,
    CHARGE_CORD_ALERT = 14,
    WHEEL_TAMPER = 15,
    PANIC_ALARM = 16,
    MODULE_RESET = 17,
    ENHANCED_SERVICES_ALARM = 18,
    Trailer_Theft = 19,
    Convertible_Top = 20,
};

enum class CrgBedVwAutoLgtCstChgSetReq : int32_t {
    No_Action = 0,
    Off = 1,
    On = 2,
};

enum class CrgBedVwAutoLgtCstCurrSetVal : int32_t {
    Setting_Unknown = 0,
    Off = 1,
    On = 2,
    Reserved_3 = 3,
    Reserved_4 = 4,
    Reserved_5 = 5,
    Reserved_6 = 6,
    Reserved_7 = 7,
};

enum class CrsCntCncRq : int32_t {
    Do_Not_Cancel = 0,
    Cancel = 1,
};

enum class CrwlModeDndRsnIndReq : int32_t {
    No_Indication = 0,
    Unavailable = 1,
    Brakes_Overtemp = 2,
    Shift_to_4_High = 3,
    Reduce_Speed = 4,
};

enum class CurbVwFtrActvReq : int32_t {
    On = 0,
    Off = 1,
    Failed = 2,
};

enum class CustMdActAeroCstChngSetReq : int32_t {
    NO_ACTION = 0,
    CUSTOM_MODE_1 = 1,
    CUSTOM_MODE_2 = 2,
    CUSTOM_MODE_3 = 3,
    CUSTOM_MODE_4 = 4,
    CUSTOM_MODE_5 = 5,
    CUSTOM_MODE_6 = 6,
    CUSTOM_MODE_7 = 7,
};

enum class CustMdActAeroCstmCurSetVal : int32_t {
    SETTING_UNKNOWN = 0,
    CUSTOM_MODE_1 = 1,
    CUSTOM_MODE_2 = 2,
    CUSTOM_MODE_3 = 3,
    CUSTOM_MODE_4 = 4,
    CUSTOM_MODE_5 = 5,
    CUSTOM_MODE_6 = 6,
    CUSTOM_MODE_7 = 7,
};

enum class CustMdBrkPdlCstChngSetReq : int32_t {
    NO_ACTION = 0,
    CUSTOM_MODE_1 = 1,
    CUSTOM_MODE_2 = 2,
    CUSTOM_MODE_3 = 3,
    CUSTOM_MODE_4 = 4,
    CUSTOM_MODE_5 = 5,
    CUSTOM_MODE_6 = 6,
    CUSTOM_MODE_7 = 7,
};

enum class CustMdBrkPdlCstmCurSetVal : int32_t {
    SETTING_UNKNOWN = 0,
    CUSTOM_MODE_1 = 1,
    CUSTOM_MODE_2 = 2,
    CUSTOM_MODE_3 = 3,
    CUSTOM_MODE_4 = 4,
    CUSTOM_MODE_5 = 5,
    CUSTOM_MODE_6 = 6,
    CUSTOM_MODE_7 = 7,
};

enum class CustMdDrvlCstChngSetReq : int32_t {
    NO_ACTION = 0,
    CUSTOM_MODE_1 = 1,
    CUSTOM_MODE_2 = 2,
    CUSTOM_MODE_3 = 3,
    CUSTOM_MODE_4 = 4,
    CUSTOM_MODE_5 = 5,
    CUSTOM_MODE_6 = 6,
    CUSTOM_MODE_7 = 7,
};

enum class CustMdDrvlCstmCurSetVal : int32_t {
    SETTING_UNKNOWN = 0,
    CUSTOM_MODE_1 = 1,
    CUSTOM_MODE_2 = 2,
    CUSTOM_MODE_3 = 3,
    CUSTOM_MODE_4 = 4,
    CUSTOM_MODE_5 = 5,
    CUSTOM_MODE_6 = 6,
    CUSTOM_MODE_7 = 7,
};

enum class CustMdEVPedMpCstChngSetReq : int32_t {
    NO_ACTION = 0,
    CUSTOM_MODE_1 = 1,
    CUSTOM_MODE_2 = 2,
    CUSTOM_MODE_3 = 3,
    CUSTOM_MODE_4 = 4,
    CUSTOM_MODE_5 = 5,
    CUSTOM_MODE_6 = 6,
    CUSTOM_MODE_7 = 7,
};

enum class CustMdEVPedMpCstmCurSetVal : int32_t {
    SETTING_UNKNOWN = 0,
    CUSTOM_MODE_1 = 1,
    CUSTOM_MODE_2 = 2,
    CUSTOM_MODE_3 = 3,
    CUSTOM_MODE_4 = 4,
    CUSTOM_MODE_5 = 5,
    CUSTOM_MODE_6 = 6,
    CUSTOM_MODE_7 = 7,
};

enum class CustMdEngyRegnCstChngSetReq : int32_t {
    NO_ACTION = 0,
    CUSTOM_MODE_1 = 1,
    CUSTOM_MODE_2 = 2,
    CUSTOM_MODE_3 = 3,
    CUSTOM_MODE_4 = 4,
    CUSTOM_MODE_5 = 5,
    CUSTOM_MODE_6 = 6,
    CUSTOM_MODE_7 = 7,
};

enum class CustMdEngyRegnCstmCurSetVal : int32_t {
    SETTING_UNKNOWN = 0,
    CUSTOM_MODE_1 = 1,
    CUSTOM_MODE_2 = 2,
    CUSTOM_MODE_3 = 3,
    CUSTOM_MODE_4 = 4,
    CUSTOM_MODE_5 = 5,
    CUSTOM_MODE_6 = 6,
    CUSTOM_MODE_7 = 7,
};

enum class CustMdPTCstChngSetReq : int32_t {
    NO_ACTION = 0,
    CUSTOM_MODE_1 = 1,
    CUSTOM_MODE_2 = 2,
    CUSTOM_MODE_3 = 3,
    CUSTOM_MODE_4 = 4,
    CUSTOM_MODE_5 = 5,
    CUSTOM_MODE_6 = 6,
    CUSTOM_MODE_7 = 7,
};

enum class CustMdPTCstmCurSetVal : int32_t {
    SETTING_UNKNOWN = 0,
    CUSTOM_MODE_1 = 1,
    CUSTOM_MODE_2 = 2,
    CUSTOM_MODE_3 = 3,
    CUSTOM_MODE_4 = 4,
    CUSTOM_MODE_5 = 5,
    CUSTOM_MODE_6 = 6,
    CUSTOM_MODE_7 = 7,
};

enum class CustMdPTCstmPndSetVal : int32_t {
    SETTING_UNKNOWN = 0,
    CUSTOM_MODE_1 = 1,
    CUSTOM_MODE_2 = 2,
    CUSTOM_MODE_3 = 3,
    CUSTOM_MODE_4 = 4,
    CUSTOM_MODE_5 = 5,
    CUSTOM_MODE_6 = 6,
    CUSTOM_MODE_7 = 7,
};

enum class CustMdRideHghtCstChngSetReq : int32_t {
    NO_ACTION = 0,
    CUSTOM_MODE_1 = 1,
    CUSTOM_MODE_2 = 2,
    CUSTOM_MODE_3 = 3,
    CUSTOM_MODE_4 = 4,
    CUSTOM_MODE_5 = 5,
    CUSTOM_MODE_6 = 6,
    CUSTOM_MODE_7 = 7,
};

enum class CustMdRideHghtCstmCurSetVal : int32_t {
    SETTING_UNKNOWN = 0,
    CUSTOM_MODE_1 = 1,
    CUSTOM_MODE_2 = 2,
    CUSTOM_MODE_3 = 3,
    CUSTOM_MODE_4 = 4,
    CUSTOM_MODE_5 = 5,
    CUSTOM_MODE_6 = 6,
    CUSTOM_MODE_7 = 7,
};

enum class CustMdSndCstChngSetReq : int32_t {
    NO_ACTION = 0,
    CUSTOM_MODE_1 = 1,
    CUSTOM_MODE_2 = 2,
    CUSTOM_MODE_3 = 3,
    CUSTOM_MODE_4 = 4,
    CUSTOM_MODE_5 = 5,
    CUSTOM_MODE_6 = 6,
    CUSTOM_MODE_7 = 7,
};

enum class CustMdSndCstmCurSetVal : int32_t {
    SETTING_UNKNOWN = 0,
    CUSTOM_MODE_1 = 1,
    CUSTOM_MODE_2 = 2,
    CUSTOM_MODE_3 = 3,
    CUSTOM_MODE_4 = 4,
    CUSTOM_MODE_5 = 5,
    CUSTOM_MODE_6 = 6,
    CUSTOM_MODE_7 = 7,
};

enum class CustMdSpnCstChngSetReq : int32_t {
    NO_ACTION = 0,
    CUSTOM_MODE_1 = 1,
    CUSTOM_MODE_2 = 2,
    CUSTOM_MODE_3 = 3,
    CUSTOM_MODE_4 = 4,
    CUSTOM_MODE_5 = 5,
    CUSTOM_MODE_6 = 6,
    CUSTOM_MODE_7 = 7,
};

enum class CustMdSpnCstmCurSetVal : int32_t {
    SETTING_UNKNOWN = 0,
    CUSTOM_MODE_1 = 1,
    CUSTOM_MODE_2 = 2,
    CUSTOM_MODE_3 = 3,
    CUSTOM_MODE_4 = 4,
    CUSTOM_MODE_5 = 5,
    CUSTOM_MODE_6 = 6,
    CUSTOM_MODE_7 = 7,
};

enum class CustMdStrCstChngSetReq : int32_t {
    NO_ACTION = 0,
    CUSTOM_MODE_1 = 1,
    CUSTOM_MODE_2 = 2,
    CUSTOM_MODE_3 = 3,
    CUSTOM_MODE_4 = 4,
    CUSTOM_MODE_5 = 5,
    CUSTOM_MODE_6 = 6,
    CUSTOM_MODE_7 = 7,
};

enum class CustMdStrCstmCurSetVal : int32_t {
    SETTING_UNKNOWN = 0,
    CUSTOM_MODE_1 = 1,
    CUSTOM_MODE_2 = 2,
    CUSTOM_MODE_3 = 3,
    CUSTOM_MODE_4 = 4,
    CUSTOM_MODE_5 = 5,
    CUSTOM_MODE_6 = 6,
    CUSTOM_MODE_7 = 7,
};

enum class CustMdTrcStbCstChngSetReq : int32_t {
    NO_ACTION = 0,
    CUSTOM_MODE_1 = 1,
    CUSTOM_MODE_2 = 2,
    CUSTOM_MODE_3 = 3,
    CUSTOM_MODE_4 = 4,
    CUSTOM_MODE_5 = 5,
    CUSTOM_MODE_6 = 6,
    CUSTOM_MODE_7 = 7,
};

enum class CustMdTrcStbCstmCurSetVal : int32_t {
    SETTING_UNKNOWN = 0,
    CUSTOM_MODE_1 = 1,
    CUSTOM_MODE_2 = 2,
    CUSTOM_MODE_3 = 3,
    CUSTOM_MODE_4 = 4,
    CUSTOM_MODE_5 = 5,
    CUSTOM_MODE_6 = 6,
    CUSTOM_MODE_7 = 7,
};

enum class CustmStbCtlRdctReqConf : int32_t {
    No_Action = 0,
    No = 1,
    Yes = 2,
};

enum class DAPR_CtlDir : int32_t {
    None = 0,
    Left = 1,
    Right = 2,
    Center = 3,
    Custom1 = 4,
    Custom_2 = 5,
    Custom_3 = 6,
    Custom_4 = 7,
};

enum class DAPR_CtlZn : int32_t {
    None = 0,
    Zone_1 = 1,
    Zone_2 = 2,
    Zone_3 = 3,
    Zone_4 = 4,
    Zone_5 = 5,
    Zone_6 = 6,
    Zone_7 = 7,
    Zone_8 = 8,
    Zone_9 = 9,
    Zone_10 = 10,
    Zone_11 = 11,
    Zone_12 = 12,
    Zone_13 = 13,
    Custom_1 = 14,
    Custom_2 = 15,
};

enum class DDIP_4AndAllWhlDrvIndReqAuth : int32_t {
    No_Indication = 0,
    Two_Wheel_Drive_High_Pending = 1,
    Two_Wheel_Drive_High_Active = 2,
    Four_Wheel_Drive_High_Auto_Pending = 3,
    Four_Wheel_Drive_High_Auto_Active = 4,
    Four_Wheel_Drive_High_Lock_Pending = 5,
    Four_Wheel_Drive_High_Lock_Active = 6,
    Four_Wheel_Drive_Low_Lock_Pending = 7,
    Four_Wheel_Drive_Low_Lock_Active = 8,
    Transfer_Case_Neutral_Pending = 9,
    Transfer_Case_Neutral_Active = 10,
    Position_Undetermined_Active = 11,
    AWD_Connected_Mode_Pending = 12,
    AWD_Connected_Mode_Active = 13,
    Front_Wheel_Drive_Mode_Pending = 14,
    Front_Wheel_Drive_Mode_Active = 15,
};

enum class DM1Name : int32_t {
    None = 0,
    Tour = 1,
    Sport = 2,
    Track = 3,
    Winter = 4,
    Off_Road = 5,
    Tow_Haul = 6,
    Hold = 7,
    Mountain = 8,
    Personal = 9,
    Custom = 10,
    AWD = 11,
    Economy = 12,
    Automatic = 13,
    EV = 14,
    Grade_Braking = 15,
    Exhaust_Brake = 16,
    Active_Rev_Match = 17,
    Num2WD = 18,
    Comfort = 19,
    Start_Stop_Disable = 20,
    Crawl = 21,
    Charge_Plus = 22,
    Baja = 23,
    Max_Power = 24,
    Boat_Ramp = 25,
};

enum class DM1Status : int32_t {
    Inactive = 0,
    Active = 1,
};

enum class DM2Name : int32_t {
    None = 0,
    Tour = 1,
    Sport = 2,
    Track = 3,
    Winter = 4,
    Off_Road = 5,
    Tow_Haul = 6,
    Hold = 7,
    Mountain = 8,
    Personal = 9,
    Custom = 10,
    AWD = 11,
    Economy = 12,
    Automatic = 13,
    EV = 14,
    Grade_Braking = 15,
    Exhaust_Brake = 16,
    Active_Rev_Match = 17,
    Num2WD = 18,
    Comfort = 19,
    Start_Stop_Disable = 20,
    Crawl = 21,
    Charge_Plus = 22,
    Baja = 23,
    Max_Power = 24,
    Boat_Ramp = 25,
};

enum class DM2Status : int32_t {
    Inactive = 0,
    Active = 1,
};

enum class DM3Name : int32_t {
    None = 0,
    Tour = 1,
    Sport = 2,
    Track = 3,
    Winter = 4,
    Off_Road = 5,
    Tow_Haul = 6,
    Hold = 7,
    Mountain = 8,
    Personal = 9,
    Custom = 10,
    AWD = 11,
    Economy = 12,
    Automatic = 13,
    EV = 14,
    Grade_Braking = 15,
    Exhaust_Brake = 16,
    Active_Rev_Match = 17,
    Num2WD = 18,
    Comfort = 19,
    Start_Stop_Disable = 20,
    Crawl = 21,
    Charge_Plus = 22,
    Baja = 23,
    Max_Power = 24,
    Boat_Ramp = 25,
};

enum class DM3Status : int32_t {
    Inactive = 0,
    Active = 1,
};

enum class DM4Name : int32_t {
    None = 0,
    Tour = 1,
    Sport = 2,
    Track = 3,
    Winter = 4,
    Off_Road = 5,
    Tow_Haul = 6,
    Hold = 7,
    Mountain = 8,
    Personal = 9,
    Custom = 10,
    AWD = 11,
    Economy = 12,
    Automatic = 13,
    EV = 14,
    Grade_Braking = 15,
    Exhaust_Brake = 16,
    Active_Rev_Match = 17,
    Num2WD = 18,
    Comfort = 19,
    Start_Stop_Disable = 20,
    Crawl = 21,
    Charge_Plus = 22,
    Baja = 23,
    Max_Power = 24,
    Boat_Ramp = 25,
};

enum class DM4Status : int32_t {
    Inactive = 0,
    Active = 1,
};

enum class DM5Name : int32_t {
    None = 0,
    Tour = 1,
    Sport = 2,
    Track = 3,
    Winter = 4,
    Off_Road = 5,
    Tow_Haul = 6,
    Hold = 7,
    Mountain = 8,
    Personal = 9,
    Custom = 10,
    AWD = 11,
    Economy = 12,
    Automatic = 13,
    EV = 14,
    Grade_Braking = 15,
    Exhaust_Brake = 16,
    Active_Rev_Match = 17,
    Num2WD = 18,
    Comfort = 19,
    Start_Stop_Disable = 20,
    Crawl = 21,
    Charge_Plus = 22,
    Baja = 23,
    Max_Power = 24,
    Boat_Ramp = 25,
};

enum class DM5Status : int32_t {
    Inactive = 0,
    Active = 1,
};

enum class DM6Name : int32_t {
    None = 0,
    Tour = 1,
    Sport = 2,
    Track = 3,
    Winter = 4,
    Off_Road = 5,
    Tow_Haul = 6,
    Hold = 7,
    Mountain = 8,
    Personal = 9,
    Custom = 10,
    AWD = 11,
    Economy = 12,
    Automatic = 13,
    EV = 14,
    Grade_Braking = 15,
    Exhaust_Brake = 16,
    Active_Rev_Match = 17,
    Num2WD = 18,
    Comfort = 19,
    Start_Stop_Disable = 20,
    Crawl = 21,
    Charge_Plus = 22,
    Baja = 23,
    Max_Power = 24,
    Boat_Ramp = 25,
};

enum class DM6Status : int32_t {
    Inactive = 0,
    Active = 1,
};

enum class DM7Name : int32_t {
    None = 0,
    Tour = 1,
    Sport = 2,
    Track = 3,
    Winter = 4,
    Off_Road = 5,
    Tow_Haul = 6,
    Hold = 7,
    Mountain = 8,
    Personal = 9,
    Custom = 10,
    AWD = 11,
    Economy = 12,
    Automatic = 13,
    EV = 14,
    Grade_Braking = 15,
    Exhaust_Brake = 16,
    Active_Rev_Match = 17,
    Num2WD = 18,
    Comfort = 19,
    Start_Stop_Disable = 20,
    Crawl = 21,
    Charge_Plus = 22,
    Baja = 23,
    Max_Power = 24,
    Boat_Ramp = 25,
};

enum class DM7Status : int32_t {
    Inactive = 0,
    Active = 1,
};

enum class DM8Name : int32_t {
    None = 0,
    Tour = 1,
    Sport = 2,
    Track = 3,
    Winter = 4,
    Off_Road = 5,
    Tow_Haul = 6,
    Hold = 7,
    Mountain = 8,
    Personal = 9,
    Custom = 10,
    AWD = 11,
    Economy = 12,
    Automatic = 13,
    EV = 14,
    Grade_Braking = 15,
    Exhaust_Brake = 16,
    Active_Rev_Match = 17,
    Num2WD = 18,
    Comfort = 19,
    Start_Stop_Disable = 20,
    Crawl = 21,
    Charge_Plus = 22,
    Baja = 23,
    Max_Power = 24,
    Boat_Ramp = 25,
};

enum class DM8Status : int32_t {
    Inactive = 0,
    Active = 1,
};

enum class DMBlkhdDrAutoClsTmCstChgSetReq : int32_t {
    No_Action = 0,
    Standard = 1,
    Extended = 2,
    Keep_Open = 3,
};

enum class DMBlkhdDrAutoClsTmCstCurrSetVal : int32_t {
    Setting_Unknown = 0,
    Standard = 1,
    Extended = 2,
    Keep_Open = 3,
};

enum class DMBlkhdDrOpnVehOffCstChgSetReq : int32_t {
    No_Action = 0,
    Off = 1,
    On = 2,
};

enum class DMBlkhdDrOpnVehOffCstCurrSetVal : int32_t {
    Setting_Unknown = 0,
    Off = 1,
    On = 2,
};

enum class DMBlkhdDrUnlckPrkCstChgSetReq : int32_t {
    No_Action = 0,
    Off = 1,
    On = 2,
};

enum class DMBlkhdDrUnlckPrkCstCurrSetVal : int32_t {
    Setting_Unknown = 0,
    Off = 1,
    On = 2,
};

enum class DMBlkhdDrUnltchPrkCstChgSetReq : int32_t {
    No_Action = 0,
    Off = 1,
    On = 2,
};

enum class DMBlkhdDrUnltchPrkCstCurrSetVal : int32_t {
    Setting_Unknown = 0,
    Off = 1,
    On = 2,
};

enum class DMCabLgtPrkCstChgSetReq : int32_t {
    No_Action = 0,
    Off = 1,
    On = 2,
};

enum class DMCabLgtPrkCstCurrSetVal : int32_t {
    Setting_Unknown = 0,
    Off = 1,
    On = 2,
};

enum class DMCrbsdDrUnlckPrkCstChgSetReq : int32_t {
    No_Action = 0,
    Off = 1,
    On = 2,
};

enum class DMCrbsdDrUnlckPrkCstCurrSetVal : int32_t {
    Setting_Unknown = 0,
    Off = 1,
    On = 2,
};

enum class DMDrvrDrUnlckPrkCstChgSetReq : int32_t {
    No_Action = 0,
    Off = 1,
    On = 2,
};

enum class DMDrvrDrUnlckPrkCstCurrSetVal : int32_t {
    Setting_Unknown = 0,
    Off = 1,
    On = 2,
};

enum class DMHrnOutPrkCstChgSetReq : int32_t {
    No_Action = 0,
    Off = 1,
    On = 2,
};

enum class DMHrnOutPrkCstCurrSetVal : int32_t {
    Setting_Unknown = 0,
    Off = 1,
    On = 2,
};

enum class DMPDAutoClsTmLFCstChgSetReq : int32_t {
    No_Action = 0,
    Standard = 1,
    Extended = 2,
    Keep_Open = 3,
};

enum class DMPDAutoClsTmLFCstCurrSetVal : int32_t {
    Setting_Unknown = 0,
    Standard = 1,
    Extended = 2,
    Keep_Open = 3,
};

enum class DMPDAutoClsTmRFCstChgSetReq : int32_t {
    No_Action = 0,
    Standard = 1,
    Extended = 2,
    Keep_Open = 3,
};

enum class DMPDAutoClsTmRFCstCurrSetVal : int32_t {
    Setting_Unknown = 0,
    Standard = 1,
    Extended = 2,
    Keep_Open = 3,
};

enum class DMPDClsOutofPrkLFCstChgSetReq : int32_t {
    No_Action = 0,
    Off = 1,
    On = 2,
};

enum class DMPDClsOutofPrkLFCstCurrSetVal : int32_t {
    Setting_Unknown = 0,
    Off = 1,
    On = 2,
};

enum class DMPDClsOutofPrkRFCstChgSetReq : int32_t {
    No_Action = 0,
    Off = 1,
    On = 2,
};

enum class DMPDClsOutofPrkRFCstCurrSetVal : int32_t {
    Setting_Unknown = 0,
    Off = 1,
    On = 2,
};

enum class DMPDDOBlkhdDrOpnLFCstChgSetReq : int32_t {
    No_Action = 0,
    Off = 1,
    On = 2,
};

enum class DMPDDOBlkhdDrOpnLFCstCurrSetVal : int32_t {
    Setting_Unknown = 0,
    Off = 1,
    On = 2,
};

enum class DMPDDOBlkhdDrOpnRFCstChgSetReq : int32_t {
    No_Action = 0,
    Off = 1,
    On = 2,
};

enum class DMPDDOBlkhdDrOpnRFCstCurrSetVal : int32_t {
    Setting_Unknown = 0,
    Off = 1,
    On = 2,
};

enum class DMSDrwDrvrCstChgSetReq : int32_t {
    No_Action = 0,
    Off = 1,
    Normal = 2,
    Low_Sensitivity = 3,
};

enum class DMSDrwDrvrCstCurrSetVal : int32_t {
    Setting_Unknown = 0,
    Off = 1,
    Normal = 2,
    Low_Sensitivity = 3,
};

enum class DMSDrwDrvrDispLvl : int32_t {
    No_Indication = 0,
    Num4_bars = 1,
    Num3_bars = 2,
    Num2_bars = 3,
    Num1_bar = 4,
    Num1_bar_pulse = 5,
};

enum class DMSDrwDrvrIndReq : int32_t {
    Indicator_Off = 0,
    White_Indicator = 1,
    Green_Indicator = 2,
    Amber_Indicator = 3,
    Amber_Flashing_Indicator = 4,
    Red_Indicator = 5,
};

enum class DMSDrwIntnDrvrLvl1ChmEvntStat : int32_t {
    No_Action = 0,
    Active = 1,
    Cancel_Chime = 2,
};

enum class DMSDrwIntnDrvrLvl2ChmEvntStat : int32_t {
    No_Action = 0,
    Active = 1,
    Cancel_Chime = 2,
};

enum class DMSDrwIntnDrvrWrnIndReq : int32_t {
    No_Indication = 0,
    Level_1 = 1,
    Level_2 = 2,
    Level_3 = 3,
    Level_4a = 4,
    Level_4b = 5,
    Level_4c = 6,
    Inattentive_Alert = 7,
    Drowsy_Off = 8,
    Inattentive_Off = 9,
    Failed = 10,
    Unavailable = 11,
    Asleep = 12,
    Unresponsive = 13,
    Degraded = 14,
    reserved = 15,
};

enum class DMSDrwIntnWrnDrvrResp : int32_t {
    No_Action = 0,
    Dismiss = 1,
};

enum class DMSIP_DrvrAttnStatAuth : int32_t {
    Unknown = 0,
    Attention_is_On_Road = 1,
    Attention_is_Off_Road = 2,
    Attention_is_Driver_s_Lap = 3,
    Attention_is_Center_Console_Radio = 4,
    Driver_s_Eyes_Fully_Closed = 5,
    Driver_Window_Mirror = 6,
    Passenger_Window_Mirror = 7,
    Rear_View_Mirror = 8,
    Overhead_Console = 9,
    No_Driver = 10,
    Front_IPC = 11,
};

enum class DMSIntnDrvrCstChgSetReq : int32_t {
    No_Action = 0,
    Off = 1,
    On = 2,
};

enum class DMSIntnDrvrCstCurrSetVal : int32_t {
    Setting_Unknown = 0,
    Off = 1,
    On = 2,
};

enum class DMSIntnDrvrDispFcsInd : int32_t {
    Unknown = 0,
    Off_Road = 1,
    On_Road = 2,
};

enum class DMSIntnDrvrDispLvl : int32_t {
    No_Indication = 0,
    Num4_bars = 1,
    Num3_bars = 2,
    Num2_bars = 3,
    Num1_bar = 4,
    Num1_bar_pulse = 5,
};

enum class DMSIntnDrvrIndReq : int32_t {
    Indicator_Off = 0,
    White_Indicator = 1,
    Green_Indicator = 2,
    Amber_Indicator = 3,
    Amber_Flashing_Indicator = 4,
    Red_Indicator = 5,
};

enum class DRCDNDP_DRCAvgDrvnSrcAuth : int32_t {
    Transmission_Output_Speed = 0,
    Wheel_Speed = 1,
};

enum class DayTmTlLtsCstChgSetReq : int32_t {
    NO_ACTION = 0,
    OFF = 1,
    ON = 2,
    RESERVED_3 = 3,
    RESERVED_4 = 4,
    RESERVED_5 = 5,
    RESERVED_6 = 6,
    RESERVED_7 = 7,
};

enum class DaytimeTlLghtsCstCurSetVal : int32_t {
    SETTING_UNKNOWN = 0,
    OFF = 1,
    ON = 2,
    RESERVED_3 = 3,
    RESERVED_4 = 4,
    RESERVED_5 = 5,
    RESERVED_6 = 6,
    RESERVED_7 = 7,
};

enum class DisPrfMdRq : int32_t {
    No_Action = 0,
    Normal = 1,
    Tour = 2,
    Sport = 3,
    Track = 4,
    Performance_Mode_5 = 5,
    Performance_Mode_6 = 6,
    Performance_Mode_7 = 7,
};

enum class DispMeasSys : int32_t {
    Metric = 0,
    English = 1,
};

enum class DispMeasSysExtnd : int32_t {
    US = 0,
    IMPERIAL = 1,
    Metric_KM_L = 2,
    Metric_L_100KM = 3,
};

enum class DlvryModeVwgCstChgSetReq : int32_t {
    No_Action = 0,
    Off = 1,
    On = 2,
};

enum class DlvryModeVwgCstCurrSetVal : int32_t {
    Setting_Unknown = 0,
    Off = 1,
    On = 2,
};

enum class DlvryModeWrnIndReq : int32_t {
    No_Indication = 0,
    On = 1,
    Off = 2,
    Fault = 3,
    Keyoff = 4,
};

enum class DrExtHndlActnStatLF : int32_t {
    INACTIVE = 0,
    ACTIVE = 1,
};

enum class DrExtHndlActnStatLR : int32_t {
    INACTIVE = 0,
    ACTIVE = 1,
};

enum class DrExtHndlActnStatRF : int32_t {
    INACTIVE = 0,
    ACTIVE = 1,
};

enum class DrExtHndlActnStatRR : int32_t {
    INACTIVE = 0,
    ACTIVE = 1,
};

enum class DrIntHndlActnStatLF : int32_t {
    INACTIVE = 0,
    ACTIVE = 1,
};

enum class DrIntHndlActnStatLR : int32_t {
    INACTIVE = 0,
    ACTIVE = 1,
};

enum class DrIntHndlActnStatRF : int32_t {
    INACTIVE = 0,
    ACTIVE = 1,
};

enum class DrIntHndlActnStatRR : int32_t {
    INACTIVE = 0,
    ACTIVE = 1,
};

enum class DrLckLFStsAuth : int32_t {
    Unknown = 0,
    Locked = 1,
    Unlocked = 2,
};

enum class DrLckLRStsAuth : int32_t {
    Unknown = 0,
    Locked = 1,
    Unlocked = 2,
};

enum class DrLckRFStsAuth : int32_t {
    Unknown = 0,
    Locked = 1,
    Unlocked = 2,
};

enum class DrLckRRStsAuth : int32_t {
    Unknown = 0,
    Locked = 1,
    Unlocked = 2,
};

enum class DrSeltdEngyXferVirtCtlSeltnVal : int32_t {
    No_Request = 0,
    Disabled = 1,
    Enabled = 2,
};

enum class DrSeltdOtltOfPwMdVirCtlNAlwdSts : int32_t {
    No_Action = 0,
    System_Faulted_Service_Needed = 1,
    System_Faulted_Customer_Action = 2,
    Vehicle_Off = 3,
    GFCI_Fault = 4,
    SOC_Low = 5,
    Vehicle_Conditions_Not_Met = 6,
};

enum class DrSeltdOtltOffPwMdVirCtlSeltnVl : int32_t {
    No_Request = 0,
    Disabled = 1,
    Enabled = 2,
};

enum class DrSeltdOtltOnPwMdVirCtlSeltnVl : int32_t {
    No_Request = 0,
    Disabled = 1,
    Enabled = 2,
};

enum class DrSeltdOtltOnPwrModVirtCtlAllwd : int32_t {
    Not_Allowed = 0,
    Allowed = 1,
};

enum class DrSeltdOtltOnPwrModVirtCtlAval : int32_t {
    Not_Available = 0,
    Available = 1,
};

enum class DrSeltdSpdLmtrAutoMdSpLmStsAuth : int32_t {
    No_Set_Speed_Change = 0,
    Proposed_Speed_Limit_Change = 1,
    Accepted_Speed_Limit_Change = 2,
    Declined_Speed_Limit_Change = 3,
};

enum class DrSeltdSpdLmtrSetSpdLimRchdAuth : int32_t {
    No_Limit_Reached = 0,
    High_Limit_Reached = 1,
    Low_Limit_Reached = 2,
    Reserved = 3,
};

enum class DrSeltdSpdLmtrSetTypActvAuth : int32_t {
    Off = 0,
    Manual = 1,
    Auto = 2,
    Reserved = 3,
};

enum class DrvModeConfDrvrResp : int32_t {
    No_Indication = 0,
    Baja_ESC_Confirm = 1,
    Baja_ESC_Cancel = 2,
    Terrain_ESC_Confirm = 3,
    Terrain_ESC_Cancel = 4,
    Response_5 = 5,
    Response_6 = 6,
    Response_7 = 7,
    Response_8 = 8,
    Response_9 = 9,
    Response_10 = 10,
    Response_11 = 11,
    Response_12 = 12,
    Response_13 = 13,
    Response_14 = 14,
    Response_15 = 15,
};

enum class DrvModeConfIndReq : int32_t {
    No_Indication = 0,
    Baja_ESC_Reduced = 1,
    Terrain_ESC_Off = 2,
    Max_Power = 3,
    Confirmation_4 = 4,
    Confirmation_5 = 5,
    Confirmation_6 = 6,
    Confirmation_7 = 7,
};

enum class DrvModeVisScreenSts : int32_t {
    No_Action = 0,
    Custom = 1,
    Personal = 2,
    Sport = 3,
    Snow_Ice = 4,
    Weather = 5,
    Tour = 6,
    Track = 7,
    Offroad = 8,
    TowHaul = 9,
    PerformanceSportPlus = 10,
    Terrain = 11,
    Baja = 12,
    BoatRamp = 13,
};

enum class DrvShftCntrlTrgtGr : int32_t {
    Unknown = 0,
    First_Gear = 1,
    Second_Gear = 2,
    Third_Gear = 3,
    Fourth_Gear = 4,
    Fifth_Gear = 5,
    Sixth_Gear = 6,
    Seventh_Gear = 7,
    Eighth_Gear = 8,
    Ninth_Gear = 9,
    Tenth_Gear = 10,
};

enum class DrvStBltRmIndReq : int32_t {
    OFF = 0,
    ON = 1,
    Num0_5_Hz = 2,
    Num1_Hz = 3,
    Num2_Hz = 4,
    Num4_Hz = 5,
    RESERVED_1 = 6,
    RESERVED_2 = 7,
};

enum class DrvrAlrtTypCstChgStReq : int32_t {
    SETTING_UNKNOWN = 0,
    CHIME = 1,
    SEAT = 2,
    RESERVED_3 = 3,
    RESERVED_4 = 4,
    RESERVED_5 = 5,
    RESERVED_6 = 6,
    RESERVED_7 = 7,
};

enum class DrvrSeltdAutoGenrVirtCtlReq : int32_t {
    No_Action = 0,
    Off = 1,
    On = 2,
};

enum class DrvrSeltdConf : int32_t {
    NO_ACTION = 0,
    SETTINGS_ACCEPTED = 1,
    SETTINGS_CANCELED = 2,
    MENU_ERROR_EVENT = 3,
};

enum class DrvrSeltdEngyXferVirtCtlAllwd : int32_t {
    Not_Allowed = 0,
    Allowed = 1,
};

enum class DrvrSeltdEngyXferVirtCtlAval : int32_t {
    Not_Available = 0,
    Available = 1,
};

enum class DrvrSeltdEngyXferVirtCtlReq : int32_t {
    No_Request = 0,
    Disabled = 1,
    Enabled = 2,
};

enum class DrvrSeltdOtltOffPwMdVirCtlAllwd : int32_t {
    Not_Allowed = 0,
    Allowed = 1,
};

enum class DrvrSeltdOtltOffPwrMdVirCtlAvl : int32_t {
    Not_Available = 0,
    Available = 1,
};

enum class DrvrSeltdOtltOffPwrMdVirCtlRq : int32_t {
    No_Request = 0,
    Disabled = 1,
    Enabled = 2,
};

enum class DrvrSeltdOtltOnPwrModVirtCtlReq : int32_t {
    No_Request = 0,
    Disabled = 1,
    Enabled = 2,
};

enum class DrvrSeltdSpdLmtrIndReq : int32_t {
    No_Action = 0,
    Driver_Selected_Speed_Limiter_Telltale_Off = 1,
    Driver_Selected_Speed_Limiter_Unavailable_Telltale_On = 2,
    Driver_Selected_Speed_Limiter_White_Telltale_On = 3,
    Driver_Selected_Speed_Limiter_Green_Telltale_On = 4,
};

enum class DrvrSeltdSpdLmtrVirtCtlAllwd : int32_t {
    Not_Allowed = 0,
    Allowed = 1,
};

enum class DrvrSeltdSpdLmtrVirtCtlAval : int32_t {
    Not_Available = 0,
    Available = 1,
};

enum class DrvrSeltdSpdLmtrVirtCtlReq : int32_t {
    No_Action = 0,
    Manual = 1,
    Auto = 2,
    Off = 3,
};

enum class DrvrSeltdSpdLmtrVirtCtlSeltnAvl : int32_t {
    Not_Available = 0,
    Manual_Only = 1,
    Manual_and_Auto = 2,
};

enum class DrvrSeltdTrlrPrsnt : int32_t {
    Trailer_Present = 0,
    No_Trailer = 1,
};

enum class DslEmnsOBDMrkt : int32_t {
    North_America = 0,
    LD_Europe = 1,
    HD_Europe = 2,
};

enum class DslExFldCnWrngIndRq : int32_t {
    No_Indication = 0,
    Warning_Level_1 = 1,
    Warning_Level_2 = 2,
    Warning_Level_3 = 3,
    Warning_Level_4 = 4,
    Warning_Level_5 = 5,
    Warning_Level_6 = 6,
    Warning_Level_7 = 7,
    Warning_Level_8 = 8,
    Warning_Level_9 = 9,
    Warning_Level_10 = 10,
    Warning_Level_11 = 11,
    Warning_Level_12 = 12,
    Warning_Level_13 = 13,
    Warning_Level_14 = 14,
    Warning_Level_15 = 15,
};

enum class DslExFldTpWrngIndRq : int32_t {
    No_Indication = 0,
    Warning_Level_1 = 1,
    Warning_Level_2 = 2,
    Warning_Level_3 = 3,
    Warning_Level_4 = 4,
    Warning_Level_5 = 5,
    Warning_Level_6 = 6,
    Warning_Level_7 = 7,
    Warning_Level_8 = 8,
    Warning_Level_9 = 9,
    Warning_Level_10 = 10,
    Warning_Level_11 = 11,
    Warning_Level_12 = 12,
    Warning_Level_13 = 13,
    Warning_Level_14 = 14,
    Warning_Level_15 = 15,
};

enum class DslExNxEmWrngIndRq : int32_t {
    No_Indication = 0,
    Warning_Level_1 = 1,
    Warning_Level_2 = 2,
    Warning_Level_3 = 3,
    Warning_Level_4 = 4,
    Warning_Level_5 = 5,
    Warning_Level_6 = 6,
    Warning_Level_7 = 7,
    Warning_Level_8 = 8,
    Warning_Level_9 = 9,
    Warning_Level_10 = 10,
    Warning_Level_11 = 11,
    Warning_Level_12 = 12,
    Warning_Level_13 = 13,
    Warning_Level_14 = 14,
    Warning_Level_15 = 15,
};

enum class DslExhFldDiagWrnIdRq : int32_t {
    No_Indication = 0,
    Warning_Level_1 = 1,
    Warning_Level_2 = 2,
    Warning_Level_3 = 3,
    Warning_Level_4 = 4,
    Warning_Level_5 = 5,
    Warning_Level_6 = 6,
    Warning_Level_7 = 7,
};

enum class DslExhFldQlyWrngIReq : int32_t {
    No_Indication = 0,
    Warning_Level_1 = 1,
    Warning_Level_2 = 2,
    Warning_Level_3 = 3,
    Warning_Level_4 = 4,
    Warning_Level_5 = 5,
    Warning_Level_6 = 6,
    Warning_Level_7 = 7,
    Warning_Level_8 = 8,
    Warning_Level_9 = 9,
    Warning_Level_10 = 10,
    Warning_Level_11 = 11,
    Warning_Level_12 = 12,
    Warning_Level_13 = 13,
    Warning_Level_14 = 14,
    Warning_Level_15 = 15,
};

enum class DslExhFldWrngIdRqER : int32_t {
    No_Indication = 0,
    Warning_Level_1 = 1,
    Warning_Level_2 = 2,
    Warning_Level_3 = 3,
    Warning_Level_4 = 4,
    Warning_Level_5 = 5,
    Warning_Level_6 = 6,
    Warning_Level_7 = 7,
    Warning_Level_8 = 8,
    Warning_Level_9 = 9,
    Warning_Level_10 = 10,
    Warning_Level_11 = 11,
    Warning_Level_12 = 12,
    Warning_Level_13 = 13,
    Warning_Level_14 = 14,
    Warning_Level_15 = 15,
};

enum class EASSI_StrtStpSt : int32_t {
    Engine_Off = 0,
    Engine_Running = 1,
    Engine_Starting = 2,
    Engine_Stopping = 3,
};

enum class EDADS_CrntFwdMsdGr : int32_t {
    None = 0,
    First_Gear = 1,
    Second_Gear = 2,
    Third_Gear = 3,
    Fourth_Gear = 4,
    Fifth_Gear = 5,
    Sixth_Gear = 6,
    Seventh_Gear = 7,
    Eighth_Gear = 8,
    Ninth_Gear = 9,
    Tenth_Gear = 10,
    Unused = 15,
};

enum class EDADS_RcmndtFwdGr : int32_t {
    None = 0,
    First_Gear = 1,
    Second_Gear = 2,
    Third_Gear = 3,
    Fourth_Gear = 4,
    Fifth_Gear = 5,
    Sixth_Gear = 6,
    Seventh_Gear = 7,
    Eighth_Gear = 8,
    Ninth_Gear = 9,
    Tenth_Gear = 10,
    Unused = 15,
};

enum class EDADS_ShftIndSt : int32_t {
    Shift_Down = 0,
    Shift_Up = 1,
    No_Shift = 2,
};

enum class EGI3P_CnvtTpSpLimRspTypAuth : int32_t {
    Inactive = 0,
    Faulted = 1,
    Safety_woBrake = 2,
    Safety_wBrake = 3,
    OBD = 4,
    nonOBD = 5,
    Legislated = 6,
};

enum class ELWWIP_BrkLmpLtCmdAuth : int32_t {
    No_Action = 0,
    Off = 1,
    On = 2,
    Emergency_Brake_Flashing = 3,
    Police_Flashing = 4,
};

enum class ELWWIP_BrkLmpRtCmdAuth : int32_t {
    No_Action = 0,
    Off = 1,
    On = 2,
    Emergency_Brake_Flashing = 3,
    Police_Flashing = 4,
};

enum class ELWWIP_CHMSLCmdAuth : int32_t {
    No_Action = 0,
    Off = 1,
    On = 2,
    Emergency_Brake_Flashing = 3,
};

enum class ELWWIP_RvrsLmpCmdAuth : int32_t {
    Off = 0,
    On = 1,
    Flashing = 2,
};

enum class ELWWIP_TrlrRvrsLmpsCmdAuth : int32_t {
    Off = 0,
    On = 1,
    Flashing = 2,
};

enum class ELWWIP_WprFrtFtrReqAuth : int32_t {
    Wiper_Front_Stop = 0,
    Wiper_Front_Crank_Suspend = 1,
    Wiper_Front_Depressed_Park = 2,
    Wiper_Front_Park = 3,
    Wiper_Front_Winter_Park = 4,
    Wiper_Front_Service_Park = 5,
    Wiper_Front_Intermittent_5 = 6,
    Wiper_Front_Intermittent_4 = 7,
    Wiper_Front_Intermittent_3 = 8,
    Wiper_Front_Intermittent_2 = 9,
    Wiper_Front_Intermittent_1 = 10,
    Wiper_Front_Low_Wipe = 11,
    Wiper_Front_High_Wipe = 12,
};

enum class EPBSP_ElecPrkBrkApplStsAuth : int32_t {
    Unknown = 0,
    Applied = 1,
    Released = 2,
    Dynamic_Apply = 3,
    In_Progress = 4,
};

enum class EPBSP_ElecPrkBrkAvlStsAuth : int32_t {
    Unavailable = 0,
    Available = 1,
    Failed = 2,
};

enum class EPBStpOnBrkToRelPrkBrkIndReq : int32_t {
    OFF = 0,
    ON = 1,
    Num0_5_Hz = 2,
    Num1_Hz = 3,
    Num2_Hz = 4,
    Num4_Hz = 5,
    RESERVED_1 = 6,
    RESERVED_2 = 7,
};

enum class ESCLP_ElecStrgColLckStsAuth : int32_t {
    Locked = 0,
    Inbetween = 1,
    Unlocked = 2,
    Unknown = 3,
};

enum class ESCSpdLtdIndReq : int32_t {
    No_Indication = 0,
    Countdown = 1,
    Limited = 2,
};

enum class ESP_EngSpdStAuth : int32_t {
    Normal_Operation = 0,
    Degraded_Operation = 1,
    Invalid = 2,
};

enum class ESRSDP_ElecShftRngSecDispAuth : int32_t {
    No_Display = 0,
    Park_Nominal = 1,
    Reverse_Nominal = 2,
    Neutral_Nominal = 3,
    Drive_Nominal = 4,
    Low_Nominal = 5,
    Manual_Nominal = 6,
    Park_Requested_And_In_Progress = 7,
    Reverse_Requested_And_In_Progress = 8,
    Neutral_Requested_And_In_Progress = 9,
    Drive_Requested_And_In_Progress = 10,
    Manual_Requested_And_In_Progress = 11,
    Park_Requested_And_Denied = 12,
};

enum class ETRPP_ElcTransRngPriAuth : int32_t {
    NO_REQUEST = 0,
    PARK = 1,
    REVERSE = 2,
    NEUTRAL = 3,
    DRIVE = 4,
    LOW_RANGE = 5,
    MANUAL_RANGE = 6,
};

enum class EVMESS_StrtPhs : int32_t {
    No_Indication = 0,
    Complete = 1,
    Phase_1 = 2,
    Phase_2 = 3,
    Phase_3 = 4,
    Skip_Phase_2 = 5,
};

enum class EVSECmndPwrLimSts : int32_t {
    No_Action = 0,
    Normal = 1,
    Station_Derating = 2,
    Vehicle_Derating = 3,
};

enum class ElecAxlBstGageIndReq : int32_t {
    Normal = 0,
    Temporarily_Unavailable = 1,
    Unavailable = 2,
};

enum class ElecAxlUnvIndReq : int32_t {
    No_Indication = 0,
    Limited = 1,
    Faulted = 2,
};

enum class ElecPSTrqOvrlySts : int32_t {
    Unknown = 0,
    Temporarily_Inhibited = 1,
    Inactive = 2,
    Active = 3,
    Temporarily_Limited = 4,
    Failed = 5,
};

enum class ElecPrkBrkCtnChiEveStat : int32_t {
    NO_ACTION = 0,
    ACTIVE = 1,
    CANCEL_CHIME = 2,
};

enum class ElecPrkBrkFixDurChiEveStat : int32_t {
    NO_ACTION = 0,
    ACTIVE = 1,
    CANCEL_CHIME = 2,
};

enum class ElecPrkBrkSysDisIndReq : int32_t {
    OFF = 0,
    ALERT_1 = 1,
    ALERT_2 = 2,
    ALERT_3 = 3,
    ALERT_4 = 4,
    ALERT_5 = 5,
    ALERT_6 = 6,
    ALERT_7 = 7,
};

enum class ElecRateSchedSsnReq : int32_t {
    No_Action = 0,
    Summer = 1,
    Winter = 2,
    Yearly = 3,
};

enum class ElecRateSchedSsnResp : int32_t {
    No_Action = 0,
    Summer = 1,
    Winter = 2,
    Yearly = 3,
};

enum class ElecRateSchedSsnStrtMthReq : int32_t {
    No_Action = 0,
    January = 1,
    February = 2,
    March = 3,
    April = 4,
    May = 5,
    June = 6,
    July = 7,
    August = 8,
    September = 9,
    October = 10,
    November = 11,
    December = 12,
};

enum class ElecRateSchedSsnStrtMthResp : int32_t {
    No_Action = 0,
    January = 1,
    February = 2,
    March = 3,
    April = 4,
    May = 5,
    June = 6,
    July = 7,
    August = 8,
    September = 9,
    October = 10,
    November = 11,
    December = 12,
};

enum class ElecShfPriLoManSeltnIndReq : int32_t {
    No_Indication = 0,
    Low = 1,
    Manual = 2,
};

enum class ElecShftPrTwoGrsSelIndRq : int32_t {
    OFF = 0,
    PARK = 1,
    NEUTRAL = 2,
    DRIVE = 3,
};

enum class ElecVehAllWhlDrvUnvIndReq : int32_t {
    No_Indication = 0,
    Limited = 1,
    Faulted = 2,
};

enum class ElecVehAllWhlDrvUnvWrnIndReq : int32_t {
    No_Indication = 0,
    Temporarily_Unavailable = 1,
    Faulted = 2,
};

enum class ElvtdIdlCstChgSetReq : int32_t {
    No_Action = 0,
    Off = 1,
    On = 2,
};

enum class ElvtdIdlCstCrStVal : int32_t {
    No_Action = 0,
    Off = 1,
    On = 2,
};

enum class EmrgRespSysTyp : int32_t {
    Unknown = 0,
    none = 1,
    Onstar = 2,
    eCall = 3,
    ChevyStar = 4,
    ERA = 5,
    Generic = 6,
};

enum class EmsRltCustMdPTCstChngSetReq : int32_t {
    No_Action = 0,
    Custom_Mode_1 = 1,
    Custom_Mode_2 = 2,
    Custom_Mode_3 = 3,
    Custom_Mode_4 = 4,
    Custom_Mode_5 = 5,
    Custom_Mode_6 = 6,
    Custom_Mode_7 = 7,
};

enum class EmsRltCustMdSndCstChngSetReq : int32_t {
    No_Action = 0,
    Custom_Mode_1 = 1,
    Custom_Mode_2 = 2,
    Custom_Mode_3 = 3,
    Custom_Mode_4 = 4,
    Custom_Mode_5 = 5,
    Custom_Mode_6 = 6,
    Custom_Mode_7 = 7,
};

enum class EmsRltPrsnlMdSndCstChngSetReq : int32_t {
    No_Action = 0,
    Personal_Mode_1 = 1,
    Personal_Mode_2 = 2,
    Personal_Mode_3 = 3,
    Personal_Mode_4 = 4,
    Personal_Mode_5 = 5,
    Personal_Mode_6 = 6,
    Personal_Mode_7 = 7,
};

enum class EngAftRunIndReq : int32_t {
    No_Action = 0,
    No_Indication = 1,
    Idle_Needed = 2,
    Overheated = 3,
    Interrupted = 4,
};

enum class EngAirFiltMonDrvrReq : int32_t {
    No_Action = 0,
    Enable = 1,
    Disable = 2,
    Reset = 3,
};

enum class EngAirFiltMonSts : int32_t {
    OK = 0,
    Replace_Air_Filter_Soon = 1,
    Replace_Air_Filter_Now = 2,
    Fault_Present = 3,
    Disabled = 4,
    No_Action = 5,
};

enum class EngCmptHotWrnIndReq : int32_t {
    Off = 0,
    Service = 1,
    Hot_Idle = 2,
    Hot = 3,
};

enum class EngCylDctvMd : int32_t {
    All_Cylinders_Active = 0,
    Deactivation_In_Progress = 1,
    Half_of_Total_Cylinders_Active = 2,
    Reactivation_In_Progress = 3,
};

enum class EngEmsRltMlfIndRq : int32_t {
    Continuous_Indication = 0,
    No_Indication = 1,
    Flashing_1_Hertz_Indication = 2,
    Flashing_2_Hertz_Indication = 3,
    Flashing_0_5_Hertz_Indication = 4,
};

enum class EngOilLvlStsIndReq : int32_t {
    No_Indication = 0,
    OK = 1,
    Low = 2,
    High = 3,
    Service = 4,
    Too_Low = 5,
};

enum class EngSndPerfModeReq : int32_t {
    No_Action = 0,
    Tour = 1,
    Sport_OffRoad = 2,
    Track = 3,
    Stealth = 4,
    Max_Power = 5,
    Terrain = 6,
    Performance_Mode_7 = 7,
};

enum class EngyEconMeasUnt : int32_t {
    Distance_Per_Electrical_Energy = 0,
    Distance_Per_Volume_Equivalent = 1,
    Electrical_Energy_Per_Distance = 2,
    Volume_Equivalent_Per_Distance = 3,
    Electrical_Energy_Per_Distance_x_100 = 4,
    Volume_Equivalent_Per_Distance_x_100 = 5,
};

enum class EnhdServsVehTopSpdLimRespTyp : int32_t {
    Inactive = 0,
    Faulted = 1,
    Safety_woBrake = 2,
    Safety_wBrake = 3,
    OBD = 4,
    nonOBD = 5,
    Legislated = 6,
};

enum class EnhdSrvsFrtStrCmptClsrLckRqAuth : int32_t {
    No_Request = 0,
    Unlock = 1,
    Lock = 2,
};

enum class EnrgMgtLdShdRq : int32_t {
    No_Load_Shedding = 0,
    Load_Shed_Level_1 = 1,
    Load_Shed_Level_2 = 2,
    Load_Shed_Level_3 = 3,
    Load_Shed_Level_4 = 4,
};

enum class EsyExtCstChgSetReq : int32_t {
    NO_ACTION = 0,
    OFF = 1,
    ON = 2,
    RESERVED_3 = 3,
    RESERVED_4 = 4,
    RESERVED_5 = 5,
    RESERVED_6 = 6,
    RESERVED_7 = 7,
};

enum class EsyExtCstCurSetVal : int32_t {
    SETTING_UNKNOWN = 0,
    OFF = 1,
    ON = 2,
    RESERVED_3 = 3,
    RESERVED_4 = 4,
    RESERVED_5 = 5,
    RESERVED_6 = 6,
    RESERVED_7 = 7,
};

enum class ExitLghtngCstChgSetReq : int32_t {
    NO_ACTION = 0,
    OFF = 1,
    THIRTY_SECONDS_DEFAULT = 2,
    ONE_MINUTE = 3,
    TWO_MINUTES = 4,
    RESERVED_5 = 5,
    RESERVED_6 = 6,
    RESERVED_7 = 7,
};

enum class ExtLghtCstCurSetVal : int32_t {
    SETTING_UNKNOWN = 0,
    OFF = 1,
    THIRTY_SECONDS_DEFAULT = 2,
    ONE_MINUTE = 3,
    TWO_MINUTES = 4,
    RESERVED_5 = 5,
    RESERVED_6 = 6,
    RESERVED_7 = 7,
};

enum class ExtdHillStrtAsstCstChgSetReq : int32_t {
    NO_ACTION = 0,
    EXTENDED_HOLD = 1,
    STANDARD_HOLD = 2,
    RESERVED_3 = 3,
    RESERVED_4 = 4,
    RESERVED_5 = 5,
    RESERVED_6 = 6,
    RESERVED_7 = 7,
};

enum class ExtdHillStrtAstCustCurSetVal : int32_t {
    SETTING_UNKNOWN = 0,
    EXTENDED_HOLD = 1,
    STANDARD_HOLD = 2,
    RESERVED_3 = 3,
    RESERVED_4 = 4,
    RESERVED_5 = 5,
    RESERVED_6 = 6,
    RESERVED_7 = 7,
};

enum class FAXVCHiPrtyFltChmEvntStat : int32_t {
    No_Action = 0,
    Active = 1,
    Cancel_Chime = 2,
};

enum class FAXVCInCtlChmEvntStat : int32_t {
    No_Action = 0,
    Active = 1,
    Cancel_Chime = 2,
};

enum class FAXVCLoPrtyFltChmEvntStat : int32_t {
    No_Action = 0,
    Active = 1,
    Cancel_Chime = 2,
};

enum class FAXVCMedPrtyFltChmEvntStat : int32_t {
    No_Action = 0,
    Active = 1,
    Cancel_Chime = 2,
};

enum class FAXVCSevPrtyFltChmEvntStat : int32_t {
    No_Action = 0,
    Active = 1,
    Cancel_Chime = 2,
};

enum class FCAACCGapSeltn : int32_t {
    Far = 0,
    Medium = 1,
    Near = 2,
    Off = 3,
    Unknown = 4,
};

enum class FCAGpSet : int32_t {
    FAR = 0,
    MEDIUM = 1,
    NEAR = 2,
    OFF = 3,
    UNKNOWN = 4,
    FAULTED = 5,
};

enum class FCASensCstChgSetReq : int32_t {
    No_Action = 0,
    Off = 1,
    Low = 2,
    Medium = 3,
    High = 4,
};

enum class FCASensCstCurrSetVal : int32_t {
    SettingUnknown = 0,
    Off = 1,
    Low = 2,
    Medium = 3,
    High = 4,
};

enum class FCATgtObjSeltnDatDynPrp : int32_t {
    Unknown = 0,
    Has_Never_Moved = 1,
    Has_Moved_But_Currently_Stopped = 2,
    Moving_In_Same_Direction_As_Host = 3,
    Moving_in_Opposite_Direction_As_Host = 4,
    Crossing_From_Right_To_Left = 5,
    Crossing_From_Left_To_Right = 6,
};

enum class FCATgtObjSeltnDatObjTyp : int32_t {
    Unknown = 0,
    Motorcycle = 1,
    Vehicle = 2,
    Truck = 3,
    Pedestrian = 4,
    Bicycle = 5,
};

enum class FCATgtObjSeltnDispSnsrCnfd : int32_t {
    None = 0,
    Low = 1,
    Medium = 2,
    High = 3,
};

enum class FCSS1_FrtCntrStckSldr1Prxmty : int32_t {
    NOPROXIMITY_NOTOUCH = 0,
    PROXIMITY_DETECTED = 1,
    TOUCH_DETECTED = 2,
    RESERVED = 3,
};

enum class FCSS2_FrtCntrStckSldr2Prxmty : int32_t {
    NOPROXIMITY_NOTOUCH = 0,
    PROXIMITY_DETECTED = 1,
    TOUCH_DETECTED = 2,
    RESERVED = 3,
};

enum class FCSS3_FrtCntrStckSldr3Prxmty : int32_t {
    NOPROXIMITY_NOTOUCH = 0,
    PROXIMITY_DETECTED = 1,
    TOUCH_DETECTED = 2,
    RESERVED = 3,
};

enum class FPARS_Lt : int32_t {
    OFF = 0,
    FAILED = 1,
    BLOCKED = 2,
    ATTACHED_OBJECT = 3,
    NO_OBJECT = 4,
    ZONE_1 = 5,
    ZONE_2 = 6,
    ZONE_3 = 7,
    ZONE_4 = 8,
    ZONE_5 = 9,
    ZONE_6 = 10,
    OFF_NO_FAULT = 11,
    RESERVED_1 = 12,
    RESERVED_2 = 13,
    RESERVED_3 = 14,
};

enum class FPARS_LtCntr : int32_t {
    OFF = 0,
    FAILED = 1,
    BLOCKED = 2,
    ATTACHED_OBJECT = 3,
    NO_OBJECT = 4,
    ZONE_1 = 5,
    ZONE_2 = 6,
    ZONE_3 = 7,
    ZONE_4 = 8,
    ZONE_5 = 9,
    ZONE_6 = 10,
    OFF_NO_FAULT = 11,
    RESERVED_1 = 12,
    RESERVED_2 = 13,
    RESERVED_3 = 14,
};

enum class FPARS_Rt : int32_t {
    OFF = 0,
    FAILED = 1,
    BLOCKED = 2,
    ATTACHED_OBJECT = 3,
    NO_OBJECT = 4,
    ZONE_1 = 5,
    ZONE_2 = 6,
    ZONE_3 = 7,
    ZONE_4 = 8,
    ZONE_5 = 9,
    ZONE_6 = 10,
    OFF_NO_FAULT = 11,
    RESERVED_1 = 12,
    RESERVED_2 = 13,
    RESERVED_3 = 14,
};

enum class FPARS_RtCntr : int32_t {
    OFF = 0,
    FAILED = 1,
    BLOCKED = 2,
    ATTACHED_OBJECT = 3,
    NO_OBJECT = 4,
    ZONE_1 = 5,
    ZONE_2 = 6,
    ZONE_3 = 7,
    ZONE_4 = 8,
    ZONE_5 = 9,
    ZONE_6 = 10,
    OFF_NO_FAULT = 11,
    RESERVED_1 = 12,
    RESERVED_2 = 13,
    RESERVED_3 = 14,
};

enum class FPLTLI_AuxPrkLmpLtCmd : int32_t {
    No_Action = 0,
    Off = 1,
    On = 2,
    Ramp_On = 3,
    Ramp_Off = 4,
};

enum class FPLTLI_AuxPrkLmpRtCmd : int32_t {
    No_Action = 0,
    Off = 1,
    On = 2,
    Ramp_On = 3,
    Ramp_Off = 4,
};

enum class FPLTLI_PrkLmpLtCmd : int32_t {
    No_Action = 0,
    Off = 1,
    On = 2,
    Ramp_On = 3,
    Ramp_Off = 4,
};

enum class FPLTLI_PrkLmpRtCmd : int32_t {
    No_Action = 0,
    Off = 1,
    On = 2,
    Ramp_On = 3,
    Ramp_Off = 4,
};

enum class FTLDI_LFSts : int32_t {
    Unknown = 0,
    No_Leak = 1,
    Slow_Leak = 2,
    Fast_Leak = 3,
};

enum class FTLDI_RFSts : int32_t {
    Unknown = 0,
    No_Leak = 1,
    Slow_Leak = 2,
    Fast_Leak = 3,
};

enum class FTPP_HdPrkLmpsCurrSeltnValAuth : int32_t {
    Unknown = 0,
    Off = 1,
    Auto = 2,
    Parking = 3,
    On = 4,
};

enum class FTPP_VirtCtlHdPrkLmpsAvalAuth : int32_t {
    Not_Available = 0,
    Available = 1,
};

enum class FllwgDstIndTmDstSel : int32_t {
    TIME = 0,
    DISTANCE = 1,
};

enum class FllwgTmDsplyMd : int32_t {
    NO_DISPLAY = 0,
    DEFAULT = 1,
    NORMAL = 2,
    LESS_THAN_MINIMUM = 3,
    GREATER_THAN_MAXIMUM = 4,
};

enum class FltDrvrActvRmtCstCurrSetVal : int32_t {
    Setting_Unknown = 0,
    Off = 1,
    On = 2,
};

enum class FourWhlDrvWrnIndReq : int32_t {
    No_Action = 0,
    No_Indication = 1,
    For_4WD_Low_Shift_Transmission_To_Neutral = 2,
    To_Exit_4WD_Low_Shift_Transmission_to_Neutral = 3,
    For_4WD_Low_Reduce_Speed = 4,
    To_Exit_4WD_Low_Reduce_Speed = 5,
    Reminder_Vehicle_Still_In_4WD_Low = 6,
    Num4WD_Shift_in_Progress = 7,
    Num4WD_Shift_Not_Allowed_Engine_Warming_Up = 8,
    Num4WD_Shift_Not_Allowed_Mismatched_Tire = 9,
    Num4WD_Shift_Not_Allowed_In_Park = 10,
    Apply_Brake_For_4WD_Shift = 11,
    No_4WD_Shifts_Allowed = 12,
    Reduce_Speed_For_4WD_Shift = 13,
    Turn_off_Engine_for_4WD_Shift = 14,
    For_4WD_Shift_Transmission_Neutral = 15,
};

enum class FrntPCMChmEvntStat : int32_t {
    NO_ACTION = 0,
    ACTIVE = 1,
    CANCEL_CHIME = 2,
};

enum class FrntPCMRspTypCstChgSetReq : int32_t {
    NO_ACTION = 0,
    OFF = 1,
    ALERT = 2,
    ALERT_AND_BRAKE = 3,
    ALERT_AND_BRAKE_AND_STEER = 4,
    RESERVED_5 = 5,
    RESERVED_6 = 6,
    RESERVED_7 = 7,
};

enum class FrntPCMRspTypCstCrStVal : int32_t {
    SETTING_UNKNOWN = 0,
    OFF = 1,
    ALERT = 2,
    ALERT_AND_BRAKE = 3,
    ALERT_AND_BRAKE_AND_STEER = 4,
    RESERVED_5 = 5,
    RESERVED_6 = 6,
    RESERVED_7 = 7,
};

enum class FrntPsSeatbeltStat : int32_t {
    Unknown = 0,
    Unfastened = 1,
    Fastened = 2,
};

enum class FrntPsStBltRmOccStat : int32_t {
    UNKNOWN = 0,
    EMPTY = 1,
    OCCUPIED = 2,
};

enum class FrntPsStbltRmIndReq : int32_t {
    OFF = 0,
    ON = 1,
    Num0_5_Hz = 2,
    Num1_Hz = 3,
    Num2_Hz = 4,
    Num4_Hz = 5,
    RESERVED_1 = 6,
    RESERVED_2 = 7,
};

enum class FrtClsrAccssVirtCtlAllwd : int32_t {
    Not_Allowed = 0,
    Allowed = 1,
};

enum class FrtClsrAccssVirtCtlAval : int32_t {
    Not_Available = 0,
    Available = 1,
};

enum class FrtClsrAccssVirtCtlReq : int32_t {
    No_Action = 0,
    Open = 1,
    Close = 2,
    Stop = 3,
};

enum class FrtCntrStckAllRelSw : int32_t {
    Released = 0,
    Pressed = 1,
};

enum class FrtCntrStckBackSw : int32_t {
    Released = 0,
    Pressed = 1,
};

enum class FrtCntrStckBnchBtnID_VirtSw : int32_t {
    Released = 0,
    Pressed = 1,
};

enum class FrtCntrStckBndSw : int32_t {
    Released = 0,
    Pressed = 1,
};

enum class FrtCntrStckDiscAuxSw : int32_t {
    Released = 0,
    Pressed = 1,
};

enum class FrtCntrStckEjectSw : int32_t {
    Released = 0,
    Pressed = 1,
};

enum class FrtCntrStckFvrtDnSw : int32_t {
    Released = 0,
    Pressed = 1,
};

enum class FrtCntrStckFvrtUpSw : int32_t {
    Released = 0,
    Pressed = 1,
};

enum class FrtCntrStckHomeSw : int32_t {
    Released = 0,
    Pressed = 1,
};

enum class FrtCntrStckHptcFdbkReq : int32_t {
    NO_ACTION = 0,
    TAP = 1,
    LONG_PRESS = 2,
    PRESS_HOLD_SCROLL = 3,
    PRESS_HOLD_END = 4,
    RESERVED_05 = 5,
    RESERVED_06 = 6,
    RESERVED_07 = 7,
    RESERVED_08 = 8,
    RESERVED_09 = 9,
    RESERVED_10 = 10,
    RESERVED_11 = 11,
    RESERVED_12 = 12,
    RESERVED_13 = 13,
    RESERVED_14 = 14,
    RESERVED_15 = 15,
};

enum class FrtCntrStckHptcFdbkStat : int32_t {
    FEEDBACK_OFF = 0,
    TAP = 1,
    LONG_PRESS = 2,
    PRESS_HOLD_SCROLL = 3,
    PRESS_HOLD_END = 4,
    RESERVED_05 = 5,
    RESERVED_06 = 6,
    RESERVED_07 = 7,
    RESERVED_08 = 8,
    RESERVED_09 = 9,
    RESERVED_10 = 10,
    RESERVED_11 = 11,
    RESERVED_12 = 12,
    RESERVED_13 = 13,
    RESERVED_14 = 14,
    RESERVED_15 = 15,
};

enum class FrtCntrStckLVMVidInLckd : int32_t {
    Not_Locked = 0,
    Locked = 1,
};

enum class FrtCntrStckMenuSw : int32_t {
    Released = 0,
    Pressed = 1,
};

enum class FrtCntrStckNextSw : int32_t {
    Released = 0,
    Pressed = 1,
};

enum class FrtCntrStckOptDskDrvDckStat : int32_t {
    DS_EMPTY = 0,
    DS_LOADING = 1,
    DS_READY = 2,
    DS_EJECT = 3,
    DS_READ_FORMAT_ERROR = 4,
    DS_STAT_5 = 5,
    DS_STAT_6 = 6,
    DS_STAT_7 = 7,
};

enum class FrtCntrStckPrevSw : int32_t {
    Released = 0,
    Pressed = 1,
};

enum class FrtCntrStckPriVidInLckd : int32_t {
    Not_Locked = 0,
    Locked = 1,
};

enum class FrtCntrStckPrxmtyGstr : int32_t {
    NO_ACTION = 0,
    PROX_GESTURE1 = 1,
    PROX_GESTURE2 = 2,
    PROX_GESTURE3 = 3,
    PROX_GESTURE4 = 4,
    PROX_GESTURE5 = 5,
    PROX_GESTURE6 = 6,
    PROX_GESTURE7 = 7,
};

enum class FrtCntrStckPrxmtyStat : int32_t {
    FAR = 0,
    NEAR = 1,
    TOUCH = 2,
    PRESS = 3,
    PROX_STAT4 = 4,
    PROX_STAT5 = 5,
    PROX_STAT6 = 6,
    PROX_STAT7 = 7,
};

enum class FrtCntrStckPwrSw : int32_t {
    Released = 0,
    Pressed = 1,
};

enum class FrtCntrStckStrgeUnlckSw : int32_t {
    Released = 0,
    Pressed = 1,
};

enum class FrtCntrStckSw23 : int32_t {
    Released = 0,
    Pressed = 1,
};

enum class FrtCntrStckSw24 : int32_t {
    Released = 0,
    Pressed = 1,
};

enum class FrtCntrStckSw25 : int32_t {
    Released = 0,
    Pressed = 1,
};

enum class FrtCntrStckSw26 : int32_t {
    Released = 0,
    Pressed = 1,
};

enum class FrtCntrStckSw27 : int32_t {
    Released = 0,
    Pressed = 1,
};

enum class FrtCntrStckSw28 : int32_t {
    Released = 0,
    Pressed = 1,
};

enum class FrtCntrStckSw29 : int32_t {
    Released = 0,
    Pressed = 1,
};

enum class FrtCntrStckSw30 : int32_t {
    Released = 0,
    Pressed = 1,
};

enum class FrtCntrStckSw31 : int32_t {
    Released = 0,
    Pressed = 1,
};

enum class FrtCntrStckSw32 : int32_t {
    Released = 0,
    Pressed = 1,
};

enum class FrtCntrStckTag1Sw : int32_t {
    Released = 0,
    Pressed = 1,
};

enum class FrtCntrStckTag2Sw : int32_t {
    Released = 0,
    Pressed = 1,
};

enum class FrtCntrStckTag3Sw : int32_t {
    Released = 0,
    Pressed = 1,
};

enum class FrtCntrStckTag4Sw : int32_t {
    Released = 0,
    Pressed = 1,
};

enum class FrtCntrStckTag5Sw : int32_t {
    Released = 0,
    Pressed = 1,
};

enum class FrtCntrStckToneSw : int32_t {
    Released = 0,
    Pressed = 1,
};

enum class FrtCntrStckVidInSel : int32_t {
    Primary_Video_Input = 0,
    Reserved = 1,
    LVM_Video_Input = 2,
};

enum class FrtCntrStckVolDnSw : int32_t {
    Released = 0,
    Pressed = 1,
};

enum class FrtCntrStckVolUpSw : int32_t {
    Released = 0,
    Pressed = 1,
};

enum class FrtPsStInfoDspPwrBtnCurrSlnVal : int32_t {
    Unknown = 0,
    On = 1,
    Off = 2,
};

enum class FrtPsngrAirbagDsblVisIndCmd : int32_t {
    On = 0,
    Off = 1,
    Flash = 2,
};

enum class FrtPsngrAirbagEnblVisIndCmd : int32_t {
    On = 0,
    Off = 1,
    Flash = 2,
};

enum class FrtRdHgtGPSCstChngSetReq : int32_t {
    NO_ACTION = 0,
    OFF = 1,
    ON = 2,
    RESERVED_3 = 3,
    RESERVED_4 = 4,
    RESERVED_5 = 5,
    RESERVED_6 = 6,
    RESERVED_7 = 7,
};

enum class FrtRdHgtGPSCstCurrSetVal : int32_t {
    SETTING_UNKNOWN = 0,
    OFF = 1,
    ON = 2,
    RESERVED_3 = 3,
    RESERVED_4 = 4,
    RESERVED_5 = 5,
    RESERVED_6 = 6,
    RESERVED_7 = 7,
};

enum class FrtSnshdActlPstn : int32_t {
    Num0_ = 0,
    Num10_ = 1,
    Num20_ = 2,
    Num30_ = 3,
    Num40_ = 4,
    Num50_ = 5,
    Num60_ = 6,
    Num70_ = 7,
    Num80_ = 8,
    Num90_ = 9,
    Num100_ = 10,
    Between_Positions = 11,
    Comfort_Open = 12,
};

enum class FrtSnshdCurrMtnSts : int32_t {
    No_Motion = 0,
    Opening = 1,
    Closing = 2,
    Motion_Error = 3,
    Stall = 4,
};

enum class FrtSnshdPstnStsInfo : int32_t {
    Fully_Closed = 0,
    Partially_Open = 1,
    Fully_Open = 2,
    Comfort_Open = 3,
};

enum class FrtStHtdBkLvlAval : int32_t {
    Not_Available = 0,
    Two_Levels_Available = 1,
    Three_Levels_Available = 2,
    Four_Levels_Available = 3,
};

enum class FrtStHtdCushBkLvlAval : int32_t {
    Not_Available = 0,
    Two_Levels_Available = 1,
    Three_Levels_Available = 2,
    Four_Levels_Available = 3,
};

enum class FrtStVntCoolLvlAval : int32_t {
    Not_Available = 0,
    Two_Levels_Available = 1,
    Three_Levels_Available = 2,
    Four_Levels_Available = 3,
};

enum class FrtStrgeCmptClsrLckSts : int32_t {
    Unknown = 0,
    Unlocked = 1,
    Locked = 2,
};

enum class FrwdCllsnAlrtImAlrtDrIntAlrtChmEvtSt : int32_t {
    NO_ACTION = 0,
    ACTIVE = 1,
    CANCEL_CHIME = 2,
};

enum class FrwdClsnAutoStrgIndReq : int32_t {
    NO_INDICATION = 0,
    AUTOMATIC_STEERING_OFF = 1,
    AUTOMATIC_BRAKING_AND_STEERING_OFF = 2,
    UNAVAILABLE = 3,
    RESERVED_5 = 4,
    RESERVED_6 = 5,
    RESERVED_7 = 6,
};

enum class FrwdHdwyVisIndCtl : int32_t {
    FCA = 0,
    ACC = 1,
    None = 2,
};

enum class FrwdImpMtgnOpSlctCstChgSetReq : int32_t {
    NO_ACTION = 0,
    OFF = 1,
    ALERT = 2,
    ALERT_BRAKE = 3,
    ALERT_BRAKE_STEER = 4,
    RESERVED_5 = 5,
    RESERVED_6 = 6,
    RESERVED_7 = 7,
};

enum class FrwdImpMtgnOpSlctCstCrStVal : int32_t {
    SETTING_UNKNOWN = 0,
    OFF = 1,
    ALERT = 2,
    ALERT_BRAKE = 3,
    ALERT_BRAKE_STEER = 4,
    RESERVED_5 = 5,
    RESERVED_6 = 6,
    RESERVED_7 = 7,
};

enum class FrwdVehAhdIndReq : int32_t {
    OFF = 0,
    ON = 1,
    Num0_5_Hz = 2,
    Num1_Hz = 3,
    Num2_Hz = 4,
    Num4_Hz = 5,
};

enum class FrwdVhImAlrtIndRqst : int32_t {
    OFF = 0,
    ON = 1,
    Num0_5_Hz = 2,
    Num1_Hz = 3,
    Num2_Hz = 4,
    Num4_Hz = 5,
    RESERVED_1 = 6,
    RESERVED_2 = 7,
};

enum class FstIdlModeIndReq : int32_t {
    No_Indication = 0,
    On = 1,
    Off = 2,
    Unavailable = 3,
};

enum class FuelConsmpHvyIndReq : int32_t {
    No_Indication = 0,
    Range = 1,
    Low_Fuel_and_Range = 2,
};

enum class GPSQM_PPSMode : int32_t {
    GNSS_Standalone = 0,
    GNSS_and_SBAS = 1,
    GNSS_and_RTX = 2,
    GNSS_and_DR = 3,
    GNSS_and_SBAS_and_DR = 4,
    GNSS_and_RTX_and_DR = 5,
    DR_ONLY = 6,
    GNSS_and_RTX_and_DR_and_MM = 7,
};

enum class GeofncngRstrctdZnSts : int32_t {
    Unknown = 0,
    Restricted = 1,
    Unrestricted = 2,
};

enum class GlrFrHgBmRspTypCstChgSetReq : int32_t {
    NO_ACTION = 0,
    AUTOMATIC_HIGH_BEAM = 1,
    GLARE_FREE_HIGH_BEAM = 2,
    RESERVED_3 = 3,
    RESERVED_4 = 4,
    RESERVED_5 = 5,
    RESERVED_6 = 6,
    RESERVED_7 = 7,
};

enum class GlrFrHgBmRspTypCstCurSetVal : int32_t {
    SETTING_UNKNOWN = 0,
    AUTOMATIC_HIGH_BEAM = 1,
    GLARE_FREE_HIGH_BEAM = 2,
    RESERVED_3 = 3,
    Underscore_RESERVED_4 = 4,
    RESERVED_5 = 5,
    RESERVED_6 = 6,
    RESERVED_7 = 7,
};

enum class GlrFrHiBmSts : int32_t {
    OFF = 0,
    AHBA = 1,
    GFHB = 2,
};

enum class GnrcLnMrkngIndLt : int32_t {
    Off = 0,
    White = 1,
    Green = 2,
    Green_Flashing = 3,
    Amber = 4,
    Amber_Flashing = 5,
    Red = 6,
    Red_Flashing = 7,
};

enum class GnrcLnMrkngIndRt : int32_t {
    Off = 0,
    White = 1,
    Green = 2,
    Green_Flashing = 3,
    Amber = 4,
    Amber_Flashing = 5,
    Red = 6,
    Red_Flashing = 7,
};

enum class GnrcModeSwSts : int32_t {
    Unknown = 0,
    Not_Pressed = 1,
    Pressed = 2,
    Failed = 3,
};

enum class GoNotfrCstChgSetReq : int32_t {
    NO_ACTION = 0,
    OFF = 1,
    ON = 2,
    RESERVED_3 = 3,
    RESERVED_4 = 4,
    RESERVED_5 = 5,
    RESERVED_6 = 6,
    RESERVED_7 = 7,
};

enum class GoNotfrCstCrStVal : int32_t {
    SETTING_UNKNOWN = 0,
    OFF = 1,
    ON = 2,
    RESERVED_3 = 3,
    RESERVED_4 = 4,
    RESERVED_5 = 5,
    RESERVED_6 = 6,
    RESERVED_7 = 7,
};

enum class HFRCCstChgSetReq : int32_t {
    NO_ACTION = 0,
    OFF = 1,
    OPEN_AND_CLOSE = 2,
    OPEN_ONLY = 3,
    RESERVED_4 = 4,
    RESERVED_5 = 5,
    RESERVED_6 = 6,
    RESERVED_7 = 7,
};

enum class HFRCCstCurSetVal : int32_t {
    SETTING_UNKNOWN = 0,
    OFF = 1,
    OPEN_AND_CLOSE = 2,
    OPEN_ONLY = 3,
    RESERVED_4 = 4,
    RESERVED_5 = 5,
    RESERVED_6 = 6,
    RESERVED_7 = 7,
};

enum class HMIGI3P_VirtCtlHdPrkLmpsReqAuth : int32_t {
    No_Action = 0,
    Off = 1,
    Auto = 2,
    Parking = 3,
    On = 4,
};

enum class HMII1P_ACCSetTypAuth : int32_t {
    Manual = 0,
    Auto = 1,
};

enum class HMII1P_ChmSysSOHAuth : int32_t {
    Unknown = 0,
    Healthy = 1,
    Faulted = 2,
};

enum class HMII1P_IPCDispStsAuth : int32_t {
    Unknown = 0,
    Normal = 1,
    Fault = 2,
};

enum class HMIInCarVcCommCtl : int32_t {
    ICC_Off = 0,
    Front_High_Rear_High = 1,
    Front_High_Rear_Normal = 2,
    Front_High_Rear_Off = 3,
    Front_Normal_Rear_High = 4,
    Front_Normal_Rear_Normal = 5,
    Front_Normal_Rear_Off = 6,
};

enum class HMIInCarVcCommSts : int32_t {
    ICC_Off = 0,
    ICC_Idle = 1,
    Front_High_Rear_High = 2,
    Front_High_Rear_Normal = 3,
    Front_High_Rear_Off = 4,
    Front_Normal_Rear_High = 5,
    Front_Normal_Rear_Normal = 6,
    Front_Normal_Rear_Off = 7,
};

enum class HMIR1P_LnFllwgGenChEvntStatAuth : int32_t {
    No_Action = 0,
    Active = 1,
    Cancel_Chime = 2,
};

enum class HMIR1P_LnFllwgLHSChEvntStatAuth : int32_t {
    No_Action = 0,
    Active = 1,
    Cancel_Chime = 2,
};

enum class HMIR1P_LnFllwgRHSChEvntStatAuth : int32_t {
    No_Action = 0,
    Active = 1,
    Cancel_Chime = 2,
};

enum class HSP_DrvAlrtTypCstCurrSetValAuth : int32_t {
    SETTING_UNKNOWN = 0,
    CHIME = 1,
    SEAT = 2,
};

enum class HSP_HptcStOprtlStsAuth : int32_t {
    Normal_Operation = 0,
    Unknown = 1,
    Failed = 2,
};

enum class HUD_RclCmpt : int32_t {
    No_Recall_Requested = 0,
    Recall_In_Process = 1,
    Recall_Complete = 2,
};

enum class HVACICFRBlwLvlFrtCorrSts : int32_t {
    Indeterminate = 0,
    Pass_Criteria_Met = 1,
    Fail_Criteria_Met = 2,
};

enum class HVACICFRBlwLvlFrtSnsdStat1 : int32_t {
    Uninitialized = 0,
    Released = 1,
    Pressed = 2,
    Indeterminate = 3,
    Out_of_Range_Low = 4,
    Out_of_Range_High = 5,
};

enum class HVACICFRBlwLvlFrtSnsdStat2 : int32_t {
    Uninitialized = 0,
    Released = 1,
    Pressed = 2,
    Indeterminate = 3,
    Out_of_Range_Low = 4,
    Out_of_Range_High = 5,
};

enum class HVACICFRCompSnsdStat : int32_t {
    Uninitialized = 0,
    Released = 1,
    Pressed = 2,
    Indeterminate = 3,
    Out_of_Range_Low = 4,
    Out_of_Range_High = 5,
};

enum class HVACICFRFrtDefrSnsdStat : int32_t {
    Uninitialized = 0,
    Released = 1,
    Pressed = 2,
    Indeterminate = 3,
    Out_of_Range_Low = 4,
    Out_of_Range_High = 5,
};

enum class HVACICFRFrtHVACAutoSnsdStat : int32_t {
    Uninitialized = 0,
    Released = 1,
    Pressed = 2,
    Indeterminate = 3,
    Out_of_Range_Low = 4,
    Out_of_Range_High = 5,
};

enum class HVACICFRHtSnsdStat : int32_t {
    Uninitialized = 0,
    Released = 1,
    Pressed = 2,
    Indeterminate = 3,
    Out_of_Range_Low = 4,
    Out_of_Range_High = 5,
};

enum class HVACICFRIntrnlCmptErr : int32_t {
    Indeterminate = 0,
    Pass_Criteria_Met = 1,
    Fail_Criteria_Met = 2,
};

enum class HVACICFRRecircSnsdStat : int32_t {
    Uninitialized = 0,
    Released = 1,
    Pressed = 2,
    Indeterminate = 3,
    Out_of_Range_Low = 4,
    Out_of_Range_High = 5,
};

enum class HVACICFRRrDfgSnsdStat : int32_t {
    Uninitialized = 0,
    Released = 1,
    Pressed = 2,
    Indeterminate = 3,
    Out_of_Range_Low = 4,
    Out_of_Range_High = 5,
};

enum class HVACICFRTempFrtLtCorrSts : int32_t {
    Indeterminate = 0,
    Pass_Criteria_Met = 1,
    Fail_Criteria_Met = 2,
};

enum class HVACICFRTempFrtLtSnsdStat1 : int32_t {
    Uninitialized = 0,
    Released = 1,
    Pressed = 2,
    Indeterminate = 3,
    Out_of_Range_Low = 4,
    Out_of_Range_High = 5,
};

enum class HVACICFRTempFrtLtSnsdStat2 : int32_t {
    Uninitialized = 0,
    Released = 1,
    Pressed = 2,
    Indeterminate = 3,
    Out_of_Range_Low = 4,
    Out_of_Range_High = 5,
};

enum class HVACICFRTempFrtRtCorrSts : int32_t {
    Indeterminate = 0,
    Pass_Criteria_Met = 1,
    Fail_Criteria_Met = 2,
};

enum class HVACICFRTempFrtRtSnsdStat1 : int32_t {
    Uninitialized = 0,
    Released = 1,
    Pressed = 2,
    Indeterminate = 3,
    Out_of_Range_Low = 4,
    Out_of_Range_High = 5,
};

enum class HVACICFRTempFrtRtSnsdStat2 : int32_t {
    Uninitialized = 0,
    Released = 1,
    Pressed = 2,
    Indeterminate = 3,
    Out_of_Range_Low = 4,
    Out_of_Range_High = 5,
};

enum class HVACICR1_CompSet : int32_t {
    NoAction = 0,
    COMP_OFF = 1,
    COMP_ON = 2,
    COMP_ECON = 3,
};

enum class HVACICR1_FrtRrPwrSet : int32_t {
    NoAction = 0,
    FrontOFF_RearOFF = 1,
    FrontON_RearON = 2,
    FrontON_RearOFF = 3,
    FrontOFF_RearON = 4,
};

enum class HVACICR1_HtrSet : int32_t {
    NoAction = 0,
    HEAT_OFF = 1,
    HEAT_ON = 2,
};

enum class HVACICR1_IntrnlFltSts : int32_t {
    Fault1 = 0,
    Fault2 = 1,
    Fault3 = 2,
    Fault4 = 3,
    Fault5 = 4,
    Fault6 = 5,
    Fault7 = 6,
    Fault8 = 7,
    Fault9 = 8,
    Fault10 = 9,
    Fault11 = 10,
    Fault12 = 11,
    Fault13 = 12,
    Fault14 = 13,
    Fault15 = 14,
    Fault16 = 15,
};

enum class HVACICR1_MaxDefrSet : int32_t {
    NoAction = 0,
    MaxDefrostOff = 1,
    MaxDefrostOn = 2,
};

enum class HVACICR2_AirDstLtSet : int32_t {
    NoAction = 0,
    Auto = 1,
    Floor = 2,
    FloorAndVent = 3,
    Vent = 4,
    VentAndWindshield = 5,
    Windshield = 6,
    FloorAndWindshield = 7,
    FloorAndVentAndWindshield = 8,
};

enum class HVACICR2_AirDstRtSet : int32_t {
    NoAction = 0,
    Auto = 1,
    Floor = 2,
    FloorAndVent = 3,
    Vent = 4,
    VentAndWindshield = 5,
    Windshield = 6,
    FloorAndWindshield = 7,
    FloorAndVentAndWindshield = 8,
};

enum class HVACICR2_RecircSet : int32_t {
    NoAction = 0,
    FreshAir = 1,
    Recirc = 2,
};

enum class HVACICRADSR_LtSet : int32_t {
    NoAction = 0,
    Auto = 1,
    Floor = 2,
    FloorAndVent = 3,
    Vent = 4,
    VentAndRoof = 5,
    Roof = 6,
    RoofAndFloor = 7,
    FloorAndVentAndRoof = 8,
};

enum class HVACICRADSR_RtSet : int32_t {
    NoAction = 0,
    Auto = 1,
    Floor = 2,
    FloorAndVent = 3,
    Vent = 4,
    VentAndRoof = 5,
    Roof = 6,
    RoofAndFloor = 7,
    FloorAndVentAndRoof = 8,
};

enum class HVACICRConslRfgrEnbl : int32_t {
    No_Action = 0,
    Inactive = 1,
    Active = 2,
};

enum class HVACICRFllAutoLF : int32_t {
    No_Action = 0,
    Auto_Off = 1,
    Auto_On = 2,
};

enum class HVACICRFllAutoLR : int32_t {
    No_Action = 0,
    Auto_Off = 1,
    Auto_On = 2,
};

enum class HVACICRFllAutoRF : int32_t {
    No_Action = 0,
    Auto_Off = 1,
    Auto_On = 2,
};

enum class HVACICRFllAutoRR : int32_t {
    No_Action = 0,
    Auto_Off = 1,
    Auto_On = 2,
};

enum class HVACICRFllAutoThrdRow : int32_t {
    No_Action = 0,
    Auto_Off = 1,
    Auto_On = 2,
};

enum class HVACICRFrgrncDffsrEnbl : int32_t {
    No_Action = 0,
    Inactive = 1,
    Active = 2,
};

enum class HVACICRFrgrncDffsrSctCrtrgSltn : int32_t {
    No_Action = 0,
    Sealed_No_Scent = 1,
    Cartridge_1 = 2,
    Cartridge_2 = 3,
    Cartridge_3 = 4,
};

enum class HVACICRHtdArmrstLvlFrtLt : int32_t {
    Off = 0,
    Num1 = 1,
    Num2 = 2,
    Num3 = 3,
};

enum class HVACICRHtdArmrstLvlFrtRt : int32_t {
    Off = 0,
    Num1 = 1,
    Num2 = 2,
    Num3 = 3,
};

enum class HVACICRHtdArmrstLvlRrLt : int32_t {
    Off = 0,
    Num1 = 1,
    Num2 = 2,
    Num3 = 3,
};

enum class HVACICRHtdArmrstLvlRrRt : int32_t {
    Off = 0,
    Num1 = 1,
    Num2 = 2,
    Num3 = 3,
};

enum class HVACICRNckScrfLvlFrtLt : int32_t {
    Off = 0,
    Num1 = 1,
    Num2 = 2,
    Num3 = 3,
};

enum class HVACICRNckScrfLvlFrtRt : int32_t {
    Off = 0,
    Num1 = 1,
    Num2 = 2,
    Num3 = 3,
};

enum class HVACICRNckScrfLvlRrLt : int32_t {
    Off = 0,
    Num1 = 1,
    Num2 = 2,
    Num3 = 3,
};

enum class HVACICRNckScrfLvlRrRt : int32_t {
    Off = 0,
    Num1 = 1,
    Num2 = 2,
    Num3 = 3,
};

enum class HVACICROscMdFrtLtSet : int32_t {
    No_Action = 0,
    Left_Right_Only = 1,
    Up_Down_Only = 2,
    Left_Right_Up_Down = 3,
};

enum class HVACICROscMdFrtRtSet : int32_t {
    No_Action = 0,
    Left_Right_Only = 1,
    Up_Down_Only = 2,
    Left_Right_Up_Down = 3,
};

enum class HVACICROscMdRrLtSet : int32_t {
    No_Action = 0,
    Left_Right_Only = 1,
    Up_Down_Only = 2,
    Left_Right_Up_Down = 3,
};

enum class HVACICROscMdRrRtSet : int32_t {
    No_Action = 0,
    Left_Right_Only = 1,
    Up_Down_Only = 2,
    Left_Right_Up_Down = 3,
};

enum class HVACICROscModeThrdRwLtSet : int32_t {
    No_Action = 0,
    Left_Right_Only = 1,
    Up_Down_Only = 2,
    Left_Right_Up_Down = 3,
};

enum class HVACICROscModeThrdRwRtSet : int32_t {
    No_Action = 0,
    Left_Right_Only = 1,
    Up_Down_Only = 2,
    Left_Right_Up_Down = 3,
};

enum class HVACICROtltFrtLtInbdArflQnty : int32_t {
    Num0 = 0,
    Num25 = 1,
    Num50 = 2,
    Num75 = 3,
    Num100 = 4,
    No_Action = 5,
};

enum class HVACICROtltFrtLtOtbdArflQnty : int32_t {
    Num0 = 0,
    Num25 = 1,
    Num50 = 2,
    Num75 = 3,
    Num100 = 4,
    No_Action = 5,
};

enum class HVACICROtltFrtLtStat : int32_t {
    Manual = 0,
    Auto = 1,
    Focused = 2,
    Diffused = 3,
};

enum class HVACICROtltFrtRtInbdArflQnty : int32_t {
    Num0 = 0,
    Num25 = 1,
    Num50 = 2,
    Num75 = 3,
    Num100 = 4,
    No_Action = 5,
};

enum class HVACICROtltFrtRtOtbdArflQnty : int32_t {
    Num0 = 0,
    Num25 = 1,
    Num50 = 2,
    Num75 = 3,
    Num100 = 4,
    No_Action = 5,
};

enum class HVACICROtltFrtRtStat : int32_t {
    Manual = 0,
    Auto = 1,
    Focused = 2,
    Diffused = 3,
};

enum class HVACICROtltRrLtArflQnty : int32_t {
    Num0 = 0,
    Num25 = 1,
    Num50 = 2,
    Num75 = 3,
    Num100 = 4,
    No_Action = 5,
};

enum class HVACICROtltRrLtStat : int32_t {
    Manual = 0,
    Auto = 1,
    Focused = 2,
    Diffused = 3,
};

enum class HVACICROtltRrRtArflQnty : int32_t {
    Num0 = 0,
    Num25 = 1,
    Num50 = 2,
    Num75 = 3,
    Num100 = 4,
    No_Action = 5,
};

enum class HVACICROtltRrRtStat : int32_t {
    Manual = 0,
    Auto = 1,
    Focused = 2,
    Diffused = 3,
};

enum class HVACICROtltThrdRwLtArflQnty : int32_t {
    Num0 = 0,
    Num25 = 1,
    Num50 = 2,
    Num75 = 3,
    Num100 = 4,
    No_Action = 5,
};

enum class HVACICROtltThrdRwLtStat : int32_t {
    Manual = 0,
    Auto = 1,
    Focused = 2,
    Diffused = 3,
    No_Action = 4,
};

enum class HVACICROtltThrdRwRtArflQnty : int32_t {
    Num0 = 0,
    Num25 = 1,
    Num50 = 2,
    Num75 = 3,
    Num100 = 4,
    No_Action = 5,
};

enum class HVACICROtltThrdRwRtStat : int32_t {
    Manual = 0,
    Auto = 1,
    Focused = 2,
    Diffused = 3,
    No_Action = 4,
};

enum class HVACICRPwrFrtLt : int32_t {
    No_Action = 0,
    Power_Off = 1,
    Power_On = 2,
};

enum class HVACICRPwrFrtRt : int32_t {
    No_Action = 0,
    Power_Off = 1,
    Power_On = 2,
};

enum class HVACICRPwrRrLt : int32_t {
    No_Action = 0,
    Power_Off = 1,
    Power_On = 2,
};

enum class HVACICRPwrRrRt : int32_t {
    No_Action = 0,
    Power_Off = 1,
    Power_On = 2,
};

enum class HVACICRPwrThrdRow : int32_t {
    No_Action = 0,
    Power_Off = 1,
    Power_On = 2,
};

enum class HVACICRRrLck : int32_t {
    No_Action = 0,
    Off = 1,
    On = 2,
};

enum class HVACICRThrdRowLck : int32_t {
    No_Action = 0,
    Off = 1,
    On = 2,
};

enum class HVACICRWprHtdPrkDcr : int32_t {
    No_Action = 0,
    Off = 1,
    On = 2,
};

enum class HVACICVRIntrnlCmptErr : int32_t {
    Indeterminate = 0,
    Pass_Criteria_Met = 1,
    Fail_Criteria_Met = 2,
};

enum class HVACInfoCtlReqRrDfgSet : int32_t {
    NoAction = 0,
    RearDefogOFF = 1,
    RearDefogON = 2,
};

enum class HVACInfoCtlReqSyncSet : int32_t {
    NoAction = 0,
    SYNC_all = 1,
    UnSYNC_all = 2,
    SYNC_Rear_to_Driver = 3,
    UnSYNC_Rear_to_Driver = 4,
    SYNC_3rd_Row_to_Driver = 5,
    UnSYNC_3rd_Row_to_Driver = 6,
};

enum class HVACInfoCtlRqAirDstThrdRw : int32_t {
    No_Action = 0,
    Auto = 1,
    Floor = 2,
    Floor_And_Vent = 3,
    Vent = 4,
    Vent_And_Roof = 5,
    Roof = 6,
    Roof_And_Floor = 7,
    Floor_And_Vent_And_Roof = 8,
};

enum class HVBCC_DyOfWk : int32_t {
    Unknown = 0,
    Sunday = 1,
    Monday = 2,
    Tuesday = 3,
    Wednesday = 4,
    Thursday = 5,
    Friday = 6,
    Saturday = 7,
};

enum class HVBCC_TmDispFormat : int32_t {
    No_Action = 0,
    Display_Complete_Time = 1,
    Display_Minutes_to_Complete = 2,
};

enum class HVBCC_TmDispPwrLvl : int32_t {
    Unknown = 0,
    Level_1 = 1,
    Level_2 = 2,
    DC = 3,
    Wireless = 4,
};

enum class HVBatSOCDspHdlmpCstChgSetReq : int32_t {
    No_Action = 0,
    Off = 1,
    On = 2,
};

enum class HVBatSOCDspHdlmpCstCurrSetVal : int32_t {
    Setting_Unknown = 0,
    Off = 1,
    On = 2,
};

enum class HVDCFstChrgSoonReq : int32_t {
    No_Action = 0,
    Off = 1,
    On = 2,
};

enum class HiVltgBatLmtnDueToTempInd : int32_t {
    Normal = 0,
    Cold = 1,
    Hot = 2,
};

enum class HiVltgBatLoSOCIndReq : int32_t {
    No_Action = 0,
    Warning_Level_1 = 1,
    Warning_Level_2 = 2,
    Warning_Level_3 = 3,
};

enum class HiVltgBatOutOfEngyIndReq : int32_t {
    No_Action = 0,
    Charge_Soon = 1,
    Charge_Now = 2,
    Out_of_Energy = 3,
    Start_Engine = 4,
};

enum class HiVltgBatOutOfEngyIndReqAuth : int32_t {
    No_Action = 0,
    Charge_Soon = 1,
    Charge_Now = 2,
    Out_of_Energy = 3,
    Start_Engine = 4,
};

enum class HiVltgBatPrcndtngSts : int32_t {
    No_Action = 0,
    Inactive = 1,
    Active = 2,
    Performance_Limited = 3,
    Battery_At_Target = 4,
    Disabled = 5,
};

enum class HiVltgBatThrmlRnwyIndReq : int32_t {
    No_Indication = 0,
    Low = 1,
    Medium = 2,
    High = 3,
};

enum class HiVltgChrgAbrtRsn : int32_t {
    No_Action = 0,
    Loss_of_AC = 1,
    Unplugged_Charging = 2,
    Unplugged_Delayed = 3,
    Charge_Failure = 4,
    Cordset_Fault = 5,
    Cordset_Delay = 6,
};

enum class HiVltgChrgCommEnblReq : int32_t {
    Unknown = 0,
    Communication_Requested = 1,
    Communication_Not_Requested = 2,
};

enum class HiVltgChrgInhbRsn : int32_t {
    No_Action = 0,
    Cord_Not_Fully_Inserted = 1,
    Cord_Lock_Not_Engaged = 2,
    See_Charging_Station = 3,
};

enum class HiVltgChrgLtdRsn : int32_t {
    No_Action = 0,
    High_Voltage_System_Fault = 1,
    Low_Voltage_System_Fault = 2,
    Temperature_Out_of_Bounds = 3,
    State_of_Charge_Out_of_Bounds = 4,
    Temporary_Limiting_Condition = 5,
    Utility_Power_Override = 6,
    HVAC_System_Limiting = 7,
    Station_Power_Limiting = 8,
    Normal_Derate_State_of_Charge = 9,
    Normal_Derate_Temperature_Threshold = 10,
    Coupler_Lock_Not_Engaged = 11,
};

enum class HiVltgChrgS2SwSts : int32_t {
    Indeterminate = 0,
    Closed = 1,
    Open = 2,
    Faulted = 3,
};

enum class HiVltgChrgVntilationSwSts : int32_t {
    Indeterminate = 0,
    Closed = 1,
    Open = 2,
    Faulted = 3,
};

enum class HiVltgChrgrSysSts : int32_t {
    Default = 0,
    Idle = 1,
    Initializing = 2,
    Active = 3,
    Complete = 4,
    Aborted = 5,
    Utility_Override_Active = 6,
    Utility_Override_Reduced_Power = 7,
    Pause_Due_to_Update = 8,
    Connection_Unpowered = 9,
    Unconnected = 10,
    Offboard_Energy_Transfer_Active = 11,
};

enum class HiVltgCouplerPrxmtySts : int32_t {
    Unknown = 0,
    Disconnected = 1,
    Connected = 2,
};

enum class HiVltgDischrgSysSts : int32_t {
    Default = 0,
    Idle = 1,
    Initializing = 2,
    Active = 3,
    Complete = 4,
    Aborted = 5,
};

enum class HillDscntCtlCurrStatReq : int32_t {
    No_Action = 0,
    Disable = 1,
    Enable = 2,
};

enum class HillDscntCtlSysSts : int32_t {
    Unknown = 0,
    Normal = 1,
    Enabled = 2,
    Active = 3,
    Failed = 4,
};

enum class HillDscntCtlVirtSwAvl : int32_t {
    Not_Available = 0,
    Available = 1,
};

enum class HndsFrStrgeAccssCstCfg : int32_t {
    Handsfree_Kick = 0,
    Presence_Based_Via_Phone_and_Fob = 1,
    Presence_Based_Via_Fob = 2,
};

enum class HndsOnLnCntrAsstChmEvntStat : int32_t {
    No_Action = 0,
    Active = 1,
    Cancel_Chime = 2,
};

enum class HndsOnLnCntrAsstIndReq : int32_t {
    Off = 0,
    White = 1,
    Green = 2,
    Green_Flashing = 3,
    Amber = 4,
    Amber_Flashing = 5,
    Red = 6,
    Red_Flashing = 7,
};

enum class HndsOnLnCntrAsstWrnIndReq : int32_t {
    No_Indication = 0,
    Disabled_and_Locked_out = 1,
    Steering_Input_Not_Detected = 2,
    Steering_Assist_Features_Unavailable_in_Selected_Driver_Mode = 3,
    Unavailable = 4,
    Driver_Attention_Alert = 5,
    Can_t_See_Face = 6,
    LCA_Active = 7,
    LCA_Standby = 8,
    LCA_Disengaging_Take_Vehicle_Control = 9,
    LCA_Disengaging_Keep_Eyes_on_Road = 10,
    LCA_Can_t_See_Lane_Lines = 11,
};

enum class HstVehTrlrDtd : int32_t {
    Unknown = 0,
    Trailer_Not_Detected = 1,
    Trailer_Detected = 2,
    Unsupported_Trailer_Detected = 3,
};

enum class HtdArmrstSyncCstChgSetReq : int32_t {
    No_Action = 0,
    Off = 1,
    On = 2,
};

enum class HtdArmrstSyncCstCurrSetVal : int32_t {
    Setting_Unknown = 0,
    Off = 1,
    On = 2,
};

enum class HtdFrntWSSt : int32_t {
    UNKNOWN = 0,
    OFF = 1,
    ON = 2,
};

enum class HtdStrgWhlInd : int32_t {
    Off = 0,
    Low = 1,
    Med = 2,
    High = 3,
};

enum class HtdStrgWhlInd_HVAC_FP_F : int32_t {
    Off = 0,
    Low = 1,
    Med = 2,
    High = 3,
};

enum class HtdStrgWhlLvlAval : int32_t {
    Not_Available = 0,
    Two_Levels_Available = 1,
    Three_Levels_Available = 2,
    Four_Levels_Available = 3,
};

enum class HtdWprPrkDcrAvl : int32_t {
    Unknown = 0,
    Unavailable = 1,
    Available = 2,
};

enum class HybChrgModeStat : int32_t {
    Charge_Depleting = 0,
    Charge_Sustaining = 1,
};

enum class HybElecVehPrplModeIconIndReq : int32_t {
    Inactive = 0,
    EV_Mode = 1,
    HEV_Mode = 2,
};

enum class HybModeDisp : int32_t {
    No_Action = 0,
    Battery_Power = 1,
    Engine_Power = 2,
    Hybrid_Power = 3,
    Charging_with_Engine_Off = 4,
    Charging_with_Engine_On = 5,
    Neutral_Engine_On = 6,
    Neutral_Engine_Off = 7,
    Engine_Charging = 8,
    Engine_Power_Rear_with_Battery_Front = 9,
    Engine_Power_Rear_with_Front_Wheel_Regen = 10,
    Undetermined = 11,
    Default_and_Accessory = 12,
    Engine_Idle = 13,
    Reserved_1 = 14,
    Reserved_2 = 15,
    Reserved_3 = 16,
};

enum class HybModeDispVehCfg : int32_t {
    No_Action = 0,
    Not_in_Motion = 1,
    FWD = 2,
    RWD = 3,
    Num4WD = 4,
};

enum class HybStatElecVehModeOvrrd : int32_t {
    Undetermined = 0,
    No_Override = 1,
    Too_Cold = 2,
    Battery_Low = 3,
    Speed_too_High = 4,
    Generic_Override = 5,
    Grade_too_High = 6,
    Accelerator_Pedal_Threshold_Exceeded = 7,
};

enum class HybStatShtlModeOvrrd : int32_t {
    Undetermined = 0,
    No_Override = 1,
    Too_Cold = 2,
    Battery_Low = 3,
    Speed_too_High = 4,
    Generic_Override = 5,
    Grade_too_High = 6,
    Accelerator_Pedal_Threshold_Exceeded = 7,
};

enum class IAQI_IntrAirQltyOvrallStat : int32_t {
    NoDisplay = 0,
    AQIstate1 = 1,
    AQIstate2 = 2,
    AQIstate3 = 3,
    AQIstate4 = 4,
    AQIstate5 = 5,
    AQIstate6 = 6,
    NoDataAvailable = 7,
    ServiceSensor = 8,
    Unknown = 9,
};

enum class IAQI_IntrAirQltyPrtclteStat : int32_t {
    NoDisplay = 0,
    AQIstate1 = 1,
    AQIstate2 = 2,
    AQIstate3 = 3,
    AQIstate4 = 4,
    AQIstate5 = 5,
    AQIstate6 = 6,
    NoDataAvailable = 7,
    ServiceSensor = 8,
    Unknown = 9,
};

enum class ICMCstChgSetReq : int32_t {
    No_Action = 0,
    Off = 1,
    Alert = 2,
    Alert_Brake = 3,
    Alert_Brake_Steer = 4,
};

enum class ICMCstSelCstCurSetVal : int32_t {
    Setting_Unknown = 0,
    Off = 1,
    Alert = 2,
    Alert_Brake = 3,
    Alert_Brake_Steer = 4,
};

enum class ICMLtChmEvntStat : int32_t {
    No_Action = 0,
    Active = 1,
    Cancel_Chime = 2,
};

enum class ICMRtChmEvntStat : int32_t {
    No_Action = 0,
    Active = 1,
    Cancel_Chime = 2,
};

enum class ICMTrngOncmgTrfcChmEvntStat : int32_t {
    No_Action = 0,
    Active = 1,
    Cancel_Chime = 2,
};

enum class ICMWrnIndReq : int32_t {
    Off = 0,
    Left = 1,
    Right = 2,
    Oncoming = 3,
};

enum class ImsrvSndAudBufRdnesSts : int32_t {
    IDLE = 0,
    AVAILABLE = 1,
    OVERRUN = 2,
    UNDERRUN = 3,
};

enum class ImsrvSndAudBufSOHSts : int32_t {
    IDLE = 0,
    BUFFER_START_RECEIVED = 1,
    BUFFER_PAUSE_RECEIVED = 2,
    BUFFER_RESUME_RECEIVED = 3,
    BUFFER_STOP_RECEIVED = 4,
};

enum class ImsrvSndPlybkCurrStat : int32_t {
    IDLE = 0,
    INITIALIZED = 1,
    STARTED = 2,
    PAUSED = 3,
    STOPPED = 4,
    ERROR = 5,
};

enum class ImsrvSndPlybkReqd : int32_t {
    NO_ACTION = 0,
    INIT = 1,
    START = 2,
    PAUSE = 3,
    RESUME = 4,
    STOP = 5,
    RELEASE = 6,
    RESET = 7,
};

enum class InVltg48VLBThrmlEntStsWrnIndRq : int32_t {
    No_Action = 0,
    Gassing_HVAC_Recirculation_Active = 1,
    Gassing_HVAC_Fault_Exit_Vehicle = 2,
};

enum class IndAirDstFL : int32_t {
    Off = 0,
    Auto = 1,
    Floor = 2,
    Floor_And_Vent = 3,
    Vent = 4,
    Vent_And_Windshield = 5,
    Windshield = 6,
    Floor_And_Windshield = 7,
    Floor_And_Vent_And_Windshield = 8,
    Max_Defrost = 9,
};

enum class IndAirDstFR : int32_t {
    Off = 0,
    Auto = 1,
    Floor = 2,
    Floor_And_Vent = 3,
    Vent = 4,
    Vent_And_Windshield = 5,
    Windshield = 6,
    Floor_And_Windshield = 7,
    Floor_And_Vent_And_Windshield = 8,
    Max_Defrost = 9,
};

enum class IndAirDstRL : int32_t {
    Off = 0,
    Auto = 1,
    Floor = 2,
    Floor_And_Vent = 3,
    Vent = 4,
    Vent_And_Roof = 5,
    Roof = 6,
    Roof_And_Floor = 7,
    Floor_And_Vent_And_Roof = 8,
};

enum class IndAirDstRR : int32_t {
    Off = 0,
    Auto = 1,
    Floor = 2,
    Floor_And_Vent = 3,
    Vent = 4,
    Vent_And_Roof = 5,
    Roof = 6,
    Roof_And_Floor = 7,
    Floor_And_Vent_And_Roof = 8,
};

enum class IndAirDstThrdRw : int32_t {
    Off = 0,
    Auto = 1,
    Floor = 2,
    Floor_And_Vent = 3,
    Vent = 4,
    Vent_And_Roof = 5,
    Roof = 6,
    Roof_And_Floor = 7,
    Floor_And_Vent_And_Roof = 8,
};

enum class IndArflQntyFrtLtInbrdOtltSet : int32_t {
    Num0 = 0,
    Num25 = 1,
    Num50 = 2,
    Num75 = 3,
    Num100 = 4,
};

enum class IndArflQntyFrtLtOtbrdOtltSet : int32_t {
    Num0 = 0,
    Num25 = 1,
    Num50 = 2,
    Num75 = 3,
    Num100 = 4,
};

enum class IndArflQntyFrtRtInbrdOtltSet : int32_t {
    Num0 = 0,
    Num25 = 1,
    Num50 = 2,
    Num75 = 3,
    Num100 = 4,
};

enum class IndArflQntyFrtRtOtbrdOtltSet : int32_t {
    Num0 = 0,
    Num25 = 1,
    Num50 = 2,
    Num75 = 3,
    Num100 = 4,
};

enum class IndArflQntyRrLtInbrdOtltSet : int32_t {
    Num0 = 0,
    Num25 = 1,
    Num50 = 2,
    Num75 = 3,
    Num100 = 4,
};

enum class IndArflQntyRrRtInbrdOtltSet : int32_t {
    Num0 = 0,
    Num25 = 1,
    Num50 = 2,
    Num75 = 3,
    Num100 = 4,
};

enum class IndArflQntyThrdRwLtInbdOtltSet : int32_t {
    Num0 = 0,
    Num25 = 1,
    Num50 = 2,
    Num75 = 3,
    Num100 = 4,
};

enum class IndArflQntyThrdRwRtInbdOtltSet : int32_t {
    Num0 = 0,
    Num25 = 1,
    Num50 = 2,
    Num75 = 3,
    Num100 = 4,
};

enum class IndBlwSetStatFrtRt : int32_t {
    Off = 0,
    Auto = 1,
    Manual = 2,
};

enum class IndBlwSetStatRrRt : int32_t {
    Off = 0,
    Auto = 1,
    Manual = 2,
};

enum class IndBlwSetStatThrdRw : int32_t {
    Off = 0,
    Auto = 1,
    Manual = 2,
};

enum class IndBlwStngStFrt : int32_t {
    Off = 0,
    Auto = 1,
    Manual = 2,
};

enum class IndBlwStngStRr : int32_t {
    Off = 0,
    Auto = 1,
    Manual = 2,
};

enum class IndCompStng : int32_t {
    OFF = 0,
    COMP_OFF = 1,
    COMP_ON = 2,
    COMP_ECON = 3,
};

enum class IndConslRfgrPwrSet : int32_t {
    Off = 0,
    On = 1,
};

enum class IndFrgrncDffsrActv : int32_t {
    Inactive = 0,
    Active = 1,
    Standby = 2,
};

enum class IndFrgrncDffsrCrtrg1Stat : int32_t {
    Normal = 0,
    Unknown = 1,
    Not_Detected = 2,
};

enum class IndFrgrncDffsrCrtrg2Stat : int32_t {
    Normal = 0,
    Unknown = 1,
    Not_Detected = 2,
};

enum class IndFrgrncDffsrCrtrg3Stat : int32_t {
    Normal = 0,
    Unknown = 1,
    Not_Detected = 2,
};

enum class IndFrgrncDffsrScntCrtrgSltn : int32_t {
    Undetermined = 0,
    Sealed_No_Scent = 1,
    Cartridge_1 = 2,
    Cartridge_2 = 3,
    Cartridge_3 = 4,
};

enum class IndHtdArmrstLvlFrtLt : int32_t {
    Off = 0,
    Num1 = 1,
    Num2 = 2,
    Num3 = 3,
    Linked = 4,
};

enum class IndHtdArmrstLvlFrtRt : int32_t {
    Off = 0,
    Num1 = 1,
    Num2 = 2,
    Num3 = 3,
    Linked = 4,
};

enum class IndHtdArmrstLvlRrLt : int32_t {
    Off = 0,
    Num1 = 1,
    Num2 = 2,
    Num3 = 3,
    Linked = 4,
};

enum class IndHtdArmrstLvlRrRt : int32_t {
    Off = 0,
    Num1 = 1,
    Num2 = 2,
    Num3 = 3,
    Linked = 4,
};

enum class IndHtdFrtWshldSet : int32_t {
    HFWS_OFF = 0,
    HFWS_ON = 1,
};

enum class IndHtgACSet : int32_t {
    Off = 0,
    Heat_Only = 1,
    Air_Conditioning_Only = 2,
};

enum class IndHtrSet : int32_t {
    Heater_Off = 0,
    Heater_On = 1,
};

enum class IndInzrStat : int32_t {
    OFF = 0,
    Ionizer_ON = 1,
    Ionizer_OFF = 2,
    Ionizer_LO = 3,
    Ionizer_HI = 4,
};

enum class IndNckScrfLvlFrtLt : int32_t {
    Off = 0,
    Num1 = 1,
    Num2 = 2,
    Num3 = 3,
};

enum class IndNckScrfLvlFrtRt : int32_t {
    Off = 0,
    Num1 = 1,
    Num2 = 2,
    Num3 = 3,
};

enum class IndNckScrfLvlRrLt : int32_t {
    Off = 0,
    Num1 = 1,
    Num2 = 2,
    Num3 = 3,
};

enum class IndNckScrfLvlRrRt : int32_t {
    Off = 0,
    Num1 = 1,
    Num2 = 2,
    Num3 = 3,
};

enum class IndOscModeFrtLtSet : int32_t {
    Left_Right_Only = 0,
    Up_Down_Only = 1,
    Left_Right_Up_Down = 2,
    Off = 3,
};

enum class IndOscModeFrtRtSet : int32_t {
    Left_Right_Only = 0,
    Up_Down_Only = 1,
    Left_Right_Up_Down = 2,
    Off = 3,
};

enum class IndOscModeRrLtSet : int32_t {
    Left_Right_Only = 0,
    Up_Down_Only = 1,
    Left_Right_Up_Down = 2,
    Off = 3,
};

enum class IndOscModeRrRtSet : int32_t {
    Left_Right_Only = 0,
    Up_Down_Only = 1,
    Left_Right_Up_Down = 2,
    Off = 3,
};

enum class IndOscModeThrdRwLtSet : int32_t {
    Left_Right_Only = 0,
    Up_Down_Only = 1,
    Left_Right_Up_Down = 2,
    Off = 3,
};

enum class IndOscModeThrdRwRtSet : int32_t {
    Left_Right_Only = 0,
    Up_Down_Only = 1,
    Left_Right_Up_Down = 2,
    Off = 3,
};

enum class IndRecircStng : int32_t {
    Off = 0,
    Fresh_Air = 1,
    Recirc = 2,
};

enum class IndRrWndDfgStng : int32_t {
    Rear_Defog_OFF = 0,
    Rear_Defog_ON = 1,
};

enum class IndTempSetStatThrdRw : int32_t {
    Off = 0,
    Auto = 1,
    Auto_Lo = 2,
    Auto_Hi = 3,
    Manual = 4,
};

enum class IndTmpStngStFL : int32_t {
    Off = 0,
    Auto = 1,
    Auto_Lo = 2,
    Auto_Hi = 3,
    Manual = 4,
};

enum class IndTmpStngStFR : int32_t {
    Off = 0,
    Auto = 1,
    Auto_Lo = 2,
    Auto_Hi = 3,
    Manual = 4,
};

enum class IndTmpStngStRL : int32_t {
    Off = 0,
    Auto = 1,
    Auto_Lo = 2,
    Auto_Hi = 3,
    Manual = 4,
};

enum class IndTmpStngStRR : int32_t {
    Off = 0,
    Auto = 1,
    Auto_Lo = 2,
    Auto_Hi = 3,
    Manual = 4,
};

enum class IndTmpUnts : int32_t {
    Celcius = 0,
    Fahrenheit = 1,
};

enum class IndWprPrkDcr : int32_t {
    Off = 0,
    On = 1,
};

enum class InfoAnm1Req : int32_t {
    No_Request = 0,
    Cancel = 1,
    Start = 2,
};

enum class InfoCtlFBIntrnlCmpErr : int32_t {
    Indeterminate = 0,
    Pass_Criteria_Met = 1,
    Fail_Criteria_Met = 2,
};

enum class InfoCtlFCIntrnlCmpErr : int32_t {
    Indeterminate = 0,
    Pass_Criteria_Met = 1,
    Fail_Criteria_Met = 2,
};

enum class InfoFrtLtStHtdBkLvlReq : int32_t {
    No_Action = 0,
    Off = 1,
    Auto = 2,
    Low = 3,
    Medium = 4,
    High = 5,
};

enum class InfoFrtLtStHtdCushBkLvlReq : int32_t {
    No_Action = 0,
    Off = 1,
    Auto = 2,
    Low = 3,
    Medium = 4,
    High = 5,
};

enum class InfoFrtLtStVntCoolLvlReq : int32_t {
    No_Action = 0,
    Off = 1,
    Auto = 2,
    Low = 3,
    Medium = 4,
    High = 5,
};

enum class InfoFrtRtStHtdBkLvlReq : int32_t {
    No_Action = 0,
    Off = 1,
    Auto = 2,
    Low = 3,
    Medium = 4,
    High = 5,
};

enum class InfoFrtRtStHtdCushBkLvlReq : int32_t {
    No_Action = 0,
    Off = 1,
    Auto = 2,
    Low = 3,
    Medium = 4,
    High = 5,
};

enum class InfoFrtRtStVntCoolLvlReq : int32_t {
    No_Action = 0,
    Off = 1,
    Auto = 2,
    Low = 3,
    Medium = 4,
    High = 5,
};

enum class InfoFrtSnshdMtnCtlAval : int32_t {
    Not_Available = 0,
    Available = 1,
};

enum class InfoFrtSnshdMtnReq : int32_t {
    No_Request = 0,
    Open = 1,
    Close = 2,
};

enum class InfoFrtSnshdPstnReq : int32_t {
    No_Request = 0,
    Num0_ = 1,
    Num10_ = 2,
    Num20_ = 3,
    Num30_ = 4,
    Num40_ = 5,
    Num50_ = 6,
    Num60_ = 7,
    Num70_ = 8,
    Num80_ = 9,
    Num90_ = 10,
    Num100_ = 11,
    Comfort_Open = 12,
    Stop = 13,
};

enum class InfoHtdFrtWshldSet : int32_t {
    No_Action = 0,
    HFWS_Off = 1,
    HFWS_On = 2,
    Auto = 3,
};

enum class InfoHtdStrgWhlLvlReq : int32_t {
    No_Action = 0,
    Off = 1,
    Auto = 2,
    Low = 3,
    Medium = 4,
    High = 5,
};

enum class InfoRrLtStHtdBkLvlReq : int32_t {
    No_Action = 0,
    Off = 1,
    Auto = 2,
    Low = 3,
    Medium = 4,
    High = 5,
};

enum class InfoRrLtStHtdCushBkLvlReq : int32_t {
    No_Action = 0,
    Off = 1,
    Auto = 2,
    Low = 3,
    Medium = 4,
    High = 5,
};

enum class InfoRrLtStVntCoolLvlReq : int32_t {
    No_Action = 0,
    Off = 1,
    Auto = 2,
    Low = 3,
    Medium = 4,
    High = 5,
};

enum class InfoRrRtStHtdBkLvlReq : int32_t {
    No_Action = 0,
    Off = 1,
    Auto = 2,
    Low = 3,
    Medium = 4,
    High = 5,
};

enum class InfoRrRtStHtdCushBkLvlReq : int32_t {
    No_Action = 0,
    Off = 1,
    Auto = 2,
    Low = 3,
    Medium = 4,
    High = 5,
};

enum class InfoRrRtStVntCoolLvlReq : int32_t {
    No_Action = 0,
    Off = 1,
    Auto = 2,
    Low = 3,
    Medium = 4,
    High = 5,
};

enum class InfoSnrfMtnCtlAval : int32_t {
    Not_Available = 0,
    Available = 1,
};

enum class InfoSnrfPstnReq : int32_t {
    No_Request = 0,
    Num0_ = 1,
    Num10_ = 2,
    Num20_ = 3,
    Num30_ = 4,
    Num40_ = 5,
    Num50_ = 6,
    Num60_ = 7,
    Num70_ = 8,
    Num80_ = 9,
    Num90_ = 10,
    Num100_ = 11,
    Vent = 12,
    Comfort_Open = 13,
    Stop = 14,
};

enum class InfoSysStat : int32_t {
    Sleep = 0,
    AnimationInit = 1,
    HMI_Init = 2,
    HMI_Inactive = 3,
    Start = 4,
    Run = 5,
    Propulsion = 6,
    Accessory = 7,
    LocalInfotainment = 8,
    LocalPhone = 9,
    LocalValet = 10,
    LocalEject = 11,
    ValetMode = 12,
    TheftLocked = 13,
    NoCalibration = 14,
    NoVIN = 15,
    RemoteReflashProgramming = 16,
    OffMode = 17,
    VirtualSwitchDisplay = 18,
    NoInVehicleInfotainment = 19,
};

enum class InfoThmSeltnCurrSetVal : int32_t {
    Unknown = 0,
    None = 1,
    Theme_1 = 2,
    Theme_2 = 3,
    Theme_3 = 4,
    Theme_4 = 5,
    Theme_5 = 6,
    Theme_6 = 7,
    Theme_7 = 8,
    Theme_8 = 9,
    Theme_9 = 10,
    Theme_10 = 11,
    Theme_11 = 12,
    Theme_12 = 13,
    Theme_13 = 14,
    Theme_14 = 15,
};

enum class InfoThmSeltnExpdCurrSetVal : int32_t {
    Unknown = 0,
    None = 1,
    Theme_1 = 2,
    Theme_2 = 3,
    Theme_3 = 4,
    Theme_4 = 5,
    Theme_5 = 6,
    Theme_6 = 7,
    Theme_7 = 8,
    Theme_8 = 9,
    Theme_9 = 10,
    Theme_10 = 11,
    Theme_11 = 12,
    Theme_12 = 13,
    Theme_13 = 14,
    Theme_14 = 15,
    Theme_15 = 16,
    Theme_16 = 17,
    Theme_17 = 18,
    Theme_18 = 19,
    Theme_19 = 20,
    Theme_20 = 21,
    Theme_21 = 22,
    Theme_22 = 23,
    Theme_23 = 24,
    Theme_24 = 25,
    Theme_25 = 26,
    Theme_26 = 27,
    Theme_27 = 28,
    Theme_28 = 29,
    Theme_29 = 30,
    Theme_30 = 31,
    Theme_31 = 32,
    Theme_32 = 33,
    Theme_33 = 34,
    Theme_34 = 35,
    Theme_35 = 36,
    Theme_36 = 37,
    Theme_37 = 38,
    Theme_38 = 39,
    Theme_39 = 40,
    Theme_40 = 41,
    Theme_41 = 42,
    Theme_42 = 43,
    Theme_43 = 44,
    Theme_44 = 45,
    Theme_45 = 46,
    Theme_46 = 47,
    Theme_47 = 48,
    Theme_48 = 49,
    Theme_49 = 50,
    Theme_50 = 51,
    Theme_51 = 52,
    Theme_52 = 53,
    Theme_53 = 54,
    Theme_54 = 55,
    Theme_55 = 56,
    Theme_56 = 57,
    Theme_57 = 58,
    Theme_58 = 59,
    Theme_59 = 60,
    Theme_60 = 61,
    Theme_61 = 62,
    Theme_62 = 63,
    Theme_63 = 64,
    Theme_64 = 65,
    Theme_65 = 66,
    Theme_66 = 67,
    Theme_67 = 68,
    Theme_68 = 69,
    Theme_69 = 70,
    Theme_70 = 71,
    Theme_71 = 72,
    Theme_72 = 73,
    Theme_73 = 74,
    Theme_74 = 75,
    Theme_75 = 76,
    Theme_76 = 77,
    Theme_77 = 78,
    Theme_78 = 79,
    Theme_79 = 80,
    Theme_80 = 81,
    Theme_81 = 82,
    Theme_82 = 83,
    Theme_83 = 84,
    Theme_84 = 85,
    Theme_85 = 86,
    Theme_86 = 87,
    Theme_87 = 88,
    Theme_88 = 89,
    Theme_89 = 90,
    Theme_90 = 91,
    Theme_91 = 92,
    Theme_92 = 93,
    Theme_93 = 94,
    Theme_94 = 95,
    Theme_95 = 96,
    Theme_96 = 97,
    Theme_97 = 98,
    Theme_98 = 99,
    Theme_99 = 100,
    Theme_100 = 101,
    Theme_101 = 102,
    Theme_102 = 103,
    Theme_103 = 104,
    Theme_104 = 105,
    Theme_105 = 106,
    Theme_106 = 107,
    Theme_107 = 108,
    Theme_108 = 109,
    Theme_109 = 110,
    Theme_110 = 111,
    Theme_111 = 112,
    Theme_112 = 113,
    Theme_113 = 114,
    Theme_114 = 115,
    Theme_115 = 116,
    Theme_116 = 117,
    Theme_117 = 118,
    Theme_118 = 119,
    Theme_119 = 120,
    Theme_120 = 121,
    Theme_121 = 122,
    Theme_122 = 123,
    Theme_123 = 124,
    Theme_124 = 125,
    Theme_125 = 126,
    Theme_126 = 127,
    Theme_127 = 128,
    Theme_128 = 129,
    Theme_129 = 130,
    Theme_130 = 131,
    Theme_131 = 132,
    Theme_132 = 133,
    Theme_133 = 134,
    Theme_134 = 135,
    Theme_135 = 136,
    Theme_136 = 137,
    Theme_137 = 138,
    Theme_138 = 139,
    Theme_139 = 140,
    Theme_140 = 141,
    Theme_141 = 142,
    Theme_142 = 143,
    Theme_143 = 144,
    Theme_144 = 145,
    Theme_145 = 146,
    Theme_146 = 147,
    Theme_147 = 148,
    Theme_148 = 149,
    Theme_149 = 150,
    Theme_150 = 151,
    Theme_151 = 152,
    Theme_152 = 153,
    Theme_153 = 154,
    Theme_154 = 155,
    Theme_155 = 156,
    Theme_156 = 157,
    Theme_157 = 158,
    Theme_158 = 159,
    Theme_159 = 160,
    Theme_160 = 161,
    Theme_161 = 162,
    Theme_162 = 163,
    Theme_163 = 164,
    Theme_164 = 165,
    Theme_165 = 166,
    Theme_166 = 167,
    Theme_167 = 168,
    Theme_168 = 169,
    Theme_169 = 170,
    Theme_170 = 171,
    Theme_171 = 172,
    Theme_172 = 173,
    Theme_173 = 174,
    Theme_174 = 175,
    Theme_175 = 176,
    Theme_176 = 177,
    Theme_177 = 178,
    Theme_178 = 179,
    Theme_179 = 180,
    Theme_180 = 181,
    Theme_181 = 182,
    Theme_182 = 183,
    Theme_183 = 184,
    Theme_184 = 185,
    Theme_185 = 186,
    Theme_186 = 187,
    Theme_187 = 188,
    Theme_188 = 189,
    Theme_189 = 190,
    Theme_190 = 191,
    Theme_191 = 192,
    Theme_192 = 193,
    Theme_193 = 194,
    Theme_194 = 195,
    Theme_195 = 196,
    Theme_196 = 197,
    Theme_197 = 198,
    Theme_198 = 199,
    Theme_199 = 200,
    Theme_200 = 201,
    Theme_201 = 202,
    Theme_202 = 203,
    Theme_203 = 204,
    Theme_204 = 205,
    Theme_205 = 206,
    Theme_206 = 207,
    Theme_207 = 208,
    Theme_208 = 209,
    Theme_209 = 210,
    Theme_210 = 211,
    Theme_211 = 212,
    Theme_212 = 213,
    Theme_213 = 214,
    Theme_214 = 215,
    Theme_215 = 216,
    Theme_216 = 217,
    Theme_217 = 218,
    Theme_218 = 219,
    Theme_219 = 220,
    Theme_220 = 221,
    Theme_221 = 222,
    Theme_222 = 223,
    Theme_223 = 224,
    Theme_224 = 225,
    Theme_225 = 226,
    Theme_226 = 227,
    Theme_227 = 228,
    Theme_228 = 229,
    Theme_229 = 230,
    Theme_230 = 231,
    Theme_231 = 232,
    Theme_232 = 233,
    Theme_233 = 234,
    Theme_234 = 235,
    Theme_235 = 236,
    Theme_236 = 237,
    Theme_237 = 238,
    Theme_238 = 239,
    Theme_239 = 240,
    Theme_240 = 241,
    Theme_241 = 242,
    Theme_242 = 243,
    Theme_243 = 244,
    Theme_244 = 245,
    Theme_245 = 246,
    Theme_246 = 247,
    Theme_247 = 248,
    Theme_248 = 249,
    Theme_249 = 250,
    Theme_250 = 251,
    Theme_251 = 252,
    Theme_252 = 253,
    Theme_253 = 254,
    Theme_254 = 255,
};

enum class InfoUTCMth : int32_t {
    Unknown = 0,
    January = 1,
    February = 2,
    March = 3,
    April = 4,
    May = 5,
    June = 6,
    July = 7,
    August = 8,
    September = 9,
    October = 10,
    November = 11,
    December = 12,
};

enum class InfoWndMtnCtlLFAval : int32_t {
    Not_Available = 0,
    Available = 1,
};

enum class InfoWndMtnCtlLRAval : int32_t {
    Not_Available = 0,
    Available = 1,
};

enum class InfoWndMtnCtlRFAval : int32_t {
    Not_Available = 0,
    Available = 1,
};

enum class InfoWndMtnCtlRRAval : int32_t {
    Not_Available = 0,
    Available = 1,
};

enum class InfoWndMtnLFReq : int32_t {
    No_Request = 0,
    Move_Fully_Up = 1,
    Move_Fully_Down = 2,
    Vent = 3,
};

enum class InfoWndMtnLRReq : int32_t {
    No_Request = 0,
    Move_Fully_Up = 1,
    Move_Fully_Down = 2,
    Vent = 3,
};

enum class InfoWndMtnRFReq : int32_t {
    No_Request = 0,
    Move_Fully_Up = 1,
    Move_Fully_Down = 2,
    Vent = 3,
};

enum class InfoWndMtnRRReq : int32_t {
    No_Request = 0,
    Move_Fully_Up = 1,
    Move_Fully_Down = 2,
    Vent = 3,
};

enum class InstnsFuelEconHybOvrrdReq : int32_t {
    No_Action = 0,
    Min_Fuel_Economy = 1,
    Max_Fuel_Economy = 2,
    Auto_Stop = 3,
    EV = 4,
};

enum class IntDimSeldAnmTypStVal : int32_t {
    No_Action = 0,
    Off = 1,
    Animation_Type_1 = 2,
    Animation_Type_2 = 3,
    Animation_Type_3 = 4,
    Animation_Type_4 = 5,
    Animation_Type_5 = 6,
    Animation_Type_6 = 7,
    Animation_Type_7 = 8,
    Animation_Type_8 = 9,
    Animation_Type_9 = 10,
    Animation_Type_10 = 11,
    Animation_Type_11 = 12,
    Animation_Type_12 = 13,
    Animation_Type_13 = 14,
    Animation_Type_14 = 15,
};

enum class IntDimSeldClrTypStVal : int32_t {
    No_Action = 0,
    Off = 1,
    Color_Type_1 = 2,
    Color_Type_2 = 3,
    Color_Type_3 = 4,
    Color_Type_4 = 5,
    Color_Type_5 = 6,
    Color_Type_6 = 7,
    Color_Type_7 = 8,
    Color_Type_8 = 9,
    Color_Type_9 = 10,
    Color_Type_10 = 11,
    Color_Type_11 = 12,
    Color_Type_12 = 13,
    Color_Type_13 = 14,
    Color_Type_14 = 15,
    Color_Type_15 = 16,
    Color_Type_16 = 17,
    Color_Type_17 = 18,
    Color_Type_18 = 19,
    Color_Type_19 = 20,
    Color_Type_20 = 21,
    Color_Type_21 = 22,
    Color_Type_22 = 23,
    Color_Type_23 = 24,
    Color_Type_24 = 25,
    Color_Type_25 = 26,
    Color_Type_26 = 27,
    Color_Type_27 = 28,
    Color_Type_28 = 29,
    Color_Type_29 = 30,
    Color_Type_30 = 31,
};

enum class InvsblTrlrOprtlSts : int32_t {
    Available = 0,
    Degraded = 1,
    Unavailable = 2,
    Unknown = 3,
};

enum class IonzrCtrlCstChgSetReq : int32_t {
    NO_ACTION = 0,
    OFF = 1,
    ON = 2,
    RESERVED_3 = 3,
    RESERVED_4 = 4,
    RESERVED_5 = 5,
    RESERVED_6 = 6,
    RESERVED_7 = 7,
};

enum class IonzrCtrlCstCrStVal : int32_t {
    SETTING_UNKNOWN = 0,
    OFF = 1,
    ON = 2,
    RESERVED_1 = 3,
    RESERVED_2 = 4,
    RESERVED_3 = 5,
    RESERVED_4 = 6,
    RESERVED_5 = 7,
};

enum class JckKnfDtnCstChgSetReq : int32_t {
    No_Action = 0,
    Off = 1,
    On = 2,
};

enum class JckKnfDtnCstCurrSetVal : int32_t {
    Setting_Unknown = 0,
    Off = 1,
    On = 2,
    Reserved_3 = 3,
    Reserved_4 = 4,
    Reserved_5 = 5,
    Reserved_6 = 6,
    Reserved_7 = 7,
};

enum class JmpStrtSts : int32_t {
    Inactive = 0,
    In_Progress = 1,
    Complete = 2,
    Power_Mode = 3,
    Disabled = 4,
};

enum class KeyInRmdrChmEvntSt : int32_t {
    NO_ACTION = 0,
    ACTIVE = 1,
    CANCEL_CHIME = 2,
};

enum class LBCCDRR_ClrStrdPstnReq : int32_t {
    No_Action = 0,
    Request_to_Clear_Position = 1,
    Confirmation_to_Clear_Position = 2,
};

enum class LBCCDRR_ClrStrdPstnResp : int32_t {
    No_Action = 0,
    Clear_Position_Request_Acknowledged = 1,
    Clear_Position_Request_Performed = 2,
};

enum class LBCCDRR_PstnNumReq : int32_t {
    No_Action = 0,
    Position_Number_1 = 1,
    Position_Number_2 = 2,
    Position_Number_3 = 3,
    Position_Number_4 = 4,
};

enum class LBCCDRR_PstnNumResp : int32_t {
    No_Action = 0,
    Clear_Position_1 = 1,
    Clear_Position_2 = 2,
    Clear_Position_3 = 3,
    Clear_Position_4 = 4,
};

enum class LBCPSS_PstnUpdtLoc : int32_t {
    No_Action = 0,
    Update_Position_1 = 1,
    Update_Position_2 = 2,
    Update_Position_3 = 3,
    Update_Position_4 = 4,
};

enum class LBCPSS_PstnUpdtSts : int32_t {
    No_Action = 0,
    Position_Updated = 1,
    Position_Modified = 2,
};

enum class LDCLCstChgSetReq : int32_t {
    NO_ACTION = 0,
    OFF = 1,
    ON = 2,
    RESERVED_3 = 3,
    RESERVED_4 = 4,
    RESERVED_5 = 5,
    RESERVED_6 = 6,
    RESERVED_7 = 7,
};

enum class LDCLCstCurSetVal : int32_t {
    SETTING_UNKNOWN = 0,
    OFF = 1,
    ON = 2,
    RESERVED_3 = 3,
    RESERVED_4 = 4,
    RESERVED_5 = 5,
    RESERVED_6 = 6,
    RESERVED_7 = 7,
};

enum class LDCLDlydLkChmEvSt : int32_t {
    NO_ACTION = 0,
    ACTIVE = 1,
    CANCEL_CHIME = 2,
};

enum class LDWCtrlHndOff1ChmEvntStat : int32_t {
    NO_ACTION = 0,
    ACTIVE = 1,
    CANCEL_CHIME = 2,
};

enum class LDWCtrlHndOff2ChmEvntStat : int32_t {
    NO_ACTION = 0,
    ACTIVE = 1,
    CANCEL_CHIME = 2,
};

enum class LDWCtrlHndOff3ChmEvntStat : int32_t {
    NO_ACTION = 0,
    ACTIVE = 1,
    CANCEL_CHIME = 2,
};

enum class LDWCtrlLtHndSdChmEvntStat : int32_t {
    NO_ACTION = 0,
    ACTIVE = 1,
    CANCEL_CHIME = 2,
};

enum class LDWCtrlRtHndSdChmEvntStat : int32_t {
    NO_ACTION = 0,
    ACTIVE = 1,
    CANCEL_CHIME = 2,
};

enum class LFSCDS_BkBlstrInOut : int32_t {
    Not_Selected = 0,
    Selected_No_Movement = 1,
    In = 2,
    Out = 3,
};

enum class LFSCDS_BkCshBlstInOt : int32_t {
    Not_Selected = 0,
    Selected_No_Movement = 1,
    Back_Bolster_In = 2,
    Back_Bolster_Out = 3,
    Cushion_Bolster_In = 4,
    Cushion_Bolster_Out = 5,
};

enum class LFSCDS_CshBlstrInOut : int32_t {
    Not_Selected = 0,
    Selected_No_Movement = 1,
    In = 2,
    Out = 3,
};

enum class LFSCDS_CshLgAdjFdRr : int32_t {
    Not_Selected = 0,
    Selected_No_Movement = 1,
    Forward = 2,
    Rearward = 3,
};

enum class LFSCDS_HdrstFdRrUDn : int32_t {
    Not_Selected = 0,
    Selected_No_Movement = 1,
    Up = 2,
    Down = 3,
    Forward = 4,
    Rearward = 5,
};

enum class LFSCDS_HdrstFwdRrwd : int32_t {
    Not_Selected = 0,
    Selected_No_Movement = 1,
    Forward = 2,
    Rearward = 3,
};

enum class LFSCDS_HdrstTltFwdRr : int32_t {
    Not_Selected = 0,
    Selected_No_Movement = 1,
    Forward = 2,
    Rearward = 3,
};

enum class LFSCDS_HdrstUpDn : int32_t {
    Not_Selected = 0,
    Selected_No_Movement = 1,
    Up = 2,
    Down = 3,
};

enum class LFSCDS_HdrstWngInOt : int32_t {
    Not_Selected = 0,
    Selected_No_Movement = 1,
    In = 2,
    Out = 3,
};

enum class LFSCDS_LmbrFwdRr : int32_t {
    Not_Selected = 0,
    Selected_No_Movement = 1,
    Forward = 2,
    Rearward = 3,
};

enum class LFSCDS_LmbrUDnFdRr : int32_t {
    Not_Selected = 0,
    Selected_No_Movement = 1,
    Up = 2,
    Down = 3,
    Forward = 4,
    Rearward = 5,
};

enum class LFSCDS_LmbrUpDwn : int32_t {
    Not_Selected = 0,
    Selected_No_Movement = 1,
    Up = 2,
    Down = 3,
};

enum class LFSCDS_Massg : int32_t {
    Not_Selected = 0,
    Selected_Massage_Off = 1,
    Selected_Massage_On = 2,
};

enum class LFSCDS_MassgIntsty : int32_t {
    Massage_Off = 0,
    Massage_Intensity_1 = 1,
    Massage_Intensity_2 = 2,
    Massage_Intensity_3 = 3,
    Massage_Intensity_4 = 4,
    Massage_Intensity_5 = 5,
    Massage_Intensity_6 = 6,
    Massage_Intensity_7 = 7,
};

enum class LFSCDS_MassgTyp : int32_t {
    Massage_Off = 0,
    Massage_Type_1 = 1,
    Massage_Type_2 = 2,
    Massage_Type_3 = 3,
    Massage_Type_4 = 4,
    Massage_Type_5 = 5,
    Massage_Type_6 = 6,
    Massage_Type_7 = 7,
    Massage_Type_8 = 8,
    Massage_Type_9 = 9,
    Massage_Type_10 = 10,
    Massage_Type_11 = 11,
    Massage_Type_12 = 12,
    Massage_Type_13 = 13,
    Massage_Type_14 = 14,
    Massage_Type_15 = 15,
};

enum class LFSCDS_UprShldrFdRr : int32_t {
    Not_Selected = 0,
    Selected_No_Movement = 1,
    Forward = 2,
    Rearward = 3,
};

enum class LIB1CellVltgFlt : int32_t {
    No_Fault = 0,
    Low_Severity = 1,
    Medium_Severity = 2,
    High_Severity = 3,
};

enum class LIB1TempFlt : int32_t {
    No_Fault = 0,
    Low_Severity = 1,
    Medium_Severity = 2,
    High_Severity = 3,
};

enum class LKALnMrkgIndLt : int32_t {
    Off = 0,
    White = 1,
    Green = 2,
    Amber = 3,
    Amber_Flashing = 4,
};

enum class LKALnMrkgIndRt : int32_t {
    Off = 0,
    White = 1,
    Green = 2,
    Amber = 3,
    Amber_Flashing = 4,
};

enum class LRSCDS_BkBlstrInOut : int32_t {
    Not_Selected = 0,
    Selected_No_Movement = 1,
    In = 2,
    Out = 3,
};

enum class LRSCDS_BkCshBlstInOt : int32_t {
    Not_Selected = 0,
    Selected_No_Movement = 1,
    Back_Bolster_In = 2,
    Back_Bolster_Out = 3,
    Cushion_Bolster_In = 4,
    Cushion_Bolster_Out = 5,
};

enum class LRSCDS_CshBlstrInOut : int32_t {
    Not_Selected = 0,
    Selected_No_Movement = 1,
    In = 2,
    Out = 3,
};

enum class LRSCDS_CshLgAdjFdRr : int32_t {
    Not_Selected = 0,
    Selected_No_Movement = 1,
    Forward = 2,
    Rearward = 3,
};

enum class LRSCDS_HdrstFdRrUDn : int32_t {
    Not_Selected = 0,
    Selected_No_Movement = 1,
    Up = 2,
    Down = 3,
    Forward = 4,
    Rearward = 5,
};

enum class LRSCDS_HdrstFwdRrwd : int32_t {
    Not_Selected = 0,
    Selected_No_Movement = 1,
    Forward = 2,
    Rearward = 3,
};

enum class LRSCDS_HdrstTltFwdRr : int32_t {
    Not_Selected = 0,
    Selected_No_Movement = 1,
    Forward = 2,
    Rearward = 3,
};

enum class LRSCDS_HdrstUpDn : int32_t {
    Not_Selected = 0,
    Selected_No_Movement = 1,
    Up = 2,
    Down = 3,
};

enum class LRSCDS_HdrstWngInOt : int32_t {
    Not_Selected = 0,
    Selected_No_Movement = 1,
    In = 2,
    Out = 3,
};

enum class LRSCDS_LmbrFwdRr : int32_t {
    Not_Selected = 0,
    Selected_No_Movement = 1,
    Forward = 2,
    Rearward = 3,
};

enum class LRSCDS_LmbrUDnFdRr : int32_t {
    Not_Selected = 0,
    Selected_No_Movement = 1,
    Up = 2,
    Down = 3,
    Forward = 4,
    Rearward = 5,
};

enum class LRSCDS_LmbrUpDwn : int32_t {
    Not_Selected = 0,
    Selected_No_Movement = 1,
    Up = 2,
    Down = 3,
};

enum class LRSCDS_Massg : int32_t {
    Not_Selected = 0,
    Selected_Massage_Off = 1,
    Selected_Massage_On = 2,
};

enum class LRSCDS_MassgIntsty : int32_t {
    Massage_Off = 0,
    Massage_Intensity_1 = 1,
    Massage_Intensity_2 = 2,
    Massage_Intensity_3 = 3,
    Massage_Intensity_4 = 4,
    Massage_Intensity_5 = 5,
    Massage_Intensity_6 = 6,
    Massage_Intensity_7 = 7,
};

enum class LRSCDS_MassgTyp : int32_t {
    Massage_Off = 0,
    Massage_Type_1 = 1,
    Massage_Type_2 = 2,
    Massage_Type_3 = 3,
    Massage_Type_4 = 4,
    Massage_Type_5 = 5,
    Massage_Type_6 = 6,
    Massage_Type_7 = 7,
    Massage_Type_8 = 8,
    Massage_Type_9 = 9,
    Massage_Type_10 = 10,
    Massage_Type_11 = 11,
    Massage_Type_12 = 12,
    Massage_Type_13 = 13,
    Massage_Type_14 = 14,
    Massage_Type_15 = 15,
};

enum class LRSCDS_UprShldrFdRr : int32_t {
    Not_Selected = 0,
    Selected_No_Movement = 1,
    Forward = 2,
    Rearward = 3,
};

enum class LVMAVC_ApplID : int32_t {
    NO_ACTION = 0,
    LVM_NAV = 1,
    LVM_DMB = 2,
    LVM_PERFORMANCE_COMPUTER = 3,
    LVM_COMPLEX_MODE = 4,
};

enum class LVMAVC_PrmtAudResp : int32_t {
    NO_ACTION = 0,
    ACTIVE = 1,
};

enum class LVMAVC_RmtEnbl : int32_t {
    NO_ACTION = 0,
    REMOTE_ENABLE_ON = 1,
    REMOTE_ENABLE_ACTIVE = 2,
};

enum class LVMAVC_RmtSpchRcgnActn : int32_t {
    NO_ACTION = 0,
    ACTIVATE_LVM_SR = 1,
    PTT_BUTTON_PRESS = 2,
    END_BUTTON_PRESS = 3,
};

enum class LVMAVC_RmtSpchRcgnID : int32_t {
    NO_ACTION = 0,
    LVM_NAV = 1,
    LVM_DMB = 2,
    LVM_PDR = 3,
};

enum class LVMAVC_SpchRcgnAval : int32_t {
    NO_ACTION = 0,
    LVM_SPEECH_REC_AVAILABLE = 1,
};

enum class LVMAVC_StreoAudResp : int32_t {
    NO_ACTION = 0,
    ACTIVE = 1,
};

enum class LVMAVR_ApplStat : int32_t {
    NO_ACTION = 0,
    LVM_NAV = 1,
    LVM_DMB = 2,
    LVM_PERFORMANCE_COMPUTER = 3,
    LVM_COMPLEX_MODE = 4,
};

enum class LVMAVR_DispReq : int32_t {
    NO_ACTION = 0,
    LVM_NAV = 1,
    LVM_DMB = 2,
    LVM_PDR = 3,
};

enum class LVMAVR_PrmtAudReq : int32_t {
    NO_ACTION = 0,
    PROMPT_REQUEST = 1,
};

enum class LVMAVR_SpchRcgnActv : int32_t {
    NO_ACTION = 0,
    LVM_SPEECH_REC_READY = 1,
    LVM_SPEECH_REC_ACTIVE = 2,
};

enum class LVMAVR_StreoAudReq : int32_t {
    NO_ACTION = 0,
    STEREO_REQUEST = 1,
};

enum class LclTmMthVal : int32_t {
    Unknown = 0,
    January = 1,
    February = 2,
    March = 3,
    April = 4,
    May = 5,
    June = 6,
    July = 7,
    August = 8,
    September = 9,
    October = 10,
    November = 11,
    December = 12,
};

enum class LnChgAlrtCstChngSetReq : int32_t {
    NO_ACTION = 0,
    OFF = 1,
    ON = 2,
    RESERVED_3 = 3,
    RESERVED_4 = 4,
    RESERVED_5 = 5,
    RESERVED_6 = 6,
    RESERVED_7 = 7,
};

enum class LnChgAlrtCstCrStVal : int32_t {
    SETTING_UNKNOWN = 0,
    OFF = 1,
    ON = 2,
    RESERVED_3 = 3,
    RESERVED_4 = 4,
    RESERVED_5 = 5,
    RESERVED_6 = 6,
    RESERVED_7 = 7,
};

enum class LnCntrCnvMsgIndRqst : int32_t {
    No_Indication = 0,
    Behind_Slow_Vehicle = 1,
    Being_Passed_on_Left = 2,
    Being_Passed_on_Right = 3,
    Tailgater_Detected = 4,
    Left_Blind_Spot_Occupied = 5,
    Right_Blind_Spot_Occupied = 6,
    Heavy_Traffic = 7,
    Merging_Vehicle = 8,
    Slow_Moving_Traffic_in_Left_Lane = 9,
    Slow_Moving_Traffic_Ahead = 10,
    Slow_Moving_Traffic_in_Right_Lane = 11,
    Major_Road_Interchange_Ahead = 12,
    Road_Exit_Detected_Ahead = 13,
    Exit_Only_Lane_Ahead = 14,
    Lane_Ending_Ahead = 15,
    Road_Detour_Detected = 16,
    Take_Time_to_Look_at_Road = 17,
    Show_Fuel_Level = 18,
    Show_Fuel_Range_Normal = 19,
    Show_Fuel_Range_Low = 20,
    Take_Steering_Active_With_Muting = 21,
};

enum class LnCntrEsclnSts : int32_t {
    None = 0,
    Driver_Not_Looking_to_Roadway = 1,
    Limited_Condition = 2,
    System_Faulted = 3,
};

enum class LnCntrSpchPrmtReq : int32_t {
    No_Prompt = 0,
    Take_Steering = 1,
    Take_Vehicle_Control = 2,
};

enum class LnCntrWrn2IndReq : int32_t {
    No_Indication = 0,
    Hill_Descent_Control_Active = 1,
    Power_Take_Off_Active = 2,
    Road_Users_Too_Close = 3,
    Unknown_Object_Too_Close = 4,
    Turn_Signal_is_On = 5,
    Excessive_Acceleration = 6,
    Door_is_Open = 7,
    Traction_Control_Event = 8,
    Traction_Control_Off = 9,
    VSC_Event = 10,
    VSC_Off = 11,
    Release_Parking_Brake = 12,
    Transfer_Case_Setting = 13,
    Battery_Low = 14,
    Speed_Limiter_Active_or_Being_Activated = 15,
    Steep_Road = 16,
    Switch_Gear_to_Drive = 17,
    Regen_Active = 18,
    Brakes_Overheated = 19,
    No_Route_Information = 20,
    Ultra_Cruise_Accelerator_Pressed = 21,
    Approaching_Emergency_Vehicle = 22,
    Construction_Zone_Approaching = 23,
    Railroad_Approaching = 24,
    Weather = 25,
    UC_Available = 26,
    Unable_to_Follow_Route = 27,
    Vehicle_Service_Required = 28,
    Vehicle_Payload_Heavy = 29,
    Toll_Booth_Preferences = 30,
    Approaching_School_Zone = 31,
    Changing_Lanes_for_Route = 32,
    Adjusting_for_Speed_Limit = 33,
    Super_Cruise_Active = 34,
    Long_Press_SC_Button_for_Unavailability_Reason = 35,
};

enum class LnCntrWrnIndRqst : int32_t {
    No_Indication = 0,
    Can_not_See_Lanes = 1,
    Tight_Curve = 2,
    Freeway_Ends = 3,
    Construction = 4,
    Excessive_Speed = 5,
    Vehicles_Too_Close = 6,
    Canceled_Take_Steering = 7,
    Can_not_See_Eyes = 8,
    Due_to_Weather = 9,
    Take_Steering = 10,
    Take_Vehicle_Control = 11,
    Service_Driver_Assist_System = 12,
    Lane_Following_Locked_Out = 13,
    TJA_Max_Speed_Reached = 14,
    TJA_Available = 15,
    TJA_Active = 16,
};

enum class LnDtWrnCntrlFtrSt : int32_t {
    OFF = 0,
    STANDBY = 1,
    READY_TO_ASSIST = 2,
    FAILED = 3,
    ALERT_AND_CONTROL = 4,
};

enum class LnDtWrnCntrlVsAlrtCmdGnc : int32_t {
    OFF = 0,
    NOT_READY_TO_ASSIST = 1,
    READY_TO_ASSIST = 2,
    ALERT = 3,
    INTERVENTION = 4,
};

enum class LnDtnWrnSpprssnVirtCtlAval : int32_t {
    Not_Available = 0,
    Available = 1,
};

enum class LnDtnWrnSpprssnVirtCtlReq : int32_t {
    No_Action = 0,
    Off = 1,
    On = 2,
};

enum class LnDtnWrnSpprssnVirtUserCtlAllwd : int32_t {
    Not_Allowed = 0,
    Allowed = 1,
};

enum class LnDtnWrnSpprssnVrtCtlCurrSltnVl : int32_t {
    Unknown = 0,
    Off = 1,
    On = 2,
};

enum class LnFllwgFtrStat : int32_t {
    Off = 0,
    Unavailable = 1,
    Disabled = 2,
    Enabled = 3,
    Active = 4,
    Cautionary = 5,
    Override = 6,
    Degraded = 7,
    No_Return = 8,
    Ended = 9,
    Non_Responsive_Driver = 10,
};

enum class LnKpAsstSeltdVirtCtlReq : int32_t {
    No_Action = 0,
    On = 1,
    Off = 2,
};

enum class LnKpAsstVirtCtlAval : int32_t {
    Not_Available = 0,
    Available = 1,
};

enum class LnchCtlEngRPMReq : int32_t {
    No_Action = 0,
    Num800 = 1,
    Num900 = 2,
    Num1000 = 3,
    Num1100 = 4,
    Num1200 = 5,
    Num1300 = 6,
    Num1400 = 7,
    Num1500 = 8,
    Num1600 = 9,
    Num1700 = 10,
    Num1800 = 11,
    Num1900 = 12,
    Num2000 = 13,
    Num2100 = 14,
    Num2200 = 15,
    Num2300 = 16,
    Num2400 = 17,
    Num2500 = 18,
    Num2600 = 19,
    Num2700 = 20,
    Num2800 = 21,
    Num2900 = 22,
    Num3000 = 23,
    Num3100 = 24,
    Num3200 = 25,
    Num3300 = 26,
    Num3400 = 27,
    Num3500 = 28,
    Num3600 = 29,
    Num3700 = 30,
    Num3800 = 31,
    Num3900 = 32,
    Num4000 = 33,
    FlexibleRPM_1 = 34,
    FlexibleRPM_2 = 35,
    FlexibleRPM_3 = 36,
    FlexibleRPM_4 = 37,
    FlexibleRPM_5 = 38,
};

enum class LnchCtlEngRPMSts : int32_t {
    No_Action = 0,
    Num800 = 1,
    Num900 = 2,
    Num1000 = 3,
    Num1100 = 4,
    Num1200 = 5,
    Num1300 = 6,
    Num1400 = 7,
    Num1500 = 8,
    Num1600 = 9,
    Num1700 = 10,
    Num1800 = 11,
    Num1900 = 12,
    Num2000 = 13,
    Num2100 = 14,
    Num2200 = 15,
    Num2300 = 16,
    Num2400 = 17,
    Num2500 = 18,
    Num2600 = 19,
    Num2700 = 20,
    Num2800 = 21,
    Num2900 = 22,
    Num3000 = 23,
    Num3100 = 24,
    Num3200 = 25,
    Num3300 = 26,
    Num3400 = 27,
    Num3500 = 28,
    Num3600 = 29,
    Num3700 = 30,
    Num3800 = 31,
    Num3900 = 32,
    Num4000 = 33,
    FlexibleRPM_1 = 34,
    FlexibleRPM_2 = 35,
    FlexibleRPM_3 = 36,
    FlexibleRPM_4 = 37,
    FlexibleRPM_5 = 38,
};

enum class LnchCtlModeReq : int32_t {
    No_Action = 0,
    Automatic = 1,
    Custom = 2,
    Line_Lock = 3,
};

enum class LnchCtlSts : int32_t {
    No_Action = 0,
    Unavailable = 1,
    Available = 2,
    Armed = 3,
    Active = 4,
    Generic_Unused_5 = 5,
    Generic_Unused_6 = 6,
    Generic_Unused_7 = 7,
};

enum class LnchCtlUnvRsn : int32_t {
    No_Indication = 0,
    Steering_Turned = 1,
    Generic_Unused_2 = 2,
    Generic_Unused_3 = 3,
    Generic_Unused_4 = 4,
    Generic_Unused_5 = 5,
    Generic_Unused_6 = 6,
    Generic_Unused_7 = 7,
};

enum class LnchCtlWhlSlReq : int32_t {
    No_Action = 0,
    Five_Percent = 1,
    Five_And_A_Half_Percent = 2,
    Six_Percent = 3,
    Six_And_A_Half_Percent = 4,
    Seven_Percent = 5,
    Seven_And_A_Half_Percent = 6,
    Eight_Percent = 7,
    Eight_And_A_Half_Percent = 8,
    Nine_Percent = 9,
    Nine_And_A_Half_Percent = 10,
    Ten_Percent = 11,
    Ten_And_A_Half_Percent = 12,
    Eleven_Percent = 13,
    Eleven_And_a_Half_Percent = 14,
    Twelve_Percent = 15,
    Twelve_And_A_Half_Percent = 16,
    Thirteen_Percent = 17,
    Thirteen_And_A_Half_Percent = 18,
    Fourteen_Percent = 19,
    Fourteen_And_A_Half_Percent = 20,
    Fifteen_Percent = 21,
};

enum class LnchCtlWhlSlSts : int32_t {
    No_Action = 0,
    Five_Percent = 1,
    Five_And_A_Half_Percent = 2,
    Six_Percent = 3,
    Six_And_A_Half_Percent = 4,
    Seven_Percent = 5,
    Seven_And_A_Half_Percent = 6,
    Eight_Percent = 7,
    Eight_And_A_Half_Percent = 8,
    Nine_Percent = 9,
    Nine_And_A_Half_Percent = 10,
    Ten_Percent = 11,
    Ten_And_A_Half_Percent = 12,
    Eleven_Percent = 13,
    Eleven_And_a_Half_Percent = 14,
    Twelve_Percent = 15,
    Twelve_And_A_Half_Percent = 16,
    Thirteen_Percent = 17,
    Thirteen_And_A_Half_Percent = 18,
    Fourteen_Percent = 19,
    Fourteen_And_A_Half_Percent = 20,
    Fifteen_Percent = 21,
};

enum class LngSelExt : int32_t {
    NA_English = 0,
    German = 1,
    Italian = 2,
    Swedish = 3,
    French = 4,
    Spanish = 5,
    Dutch = 6,
    Portuguese = 7,
    Norwegian = 8,
    Finnish = 9,
    Danish = 10,
    Greek = 11,
    Japanese = 12,
    Arabic = 13,
    Standard_Chinese = 14,
    Polish = 15,
    Turkish = 16,
    Korean = 17,
    Traditional_Chinese = 18,
    UK_English = 19,
    Hungarian = 20,
    Czech = 21,
    Slovak = 22,
    Russian = 23,
    Brazilian_Portuguese = 24,
    Thai = 25,
    Bulgarian = 26,
    Romanian = 27,
    Slovenian = 28,
    Croatian = 29,
    Ukrainian = 30,
    NA_French = 31,
    NA_Spanish = 32,
    Cantonese = 33,
    Uzbek = 34,
    Serbian = 35,
    Lithuanian = 36,
    Estonian = 37,
    Latvian = 38,
    Macedonian = 39,
    AU_English = 40,
    ZA_English = 41,
    Hebrew = 42,
    LA_Spanish = 43,
};

enum class LocBsdChrgCstCurrSetVal : int32_t {
    No_Action = 0,
    Off = 1,
    On = 2,
};

enum class LocBsdChrgCstSetReq : int32_t {
    No_Action = 0,
    Off = 1,
    On = 2,
};

enum class LocBsdChrgPstnMdfnReq : int32_t {
    No_Action = 0,
    Store_Position_1 = 1,
    Store_Position_2 = 2,
    Store_Position_3 = 3,
    Store_Position_4 = 4,
};

enum class LogisticModeStatus : int32_t {
    Off = 0,
    Plant = 1,
    Transport_Mode = 2,
    Storage_Mode = 3,
};

enum class LstKyFbFnctnReq : int32_t {
    No_Request = 0,
    Remote_Door_Unlock_Request = 1,
    Remote_Door_Lock_Request = 2,
    Remote_Start_Request = 3,
    Remote_Stop_Request = 4,
    Remote_Rear_Closure_Release_Request = 5,
    Remote_Power_Rear_Closure_Start_Request = 6,
    Remote_Power_Rear_Closure_Stop_Request = 7,
    Remote_Fuel_Operated_Heater_Request_Off = 8,
    RFA_Mirror_Unfold_Request = 9,
    RFA_Mirror_Fold_Request = 10,
    RFA_Window_Open_Request = 11,
    RFA_Windows_Close_Request = 12,
    Remote_Fuel_Operated_Heater_Request_On = 13,
    Remote_Power_Top_Open = 14,
    Remote_Power_Top_Close = 15,
    Remote_Power_Top_Pause = 16,
    Remote_Power_Top_Stop = 17,
    Remote_Panic_Alarm = 18,
    Remote_Locator_Alarm = 19,
    Remote_Front_Closure_Release_Request = 20,
    Remote_Charge_Off = 21,
    Remote_Power_Driver_Door_Motion_Request_Start = 22,
    Remote_Power_Driver_Door_Motion_Request_Stop = 23,
    Remote_Power_Bulkhead_Door_Motion_Request_Start = 24,
    Remote_Power_Bulkhead_Door_Motion_Request_Stop = 25,
    Reserved_26 = 26,
    Reserved_27 = 27,
    Remote_Charge_ON = 28,
    Remote_Power_Front_Compartment_Start_Request = 29,
    Remote_Power_Front_Compartment_Stop_Request = 30,
};

enum class LtAstStsIndRq : int32_t {
    No_Indication = 0,
    Off = 1,
    LDW = 2,
    LKA = 3,
    HoLF = 4,
};

enum class LtRtHnTrCstChgSetReq : int32_t {
    NO_ACTION = 0,
    LEFT_HAND_DRIVE = 1,
    RIGHT_HAND_DRIVE = 2,
    AUTOMATIC_WITH_GPS = 3,
    RESERVED_4 = 4,
    RESERVED_5 = 5,
    RESERVED_6 = 6,
    RESERVED_7 = 7,
};

enum class LtRtHnTrCstCurSetVal : int32_t {
    SETTING_UNKNOWN = 0,
    LEFT_HAND_DRIVE = 1,
    RIGHT_HAND_DRIVE = 2,
    AUTOMATIC_WITH_GPS = 3,
    RESERVED_4 = 4,
    RESERVED_5 = 5,
    RESERVED_6 = 6,
    RESERVED_7 = 7,
};

enum class LvlgSysAeroModeCstChgSetReq : int32_t {
    No_Action = 0,
    Off = 1,
    On = 2,
};

enum class LvlgSysAeroModeCstCurrSetVal : int32_t {
    Setting_Unknown = 0,
    Off = 1,
    On = 2,
};

enum class LvlgSysAlgnMdCstChgSetReq : int32_t {
    No_Action = 0,
    Off = 1,
    On = 2,
};

enum class LvlgSysAlgnMdCstCurrSetVal : int32_t {
    SETTING_UNKNOWN = 0,
    OFF = 1,
    ON = 2,
    RESERVED_3 = 3,
    RESERVED_4 = 4,
    RESERVED_5 = 5,
    RESERVED_6 = 6,
    RESERVED_7 = 7,
};

enum class LvlgSysEntEgrsMdCstChgSetReq : int32_t {
    No_Action = 0,
    Off = 1,
    On = 2,
};

enum class LvlgSysEntEgrsMdCstCurrSetVal : int32_t {
    SETTING_UNKNOWN = 0,
    OFF = 1,
    ON = 2,
    RESERVED_3 = 3,
    RESERVED_4 = 4,
    RESERVED_5 = 5,
    RESERVED_6 = 6,
    RESERVED_7 = 7,
};

enum class LvlgSysServMdCstChgSetReq : int32_t {
    No_Action = 0,
    Off = 1,
    On = 2,
};

enum class LvlgSysServMdCstCurrSetVal : int32_t {
    SETTING_UNKNOWN = 0,
    OFF = 1,
    ON = 2,
    RESERVED_3 = 3,
    RESERVED_4 = 4,
    RESERVED_5 = 5,
    RESERVED_6 = 6,
    RESERVED_7 = 7,
};

enum class MFCAuxRtySelSw : int32_t {
    Unknown = 0,
    Pressed = 1,
    Released = 2,
};

enum class MFCHptFdbkReq : int32_t {
    NoAction = 0,
    Tap = 1,
    LongPress = 2,
    PressHoldScroll = 3,
    PressHoldEnd = 4,
    HapticRequestReserved5 = 5,
    HapticRequestReserved6 = 6,
    HapticRequestReserved7 = 7,
};

enum class MFCInd1 : int32_t {
    Off = 0,
    On = 1,
};

enum class MFCInd2 : int32_t {
    Off = 0,
    On = 1,
};

enum class MFCInd3 : int32_t {
    Off = 0,
    On = 1,
};

enum class MFCInd4 : int32_t {
    Off = 0,
    On = 1,
};

enum class MFCPriRtyDtntSetStat : int32_t {
    DetentSettingType1 = 0,
    DetentSettingType2 = 1,
    DetentSettingType3 = 2,
    DetentSettingType4 = 3,
};

enum class MFCPriRtyDtntSetTyp : int32_t {
    DetentSettingType1 = 0,
    DetentSettingType2 = 1,
    DetentSettingType3 = 2,
    DetentSettingType4 = 3,
};

enum class MFCPrxmtyGstr : int32_t {
    None = 0,
    SwipeUp = 1,
    SwipeDown = 2,
    SwipeLeft = 3,
    SwipeRight = 4,
    ProximityGestureReserve5 = 5,
    ProximityGestureReserve6 = 6,
    ProximityGestureReserve7 = 7,
};

enum class MFCRtyJogSw : int32_t {
    None = 0,
    Up = 1,
    Down = 2,
    Left = 3,
    Right = 4,
};

enum class MFCRtySelSw : int32_t {
    Pressed = 0,
    Released = 1,
};

enum class MFCSwt1 : int32_t {
    Released = 0,
    Pressed = 1,
};

enum class MFCSwt2 : int32_t {
    Released = 0,
    Pressed = 1,
};

enum class MFCSwt3 : int32_t {
    Released = 0,
    Pressed = 1,
};

enum class MFCSwt4 : int32_t {
    Released = 0,
    Pressed = 1,
};

enum class MFCSwt5 : int32_t {
    Released = 0,
    Pressed = 1,
};

enum class MFCSwt6 : int32_t {
    Released = 0,
    Pressed = 1,
};

enum class MFCSwt7 : int32_t {
    Released = 0,
    Pressed = 1,
};

enum class MFCSwt8 : int32_t {
    Released = 0,
    Pressed = 1,
};

enum class MFC_LCMDataMsgStat : int32_t {
    No_Action = 0,
    Acknowledge = 1,
};

enum class MFC_LCMFileTrans : int32_t {
    No_Action = 0,
    Begin_Transfer = 1,
    Successful_Block_Transfer = 2,
    Cancel_Transfer = 3,
    Retry_Last_Block = 4,
};

enum class ManlPrkLmpChmEvtSt : int32_t {
    NO_ACTION = 0,
    ACTIVE = 1,
    CANCEL_CHIME = 2,
};

enum class MaxPwrModeConfDrvrResp : int32_t {
    No_Indication = 0,
    Max_Power_Confirm = 1,
    Max_Power_Cancel = 2,
    Response_3 = 3,
    Response_4 = 4,
    Response_5 = 5,
    Response_6 = 6,
    Response_7 = 7,
};

enum class MaxPwrModeLngPrssReq : int32_t {
    No_Indication = 0,
    Pending = 1,
    Ready = 2,
};

enum class McrClmStSyncFrtLtAval : int32_t {
    Not_Available = 0,
    Available = 1,
};

enum class McrClmStSyncFrtRtAval : int32_t {
    Not_Available = 0,
    Available = 1,
};

enum class McrClmStSyncRrLtAval : int32_t {
    Not_Available = 0,
    Available = 1,
};

enum class McrClmStSyncRrRtAval : int32_t {
    Not_Available = 0,
    Available = 1,
};

enum class MemCmd : int32_t {
    No_Operation_Required = 0,
    Store_Mem_1_Button_Mem_1_ = 1,
    Store_Mem_2_Button_Mem_2_ = 2,
    Store_Mem_3_Button_Mem_3_ = 3,
    Store_Mem_EXIT_Button_Mem_Exit_ = 4,
    Recall_Mem_1_Button_Mem_1_ = 5,
    Recall_Mem_2_Button_Mem_2_ = 6,
    Recall_Mem_3_Button_Mem_3_ = 7,
    Recall_Mem_EXIT_Button_Mem_Exit_ = 8,
    Stop_All_Movement = 9,
    RESERVED_10 = 10,
    RESERVED_11 = 11,
    RESERVED_12 = 12,
    RESERVED_13 = 13,
    RESERVED_14 = 14,
    RESERVED_15 = 15,
};

enum class MemIdfrIgnOnIndReq : int32_t {
    No_Action = 0,
    Driver_1 = 1,
    Driver_2 = 2,
    Driver_3 = 3,
    Driver_4 = 4,
    Driver_5 = 5,
    Driver_6 = 6,
    Driver_7 = 7,
    Driver_8 = 8,
};

enum class MemIdfrMemStorIndReq : int32_t {
    No_Action = 0,
    Driver_1 = 1,
    Driver_2 = 2,
    Driver_3 = 3,
    Driver_4 = 4,
    Driver_5 = 5,
    Driver_6 = 6,
    Driver_7 = 7,
    Driver_8 = 8,
};

enum class MemRclCmpltIndReq : int32_t {
    No_Indication = 0,
    Memory_Button_1 = 1,
    Memory_Button_2 = 2,
    Memory_Button_3 = 3,
    Memory_Button_Exit = 4,
};

enum class MemRclHldUntilCmpltIndReq : int32_t {
    No_Indication = 0,
    Memory_Button_1 = 1,
    Memory_Button_2 = 2,
    Memory_Button_3 = 3,
    Memory_Button_Exit = 4,
};

enum class MemStorCmpltdIndReq : int32_t {
    No_Indication = 0,
    Memory_Button_1 = 1,
    Memory_Button_2 = 2,
    Memory_Button_3 = 3,
    Memory_Button_Exit = 4,
};

enum class MemStrDblBeepChmEvStCoDrv : int32_t {
    No_Action = 0,
    Active = 1,
    Cancel_Chime = 2,
};

enum class MemStrDblBeepChmEvStDrv : int32_t {
    No_Action = 0,
    Active = 1,
    Cancel_Chime = 2,
};

enum class MemStrDblBeepChmEvStLR : int32_t {
    No_Action = 0,
    Active = 1,
    Cancel_Chime = 2,
};

enum class MemStrDblBeepChmEvStRR : int32_t {
    No_Action = 0,
    Active = 1,
    Cancel_Chime = 2,
};

enum class MemStrSnglBeepChmEvStCoDrv : int32_t {
    No_Action = 0,
    Active = 1,
    Cancel_Chime = 2,
};

enum class MemStrSnglBeepChmEvStDrv : int32_t {
    No_Action = 0,
    Active = 1,
    Cancel_Chime = 2,
};

enum class MemStrSnglBeepChmEvStLR : int32_t {
    No_Action = 0,
    Active = 1,
    Cancel_Chime = 2,
};

enum class MemStrSnglBeepChmEvStRR : int32_t {
    No_Action = 0,
    Active = 1,
    Cancel_Chime = 2,
};

enum class MemStrTrplBeepChmEvStCoDrv : int32_t {
    No_Action = 0,
    Active = 1,
    Cancel_Chime = 2,
};

enum class MemStrTrplBeepChmEvStDrv : int32_t {
    No_Action = 0,
    Active = 1,
    Cancel_Chime = 2,
};

enum class MemStrTrplBeepChmEvStLR : int32_t {
    No_Action = 0,
    Active = 1,
    Cancel_Chime = 2,
};

enum class MemStrTrplBeepChmEvStRR : int32_t {
    No_Action = 0,
    Active = 1,
    Cancel_Chime = 2,
};

enum class MltpPsStBtRmndrChmEvntStat : int32_t {
    No_Action = 0,
    Active = 1,
    Cancel_Chime = 2,
};

enum class MnlTrnsIndReq : int32_t {
    No_Indication = 0,
    Indication_1 = 1,
    Indication_2 = 2,
    Indication_3 = 3,
};

enum class MntModeDispIndReq : int32_t {
    No_Request = 0,
    EM_5_Day_Warning = 1,
    EM_4_Day_Warning = 2,
    EM_3_Day_Warning = 3,
    EM_2_Day_Warning = 4,
    EM_1_Day_Warning = 5,
    Force_EM = 6,
    Continue_EM = 7,
    FM_5_Day_Warning = 8,
    FM_4_Day_Warning = 9,
    FM_3_Day_Warning = 10,
    FM_2_Day_Warning = 11,
    FM_1_Day_Warning = 12,
    Force_FM = 13,
    Continue_FM = 14,
    Drive_Forward = 15,
};

enum class MntModeStrtEngReqConf : int32_t {
    No_Action = 0,
    Postpone = 1,
    Start = 2,
};

enum class NFCEHS_NFCHndvrSts : int32_t {
    Unknown = 0,
    RF_Not_Detected = 1,
    Handover_Started = 2,
    Handover_Successful = 3,
    Handover_Failure = 4,
};

enum class NavRteSts : int32_t {
    No_Action = 0,
    Inactive = 1,
    Active = 2,
    Predicted = 3,
    Learned = 4,
};

enum class NextChrgDestSts : int32_t {
    No_Action = 0,
    Charge_Not_Planned = 1,
    Charge_Planned = 2,
    Charge_Location_Reached = 3,
};

enum class NghtVsnSysStat : int32_t {
    UNKNOWN = 0,
    INITIALIZING = 1,
    INACTIVE = 2,
    ACTIVE = 3,
    NEEDS_SERVICE = 4,
    NOT_DARK = 5,
    TEMPORARILY_UNAVAILABLE = 6,
    NEEDS_HEADLIGHTS = 7,
};

enum class NoRtDetWrngChmEvSt : int32_t {
    NO_ACTION = 0,
    ACTIVE = 1,
    CANCEL_CHIME = 2,
};

enum class NtVsnFncSts : int32_t {
    Normal = 0,
    Limited = 1,
    Unavailable = 2,
    Invalid = 3,
};

enum class NtVsnVidBrghtnsSts : int32_t {
    No_Action = 0,
    Min = 1,
    Default_Minus_2 = 2,
    Default_Minus_1 = 3,
    Default = 4,
    Default_Plus_1 = 5,
    Default_Plus_2 = 6,
    Max = 7,
};

enum class NtVsnVidBrghtnsUserReq : int32_t {
    No_Action = 0,
    Increase = 1,
    Decrease = 2,
    Set_to_default = 3,
};

enum class NtVsnVidCntrstSts : int32_t {
    No_Action = 0,
    Min = 1,
    Default_Minus_2 = 2,
    Default_Minus_1 = 3,
    Default = 4,
    Default_Plus_1 = 5,
    Default_Plus_2 = 6,
    Max = 7,
};

enum class NtVsnVidCntrstUserReq : int32_t {
    No_Action = 0,
    Increase = 1,
    Decrease = 2,
    Set_to_default = 3,
};

enum class NumofAxls : int32_t {
    Unknown = 0,
    Num1 = 1,
    Num2 = 2,
    Num3 = 3,
};

enum class ONPC_DprtrDyOfWkReq : int32_t {
    Unknown = 0,
    Sunday = 1,
    Monday = 2,
    Tuesday = 3,
    Wednesday = 4,
    Thursday = 5,
    Friday = 6,
    Saturday = 7,
};

enum class ONPC_Req : int32_t {
    No_Action = 0,
    Charge_Now = 1,
    Charge_Later = 2,
};

enum class ORIP_DrvrStBltStsAuth : int32_t {
    Unknown = 0,
    UnFastened = 1,
    Fastened = 2,
};

enum class OccptLtBehindAlrmDlyDrvrResp : int32_t {
    No_Action = 0,
    Yes = 1,
    No = 2,
};

enum class OccptLtBehindRmndrCstChgSetReq : int32_t {
    No_Action = 0,
    Off = 1,
    On = 2,
};

enum class OccptLtBehindRmndrCstCurrSetVal : int32_t {
    Setting_Unknown = 0,
    Off = 1,
    On = 2,
};

enum class OffBrdVehImbNtfn : int32_t {
    No_action = 0,
    Warning_Level_1 = 1,
    Warning_Level_2 = 2,
    Warning_Level_3 = 3,
};

enum class OffRdMdActvAerodynsVisDispVal : int32_t {
    Setting_Unknown = 0,
    Custom_Mode_1 = 1,
    Custom_Mode_2 = 2,
    Custom_Mode_3 = 3,
    Custom_Mode_4 = 4,
    Custom_Mode_5 = 5,
    Custom_Mode_6 = 6,
    Custom_Mode_7 = 7,
};

enum class OffRdMdBrkPedVisDispVal : int32_t {
    Setting_Unknown = 0,
    Custom_Mode_1 = 1,
    Custom_Mode_2 = 2,
    Custom_Mode_3 = 3,
    Custom_Mode_4 = 4,
    Custom_Mode_5 = 5,
    Custom_Mode_6 = 6,
    Custom_Mode_7 = 7,
};

enum class OffRdMdDrvlnVisDispVal : int32_t {
    Setting_Unknown = 0,
    Custom_Mode_1 = 1,
    Custom_Mode_2 = 2,
    Custom_Mode_3 = 3,
    Custom_Mode_4 = 4,
    Custom_Mode_5 = 5,
    Custom_Mode_6 = 6,
    Custom_Mode_7 = 7,
};

enum class OffRdMdESCVisDispVal : int32_t {
    Setting_Unknown = 0,
    Custom_Mode_1 = 1,
    Custom_Mode_2 = 2,
    Custom_Mode_3 = 3,
    Custom_Mode_4 = 4,
    Custom_Mode_5 = 5,
    Custom_Mode_6 = 6,
    Custom_Mode_7 = 7,
};

enum class OffRdMdElecVehPedMpVisDispVal : int32_t {
    SETTING_UNKNOWN = 0,
    CUSTOM_MODE_1 = 1,
    CUSTOM_MODE_2 = 2,
    CUSTOM_MODE_3 = 3,
    CUSTOM_MODE_4 = 4,
    CUSTOM_MODE_5 = 5,
    CUSTOM_MODE_6 = 6,
    CUSTOM_MODE_7 = 7,
};

enum class OffRdMdEngyRegnVisDispVal : int32_t {
    SETTING_UNKNOWN = 0,
    CUSTOM_MODE_1 = 1,
    CUSTOM_MODE_2 = 2,
    CUSTOM_MODE_3 = 3,
    CUSTOM_MODE_4 = 4,
    CUSTOM_MODE_5 = 5,
    CUSTOM_MODE_6 = 6,
    CUSTOM_MODE_7 = 7,
};

enum class OffRdMdPwrtrnVisDispVal : int32_t {
    Setting_Unknown = 0,
    Custom_Mode_1 = 1,
    Custom_Mode_2 = 2,
    Custom_Mode_3 = 3,
    Custom_Mode_4 = 4,
    Custom_Mode_5 = 5,
    Custom_Mode_6 = 6,
    Custom_Mode_7 = 7,
};

enum class OffRdMdRideHghtVisDispVal : int32_t {
    Setting_Unknown = 0,
    Custom_Mode_1 = 1,
    Custom_Mode_2 = 2,
    Custom_Mode_3 = 3,
    Custom_Mode_4 = 4,
    Custom_Mode_5 = 5,
    Custom_Mode_6 = 6,
    Custom_Mode_7 = 7,
};

enum class OffRdMdSndVisDispVal : int32_t {
    Setting_Unknown = 0,
    Custom_Mode_1 = 1,
    Custom_Mode_2 = 2,
    Custom_Mode_3 = 3,
    Custom_Mode_4 = 4,
    Custom_Mode_5 = 5,
    Custom_Mode_6 = 6,
    Custom_Mode_7 = 7,
};

enum class OffRdMdSpnsnVisDispVal : int32_t {
    Setting_Unknown = 0,
    Custom_Mode_1 = 1,
    Custom_Mode_2 = 2,
    Custom_Mode_3 = 3,
    Custom_Mode_4 = 4,
    Custom_Mode_5 = 5,
    Custom_Mode_6 = 6,
    Custom_Mode_7 = 7,
};

enum class OffRdMdStrgVisDispVal : int32_t {
    Setting_Unknown = 0,
    Custom_Mode_1 = 1,
    Custom_Mode_2 = 2,
    Custom_Mode_3 = 3,
    Custom_Mode_4 = 4,
    Custom_Mode_5 = 5,
    Custom_Mode_6 = 6,
    Custom_Mode_7 = 7,
};

enum class OffbrdEngyXferAutoGenrCstSetVal : int32_t {
    No_Action = 0,
    Off = 1,
    On = 2,
};

enum class OffbrdEngyXferCurrOp : int32_t {
    No_Action = 0,
    Unavailable = 1,
    V2L = 2,
    V2V = 3,
    V2H = 4,
};

enum class OffbrdEngyXferMinSOCAval : int32_t {
    Not_Available = 0,
    Available = 1,
};

enum class OffbrdEngyXferVehtoHomeAval : int32_t {
    Not_Available = 0,
    Available = 1,
};

enum class OffbrdOtltOprtlSts : int32_t {
    Unavailable = 0,
    Inactive = 1,
    Energized = 2,
    GFCI_Set = 3,
    Faulted = 4,
};

enum class OnbrdOtlt1OprtlSts : int32_t {
    Unavailable = 0,
    Inactive = 1,
    Energized = 2,
    GFCI_Set = 3,
    Faulted = 4,
};

enum class OnbrdOtlt2OprtlSts : int32_t {
    Unavailable = 0,
    Inactive = 1,
    Energized = 2,
    GFCI_Set = 3,
    Faulted = 4,
};

enum class OnbrdOtlt3OprtlSts : int32_t {
    Unavailable = 0,
    Inactive = 1,
    Energized = 2,
    GFCI_Set = 3,
    Faulted = 4,
};

enum class OnbrdOtltAr1Cvr1Sts : int32_t {
    Not_Available = 0,
    Closed = 1,
    Open = 2,
};

enum class OnbrdOtltAr2Cvr1Sts : int32_t {
    Not_Available = 0,
    Closed = 1,
    Open = 2,
};

enum class OnbrdOtltAr3Cvr1Sts : int32_t {
    Not_Available = 0,
    Closed = 1,
    Open = 2,
};

enum class OnbrdOtltAr3Cvr2Sts : int32_t {
    Not_Available = 0,
    Closed = 1,
    Open = 2,
};

enum class OnbrdOtltAr3Cvr3Sts : int32_t {
    Not_Available = 0,
    Closed = 1,
    Open = 2,
};

enum class OnbrdOtltsWrnIndReq : int32_t {
    No_Indication = 0,
    GFI_Reset = 1,
    Service_Reset_Unavailable = 2,
    Service_Outlet_Unavailable = 3,
    Outlet_Load_Limit = 4,
    Outlet_Reduce_Load = 5,
    Charging_Slowed = 6,
    SOC_Limit = 7,
    Cold_Temperature_Limit = 8,
    Charge_Port_Unavailable = 9,
    Outlets_Restarting = 10,
    Outlets_Energizing = 11,
};

enum class OnePedDrvCstChgSetReq : int32_t {
    No_Action = 0,
    Level_1 = 1,
    Level_2 = 2,
    Level_3 = 3,
    Level_4 = 4,
};

enum class OnePedDrvCstCurrSetVal : int32_t {
    Setting_Unknown = 0,
    Level_1 = 1,
    Level_2 = 2,
    Level_3 = 3,
    Level_4 = 4,
};

enum class OnePedDrvCurrSeltnVal : int32_t {
    Unknown = 0,
    On = 1,
    Off = 2,
};

enum class OnePedDrvWrnIndReq : int32_t {
    No_Action = 0,
    Forced_Exit = 1,
};

enum class OneSidedPrkLmpActvnChmEvtSt : int32_t {
    NO_ACTION = 0,
    ACTIVE = 1,
    CANCEL_CHIME = 2,
};

enum class OpDrAtLOCstChgSetReq : int32_t {
    NO_ACTION = 0,
    OFF = 1,
    ON = 2,
    RESERVED_3 = 3,
    RESERVED_4 = 4,
    RESERVED_5 = 5,
    RESERVED_6 = 6,
    RESERVED_7 = 7,
};

enum class OpDrAtLOCstCurSetVal : int32_t {
    SETTING_UNKNOWN = 0,
    OFF = 1,
    ON = 2,
    RESERVED_3 = 3,
    RESERVED_4 = 4,
    RESERVED_5 = 5,
    RESERVED_6 = 6,
    RESERVED_7 = 7,
};

enum class OtltsOffPwrMdSysSts : int32_t {
    No_Action = 0,
    Inactive = 1,
    Active = 2,
    Complete = 3,
};

enum class OtltsOffPwrMdTmrOpCstSetAval : int32_t {
    Not_Available = 0,
    Available = 1,
};

enum class OtltsOffPwrMdTmrOpCstSetVal : int32_t {
    No_Action = 0,
    Off = 1,
    On = 2,
};

enum class OtltsOffPwrModeTmrOpCstSetReq : int32_t {
    No_Action = 0,
    Off = 1,
    On = 2,
};

enum class OvrrdNextPlndCbnPrcndtngReq : int32_t {
    No_Action = 0,
    Off = 1,
    On = 2,
};

enum class PABRP_VehTopSpdLimArbdStatAuth : int32_t {
    Torque = 0,
    Torque_Friction_Brake = 1,
    Inactive = 2,
};

enum class PAMutDrvrReq : int32_t {
    No_Action = 0,
    Mute_Requested = 1,
    Unmute_Requested = 2,
};

enum class PAMutSts : int32_t {
    No_Action = 0,
    Show_Mute = 1,
    Show_Unmute = 2,
};

enum class PARgn : int32_t {
    Europe = 0,
    North_America = 1,
};

enum class PASftBtnSeltdStatRw : int32_t {
    Not_Pressed = 0,
    Pressed = 1,
    Unknown = 2,
    Failed = 3,
};

enum class PAVirtCtlAval : int32_t {
    Not_Available = 0,
    Available = 1,
};

enum class PAVisObjIndStatReq : int32_t {
    No_Action = 0,
    Driver_Tube_Front = 1,
    Driver_Tube_Rear = 2,
    Full_Active = 3,
};

enum class PCIP_NtfnEvntStsAuth : int32_t {
    No_Event = 0,
    Near_Deploy_Event = 1,
    Deployment_Event = 2,
};

enum class PCOSN2_NtfnFrstRowLtStBtSts : int32_t {
    Unknown = 0,
    UnFastened = 1,
    Fastened = 2,
    Data_Not_Availabl = 3,
};

enum class PCOSN2_NtfnFrstRowLtStOccpSts : int32_t {
    Unknown = 0,
    Empty = 1,
    Occupied = 2,
    Data_Not_Available = 3,
};

enum class PCOSN2_NtfnFrstRowRtStBtSts : int32_t {
    Unknown = 0,
    UnFastened = 1,
    Fastened = 2,
    Data_Not_Available = 3,
};

enum class PCOSN2_NtfnFrstRowRtStOccpSts : int32_t {
    Unknown = 0,
    Empty = 1,
    Occupied = 2,
    Data_Not_Available = 3,
};

enum class PDRRI_LpDiffGainLoss : int32_t {
    Loss = 0,
    Gain = 1,
};

enum class PFASndSeltnCstChgSetReq : int32_t {
    No_Action = 0,
    Pedestrian_Alert_Sound_1 = 1,
    Pedestrian_Alert_Sound_2 = 2,
    Pedestrian_Alert_Sound_3 = 3,
    RESERVED_4 = 4,
    RESERVED_5 = 5,
    RESERVED_6 = 6,
    RESERVED_7 = 7,
};

enum class PFASndSeltnCstCurrSetVal : int32_t {
    Setting_Unknown = 0,
    Pedestrian_Alert_Sound_1 = 1,
    Pedestrian_Alert_Sound_2 = 2,
    Pedestrian_Alert_Sound_3 = 3,
    RESERVED_4 = 4,
    RESERVED_5 = 5,
    RESERVED_6 = 6,
    RESERVED_7 = 7,
};

enum class PLCM_LCMDataMsgStat : int32_t {
    No_Action = 0,
    Acknowledge = 1,
};

enum class PLCM_LCMFileTrans : int32_t {
    No_Action = 0,
    Begin_Transfer = 1,
    Successful_Block_Transfer = 2,
    Cancel_Transfer = 3,
    Retry_Last_Block = 4,
};

enum class PPVehRadioMutReq : int32_t {
    Unknown = 0,
    Mute_Requested = 1,
    Mute_Not_Requested = 2,
};

enum class PSP_PrkNeutSwStatAuth : int32_t {
    Park_Neutral = 0,
    Not_Park_Neutral = 1,
};

enum class PSP_VehTheftImbChlgRespStsAuth : int32_t {
    Undetermined = 0,
    Pass = 1,
    Fail = 2,
};

enum class PTExPrtclFltrMnlRgnSts : int32_t {
    Cleaning_Not_Required = 0,
    Allowed = 1,
    Not_Allowed = 2,
    In_Progress = 3,
    Complete = 4,
    Pending_Driver_Input = 5,
    Not_Available = 6,
    Do_Not_Press_Pedals = 7,
};

enum class PTOEngRunTmrCstCurrSetVal : int32_t {
    Setting_Unknown = 0,
    Min_10 = 1,
    Min_30 = 2,
    Min_90 = 3,
    Min_120 = 4,
    Min_150 = 5,
    Min_180 = 6,
    Min_210 = 7,
    Min_240 = 8,
    Min_270 = 9,
    Min_300 = 10,
    Min_330 = 11,
    Min_360 = 12,
    Min_390 = 13,
    Min_420 = 14,
    Min_450 = 15,
};

enum class PTOEngRunTmrCstSetReq : int32_t {
    No_Action = 0,
    Min_10 = 1,
    Min_30 = 2,
    Min_90 = 3,
    Min_120 = 4,
    Min_150 = 5,
    Min_180 = 6,
    Min_210 = 7,
    Min_240 = 8,
    Min_270 = 9,
    Min_200 = 10,
    Min_330 = 11,
    Min_360 = 12,
    Min_390 = 13,
    Min_420 = 14,
    Min_450 = 15,
};

enum class PTOEngSpdTypCstCurrSetVal : int32_t {
    Setting_Unknown = 0,
    Preset = 1,
    Variable = 2,
};

enum class PTOEngSpdTypCstSetReq : int32_t {
    No_Action = 0,
    Preset = 1,
    Variable = 2,
};

enum class PTOEngmntStsInd : int32_t {
    No_Indication = 0,
    Continuous_Indication = 1,
    Slow_Flashing_Indication = 2,
    Fast_Flashing_Indication = 3,
};

enum class PTOModeCstCurrSetVal : int32_t {
    Setting_Unknown = 0,
    Standard = 1,
    Remote = 2,
};

enum class PTOModeCstSetReq : int32_t {
    No_Action = 0,
    Standard = 1,
    Remote = 2,
};

enum class PTOSet1SpdCstCurrSetVal : int32_t {
    Setting_Unknown = 0,
    RPM_1100 = 1,
    RPM_1200 = 2,
    RPM_1300 = 3,
    RPM_1400 = 4,
    RPM_1500 = 5,
    RPM_1600 = 6,
    RPM_1700 = 7,
    RPM_1800 = 8,
    RPM_1900 = 9,
    RPM_2000 = 10,
    RPM_2100 = 11,
    RPM_2200 = 12,
    RPM_2300 = 13,
    RPM_2400 = 14,
    RPM_2500 = 15,
};

enum class PTOSet1SpdCstSetReq : int32_t {
    No_Action = 0,
    RPM_1100 = 1,
    RPM_1200 = 2,
    RPM_1300 = 3,
    RPM_1400 = 4,
    RPM_1500 = 5,
    RPM_1600 = 6,
    RPM_1700 = 7,
    RPM_1800 = 8,
    RPM_1900 = 9,
    RPM_2000 = 10,
    RPM_2100 = 11,
    RPM_2200 = 12,
    RPM_2300 = 13,
    RPM_2400 = 14,
    RPM_2500 = 15,
};

enum class PTOSet2SpdCstCurrSetVal : int32_t {
    Setting_Unknown = 0,
    RPM_1700 = 1,
    RPM_1800 = 2,
    RPM_1900 = 3,
    RPM_2000 = 4,
    RPM_2100 = 5,
    RPM_2200 = 6,
    RPM_2300 = 7,
    RPM_2400 = 8,
    RPM_2500 = 9,
    RPM_2600 = 10,
    RPM_2700 = 11,
    RPM_2800 = 12,
    RPM_2900 = 13,
    RPM_3000 = 14,
    RPM_3100 = 15,
};

enum class PTOSet2SpdCstSetReq : int32_t {
    No_Action = 0,
    RPM_1700 = 1,
    RPM_1800 = 2,
    RPM_1900 = 3,
    RPM_2000 = 4,
    RPM_2100 = 5,
    RPM_2200 = 6,
    RPM_2300 = 7,
    RPM_2400 = 8,
    RPM_2500 = 9,
    RPM_2600 = 10,
    RPM_2700 = 11,
    RPM_2800 = 12,
    RPM_2900 = 13,
    RPM_3000 = 14,
    RPM_3100 = 15,
};

enum class PTOStndbySpdCstCurrSetVal : int32_t {
    Setting_Unknown = 0,
    RPM_900 = 1,
    RPM_1000 = 2,
    RPM_1100 = 3,
    RPM_1200 = 4,
    RPM_1300 = 5,
    RPM_1400 = 6,
    RPM_1500 = 7,
};

enum class PTOStndbySpdCstSetReq : int32_t {
    No_Action = 0,
    RPM_900 = 1,
    RPM_1000 = 2,
    RPM_1100 = 3,
    RPM_1200 = 4,
    RPM_1300 = 5,
    RPM_1400 = 6,
    RPM_1500 = 7,
};

enum class PTOTpStpSpdCstCurrSetVal : int32_t {
    Setting_Unknown = 0,
    RPM_5 = 1,
    RPM_10 = 2,
    RPM_25 = 3,
    RPM_50 = 4,
    RPM_100 = 5,
    RPM_250 = 6,
    RPM_500 = 7,
};

enum class PTOTpStpSpdCstSetReq : int32_t {
    No_Action = 0,
    RPM_5 = 1,
    RPM_10 = 2,
    RPM_25 = 3,
    RPM_50 = 4,
    RPM_100 = 5,
    RPM_250 = 6,
    RPM_500 = 7,
};

enum class PdWrnIndRqst : int32_t {
    OFF = 0,
    PEDESTRIAN_ADVISORY = 1,
    PEDESTRIAN_ALERT = 2,
    RESERVED = 3,
};

enum class PerfMdMainMenuTy : int32_t {
    No_Action = 0,
    Main_Menu_Type_1 = 1,
    Main_Menu_Type_2 = 2,
    Main_Menu_Type_3 = 3,
    Main_Menu_Type_4 = 4,
    Main_Menu_Type_5 = 5,
    Main_Menu_Type_6 = 6,
    Main_Menu_Type_7 = 7,
};

enum class PerfTracMgmtMode : int32_t {
    Disabled = 0,
    Wet = 1,
    Dry = 2,
    Sport_1 = 3,
    Sport_2_Race_1 = 4,
    Race = 5,
    Inactive = 6,
    Pro = 7,
};

enum class PhnLtInVehCstChgSetReq : int32_t {
    NO_ACTION = 0,
    OFF = 1,
    ON = 2,
    RESERVED_3 = 3,
    RESERVED_4 = 4,
    RESERVED_5 = 5,
    RESERVED_6 = 6,
    RESERVED_7 = 7,
};

enum class PhnLtInVehCstCurrSetVal : int32_t {
    Setting_Unknown = 0,
    Off = 1,
    On = 2,
    Reserved_3 = 3,
    Reserved_4 = 4,
    Reserved_5 = 5,
    Reserved_6 = 6,
    Reserved_7 = 7,
};

enum class PhnWrlsChrg1DsbldCstChgSetReq : int32_t {
    No_Action = 0,
    Off = 1,
    On = 2,
};

enum class PhnWrlsChrg1DsbldCstCurrSetVal : int32_t {
    Setting_Unknown = 0,
    Off = 1,
    On = 2,
};

enum class PhnWrlsChrg2DsbldCstChgSetReq : int32_t {
    No_Action = 0,
    Off = 1,
    On = 2,
};

enum class PhnWrlsChrg2DsbldCstCurrSetVal : int32_t {
    Setting_Unknown = 0,
    Off = 1,
    On = 2,
};

enum class PhnWrlsChrg3DsbldCstChgSetReq : int32_t {
    No_Action = 0,
    Off = 1,
    On = 2,
};

enum class PhnWrlsChrg3DsbldCstCurrSetVal : int32_t {
    Setting_Unknown = 0,
    Off = 1,
    On = 2,
};

enum class PhnWrlsChrg4DsbldCstChgSetReq : int32_t {
    No_Action = 0,
    Off = 1,
    On = 2,
};

enum class PhnWrlsChrg4DsbldCstCurrSetVal : int32_t {
    Setting_Unknown = 0,
    Off = 1,
    On = 2,
};

enum class PhnZnAudSOH : int32_t {
    Unknown = 0,
    Healthy = 1,
    Faulted = 2,
};

enum class PlltnCtrlCstChgSetReq : int32_t {
    NO_ACTION = 0,
    OFF = 1,
    ON = 2,
    RESERVED_3 = 3,
    RESERVED_4 = 4,
    RESERVED_5 = 5,
    RESERVED_6 = 6,
    RESERVED_7 = 7,
};

enum class PlltnCtrlCstCrStVal : int32_t {
    SETTING_UNKNOWN = 0,
    OFF = 1,
    ON = 2,
    RESERVED_1 = 3,
    RESERVED_2 = 4,
    RESERVED_3 = 5,
    RESERVED_4 = 6,
    RESERVED_5 = 7,
};

enum class PnCActnReqCertfctOpAuth : int32_t {
    No_Action = 0,
    Disable_Certificate = 1,
    Enable_Certificate = 2,
    Erase_Certificate = 3,
    Install_Certificate = 4,
};

enum class PnCActnReqCertfctTypAuth : int32_t {
    None = 0,
    GM_Provisioning_Certificate = 1,
    Contract_Certificate = 2,
    V2G_Root_Certificate = 3,
    OCSP_Certificate = 4,
    Private_Operator_Root_Certificate = 5,
    Reserved1 = 6,
    Reserved2 = 7,
    Reserved3 = 8,
    Reserved4 = 9,
    Reserved5 = 10,
    Reserved6 = 11,
    Reserved7 = 12,
    Reserved8 = 13,
    All_Contract_And_Private_Operator_Root_Certificates = 14,
};

enum class PnCActnStsCertfctOpSts : int32_t {
    NoAction = 0,
    CertificateDisabledSuccessfully = 1,
    CertificateDisableFailed = 2,
    CertificateEnabledSuccessfully = 3,
    CertificateEnableFailed = 4,
    CertificateErasedSuccessfully = 5,
    CertificateErasureFailed = 6,
    CertificateDisableOperationInProgress = 7,
    CertificateEnableOperationInProgress = 8,
    CertificateEraseOperationInProgress = 9,
    SelectedCertificateOperationLocationisOutofBounds = 10,
    NoCertificateisInstalledintheRequestedCertificateLocation = 11,
    NoCertificateofThisCertificateTypeisInstalledintheEVCC = 12,
    CertificateOperationNotSupportedonThisCertificateType = 13,
    CertificateOperationCannotbePerformedatThisTime = 14,
    CertificateInstallOperationInProgress = 15,
    CertificateInstalledSuccessfully = 16,
    CertificateInstallFailed = 17,
};

enum class PnCActnStsCertfctTyp : int32_t {
    None = 0,
    GM_Provisioning_Certificate = 1,
    Contract_Certificate = 2,
    V2G_Root_Certificate = 3,
    OCSP_Certificate = 4,
    Private_Operator_Root_Certificate = 5,
    Reserved1 = 6,
    Reserved2 = 7,
    Reserved3 = 8,
    Reserved4 = 9,
    Reserved5 = 10,
    Reserved6 = 11,
    Reserved7 = 12,
    Reserved8 = 13,
    All_Contract_And_Private_Operator_Root_Certificates = 14,
};

enum class PnCEnblReqAuth : int32_t {
    Unknown = 0,
    No_Action = 1,
    Enable = 2,
    Disable = 3,
};

enum class PnCEnbldSts : int32_t {
    Unknown = 0,
    Enabled = 1,
    Disabled = 2,
};

enum class PnCStsDisp : int32_t {
    No_Action = 0,
    No_Errors = 1,
    Unplug_And_Replug = 2,
    Two_Factor_Authentication_Failure = 3,
    Try_Different_Charging_Station = 4,
    Install_Contract_or_Private_Operator_Certificate = 5,
    Contract_Certificate_Invalid = 6,
    Service_Vehicle = 7,
    Certificate_Revoked = 8,
};

enum class PrkAsstCustSeltn : int32_t {
    Off = 0,
    On = 1,
    Failed = 2,
};

enum class PrkAsstFlChEvntSt : int32_t {
    NO_ACTION = 0,
    ACTIVE = 1,
    CANCEL_CHIME = 2,
};

enum class PrkAsstFllFrZn1ChEvntSt : int32_t {
    NO_ACTION = 0,
    ACTIVE = 1,
    CANCEL_CHIME = 2,
};

enum class PrkAsstFllFrZn2ChEvntSt : int32_t {
    NO_ACTION = 0,
    ACTIVE = 1,
    CANCEL_CHIME = 2,
};

enum class PrkAsstFllFrZn3ChEvntSt : int32_t {
    NO_ACTION = 0,
    ACTIVE = 1,
    CANCEL_CHIME = 2,
};

enum class PrkAsstFllFrZn4ChEvntSt : int32_t {
    NO_ACTION = 0,
    ACTIVE = 1,
    CANCEL_CHIME = 2,
};

enum class PrkAsstFllFrZn5ChEvntSt : int32_t {
    NO_ACTION = 0,
    ACTIVE = 1,
    CANCEL_CHIME = 2,
};

enum class PrkAsstFllFrZn6ChEvntSt : int32_t {
    NO_ACTION = 0,
    ACTIVE = 1,
    CANCEL_CHIME = 2,
};

enum class PrkAsstFllRrZn1ChEvntSt : int32_t {
    NO_ACTION = 0,
    ACTIVE = 1,
    CANCEL_CHIME = 2,
};

enum class PrkAsstFllRrZn2ChEvntSt : int32_t {
    NO_ACTION = 0,
    ACTIVE = 1,
    CANCEL_CHIME = 2,
};

enum class PrkAsstFllRrZn3ChEvntSt : int32_t {
    NO_ACTION = 0,
    ACTIVE = 1,
    CANCEL_CHIME = 2,
};

enum class PrkAsstFllRrZn4ChEvntSt : int32_t {
    NO_ACTION = 0,
    ACTIVE = 1,
    CANCEL_CHIME = 2,
};

enum class PrkAsstFllRrZn5ChEvntSt : int32_t {
    NO_ACTION = 0,
    ACTIVE = 1,
    CANCEL_CHIME = 2,
};

enum class PrkAsstFllRrZn6ChEvntSt : int32_t {
    NO_ACTION = 0,
    ACTIVE = 1,
    CANCEL_CHIME = 2,
};

enum class PrkAsstFrFrstRprtChEvntSt : int32_t {
    NO_ACTION = 0,
    ACTIVE = 1,
    CANCEL_CHIME = 2,
};

enum class PrkAsstFrLftSdZn1ChEvntSt : int32_t {
    NO_ACTION = 0,
    ACTIVE = 1,
    CANCEL_CHIME = 2,
};

enum class PrkAsstFrLftSdZn2ChEvntSt : int32_t {
    NO_ACTION = 0,
    ACTIVE = 1,
    CANCEL_CHIME = 2,
};

enum class PrkAsstFrLftSdZn3ChEvntSt : int32_t {
    NO_ACTION = 0,
    ACTIVE = 1,
    CANCEL_CHIME = 2,
};

enum class PrkAsstFrLftSdZn4ChEvntSt : int32_t {
    NO_ACTION = 0,
    ACTIVE = 1,
    CANCEL_CHIME = 2,
};

enum class PrkAsstFrLftSdZn5ChEvntSt : int32_t {
    NO_ACTION = 0,
    ACTIVE = 1,
    CANCEL_CHIME = 2,
};

enum class PrkAsstFrLftSdZn6ChEvntSt : int32_t {
    NO_ACTION = 0,
    ACTIVE = 1,
    CANCEL_CHIME = 2,
};

enum class PrkAsstFrRghtSdZn1ChEvntSt : int32_t {
    NO_ACTION = 0,
    ACTIVE = 1,
    CANCEL_CHIME = 2,
};

enum class PrkAsstFrRghtSdZn2ChEvntSt : int32_t {
    NO_ACTION = 0,
    ACTIVE = 1,
    CANCEL_CHIME = 2,
};

enum class PrkAsstFrRghtSdZn3ChEvntSt : int32_t {
    NO_ACTION = 0,
    ACTIVE = 1,
    CANCEL_CHIME = 2,
};

enum class PrkAsstFrRghtSdZn4ChEvntSt : int32_t {
    NO_ACTION = 0,
    ACTIVE = 1,
    CANCEL_CHIME = 2,
};

enum class PrkAsstFrRghtSdZn5ChEvntSt : int32_t {
    NO_ACTION = 0,
    ACTIVE = 1,
    CANCEL_CHIME = 2,
};

enum class PrkAsstFrRghtSdZn6ChEvntSt : int32_t {
    NO_ACTION = 0,
    ACTIVE = 1,
    CANCEL_CHIME = 2,
};

enum class PrkAsstFrRgrChEvntSt : int32_t {
    NO_ACTION = 0,
    ACTIVE = 1,
    CANCEL_CHIME = 2,
};

enum class PrkAsstONOFFCstCrStVal : int32_t {
    SETTING_UNKNOWN = 0,
    OFF = 1,
    ALERT = 2,
    ALERT_BRAKE = 3,
    RESERVED_4 = 4,
    RESERVED_5 = 5,
    RESERVED_6 = 6,
    RESERVED_7 = 7,
};

enum class PrkAsstOnOffCstChgSetReq : int32_t {
    No_Action = 0,
    Off = 1,
    Alert = 2,
    Alert_Brake = 3,
};

enum class PrkAsstRrFrstRprtChEvntSt : int32_t {
    NO_ACTION = 0,
    ACTIVE = 1,
    CANCEL_CHIME = 2,
};

enum class PrkAsstRrLftSdZn1ChEvntSt : int32_t {
    NO_ACTION = 0,
    ACTIVE = 1,
    CANCEL_CHIME = 2,
};

enum class PrkAsstRrLftSdZn2ChEvntSt : int32_t {
    NO_ACTION = 0,
    ACTIVE = 1,
    CANCEL_CHIME = 2,
};

enum class PrkAsstRrLftSdZn3ChEvntSt : int32_t {
    NO_ACTION = 0,
    ACTIVE = 1,
    CANCEL_CHIME = 2,
};

enum class PrkAsstRrLftSdZn4ChEvntSt : int32_t {
    NO_ACTION = 0,
    ACTIVE = 1,
    CANCEL_CHIME = 2,
};

enum class PrkAsstRrLftSdZn5ChEvntSt : int32_t {
    NO_ACTION = 0,
    ACTIVE = 1,
    CANCEL_CHIME = 2,
};

enum class PrkAsstRrLftSdZn6ChEvntSt : int32_t {
    NO_ACTION = 0,
    ACTIVE = 1,
    CANCEL_CHIME = 2,
};

enum class PrkAsstRrRghtSdZn1ChEvntSt : int32_t {
    NO_ACTION = 0,
    ACTIVE = 1,
    CANCEL_CHIME = 2,
};

enum class PrkAsstRrRghtSdZn2ChEvntSt : int32_t {
    NO_ACTION = 0,
    ACTIVE = 1,
    CANCEL_CHIME = 2,
};

enum class PrkAsstRrRghtSdZn3ChEvntSt : int32_t {
    NO_ACTION = 0,
    ACTIVE = 1,
    CANCEL_CHIME = 2,
};

enum class PrkAsstRrRghtSdZn4ChEvntSt : int32_t {
    NO_ACTION = 0,
    ACTIVE = 1,
    CANCEL_CHIME = 2,
};

enum class PrkAsstRrRghtSdZn5ChEvntSt : int32_t {
    NO_ACTION = 0,
    ACTIVE = 1,
    CANCEL_CHIME = 2,
};

enum class PrkAsstRrRghtSdZn6ChEvntSt : int32_t {
    NO_ACTION = 0,
    ACTIVE = 1,
    CANCEL_CHIME = 2,
};

enum class PrkAsstRrRgrChEvntSt : int32_t {
    NO_ACTION = 0,
    ACTIVE = 1,
    CANCEL_CHIME = 2,
};

enum class PrkAsstStat : int32_t {
    OFF = 0,
    STANDBY = 1,
    DISABLED = 2,
    FAILED = 3,
    FRONT_REAR_ACTIVE = 4,
    REAR_ACTIVE = 5,
    FRONT_ACTIVE = 6,
    UNKNOWN = 7,
};

enum class PrkAsstTrHtchPsntCstChgSetReq : int32_t {
    NO_ACTION = 0,
    OFF_NOT_ATTACHED = 1,
    ON_ATTACHED = 2,
    RESERVED_3 = 3,
    RESERVED_4 = 4,
    RESERVED_5 = 5,
    RESERVED_6 = 6,
    RESERVED_7 = 7,
};

enum class PrkAsstTrHtchPsntCstCrStVal : int32_t {
    SETTING_UNKNOWN = 0,
    OFF_NOT_ATTACHED = 1,
    ON_ATTACHED = 2,
    RESERVED_3 = 3,
    RESERVED_4 = 4,
    RESERVED_5 = 5,
    RESERVED_6 = 6,
    RESERVED_7 = 7,
};

enum class PrplDispTotPwrUntDisp : int32_t {
    kilowatt = 0,
    Horsepower = 1,
};

enum class PrplSysMaxPwrModeUnvRsn : int32_t {
    No_Indication = 0,
    Charge_Battery = 1,
    Temperature_Too_Cold = 2,
    Reason_3 = 3,
    Reason_4 = 4,
    Reason_5 = 5,
    Reason_6 = 6,
    Reason_7 = 7,
};

enum class PrsnlMdActAeroCstChngSetReq : int32_t {
    NO_ACTION = 0,
    PERSONAL_MODE_1 = 1,
    PERSONAL_MODE_2 = 2,
    PERSONAL_MODE_3 = 3,
    PERSONAL_MODE_4 = 4,
    PERSONAL_MODE_5 = 5,
    PERSONAL_MODE_6 = 6,
    PERSONAL_MODE_7 = 7,
};

enum class PrsnlMdActAeroCstmCurSetVal : int32_t {
    SETTING_UNKNOWN = 0,
    PERSONAL_MODE_1 = 1,
    PERSONAL_MODE_2 = 2,
    PERSONAL_MODE_3 = 3,
    PERSONAL_MODE_4 = 4,
    PERSONAL_MODE_5 = 5,
    PERSONAL_MODE_6 = 6,
    PERSONAL_MODE_7 = 7,
};

enum class PrsnlMdBrkPdlCstChngSetReq : int32_t {
    NO_ACTION = 0,
    PERSONAL_MODE_1 = 1,
    PERSONAL_MODE_2 = 2,
    PERSONAL_MODE_3 = 3,
    PERSONAL_MODE_4 = 4,
    PERSONAL_MODE_5 = 5,
    PERSONAL_MODE_6 = 6,
    PERSONAL_MODE_7 = 7,
};

enum class PrsnlMdBrkPdlCstmCurSetVal : int32_t {
    SETTING_UNKNOWN = 0,
    PERSONAL_MODE_1 = 1,
    PERSONAL_MODE_2 = 2,
    PERSONAL_MODE_3 = 3,
    PERSONAL_MODE_4 = 4,
    PERSONAL_MODE_5 = 5,
    PERSONAL_MODE_6 = 6,
    PERSONAL_MODE_7 = 7,
};

enum class PrsnlMdDrvlCstChngSetReq : int32_t {
    NO_ACTION = 0,
    PERSONAL_MODE_1 = 1,
    PERSONAL_MODE_2 = 2,
    PERSONAL_MODE_3 = 3,
    PERSONAL_MODE_4 = 4,
    PERSONAL_MODE_5 = 5,
    PERSONAL_MODE_6 = 6,
    PERSONAL_MODE_7 = 7,
};

enum class PrsnlMdDrvlCstmCurSetVal : int32_t {
    SETTING_UNKNOWN = 0,
    PERSONAL_MODE_1 = 1,
    PERSONAL_MODE_2 = 2,
    PERSONAL_MODE_3 = 3,
    PERSONAL_MODE_4 = 4,
    PERSONAL_MODE_5 = 5,
    PERSONAL_MODE_6 = 6,
    PERSONAL_MODE_7 = 7,
};

enum class PrsnlMdEVPedMpCstChngSetReq : int32_t {
    NO_ACTION = 0,
    PERSONAL_MODE_1 = 1,
    PERSONAL_MODE_2 = 2,
    PERSONAL_MODE_3 = 3,
    PERSONAL_MODE_4 = 4,
    PERSONAL_MODE_5 = 5,
    PERSONAL_MODE_6 = 6,
    PERSONAL_MODE_7 = 7,
};

enum class PrsnlMdEVPedMpCstmCurSetVal : int32_t {
    SETTING_UNKNOWN = 0,
    CUSTOM_MODE_1 = 1,
    CUSTOM_MODE_2 = 2,
    CUSTOM_MODE_3 = 3,
    CUSTOM_MODE_4 = 4,
    CUSTOM_MODE_5 = 5,
    CUSTOM_MODE_6 = 6,
    CUSTOM_MODE_7 = 7,
};

enum class PrsnlMdEngyRegnCstChngSetReq : int32_t {
    NO_ACTION = 0,
    PERSONAL_MODE_1 = 1,
    PERSONAL_MODE_2 = 2,
    PERSONAL_MODE_3 = 3,
    PERSONAL_MODE_4 = 4,
    PERSONAL_MODE_5 = 5,
    PERSONAL_MODE_6 = 6,
    PERSONAL_MODE_7 = 7,
};

enum class PrsnlMdEngyRegnCstmCurSetVal : int32_t {
    SETTING_UNKNOWN = 0,
    CUSTOM_MODE_1 = 1,
    CUSTOM_MODE_2 = 2,
    CUSTOM_MODE_3 = 3,
    CUSTOM_MODE_4 = 4,
    CUSTOM_MODE_5 = 5,
    CUSTOM_MODE_6 = 6,
    CUSTOM_MODE_7 = 7,
};

enum class PrsnlMdRideHghtCstChngSetReq : int32_t {
    NO_ACTION = 0,
    PERSONAL_MODE_1 = 1,
    PERSONAL_MODE_2 = 2,
    PERSONAL_MODE_3 = 3,
    PERSONAL_MODE_4 = 4,
    PERSONAL_MODE_5 = 5,
    PERSONAL_MODE_6 = 6,
    PERSONAL_MODE_7 = 7,
};

enum class PrsnlMdRideHghtCstmCurSetVal : int32_t {
    SETTING_UNKNOWN = 0,
    PERSONAL_MODE_1 = 1,
    PERSONAL_MODE_2 = 2,
    PERSONAL_MODE_3 = 3,
    PERSONAL_MODE_4 = 4,
    PERSONAL_MODE_5 = 5,
    PERSONAL_MODE_6 = 6,
    PERSONAL_MODE_7 = 7,
};

enum class PrsnlMdSndCstChngSetReq : int32_t {
    NO_ACTION = 0,
    PERSONAL_MODE_1 = 1,
    PERSONAL_MODE_2 = 2,
    PERSONAL_MODE_3 = 3,
    PERSONAL_MODE_4 = 4,
    PERSONAL_MODE_5 = 5,
    PERSONAL_MODE_6 = 6,
    PERSONAL_MODE_7 = 7,
};

enum class PrsnlMdSndCstmCurSetVal : int32_t {
    SETTING_UNKNOWN = 0,
    PERSONAL_MODE_1 = 1,
    PERSONAL_MODE_2 = 2,
    PERSONAL_MODE_3 = 3,
    PERSONAL_MODE_4 = 4,
    PERSONAL_MODE_5 = 5,
    PERSONAL_MODE_6 = 6,
    PERSONAL_MODE_7 = 7,
};

enum class PrsnlMdSpnCstChngSetReq : int32_t {
    NO_ACTION = 0,
    PERSONAL_MODE_1 = 1,
    PERSONAL_MODE_2 = 2,
    PERSONAL_MODE_3 = 3,
    PERSONAL_MODE_4 = 4,
    PERSONAL_MODE_5 = 5,
    PERSONAL_MODE_6 = 6,
    PERSONAL_MODE_7 = 7,
};

enum class PrsnlMdSpnCstmCurSetVal : int32_t {
    SETTING_UNKNOWN = 0,
    PERSONAL_MODE_1 = 1,
    PERSONAL_MODE_2 = 2,
    PERSONAL_MODE_3 = 3,
    PERSONAL_MODE_4 = 4,
    PERSONAL_MODE_5 = 5,
    PERSONAL_MODE_6 = 6,
    PERSONAL_MODE_7 = 7,
};

enum class PrsnlMdStrCstChngSetReq : int32_t {
    NO_ACTION = 0,
    PERSONAL_MODE_1 = 1,
    PERSONAL_MODE_2 = 2,
    PERSONAL_MODE_3 = 3,
    PERSONAL_MODE_4 = 4,
    PERSONAL_MODE_5 = 5,
    PERSONAL_MODE_6 = 6,
    PERSONAL_MODE_7 = 7,
};

enum class PrsnlMdStrCstmCurSetVal : int32_t {
    SETTING_UNKNOWN = 0,
    PERSONAL_MODE_1 = 1,
    PERSONAL_MODE_2 = 2,
    PERSONAL_MODE_3 = 3,
    PERSONAL_MODE_4 = 4,
    PERSONAL_MODE_5 = 5,
    PERSONAL_MODE_6 = 6,
    PERSONAL_MODE_7 = 7,
};

enum class PrtblChrgCordLimCstSetReq : int32_t {
    No_Action = 0,
    Reduced = 1,
    Maximum = 2,
};

enum class PrtblChrgCordLimCstSetResp : int32_t {
    No_Action = 0,
    Reduced = 1,
    Maximum = 2,
};

enum class PsngrAirbgCtfVirtCtlAval : int32_t {
    Not_Available = 0,
    Available = 1,
};

enum class PsngrAirbgCtfVirtCtlSts : int32_t {
    UNKNOWN = 0,
    OFF = 1,
    ON = 2,
};

enum class PsvUnlckCstChgSetReq : int32_t {
    NO_ACTION = 0,
    DRIVER_DOOR = 1,
    ALL_DOORS = 2,
    OFF = 3,
    RESERVED_4 = 4,
    RESERVED_5 = 5,
    RESERVED_6 = 6,
    RESERVED_7 = 7,
};

enum class PsvUnlckCstCurSetVal : int32_t {
    SETTING_UNKNOWN = 0,
    DRIVER_DOOR = 1,
    ALL_DOORS = 2,
    OFF = 3,
    RESERVED_4 = 4,
    RESERVED_5 = 5,
    RESERVED_6 = 6,
    RESERVED_7 = 7,
};

enum class PwrFrtStrgeCmptClsrCstChgSetReq : int32_t {
    No_Action = 0,
    Off = 1,
    On = 2,
    On_Custom_Height = 3,
};

enum class PwrFrtStrgeCmptClsrCstCurSetVal : int32_t {
    Setting_Unknown = 0,
    Off = 1,
    On = 2,
    On_Custom_Height = 3,
};

enum class PwrFrtStrgeCmptMtnSts : int32_t {
    Unknown = 0,
    Closed = 1,
    Opening = 2,
    Closing = 3,
    Stopped_Normal = 4,
    Stopped_Obstacle = 5,
    Closing_Hold_System_Fault = 6,
    Fully_Opened = 7,
    Opening_Due_To_Obstacle = 8,
    Closing_Due_To_Obstacle = 9,
    Released_To_Ajar = 10,
    Released_To_Open = 11,
    System_Unavailable = 12,
};

enum class PwrRrClsrCstChgSetReq : int32_t {
    No_Action = 0,
    Off = 1,
    On = 2,
    On_Custom_Height = 3,
    RESERVED_4 = 4,
    RESERVED_5 = 5,
    RESERVED_6 = 6,
    RESERVED_7 = 7,
};

enum class PwrRrClsrCstCurrSetVal : int32_t {
    Setting_Unknown = 0,
    Off = 1,
    On = 2,
    On_Custom_Height = 3,
    RESERVED_4 = 4,
    RESERVED_5 = 5,
    RESERVED_6 = 6,
    RESERVED_7 = 7,
};

enum class PwrRrClsrMtnSts : int32_t {
    Unknown = 0,
    Closed = 1,
    Opening = 2,
    Closing = 3,
    Stopped_Normal = 4,
    Stopped_Obstacle = 5,
    Closing_Hold_System_Fault = 6,
    Fully_Opened = 7,
    Opening_due_to_Obstacle = 8,
    Closing_due_to_Obstacle = 9,
};

enum class PwrRrClsrNormOpChmEvntStat : int32_t {
    No_Action = 0,
    Active = 1,
    Cancel_Chime = 2,
};

enum class PwrRrClsrNtfnChmEvntStat : int32_t {
    No_Action = 0,
    Active = 1,
    Cancel_Chime = 2,
};

enum class PwrRrClsrObstclChmEvntStat : int32_t {
    No_Action = 0,
    Active = 1,
    Cancel_Chime = 2,
};

enum class PwrSdClsrLFObstclChmEvntStat : int32_t {
    No_Action = 0,
    Active = 1,
    Cancel_Chime = 2,
};

enum class PwrSdClsrLRObstclChmEvntStat : int32_t {
    No_Action = 0,
    Active = 1,
    Cancel_Chime = 2,
};

enum class PwrSdClsrRFObstclChmEvntStat : int32_t {
    No_Action = 0,
    Active = 1,
    Cancel_Chime = 2,
};

enum class PwrSdClsrRRObstclChmEvntStat : int32_t {
    No_Action = 0,
    Active = 1,
    Cancel_Chime = 2,
};

enum class PwrSdSldClsrLFLclActChmEvntStat : int32_t {
    No_Action = 0,
    Active = 1,
    Cancel_Chime = 2,
};

enum class PwrSdSldClsrLFRmtActChmEvntStat : int32_t {
    No_Action = 0,
    Active = 1,
    Cancel_Chime = 2,
};

enum class PwrSdSldClsrLRLclActChmEvntStat : int32_t {
    No_Action = 0,
    Active = 1,
    Cancel_Chime = 2,
};

enum class PwrSdSldClsrLRRmtActChmEvntStat : int32_t {
    No_Action = 0,
    Active = 1,
    Cancel_Chime = 2,
};

enum class PwrSdSldClsrRFLclActChmEvntStat : int32_t {
    No_Action = 0,
    Active = 1,
    Cancel_Chime = 2,
};

enum class PwrSdSldClsrRFRmtActChmEvntStat : int32_t {
    No_Action = 0,
    Active = 1,
    Cancel_Chime = 2,
};

enum class PwrSdSldClsrRRLclActChmEvntStat : int32_t {
    No_Action = 0,
    Active = 1,
    Cancel_Chime = 2,
};

enum class PwrSdSldClsrRRRmtActChmEvntStat : int32_t {
    No_Action = 0,
    Active = 1,
    Cancel_Chime = 2,
};

enum class PwrSdSwgClsrLFLclActChmEvntStat : int32_t {
    No_Action = 0,
    Active = 1,
    Cancel_Chime = 2,
};

enum class PwrSdSwgClsrLFRmtActChmEvntStat : int32_t {
    No_Action = 0,
    Active = 1,
    Cancel_Chime = 2,
};

enum class PwrSdSwgClsrLRLclActChmEvntStat : int32_t {
    No_Action = 0,
    Active = 1,
    Cancel_Chime = 2,
};

enum class PwrSdSwgClsrLRRmtActChmEvntStat : int32_t {
    No_Action = 0,
    Active = 1,
    Cancel_Chime = 2,
};

enum class PwrSdSwgClsrRFLclActChmEvntStat : int32_t {
    No_Action = 0,
    Active = 1,
    Cancel_Chime = 2,
};

enum class PwrSdSwgClsrRFRmtActChmEvntStat : int32_t {
    No_Action = 0,
    Active = 1,
    Cancel_Chime = 2,
};

enum class PwrSdSwgClsrRRLclActChmEvntStat : int32_t {
    No_Action = 0,
    Active = 1,
    Cancel_Chime = 2,
};

enum class PwrSdSwgClsrRRRmtActChmEvntStat : int32_t {
    No_Action = 0,
    Active = 1,
    Cancel_Chime = 2,
};

enum class PwrShdBkGlsShdPs : int32_t {
    Unknown = 0,
    Fully_Down = 1,
    Fully_Up = 2,
    Moving_Down = 3,
    Moving_Up = 4,
    Failed = 5,
};

enum class PwrShdDrShdLRPstn : int32_t {
    Unknown = 0,
    Fully_Down = 1,
    Fully_Up = 2,
    Moving_Down = 3,
    Moving_Up = 4,
    Failed = 5,
};

enum class PwrShdDrShdRRPstn : int32_t {
    Unknown = 0,
    Fully_Down = 1,
    Fully_Up = 2,
    Moving_Down = 3,
    Moving_Up = 4,
    Failed = 5,
};

enum class PwrbaseWrnIndReq : int32_t {
    No_Indication = 0,
    Timer_Expiring = 1,
    Range_Reserve_Met_Soon = 2,
};

enum class RDMACANFCPP_RadDevPrngNFCAllwd : int32_t {
    Unknown = 0,
    NFC_Pairing_Disabled = 1,
    NFC_Pairing_Enabled = 2,
};

enum class RFSCDS_BkBlstrInOut : int32_t {
    Not_Selected = 0,
    Selected_No_Movement = 1,
    In = 2,
    Out = 3,
};

enum class RFSCDS_BkCshBlstInOt : int32_t {
    Not_Selected = 0,
    Selected_No_Movement = 1,
    Back_Bolster_In = 2,
    Back_Bolster_Out = 3,
    Cushion_Bolster_In = 4,
    Cushion_Bolster_Out = 5,
};

enum class RFSCDS_CshBlstrInOut : int32_t {
    Not_Selected = 0,
    Selected_No_Movement = 1,
    In = 2,
    Out = 3,
};

enum class RFSCDS_CshLgAdjFdRr : int32_t {
    Not_Selected = 0,
    Selected_No_Movement = 1,
    Forward = 2,
    Rearward = 3,
};

enum class RFSCDS_HdrstFdRrUDn : int32_t {
    Not_Selected = 0,
    Selected_No_Movement = 1,
    Up = 2,
    Down = 3,
    Forward = 4,
    Rearward = 5,
};

enum class RFSCDS_HdrstFwdRrwd : int32_t {
    Not_Selected = 0,
    Selected_No_Movement = 1,
    Forward = 2,
    Rearward = 3,
};

enum class RFSCDS_HdrstTltFwdRr : int32_t {
    Not_Selected = 0,
    Selected_No_Movement = 1,
    Forward = 2,
    Rearward = 3,
};

enum class RFSCDS_HdrstUpDn : int32_t {
    Not_Selected = 0,
    Selected_No_Movement = 1,
    Up = 2,
    Down = 3,
};

enum class RFSCDS_HdrstWngInOt : int32_t {
    Not_Selected = 0,
    Selected_No_Movement = 1,
    In = 2,
    Out = 3,
};

enum class RFSCDS_LmbrFwdRr : int32_t {
    Not_Selected = 0,
    Selected_No_Movement = 1,
    Forward = 2,
    Rearward = 3,
};

enum class RFSCDS_LmbrUDnFdRr : int32_t {
    Not_Selected = 0,
    Selected_No_Movement = 1,
    Up = 2,
    Down = 3,
    Forward = 4,
    Rearward = 5,
};

enum class RFSCDS_LmbrUpDwn : int32_t {
    Not_Selected = 0,
    Selected_No_Movement = 1,
    Up = 2,
    Down = 3,
};

enum class RFSCDS_Massg : int32_t {
    Not_Selected = 0,
    Selected_Massage_Off = 1,
    Selected_Massage_On = 2,
};

enum class RFSCDS_MassgIntsty : int32_t {
    Massage_Off = 0,
    Massage_Intensity_1 = 1,
    Massage_Intensity_2 = 2,
    Massage_Intensity_3 = 3,
    Massage_Intensity_4 = 4,
    Massage_Intensity_5 = 5,
    Massage_Intensity_6 = 6,
    Massage_Intensity_7 = 7,
};

enum class RFSCDS_MassgTyp : int32_t {
    Massage_Off = 0,
    Massage_Type_1 = 1,
    Massage_Type_2 = 2,
    Massage_Type_3 = 3,
    Massage_Type_4 = 4,
    Massage_Type_5 = 5,
    Massage_Type_6 = 6,
    Massage_Type_7 = 7,
    Massage_Type_8 = 8,
    Massage_Type_9 = 9,
    Massage_Type_10 = 10,
    Massage_Type_11 = 11,
    Massage_Type_12 = 12,
    Massage_Type_13 = 13,
    Massage_Type_14 = 14,
    Massage_Type_15 = 15,
};

enum class RFSCDS_UprShldrFdRr : int32_t {
    Not_Selected = 0,
    Selected_No_Movement = 1,
    Forward = 2,
    Rearward = 3,
};

enum class RIMBrkPlsChEvStat : int32_t {
    NO_ACTION = 0,
    ACTIVE = 1,
    CANCEL_CHIM = 2,
};

enum class RIMIntCllnChmEvStat : int32_t {
    NO_ACTION = 0,
    ACTIVE = 1,
    CANCEL_CHIM = 2,
};

enum class ROSP_FrntPsRestOcpStatAuth : int32_t {
    Unknown = 0,
    Empty = 1,
    Empty_or_Occupied_Non_Adult = 2,
    Occupied_Adult = 3,
};

enum class RPARS_Lt : int32_t {
    OFF = 0,
    FAILED = 1,
    BLOCKED = 2,
    ATTACHED_OBJECT = 3,
    NO_OBJECT = 4,
    ZONE_1 = 5,
    ZONE_2 = 6,
    ZONE_3 = 7,
    ZONE_4 = 8,
    ZONE_5 = 9,
    ZONE_6 = 10,
    OFF_NO_FAULT = 11,
    RESERVED_1 = 12,
    RESERVED_2 = 13,
    RESERVED_3 = 14,
};

enum class RPARS_LtCntr : int32_t {
    OFF = 0,
    FAILED = 1,
    BLOCKED = 2,
    ATTACHED_OBJECT = 3,
    NO_OBJECT = 4,
    ZONE_1 = 5,
    ZONE_2 = 6,
    ZONE_3 = 7,
    ZONE_4 = 8,
    ZONE_5 = 9,
    ZONE_6 = 10,
    OFF_NO_FAULT = 11,
    RESERVED_1 = 12,
    RESERVED_2 = 13,
    RESERVED_3 = 14,
};

enum class RPARS_Rt : int32_t {
    OFF = 0,
    FAILED = 1,
    BLOCKED = 2,
    ATTACHED_OBJECT = 3,
    NO_OBJECT = 4,
    ZONE_1 = 5,
    ZONE_2 = 6,
    ZONE_3 = 7,
    ZONE_4 = 8,
    ZONE_5 = 9,
    ZONE_6 = 10,
    OFF_NO_FAULT = 11,
    RESERVED_1 = 12,
    RESERVED_2 = 13,
    RESERVED_3 = 14,
};

enum class RPARS_RtCntr : int32_t {
    OFF = 0,
    FAILED = 1,
    BLOCKED = 2,
    ATTACHED_OBJECT = 3,
    NO_OBJECT = 4,
    ZONE_1 = 5,
    ZONE_2 = 6,
    ZONE_3 = 7,
    ZONE_4 = 8,
    ZONE_5 = 9,
    ZONE_6 = 10,
    OFF_NO_FAULT = 11,
    RESERVED_1 = 12,
    RESERVED_2 = 13,
    RESERVED_3 = 14,
};

enum class RPSU_Mth : int32_t {
    Unknown = 0,
    January = 1,
    February = 2,
    March = 3,
    April = 4,
    May = 5,
    June = 6,
    July = 7,
    August = 8,
    September = 9,
    October = 10,
    November = 11,
    December = 12,
};

enum class RPSU_Sts : int32_t {
    Unknown = 0,
    Inactive = 1,
    Scheduled = 2,
};

enum class RRSCDS_BkBlstrInOut : int32_t {
    Not_Selected = 0,
    Selected_No_Movement = 1,
    In = 2,
    Out = 3,
};

enum class RRSCDS_BkCshBlstInOt : int32_t {
    Not_Selected = 0,
    Selected_No_Movement = 1,
    Back_Bolster_In = 2,
    Back_Bolster_Out = 3,
    Cushion_Bolster_In = 4,
    Cushion_Bolster_Out = 5,
};

enum class RRSCDS_CshBlstrInOut : int32_t {
    Not_Selected = 0,
    Selected_No_Movement = 1,
    In = 2,
    Out = 3,
};

enum class RRSCDS_CshLgAdjFdRr : int32_t {
    Not_Selected = 0,
    Selected_No_Movement = 1,
    Forward = 2,
    Rearward = 3,
};

enum class RRSCDS_HdrstFdRrUDn : int32_t {
    Not_Selected = 0,
    Selected_No_Movement = 1,
    Up = 2,
    Down = 3,
    Forward = 4,
    Rearward = 5,
};

enum class RRSCDS_HdrstFwdRrwd : int32_t {
    Not_Selected = 0,
    Selected_No_Movement = 1,
    Forward = 2,
    Rearward = 3,
};

enum class RRSCDS_HdrstTltFwdRr : int32_t {
    Not_Selected = 0,
    Selected_No_Movement = 1,
    Forward = 2,
    Rearward = 3,
};

enum class RRSCDS_HdrstUpDn : int32_t {
    Not_Selected = 0,
    Selected_No_Movement = 1,
    Up = 2,
    Down = 3,
};

enum class RRSCDS_HdrstWngInOt : int32_t {
    Not_Selected = 0,
    Selected_No_Movement = 1,
    In = 2,
    Out = 3,
};

enum class RRSCDS_LmbrFwdRr : int32_t {
    Not_Selected = 0,
    Selected_No_Movement = 1,
    Forward = 2,
    Rearward = 3,
};

enum class RRSCDS_LmbrUDnFdRr : int32_t {
    Not_Selected = 0,
    Selected_No_Movement = 1,
    Up = 2,
    Down = 3,
    Forward = 4,
    Rearward = 5,
};

enum class RRSCDS_LmbrUpDwn : int32_t {
    Not_Selected = 0,
    Selected_No_Movement = 1,
    Up = 2,
    Down = 3,
};

enum class RRSCDS_Massg : int32_t {
    Not_Selected = 0,
    Selected_Massage_Off = 1,
    Selected_Massage_On = 2,
};

enum class RRSCDS_MassgIntsty : int32_t {
    Massage_Off = 0,
    Massage_Intensity_1 = 1,
    Massage_Intensity_2 = 2,
    Massage_Intensity_3 = 3,
    Massage_Intensity_4 = 4,
    Massage_Intensity_5 = 5,
    Massage_Intensity_6 = 6,
    Massage_Intensity_7 = 7,
};

enum class RRSCDS_MassgTyp : int32_t {
    Massage_Off = 0,
    Massage_Type_1 = 1,
    Massage_Type_2 = 2,
    Massage_Type_3 = 3,
    Massage_Type_4 = 4,
    Massage_Type_5 = 5,
    Massage_Type_6 = 6,
    Massage_Type_7 = 7,
    Massage_Type_8 = 8,
    Massage_Type_9 = 9,
    Massage_Type_10 = 10,
    Massage_Type_11 = 11,
    Massage_Type_12 = 12,
    Massage_Type_13 = 13,
    Massage_Type_14 = 14,
    Massage_Type_15 = 15,
};

enum class RRSCDS_UprShldrFdRr : int32_t {
    Not_Selected = 0,
    Selected_No_Movement = 1,
    Forward = 2,
    Rearward = 3,
};

enum class RTLDI_LRSts : int32_t {
    Unknown = 0,
    No_Leak = 1,
    Slow_Leak = 2,
    Fast_Leak = 3,
};

enum class RTLDI_RRSts : int32_t {
    Unknown = 0,
    No_Leak = 1,
    Slow_Leak = 2,
    Fast_Leak = 3,
};

enum class RVCBatSOCOver : int32_t {
    None = 0,
    Plant_Assembly_Mode = 1,
    Charge_Recovery_Mode = 2,
    Default_Mode = 3,
};

enum class RadioDevBTDscvrblSts : int32_t {
    On = 0,
    Off = 1,
};

enum class RadioDevBTPrngSts : int32_t {
    Unknown = 0,
    Failed = 1,
    Successful = 2,
    In_progress = 3,
    Already_paired = 4,
};

enum class RdHgtActvnIndReq : int32_t {
    No_Indication = 0,
    Raising = 1,
    Lowering = 2,
    Location_Raising = 3,
    Location_Lowering = 4,
    Raising_Without_Remember = 5,
};

enum class RdHgtAtLocIndReq : int32_t {
    No_Indication = 0,
    Stored = 1,
    Cleared = 2,
    All_Cleared = 3,
    Not_Saved = 4,
    Unknown = 5,
};

enum class RdHgtAtLocStorConf : int32_t {
    No_Action = 0,
    Store = 1,
    Clear = 2,
    All_Clear = 3,
    Undo_Delete = 4,
};

enum class RdHgtMvmtIndReq : int32_t {
    No_Movement = 0,
    Raising_to_2 = 1,
    Raising = 2,
    Lowering = 3,
    Cargo_Loading = 4,
};

enum class RdHgtStatIndReq : int32_t {
    Nominal_Trim = 0,
    Raised_2 = 1,
    Raised_1 = 2,
    Lowered_1 = 3,
    Lowered_2 = 4,
    Cargo_Trailer = 5,
    Entry_Exit = 6,
    Alignment_Mode = 7,
    Service_Mode = 8,
    Entry_Exit_Pending = 9,
    Safety_Lowered = 10,
    Car_Show = 11,
    Trailer_Low = 12,
    Trailer_High = 13,
};

enum class RdHgtWrn1IndReq : int32_t {
    No_indication = 0,
    Front_Lift_Inhibited = 1,
    Leveling_Inhibited = 2,
    Front_Lift_Unavailable = 3,
    Leveling_Unavailable = 4,
    Front_Lift_Faulted = 5,
    Leveling_Faulted = 6,
};

enum class RdHgtWrn2IndReq : int32_t {
    No_Indication = 0,
    Auto_Lowering = 1,
    Suspension_Low_Wait = 2,
    Suspension_Low_Caution = 3,
    Suspension_High = 4,
    Safety_Lowered = 5,
    Raised_2_Inhibit_4WD = 6,
    Raised_2_Inhibit_Speed = 7,
    Raised_Inhibit_Speed = 8,
    Cargo_Inhibit_Speed = 9,
    Entry_Exit_Pending_Speed = 10,
    Raised_2_Inhibit_Crawl = 11,
    Object_Detected = 12,
    SuspensionOverloaded = 13,
    Lowered_Inhibit_DMC = 14,
    Raised_2_Speed_Limit_Enabled = 15,
};

enum class RdHgtWrn3IndReq : int32_t {
    No_Indication = 0,
    Car_Show_Unavailable = 1,
    Car_Show_Requested = 2,
    Car_Show_Cancelled = 3,
    Cargo_Height_Active = 4,
    Super_Entry_Exit_Requested = 5,
    Super_Entry_Exit_Cancelled = 6,
    Super_Entry_Exit_Exited = 7,
    Super_Entry_Exit_Unavailable = 8,
};

enum class RemCtrlFobNumForProg : int32_t {
    No_Fob = 0,
    Remote_Control_Fob_1 = 1,
    Remote_Control_Fob_2 = 2,
    Remote_Control_Fob_3 = 3,
    Remote_Control_Fob_4 = 4,
    Remote_Control_Fob_5 = 5,
    Remote_Control_Fob_6 = 6,
    Remote_Control_Fob_7 = 7,
    Remote_Control_Fob_8 = 8,
    Reserved_1 = 9,
    Reserved_2 = 10,
    Reserved_3 = 11,
    Reserved_4 = 12,
    Reserved_5 = 13,
    Reserved_6 = 14,
    Reserved_7 = 15,
};

enum class RemInVehRmCstChgSetReq : int32_t {
    NO_ACTION = 0,
    OFF = 1,
    ON = 2,
    RESERVED_3 = 3,
    RESERVED_4 = 4,
    RESERVED_5 = 5,
    RESERVED_6 = 6,
    RESERVED_7 = 7,
};

enum class RemInVehRmndrCstCurSetVal : int32_t {
    SETTING_UNKNOWN = 0,
    OFF = 1,
    ON = 2,
    RESERVED_3 = 3,
    RESERVED_4 = 4,
    RESERVED_5 = 5,
    RESERVED_6 = 6,
    RESERVED_7 = 7,
};

enum class RemLftVehRmCstChgSetReq : int32_t {
    NO_ACTION = 0,
    OFF = 1,
    ON = 2,
    RESERVED_3 = 3,
    RESERVED_4 = 4,
    RESERVED_5 = 5,
    RESERVED_6 = 6,
    RESERVED_7 = 7,
};

enum class RemLftVehRmndrCstCurSetVal : int32_t {
    SETTING_UNKNOWN = 0,
    OFF = 1,
    ON = 2,
    RESERVED_3 = 3,
    RESERVED_4 = 4,
    RESERVED_5 = 5,
    RESERVED_6 = 6,
    RESERVED_7 = 7,
};

enum class RemLtInVhWrngChmEvSt : int32_t {
    NO_ACTION = 0,
    ACTIVE = 1,
    CANCEL_CHIME = 2,
};

enum class RemWndOpCstChgSetReq : int32_t {
    NO_ACTION = 0,
    OFF = 1,
    ON = 2,
    RESERVED_3 = 3,
    RESERVED_4 = 4,
    RESERVED_5 = 5,
    RESERVED_6 = 6,
    RESERVED_7 = 7,
};

enum class ReqAirDstRLRr : int32_t {
    NoAction = 0,
    Auto = 1,
    Floor = 2,
    FloorAndVent = 3,
    Vent = 4,
    VentAndRoof = 5,
    Roof = 6,
    RoofAndFloor = 7,
    FloorAndVentAndRoof = 8,
};

enum class ReqAirDstRRRr : int32_t {
    NoAction = 0,
    Auto = 1,
    Floor = 2,
    FloorAndVent = 3,
    Vent = 4,
    VentAndRoof = 5,
    Roof = 6,
    RoofAndFloor = 7,
    FloorAndVentAndRoof = 8,
};

enum class RevTltMirCstCurSetVal : int32_t {
    SETTING_UNKNOWN = 0,
    OFF = 1,
    DRIVER = 2,
    PASSENGER = 3,
    DRIVER_AND_PASSENGER = 4,
    RESERVED_5 = 5,
    RESERVED_6 = 6,
    RESERVED_7 = 7,
};

enum class RevTltMrCstChgSetReq : int32_t {
    NO_ACTION = 0,
    OFF = 1,
    DRIVER = 2,
    PASSENGER = 3,
    DRIVER_AND_PASSENGER = 4,
    RESERVED_5 = 5,
    RESERVED_6 = 6,
    RESERVED_7 = 7,
};

enum class RideHghtSeltn1Name : int32_t {
    No_Action = 0,
    Auto = 1,
    Raised_2 = 2,
    Raised = 3,
    Normal = 4,
    Entry_Exit = 5,
    Cargo_Trailer = 6,
    Lowered = 7,
};

enum class RideHghtSeltn2Name : int32_t {
    No_Action = 0,
    Auto = 1,
    Raised_2 = 2,
    Raised = 3,
    Normal = 4,
    Entry_Exit = 5,
    Cargo_Trailer = 6,
    Lowered = 7,
};

enum class RideHghtSeltn3Name : int32_t {
    No_Action = 0,
    Auto = 1,
    Raised_2 = 2,
    Raised = 3,
    Normal = 4,
    Entry_Exit = 5,
    Cargo_Trailer = 6,
    Lowered = 7,
};

enum class RideHghtSeltn4Name : int32_t {
    No_Action = 0,
    Auto = 1,
    Raised_2 = 2,
    Raised = 3,
    Normal = 4,
    Entry_Exit = 5,
    Cargo_Trailer = 6,
    Lowered = 7,
};

enum class RideHghtSeltn5Name : int32_t {
    No_Action = 0,
    Auto = 1,
    Raised_2 = 2,
    Raised = 3,
    Normal = 4,
    Entry_Exit = 5,
    Cargo_Trailer = 6,
    Lowered = 7,
};

enum class RideHghtSeltn6Name : int32_t {
    No_Action = 0,
    Auto = 1,
    Raised_2 = 2,
    Raised = 3,
    Normal = 4,
    Entry_Exit = 5,
    Cargo_Trailer = 6,
    Lowered = 7,
};

enum class RideHghtSeltn7Name : int32_t {
    No_Action = 0,
    Auto = 1,
    Raised_2 = 2,
    Raised = 3,
    Normal = 4,
    Entry_Exit = 5,
    Cargo_Trailer = 6,
    Lowered = 7,
};

enum class RideHghtSeltn8Name : int32_t {
    No_Action = 0,
    Auto = 1,
    Raised_2 = 2,
    Raised = 3,
    Normal = 4,
    Entry_Exit = 5,
    Cargo_Trailer = 6,
    Lowered = 7,
};

enum class RlOvrDsblStsChgChmEvntStat : int32_t {
    No_Action = 0,
    Active = 1,
    Cancel_Chime = 2,
};

enum class RlkRtUlkDrCstChSetReq : int32_t {
    NO_ACTION = 0,
    OFF = 1,
    ON = 2,
    RESERVED_3 = 3,
    RESERVED_4 = 4,
    RESERVED_5 = 5,
    RESERVED_6 = 6,
    RESERVED_7 = 7,
};

enum class RlkRtUlkDrCstCrSetVal : int32_t {
    SETTING_UNKNOWN = 0,
    OFF = 1,
    ON = 2,
    RESERVED_3 = 3,
    RESERVED_4 = 4,
    RESERVED_5 = 5,
    RESERVED_6 = 6,
    RESERVED_7 = 7,
};

enum class RmtSnrfOpCstChgSetReq : int32_t {
    NO_ACTION = 0,
    OFF = 1,
    ON = 2,
    RESERVED_3 = 3,
    RESERVED_4 = 4,
    RESERVED_5 = 5,
    RESERVED_6 = 6,
    RESERVED_7 = 7,
};

enum class RmtSnrfOpCstCurrSetVal : int32_t {
    Setting_Unknown = 0,
    Off = 1,
    On = 2,
    Reserved_3 = 3,
    Reserved_4 = 4,
    Reserved_5 = 5,
    Reserved_6 = 6,
    Reserved_7 = 7,
};

enum class RmtStrtCoolStCstChgSetReq : int32_t {
    NO_ACTION = 0,
    OFF = 1,
    ON = 2,
    RESERVED_3 = 3,
    RESERVED_4 = 4,
    RESERVED_5 = 5,
    RESERVED_6 = 6,
    RESERVED_7 = 7,
};

enum class RmtStrtCoolStCstCrStVal : int32_t {
    SETTING_UNKNOWN = 0,
    OFF = 1,
    ON = 2,
    RESERVED_1 = 3,
    RESERVED_2 = 4,
    RESERVED_3 = 5,
    RESERVED_4 = 6,
    RESERVED_5 = 7,
};

enum class RmtStrtHtdStCstChgSetReq : int32_t {
    NO_ACTION = 0,
    OFF = 1,
    ON = 2,
    RESERVED_3 = 3,
    RESERVED_4 = 4,
    RESERVED_5 = 5,
    RESERVED_6 = 6,
    RESERVED_7 = 7,
};

enum class RmtStrtHtdStCstCrStVal : int32_t {
    SETTING_UNKNOWN = 0,
    OFF = 1,
    ON = 2,
    RESERVED_1 = 3,
    RESERVED_2 = 4,
    RESERVED_3 = 5,
    RESERVED_4 = 6,
    RESERVED_5 = 7,
};

enum class RmtTrlrLtngSeqReq : int32_t {
    No_Action = 0,
    Off = 1,
    On = 2,
};

enum class RmtWndOpCstCurSetVal : int32_t {
    SETTING_UNKNOWN = 0,
    OFF = 1,
    ON = 2,
    RESERVED_3 = 3,
    RESERVED_4 = 4,
    RESERVED_5 = 5,
    RESERVED_6 = 6,
    RESERVED_7 = 7,
};

enum class RnSnsCstChgSetReq : int32_t {
    NO_ACTION = 0,
    OFF = 1,
    ON = 2,
    RESERVED_3 = 3,
    RESERVED_4 = 4,
    RESERVED_5 = 5,
    RESERVED_6 = 6,
    RESERVED_7 = 7,
};

enum class RnSnsCstCurSetVal : int32_t {
    SETTING_UNKNOWN = 0,
    OFF = 1,
    ON = 2,
    RESERVED_3 = 3,
    RESERVED_4 = 4,
    RESERVED_5 = 5,
    RESERVED_6 = 6,
    RESERVED_7 = 7,
};

enum class RnngBrdAutoDplyCstChgSetReq : int32_t {
    NO_ACTION = 0,
    OFF = 1,
    DOOR = 2,
    DOOR_PARK = 3,
    RESERVED_4_RESERVED_5 = 4,
    RESERVED_6 = 5,
    RESERVED_7 = 6,
};

enum class RnngBrdAutoDplyCstCurrSetVal : int32_t {
    Setting_Unknown = 0,
    Off = 1,
    Door = 2,
    Door_Park = 3,
    Reserved_5 = 4,
    Reserved_6 = 5,
    Reserved_7 = 6,
};

enum class RnngBrdManDplyCstChgSetReq : int32_t {
    NO_ACTION = 0,
    OFF = 1,
    EXTEND_DOOR = 2,
    EXTEND_BED = 3,
    RESERVED_4_RESERVED_5 = 4,
    RESERVED_6 = 5,
    RESERVED_7 = 6,
};

enum class RnngBrdManDplyCstCurrSetVal : int32_t {
    Setting_Unknown = 0,
    Off = 1,
    Extend_to_Door = 2,
    Extend_to_Bed = 3,
    Reserved_4 = 4,
    Reserved_5 = 5,
    Reserved_6 = 6,
    Reserved_7 = 7,
};

enum class RrAirHandlingDrActrPwrFdbk : int32_t {
    No_Action = 0,
    Power_Off = 1,
    Power_On = 2,
};

enum class RrAirHandlingDrActrPwrReq : int32_t {
    No_Action = 0,
    Power_Off = 1,
    Power_On = 2,
};

enum class RrClsrAccssVirtCtlAllwd : int32_t {
    Not_Allowed = 0,
    Allowed = 1,
};

enum class RrClsrAccssVirtCtlAval : int32_t {
    Not_Available = 0,
    Available = 1,
};

enum class RrClsrAccssVirtCtlReq : int32_t {
    No_Action = 0,
    Open = 1,
    Close = 2,
    Stop = 3,
};

enum class RrClsrLckSts : int32_t {
    Unknown = 0,
    Unlocked = 1,
    Locked = 2,
};

enum class RrCrsTrfcAlrtCstChngSetReq : int32_t {
    NO_ACTION = 0,
    OFF = 1,
    ALERT = 2,
    ALERT_AND_BRAKE = 3,
    RESERVED_4 = 4,
    RESERVED_5 = 5,
    RESERVED_6 = 6,
    RESERVED_7 = 7,
};

enum class RrCrsTrfcAlrtCstCrStVal : int32_t {
    SETTING_UNKNOWN = 0,
    OFF = 1,
    ALERT = 2,
    ALERT_and_BRAKE = 3,
    RESERVED_4 = 4,
    RESERVED_5 = 5,
    RESERVED_6 = 6,
    RESERVED_7 = 7,
};

enum class RrCrsTrfcAlrtLftIndCtrl : int32_t {
    ON = 0,
    OFF = 1,
    FLASH = 2,
};

enum class RrCrsTrfcAlrtLtSdChmEvntStat : int32_t {
    NO_ACTION = 0,
    ACTIVE = 1,
    CANCEL_CHIME = 2,
};

enum class RrCrsTrfcAlrtRgIndCtrl : int32_t {
    ON = 0,
    OFF = 1,
    FLASH = 2,
};

enum class RrCrsTrfcAlrtRtSdChmEvntStat : int32_t {
    NO_ACTION = 0,
    ACTIVE = 1,
    CANCEL_CHIME = 2,
};

enum class RrDfgStUpCstChgSetReq : int32_t {
    NO_ACTION = 0,
    MANUAL = 1,
    AUTOMATIC = 2,
    RESERVED_3 = 3,
    RESERVED_4 = 4,
    RESERVED_5 = 5,
    RESERVED_6 = 6,
    RESERVED_7 = 7,
};

enum class RrDfgStUpCstCrStVal : int32_t {
    SETTING_UNKNOWN = 0,
    MANUAL = 1,
    AUTOMATIC = 2,
    RESERVED_1 = 3,
    RESERVED_2 = 4,
    RESERVED_3 = 5,
    RESERVED_4 = 6,
    RESERVED_5 = 7,
};

enum class RrDrOpnCmfRclCstChgSetReq : int32_t {
    No_Action = 0,
    Off = 1,
    On = 2,
};

enum class RrDrOpnCmfRclCstSetVal : int32_t {
    Setting_Unknown = 0,
    Off = 1,
    On = 2,
};

enum class RrPCMChmEvntSt : int32_t {
    NO_ACTION = 0,
    ACTIVE = 1,
    CANCEL_CHIME = 2,
};

enum class RrPCMRspTypCstChgSetReq : int32_t {
    NO_ACTION = 0,
    OFF = 1,
    ALERT = 2,
    ALERT_AND_BRAKE = 3,
    ALERT_AND_BRAKE_AND_STEER = 4,
    RESERVED_5 = 5,
    RESERVED_6 = 6,
    RESERVED_7 = 7,
};

enum class RrPCMRspTypCstCrStVal : int32_t {
    SETTING_UNKNOWN = 0,
    OFF = 1,
    ALERT = 2,
    ALERT_AND_BRAKE = 3,
    RESERVED_4_RESERVED_5 = 4,
    RESERVED_6 = 5,
    RESERVED_7 = 6,
};

enum class RrPedtrnClsnMtgnNtfyChmEvntStat : int32_t {
    NO_ACTION = 0,
    ACTIVE = 1,
    CANCEL_CHIME = 2,
};

enum class RrPedtrnClsnMtgnVisAlrtReq : int32_t {
    Off = 0,
    Pedestrian_Alert = 1,
    Pedestrian_Notify = 2,
};

enum class RrStHtdBkLvlAval : int32_t {
    Not_Available = 0,
    Two_Levels_Available = 1,
    Three_Levels_Available = 2,
    Four_Levels_Available = 3,
};

enum class RrStHtdCushBkLvlAval : int32_t {
    Not_Available = 0,
    Two_Levels_Available = 1,
    Three_Levels_Available = 2,
    Four_Levels_Available = 3,
};

enum class RrStInfoDsp1PwrBtnCurrSlnVal : int32_t {
    Unknown = 0,
    On = 1,
    Off = 2,
};

enum class RrStInfoDsp2PwrBtnCurrSlnVal : int32_t {
    Unknown = 0,
    On = 1,
    Off = 2,
};

enum class RrStRmndrEnblDsblCstChgSetReq : int32_t {
    No_Action = 0,
    Off = 1,
    On = 2,
};

enum class RrStRmndrEnblDsblCstCurrSetVal : int32_t {
    Setting_Unknown = 0,
    Off = 1,
    On = 2,
    Underscore_Reserved_3 = 3,
    Reserved_4 = 4,
    Reserved_5 = 5,
    Reserved_6 = 6,
    Reserved_7_ = 7,
};

enum class RrStVntCoolLvlAval : int32_t {
    Not_Available = 0,
    Two_Levels_Available = 1,
    Three_Levels_Available = 2,
    Four_Levels_Available = 3,
};

enum class RrStrgActlModeAuth : int32_t {
    Automatic = 0,
    Fixed = 1,
    Crab = 2,
    None = 3,
};

enum class RrStrgActlPerfMode : int32_t {
    No_Action = 0,
    Normal = 1,
    Sport = 2,
    Comfort = 3,
    Track = 4,
    Tow_Haul = 5,
    City_Offroad = 6,
    Terrain = 7,
};

enum class RrStrgModeDispIndReq : int32_t {
    None = 0,
    Automatic = 1,
    Fixed = 2,
    Crab = 3,
    Crab_Pending = 4,
    Crab_Ready = 5,
};

enum class RrStrgModeUnvIndReq : int32_t {
    No_Indication = 0,
    Speed_Too_High = 1,
    Incorrect_Gear = 2,
    Mode_Unavailable = 3,
    Steering_Too_Fast = 4,
    Automated_Driving_1 = 5,
    Automated_Driving_2 = 6,
};

enum class RrStrgModeVirtCtlAval : int32_t {
    Not_Available = 0,
    Available = 1,
};

enum class RrStrgOprtlStsAuth : int32_t {
    Unknown = 0,
    Normal = 1,
    Temporarily_Unavailable = 2,
    Reduced_Performance = 3,
    Failed = 4,
    Normal_Active_Safety_Control = 5,
    Reserved = 6,
};

enum class RrVirtBmpCstChgSetReq : int32_t {
    NO_ACTION = 0,
    OFF = 1,
    ALERT_AND_BRAKE = 2,
};

enum class RrVirtBmpCstCurrSetVal : int32_t {
    Setting_Unknown = 0,
    Off = 1,
    Alert_and_Brake = 2,
};

enum class RrVirtBmpFtrStsIndReq : int32_t {
    No_Indication = 0,
    OFF = 1,
    ON = 2,
    Unavailable = 3,
};

enum class RrVirtBmpVirtCtlAval : int32_t {
    Not_Available = 0,
    Available = 1,
};

enum class RrVirtBmpVirtCtlReq : int32_t {
    NO_ACTION = 0,
    OFF = 1,
    ON = 2,
};

enum class RrVwPrkAstSymCsCrStVal : int32_t {
    SETTING_UNKNOWN = 0,
    OFF = 1,
    ON = 2,
    RESERVED_3 = 3,
    RESERVED_4 = 4,
    RESERVED_5 = 5,
    RESERVED_6 = 6,
    RESERVED_7 = 7,
};

enum class RrVwPrkAstSymCstChgSetReq : int32_t {
    NO_ACTION = 0,
    OFF = 1,
    ON = 2,
    RESERVED_3 = 3,
    RESERVED_4 = 4,
    RESERVED_5 = 5,
    RESERVED_6 = 6,
    RESERVED_7 = 7,
};

enum class RrZnStUpCstChgSetReq : int32_t {
    NO_ACTION = 0,
    REAR_OFF = 1,
    REAR_MIMIC_FRONT = 2,
    REAR_LAST_KNOWN = 3,
    RESERVED_4 = 4,
    RESERVED_5 = 5,
    RESERVED_6 = 6,
    RESERVED_7 = 7,
};

enum class RrZnStUpCstCrStVal : int32_t {
    SETTING_UNKNOWN = 0,
    REAR_OFF = 1,
    REAR_MIMIC_FRONT = 2,
    REAR_LAST_KNOWN = 3,
    RESERVED_1 = 4,
    RESERVED_2 = 5,
    RESERVED_3 = 6,
    RESERVED_4 = 7,
};

enum class RtLkFdbkCstChgSetReq : int32_t {
    NO_ACTION = 0,
    HORN_AND_LIGHTS_OFF = 1,
    HORN_AND_LIGHTS_ON = 2,
    FLASH_LIGHTS_ONLY = 3,
    HORN_CHIRP_ONLY = 4,
    RESERVED_5 = 5,
    RESERVED_6 = 6,
    RESERVED_7 = 7,
};

enum class RtLkFdbkCstCurSetVal : int32_t {
    SETTING_UNKNOWN = 0,
    HORN_AND_LIGHTS_OFF = 1,
    HORN_AND_LIGHTS_ON = 2,
    FLASH_LIGHTS_ONLY = 3,
    HORN_CHIRP_ONLY = 4,
    RESERVED_5 = 5,
    RESERVED_6 = 6,
    RESERVED_7 = 7,
};

enum class RtUlkLtFbCstChgSetReq : int32_t {
    NO_ACTION = 0,
    OFF = 1,
    FLASH_LIGHTS_ON = 2,
    RESERVED_3 = 3,
    RESERVED_4 = 4,
    RESERVED_5 = 5,
    RESERVED_6 = 6,
    RESERVED_7 = 7,
};

enum class RtUlkLtFbCstCurSetVal : int32_t {
    SETTING_UNKNOWN = 0,
    OFF = 1,
    FLASH_LIGHTS_ON = 2,
    RESERVED_3 = 3,
    RESERVED_4 = 4,
    RESERVED_5 = 5,
    RESERVED_6 = 6,
    RESERVED_7 = 7,
};

enum class SAP_SecAxl4WDAWDStatAuth : int32_t {
    Normal = 0,
    Temporary_Limited = 1,
    Temporary_Inhibit = 2,
    Permanently_Failed = 3,
};

enum class SAP_SecAxlOpMdAuth : int32_t {
    Num2WD_High = 0,
    Num4WD_High_Rigid_Coupling = 1,
    Num4WD_Low_Rigid_Coupling = 2,
    AWD_Active_Single_Clutch = 3,
    Num4WD_High_Active_Clutch = 4,
    Num4WD_Low_Active_Clutch = 5,
    AWD_Active_Twin_Clutch = 6,
    Num2WD_Low = 7,
    Unknown = 8,
    Neutral = 9,
};

enum class SBZALCAVisIndStatLt : int32_t {
    FLASHING = 0,
    SOLID = 1,
    OFF = 2,
};

enum class SBZALCAVisIndStatRt : int32_t {
    FLASHING = 0,
    SOLID = 1,
    OFF = 2,
};

enum class SBZAlrtCstChngSetReq : int32_t {
    NO_ACTION = 0,
    OFF = 1,
    ON = 2,
    RESERVED_3 = 3,
    RESERVED_4 = 4,
    RESERVED_5 = 5,
    RESERVED_6 = 6,
    RESERVED_7 = 7,
};

enum class SBZAlrtCstCrStVal : int32_t {
    SETTING_UNKNOWN = 0,
    OFF = 1,
    ON = 2,
    RESERVED_3 = 3,
    RESERVED_4 = 4,
    RESERVED_5 = 5,
    RESERVED_6 = 6,
    RESERVED_7 = 7,
};

enum class SCAOOAByKeyFobLFCstChgSetReq : int32_t {
    No_Action = 0,
    Off = 1,
    On = 2,
};

enum class SCAOOAByKeyFobLFCstCurrSetVal : int32_t {
    Setting_Unknown = 0,
    Off = 1,
    On = 2,
};

enum class SCAOOAByKeyFobRFCstChgSetReq : int32_t {
    No_Action = 0,
    Off = 1,
    On = 2,
};

enum class SCAOOAByKeyFobRFCstCurrSetVal : int32_t {
    Setting_Unknown = 0,
    Off = 1,
    On = 2,
};

enum class SCAOOAByVirtKeyLFCstChgSetReq : int32_t {
    No_Action = 0,
    Off = 1,
    On = 2,
};

enum class SCAOOAByVirtKeyLFCstCurrSetVal : int32_t {
    Setting_Unknown = 0,
    Off = 1,
    On = 2,
};

enum class SCAOOAByVirtKeyRFCstChgSetReq : int32_t {
    No_Action = 0,
    Off = 1,
    On = 2,
};

enum class SCAOOAByVirtKeyRFCstCurrSetVal : int32_t {
    Setting_Unknown = 0,
    Off = 1,
    On = 2,
};

enum class SCAPDBrktoClsLFCstChgSetReq : int32_t {
    No_Action = 0,
    Off = 1,
    On = 2,
};

enum class SCAPDBrktoClsLFCstCurrSetVal : int32_t {
    Setting_Unknown = 0,
    Off = 1,
    On = 2,
};

enum class SCAPDBrktoClsRFCstChgSetReq : int32_t {
    No_Action = 0,
    Off = 1,
    On = 2,
};

enum class SCAPDBrktoClsRFCstCurrSetVal : int32_t {
    Setting_Unknown = 0,
    Off = 1,
    On = 2,
};

enum class SCAPDOpnMaxTrvlCstChgSetReq : int32_t {
    No_Action = 0,
    Slight = 1,
    Standard = 2,
    Maximum = 3,
    Manual = 4,
};

enum class SCAPDOpnMaxTrvlCstCurrSetVal : int32_t {
    Setting_Unknown = 0,
    Slight = 1,
    Standard = 2,
    Maximum = 3,
    Manual = 4,
};

enum class SCAPwrDrLckAllVirtCtlAval : int32_t {
    Not_Available = 0,
    Available = 1,
};

enum class SCAPwrDrLckAllVirtCtlFrtAllwd : int32_t {
    Not_Allowed = 0,
    Allowed = 1,
};

enum class SCAPwrDrLckAllVirtCtlFrtReq : int32_t {
    No_Action = 0,
    Lock_All = 1,
};

enum class SCAPwrDrLckAllVirtCtlRrAllwd : int32_t {
    Not_Allowed = 0,
    Allowed = 1,
};

enum class SCAPwrDrLckAllVirtCtlRrReq : int32_t {
    No_Action = 0,
    Lock_All = 1,
};

enum class SCAPwrDrMtnLFVirtCtlAllwd : int32_t {
    Not_Allowed = 0,
    Allowed = 1,
};

enum class SCAPwrDrMtnLFVirtCtlAval : int32_t {
    Not_Available = 0,
    Available = 1,
};

enum class SCAPwrDrMtnLFVirtCtlReq : int32_t {
    No_Action = 0,
    Open = 1,
    Close = 2,
    Stop = 3,
    Partial_Open = 4,
};

enum class SCAPwrDrMtnLRVirtCtlAval : int32_t {
    Not_Available = 0,
    Available = 1,
};

enum class SCAPwrDrMtnLRVirtCtlFrtAllwd : int32_t {
    Not_Allowed = 0,
    Allowed = 1,
};

enum class SCAPwrDrMtnLRVirtCtlFrtReq : int32_t {
    No_Action = 0,
    Open = 1,
    Close = 2,
    Stop = 3,
    Partial_Open = 4,
};

enum class SCAPwrDrMtnLRVirtCtlRrAllwd : int32_t {
    Not_Allowed = 0,
    Allowed = 1,
};

enum class SCAPwrDrMtnLRVirtCtlRrReq : int32_t {
    No_Action = 0,
    Open = 1,
    Close = 2,
    Stop = 3,
    Partial_Open = 4,
};

enum class SCAPwrDrMtnRFVirtCtlAllwd : int32_t {
    Not_Allowed = 0,
    Allowed = 1,
};

enum class SCAPwrDrMtnRFVirtCtlAval : int32_t {
    Not_Available = 0,
    Available = 1,
};

enum class SCAPwrDrMtnRFVirtCtlReq : int32_t {
    No_Action = 0,
    Open = 1,
    Close = 2,
    Stop = 3,
    Partial_Open = 4,
};

enum class SCAPwrDrMtnRRVirtCtlAval : int32_t {
    Not_Available = 0,
    Available = 1,
};

enum class SCAPwrDrMtnRRVirtCtlFrtAllwd : int32_t {
    Not_Allowed = 0,
    Allowed = 1,
};

enum class SCAPwrDrMtnRRVirtCtlFrtReq : int32_t {
    No_Action = 0,
    Open = 1,
    Close = 2,
    Stop = 3,
    Partial_Open = 4,
};

enum class SCAPwrDrMtnRRVirtCtlRrAllwd : int32_t {
    Not_Allowed = 0,
    Allowed = 1,
};

enum class SCAPwrDrMtnRRVirtCtlRrReq : int32_t {
    No_Action = 0,
    Open = 1,
    Close = 2,
    Stop = 3,
    Partial_Open = 4,
};

enum class SCAPwrDrUnlckAllVirtCtlAval : int32_t {
    Not_Available = 0,
    Available = 1,
};

enum class SCAPwrDrUnlckAllVirtCtlFrtAllwd : int32_t {
    Not_Allowed = 0,
    Allowed = 1,
};

enum class SCAPwrDrUnlckAllVirtCtlFrtReq : int32_t {
    No_Action = 0,
    UnLock_All = 1,
};

enum class SCAPwrDrUnlckAllVirtCtlRrAllwd : int32_t {
    Not_Allowed = 0,
    Allowed = 1,
};

enum class SCAPwrDrUnlckAllVirtCtlRrReq : int32_t {
    No_Action = 0,
    UnLock_All = 1,
};

enum class SDGPARS_CntrLtSd : int32_t {
    OFF = 0,
    FAILED = 1,
    BLOCKED = 2,
    ATTACHED_OBJECT = 3,
    NO_OBJECT = 4,
    ZONE_1 = 5,
    ZONE_2 = 6,
    ZONE_3 = 7,
    ZONE_4 = 8,
    ZONE_5 = 9,
    ZONE_6 = 10,
    OFF_NO_FAULT = 11,
    RESERVED_1 = 12,
    RESERVED_2 = 13,
    RESERVED_3 = 14,
};

enum class SDGPARS_CntrRtSd : int32_t {
    OFF = 0,
    FAILED = 1,
    BLOCKED = 2,
    ATTACHED_OBJECT = 3,
    NO_OBJECT = 4,
    ZONE_1 = 5,
    ZONE_2 = 6,
    ZONE_3 = 7,
    ZONE_4 = 8,
    ZONE_5 = 9,
    ZONE_6 = 10,
    OFF_NO_FAULT = 11,
    RESERVED_1 = 12,
    RESERVED_2 = 13,
    RESERVED_3 = 14,
};

enum class SDGPARS_FrtLtSd : int32_t {
    OFF = 0,
    FAILED = 1,
    BLOCKED = 2,
    ATTACHED_OBJECT = 3,
    NO_OBJECT = 4,
    ZONE_1 = 5,
    ZONE_2 = 6,
    ZONE_3 = 7,
    ZONE_4 = 8,
    ZONE_5 = 9,
    ZONE_6 = 10,
    OFF_NO_FAULT = 11,
    RESERVED_1 = 12,
    RESERVED_2 = 13,
    RESERVED_3 = 14,
};

enum class SDGPARS_FrtRtSd : int32_t {
    OFF = 0,
    FAILED = 1,
    BLOCKED = 2,
    ATTACHED_OBJECT = 3,
    NO_OBJECT = 4,
    ZONE_1 = 5,
    ZONE_2 = 6,
    ZONE_3 = 7,
    ZONE_4 = 8,
    ZONE_5 = 9,
    ZONE_6 = 10,
    OFF_NO_FAULT = 11,
    RESERVED_1 = 12,
    RESERVED_2 = 13,
    RESERVED_3 = 14,
};

enum class SDGPARS_RrLtSd : int32_t {
    OFF = 0,
    FAILED = 1,
    BLOCKED = 2,
    ATTACHED_OBJECT = 3,
    NO_OBJECT = 4,
    ZONE_1 = 5,
    ZONE_2 = 6,
    ZONE_3 = 7,
    ZONE_4 = 8,
    ZONE_5 = 9,
    ZONE_6 = 10,
    OFF_NO_FAULT = 11,
    RESERVED_1 = 12,
    RESERVED_2 = 13,
    RESERVED_3 = 14,
};

enum class SDGPARS_RrRtSd : int32_t {
    OFF = 0,
    FAILED = 1,
    BLOCKED = 2,
    ATTACHED_OBJECT = 3,
    NO_OBJECT = 4,
    ZONE_1 = 5,
    ZONE_2 = 6,
    ZONE_3 = 7,
    ZONE_4 = 8,
    ZONE_5 = 9,
    ZONE_6 = 10,
    OFF_NO_FAULT = 11,
    RESERVED_1 = 12,
    RESERVED_2 = 13,
    RESERVED_3 = 14,
};

enum class SGI2P_AirSpnsnRdHghtActlStsAuth : int32_t {
    Faulted = 0,
    Entry_Exit = 1,
    Lowered_3 = 2,
    Lowered_2 = 3,
    Lowered_1 = 4,
    Showroom = 5,
    Normal = 6,
    Raised_1 = 7,
    Raised_2 = 8,
    Raised_3 = 9,
    Cargo = 10,
    Trailer_Low = 11,
    Trailer_High = 12,
    Car_Show = 13,
};

enum class SGI2P_AirSpnsnRdHghtTgtStsAuth : int32_t {
    Faulted = 0,
    Entry_Exit = 1,
    Lowered_3 = 2,
    Lowered_2 = 3,
    Lowered_1 = 4,
    Showroom = 5,
    Normal = 6,
    Raised_1 = 7,
    Raised_2 = 8,
    Raised_3 = 9,
    Cargo = 10,
    Trailer_Low = 11,
    Trailer_High = 12,
    Car_Show = 13,
};

enum class SLVFSP_SpdLimVsnFsdSpdUntAuth : int32_t {
    km_h = 0,
    mph = 1,
};

enum class SPMP_SysPwrModeAuth : int32_t {
    Off = 0,
    Accessory = 1,
    Run = 2,
    Start_Request = 3,
    Propulsion = 4,
};

enum class SRPSptSeltnAcceptSftBtnSts : int32_t {
    Not_Pressed = 0,
    Pressed = 1,
};

enum class SRPSptSeltnKeepLkSftBtnSts : int32_t {
    Not_Pressed = 0,
    Pressed = 1,
};

enum class SRPSptSeltnRmtSftBtnSts : int32_t {
    Not_Pressed = 0,
    Pressed = 1,
};

enum class SRPUnableCnctExtSftBtnSts : int32_t {
    Not_Pressed = 0,
    Pressed = 1,
};

enum class SRPUnableCnctTryAgnSftBtnSts : int32_t {
    Not_Pressed = 0,
    Pressed = 1,
};

enum class SWIP_StrgWhlAngCalStsAuth : int32_t {
    Unknown = 0,
    Estimated = 1,
    Calibrated = 2,
};

enum class SecAxlTransStatAchvd : int32_t {
    Unknown = 0,
    Neutral = 1,
    Mode_1 = 2,
};

enum class SecRowCntrPsStBltRmOccpSts : int32_t {
    Unknown = 0,
    Empty = 1,
    Occupied = 2,
};

enum class SecRowCntrPsStBltSts : int32_t {
    Unknown = 0,
    Unfastened = 1,
    Fastened = 2,
};

enum class SecRowLtPsStBltRmOccpSts : int32_t {
    Unknown = 0,
    Empty = 1,
    Occupied = 2,
};

enum class SecRowLtPsStBltSts : int32_t {
    Unknown = 0,
    Unfastened = 1,
    Fastened = 2,
};

enum class SecRowRtPsStBltRmOccpSts : int32_t {
    Unknown = 0,
    Empty = 1,
    Occupied = 2,
};

enum class SecRowRtPsStBltSts : int32_t {
    Unknown = 0,
    Unfastened = 1,
    Fastened = 2,
};

enum class SelUlkCstChgSetReq : int32_t {
    NO_ACTION = 0,
    DRIVER_DOOR_ONLY = 1,
    ALL_DOORS = 2,
    RESERVED_3 = 3,
    RESERVED_4 = 4,
    RESERVED_5 = 5,
    RESERVED_6 = 6,
    RESERVED_7 = 7,
};

enum class SelUlkCstCurSetVal : int32_t {
    SETTING_UNKNOWN = 0,
    DRIVER_DOOR_ONLY = 1,
    ALL_DOORS = 2,
    RESERVED_3 = 3,
    RESERVED_4 = 4,
    RESERVED_5 = 5,
    RESERVED_6 = 6,
    RESERVED_7 = 7,
};

enum class ServHiVltgBatIndReq : int32_t {
    No_Indication = 0,
    Shut_Down_Soon = 1,
    No_Restart = 2,
};

enum class ShfttoPrkChmEvntSt : int32_t {
    NO_ACTION = 0,
    ACTIVE = 1,
    CANCEL_CHIME = 2,
};

enum class SnrfActlPstn : int32_t {
    Num0_ = 0,
    Num10_ = 1,
    Num20_ = 2,
    Num30_ = 3,
    Num40_ = 4,
    Num50_ = 5,
    Num60_ = 6,
    Num70_ = 7,
    Num80_ = 8,
    Num90_ = 9,
    Num100_ = 10,
    Between_Positions = 11,
    Vent = 12,
    Comfort_Open = 13,
};

enum class SnrfCurrMtnSts : int32_t {
    No_Motion = 0,
    Opening = 1,
    Venting = 2,
    Closing = 3,
    Motion_Error = 4,
    Stall = 5,
};

enum class SnrfPstnSts : int32_t {
    Fully_Closed = 0,
    Vent = 1,
    Partially_Open = 2,
    Fully_Open = 3,
    Comfort_Open = 4,
};

enum class SpdLmtrSpdLimSgnUntAuth : int32_t {
    km_h = 0,
    mph = 1,
};

enum class SprTireSt : int32_t {
    Undetermined = 0,
    No_Spare_Detected = 1,
    Spare_Detected = 2,
};

enum class SprtMdElecVehPedMpVisDispVal : int32_t {
    SETTING_UNKNOWN = 0,
    CUSTOM_MODE_1 = 1,
    CUSTOM_MODE_2 = 2,
    CUSTOM_MODE_3 = 3,
    CUSTOM_MODE_4 = 4,
    CUSTOM_MODE_5 = 5,
    CUSTOM_MODE_6 = 6,
    CUSTOM_MODE_7 = 7,
};

enum class SprtMdEngyRegnVisDispVal : int32_t {
    SETTING_UNKNOWN = 0,
    CUSTOM_MODE_1 = 1,
    CUSTOM_MODE_2 = 2,
    CUSTOM_MODE_3 = 3,
    CUSTOM_MODE_4 = 4,
    CUSTOM_MODE_5 = 5,
    CUSTOM_MODE_6 = 6,
    CUSTOM_MODE_7 = 7,
};

enum class SprtModeActvAeroVisDispVal : int32_t {
    Setting_Unknown = 0,
    Custom_Mode_1 = 1,
    Custom_Mode_2 = 2,
    Custom_Mode_3 = 3,
    Custom_Mode_4 = 4,
    Custom_Mode_5 = 5,
    Custom_Mode_6 = 6,
    Custom_Mode_7 = 7,
};

enum class SprtModeBrkPedVisDispVal : int32_t {
    Setting_Unknown = 0,
    Custom_Mode_1 = 1,
    Custom_Mode_2 = 2,
    Custom_Mode_3 = 3,
    Custom_Mode_4 = 4,
    Custom_Mode_5 = 5,
    Custom_Mode_6 = 6,
    Custom_Mode_7 = 7,
};

enum class SprtModeDrvlineVisDispVal : int32_t {
    Setting_Unknown = 0,
    Custom_Mode_1 = 1,
    Custom_Mode_2 = 2,
    Custom_Mode_3 = 3,
    Custom_Mode_4 = 4,
    Custom_Mode_5 = 5,
    Custom_Mode_6 = 6,
    Custom_Mode_7 = 7,
};

enum class SprtModeESCVisDispVal : int32_t {
    Setting_Unknown = 0,
    Custom_Mode_1 = 1,
    Custom_Mode_2 = 2,
    Custom_Mode_3 = 3,
    Custom_Mode_4 = 4,
    Custom_Mode_5 = 5,
    Custom_Mode_6 = 6,
    Custom_Mode_7 = 7,
};

enum class SprtModePwrtrnVisDispVal : int32_t {
    Setting_Unknown = 0,
    Custom_Mode_1 = 1,
    Custom_Mode_2 = 2,
    Custom_Mode_3 = 3,
    Custom_Mode_4 = 4,
    Custom_Mode_5 = 5,
    Custom_Mode_6 = 6,
    Custom_Mode_7 = 7,
};

enum class SprtModeRideHghtVisDispVal : int32_t {
    Setting_Unknown = 0,
    Custom_Mode_1 = 1,
    Custom_Mode_2 = 2,
    Custom_Mode_3 = 3,
    Custom_Mode_4 = 4,
    Custom_Mode_5 = 5,
    Custom_Mode_6 = 6,
    Custom_Mode_7 = 7,
};

enum class SprtModeSndVisDispVal : int32_t {
    Setting_Unknown = 0,
    Custom_Mode_1 = 1,
    Custom_Mode_2 = 2,
    Custom_Mode_3 = 3,
    Custom_Mode_4 = 4,
    Custom_Mode_5 = 5,
    Custom_Mode_6 = 6,
    Custom_Mode_7 = 7,
};

enum class SprtModeSpnsnVisDispVal : int32_t {
    Setting_Unknown = 0,
    Custom_Mode_1 = 1,
    Custom_Mode_2 = 2,
    Custom_Mode_3 = 3,
    Custom_Mode_4 = 4,
    Custom_Mode_5 = 5,
    Custom_Mode_6 = 6,
    Custom_Mode_7 = 7,
};

enum class SprtModeStrgVisDispVal : int32_t {
    Setting_Unknown = 0,
    Custom_Mode_1 = 1,
    Custom_Mode_2 = 2,
    Custom_Mode_3 = 3,
    Custom_Mode_4 = 4,
    Custom_Mode_5 = 5,
    Custom_Mode_6 = 6,
    Custom_Mode_7 = 7,
};

enum class SrrndVsnRcrdrDelFileReqSts : int32_t {
    Unknown = 0,
    File_1_Deleted = 1,
    File_2_Deleted = 2,
    File_3_Deleted = 3,
    File_4_Deleted = 4,
    File_5_Deleted = 5,
    No_Selection = 6,
    Delete_Failed = 7,
};

enum class SrrndVsnRcrdrFileDeltn : int32_t {
    Unknown = 0,
    File_1 = 1,
    File_2 = 2,
    File_3 = 3,
    File_4 = 4,
    File_5 = 5,
    No_Selection = 6,
};

enum class SrrndVsnRcrdrFileSeltn : int32_t {
    Unknown = 0,
    File_1 = 1,
    File_2 = 2,
    File_3 = 3,
    File_4 = 4,
    File_5 = 5,
    No_Selection = 6,
};

enum class SrrndVsnRcrdrListFcs : int32_t {
    Unknown = 0,
    File_1 = 1,
    File_2 = 2,
    File_3 = 3,
    File_4 = 4,
    File_5 = 5,
    Delete_1 = 6,
    Delete_2 = 7,
    Delete_3 = 8,
    Delete_4 = 9,
    Delete_5 = 10,
    No_Focus = 11,
};

enum class SrrndVsnRcrdrListPgSeltn : int32_t {
    Unknown = 0,
    Page_Up = 1,
    Page_Down = 2,
    No_Selection = 3,
};

enum class SrrndVsnRcrdrListPgSts : int32_t {
    Unknown = 0,
    Page_Up = 1,
    Page_Down = 2,
    No_Selection = 3,
};

enum class SrrndVsnRcrdrPlybkFcs : int32_t {
    Unknown = 0,
    View_1 = 1,
    View_2 = 2,
    View_3 = 3,
    View_4 = 4,
    Zoomed = 5,
    No_Focus = 6,
};

enum class SrrndVsnRcrdrPlybkSeltn : int32_t {
    Unknown = 0,
    Play = 1,
    Pause = 2,
    Rewind = 3,
    Fast_Forward = 4,
    No_Selection = 5,
};

enum class SrrndVsnRcrdrPlybkSts : int32_t {
    Unknown = 0,
    Play = 1,
    Pause = 2,
    Rewind = 3,
    Fast_Forward = 4,
    No_Selection = 5,
};

enum class SrrndVsnRcrdrRcrdSeltn : int32_t {
    Unknown = 0,
    Enabled = 1,
    Disabled = 2,
};

enum class SrrndVsnRcrdrRcrdSts : int32_t {
    Unknown = 0,
    Enabled = 1,
    Disabled = 2,
};

enum class SrrndVsnRcrdrSaveFile : int32_t {
    Unknown = 0,
    Save = 1,
    Not_Pressed = 2,
};

enum class SrrndVsnRcrdrVwprtReq : int32_t {
    Unknown = 0,
    Playback_Mosaic = 1,
    Playback_Zoom1 = 2,
    Playback_Zoom2 = 3,
    Playback_Zoom3 = 4,
    Playback_Zoom4 = 5,
    List_Recent = 6,
    List_Saved = 7,
};

enum class SrrndVsnRcrdrVwprtSeltn : int32_t {
    Unknown = 0,
    Playback_Mosaic = 1,
    Playback_Zoom1 = 2,
    Playback_Zoom2 = 3,
    Playback_Zoom3 = 4,
    Playback_Zoom4 = 5,
    List_Recent = 6,
    List_Saved = 7,
    No_Request = 8,
};

enum class SrrndVsnRcrdrVwprtSts : int32_t {
    Unknown = 0,
    Playback_Mosaic = 1,
    Playback_Zoom1 = 2,
    Playback_Zoom2 = 3,
    Playback_Zoom3 = 4,
    Playback_Zoom4 = 5,
    List_Recent = 6,
    List_Saved = 7,
};

enum class SrrndVwLghtCsCrStVal : int32_t {
    SETTING_UNKNOWN = 0,
    OFF = 1,
    ON = 2,
    RESERVED_3 = 3,
    RESERVED_4 = 4,
    RESERVED_5 = 5,
    RESERVED_6 = 6,
    RESERVED_7 = 7,
};

enum class SrrndVwLghtCstChgSetReq : int32_t {
    SETTING_UNKNOWN = 0,
    ON = 1,
    OFF = 2,
    RESERVED_3 = 3,
    RESERVED_4 = 4,
    RESERVED_5 = 5,
    RESERVED_6 = 6,
    RESERVED_7 = 7,
};

enum class StBkHrztlLFCtlFrmFrtVirtCtlAlwd : int32_t {
    Not_Allowed = 0,
    Allowed = 1,
};

enum class StBkHrztlLFCtlFrmFrtVirtCtlAval : int32_t {
    Not_Available = 0,
    Available = 1,
};

enum class StBkHrztlLFCtlFrmFrtVirtCtlReq : int32_t {
    No_Request = 0,
    Forward = 1,
    Rearward = 2,
};

enum class StBkHrztlLFCtlFrmRrVirtCtlAllwd : int32_t {
    Not_Allowed = 0,
    Allowed = 1,
};

enum class StBkHrztlLFCtlFrmRrVirtCtlAval : int32_t {
    Not_Available = 0,
    Available = 1,
};

enum class StBkHrztlLFCtlFrmRrVirtCtlReq : int32_t {
    No_Request = 0,
    Forward = 1,
    Rearward = 2,
};

enum class StBkHrztlLRVirtCtlAllwd : int32_t {
    Not_Allowed = 0,
    Allowed = 1,
};

enum class StBkHrztlLRVirtCtlAval : int32_t {
    Not_Available = 0,
    Available = 1,
};

enum class StBkHrztlLRVirtCtlReq : int32_t {
    No_Request = 0,
    Forward = 1,
    Rearward = 2,
};

enum class StBkHrztlRFCtlFrmFrtVirtCtlAlwd : int32_t {
    Not_Allowed = 0,
    Allowed = 1,
};

enum class StBkHrztlRFCtlFrmFrtVirtCtlAval : int32_t {
    Not_Available = 0,
    Available = 1,
};

enum class StBkHrztlRFCtlFrmFrtVirtCtlReq : int32_t {
    No_Request = 0,
    Forward = 1,
    Rearward = 2,
};

enum class StBkHrztlRFCtlFrmRrVirtCtlAllwd : int32_t {
    Not_Allowed = 0,
    Allowed = 1,
};

enum class StBkHrztlRFCtlFrmRrVirtCtlAval : int32_t {
    Not_Available = 0,
    Available = 1,
};

enum class StBkHrztlRFCtlFrmRrVirtCtlReq : int32_t {
    No_Request = 0,
    Forward = 1,
    Rearward = 2,
};

enum class StBkHrztlRRVirtCtlAllwd : int32_t {
    Not_Allowed = 0,
    Allowed = 1,
};

enum class StBkHrztlRRVirtCtlAval : int32_t {
    Not_Available = 0,
    Available = 1,
};

enum class StBkHrztlRRVirtCtlReq : int32_t {
    No_Request = 0,
    Forward = 1,
    Rearward = 2,
};

enum class StBkLumbHrztlLFVirtCtlAllwd : int32_t {
    Not_Allowed = 0,
    Allowed = 1,
};

enum class StBkLumbHrztlLFVirtCtlAval : int32_t {
    Not_Available = 0,
    Available = 1,
};

enum class StBkLumbHrztlLFVirtCtlReq : int32_t {
    No_Request = 0,
    Forward = 1,
    Rearward = 2,
};

enum class StBkLumbHrztlLRVirtCtlAllwd : int32_t {
    Not_Allowed = 0,
    Allowed = 1,
};

enum class StBkLumbHrztlLRVirtCtlAval : int32_t {
    Not_Available = 0,
    Available = 1,
};

enum class StBkLumbHrztlLRVirtCtlReq : int32_t {
    No_Request = 0,
    Forward = 1,
    Rearward = 2,
};

enum class StBkLumbHrztlRFVirtCtlAllwd : int32_t {
    Not_Allowed = 0,
    Allowed = 1,
};

enum class StBkLumbHrztlRFVirtCtlAval : int32_t {
    Not_Available = 0,
    Available = 1,
};

enum class StBkLumbHrztlRFVirtCtlReq : int32_t {
    No_Request = 0,
    Forward = 1,
    Rearward = 2,
};

enum class StBkLumbHrztlRRVirtCtlAllwd : int32_t {
    Not_Allowed = 0,
    Allowed = 1,
};

enum class StBkLumbHrztlRRVirtCtlAval : int32_t {
    Not_Available = 0,
    Available = 1,
};

enum class StBkLumbHrztlRRVirtCtlReq : int32_t {
    No_Request = 0,
    Forward = 1,
    Rearward = 2,
};

enum class StBkLumbVertLFVirtCtlAllwd : int32_t {
    Not_Allowed = 0,
    Allowed = 1,
};

enum class StBkLumbVertLFVirtCtlAval : int32_t {
    Not_Available = 0,
    Available = 1,
};

enum class StBkLumbVertLFVirtCtlReq : int32_t {
    No_Request = 0,
    Up = 1,
    Down = 2,
};

enum class StBkLumbVertLRVirtCtlAllwd : int32_t {
    Not_Allowed = 0,
    Allowed = 1,
};

enum class StBkLumbVertLRVirtCtlAval : int32_t {
    Not_Available = 0,
    Available = 1,
};

enum class StBkLumbVertLRVirtCtlReq : int32_t {
    No_Request = 0,
    Up = 1,
    Down = 2,
};

enum class StBkLumbVertRFVirtCtlAllwd : int32_t {
    Not_Allowed = 0,
    Allowed = 1,
};

enum class StBkLumbVertRFVirtCtlAval : int32_t {
    Not_Available = 0,
    Available = 1,
};

enum class StBkLumbVertRFVirtCtlReq : int32_t {
    No_Request = 0,
    Up = 1,
    Down = 2,
};

enum class StBkLumbVertRRVirtCtlAllwd : int32_t {
    Not_Allowed = 0,
    Allowed = 1,
};

enum class StBkLumbVertRRVirtCtlAval : int32_t {
    Not_Available = 0,
    Available = 1,
};

enum class StBkLumbVertRRVirtCtlReq : int32_t {
    No_Request = 0,
    Up = 1,
    Down = 2,
};

enum class StBkSdBolsLFVirtCtlAllwd : int32_t {
    Not_Allowed = 0,
    Allowed = 1,
};

enum class StBkSdBolsLFVirtCtlAval : int32_t {
    Not_Available = 0,
    Available = 1,
};

enum class StBkSdBolsLFVirtCtlReq : int32_t {
    No_Request = 0,
    In = 1,
    Out = 2,
};

enum class StBkSdBolsLRVirtCtlAllwd : int32_t {
    Not_Allowed = 0,
    Allowed = 1,
};

enum class StBkSdBolsLRVirtCtlAval : int32_t {
    Not_Available = 0,
    Available = 1,
};

enum class StBkSdBolsLRVirtCtlReq : int32_t {
    No_Request = 0,
    In = 1,
    Out = 2,
};

enum class StBkSdBolsRFVirtCtlAllwd : int32_t {
    Not_Allowed = 0,
    Allowed = 1,
};

enum class StBkSdBolsRFVirtCtlAval : int32_t {
    Not_Available = 0,
    Available = 1,
};

enum class StBkSdBolsRFVirtCtlReq : int32_t {
    No_Request = 0,
    In = 1,
    Out = 2,
};

enum class StBkSdBolsRRVirtCtlAllwd : int32_t {
    Not_Allowed = 0,
    Allowed = 1,
};

enum class StBkSdBolsRRVirtCtlAval : int32_t {
    Not_Available = 0,
    Available = 1,
};

enum class StBkSdBolsRRVirtCtlReq : int32_t {
    No_Request = 0,
    In = 1,
    Out = 2,
};

enum class StBltRmndrChmEvntStat : int32_t {
    NO_ACTION = 0,
    ACTIVE = 1,
    CANCEL_CHIME = 2,
};

enum class StBltRmndrChmTyp2EvntStat : int32_t {
    No_Action = 0,
    Active = 1,
    Cancel_Chime = 2,
};

enum class StBltShfIntlkCstChgSetReq : int32_t {
    NO_ACTION = 0,
    OFF = 1,
    ON = 2,
    RESERVED_3 = 3,
    RESERVED_4 = 4,
    RESERVED_5 = 5,
    RESERVED_6 = 6,
    RESERVED_7 = 7,
};

enum class StBltShfIntlkCstCurrSetVal : int32_t {
    SETTING_UNKNOWN = 0,
    OFF = 1,
    ON = 2,
    RESERVED_3 = 3,
    RESERVED_4 = 4,
    RESERVED_5 = 5,
    RESERVED_6 = 6,
    RESERVED_7 = 7,
};

enum class StBltTghtngCstChgSetReq : int32_t {
    NO_ACTION = 0,
    OFF = 1,
    ON = 2,
    RESERVED_3 = 3,
    RESERVED_4 = 4,
    RESERVED_5 = 5,
    RESERVED_6 = 6,
    RESERVED_7 = 7,
};

enum class StBltTghtngCstCrStVal : int32_t {
    SETTING_UNKNOWN = 0,
    OFF = 1,
    ON = 2,
    RESERVED_3 = 3,
    RESERVED_4 = 4,
    RESERVED_5 = 5,
    RESERVED_6 = 6,
    RESERVED_7 = 7,
};

enum class StCushFrtVertLFVirtCtlAllwd : int32_t {
    Not_Allowed = 0,
    Allowed = 1,
};

enum class StCushFrtVertLFVirtCtlAval : int32_t {
    Not_Available = 0,
    Available = 1,
};

enum class StCushFrtVertLFVirtCtlReq : int32_t {
    No_Request = 0,
    Up = 1,
    Down = 2,
};

enum class StCushFrtVertLRVirtCtlAllwd : int32_t {
    Not_Allowed = 0,
    Allowed = 1,
};

enum class StCushFrtVertLRVirtCtlAval : int32_t {
    Not_Available = 0,
    Available = 1,
};

enum class StCushFrtVertLRVirtCtlReq : int32_t {
    No_Request = 0,
    Up = 1,
    Down = 2,
};

enum class StCushFrtVertRFVirtCtlAllwd : int32_t {
    Not_Allowed = 0,
    Allowed = 1,
};

enum class StCushFrtVertRFVirtCtlAval : int32_t {
    Not_Available = 0,
    Available = 1,
};

enum class StCushFrtVertRFVirtCtlReq : int32_t {
    No_Request = 0,
    Up = 1,
    Down = 2,
};

enum class StCushFrtVertRRVirtCtlAllwd : int32_t {
    Not_Allowed = 0,
    Allowed = 1,
};

enum class StCushFrtVertRRVirtCtlAval : int32_t {
    Not_Available = 0,
    Available = 1,
};

enum class StCushFrtVertRRVirtCtlReq : int32_t {
    No_Request = 0,
    Up = 1,
    Down = 2,
};

enum class StCushHrztlLFCtlFrmFrVirCtlAlwd : int32_t {
    Not_Allowed = 0,
    Allowed = 1,
};

enum class StCushHrztlLFCtlFrmFrVirtCtlAvl : int32_t {
    Not_Available = 0,
    Available = 1,
};

enum class StCushHrztlLFCtlFrmFrtVirtCtlRq : int32_t {
    No_Request = 0,
    Forward = 1,
    Rearward = 2,
};

enum class StCushHrztlLFCtlFrmRrVirCtlAlwd : int32_t {
    Not_Allowed = 0,
    Allowed = 1,
};

enum class StCushHrztlLFCtlFrmRrVirtCtlAvl : int32_t {
    Not_Available = 0,
    Available = 1,
};

enum class StCushHrztlLFCtlFrmRrVirtCtlReq : int32_t {
    No_Request = 0,
    Forward = 1,
    Rearward = 2,
};

enum class StCushHrztlLRVirtCtlAllwd : int32_t {
    Not_Allowed = 0,
    Allowed = 1,
};

enum class StCushHrztlLRVirtCtlAval : int32_t {
    Not_Available = 0,
    Available = 1,
};

enum class StCushHrztlLRVirtCtlReq : int32_t {
    No_Request = 0,
    Forward = 1,
    Rearward = 2,
};

enum class StCushHrztlRFCtlFrmFrVirCtlAlwd : int32_t {
    Not_Allowed = 0,
    Allowed = 1,
};

enum class StCushHrztlRFCtlFrmFrtVirCtlAvl : int32_t {
    Not_Available = 0,
    Available = 1,
};

enum class StCushHrztlRFCtlFrmFrtVirtCtlRq : int32_t {
    No_Request = 0,
    Forward = 1,
    Rearward = 2,
};

enum class StCushHrztlRFCtlFrmRrVirCtlAlwd : int32_t {
    Not_Allowed = 0,
    Allowed = 1,
};

enum class StCushHrztlRFCtlFrmRrVirtCtlAvl : int32_t {
    Not_Available = 0,
    Available = 1,
};

enum class StCushHrztlRFCtlFrmRrVirtCtlReq : int32_t {
    No_Request = 0,
    Forward = 1,
    Rearward = 2,
};

enum class StCushHrztlRRVirtCtlAllwd : int32_t {
    Not_Allowed = 0,
    Allowed = 1,
};

enum class StCushHrztlRRVirtCtlAval : int32_t {
    Not_Available = 0,
    Available = 1,
};

enum class StCushHrztlRRVirtCtlReq : int32_t {
    No_Request = 0,
    Forward = 1,
    Rearward = 2,
};

enum class StCushLgthHrztlLFVirtCtlAllwd : int32_t {
    Not_Allowed = 0,
    Allowed = 1,
};

enum class StCushLgthHrztlLFVirtCtlAval : int32_t {
    Not_Available = 0,
    Available = 1,
};

enum class StCushLgthHrztlLFVirtCtlReq : int32_t {
    No_Request = 0,
    Forward = 1,
    Rearward = 2,
};

enum class StCushLgthHrztlLRVirtCtlAllwd : int32_t {
    Not_Allowed = 0,
    Allowed = 1,
};

enum class StCushLgthHrztlLRVirtCtlAval : int32_t {
    Not_Available = 0,
    Available = 1,
};

enum class StCushLgthHrztlLRVirtCtlReq : int32_t {
    No_Request = 0,
    Forward = 1,
    Rearward = 2,
};

enum class StCushLgthHrztlRFVirtCtlAllwd : int32_t {
    Not_Allowed = 0,
    Allowed = 1,
};

enum class StCushLgthHrztlRFVirtCtlAval : int32_t {
    Not_Available = 0,
    Available = 1,
};

enum class StCushLgthHrztlRFVirtCtlReq : int32_t {
    No_Request = 0,
    Forward = 1,
    Rearward = 2,
};

enum class StCushLgthHrztlRRVirtCtlAllwd : int32_t {
    Not_Allowed = 0,
    Allowed = 1,
};

enum class StCushLgthHrztlRRVirtCtlAval : int32_t {
    Not_Available = 0,
    Available = 1,
};

enum class StCushLgthHrztlRRVirtCtlReq : int32_t {
    No_Request = 0,
    Forward = 1,
    Rearward = 2,
};

enum class StCushRrVertLFVirtCtlAllwd : int32_t {
    Not_Allowed = 0,
    Allowed = 1,
};

enum class StCushRrVertLFVirtCtlAval : int32_t {
    Not_Available = 0,
    Available = 1,
};

enum class StCushRrVertLFVirtCtlReq : int32_t {
    No_Request = 0,
    Up = 1,
    Down = 2,
};

enum class StCushRrVertLRVirtCtlAllwd : int32_t {
    Not_Allowed = 0,
    Allowed = 1,
};

enum class StCushRrVertLRVirtCtlAval : int32_t {
    Not_Available = 0,
    Available = 1,
};

enum class StCushRrVertLRVirtCtlReq : int32_t {
    No_Request = 0,
    Up = 1,
    Down = 2,
};

enum class StCushRrVertRFVirtCtlAllwd : int32_t {
    Not_Allowed = 0,
    Allowed = 1,
};

enum class StCushRrVertRFVirtCtlAval : int32_t {
    Not_Available = 0,
    Available = 1,
};

enum class StCushRrVertRFVirtCtlReq : int32_t {
    No_Request = 0,
    Up = 1,
    Down = 2,
};

enum class StCushRrVertRRVirtCtlAllwd : int32_t {
    Not_Allowed = 0,
    Allowed = 1,
};

enum class StCushRrVertRRVirtCtlAval : int32_t {
    Not_Available = 0,
    Available = 1,
};

enum class StCushRrVertRRVirtCtlReq : int32_t {
    No_Request = 0,
    Up = 1,
    Down = 2,
};

enum class StCushSdBolsLFVirtCtlAllwd : int32_t {
    Not_Allowed = 0,
    Allowed = 1,
};

enum class StCushSdBolsLFVirtCtlAval : int32_t {
    Not_Available = 0,
    Available = 1,
};

enum class StCushSdBolsLFVirtCtlReq : int32_t {
    No_Request = 0,
    In = 1,
    Out = 2,
};

enum class StCushSdBolsLRVirtCtlAllwd : int32_t {
    Not_Allowed = 0,
    Allowed = 1,
};

enum class StCushSdBolsLRVirtCtlAval : int32_t {
    Not_Available = 0,
    Available = 1,
};

enum class StCushSdBolsLRVirtCtlReq : int32_t {
    No_Request = 0,
    In = 1,
    Out = 2,
};

enum class StCushSdBolsRFVirtCtlAllwd : int32_t {
    Not_Allowed = 0,
    Allowed = 1,
};

enum class StCushSdBolsRFVirtCtlAval : int32_t {
    Not_Available = 0,
    Available = 1,
};

enum class StCushSdBolsRFVirtCtlReq : int32_t {
    No_Request = 0,
    In = 1,
    Out = 2,
};

enum class StCushSdBolsRRVirtCtlAllwd : int32_t {
    Not_Allowed = 0,
    Allowed = 1,
};

enum class StCushSdBolsRRVirtCtlAval : int32_t {
    Not_Available = 0,
    Available = 1,
};

enum class StCushSdBolsRRVirtCtlReq : int32_t {
    No_Request = 0,
    In = 1,
    Out = 2,
};

enum class StHdrstHrztlLFVirtCtlAllwd : int32_t {
    Not_Allowed = 0,
    Allowed = 1,
};

enum class StHdrstHrztlLFVirtCtlAval : int32_t {
    Not_Available = 0,
    Available = 1,
};

enum class StHdrstHrztlLFVirtCtlReq : int32_t {
    No_Request = 0,
    Forward = 1,
    Rearward = 2,
};

enum class StHdrstHrztlLRVirtCtlAllwd : int32_t {
    Not_Allowed = 0,
    Allowed = 1,
};

enum class StHdrstHrztlLRVirtCtlAval : int32_t {
    Not_Available = 0,
    Available = 1,
};

enum class StHdrstHrztlLRVirtCtlReq : int32_t {
    No_Request = 0,
    Forward = 1,
    Rearward = 2,
};

enum class StHdrstHrztlRFVirtCtlAllwd : int32_t {
    Not_Allowed = 0,
    Allowed = 1,
};

enum class StHdrstHrztlRFVirtCtlAval : int32_t {
    Not_Available = 0,
    Available = 1,
};

enum class StHdrstHrztlRFVirtCtlReq : int32_t {
    No_Request = 0,
    Forward = 1,
    Rearward = 2,
};

enum class StHdrstHrztlRRVirtCtlAllwd : int32_t {
    Not_Allowed = 0,
    Allowed = 1,
};

enum class StHdrstHrztlRRVirtCtlAval : int32_t {
    Not_Available = 0,
    Available = 1,
};

enum class StHdrstHrztlRRVirtCtlReq : int32_t {
    No_Request = 0,
    Forward = 1,
    Rearward = 2,
};

enum class StHdrstVertLFVirtCtlAllwd : int32_t {
    Not_Allowed = 0,
    Allowed = 1,
};

enum class StHdrstVertLFVirtCtlAval : int32_t {
    Not_Available = 0,
    Available = 1,
};

enum class StHdrstVertLFVirtCtlReq : int32_t {
    No_Request = 0,
    Up = 1,
    Down = 2,
};

enum class StHdrstVertLRVirtCtlAllwd : int32_t {
    Not_Allowed = 0,
    Allowed = 1,
};

enum class StHdrstVertLRVirtCtlAval : int32_t {
    Not_Available = 0,
    Available = 1,
};

enum class StHdrstVertLRVirtCtlReq : int32_t {
    No_Request = 0,
    Up = 1,
    Down = 2,
};

enum class StHdrstVertRFVirtCtlAllwd : int32_t {
    Not_Allowed = 0,
    Allowed = 1,
};

enum class StHdrstVertRFVirtCtlAval : int32_t {
    Not_Available = 0,
    Available = 1,
};

enum class StHdrstVertRFVirtCtlReq : int32_t {
    No_Request = 0,
    Up = 1,
    Down = 2,
};

enum class StHdrstVertRRVirtCtlAllwd : int32_t {
    Not_Allowed = 0,
    Allowed = 1,
};

enum class StHdrstVertRRVirtCtlAval : int32_t {
    Not_Available = 0,
    Available = 1,
};

enum class StHdrstVertRRVirtCtlReq : int32_t {
    No_Request = 0,
    Up = 1,
    Down = 2,
};

enum class StHtdBkLvlLFSet : int32_t {
    Off = 0,
    Low = 1,
    Medium = 2,
    High = 3,
};

enum class StHtdBkLvlLFVirtCtlReq : int32_t {
    No_Request = 0,
    Off = 1,
    Low = 2,
    Medium = 3,
    High = 4,
};

enum class StHtdBkLvlLRSet : int32_t {
    Off = 0,
    Low = 1,
    Medium = 2,
    High = 3,
};

enum class StHtdBkLvlLRVirtCtlReq : int32_t {
    No_Request = 0,
    Off = 1,
    Low = 2,
    Medium = 3,
    High = 4,
};

enum class StHtdBkLvlRFSet : int32_t {
    Off = 0,
    Low = 1,
    Medium = 2,
    High = 3,
};

enum class StHtdBkLvlRFVirtCtlReq : int32_t {
    No_Request = 0,
    Off = 1,
    Low = 2,
    Medium = 3,
    High = 4,
};

enum class StHtdBkLvlRRSet : int32_t {
    Off = 0,
    Low = 1,
    Medium = 2,
    High = 3,
};

enum class StHtdBkLvlRRVirtCtlReq : int32_t {
    No_Request = 0,
    Off = 1,
    Low = 2,
    Medium = 3,
    High = 4,
};

enum class StHtdCushLvlLFSet : int32_t {
    Off = 0,
    Low = 1,
    Medium = 2,
    High = 3,
};

enum class StHtdCushLvlLFVirtCtlReq : int32_t {
    No_Request = 0,
    Off = 1,
    Low = 2,
    Medium = 3,
    High = 4,
};

enum class StHtdCushLvlLRSet : int32_t {
    Off = 0,
    Low = 1,
    Medium = 2,
    High = 3,
};

enum class StHtdCushLvlLRVirtCtlReq : int32_t {
    No_Request = 0,
    Off = 1,
    Low = 2,
    Medium = 3,
    High = 4,
};

enum class StHtdCushLvlRFSet : int32_t {
    Off = 0,
    Low = 1,
    Medium = 2,
    High = 3,
};

enum class StHtdCushLvlRFVirtCtlReq : int32_t {
    No_Request = 0,
    Off = 1,
    Low = 2,
    Medium = 3,
    High = 4,
};

enum class StHtdCushLvlRRSet : int32_t {
    Off = 0,
    Low = 1,
    Medium = 2,
    High = 3,
};

enum class StHtdCushLvlRRVirtCtlReq : int32_t {
    No_Request = 0,
    Off = 1,
    Low = 2,
    Medium = 3,
    High = 4,
};

enum class StHtdFrtNumLvlAval : int32_t {
    Not_Available = 0,
    Two_Levels = 1,
    Three_Levels = 2,
    Four_Levels = 3,
};

enum class StHtdRrNumLvlAval : int32_t {
    Not_Available = 0,
    Two_Levels = 1,
    Three_Levels = 2,
    Four_Levels = 3,
};

enum class StLckoutLRCtlCurrSet : int32_t {
    Unknown = 0,
    Locked_Out = 1,
    Not_Locked_Out = 2,
};

enum class StLckoutLRVirtCtlAval : int32_t {
    Not_Available = 0,
    Available = 1,
};

enum class StLckoutLRVirtCtlReq : int32_t {
    No_Request = 0,
    Locked_Out = 1,
    Not_Locked_Out = 2,
};

enum class StLckoutRRCtlCurrSet : int32_t {
    Unknown = 0,
    Locked_Out = 1,
    Not_Locked_Out = 2,
};

enum class StLckoutRRVirtCtlAval : int32_t {
    Not_Available = 0,
    Available = 1,
};

enum class StLckoutRRVirtCtlReq : int32_t {
    No_Request = 0,
    Locked_Out = 1,
    Not_Locked_Out = 2,
};

enum class StMasgIntstyLFLstKnwnSet : int32_t {
    Massage_Off = 0,
    Intensity_1 = 1,
    Intensity_2 = 2,
    Intensity_3 = 3,
    Intensity_4 = 4,
    Intensity_5 = 5,
    Intensity_6 = 6,
    Intensity_7 = 7,
};

enum class StMasgIntstyLFVirtCtlReq : int32_t {
    No_Request = 0,
    Massage_Off = 1,
    Intensity_1 = 2,
    Intensity_2 = 3,
    Intensity_3 = 4,
    Intensity_4 = 5,
    Intensity_5 = 6,
    Intensity_6 = 7,
    Intensity_7 = 8,
};

enum class StMasgIntstyLRLstKnwnSet : int32_t {
    Massage_Off = 0,
    Intensity_1 = 1,
    Intensity_2 = 2,
    Intensity_3 = 3,
    Intensity_4 = 4,
    Intensity_5 = 5,
    Intensity_6 = 6,
    Intensity_7 = 7,
};

enum class StMasgIntstyLRVirtCtlReq : int32_t {
    No_Request = 0,
    Massage_Off = 1,
    Intensity_1 = 2,
    Intensity_2 = 3,
    Intensity_3 = 4,
    Intensity_4 = 5,
    Intensity_5 = 6,
    Intensity_6 = 7,
    Intensity_7 = 8,
};

enum class StMasgIntstyRFLstKnwnSet : int32_t {
    Massage_Off = 0,
    Intensity_1 = 1,
    Intensity_2 = 2,
    Intensity_3 = 3,
    Intensity_4 = 4,
    Intensity_5 = 5,
    Intensity_6 = 6,
    Intensity_7 = 7,
};

enum class StMasgIntstyRFVirtCtlReq : int32_t {
    No_Request = 0,
    Massage_Off = 1,
    Intensity_1 = 2,
    Intensity_2 = 3,
    Intensity_3 = 4,
    Intensity_4 = 5,
    Intensity_5 = 6,
    Intensity_6 = 7,
    Intensity_7 = 8,
};

enum class StMasgIntstyRRLstKnwnSet : int32_t {
    Massage_Off = 0,
    Intensity_1 = 1,
    Intensity_2 = 2,
    Intensity_3 = 3,
    Intensity_4 = 4,
    Intensity_5 = 5,
    Intensity_6 = 6,
    Intensity_7 = 7,
};

enum class StMasgIntstyRRVirtCtlReq : int32_t {
    No_Request = 0,
    Massage_Off = 1,
    Intensity_1 = 2,
    Intensity_2 = 3,
    Intensity_3 = 4,
    Intensity_4 = 5,
    Intensity_5 = 6,
    Intensity_6 = 7,
    Intensity_7 = 8,
};

enum class StMasgLFVirtCtlAllwd : int32_t {
    Not_Allowed = 0,
    Allowed = 1,
};

enum class StMasgLRVirtCtlAllwd : int32_t {
    Not_Allowed = 0,
    Allowed = 1,
};

enum class StMasgRFVirtCtlAllwd : int32_t {
    Not_Allowed = 0,
    Allowed = 1,
};

enum class StMasgRRVirtCtlAllwd : int32_t {
    Not_Allowed = 0,
    Allowed = 1,
};

enum class StMasgTyp10LFVirtCtlAval : int32_t {
    Not_Available = 0,
    Available = 1,
};

enum class StMasgTyp10LRVirtCtlAval : int32_t {
    Not_Available = 0,
    Available = 1,
};

enum class StMasgTyp10RFVirtCtlAval : int32_t {
    Not_Available = 0,
    Available = 1,
};

enum class StMasgTyp10RRVirtCtlAval : int32_t {
    Not_Available = 0,
    Available = 1,
};

enum class StMasgTyp11LFVirtCtlAval : int32_t {
    Not_Available = 0,
    Available = 1,
};

enum class StMasgTyp11LRVirtCtlAval : int32_t {
    Not_Available = 0,
    Available = 1,
};

enum class StMasgTyp11RFVirtCtlAval : int32_t {
    Not_Available = 0,
    Available = 1,
};

enum class StMasgTyp11RRVirtCtlAval : int32_t {
    Not_Available = 0,
    Available = 1,
};

enum class StMasgTyp12LFVirtCtlAval : int32_t {
    Not_Available = 0,
    Available = 1,
};

enum class StMasgTyp12LRVirtCtlAval : int32_t {
    Not_Available = 0,
    Available = 1,
};

enum class StMasgTyp12RFVirtCtlAval : int32_t {
    Not_Available = 0,
    Available = 1,
};

enum class StMasgTyp12RRVirtCtlAval : int32_t {
    Not_Available = 0,
    Available = 1,
};

enum class StMasgTyp13LFVirtCtlAval : int32_t {
    Not_Available = 0,
    Available = 1,
};

enum class StMasgTyp13LRVirtCtlAval : int32_t {
    Not_Available = 0,
    Available = 1,
};

enum class StMasgTyp13RFVirtCtlAval : int32_t {
    Not_Available = 0,
    Available = 1,
};

enum class StMasgTyp13RRVirtCtlAval : int32_t {
    Not_Available = 0,
    Available = 1,
};

enum class StMasgTyp14LFVirtCtlAval : int32_t {
    Not_Available = 0,
    Available = 1,
};

enum class StMasgTyp14LRVirtCtlAval : int32_t {
    Not_Available = 0,
    Available = 1,
};

enum class StMasgTyp14RFVirtCtlAval : int32_t {
    Not_Available = 0,
    Available = 1,
};

enum class StMasgTyp14RRVirtCtlAval : int32_t {
    Not_Available = 0,
    Available = 1,
};

enum class StMasgTyp15LFVirtCtlAval : int32_t {
    Not_Available = 0,
    Available = 1,
};

enum class StMasgTyp15LRVirtCtlAval : int32_t {
    Not_Available = 0,
    Available = 1,
};

enum class StMasgTyp15RFVirtCtlAval : int32_t {
    Not_Available = 0,
    Available = 1,
};

enum class StMasgTyp15RRVirtCtlAval : int32_t {
    Not_Available = 0,
    Available = 1,
};

enum class StMasgTyp1LFVirtCtlAval : int32_t {
    Not_Available = 0,
    Available = 1,
};

enum class StMasgTyp1LRVirtCtlAval : int32_t {
    Not_Available = 0,
    Available = 1,
};

enum class StMasgTyp1RFVirtCtlAval : int32_t {
    Not_Available = 0,
    Available = 1,
};

enum class StMasgTyp1RRVirtCtlAval : int32_t {
    Not_Available = 0,
    Available = 1,
};

enum class StMasgTyp2LFVirtCtlAval : int32_t {
    Not_Available = 0,
    Available = 1,
};

enum class StMasgTyp2LRVirtCtlAval : int32_t {
    Not_Available = 0,
    Available = 1,
};

enum class StMasgTyp2RFVirtCtlAval : int32_t {
    Not_Available = 0,
    Available = 1,
};

enum class StMasgTyp2RRVirtCtlAval : int32_t {
    Not_Available = 0,
    Available = 1,
};

enum class StMasgTyp3LFVirtCtlAval : int32_t {
    Not_Available = 0,
    Available = 1,
};

enum class StMasgTyp3LRVirtCtlAval : int32_t {
    Not_Available = 0,
    Available = 1,
};

enum class StMasgTyp3RFVirtCtlAval : int32_t {
    Not_Available = 0,
    Available = 1,
};

enum class StMasgTyp3RRVirtCtlAval : int32_t {
    Not_Available = 0,
    Available = 1,
};

enum class StMasgTyp4LFVirtCtlAval : int32_t {
    Not_Available = 0,
    Available = 1,
};

enum class StMasgTyp4LRVirtCtlAval : int32_t {
    Not_Available = 0,
    Available = 1,
};

enum class StMasgTyp4RFVirtCtlAval : int32_t {
    Not_Available = 0,
    Available = 1,
};

enum class StMasgTyp4RRVirtCtlAval : int32_t {
    Not_Available = 0,
    Available = 1,
};

enum class StMasgTyp5LFVirtCtlAval : int32_t {
    Not_Available = 0,
    Available = 1,
};

enum class StMasgTyp5LRVirtCtlAval : int32_t {
    Not_Available = 0,
    Available = 1,
};

enum class StMasgTyp5RFVirtCtlAval : int32_t {
    Not_Available = 0,
    Available = 1,
};

enum class StMasgTyp5RRVirtCtlAval : int32_t {
    Not_Available = 0,
    Available = 1,
};

enum class StMasgTyp6LFVirtCtlAval : int32_t {
    Not_Available = 0,
    Available = 1,
};

enum class StMasgTyp6LRVirtCtlAval : int32_t {
    Not_Available = 0,
    Available = 1,
};

enum class StMasgTyp6RFVirtCtlAval : int32_t {
    Not_Available = 0,
    Available = 1,
};

enum class StMasgTyp6RRVirtCtlAval : int32_t {
    Not_Available = 0,
    Available = 1,
};

enum class StMasgTyp7LFVirtCtlAval : int32_t {
    Not_Available = 0,
    Available = 1,
};

enum class StMasgTyp7LRVirtCtlAval : int32_t {
    Not_Available = 0,
    Available = 1,
};

enum class StMasgTyp7RFVirtCtlAval : int32_t {
    Not_Available = 0,
    Available = 1,
};

enum class StMasgTyp7RRVirtCtlAval : int32_t {
    Not_Available = 0,
    Available = 1,
};

enum class StMasgTyp8LFVirtCtlAval : int32_t {
    Not_Available = 0,
    Available = 1,
};

enum class StMasgTyp8LRVirtCtlAval : int32_t {
    Not_Available = 0,
    Available = 1,
};

enum class StMasgTyp8RFVirtCtlAval : int32_t {
    Not_Available = 0,
    Available = 1,
};

enum class StMasgTyp8RRVirtCtlAval : int32_t {
    Not_Available = 0,
    Available = 1,
};

enum class StMasgTyp9LFVirtCtlAval : int32_t {
    Not_Available = 0,
    Available = 1,
};

enum class StMasgTyp9LRVirtCtlAval : int32_t {
    Not_Available = 0,
    Available = 1,
};

enum class StMasgTyp9RFVirtCtlAval : int32_t {
    Not_Available = 0,
    Available = 1,
};

enum class StMasgTyp9RRVirtCtlAval : int32_t {
    Not_Available = 0,
    Available = 1,
};

enum class StMasgTypLFLstKnwnSet : int32_t {
    Massage_Off = 0,
    Type_1 = 1,
    Type_2 = 2,
    Type_3 = 3,
    Type_4 = 4,
    Type_5 = 5,
    Type_6 = 6,
    Type_7 = 7,
    Type_8 = 8,
    Type_9 = 9,
    Type_10 = 10,
    Type_11 = 11,
    Type_12 = 12,
    Type_13 = 13,
    Type_14 = 14,
    Type_15 = 15,
};

enum class StMasgTypLFVirtCtlReq : int32_t {
    No_Request = 0,
    Massage_Off = 1,
    Type_1 = 2,
    Type_2 = 3,
    Type_3 = 4,
    Type_4 = 5,
    Type_5 = 6,
    Type_6 = 7,
    Type_7 = 8,
    Type_8 = 9,
    Type_9 = 10,
    Type_10 = 11,
    Type_11 = 12,
    Type_12 = 13,
    Type_13 = 14,
    Type_14 = 15,
    Type_15 = 16,
};

enum class StMasgTypLRLstKnwnSet : int32_t {
    Massage_Off = 0,
    Type_1 = 1,
    Type_2 = 2,
    Type_3 = 3,
    Type_4 = 4,
    Type_5 = 5,
    Type_6 = 6,
    Type_7 = 7,
    Type_8 = 8,
    Type_9 = 9,
    Type_10 = 10,
    Type_11 = 11,
    Type_12 = 12,
    Type_13 = 13,
    Type_14 = 14,
    Type_15 = 15,
};

enum class StMasgTypLRVirtCtlReq : int32_t {
    No_Request = 0,
    Massage_Off = 1,
    Type_1 = 2,
    Type_2 = 3,
    Type_3 = 4,
    Type_4 = 5,
    Type_5 = 6,
    Type_6 = 7,
    Type_7 = 8,
    Type_8 = 9,
    Type_9 = 10,
    Type_10 = 11,
    Type_11 = 12,
    Type_12 = 13,
    Type_13 = 14,
    Type_14 = 15,
    Type_15 = 16,
};

enum class StMasgTypRFLstKnwnSet : int32_t {
    Massage_Off = 0,
    Type_1 = 1,
    Type_2 = 2,
    Type_3 = 3,
    Type_4 = 4,
    Type_5 = 5,
    Type_6 = 6,
    Type_7 = 7,
    Type_8 = 8,
    Type_9 = 9,
    Type_10 = 10,
    Type_11 = 11,
    Type_12 = 12,
    Type_13 = 13,
    Type_14 = 14,
    Type_15 = 15,
};

enum class StMasgTypRFVirtCtlReq : int32_t {
    No_Request = 0,
    Massage_Off = 1,
    Type_1 = 2,
    Type_2 = 3,
    Type_3 = 4,
    Type_4 = 5,
    Type_5 = 6,
    Type_6 = 7,
    Type_7 = 8,
    Type_8 = 9,
    Type_9 = 10,
    Type_10 = 11,
    Type_11 = 12,
    Type_12 = 13,
    Type_13 = 14,
    Type_14 = 15,
    Type_15 = 16,
};

enum class StMasgTypRRLstKnwnSet : int32_t {
    Massage_Off = 0,
    Type_1 = 1,
    Type_2 = 2,
    Type_3 = 3,
    Type_4 = 4,
    Type_5 = 5,
    Type_6 = 6,
    Type_7 = 7,
    Type_8 = 8,
    Type_9 = 9,
    Type_10 = 10,
    Type_11 = 11,
    Type_12 = 12,
    Type_13 = 13,
    Type_14 = 14,
    Type_15 = 15,
};

enum class StMasgTypRRVirtCtlReq : int32_t {
    No_Request = 0,
    Massage_Off = 1,
    Type_1 = 2,
    Type_2 = 3,
    Type_3 = 4,
    Type_4 = 5,
    Type_5 = 6,
    Type_6 = 7,
    Type_7 = 8,
    Type_8 = 9,
    Type_9 = 10,
    Type_10 = 11,
    Type_11 = 12,
    Type_12 = 13,
    Type_13 = 14,
    Type_14 = 15,
    Type_15 = 16,
};

enum class StMemLFVirtCtlNumofExtPstnsAval : int32_t {
    Not_Available = 0,
    One_Positions = 1,
    Two_Positions = 2,
    Three_Positions = 3,
    Four_Positions = 4,
    Five_Positions = 5,
    Six_Positions = 6,
    Seven_Positions = 7,
    Eight_Positions = 8,
};

enum class StMemLFVirtCtlNumofMemPstnsAval : int32_t {
    Not_Available = 0,
    One_Positions = 1,
    Two_Positions = 2,
    Three_Positions = 3,
    Four_Positions = 4,
    Five_Positions = 5,
    Six_Positions = 6,
    Seven_Positions = 7,
    Eight_Positions = 8,
};

enum class StMemLFVirtCtlRclAllwd : int32_t {
    Not_Allowed = 0,
    Allowed = 1,
};

enum class StMemLFVirtCtlReq : int32_t {
    No_Request = 0,
    Store_Mem_1 = 1,
    Store_Mem_2 = 2,
    Store_Mem_3 = 3,
    Store_Mem_4 = 4,
    Store_Mem_5 = 5,
    Store_Mem_6 = 6,
    Store_Mem_7 = 7,
    Store_Mem_8 = 8,
    Store_Exit_1 = 9,
    Store_Exit_2 = 10,
    Store_Exit_3 = 11,
    Store_Exit_4 = 12,
    Store_Exit_5 = 13,
    Store_Exit_6 = 14,
    Store_Exit_7 = 15,
    Store_Exit_8 = 16,
    Recall_Mem_1 = 17,
    Recall_Mem_2 = 18,
    Recall_Mem_3 = 19,
    Recall_Mem_4 = 20,
    Recall_Mem_5 = 21,
    Recall_Mem_6 = 22,
    Recall_Mem_7 = 23,
    Recall_Mem_8 = 24,
    Recall_Exit_1 = 25,
    Recall_Exit_2 = 26,
    Recall_Exit_3 = 27,
    Recall_Exit_4 = 28,
    Recall_Exit_5 = 29,
    Recall_Exit_6 = 30,
    Recall_Exit_7 = 31,
    Recall_Exit_8 = 32,
    Stop_All_Movement = 33,
};

enum class StMemLFVirtCtlStorAllwd : int32_t {
    Not_Allowed = 0,
    Allowed = 1,
};

enum class StMemLRVirtCtlNumofExtPstnsAval : int32_t {
    Not_Available = 0,
    One_Positions = 1,
    Two_Positions = 2,
    Three_Positions = 3,
    Four_Positions = 4,
    Five_Positions = 5,
    Six_Positions = 6,
    Seven_Positions = 7,
    Eight_Positions = 8,
};

enum class StMemLRVirtCtlNumofMemPstnsAval : int32_t {
    Not_Available = 0,
    One_Positions = 1,
    Two_Positions = 2,
    Three_Positions = 3,
    Four_Positions = 4,
    Five_Positions = 5,
    Six_Positions = 6,
    Seven_Positions = 7,
    Eight_Positions = 8,
};

enum class StMemLRVirtCtlRclAllwd : int32_t {
    Not_Allowed = 0,
    Allowed = 1,
};

enum class StMemLRVirtCtlReq : int32_t {
    No_Request = 0,
    Store_Mem_1 = 1,
    Store_Mem_2 = 2,
    Store_Mem_3 = 3,
    Store_Mem_4 = 4,
    Store_Mem_5 = 5,
    Store_Mem_6 = 6,
    Store_Mem_7 = 7,
    Store_Mem_8 = 8,
    Store_Exit_1 = 9,
    Store_Exit_2 = 10,
    Store_Exit_3 = 11,
    Store_Exit_4 = 12,
    Store_Exit_5 = 13,
    Store_Exit_6 = 14,
    Store_Exit_7 = 15,
    Store_Exit_8 = 16,
    Recall_Mem_1 = 17,
    Recall_Mem_2 = 18,
    Recall_Mem_3 = 19,
    Recall_Mem_4 = 20,
    Recall_Mem_5 = 21,
    Recall_Mem_6 = 22,
    Recall_Mem_7 = 23,
    Recall_Mem_8 = 24,
    Recall_Exit_1 = 25,
    Recall_Exit_2 = 26,
    Recall_Exit_3 = 27,
    Recall_Exit_4 = 28,
    Recall_Exit_5 = 29,
    Recall_Exit_6 = 30,
    Recall_Exit_7 = 31,
    Recall_Exit_8 = 32,
    Stop_All_Movement = 33,
};

enum class StMemLRVirtCtlStorAllwd : int32_t {
    Not_Allowed = 0,
    Allowed = 1,
};

enum class StMemRFVirtCtlNumofExtPstnsAval : int32_t {
    Not_Available = 0,
    One_Positions = 1,
    Two_Positions = 2,
    Three_Positions = 3,
    Four_Positions = 4,
    Five_Positions = 5,
    Six_Positions = 6,
    Seven_Positions = 7,
    Eight_Positions = 8,
};

enum class StMemRFVirtCtlNumofMemPstnsAval : int32_t {
    Not_Available = 0,
    One_Positions = 1,
    Two_Positions = 2,
    Three_Positions = 3,
    Four_Positions = 4,
    Five_Positions = 5,
    Six_Positions = 6,
    Seven_Positions = 7,
    Eight_Positions = 8,
};

enum class StMemRFVirtCtlRclAllwd : int32_t {
    Not_Allowed = 0,
    Allowed = 1,
};

enum class StMemRFVirtCtlReq : int32_t {
    No_Request = 0,
    Store_Mem_1 = 1,
    Store_Mem_2 = 2,
    Store_Mem_3 = 3,
    Store_Mem_4 = 4,
    Store_Mem_5 = 5,
    Store_Mem_6 = 6,
    Store_Mem_7 = 7,
    Store_Mem_8 = 8,
    Store_Exit_1 = 9,
    Store_Exit_2 = 10,
    Store_Exit_3 = 11,
    Store_Exit_4 = 12,
    Store_Exit_5 = 13,
    Store_Exit_6 = 14,
    Store_Exit_7 = 15,
    Store_Exit_8 = 16,
    Recall_Mem_1 = 17,
    Recall_Mem_2 = 18,
    Recall_Mem_3 = 19,
    Recall_Mem_4 = 20,
    Recall_Mem_5 = 21,
    Recall_Mem_6 = 22,
    Recall_Mem_7 = 23,
    Recall_Mem_8 = 24,
    Recall_Exit_1 = 25,
    Recall_Exit_2 = 26,
    Recall_Exit_3 = 27,
    Recall_Exit_4 = 28,
    Recall_Exit_5 = 29,
    Recall_Exit_6 = 30,
    Recall_Exit_7 = 31,
    Recall_Exit_8 = 32,
    Stop_All_Movement = 33,
};

enum class StMemRFVirtCtlStorAllwd : int32_t {
    Not_Allowed = 0,
    Allowed = 1,
};

enum class StMemRRVirtCtlNumofExtPstnsAval : int32_t {
    Not_Available = 0,
    One_Positions = 1,
    Two_Positions = 2,
    Three_Positions = 3,
    Four_Positions = 4,
    Five_Positions = 5,
    Six_Positions = 6,
    Seven_Positions = 7,
    Eight_Positions = 8,
};

enum class StMemRRVirtCtlNumofMemPstnsAval : int32_t {
    Not_Available = 0,
    One_Positions = 1,
    Two_Positions = 2,
    Three_Positions = 3,
    Four_Positions = 4,
    Five_Positions = 5,
    Six_Positions = 6,
    Seven_Positions = 7,
    Eight_Positions = 8,
};

enum class StMemRRVirtCtlRclAllwd : int32_t {
    Not_Allowed = 0,
    Allowed = 1,
};

enum class StMemRRVirtCtlReq : int32_t {
    No_Request = 0,
    Store_Mem_1 = 1,
    Store_Mem_2 = 2,
    Store_Mem_3 = 3,
    Store_Mem_4 = 4,
    Store_Mem_5 = 5,
    Store_Mem_6 = 6,
    Store_Mem_7 = 7,
    Store_Mem_8 = 8,
    Store_Exit_1 = 9,
    Store_Exit_2 = 10,
    Store_Exit_3 = 11,
    Store_Exit_4 = 12,
    Store_Exit_5 = 13,
    Store_Exit_6 = 14,
    Store_Exit_7 = 15,
    Store_Exit_8 = 16,
    Recall_Mem_1 = 17,
    Recall_Mem_2 = 18,
    Recall_Mem_3 = 19,
    Recall_Mem_4 = 20,
    Recall_Mem_5 = 21,
    Recall_Mem_6 = 22,
    Recall_Mem_7 = 23,
    Recall_Mem_8 = 24,
    Recall_Exit_1 = 25,
    Recall_Exit_2 = 26,
    Recall_Exit_3 = 27,
    Recall_Exit_4 = 28,
    Recall_Exit_5 = 29,
    Recall_Exit_6 = 30,
    Recall_Exit_7 = 31,
    Recall_Exit_8 = 32,
    Stop_All_Movement = 33,
};

enum class StMemRRVirtCtlStorAllwd : int32_t {
    Not_Allowed = 0,
    Allowed = 1,
};

enum class StUpprShldrHrztlLFVirtCtlAllwd : int32_t {
    Not_Allowed = 0,
    Allowed = 1,
};

enum class StUpprShldrHrztlLFVirtCtlAval : int32_t {
    Not_Available = 0,
    Available = 1,
};

enum class StUpprShldrHrztlLFVirtCtlReq : int32_t {
    No_Request = 0,
    Forward = 1,
    Rearward = 2,
};

enum class StUpprShldrHrztlLRVirtCtlAllwd : int32_t {
    Not_Allowed = 0,
    Allowed = 1,
};

enum class StUpprShldrHrztlLRVirtCtlAval : int32_t {
    Not_Available = 0,
    Available = 1,
};

enum class StUpprShldrHrztlLRVirtCtlReq : int32_t {
    No_Request = 0,
    Forward = 1,
    Rearward = 2,
};

enum class StUpprShldrHrztlRFVirtCtlAllwd : int32_t {
    Not_Allowed = 0,
    Allowed = 1,
};

enum class StUpprShldrHrztlRFVirtCtlAval : int32_t {
    Not_Available = 0,
    Available = 1,
};

enum class StUpprShldrHrztlRFVirtCtlReq : int32_t {
    No_Request = 0,
    Forward = 1,
    Rearward = 2,
};

enum class StUpprShldrHrztlRRVirtCtlAllwd : int32_t {
    Not_Allowed = 0,
    Allowed = 1,
};

enum class StUpprShldrHrztlRRVirtCtlAval : int32_t {
    Not_Available = 0,
    Available = 1,
};

enum class StUpprShldrHrztlRRVirtCtlReq : int32_t {
    No_Request = 0,
    Forward = 1,
    Rearward = 2,
};

enum class StVntdCoolBkLvlLFSet : int32_t {
    Off = 0,
    Low = 1,
    Medium = 2,
    High = 3,
};

enum class StVntdCoolBkLvlLFVirtCtlReq : int32_t {
    No_Request = 0,
    Off = 1,
    Low = 2,
    Medium = 3,
    High = 4,
};

enum class StVntdCoolBkLvlLRSet : int32_t {
    Off = 0,
    Low = 1,
    Medium = 2,
    High = 3,
};

enum class StVntdCoolBkLvlLRVirtCtlReq : int32_t {
    No_Request = 0,
    Off = 1,
    Low = 2,
    Medium = 3,
    High = 4,
};

enum class StVntdCoolBkLvlRFSet : int32_t {
    Off = 0,
    Low = 1,
    Medium = 2,
    High = 3,
};

enum class StVntdCoolBkLvlRFVirtCtlReq : int32_t {
    No_Request = 0,
    Off = 1,
    Low = 2,
    Medium = 3,
    High = 4,
};

enum class StVntdCoolBkLvlRRSet : int32_t {
    Off = 0,
    Low = 1,
    Medium = 2,
    High = 3,
};

enum class StVntdCoolBkLvlRRVirtCtlReq : int32_t {
    No_Request = 0,
    Off = 1,
    Low = 2,
    Medium = 3,
    High = 4,
};

enum class StVntdCoolCushLvlLFSet : int32_t {
    Off = 0,
    Low = 1,
    Medium = 2,
    High = 3,
};

enum class StVntdCoolCushLvlLFVirtCtlReq : int32_t {
    No_Request = 0,
    Off = 1,
    Low = 2,
    Medium = 3,
    High = 4,
};

enum class StVntdCoolCushLvlLRSet : int32_t {
    Off = 0,
    Low = 1,
    Medium = 2,
    High = 3,
};

enum class StVntdCoolCushLvlLRVirtCtlReq : int32_t {
    No_Request = 0,
    Off = 1,
    Low = 2,
    Medium = 3,
    High = 4,
};

enum class StVntdCoolCushLvlRFSet : int32_t {
    Off = 0,
    Low = 1,
    Medium = 2,
    High = 3,
};

enum class StVntdCoolCushLvlRFVirtCtlReq : int32_t {
    No_Request = 0,
    Off = 1,
    Low = 2,
    Medium = 3,
    High = 4,
};

enum class StVntdCoolCushLvlRRSet : int32_t {
    Off = 0,
    Low = 1,
    Medium = 2,
    High = 3,
};

enum class StVntdCoolCushLvlRRVirtCtlReq : int32_t {
    No_Request = 0,
    Off = 1,
    Low = 2,
    Medium = 3,
    High = 4,
};

enum class StVntdCoolFrtNumLvlAval : int32_t {
    Not_Available = 0,
    Two_Levels = 1,
    Three_Levels = 2,
    Four_Levels = 3,
};

enum class StVntdCoolRrNumLvlAval : int32_t {
    Not_Available = 0,
    Two_Levels = 1,
    Three_Levels = 2,
    Four_Levels = 3,
};

enum class StrWhlCtlEndSw : int32_t {
    Released = 0,
    Pressed = 1,
};

enum class StrWhlCtlFvrtDnSw : int32_t {
    Released = 0,
    Pressed = 1,
};

enum class StrWhlCtlFvrtUpSw : int32_t {
    Released = 0,
    Pressed = 1,
};

enum class StrWhlCtlPshToTlkSw : int32_t {
    Released = 0,
    Pressed = 1,
};

enum class StrWhlCtlVolDnSw : int32_t {
    Released = 0,
    Pressed = 1,
};

enum class StrWhlCtlVolUpSw : int32_t {
    Released = 0,
    Pressed = 1,
};

enum class StrgWhlCtlInCarVcCommCtlSw : int32_t {
    Released = 0,
    Pressed = 1,
};

enum class StrtModeElecSeltnIndReq : int32_t {
    No_Indication = 0,
    Initializing = 1,
    Normal = 2,
    EV_Mode = 3,
    Charge_Plus = 4,
};

enum class SuprRmtPrkAutoStrgIconReq : int32_t {
    No_Icon = 0,
    Active = 1,
    Deactivated = 2,
};

enum class SuprRmtPrkAval : int32_t {
    Not_Available = 0,
    Available = 1,
};

enum class SuprRmtPrkDctvSftBtnReq : int32_t {
    Hidden = 0,
    Disabled = 1,
    Enabled = 2,
    Highlighted = 3,
};

enum class SuprRmtPrkDctvSoftBtnSts : int32_t {
    Not_Pressed = 0,
    Pressed = 1,
};

enum class SuprRmtPrkDrLckReq : int32_t {
    No_Request = 0,
    Lock = 1,
    Unlock = 2,
};

enum class SuprRmtPrkFcsReq : int32_t {
    No_Request = 0,
    Focus_Request_IPC = 1,
    Focus_Request_CSM = 2,
    Focus_Request_VCU = 3,
};

enum class SuprRmtPrkFcsStsVCU : int32_t {
    No_Focus = 0,
    Focus = 1,
};

enum class SuprRmtPrkPwrModeReq : int32_t {
    No_Request = 0,
    Off = 1,
    Propulsion = 2,
};

enum class SuprRmtPrkSptSeltnAcceptReq : int32_t {
    Hidden = 0,
    Disabled = 1,
    Enabled = 2,
    Highlighted = 3,
};

enum class SuprRmtPrkSptSeltnKeepLkReq : int32_t {
    Hidden = 0,
    Disabled = 1,
    Enabled = 2,
    Highlighted = 3,
};

enum class SuprRmtPrkSptSeltnRmtReq : int32_t {
    Hidden = 0,
    Disabled = 1,
    Enabled = 2,
    Highlighted = 3,
};

enum class SuprRmtPrkUnabletoCnctExtReq : int32_t {
    Hidden = 0,
    Disabled = 1,
    Enabled = 2,
    Highlighted = 3,
};

enum class SuprRmtPrkUnabletoCnctTryAgnReq : int32_t {
    Hidden = 0,
    Disabled = 1,
    Enabled = 2,
    Highlighted = 3,
};

enum class SuprRmtPrkWrnIndReq : int32_t {
    Off = 0,
    Searching_Parallel_Right = 1,
    Searching_Parallel_Left = 2,
    Searching_Cross_Right = 3,
    Searching_Cross_Left = 4,
    Spot_Found = 5,
    Spot_Found_Parallel_Left = 6,
    Spot_Found_Cross_Left = 7,
    Spot_Found_Parallel_Right = 8,
    Spot_Found_Cross_Right = 9,
    Move_Ahead = 10,
    Move_Ahead_Parallel_Left = 11,
    Move_Ahead_Cross_Left = 12,
    Move_Ahead_Parallel_Right = 13,
    Move_Ahead_Cross_Right = 14,
    Stop_And_R_Parallel_Left = 15,
    Stop_And_R_Cross_Back_Left = 16,
    Stop_And_R_Cross_Front_Left = 17,
    Stop_And_R_Parallel_Right = 18,
    Stop_And_R_Cross_Back_Right = 19,
    Stop_And_R_Cross_Front_Right = 20,
    Search_Speed_Warning = 21,
    Search_Deactivated = 22,
    Exit_Park_To_Left = 23,
    Exit_Park_To_Right = 24,
    Select_Drive_GEAR = 25,
    Auto_Steering_Active = 26,
    Auto_Parking_Active = 27,
    Drive_Backward = 28,
    Backward_Move = 29,
    Drive_Forward = 30,
    Forward_Move = 31,
    Stop = 32,
    Shifting = 33,
    Position_Reached = 34,
    Take_Control = 35,
    ParkIng_Complete = 36,
    Exit_Park_Complete = 37,
    Deactivated = 38,
    Canceled_General = 39,
    Canceled_Moves = 40,
    Canceled_Speed = 41,
    Canceled_Interference = 42,
    Canceled_Exit_Park = 43,
    Stopping = 44,
    Auto_Parking_Complete = 45,
    Release_Brake = 46,
    In_Vehicle_Or_Remote = 47,
    Remote_Stay_Alert = 48,
    Remote_Connecting = 49,
    Remote_Cannot_Connect = 50,
    Remote_No_Device = 51,
    Remote_Shift_To_Park = 52,
    Remote_Retry = 53,
    Remote_Canceled_Range = 54,
    Remote_Canceled_Supervision = 55,
    Remote_Canceled_ConnectIon = 56,
    Remote_Paused_Range = 57,
    Remote_Paused_Supervision = 58,
    Remote_Paused_ConnectIon = 59,
    Search_Drawer_Exit = 60,
    Search_Drawer_Park = 61,
    Spot_Selection_Accept = 62,
    Unable_To_Connect = 63,
    Cancel_Door = 64,
    Pause_Obstruction = 65,
    Cancel_Obstruction = 66,
    No_Exit_Spot_Found = 67,
    Handshake_Failure = 68,
    Failed_To_Engage = 69,
    Fasten_Seatbelt = 70,
};

enum class TAC_AudChConctStat : int32_t {
    NO_ACTION = 0,
    MIX_PROMPT = 1,
    MUTEX_PROMPT = 2,
    RING_TONE = 3,
    PHONE = 4,
    EMERGENCY_PHONE = 5,
    RESERVED_1 = 6,
    RESERVED_2 = 7,
    RESERVED_3 = 8,
    RESERVED_4 = 9,
    RESERVED_5 = 10,
    RESERVED_6 = 11,
    RESERVED_7 = 12,
    RESERVED_8 = 13,
    RESERVED_9 = 14,
    RESERVED_10 = 15,
};

enum class TAC_AudConctOutcm : int32_t {
    NO_ACTION = 0,
    REQUEST_GRANTED = 1,
    REQUEST_DENIED = 2,
    AUDIO_FAULT = 3,
    RESERVED_2 = 4,
    RESERVED_3 = 5,
    RESERVED_4 = 6,
    RESERVED_5 = 7,
    RESERVED_6 = 8,
    RESERVED_7 = 9,
    RESERVED_8 = 10,
    RESERVED_9 = 11,
    RESERVED_10 = 12,
    RESERVED_11 = 13,
    RESERVED_12 = 14,
    RESERVED_13 = 15,
};

enum class TAR_AudConctReq : int32_t {
    NO_ACTION = 0,
    MIX_PROMPT = 1,
    MUTEX_PROMPT = 2,
    RING_TONE = 3,
    PHONE = 4,
    EMERGENCY_PHONE = 5,
    RESERVED_1 = 6,
    RESERVED_2 = 7,
    RESERVED_3 = 8,
    RESERVED_4 = 9,
    RESERVED_5 = 10,
    RESERVED_6 = 11,
    RESERVED_7 = 12,
    RESERVED_8 = 13,
    RESERVED_9 = 14,
    RESERVED_10 = 15,
};

enum class TAR_AudSrcStat : int32_t {
    NO_ACTION = 0,
    AUDIO_READY = 1,
    AUDIO_PLAYING = 2,
    AUDIO_REQUEST = 3,
    AUDIO_DISCONNECT_RESERVED_1 = 4,
    RESERVED_2 = 5,
    RESERVED_3 = 6,
    RESERVED_4 = 7,
    RESERVED_5 = 8,
    RESERVED_6 = 9,
    RESERVED_7 = 10,
    RESERVED_8 = 11,
    RESERVED_9 = 12,
    RESERVED_10 = 13,
    RESERVED_11 = 14,
};

enum class TBTTrnChmEvntStat : int32_t {
    NO_ACTION = 0,
    ACTIVE = 1,
    CANCEL_CHIME = 2,
};

enum class TCP_LCMDataMsgStat : int32_t {
    No_Action = 0,
    Acknowledge = 1,
};

enum class TCP_LCMFileTrans : int32_t {
    No_Action = 0,
    Begin_Transfer = 1,
    Successful_Block_Transfer = 2,
    Cancel_Transfer = 3,
    Retry_Last_Block = 4,
};

enum class TCSCurStat : int32_t {
    On = 0,
    Off = 1,
};

enum class TCSCurrStReq : int32_t {
    No_action = 0,
    OFF = 1,
    ON = 2,
};

enum class TCStmpDsblReqConf : int32_t {
    No_action = 0,
    NO = 1,
    YES = 2,
};

enum class TCTPIR_DrvrNtfn : int32_t {
    No_Action = 0,
    No_Indication = 1,
    Warm = 2,
    Increase_Speed_or_Apply_Brake = 3,
    Ready_for_Drive_Away = 4,
    Please_Wait = 5,
    Apply_and_Hold_Brake = 6,
    Cool_Down = 7,
    Creep_Disabled = 8,
};

enum class TDAP_DrvrIdfrAuth : int32_t {
    Driver_1 = 0,
    Driver_2 = 1,
    Driver_3 = 2,
    Driver_4 = 3,
    Driver_5 = 4,
    Driver_6 = 5,
    Driver_7 = 6,
    Unknown = 7,
};

enum class TDAP_DrvrStMemIdfrAuth : int32_t {
    Memory_1 = 0,
    Memory_2 = 1,
    Memory_3 = 2,
    Memory_4 = 3,
    Memory_5 = 4,
    Memory_6 = 5,
    Memory_7 = 6,
    Unknown = 7,
};

enum class TDOSWCCSR_ChgSetReq : int32_t {
    NO_ACTION = 0,
    OFF = 1,
    ON = 2,
    RESERVED_3 = 3,
    RESERVED_4 = 4,
    RESERVED_5 = 5,
    RESERVED_6 = 6,
    RESERVED_7 = 7,
};

enum class TDOSWCCSV_CrSetVal : int32_t {
    SETTING_UNKNOWN = 0,
    OFF = 1,
    ON = 2,
    RESERVED_3 = 3,
    RESERVED_4 = 4,
    RESERVED_5 = 5,
    RESERVED_6 = 6,
    RESERVED_7 = 7,
};

enum class TDSLCCSV_CrSetVal : int32_t {
    SETTING_UNKNOWN = 0,
    OFF = 1,
    ON = 2,
    RESERVED_3 = 3,
    RESERVED_4 = 4,
    RESERVED_5 = 5,
    RESERVED_6 = 6,
    RESERVED_7 = 7,
};

enum class TEGP_TransCmndGrAuth : int32_t {
    Not_Supported = 0,
    First_Gear = 1,
    Second_Gear = 2,
    Third_Gear = 3,
    Fourth_Gear = 4,
    Fifth_Gear = 5,
    Sixth_Gear = 6,
    Seventh_Gear = 7,
    Eighth_Gear = 8,
    Ninth_Gear = 9,
    Tenth_Gear = 10,
    Unused_and_Reserved = 11,
    CVT_Forward_Gear = 12,
    Neutral_Gear = 13,
    Reverse_Gear = 14,
    Park_Gear = 15,
};

enum class TEGP_TrnsEngdStAuth : int32_t {
    Transmission_Not_Engaged = 0,
    Transmission_Engaged_in_Forward = 1,
    Transmission_Engaged_in_Reverse = 2,
    Operating_State_Not_Reached = 3,
};

enum class TEGP_TrnsEstGrAuth : int32_t {
    Not_Supported = 0,
    First_Gear = 1,
    Second_Gear = 2,
    Third_Gear = 3,
    Fourth_Gear = 4,
    Fifth_Gear = 5,
    Sixth_Gear = 6,
    Seventh_Gear = 7,
    Eighth_Gear = 8,
    Ninth_Gear = 9,
    Tenth_Gear = 10,
    Unused_and_Reserved = 11,
    CVT_Forward_Gear = 12,
    Neutral_Gear = 13,
    Reverse_Gear = 14,
    Park_Gear = 15,
};

enum class TEGP_TrnsShftLvrPstnAuth : int32_t {
    Between_Ranges = 0,
    Park_Range = 1,
    Reverse_Range = 2,
    Neutral_Range = 3,
    Forward_Range_A = 4,
    Forward_Range_B = 5,
    Forward_Range_C = 6,
    Forward_Range_D = 7,
    Forward_Range_E = 8,
    Forward_Range_F = 9,
    Forward_Range_G = 10,
    Forward_Range_H = 11,
    Forward_Range_I = 12,
    Forward_Range_J = 13,
    Lever_Position_Unknown = 14,
};

enum class TGI1P_EnhdServsLckReqAuth : int32_t {
    Lock_All = 0,
    Unlock_All = 1,
    No_Action = 2,
};

enum class TGI1P_EnhdServsRmtStrtReqAuth : int32_t {
    No_Activation = 0,
    Engine_Requested_Off = 1,
    Engine_Requested_On = 2,
};

enum class TLDWCI_Sts : int32_t {
    Unknown = 0,
    No_Leak = 1,
    Slow_Leak = 2,
    Fast_Leak = 3,
};

enum class TODCCbnPrcndtngSetReq : int32_t {
    No_Action = 0,
    Off = 1,
    On = 2,
};

enum class TODCCbnPrcndtngSetResp : int32_t {
    No_Action = 0,
    Off = 1,
    On = 2,
};

enum class TODCNP_Chrg : int32_t {
    No_Action = 0,
    Charge_Now = 1,
    Charge_Later = 2,
    Invalid = 3,
};

enum class TODCNP_DprtrDyOfWk : int32_t {
    Unknown = 0,
    Sunday = 1,
    Monday = 2,
    Tuesday = 3,
    Wednesday = 4,
    Thursday = 5,
    Friday = 6,
    Saturday = 7,
};

enum class TODCNP_PCCLCstCurrSetVal : int32_t {
    No_Action = 0,
    Reduced = 1,
    Maximum = 2,
};

enum class TODCNextPlndCbnPrcndtngSetResp : int32_t {
    No_Action = 0,
    Off = 1,
    On = 2,
};

enum class TODCSR_ChrgSchedCstSetReq : int32_t {
    No_Action = 0,
    Off = 1,
    On = 2,
};

enum class TODCSR_ChrgSchedCstSetVal : int32_t {
    No_Action = 0,
    Off = 1,
    On = 2,
};

enum class TODCSR_ChrgSchedDyOfWkReq : int32_t {
    No_Action = 0,
    Sunday = 1,
    Monday = 2,
    Tuesday = 3,
    Wednesday = 4,
    Thursday = 5,
    Friday = 6,
    Saturday = 7,
    All_Days_Same = 8,
    Monday_to_Friday_Same = 9,
    Saturday_and_Sunday_Same = 10,
};

enum class TODCSR_ChrgSchedDyOfWkResp : int32_t {
    No_Action = 0,
    Sunday = 1,
    Monday = 2,
    Tuesday = 3,
    Wednesday = 4,
    Thursday = 5,
    Friday = 6,
    Saturday = 7,
    All_Days_Same = 8,
    Monday_to_Friday_Same = 9,
    Saturday_and_Sunday_Same = 10,
};

enum class TODCSR_ERSCstSetReq : int32_t {
    No_Action = 0,
    Off = 1,
    On = 2,
};

enum class TODCSR_ERSCstSetVal : int32_t {
    No_Action = 0,
    Off = 1,
    On = 2,
};

enum class TODCSR_ERSPrdDyReq : int32_t {
    No_Action = 0,
    Weekday_1 = 1,
    Weekday_2 = 2,
    Weekday_3 = 3,
    Weekday_4 = 4,
    Weekday_5 = 5,
    Weekend_1 = 6,
    Weekend_2 = 7,
    Weekend_3 = 8,
    Weekend_4 = 9,
    Weekend_5 = 10,
};

enum class TODCSR_ERSPrdDyResp : int32_t {
    No_Action = 0,
    Weekday_1 = 1,
    Weekday_2 = 2,
    Weekday_3 = 3,
    Weekday_4 = 4,
    Weekday_5 = 5,
    Weekend_1 = 6,
    Weekend_2 = 7,
    Weekend_3 = 8,
    Weekend_4 = 9,
    Weekend_5 = 10,
};

enum class TODCSR_ERSPrdLvlReq : int32_t {
    No_Action = 0,
    Low_Rate = 1,
    Medium_Rate = 2,
    High_Rate = 3,
    Reserved_1 = 4,
    Invalid_Rate = 5,
};

enum class TODCSR_ERSPrdLvlResp : int32_t {
    No_Action = 0,
    Low_Rate = 1,
    Medium_Rate = 2,
    High_Rate = 3,
    Reserved_1 = 4,
    Invalid_Rate = 5,
};

enum class TODCSR_ERSPrfReq : int32_t {
    No_Action = 0,
    Low_Rate = 1,
    Medium_Rate = 2,
    High_Rate = 3,
};

enum class TODCSR_ERSPrfResp : int32_t {
    No_Action = 0,
    Low_Rate = 1,
    Medium_Rate = 2,
    High_Rate = 3,
};

enum class TODCSR_LocChrgPwrLvlReq : int32_t {
    Unknown = 0,
    Level_1 = 1,
    Level_2 = 2,
    DC = 3,
    Wireless = 4,
};

enum class TODCSR_LocChrgPwrLvlResp : int32_t {
    Unknown = 0,
    Level_1 = 1,
    Level_2 = 2,
    DC = 3,
    Wireless = 4,
};

enum class TODCSR_LocNumReq : int32_t {
    No_Action = 0,
    Not_in_Stored_Location = 1,
    Stored_Location_1 = 2,
    Stored_Location_2 = 3,
    Stored_Location_3 = 4,
    Stored_Location_4 = 5,
};

enum class TODCSR_LocNumResp : int32_t {
    No_Action = 0,
    Not_in_Stored_Location = 1,
    Stored_Location_1 = 2,
    Stored_Location_2 = 3,
    Stored_Location_3 = 4,
    Stored_Location_4 = 5,
};

enum class TPMTrLdnRstReq : int32_t {
    UNKNOWN = 0,
    LIGHT_LOAD = 1,
    BEST_ECONOMY_LOAD = 2,
    MAX_LOAD = 3,
};

enum class TSGI1P_EnhdServsAllWndRqAuth : int32_t {
    No_Request = 0,
    Fully_Open = 1,
    Open_Vent = 2,
    Fully_Closed = 3,
};

enum class TSGI1P_EnhdServsRrClsrLckRqAuth : int32_t {
    No_Request = 0,
    Unlock = 1,
    Lock = 2,
};

enum class TSGI1P_EnhdServsSnrfRqAuth : int32_t {
    No_Request = 0,
    Fully_Open = 1,
    Open_Vent = 2,
    Fully_Closed = 3,
};

enum class TSMEurDispSgn1AddOn : int32_t {
    UnKnown = 0,
    None = 1,
    Supp_Sign_Generic = 2,
    Rain = 3,
    Snow = 4,
    Snow_Rain = 5,
    Rain_Cloud = 6,
    Fog = 7,
    Time = 8,
    Wet_Conditions = 9,
    Trailer = 10,
    Tractor_Passable = 11,
    Arrow_Left = 12,
    Arrow_Right = 13,
    Distance_Arrow = 14,
    School = 15,
};

enum class TSMEurDispSgn1Mn : int32_t {
    UnKnown = 0,
    No_Sign_Detected = 1,
    End_of_Speed_Limit = 2,
    End_of_All_Restrictions = 3,
    Begin_of_Motorway = 4,
    End_of_Motorway = 5,
    Begin_of_Expressway = 6,
    End_of_Expressway = 7,
    Begin_of_Play_Street_Zone = 8,
    End_of_Play_Street_Zone = 9,
    Begin_of_Passing_Restriction = 10,
    End_of_Passing_Restriction = 11,
    No_Entry = 12,
    Begin_of_City_Limits = 13,
    End_of_City_Limits = 14,
    Speed_Limit_5 = 15,
    Speed_Limit_10 = 16,
    Speed_Limit_15 = 17,
    Speed_Limit_20 = 18,
    Speed_Limit_25 = 19,
    Speed_Limit_30 = 20,
    Speed_Limit_35 = 21,
    Speed_Limit_40 = 22,
    Speed_Limit_45 = 23,
    Speed_Limit_50 = 24,
    Speed_Limit_55 = 25,
    Speed_Limit_60 = 26,
    Speed_Limit_65 = 27,
    Speed_Limit_70 = 28,
    Speed_Limit_75 = 29,
    Speed_Limit_80 = 30,
    Speed_Limit_85 = 31,
    Speed_Limit_90 = 32,
    Speed_Limit_95 = 33,
    Speed_Limit_100 = 34,
    Speed_Limit_105 = 35,
    Speed_Limit_110 = 36,
    Speed_Limit_115 = 37,
    Speed_Limit_120 = 38,
    Speed_Limit_125 = 39,
    Speed_Limit_130 = 40,
    Speed_Limit_135 = 41,
    Speed_Limit_140 = 42,
    Speed_Limit_145 = 43,
    Speed_Limit_150 = 44,
    Speed_Limit_155 = 45,
    Speed_Limit_160 = 46,
    Speed_Limit_165 = 47,
    Speed_Limit_170 = 48,
    Speed_Limit_175 = 49,
    Speed_Limit_180 = 50,
    Speed_Limit_185 = 51,
    Speed_Limit_190 = 52,
    Speed_Limit_195 = 53,
    Speed_Limit_200 = 54,
    Stop = 55,
    Give_away = 56,
    No_pass = 57,
    No_Vehicle_entrance = 58,
    No_passenger_car_entrance = 59,
};

enum class TSMEurDispSgn2AddOn : int32_t {
    UnKnown = 0,
    None = 1,
    Supp_Sign_Generic = 2,
    Rain = 3,
    Snow = 4,
    Snow_Rain = 5,
    Rain_Cloud = 6,
    Fog = 7,
    Time = 8,
    Wet_Conditions = 9,
    Trailer = 10,
    Tractor_Passable = 11,
    Arrow_Left = 12,
    Arrow_Right = 13,
    Distance_Arrow = 14,
    School = 15,
};

enum class TSMEurDispSgn2Mn : int32_t {
    UnKnown = 0,
    No_Sign_Detected = 1,
    End_of_Speed_Limit = 2,
    End_of_All_Restrictions = 3,
    Begin_of_Motorway = 4,
    End_of_Motorway = 5,
    Begin_of_Expressway = 6,
    End_of_Expressway = 7,
    Begin_of_Play_Street_Zone = 8,
    End_of_Play_Street_Zone = 9,
    Begin_of_Passing_Restriction = 10,
    End_of_Passing_Restriction = 11,
    No_Entry = 12,
    Begin_of_City_Limits = 13,
    End_of_City_Limits = 14,
    Speed_Limit_5 = 15,
    Speed_Limit_10 = 16,
    Speed_Limit_15 = 17,
    Speed_Limit_20 = 18,
    Speed_Limit_25 = 19,
    Speed_Limit_30 = 20,
    Speed_Limit_35 = 21,
    Speed_Limit_40 = 22,
    Speed_Limit_45 = 23,
    Speed_Limit_50 = 24,
    Speed_Limit_55 = 25,
    Speed_Limit_60 = 26,
    Speed_Limit_65 = 27,
    Speed_Limit_70 = 28,
    Speed_Limit_75 = 29,
    Speed_Limit_80 = 30,
    Speed_Limit_85 = 31,
    Speed_Limit_90 = 32,
    Speed_Limit_95 = 33,
    Speed_Limit_100 = 34,
    Speed_Limit_105 = 35,
    Speed_Limit_110 = 36,
    Speed_Limit_115 = 37,
    Speed_Limit_120 = 38,
    Speed_Limit_125 = 39,
    Speed_Limit_130 = 40,
    Speed_Limit_135 = 41,
    Speed_Limit_140 = 42,
    Speed_Limit_145 = 43,
    Speed_Limit_150 = 44,
    Speed_Limit_155 = 45,
    Speed_Limit_160 = 46,
    Speed_Limit_165 = 47,
    Speed_Limit_170 = 48,
    Speed_Limit_175 = 49,
    Speed_Limit_180 = 50,
    Speed_Limit_185 = 51,
    Speed_Limit_190 = 52,
    Speed_Limit_195 = 53,
    Speed_Limit_200 = 54,
    Stop = 55,
    Give_away = 56,
    No_pass = 57,
    No_Vehicle_entrance = 58,
    No_passenger_car_entrance = 59,
};

enum class TSMUSAndCADispSgn1AddOn : int32_t {
    None = 0,
    Supp_Sign_Generic = 1,
    School = 2,
    School_When_Flashing = 3,
    End_of_Speed_Limit = 4,
    Where_Workers_Present = 5,
};

enum class TSMUSAndCADispSgn1Mn : int32_t {
    UnKnown = 0,
    No_Sign_Detected = 1,
    Begin_of_Passing_Restriction_US = 2,
    End_of_Passing_Restriction_US = 3,
    Begin_of_Passing_Restriction_Canada = 4,
    End_of_Passing_Restriction_Canada = 5,
    Speed_Limit_5 = 6,
    Speed_Limit_10 = 7,
    Speed_Limit_15 = 8,
    Speed_Limit_20 = 9,
    Speed_Limit_25 = 10,
    Speed_Limit_30 = 11,
    Speed_Limit_35 = 12,
    Speed_Limit_40 = 13,
    Speed_Limit_45 = 14,
    Speed_Limit_50 = 15,
    Speed_Limit_55 = 16,
    Speed_Limit_60 = 17,
    Speed_Limit_65 = 18,
    Speed_Limit_70 = 19,
    Speed_Limit_75 = 20,
    Speed_Limit_80 = 21,
    Speed_Limit_85 = 22,
    Speed_Limit_90 = 23,
    Speed_Limit_95 = 24,
    Speed_Limit_100 = 25,
    Speed_Limit_105 = 26,
    Speed_Limit_110 = 27,
    Speed_Limit_115 = 28,
    Speed_Limit_120 = 29,
    Speed_Limit_125 = 30,
    Speed_Limit_130 = 31,
    Speed_Limit_135 = 32,
    Speed_Limit_140 = 33,
    Speed_Limit_145 = 34,
    Speed_Limit_150 = 35,
    Speed_Limit_155 = 36,
    Speed_Limit_160 = 37,
    Speed_Limit_165 = 38,
    Speed_Limit_170 = 39,
    Speed_Limit_175 = 40,
    Speed_Limit_180 = 41,
    Speed_Limit_185 = 42,
    Speed_Limit_190 = 43,
    Speed_Limit_195 = 44,
    Speed_Limit_200 = 45,
};

enum class TSMUSAndCADispSgn2AddOn : int32_t {
    None = 0,
    Supp_Sign_Generic = 1,
    School = 2,
    School_When_Flashing = 3,
    End_of_Speed_Limit = 4,
    Where_Workers_Present = 5,
};

enum class TSMUSAndCADispSgn2Mn : int32_t {
    UnKnown = 0,
    No_Sign_Detected = 1,
    Begin_of_Passing_Restriction_US = 2,
    End_of_Passing_Restriction_US = 3,
    Begin_of_Passing_Restriction_Canada = 4,
    End_of_Passing_Restriction_Canada = 5,
    Speed_Limit_5 = 6,
    Speed_Limit_10 = 7,
    Speed_Limit_15 = 8,
    Speed_Limit_20 = 9,
    Speed_Limit_25 = 10,
    Speed_Limit_30 = 11,
    Speed_Limit_35 = 12,
    Speed_Limit_40 = 13,
    Speed_Limit_45 = 14,
    Speed_Limit_50 = 15,
    Speed_Limit_55 = 16,
    Speed_Limit_60 = 17,
    Speed_Limit_65 = 18,
    Speed_Limit_70 = 19,
    Speed_Limit_75 = 20,
    Speed_Limit_80 = 21,
    Speed_Limit_85 = 22,
    Speed_Limit_90 = 23,
    Speed_Limit_95 = 24,
    Speed_Limit_100 = 25,
    Speed_Limit_105 = 26,
    Speed_Limit_110 = 27,
    Speed_Limit_115 = 28,
    Speed_Limit_120 = 29,
    Speed_Limit_125 = 30,
    Speed_Limit_130 = 31,
    Speed_Limit_135 = 32,
    Speed_Limit_140 = 33,
    Speed_Limit_145 = 34,
    Speed_Limit_150 = 35,
    Speed_Limit_155 = 36,
    Speed_Limit_160 = 37,
    Speed_Limit_165 = 38,
    Speed_Limit_170 = 39,
    Speed_Limit_175 = 40,
    Speed_Limit_180 = 41,
    Speed_Limit_185 = 42,
    Speed_Limit_190 = 43,
    Speed_Limit_195 = 44,
    Speed_Limit_200 = 45,
};

enum class TSMWrngPopUpSts : int32_t {
    TSM_Warning_Off = 0,
    TSM_Warning_On = 1,
};

enum class TVKRP_FobAvlReqAuth : int32_t {
    No_Action = 0,
    Disable = 1,
    Enable = 2,
    Return_Results = 3,
};

enum class TeenDrvReq : int32_t {
    No_Action = 0,
    Verify_Teen_PIN = 1,
    Update_Teen_PIN = 2,
    Set_Teen_Key = 3,
    Clear_Teen_Key = 4,
    Check_for_Teen_Key = 5,
    Clear_Teen_Keys_and_PIN = 6,
    Reset_Report_Card = 7,
    Request_Report_Card_Data = 8,
};

enum class TeenDrvRsp : int32_t {
    No_Action = 0,
    Teen_PIN_Verified = 1,
    Teen_PIN_Updated = 2,
    Teen_PIN_Mismatch = 3,
    Teen_Key_Set_Complete = 4,
    Teen_Key_Clear_Complete = 5,
    Key_Not_Present = 6,
    Key_Detected_As_Teen_Key = 7,
    Key_Detected_As_NOT_Teen_Key = 8,
    PIN_Locked = 9,
};

enum class TeleAlrmHrnReq : int32_t {
    NO_ACTION = 0,
    ACTIVE = 1,
    CANCEL_HORN = 2,
};

enum class TeleAlrmVisReq : int32_t {
    NO_ACTION = 0,
    ACTIVE = 1,
    CANCEL_FLASH = 2,
};

enum class ThrdRowCntrPsStBltRmOccpSts : int32_t {
    Unknown = 0,
    Empty = 1,
    Occupied = 2,
};

enum class ThrdRowCntrPsStBltSts : int32_t {
    Unknown = 0,
    Unfastened = 1,
    Fastened = 2,
};

enum class ThrdRowLtPsStBltRmOccpSts : int32_t {
    Unknown = 0,
    Empty = 1,
    Occupied = 2,
};

enum class ThrdRowLtPsStBltSts : int32_t {
    Unknown = 0,
    Unfastened = 1,
    Fastened = 2,
};

enum class ThrdRowRtPsStBltRmOccpSts : int32_t {
    Unknown = 0,
    Empty = 1,
    Occupied = 2,
};

enum class ThrdRowRtPsStBltSts : int32_t {
    Unknown = 0,
    Unfastened = 1,
    Fastened = 2,
};

enum class TimeDispFormat : int32_t {
    Num12_Hour_Mode = 0,
    Num24_Hour_Mode = 1,
};

enum class TireLkDtnEnblSts : int32_t {
    Unknown = 0,
    Enabled = 1,
    Disabled = 2,
};

enum class TireLkDtnUsrReq : int32_t {
    No_Action = 0,
    Enable = 1,
    Disable = 2,
    Reset = 3,
};

enum class TirePrsStatLF : int32_t {
    Unknown = 0,
    Nominal = 1,
    Low_Service_Now = 2,
    Low = 3,
    Low_Extended_Mobility = 4,
    High = 5,
};

enum class TirePrsStatLR : int32_t {
    Unknown = 0,
    Nominal = 1,
    Low_Service_Now = 2,
    Low = 3,
    Low_Extended_Mobility = 4,
    High = 5,
};

enum class TirePrsStatLRInr : int32_t {
    Unknown = 0,
    Nominal = 1,
    Low_Service_Now = 2,
    Low = 3,
    Low_Extended_Mobility = 4,
    High = 5,
};

enum class TirePrsStatRF : int32_t {
    Unknown = 0,
    Nominal = 1,
    Low_Service_Now = 2,
    Low = 3,
    Low_Extended_Mobility = 4,
    High = 5,
};

enum class TirePrsStatRR : int32_t {
    Unknown = 0,
    Nominal = 1,
    Low_Service_Now = 2,
    Low = 3,
    Low_Extended_Mobility = 4,
    High = 5,
};

enum class TirePrsStatRRInr : int32_t {
    Unknown = 0,
    Nominal = 1,
    Low_Service_Now = 2,
    Low = 3,
    Low_Extended_Mobility = 4,
    High = 5,
};

enum class TireTrdTempSts : int32_t {
    Unknown = 0,
    Cold = 1,
    Cool = 2,
    Normal = 3,
    Warm = 4,
    Hot = 5,
};

enum class TireWhlVbrtnMonDrvrReq : int32_t {
    No_Action = 0,
    On = 1,
    Off = 2,
    Relearn = 3,
};

enum class TireWhlVbrtnMonInfoDispSts : int32_t {
    Unknown = 0,
    Off = 1,
    Service = 2,
    Elevated = 3,
    Relearning = 4,
    Normal = 5,
};

enum class TkMdElecVehPedMpVisDispVal : int32_t {
    SETTING_UNKNOWN = 0,
    CUSTOM_MODE_1 = 1,
    CUSTOM_MODE_2 = 2,
    CUSTOM_MODE_3 = 3,
    CUSTOM_MODE_4 = 4,
    CUSTOM_MODE_5 = 5,
    CUSTOM_MODE_6 = 6,
    CUSTOM_MODE_7 = 7,
};

enum class TkMdEngyRegnVisDispVal : int32_t {
    SETTING_UNKNOWN = 0,
    CUSTOM_MODE_1 = 1,
    CUSTOM_MODE_2 = 2,
    CUSTOM_MODE_3 = 3,
    CUSTOM_MODE_4 = 4,
    CUSTOM_MODE_5 = 5,
    CUSTOM_MODE_6 = 6,
    CUSTOM_MODE_7 = 7,
};

enum class TkModeActvAeroVisDispVal : int32_t {
    Setting_Unknown = 0,
    Custom_Mode_1 = 1,
    Custom_Mode_2 = 2,
    Custom_Mode_3 = 3,
    Custom_Mode_4 = 4,
    Custom_Mode_5 = 5,
    Custom_Mode_6 = 6,
    Custom_Mode_7 = 7,
};

enum class TkModeBrkPedVisDispVal : int32_t {
    Setting_Unknown = 0,
    Custom_Mode_1 = 1,
    Custom_Mode_2 = 2,
    Custom_Mode_3 = 3,
    Custom_Mode_4 = 4,
    Custom_Mode_5 = 5,
    Custom_Mode_6 = 6,
    Custom_Mode_7 = 7,
};

enum class TkModeDrvlineVisDispVal : int32_t {
    Setting_Unknown = 0,
    Custom_Mode_1 = 1,
    Custom_Mode_2 = 2,
    Custom_Mode_3 = 3,
    Custom_Mode_4 = 4,
    Custom_Mode_5 = 5,
    Custom_Mode_6 = 6,
    Custom_Mode_7 = 7,
};

enum class TkModeESCVisDispVal : int32_t {
    Setting_Unknown = 0,
    Custom_Mode_1 = 1,
    Custom_Mode_2 = 2,
    Custom_Mode_3 = 3,
    Custom_Mode_4 = 4,
    Custom_Mode_5 = 5,
    Custom_Mode_6 = 6,
    Custom_Mode_7 = 7,
};

enum class TkModePwrtrnVisDispVal : int32_t {
    Setting_Unknown = 0,
    Custom_Mode_1 = 1,
    Custom_Mode_2 = 2,
    Custom_Mode_3 = 3,
    Custom_Mode_4 = 4,
    Custom_Mode_5 = 5,
    Custom_Mode_6 = 6,
    Custom_Mode_7 = 7,
};

enum class TkModeRideHghtVisDispVal : int32_t {
    Setting_Unknown = 0,
    Custom_Mode_1 = 1,
    Custom_Mode_2 = 2,
    Custom_Mode_3 = 3,
    Custom_Mode_4 = 4,
    Custom_Mode_5 = 5,
    Custom_Mode_6 = 6,
    Custom_Mode_7 = 7,
};

enum class TkModeSndVisDispVal : int32_t {
    Setting_Unknown = 0,
    Custom_Mode_1 = 1,
    Custom_Mode_2 = 2,
    Custom_Mode_3 = 3,
    Custom_Mode_4 = 4,
    Custom_Mode_5 = 5,
    Custom_Mode_6 = 6,
    Custom_Mode_7 = 7,
};

enum class TkModeSpnsnVisDispVal : int32_t {
    Setting_Unknown = 0,
    Custom_Mode_1 = 1,
    Custom_Mode_2 = 2,
    Custom_Mode_3 = 3,
    Custom_Mode_4 = 4,
    Custom_Mode_5 = 5,
    Custom_Mode_6 = 6,
    Custom_Mode_7 = 7,
};

enum class TkModeStrgVisDispVal : int32_t {
    Setting_Unknown = 0,
    Custom_Mode_1 = 1,
    Custom_Mode_2 = 2,
    Custom_Mode_3 = 3,
    Custom_Mode_4 = 4,
    Custom_Mode_5 = 5,
    Custom_Mode_6 = 6,
    Custom_Mode_7 = 7,
};

enum class TlmHVDCFstChrgSoonReq : int32_t {
    No_Action = 0,
    Off = 1,
    On = 2,
};

enum class TnDrStBltShIntlkRtCstLvChgSetRq : int32_t {
    No_Action = 0,
    Off = 1,
    On = 2,
};

enum class TnDrvSpdLmtCstChgStReq : int32_t {
    NO_ACTION = 0,
    OFF = 1,
    ON = 2,
    RESERVED_3 = 3,
    RESERVED_4 = 4,
    RESERVED_5 = 5,
    RESERVED_6 = 6,
    RESERVED_7 = 7,
};

enum class TnDrvStBltShfIntlkCstChgSetReq : int32_t {
    NO_ACTION = 0,
    OFF = 1,
    ON = 2,
    RESERVED_3 = 3,
    RESERVED_4 = 4,
    RESERVED_5 = 5,
    RESERVED_6 = 6,
    RESERVED_7 = 7,
};

enum class TnDrvStBltShfIntlkCstCurrSetVal : int32_t {
    SETTING_UNKNOWN = 0,
    OFF = 1,
    ON = 2,
    RESERVED_3 = 3,
    RESERVED_4 = 4,
    RESERVED_5 = 5,
    RESERVED_6 = 6,
    RESERVED_7 = 7,
};

enum class TnDrvrActvRmtCstCurrSetVal : int32_t {
    Setting_Unknown = 0,
    Off = 1,
    On = 2,
};

enum class TnDrvrOvrspdWrnRmtCstChgSetReq : int32_t {
    No_Action = 0,
    Off = 1,
    On = 2,
};

enum class TnDrvrSpdLimRmtCstCurrSetVal : int32_t {
    Setting_Unknown = 0,
    Off = 1,
    On = 2,
};

enum class TnDrvrVolLimCstCurrSetVal : int32_t {
    Unknown = 0,
    Off = 1,
    On = 2,
};

enum class TnDrvrVolLimRmtCstChgSetReq : int32_t {
    No_Action = 0,
    Off = 1,
    On = 2,
};

enum class TnrFreqBndReq : int32_t {
    No_Action = 0,
    Off = 1,
    AM = 2,
    FM = 3,
    DAB = 4,
    XM = 5,
    RadioBandReserve6 = 6,
    RadioBandReserve7 = 7,
    RadioBandReserve8 = 8,
    RadioBandReserve9 = 9,
    RadioBandReserve10 = 10,
    RadioBandReserve11 = 11,
    RadioBandReserve12 = 12,
    RadioBandReserve13 = 13,
    RadioBandReserve14 = 14,
    RadioBandReserve15 = 15,
};

enum class TourMdElecVehPedMpVisDispVal : int32_t {
    SETTING_UNKNOWN = 0,
    CUSTOM_MODE_1 = 1,
    CUSTOM_MODE_2 = 2,
    CUSTOM_MODE_3 = 3,
    CUSTOM_MODE_4 = 4,
    CUSTOM_MODE_5 = 5,
    CUSTOM_MODE_6 = 6,
    CUSTOM_MODE_7 = 7,
};

enum class TourMdEngyRegnVisDispVal : int32_t {
    SETTING_UNKNOWN = 0,
    CUSTOM_MODE_1 = 1,
    CUSTOM_MODE_2 = 2,
    CUSTOM_MODE_3 = 3,
    CUSTOM_MODE_4 = 4,
    CUSTOM_MODE_5 = 5,
    CUSTOM_MODE_6 = 6,
    CUSTOM_MODE_7 = 7,
};

enum class TourModeActvAeroVisDispVal : int32_t {
    Setting_Unknown = 0,
    Custom_Mode_1 = 1,
    Custom_Mode_2 = 2,
    Custom_Mode_3 = 3,
    Custom_Mode_4 = 4,
    Custom_Mode_5 = 5,
    Custom_Mode_6 = 6,
    Custom_Mode_7 = 7,
};

enum class TourModeBrkPedVisDispVal : int32_t {
    Setting_Unknown = 0,
    Custom_Mode_1 = 1,
    Custom_Mode_2 = 2,
    Custom_Mode_3 = 3,
    Custom_Mode_4 = 4,
    Custom_Mode_5 = 5,
    Custom_Mode_6 = 6,
    Custom_Mode_7 = 7,
};

enum class TourModeDrvlineVisDispVal : int32_t {
    Setting_Unknown = 0,
    Custom_Mode_1 = 1,
    Custom_Mode_2 = 2,
    Custom_Mode_3 = 3,
    Custom_Mode_4 = 4,
    Custom_Mode_5 = 5,
    Custom_Mode_6 = 6,
    Custom_Mode_7 = 7,
};

enum class TourModeESCVisDispVal : int32_t {
    Setting_Unknown = 0,
    Custom_Mode_1 = 1,
    Custom_Mode_2 = 2,
    Custom_Mode_3 = 3,
    Custom_Mode_4 = 4,
    Custom_Mode_5 = 5,
    Custom_Mode_6 = 6,
    Custom_Mode_7 = 7,
};

enum class TourModePwrtrnVisDispVal : int32_t {
    Setting_Unknown = 0,
    Custom_Mode_1 = 1,
    Custom_Mode_2 = 2,
    Custom_Mode_3 = 3,
    Custom_Mode_4 = 4,
    Custom_Mode_5 = 5,
    Custom_Mode_6 = 6,
    Custom_Mode_7 = 7,
};

enum class TourModeRideHghtVisDispVal : int32_t {
    Setting_Unknown = 0,
    Custom_Mode_1 = 1,
    Custom_Mode_2 = 2,
    Custom_Mode_3 = 3,
    Custom_Mode_4 = 4,
    Custom_Mode_5 = 5,
    Custom_Mode_6 = 6,
    Custom_Mode_7 = 7,
};

enum class TourModeSndVisDispVal : int32_t {
    Setting_Unknown = 0,
    Custom_Mode_1 = 1,
    Custom_Mode_2 = 2,
    Custom_Mode_3 = 3,
    Custom_Mode_4 = 4,
    Custom_Mode_5 = 5,
    Custom_Mode_6 = 6,
    Custom_Mode_7 = 7,
};

enum class TourModeSpnsnVisDispVal : int32_t {
    Setting_Unknown = 0,
    Custom_Mode_1 = 1,
    Custom_Mode_2 = 2,
    Custom_Mode_3 = 3,
    Custom_Mode_4 = 4,
    Custom_Mode_5 = 5,
    Custom_Mode_6 = 6,
    Custom_Mode_7 = 7,
};

enum class TourModeStrgVisDispVal : int32_t {
    Setting_Unknown = 0,
    Custom_Mode_1 = 1,
    Custom_Mode_2 = 2,
    Custom_Mode_3 = 3,
    Custom_Mode_4 = 4,
    Custom_Mode_5 = 5,
    Custom_Mode_6 = 6,
    Custom_Mode_7 = 7,
};

enum class TowHaulMdActvAerodynsVisDispVal : int32_t {
    Setting_Unknown = 0,
    Custom_Mode_1 = 1,
    Custom_Mode_2 = 2,
    Custom_Mode_3 = 3,
    Custom_Mode_4 = 4,
    Custom_Mode_5 = 5,
    Custom_Mode_6 = 6,
    Custom_Mode_7 = 7,
};

enum class TowHaulMdBrkPedVisDispVal : int32_t {
    Setting_Unknown = 0,
    Custom_Mode_1 = 1,
    Custom_Mode_2 = 2,
    Custom_Mode_3 = 3,
    Custom_Mode_4 = 4,
    Custom_Mode_5 = 5,
    Custom_Mode_6 = 6,
    Custom_Mode_7 = 7,
};

enum class TowHaulMdDrvlnVisDispVal : int32_t {
    Setting_Unknown = 0,
    Custom_Mode_1 = 1,
    Custom_Mode_2 = 2,
    Custom_Mode_3 = 3,
    Custom_Mode_4 = 4,
    Custom_Mode_5 = 5,
    Custom_Mode_6 = 6,
    Custom_Mode_7 = 7,
};

enum class TowHaulMdESCVisDispVal : int32_t {
    Setting_Unknown = 0,
    Custom_Mode_1 = 1,
    Custom_Mode_2 = 2,
    Custom_Mode_3 = 3,
    Custom_Mode_4 = 4,
    Custom_Mode_5 = 5,
    Custom_Mode_6 = 6,
    Custom_Mode_7 = 7,
};

enum class TowHaulMdPwrtrnVisDispVal : int32_t {
    Setting_Unknown = 0,
    Custom_Mode_1 = 1,
    Custom_Mode_2 = 2,
    Custom_Mode_3 = 3,
    Custom_Mode_4 = 4,
    Custom_Mode_5 = 5,
    Custom_Mode_6 = 6,
    Custom_Mode_7 = 7,
};

enum class TowHaulMdRideHghtVisDispVal : int32_t {
    Setting_Unknown = 0,
    Custom_Mode_1 = 1,
    Custom_Mode_2 = 2,
    Custom_Mode_3 = 3,
    Custom_Mode_4 = 4,
    Custom_Mode_5 = 5,
    Custom_Mode_6 = 6,
    Custom_Mode_7 = 7,
};

enum class TowHaulMdSndVisDispVal : int32_t {
    Setting_Unknown = 0,
    Custom_Mode_1 = 1,
    Custom_Mode_2 = 2,
    Custom_Mode_3 = 3,
    Custom_Mode_4 = 4,
    Custom_Mode_5 = 5,
    Custom_Mode_6 = 6,
    Custom_Mode_7 = 7,
};

enum class TowHaulMdSpnsnVisDispVal : int32_t {
    Setting_Unknown = 0,
    Custom_Mode_1 = 1,
    Custom_Mode_2 = 2,
    Custom_Mode_3 = 3,
    Custom_Mode_4 = 4,
    Custom_Mode_5 = 5,
    Custom_Mode_6 = 6,
    Custom_Mode_7 = 7,
};

enum class TowHaulMdStrgVisDispVal : int32_t {
    Setting_Unknown = 0,
    Custom_Mode_1 = 1,
    Custom_Mode_2 = 2,
    Custom_Mode_3 = 3,
    Custom_Mode_4 = 4,
    Custom_Mode_5 = 5,
    Custom_Mode_6 = 6,
    Custom_Mode_7 = 7,
};

enum class TrPrsMntrTrLdStat : int32_t {
    Unkown = 0,
    Light_Load = 1,
    Best_Economy_Load = 2,
    Max_Load = 3,
};

enum class TransOilFiltLifeRstReq : int32_t {
    No_Request = 0,
    Reset_Request_Active = 1,
};

enum class TrcStbScrConfig : int32_t {
    None = 0,
    TCS_Only = 1,
    TCS_and_ESC = 2,
    TCS_ESC_and_Comp = 3,
};

enum class TrfSgnMemOvrspdChmCstCurrSetVal : int32_t {
    Setting_Unknown = 0,
    Off = 1,
    On = 2,
};

enum class TrfSgnMemSpdLmChgChmCstChgSetRq : int32_t {
    No_Action = 0,
    Off = 1,
    On = 2,
};

enum class TrfSgnMemSpdLmChgChmCstCurSetVl : int32_t {
    Setting_Unknown = 0,
    Off = 1,
    On = 2,
};

enum class TrfcJamAsstVirtCtlAllwd : int32_t {
    Not_Allowed = 0,
    Allowed = 1,
};

enum class TrfcJamAsstVirtCtlAval : int32_t {
    Not_Available = 0,
    Available = 1,
};

enum class TrfcJamAsstVirtCtlCurrSeltnVal : int32_t {
    Unknown = 0,
    Off = 1,
    On = 2,
};

enum class TrfcJamAsstVirtCtlReq : int32_t {
    No_Action = 0,
    Off = 1,
    On = 2,
};

enum class TrfcSgnMemCstChgSetReq : int32_t {
    No_Action = 0,
    Off = 1,
    On = 2,
};

enum class TrfcSgnMemCstCurrSetVal : int32_t {
    Setting_Unknown = 0,
    Off = 1,
    On = 2,
};

enum class TrfcSgnMemOvrspdChmCstChgSetReq : int32_t {
    No_Action = 0,
    Off = 1,
    On = 2,
};

enum class TrfcSgnMemOvrspdChmEvntStat : int32_t {
    No_Action = 0,
    Active = 1,
    Cancel_Chime = 2,
};

enum class TrfcSgnMemSgnChgChmEvntStat : int32_t {
    No_Action = 0,
    Active = 1,
    Cancel_Chime = 2,
};

enum class TrffcLgtAsstCstChgSetReq : int32_t {
    NO_ACTION = 0,
    OFF = 1,
    ALERT = 2,
    RESERVED_3 = 3,
    RESERVED_4 = 4,
    RESERVED_5 = 5,
    RESERVED_6 = 6,
    RESERVED_7 = 7,
};

enum class TrffcLgtAsstCstCurrSetVal : int32_t {
    SETTING_UNKNOWN = 0,
    OFF = 1,
    ALERT = 2,
    RESERVED_3 = 3,
    RESERVED_4 = 4,
    RESERVED_5 = 5,
    RESERVED_6 = 6,
    RESERVED_7 = 7,
};

enum class TrffcLgtAsstWrnChmEvntStat : int32_t {
    NO_ACTION = 0,
    ACTIVE = 1,
    CANCEL_CHIME = 2,
    RESERVED_1 = 3,
};

enum class TrlrArtclnAngCalSts : int32_t {
    Unknown = 0,
    Available = 1,
    Degraded = 2,
    Unavailable = 3,
};

enum class TrlrBrkgSysProfSts : int32_t {
    Default_Profile = 0,
    Profile_1 = 1,
    Profile_2 = 2,
    Profile_3 = 3,
    Profile_4 = 4,
    Profile_5 = 5,
};

enum class TrlrConnStat : int32_t {
    Not_Connected = 0,
    Connected = 1,
};

enum class TrlrHtchTyp : int32_t {
    Unknown = 0,
    Conventional = 1,
    Num5th_Wheel = 2,
    Gooseneck = 3,
};

enum class TrlrJckKnfAlrtSts : int32_t {
    Unknown = 0,
    No_Alert_Active = 1,
    Phase_1_Alert_Active = 2,
    Phase_2_Alert_Active = 3,
};

enum class TrlrJckKnfVisAlrtReq : int32_t {
    Unknown = 0,
    No_Alert = 1,
    Phase_1_Alert = 2,
    Phase_2_Alert = 3,
};

enum class TrlrLtngSeqReq : int32_t {
    No_Action = 0,
    Off = 1,
    On = 2,
};

enum class TrlrLtngSeqStat : int32_t {
    Sequence_Off = 0,
    Sequence_On = 1,
};

enum class TrlrMirVidEnblCstChgSetReq : int32_t {
    No_Action = 0,
    Off = 1,
    On = 2,
};

enum class TrlrMirVidEnblCstCurrSetVal : int32_t {
    Setting_Unknown = 0,
    Off = 1,
    On = 2,
    Reserved_3 = 3,
    Reserved_4 = 4,
    Reserved_5 = 5,
    Reserved_6 = 6,
    Reserved_7 = 7,
};

enum class TrlrMirVidGdlnsCstChgSetReq : int32_t {
    No_Action = 0,
    Off = 1,
    On = 2,
};

enum class TrlrMirVidGdlnsCstCurrSetVal : int32_t {
    Setting_Unknown = 0,
    Off = 1,
    On = 2,
    Reserved_3 = 3,
    Reserved_4 = 4,
    Reserved_5 = 5,
    Reserved_6 = 6,
    Reserved_7 = 7,
};

enum class TrlrProfDeltn : int32_t {
    No_Profile_Deleted = 0,
    Profile1_Deleted = 1,
    Profile2_Deleted = 2,
    Profile3_Deleted = 3,
    Profile4_Deleted = 4,
    Profile5_Deleted = 5,
    Profile6_Deleted = 6,
    Profile7_Deleted = 7,
    Profile8_Deleted = 8,
    Profile9_Deleted = 9,
    Profile10_Deleted = 10,
    Profile11_Deleted = 11,
    Profile12_Deleted = 12,
    Profile13_Deleted = 13,
    Profile14_Deleted = 14,
    Profile15_Deleted = 15,
    Profile16_Deleted = 16,
    Profile17_Deleted = 17,
    Profile18_Deleted = 18,
    Profile19_Deleted = 19,
    Profile20_Deleted = 20,
};

enum class TrlrProfDrvrReqdSeltn : int32_t {
    No_Action = 0,
    Default_Profile = 1,
    Profile1 = 2,
    Profile2 = 3,
    Profile3 = 4,
    Profile4 = 5,
    Profile5 = 6,
    Profile6 = 7,
    Profile7 = 8,
    Profile8 = 9,
    Profile9 = 10,
    Profile10 = 11,
    Profile11 = 12,
    Profile12 = 13,
    Profile13 = 14,
    Profile14 = 15,
    Profile15 = 16,
    Profile16 = 17,
    Profile17 = 18,
    Profile18 = 19,
    Profile19 = 20,
    Profile20 = 21,
};

enum class TrlrProfSeltnResp : int32_t {
    No_Action = 0,
    Default_Profile = 1,
    Profile1 = 2,
    Profile2 = 3,
    Profile3 = 4,
    Profile4 = 5,
    Profile5 = 6,
    Profile6 = 7,
    Profile7 = 8,
    Profile8 = 9,
    Profile9 = 10,
    Profile10 = 11,
    Profile11 = 12,
    Profile12 = 13,
    Profile13 = 14,
    Profile14 = 15,
    Profile15 = 16,
    Profile16 = 17,
    Profile17 = 18,
    Profile18 = 19,
    Profile19 = 20,
    Profile20 = 21,
};

enum class TrlrStatTowHaulModeOvrrd : int32_t {
    No_Override = 0,
    Override_to_Not_Tow_Haul = 1,
    Unused_and_Reserved_1 = 2,
    Unused_and_Reserved_2 = 3,
};

enum class TrlrTireLFInrPresSts : int32_t {
    Unknown = 0,
    Normal = 1,
    Low_Pressure = 2,
    Malfunction = 3,
    Learning_in_Progress = 4,
    Learn_Tire = 5,
    Tire_Learning_Complete = 6,
    High_Pressure = 7,
    High_Temperature = 8,
};

enum class TrlrTireLFInrTempSts : int32_t {
    Unknown = 0,
    Normal = 1,
    High_Temperature = 2,
};

enum class TrlrTireLFPresSts : int32_t {
    Unknown = 0,
    Normal = 1,
    Low_Pressure = 2,
    Malfunction = 3,
    Learning_in_Progress = 4,
    Learn_Tire = 5,
    Tire_Learning_Complete = 6,
    High_Pressure = 7,
    High_Temperature = 8,
};

enum class TrlrTireLFTempSts : int32_t {
    Unknown = 0,
    Normal = 1,
    High_Temperature = 2,
};

enum class TrlrTireLRInrPresSts : int32_t {
    Unknown = 0,
    Normal = 1,
    Low_Pressure = 2,
    Malfunction = 3,
    Learning_in_Progress = 4,
    Learn_Tire = 5,
    Tire_Learning_Complete = 6,
    High_Pressure = 7,
    High_Temperature = 8,
};

enum class TrlrTireLRInrTempSts : int32_t {
    Unknown = 0,
    Normal = 1,
    High_Temperature = 2,
};

enum class TrlrTireLRPresSts : int32_t {
    Unknown = 0,
    Normal = 1,
    Low_Pressure = 2,
    Malfunction = 3,
    Learning_in_Progress = 4,
    Learn_Tire = 5,
    Tire_Learning_Complete = 6,
    High_Pressure = 7,
    High_Temperature = 8,
};

enum class TrlrTireLRTempSts : int32_t {
    Unknown = 0,
    Normal = 1,
    High_Temperature = 2,
};

enum class TrlrTireLkDtnEnblSts : int32_t {
    Unknown = 0,
    Enabled = 1,
    Disabled = 2,
};

enum class TrlrTireLkDtnLFInrSts : int32_t {
    Unknown = 0,
    No_Leak = 1,
    Slow_Leak = 2,
    Fast_Leak = 3,
};

enum class TrlrTireLkDtnLFSts : int32_t {
    Unknown = 0,
    No_Leak = 1,
    Slow_Leak = 2,
    Fast_Leak = 3,
};

enum class TrlrTireLkDtnLRInrSts : int32_t {
    Unknown = 0,
    No_Leak = 1,
    Slow_Leak = 2,
    Fast_Leak = 3,
};

enum class TrlrTireLkDtnLRSts : int32_t {
    Unknown = 0,
    No_Leak = 1,
    Slow_Leak = 2,
    Fast_Leak = 3,
};

enum class TrlrTireLkDtnLtMdlInrSts : int32_t {
    Unknown = 0,
    No_Leak = 1,
    Slow_Leak = 2,
    Fast_Leak = 3,
};

enum class TrlrTireLkDtnLtMdlSts : int32_t {
    Unknown = 0,
    No_Leak = 1,
    Slow_Leak = 2,
    Fast_Leak = 3,
};

enum class TrlrTireLkDtnRFInrSts : int32_t {
    Unknown = 0,
    No_Leak = 1,
    Slow_Leak = 2,
    Fast_Leak = 3,
};

enum class TrlrTireLkDtnRFSts : int32_t {
    Unknown = 0,
    No_Leak = 1,
    Slow_Leak = 2,
    Fast_Leak = 3,
};

enum class TrlrTireLkDtnRRInrSts : int32_t {
    Unknown = 0,
    No_Leak = 1,
    Slow_Leak = 2,
    Fast_Leak = 3,
};

enum class TrlrTireLkDtnRRSts : int32_t {
    Unknown = 0,
    No_Leak = 1,
    Slow_Leak = 2,
    Fast_Leak = 3,
};

enum class TrlrTireLkDtnRtMdlInrSts : int32_t {
    Unknown = 0,
    No_Leak = 1,
    Slow_Leak = 2,
    Fast_Leak = 3,
};

enum class TrlrTireLkDtnRtMdlSts : int32_t {
    Unknown = 0,
    No_Leak = 1,
    Slow_Leak = 2,
    Fast_Leak = 3,
};

enum class TrlrTireLkDtnUserReq : int32_t {
    No_Action = 0,
    Enabled = 1,
    Disabled = 2,
    Reset = 3,
};

enum class TrlrTireLkDtnWrstCsSts : int32_t {
    Unknown = 0,
    No_Leak = 1,
    Slow_Leak = 2,
    Fast_Leak = 3,
};

enum class TrlrTireLrnSts : int32_t {
    Unknown = 0,
    Learn_Completed = 1,
    Learn_Progressing = 2,
    Learn_Failed = 3,
    Tires_not_Learned = 4,
};

enum class TrlrTireLtMdlInrPresSts : int32_t {
    Unknown = 0,
    Normal = 1,
    Low_Pressure = 2,
    Malfunction = 3,
    Learning_in_Progress = 4,
    Learn_Tire = 5,
    Tire_Learning_Complete = 6,
    High_Pressure = 7,
    High_Temperature = 8,
};

enum class TrlrTireLtMdlInrTempSts : int32_t {
    Unknown = 0,
    Normal = 1,
    High_Temperature = 2,
};

enum class TrlrTireLtMdlPresSts : int32_t {
    Unknown = 0,
    Normal = 1,
    Low_Pressure = 2,
    Malfunction = 3,
    Learning_in_Progress = 4,
    Learn_Tire = 5,
    Tire_Learning_Complete = 6,
    High_Pressure = 7,
    High_Temperature = 8,
};

enum class TrlrTireLtMdlTempSts : int32_t {
    Unknown = 0,
    Normal = 1,
    High_Temperature = 2,
};

enum class TrlrTirePresProfXferSts : int32_t {
    Not_Active = 0,
    Completed = 1,
    In_Progress = 2,
    Failed = 3,
};

enum class TrlrTireRFInrPresSts : int32_t {
    Unknown = 0,
    Normal = 1,
    Low_Pressure = 2,
    Malfunction = 3,
    Learning_in_Progress = 4,
    Learn_Tire = 5,
    Tire_Learning_Complete = 6,
    High_Pressure = 7,
    High_Temperature = 8,
};

enum class TrlrTireRFInrTempSts : int32_t {
    Unknown = 0,
    Normal = 1,
    High_Temperature = 2,
};

enum class TrlrTireRFPresSts : int32_t {
    Unknown = 0,
    Normal = 1,
    Low_Pressure = 2,
    Malfunction = 3,
    Learning_in_Progress = 4,
    Learn_Tire = 5,
    Tire_Learning_Complete = 6,
    High_Pressure = 7,
    High_Temperature = 8,
};

enum class TrlrTireRFTempSts : int32_t {
    Unknown = 0,
    Normal = 1,
    High_Temperature = 2,
};

enum class TrlrTireRRInrPresSts : int32_t {
    Unknown = 0,
    Normal = 1,
    Low_Pressure = 2,
    Malfunction = 3,
    Learning_in_Progress = 4,
    Learn_Tire = 5,
    Tire_Learning_Complete = 6,
    High_Pressure = 7,
    High_Temperature = 8,
};

enum class TrlrTireRRInrTempSts : int32_t {
    Unknown = 0,
    Normal = 1,
    High_Temperature = 2,
};

enum class TrlrTireRRPresSts : int32_t {
    Unknown = 0,
    Normal = 1,
    Low_Pressure = 2,
    Malfunction = 3,
    Learning_in_Progress = 4,
    Learn_Tire = 5,
    Tire_Learning_Complete = 6,
    High_Pressure = 7,
    High_Temperature = 8,
};

enum class TrlrTireRRTempSts : int32_t {
    Unknown = 0,
    Normal = 1,
    High_Temperature = 2,
};

enum class TrlrTireRtMdlInrPresSts : int32_t {
    Unknown = 0,
    Normal = 1,
    Low_Pressure = 2,
    Malfunction = 3,
    Learning_in_Progress = 4,
    Learn_Tire = 5,
    Tire_Learning_Complete = 6,
    High_Pressure = 7,
    High_Temperature = 8,
};

enum class TrlrTireRtMdlInrTempSts : int32_t {
    Unknown = 0,
    Normal = 1,
    High_Temperature = 2,
};

enum class TrlrTireRtMdlPresSts : int32_t {
    Unknown = 0,
    Normal = 1,
    Low_Pressure = 2,
    Malfunction = 3,
    Learning_in_Progress = 4,
    Learn_Tire = 5,
    Tire_Learning_Complete = 6,
    High_Pressure = 7,
    High_Temperature = 8,
};

enum class TrlrTireRtMdlTempSts : int32_t {
    Unknown = 0,
    Normal = 1,
    High_Temperature = 2,
};

enum class TrlrTyp : int32_t {
    Unknown = 0,
    Box = 1,
    Not_Box = 2,
};

enum class TrlrVidVwBoxRailLmpReq : int32_t {
    No_Action = 0,
    On = 1,
    Off = 2,
};

enum class TrlrVidVwCrgLmpReq : int32_t {
    No_Action = 0,
    On = 1,
    Off = 2,
};

enum class TrlrVidVwPhs1ChmEvntStat : int32_t {
    No_Action = 0,
    Active = 1,
    Cancel_Chime = 2,
};

enum class TrnMdActvAerodynsVisDispVal : int32_t {
    SETTING_UNKNOWN = 0,
    CUSTOM_MODE_1 = 1,
    CUSTOM_MODE_2 = 2,
    CUSTOM_MODE_3 = 3,
    CUSTOM_MODE_4 = 4,
    CUSTOM_MODE_5 = 5,
    CUSTOM_MODE_6 = 6,
    CUSTOM_MODE_7 = 7,
};

enum class TrnMdBrkPedVisDispVal : int32_t {
    SETTING_UNKNOWN = 0,
    CUSTOM_MODE_1 = 1,
    CUSTOM_MODE_2 = 2,
    CUSTOM_MODE_3 = 3,
    CUSTOM_MODE_4 = 4,
    CUSTOM_MODE_5 = 5,
    CUSTOM_MODE_6 = 6,
    CUSTOM_MODE_7 = 7,
};

enum class TrnMdDrvlnVisDispVal : int32_t {
    SETTING_UNKNOWN = 0,
    CUSTOM_MODE_1 = 1,
    CUSTOM_MODE_2 = 2,
    CUSTOM_MODE_3 = 3,
    CUSTOM_MODE_4 = 4,
    CUSTOM_MODE_5 = 5,
    CUSTOM_MODE_6 = 6,
    CUSTOM_MODE_7 = 7,
};

enum class TrnMdESCVisDispVal : int32_t {
    SETTING_UNKNOWN = 0,
    CUSTOM_MODE_1 = 1,
    CUSTOM_MODE_2 = 2,
    CUSTOM_MODE_3 = 3,
    CUSTOM_MODE_4 = 4,
    CUSTOM_MODE_5 = 5,
    CUSTOM_MODE_6 = 6,
    CUSTOM_MODE_7 = 7,
};

enum class TrnMdElecVehPedMpVisDispVal : int32_t {
    SETTING_UNKNOWN = 0,
    CUSTOM_MODE_1 = 1,
    CUSTOM_MODE_2 = 2,
    CUSTOM_MODE_3 = 3,
    CUSTOM_MODE_4 = 4,
    CUSTOM_MODE_5 = 5,
    CUSTOM_MODE_6 = 6,
    CUSTOM_MODE_7 = 7,
};

enum class TrnMdEngyRegnVisDispVal : int32_t {
    SETTING_UNKNOWN = 0,
    CUSTOM_MODE_1 = 1,
    CUSTOM_MODE_2 = 2,
    CUSTOM_MODE_3 = 3,
    CUSTOM_MODE_4 = 4,
    CUSTOM_MODE_5 = 5,
    CUSTOM_MODE_6 = 6,
    CUSTOM_MODE_7 = 7,
};

enum class TrnMdPwrtrnVisDispVal : int32_t {
    SETTING_UNKNOWN = 0,
    CUSTOM_MODE_1 = 1,
    CUSTOM_MODE_2 = 2,
    CUSTOM_MODE_3 = 3,
    CUSTOM_MODE_4 = 4,
    CUSTOM_MODE_5 = 5,
    CUSTOM_MODE_6 = 6,
    CUSTOM_MODE_7 = 7,
};

enum class TrnMdRideHghtVisDispVal : int32_t {
    SETTING_UNKNOWN = 0,
    CUSTOM_MODE_1 = 1,
    CUSTOM_MODE_2 = 2,
    CUSTOM_MODE_3 = 3,
    CUSTOM_MODE_4 = 4,
    CUSTOM_MODE_5 = 5,
    CUSTOM_MODE_6 = 6,
    CUSTOM_MODE_7 = 7,
};

enum class TrnMdSndVisDispVal : int32_t {
    SETTING_UNKNOWN = 0,
    CUSTOM_MODE_1 = 1,
    CUSTOM_MODE_2 = 2,
    CUSTOM_MODE_3 = 3,
    CUSTOM_MODE_4 = 4,
    CUSTOM_MODE_5 = 5,
    CUSTOM_MODE_6 = 6,
    CUSTOM_MODE_7 = 7,
};

enum class TrnMdSpnsnVisDispVal : int32_t {
    SETTING_UNKNOWN = 0,
    CUSTOM_MODE_1 = 1,
    CUSTOM_MODE_2 = 2,
    CUSTOM_MODE_3 = 3,
    CUSTOM_MODE_4 = 4,
    CUSTOM_MODE_5 = 5,
    CUSTOM_MODE_6 = 6,
    CUSTOM_MODE_7 = 7,
};

enum class TrnMdStrgVisDispVal : int32_t {
    SETTING_UNKNOWN = 0,
    CUSTOM_MODE_1 = 1,
    CUSTOM_MODE_2 = 2,
    CUSTOM_MODE_3 = 3,
    CUSTOM_MODE_4 = 4,
    CUSTOM_MODE_5 = 5,
    CUSTOM_MODE_6 = 6,
    CUSTOM_MODE_7 = 7,
};

enum class TrnSwAct : int32_t {
    NO_ACTIVATION = 0,
    LEFT = 1,
    RIGHT = 2,
};

enum class TrnsOilLfRstRq : int32_t {
    No_Request = 0,
    Reset_Request_Active = 1,
};

enum class TrnsRngInhbtSt : int32_t {
    No_Range_Inhibit_Active = 0,
    Transmission_Inhibit_Active = 1,
    Transmission_Range_Re_Selection_Req = 2,
    Driveline_Not_Engaged = 3,
    Diagnostic_Inhibit_Active = 4,
};

enum class TrnsSftMdSt : int32_t {
    No_Override_Mode = 0,
    Performance_Mode = 1,
    Lift_Foot_Cornering_Mode = 2,
    Automatic_Grade_Braking_Mode = 3,
};

enum class TrnsTUTDMdSt : int32_t {
    No_Activation = 0,
    Driver_Shift_Control_Active = 1,
    Electronic_Range_Select_Active = 2,
};

enum class TrnsThrmlMngmntSt : int32_t {
    Normal = 0,
    Countermeasures_Active = 1,
    Driver_Intervention_Requested = 2,
};

enum class TrnsTrqCnvCltCmdMd : int32_t {
    Unlocked = 0,
    Transitioning = 1,
    Controlled_Slip = 2,
    Locked = 3,
    Not_Supported = 4,
};

enum class UIDInStatusSD : int32_t {
    Not_Present = 0,
    Present = 1,
};

enum class UTCMth : int32_t {
    Unknown = 0,
    January = 1,
    February = 2,
    March = 3,
    April = 4,
    May = 5,
    June = 6,
    July = 7,
    August = 8,
    September = 9,
    October = 10,
    November = 11,
    December = 12,
};

enum class UnrpsvDrvrCstChgSetReq : int32_t {
    NO_ACTION = 0,
    OFF = 1,
    ON = 2,
    RESERVED_3 = 3,
    RESERVED_4 = 4,
    RESERVED_5 = 5,
    RESERVED_6 = 6,
    RESERVED_7 = 7,
};

enum class UnrpsvDrvrCstCurrSetVal : int32_t {
    SETTING_UNKNOWN = 0,
    OFF = 1,
    ON = 2,
    RESERVED_3 = 3,
    RESERVED_4 = 4,
    RESERVED_5 = 5,
    RESERVED_6 = 6,
    RESERVED_7 = 7,
};

enum class UpftrRrAprchPrtctnChmEvntStat : int32_t {
    No_Action = 0,
    Active = 1,
    Cancel_Chime = 2,
};

enum class UpftrRrAprchPrtctnIndReq : int32_t {
    No_Indication = 0,
    Armed = 1,
    Deactivated = 2,
    Triggered = 3,
    Not_Available = 4,
};

enum class UpftrSnwPlwIndReq : int32_t {
    No_Indication = 0,
    Active = 1,
    Active_with_Headlamps_Disabled = 2,
    Not_Available = 3,
};

enum class UpftrVehStrtEnblIndReq : int32_t {
    No_Indication = 0,
    On = 1,
    Off = 2,
    Not_Available = 3,
};

enum class V2VEvnt1ChmEvntStat : int32_t {
    No_Action = 0,
    Active = 1,
    Cancel_Chime = 2,
};

enum class V2VEvnt2ChmEvntStat : int32_t {
    No_Action = 0,
    Active = 1,
    Cancel_Chime = 2,
};

enum class V2VEvnt3ChmEvntStat : int32_t {
    No_Action = 0,
    Active = 1,
    Cancel_Chime = 2,
};

enum class V2VEvnt4ChmEvntStat : int32_t {
    No_Action = 0,
    Active = 1,
    Cancel_Chime = 2,
};

enum class V2VEvnt5ChmEvntStat : int32_t {
    No_Action = 0,
    Active = 1,
    Cancel_Chime = 2,
};

enum class V2VEvnt6ChmEvntStat : int32_t {
    No_Action = 0,
    Active = 1,
    Cancel_Chime = 2,
};

enum class V2VT_EmrgVehWrnDir : int32_t {
    Not_Available = 0,
    Front = 1,
    Right = 2,
    Back = 3,
    Left = 4,
};

enum class V2VT_LgtActlPhs : int32_t {
    Unknown = 0,
    Green = 1,
    Yellow = 2,
    Red = 3,
};

enum class V2VT_LgtPhsAtArvl : int32_t {
    Unknown = 0,
    Green = 1,
    Yellow = 2,
    Red = 3,
};

enum class V2VT_LgtVldDir : int32_t {
    Unknown = 0,
    Straight = 1,
    Left = 2,
    Right = 3,
    All_Direction = 4,
};

enum class V2VT_WrnIndReq : int32_t {
    No_Indication = 0,
    Hard_Braking = 1,
    Slippery_Road = 2,
    Stationary_Vehicle = 3,
    Emergency_Vehicle = 4,
    Intersection_Collision_Left = 5,
    Intersection_Collision_Right = 6,
    Construction_Ahead = 7,
    Green_Light_Optimal_Speed_Advisory = 8,
    Intersection_Stop = 9,
};

enum class V2XOprtlStsInd : int32_t {
    Unknown = 0,
    Off = 1,
    Operational_Alerts_Enabled = 2,
    Operational_Alerts_Disabled = 3,
    Operation_V2X_Disabled = 4,
    Manufacturing = 5,
    Service = 6,
    Failed = 7,
};

enum class VCAHBS_CtlAval : int32_t {
    Not_Available = 0,
    Available = 1,
};

enum class VCAHBS_CurrSeltnVal : int32_t {
    Unknown = 0,
    On = 1,
    Off = 2,
};

enum class VCAHBS_UsrCtlAllwd : int32_t {
    Allowed = 0,
    Not_Allowed = 1,
};

enum class VCCLR_CrgBedLmp : int32_t {
    No_Action = 0,
    On = 1,
    Off = 2,
};

enum class VCCLR_CrgLmp : int32_t {
    No_Action = 0,
    On = 1,
    Off = 2,
};

enum class VCCLR_CrgLmpHtch : int32_t {
    No_Action = 0,
    On = 1,
    Off = 2,
};

enum class VCCLR_CrgMirLmp : int32_t {
    No_Action = 0,
    On = 1,
    Off = 2,
};

enum class VCCLS_AllCrgLmpUsrCtlAllwd : int32_t {
    Allowed = 0,
    Not_Allowed = 1,
};

enum class VCCLS_CrgBedLmpAval : int32_t {
    Not_Available = 0,
    Available = 1,
};

enum class VCCLS_CrgBedLmpCurrSeltnVal : int32_t {
    Unknown = 0,
    On = 1,
    Off = 2,
};

enum class VCCLS_CrgLmpAval : int32_t {
    Not_Available = 0,
    Available = 1,
};

enum class VCCLS_CrgLmpCurrSeltnVal : int32_t {
    Unknown = 0,
    On = 1,
    Off = 2,
};

enum class VCCLS_CrgLmpHtchAval : int32_t {
    Not_Available = 0,
    Available = 1,
};

enum class VCCLS_CrgLmpHtchCurrSeltnVal : int32_t {
    Unknown = 0,
    On = 1,
    Off = 2,
};

enum class VCCLS_CrgMirLmpAval : int32_t {
    Not_Available = 0,
    Available = 1,
};

enum class VCCLS_CrgMirLmpCurrSeltnVal : int32_t {
    Unknown = 0,
    On = 1,
    Off = 2,
};

enum class VCCSLS_CtlAval : int32_t {
    Not_Available = 0,
    Available = 1,
};

enum class VCCSLS_CurrSeltnVal : int32_t {
    Unknown = 0,
    On = 1,
    Off = 2,
};

enum class VCDLR_DomeDft : int32_t {
    No_Action = 0,
    On = 1,
    Off = 2,
};

enum class VCDLR_DomeLgt : int32_t {
    No_Action = 0,
    On = 1,
    Off = 2,
};

enum class VCDLS_DomeDftAval : int32_t {
    Not_Available = 0,
    Available = 1,
};

enum class VCDLS_DomeDftCurrSeltnVal : int32_t {
    Unknown = 0,
    On = 1,
    Off = 2,
};

enum class VCDLS_DomeLgtAval : int32_t {
    Not_Available = 0,
    Available = 1,
};

enum class VCDLS_DomeLgtCurrSeltnVal : int32_t {
    Unknown = 0,
    On = 1,
    Off = 2,
};

enum class VCFLFS_CtlAval : int32_t {
    Not_Available = 0,
    Available = 1,
};

enum class VCFLFS_CurrSeltnVal : int32_t {
    Unknown = 0,
    On = 1,
    Off = 2,
};

enum class VCFLFS_UsrCtlAllwd : int32_t {
    Allowed = 0,
    Not_Allowed = 1,
};

enum class VCFLRS_CtlAval : int32_t {
    Not_Available = 0,
    Available = 1,
};

enum class VCFLRS_CurrSeltnVal : int32_t {
    Unknown = 0,
    On = 1,
    Off = 2,
};

enum class VCFLRS_UsrCtlAllwd : int32_t {
    Allowed = 0,
    Not_Allowed = 1,
};

enum class VCPWLS_CtlAval : int32_t {
    Not_Available = 0,
    Available = 1,
};

enum class VCPWLS_CurrSeltnVal : int32_t {
    Unknown = 0,
    On = 1,
    Off = 2,
};

enum class VCTLS_CtlAval : int32_t {
    Not_Available = 0,
    Available = 1,
};

enum class VCTLS_CurrSeltnVal : int32_t {
    Unknown = 0,
    On = 1,
    Left = 2,
    Right = 3,
    Off = 4,
};

enum class VCTLS_UsrCtlAllwd : int32_t {
    Allowed = 0,
    Not_Allowed = 1,
};

enum class VCU_Internal_DispMeasSysExtnd : int32_t {
    US = 0,
    IMPERIAL = 1,
    Metric_KM_L = 2,
    Metric_L_100KM = 3,
};

enum class VCU_Internal_JKDPhase1IntChmEvSt : int32_t {
    NO_ACTION = 0,
    ACTIVE = 1,
    CANCEL_CHIME = 2,
};

enum class VCU_Internal_JKDPhase2IntChmEvSt : int32_t {
    NO_ACTION = 0,
    ACTIVE = 1,
    CANCEL_CHIME = 2,
};

enum class VCU_Internal_RearPedColIntChmEvSt : int32_t {
    NO_ACTION = 0,
    ACTIVE = 1,
    CANCEL_CHIME = 2,
};

enum class VCU_Internal_RearPedColNotIntChmEvSt : int32_t {
    NO_ACTION = 0,
    ACTIVE = 1,
    CANCEL_CHIME = 2,
};

enum class VCU_Internal_VehiclePowerMode : int32_t {
    Off = 0,
    Accessory = 1,
    Run = 2,
    Start = 3,
    Propulsion = 4,
};

enum class VICMI1P_ADShfSysHlthStsPriAuth : int32_t {
    Unknown = 0,
    Normal = 1,
    Degraded_Functional = 2,
    Failed_in_Range_Functional = 3,
    Failed_Defaulted = 4,
};

enum class VICMI1P_AutoDrvShfSysStsPriAuth : int32_t {
    Unknown = 0,
    Shift_In_Progress = 1,
    Control_Override = 2,
    Error = 3,
    Standby = 4,
};

enum class VICMI1P_AuxPwrModStsAuth : int32_t {
    NormConvNormTempLo = 0,
    NormConvNormTempHi = 1,
    Derated = 2,
    HighTempNearDerated = 3,
    Dsbld = 4,
    HiTempDsbldDerated = 5,
    Indeterminate = 6,
    CommandedOff = 7,
    OverTempConvDerated = 8,
    NormLoad = 9,
    NearDerated = 10,
};

enum class VKI2P_FobAvlStsAuth : int32_t {
    No_Action = 0,
    Disabled = 1,
    Enabled = 2,
    Fail = 3,
};

enum class VMMP_VehMtnMvmtStatAuth : int32_t {
    Parked = 0,
    Neutral = 1,
    Forward = 2,
    Reverse = 3,
    Invalid = 4,
};

enum class VPMGI1P_ITAux1CamConctStsAuth : int32_t {
    Unknown = 0,
    Not_Connected = 1,
    Connected = 2,
};

enum class VPMGI1P_ITAux2CamConctStsAuth : int32_t {
    Unknown = 0,
    Not_Connected = 1,
    Connected = 2,
};

enum class VSADP_FuelModeStsAuth : int32_t {
    Unknown = 0,
    Gasoline_Mode = 1,
    Natural_Gas_Mode = 2,
    Liquified_Petroleum_Gas_Mode = 3,
    Alternative_Fuel_Cut_off_Active = 4,
};

enum class VSADP_VehSpdAvgDrvnSrcAuth : int32_t {
    Transmission_Output_Speed = 0,
    Wheel_Speed = 1,
};

enum class VSEMOpEndAllwdSts : int32_t {
    Unknown = 0,
    Not_Allowed = 1,
    Allowed = 2,
};

enum class VSEMOpModeCurrSetVal : int32_t {
    Time = 0,
    State_of_Charge = 1,
};

enum class VSEMOpVirtCtlReq : int32_t {
    No_Request = 0,
    Initiate_SOC_Extension = 1,
    Initiate_Time_Extension = 2,
    End_Extension = 3,
    Request_to_Update_Extension = 4,
    Request_to_Update_Extension_Cancelled = 5,
};

enum class VTDDrvIndReq : int32_t {
    OFF = 0,
    ON = 1,
    Num0_5_Hz = 2,
    Num1_Hz = 3,
    Num2_Hz = 4,
    Num4_Hz = 5,
    RESERVED = 6,
};

enum class ValetMdReq : int32_t {
    NoAction = 0,
    SetPIN = 1,
    ClearPIN = 2,
};

enum class ValetMdResponse : int32_t {
    No_Action = 0,
    Valet_Active_PIN_Updated = 1,
    Valet_Active_PIN_Invalid = 2,
    Valet_Inactive_PIN_Valid = 3,
};

enum class VarLgtTransGlsRfTntLvlPnl1Set : int32_t {
    Dark = 0,
    Clear_Level_1 = 1,
    Clear_Level_2 = 2,
    Clear_Level_3 = 3,
    Clear_Level_4 = 4,
    Clear_Level_5 = 5,
    Clear_Level_6 = 6,
};

enum class VarLgtTransGlsRfTntLvlPnl2Set : int32_t {
    Dark = 0,
    Clear_Level_1 = 1,
    Clear_Level_2 = 2,
    Clear_Level_3 = 3,
    Clear_Level_4 = 4,
    Clear_Level_5 = 5,
    Clear_Level_6 = 6,
};

enum class VarLgtTransGlsRfTntLvlPnl3Set : int32_t {
    Dark = 0,
    Clear_Level_1 = 1,
    Clear_Level_2 = 2,
    Clear_Level_3 = 3,
    Clear_Level_4 = 4,
    Clear_Level_5 = 5,
    Clear_Level_6 = 6,
};

enum class VarLgtTransGlsRfTntLvlPnl4Set : int32_t {
    Dark = 0,
    Clear_Level_1 = 1,
    Clear_Level_2 = 2,
    Clear_Level_3 = 3,
    Clear_Level_4 = 4,
    Clear_Level_5 = 5,
    Clear_Level_6 = 6,
};

enum class VarLgtTransGlsRfTntLvlPnl5Set : int32_t {
    Dark = 0,
    Clear_Level_1 = 1,
    Clear_Level_2 = 2,
    Clear_Level_3 = 3,
    Clear_Level_4 = 4,
    Clear_Level_5 = 5,
    Clear_Level_6 = 6,
};

enum class VarLgtTransGlsRfTntLvlPnl6Set : int32_t {
    Dark = 0,
    Clear_Level_1 = 1,
    Clear_Level_2 = 2,
    Clear_Level_3 = 3,
    Clear_Level_4 = 4,
    Clear_Level_5 = 5,
    Clear_Level_6 = 6,
};

enum class VarLgtTransGlsRfTntLvlPnl7Set : int32_t {
    Dark = 0,
    Clear_Level_1 = 1,
    Clear_Level_2 = 2,
    Clear_Level_3 = 3,
    Clear_Level_4 = 4,
    Clear_Level_5 = 5,
    Clear_Level_6 = 6,
};

enum class VarLgtTransGlsRfTntLvlPnl8Set : int32_t {
    Dark = 0,
    Clear_Level_1 = 1,
    Clear_Level_2 = 2,
    Clear_Level_3 = 3,
    Clear_Level_4 = 4,
    Clear_Level_5 = 5,
    Clear_Level_6 = 6,
};

enum class VarLgtTransGlsRfTntLvlSldrSet : int32_t {
    Clear_Level_1 = 0,
    Clear_Level_2 = 1,
    Clear_Level_3 = 2,
    Clear_Level_4 = 3,
    Clear_Level_5 = 4,
    Clear_Level_6 = 5,
};

enum class VarLgtTransGlsRfTntVirtCtlAval : int32_t {
    Not_Available = 0,
    Available = 1,
};

enum class VehExtdFAXVCModeChmEvntStat : int32_t {
    No_Action = 0,
    Active = 1,
    Cancel_Chime = 2,
};

enum class VehLctrLghtsCstCurSetVal : int32_t {
    SETTING_UNKNOWN = 0,
    OFF = 1,
    ON = 2,
    On_Without_Animation = 3,
    RESERVED_4 = 4,
    RESERVED_5 = 5,
    RESERVED_6 = 6,
    RESERVED_7 = 7,
};

enum class VehLctrLtsCstChgSetReq : int32_t {
    NO_ACTION = 0,
    OFF = 1,
    ON = 2,
    On_Without_Animation = 3,
    RESERVED_4 = 4,
    RESERVED_5 = 5,
    RESERVED_6 = 6,
    RESERVED_7 = 7,
};

enum class VehLocSts : int32_t {
    Not_Within_Stored_Regions = 0,
    Within_Stored_Region_1 = 1,
    Within_Stored_Region_2 = 2,
    Within_Stored_Region_3 = 3,
    Within_Stored_Region_4 = 4,
};

enum class VehMassEstSts : int32_t {
    Undetermined = 0,
    Degraded = 1,
    Normal = 2,
};

enum class VehNDtctgFAXVCErrChmEvntStat : int32_t {
    No_Action = 0,
    Active = 1,
    Cancel_Chime = 2,
};

enum class VehNeutAbuseIndReq : int32_t {
    No_Indication = 0,
    Speed_Too_High = 1,
    Distance_Too_Far = 2,
};

enum class VehRefulngStat : int32_t {
    Inactive = 0,
    Wait_to_Refuel = 1,
    Ready_to_Refuel = 2,
};

enum class VehSpdAcurLvl : int32_t {
    Unknown = 0,
    Two_and_Half_Percent = 1,
    One_Percent = 2,
};

enum class VehSpdBsgDispStat : int32_t {
    Unknown = 0,
    Enabled = 1,
    Disabled = 2,
};

enum class VehStbCompMdCurStat : int32_t {
    On = 0,
    Off = 1,
};

enum class VehStbCompMdCurrStReq : int32_t {
    No_action = 0,
    OFF = 1,
    ON = 2,
};

enum class VehStbEnhCurrStReq : int32_t {
    No_action = 0,
    OFF = 1,
    ON = 2,
};

enum class VehStbEnhcmntCurStat : int32_t {
    On = 0,
    Off = 1,
};

enum class VehtoHomeWrnIndReq : int32_t {
    No_Indication = 0,
    Home_Backup_Request = 1,
    Home_Backup_Active = 2,
};

enum class VehtoLdWrnIndReq : int32_t {
    No_Indication = 0,
    Charge_Port_Load_Limit_Met_Soon = 1,
    Unplug_Device_Reconnect = 2,
    Service_Charge_Port = 3,
    Charge_Port_Temporarily_Unavailable = 4,
};

enum class VhSpdCntlSystmTyp : int32_t {
    No_Vehicle_Speed_Control = 0,
    Conventional_Cruise_Control = 1,
    Adaptive_Cruise_Control = 2,
};

enum class VidTrlrTowPhs2ChmEvntStat : int32_t {
    NO_ACTION = 0,
    ACTIVE = 1,
    CANCEL_CHIME = 2,
};

enum class VirtCtlAccCkt1CurrSeltnVal : int32_t {
    Unknown = 0,
    On = 1,
    Off = 2,
    Failed = 3,
};

enum class VirtCtlAccCkt1Req : int32_t {
    No_Action = 0,
    Momentary_On = 1,
    Momentary_Lightbar_On = 2,
    Latch_On = 3,
    Latch_Lightbar_On = 4,
    Off = 5,
};

enum class VirtCtlAccCkt2CurrSeltnVal : int32_t {
    Unknown = 0,
    On = 1,
    Off = 2,
    Failed = 3,
};

enum class VirtCtlAccCkt2Req : int32_t {
    No_Action = 0,
    Momentary_On = 1,
    Momentary_Lightbar_On = 2,
    Latch_On = 3,
    Latch_Lightbar_On = 4,
    Off = 5,
};

enum class VirtCtlAccCkt3CurrSeltnVal : int32_t {
    Unknown = 0,
    On = 1,
    Off = 2,
    Failed = 3,
};

enum class VirtCtlAccCkt3Req : int32_t {
    No_Action = 0,
    Momentary_On = 1,
    Momentary_Lightbar_On = 2,
    Latch_On = 3,
    Latch_Lightbar_On = 4,
    Off = 5,
};

enum class VirtCtlAccCkt4CurrSeltnVal : int32_t {
    Unknown = 0,
    On = 1,
    Off = 2,
    Failed = 3,
};

enum class VirtCtlAccCkt4Req : int32_t {
    No_Action = 0,
    Momentary_On = 1,
    Momentary_Lightbar_On = 2,
    Latch_On = 3,
    Latch_Lightbar_On = 4,
    Off = 5,
};

enum class VirtCtlAccCkt5CurrSeltnVal : int32_t {
    Unknown = 0,
    On = 1,
    Off = 2,
    Failed = 3,
};

enum class VirtCtlAccCkt5Req : int32_t {
    No_Action = 0,
    Momentary_On = 1,
    Momentary_Lightbar_On = 2,
    Latch_On = 3,
    Latch_Lightbar_On = 4,
    Off = 5,
};

enum class VirtCtlAccCkt6CurrSeltnVal : int32_t {
    Unknown = 0,
    On = 1,
    Off = 2,
    Failed = 3,
};

enum class VirtCtlAccCkt6Req : int32_t {
    No_Action = 0,
    Momentary_On = 1,
    Momentary_Lightbar_On = 2,
    Latch_On = 3,
    Latch_Lightbar_On = 4,
    Off = 5,
};

enum class VirtCtlAccCktCtlAval : int32_t {
    Not_Available = 0,
    Available = 1,
};

enum class VirtCtlAutoHiBmReq : int32_t {
    No_Action = 0,
    On = 1,
    Off = 2,
};

enum class VirtCtlAuxAlrmSnsCtlAval : int32_t {
    Not_Available = 0,
    Available = 1,
};

enum class VirtCtlAuxAlrmSnsrReq : int32_t {
    No_Action = 0,
    On = 1,
    Off = 2,
};

enum class VirtCtlAuxAlrmSnsrReqAuth : int32_t {
    No_Action = 0,
    On = 1,
    Off = 2,
};

enum class VirtCtlBkGlsShdCtlAval : int32_t {
    Not_Available = 0,
    Available = 1,
};

enum class VirtCtlChldSftyLckReq : int32_t {
    No_Action = 0,
    On = 1,
    Off = 2,
};

enum class VirtCtlDrvModeReq : int32_t {
    Normal = 0,
    Powertrain_Sport = 1,
    Chassis_Sport = 2,
    Eco = 3,
    Mountain = 4,
    Hold = 5,
    Snow_Ice = 6,
    Start_Stop = 7,
    Tow_Haul = 8,
    Grade_Braking_Disable = 9,
    Speed_Matching = 10,
    Track = 11,
    Exhaust_Brake = 12,
    Normal_AWD = 13,
    ManualRegen = 14,
    Crawl = 15,
    Custom = 16,
    Personal = 17,
    Baja = 18,
    Max_Power = 19,
    Offroad = 20,
    Reserved_2 = 21,
    Reserved_3 = 22,
    Reserved_4 = 23,
    Reserved_5 = 24,
    Reserved_6 = 25,
    Reserved_7 = 26,
    Reserved_8 = 27,
    Reserved_9 = 28,
    Reserved_10 = 29,
    No_Mode_Change_Requested = 30,
    Critically_Disabled = 31,
};

enum class VirtCtlFgLmpFrtReq : int32_t {
    No_Action = 0,
    On = 1,
    Off = 2,
};

enum class VirtCtlFgLmpRrReq : int32_t {
    No_Action = 0,
    On = 1,
    Off = 2,
};

enum class VirtCtlGlsRfPwrShdPrvcyReqd : int32_t {
    No_Request = 0,
    Privacy = 1,
    Visibility = 2,
};

enum class VirtCtlGlsRfTntAutoSetReq : int32_t {
    No_Request = 0,
    Active = 1,
    Inactive = 2,
};

enum class VirtCtlGlsRfTntLvlPnl1Req : int32_t {
    No_Request = 0,
    Dark = 1,
    Clear_Level_1 = 2,
    Clear_Level_2 = 3,
    Clear_Level_3 = 4,
    Clear_Level_4 = 5,
    Clear_Level_5 = 6,
    Clear_Level_6 = 7,
};

enum class VirtCtlGlsRfTntLvlPnl2Req : int32_t {
    No_Request = 0,
    Dark = 1,
    Clear_Level_1 = 2,
    Clear_Level_2 = 3,
    Clear_Level_3 = 4,
    Clear_Level_4 = 5,
    Clear_Level_5 = 6,
    Clear_Level_6 = 7,
};

enum class VirtCtlGlsRfTntLvlPnl3Req : int32_t {
    No_Request = 0,
    Dark = 1,
    Clear_Level_1 = 2,
    Clear_Level_2 = 3,
    Clear_Level_3 = 4,
    Clear_Level_4 = 5,
    Clear_Level_5 = 6,
    Clear_Level_6 = 7,
};

enum class VirtCtlGlsRfTntLvlPnl4Req : int32_t {
    No_Request = 0,
    Dark = 1,
    Clear_Level_1 = 2,
    Clear_Level_2 = 3,
    Clear_Level_3 = 4,
    Clear_Level_4 = 5,
    Clear_Level_5 = 6,
    Clear_Level_6 = 7,
};

enum class VirtCtlGlsRfTntLvlPnl5Req : int32_t {
    No_Request = 0,
    Dark = 1,
    Clear_Level_1 = 2,
    Clear_Level_2 = 3,
    Clear_Level_3 = 4,
    Clear_Level_4 = 5,
    Clear_Level_5 = 6,
    Clear_Level_6 = 7,
};

enum class VirtCtlGlsRfTntLvlPnl6Req : int32_t {
    No_Request = 0,
    Dark = 1,
    Clear_Level_1 = 2,
    Clear_Level_2 = 3,
    Clear_Level_3 = 4,
    Clear_Level_4 = 5,
    Clear_Level_5 = 6,
    Clear_Level_6 = 7,
};

enum class VirtCtlGlsRfTntLvlPnl7Req : int32_t {
    No_Request = 0,
    Dark = 1,
    Clear_Level_1 = 2,
    Clear_Level_2 = 3,
    Clear_Level_3 = 4,
    Clear_Level_4 = 5,
    Clear_Level_5 = 6,
    Clear_Level_6 = 7,
};

enum class VirtCtlGlsRfTntLvlPnl8Req : int32_t {
    No_Request = 0,
    Dark = 1,
    Clear_Level_1 = 2,
    Clear_Level_2 = 3,
    Clear_Level_3 = 4,
    Clear_Level_4 = 5,
    Clear_Level_5 = 6,
    Clear_Level_6 = 7,
};

enum class VirtCtlGlsRfTntLvlSldrReq : int32_t {
    No_Request = 0,
    Clear_Level_1 = 1,
    Clear_Level_2 = 2,
    Clear_Level_3 = 3,
    Clear_Level_4 = 4,
    Clear_Level_5 = 5,
    Clear_Level_6 = 6,
};

enum class VirtCtlHtdVntStSwFrtAval : int32_t {
    Not_Available = 0,
    Available = 1,
};

enum class VirtCtlHtdVntStSwRrAval : int32_t {
    Not_Available = 0,
    Available = 1,
};

enum class VirtCtlIntrCmptRelCtlAval : int32_t {
    Not_Available = 0,
    Available = 1,
};

enum class VirtCtlPrvcySwAval : int32_t {
    Not_Available = 0,
    Available = 1,
};

enum class VirtCtlPwrShdBkGlsReq : int32_t {
    No_Request = 0,
    Fully_Open = 1,
    Fully_Closed = 2,
};

enum class VirtCtlPwrShdLRReq : int32_t {
    No_Request = 0,
    Fully_Open = 1,
    Fully_Closed = 2,
};

enum class VirtCtlPwrShdRRReq : int32_t {
    No_Request = 0,
    Fully_Open = 1,
    Fully_Closed = 2,
};

enum class VirtCtlPwrWndLckoutReq : int32_t {
    No_Action = 0,
    On = 1,
    Off = 2,
};

enum class VirtCtlRrWndShdCtlAval : int32_t {
    Not_Available = 0,
    Available = 1,
};

enum class VirtCtlTskLmpReq : int32_t {
    No_Action = 0,
    On = 1,
    Left = 2,
    Right = 3,
    Off = 4,
};

enum class VirtCtlVehOffSwReq : int32_t {
    Not_Pressed = 0,
    Pressed = 1,
    Press_and_Hold = 2,
};

enum class VirtFrtPsStInfoDspFRstReq : int32_t {
    No_Action = 0,
    Force_Reset = 1,
};

enum class VirtFrtPsStInfoDspPwrBtnCtlAval : int32_t {
    Not_Available = 0,
    Available = 1,
};

enum class VirtFrtPsStInfoDspPwrBtnReq : int32_t {
    No_Action = 0,
    Press_And_Release = 1,
    Press_And_Hold = 2,
};

enum class VirtKeyPinToStrtMaxAtmp : int32_t {
    No_Value = 0,
    Num1_Attempt = 1,
    Num2_Attempts = 2,
    Num3_Attempts = 3,
    Num4_Attempts = 4,
    Num5_Attempts = 5,
    Num6_Attempts = 6,
    Num7_Attempts = 7,
    Num8_Attempts = 8,
    Num9_Attempts = 9,
    Num10_Attempts = 10,
    Num11_Attempts = 11,
    Num12_Attempts = 12,
    Num13_Attempts = 13,
    Num14_Attempts = 14,
    Num15_Attempts = 15,
};

enum class VirtKeyPinToStrtPINLgth : int32_t {
    No_Value = 0,
    Num1_Digit = 1,
    Num2_Digits = 2,
    Num3_Digits = 3,
    Num4_Digits = 4,
    Num5_Digits = 5,
    Num6_Digits = 6,
    Num7_Digits = 7,
};

enum class VirtKeyPinToStrtRmnAtmp : int32_t {
    No_Value = 0,
    Num1_Attempt = 1,
    Num2_Attempts = 2,
    Num3_Attempts = 3,
    Num4_Attempts = 4,
    Num5_Attempts = 5,
    Num6_Attempts = 6,
    Num7_Attempts = 7,
    Num8_Attempts = 8,
    Num9_Attempts = 9,
    Num10_Attempts = 10,
    Num11_Attempts = 11,
    Num12_Attempts = 12,
    Num13_Attempts = 13,
    Num14_Attempts = 14,
    Num15_Attempts = 15,
};

enum class VirtKeyPinToStrtScrnReq : int32_t {
    No_Screen = 0,
    Pin_Entry_Screen = 1,
    Retrigger_Pin_Entry_Screen = 2,
    Pin_Confirmed_Screen = 3,
    Pin_Authentication_Timed_Out_Screen = 4,
    Pin_Rejected_Screen = 5,
    Lockout_Screen = 6,
    NFC_Authenticated_Screen = 7,
    NFC_Tap_Required_Screen = 8,
    Retry_Pin_Entry_Screen = 9,
};

enum class VirtOnePedDrvCtlAval : int32_t {
    Not_Available = 0,
    Available = 1,
};

enum class VirtOnePedDrvReq : int32_t {
    No_Action = 0,
    On = 1,
    Off = 2,
};

enum class VirtOnePedDrvUserCtlAllwd : int32_t {
    Allowed = 0,
    Not_Allowed = 1,
};

enum class VirtRrStInfoDsp1FRstReq : int32_t {
    No_Action = 0,
    Force_Reset = 1,
};

enum class VirtRrStInfoDsp1PwrBtnCtlAval : int32_t {
    Not_Available = 0,
    Available = 1,
};

enum class VirtRrStInfoDsp1PwrBtnReq : int32_t {
    No_Action = 0,
    Press_And_Release = 1,
    Press_And_Hold = 2,
};

enum class VirtRrStInfoDsp2FRstReq : int32_t {
    No_Action = 0,
    Force_Reset = 1,
};

enum class VirtRrStInfoDsp2PwrBtnCtlAval : int32_t {
    Not_Available = 0,
    Available = 1,
};

enum class VirtRrStInfoDsp2PwrBtnReq : int32_t {
    No_Action = 0,
    Press_And_Release = 1,
    Press_And_Hold = 2,
};

enum class VwgSysUndrbdyCamWshReq : int32_t {
    Unknown = 0,
    Active = 1,
    Inactive = 2,
};

enum class VwgVwprtReq : int32_t {
    Unknown = 0,
    Front_Perspective = 1,
    Front_Junction = 2,
    Front_Overhead = 3,
    Side_Forward = 4,
    Rear_Perspective = 5,
    Rear_Junction = 6,
    Rear_Overhead = 7,
    Side_Rearward = 8,
    Bowl = 9,
    Zoomed_Bowl = 10,
    Japan = 11,
    Rear_Hitch = 12,
    Bed_Hitch = 13,
    Trailer_Aux1 = 14,
    Trailer_Towing_Mirror = 15,
    L_R_Trailer_Towing_Mirror = 16,
    Trailer_Aux1_Combined = 17,
    Trailer_Aux2 = 18,
    Invisible_Trailer = 19,
    Cargo_Bed = 20,
    Curb_Overhead = 21,
    Curb = 22,
    No_Request = 23,
    Transparent_Hood = 24,
};

enum class VwgVwprtReqExtd : int32_t {
    Unknown = 0,
    No_Request = 1,
    Underbody_Forward = 2,
    Underbody_Rearward = 3,
    Underbody_Forward_Split = 4,
    Underbody_Forward_Rearward_Split = 5,
};

enum class VwgVwprtSeltn : int32_t {
    Unknown = 0,
    Front_Perspective = 1,
    Front_Junction = 2,
    Front_Overhead = 3,
    Side_Forward = 4,
    Rear_Perspective = 5,
    Rear_Junction = 6,
    Rear_Overhead = 7,
    Side_Rearward = 8,
    Bowl = 9,
    Zoomed_Bowl = 10,
    Japan = 11,
    Rear_Hitch = 12,
    Bed_Hitch = 13,
    Trailer_Aux1 = 14,
    Trailer_Towing_Mirror = 15,
    L_R_Trailer_Towing_Mirror = 16,
    Trailer_Aux1_Combined = 17,
    Trailer_Aux2 = 18,
    Invisible_Trailer = 19,
    Cargo_Bed = 20,
    Curb_Overhead = 21,
    Curb = 22,
    No_Request = 23,
    Transparent_Hood = 24,
};

enum class VwgVwprtSeltnExtd : int32_t {
    Unknown = 0,
    No_Request = 1,
    Underbody_Forward = 2,
    Underbody_Rearward = 3,
    Underbody_Forward_Split = 4,
    Underbody_Forward_Rearward_Split = 5,
};

enum class VwgVwprtSts : int32_t {
    Unknown = 0,
    Front_Perspective = 1,
    Front_Junction = 2,
    Front_Overhead = 3,
    Side_Forward = 4,
    Rear_Perspective = 5,
    Rear_Junction = 6,
    Rear_Overhead = 7,
    Side_Rearward = 8,
    Bowl = 9,
    Zoomed_Bowl = 10,
    Japan = 11,
    Rear_Hitch = 12,
    Bed_Hitch = 13,
    Trailer_Aux1 = 14,
    Trailer_Towing_Mirror = 15,
    L_R_Trailer_Towing_Mirror = 16,
    Trailer_Aux1_Combined = 17,
    Trailer_Aux2 = 18,
    Invisible_Trailer = 19,
    Cargo_Bed = 20,
    Curb_Overhead = 21,
    Curb = 22,
    No_Request = 23,
    Transparent_Hood = 24,
};

enum class VwgVwprtStsExtd : int32_t {
    Unknown = 0,
    No_Request = 1,
    Underbody_Forward = 2,
    Underbody_Rearward = 3,
    Underbody_Forward_Split = 4,
    Underbody_Forward_Rearward_Split = 5,
};

enum class VwgVwprtTopDnVwSeltn : int32_t {
    Unknown = 0,
    No_Request = 1,
    Top_Down_View = 2,
};

enum class WCM_LCMDataMsgStat : int32_t {
    No_Action = 0,
    Acknowledge = 1,
};

enum class WCM_LCMFileTrans : int32_t {
    No_Action = 0,
    Begin_Transfer = 1,
    Successful_Block_Transfer = 2,
    Cancel_Transfer = 3,
    Retry_Last_Block = 4,
};

enum class WRDSP_LFAuth : int32_t {
    Unknown = 0,
    Not_Supported = 1,
    Invalid = 2,
    Forward = 3,
    Reverse = 4,
};

enum class WRDSP_LRAuth : int32_t {
    Unknown = 0,
    Not_Supported = 1,
    Invalid = 2,
    Forward = 3,
    Reverse = 4,
};

enum class WRDSP_RFAuth : int32_t {
    Unknown = 0,
    Not_Supported = 1,
    Invalid = 2,
    Forward = 3,
    Reverse = 4,
};

enum class WRDSP_RRAuth : int32_t {
    Unknown = 0,
    Not_Supported = 1,
    Invalid = 2,
    Forward = 3,
    Reverse = 4,
};

enum class WhlCntrCapLgtCommSts : int32_t {
    No_Center_Cap_Lights_Present = 0,
    Not_Connected = 1,
    Connecton_Pending = 2,
    Connected = 3,
    Connection_Fault = 4,
};

enum class WhlCntrCapLgtLFCmd : int32_t {
    No_Action = 0,
    Off = 1,
    On = 2,
};

enum class WhlCntrCapLgtLRCmd : int32_t {
    No_Action = 0,
    Off = 1,
    On = 2,
};

enum class WhlCntrCapLgtRFCmd : int32_t {
    No_Action = 0,
    Off = 1,
    On = 2,
};

enum class WhlCntrCapLgtRRCmd : int32_t {
    No_Action = 0,
    Off = 1,
    On = 2,
};

enum class WhlSlpSt : int32_t {
    No_Slip_Detected = 0,
    Negative_Slip_Detected = 1,
    Positive_Slip_Detected = 2,
    Slip_Detection_Fault = 3,
};

enum class WlkAwyLckCstChgSetReq : int32_t {
    NO_ACTION = 0,
    OFF = 1,
    ON = 2,
    ON_WITH_CHIRP = 3,
    RESERVED_4 = 4,
    RESERVED_5 = 5,
    RESERVED_6 = 6,
    RESERVED_7 = 7,
};

enum class WlkAwyLckCstCurSetVal : int32_t {
    SETTING_UNKNOWN = 0,
    OFF = 1,
    ON = 2,
    ON_WITH_CHIRP = 3,
    RESERVED_4 = 4,
    RESERVED_5 = 5,
    RESERVED_6 = 6,
    RESERVED_7 = 7,
};

enum class WlkAwyLkInhbtChmEvSt : int32_t {
    NO_ACTION = 0,
    ACTIVE = 1,
    CANCEL_CHIME = 2,
};

enum class WndPstnStsLF : int32_t {
    Denormalized = 0,
    Fully_Closed = 1,
    Less_Than_Position_A = 2,
    Position_A = 3,
    Greater_Than_A_but_less_than_Position_C = 4,
    Position_C = 5,
    Greater_than_Position_C_but_less_than_Fully_open = 6,
    Fully_Open = 7,
};

enum class WndPstnStsLR : int32_t {
    Denormalized = 0,
    Fully_Closed = 1,
    Less_Than_Position_A = 2,
    Position_A = 3,
    Greater_Than_A_but_less_than_Position_C = 4,
    Position_C = 5,
    Greater_than_Position_C_but_less_than_Fully_open = 6,
    Fully_Open = 7,
};

enum class WndPstnStsRF : int32_t {
    Denormalized = 0,
    Fully_Closed = 1,
    Less_Than_Position_A = 2,
    Position_A = 3,
    Greater_Than_A_but_less_than_Position_C = 4,
    Position_C = 5,
    Greater_than_Position_C_but_less_than_Fully_open = 6,
    Fully_Open = 7,
};

enum class WndPstnStsRR : int32_t {
    Denormalized = 0,
    Fully_Closed = 1,
    Less_Than_Position_A = 2,
    Position_A = 3,
    Greater_Than_A_but_less_than_Position_C = 4,
    Position_C = 5,
    Greater_than_Position_C_but_less_than_Fully_open = 6,
    Fully_Open = 7,
};

enum class WrlsChrgSys2ChrgSts : int32_t {
    WCS_Not_Present = 0,
    Charging_Inactive = 1,
    Charging_Active = 2,
    Charging_Complete = 3,
    Foreign_Object_Detected = 4,
    WCS_Overtemp_Shutdown = 5,
    Phone_Overtemp = 6,
    Establishing_Communications = 7,
};

enum class WrlsChrgSys3ChrgSts : int32_t {
    WCS_Not_Present = 0,
    Charging_Inactive = 1,
    Charging_Active = 2,
    Charging_Complete = 3,
    Foreign_Object_Detected = 4,
    WCS_Overtemp_Shutdown = 5,
    Phone_Overtemp = 6,
    Establishing_Communications = 7,
};

enum class WrlsChrgSys4ChrgSts : int32_t {
    WCS_Not_Present = 0,
    Charging_Inactive = 1,
    Charging_Active = 2,
    Charging_Complete = 3,
    Foreign_Object_Detected = 4,
    WCS_Overtemp_Shutdown = 5,
    Phone_Overtemp = 6,
    Establishing_Communications = 7,
};

enum class WrlsChrgSysChrgStat : int32_t {
    WCS_Not_Present = 0,
    Charging_Inactive = 1,
    Charging_Active = 2,
    Charging_Complete = 3,
    Foreign_Object_Detected = 4,
    WCS_Overtemp_Shutdown = 5,
    Phone_Overtemp = 6,
    Establishing_Communications = 7,
};

enum class WthrMdElecVehPedMpVisDispVal : int32_t {
    SETTING_UNKNOWN = 0,
    CUSTOM_MODE_1 = 1,
    CUSTOM_MODE_2 = 2,
    CUSTOM_MODE_3 = 3,
    CUSTOM_MODE_4 = 4,
    CUSTOM_MODE_5 = 5,
    CUSTOM_MODE_6 = 6,
    CUSTOM_MODE_7 = 7,
};

enum class WthrMdEngyRegnVisDispVal : int32_t {
    SETTING_UNKNOWN = 0,
    CUSTOM_MODE_1 = 1,
    CUSTOM_MODE_2 = 2,
    CUSTOM_MODE_3 = 3,
    CUSTOM_MODE_4 = 4,
    CUSTOM_MODE_5 = 5,
    CUSTOM_MODE_6 = 6,
    CUSTOM_MODE_7 = 7,
};

enum class WthrSnwModeActvAeroVisDispVal : int32_t {
    Setting_Unknown = 0,
    Custom_Mode_1 = 1,
    Custom_Mode_2 = 2,
    Custom_Mode_3 = 3,
    Custom_Mode_4 = 4,
    Custom_Mode_5 = 5,
    Custom_Mode_6 = 6,
    Custom_Mode_7 = 7,
};

enum class WthrSnwModeBrkPedVisDispVal : int32_t {
    Setting_Unknown = 0,
    Custom_Mode_1 = 1,
    Custom_Mode_2 = 2,
    Custom_Mode_3 = 3,
    Custom_Mode_4 = 4,
    Custom_Mode_5 = 5,
    Custom_Mode_6 = 6,
    Custom_Mode_7 = 7,
};

enum class WthrSnwModeDrvlineVisDispVal : int32_t {
    Setting_Unknown = 0,
    Custom_Mode_1 = 1,
    Custom_Mode_2 = 2,
    Custom_Mode_3 = 3,
    Custom_Mode_4 = 4,
    Custom_Mode_5 = 5,
    Custom_Mode_6 = 6,
    Custom_Mode_7 = 7,
};

enum class WthrSnwModeESCVisDispVal : int32_t {
    Setting_Unknown = 0,
    Custom_Mode_1 = 1,
    Custom_Mode_2 = 2,
    Custom_Mode_3 = 3,
    Custom_Mode_4 = 4,
    Custom_Mode_5 = 5,
    Custom_Mode_6 = 6,
    Custom_Mode_7 = 7,
};

enum class WthrSnwModePwrtrnVisDispVal : int32_t {
    Setting_Unknown = 0,
    Custom_Mode_1 = 1,
    Custom_Mode_2 = 2,
    Custom_Mode_3 = 3,
    Custom_Mode_4 = 4,
    Custom_Mode_5 = 5,
    Custom_Mode_6 = 6,
    Custom_Mode_7 = 7,
};

enum class WthrSnwModeRideHghtVisDispVal : int32_t {
    Setting_Unknown = 0,
    Custom_Mode_1 = 1,
    Custom_Mode_2 = 2,
    Custom_Mode_3 = 3,
    Custom_Mode_4 = 4,
    Custom_Mode_5 = 5,
    Custom_Mode_6 = 6,
    Custom_Mode_7 = 7,
};

enum class WthrSnwModeSndVisDispVal : int32_t {
    Setting_Unknown = 0,
    Custom_Mode_1 = 1,
    Custom_Mode_2 = 2,
    Custom_Mode_3 = 3,
    Custom_Mode_4 = 4,
    Custom_Mode_5 = 5,
    Custom_Mode_6 = 6,
    Custom_Mode_7 = 7,
};

enum class WthrSnwModeSpnsnVisDispVal : int32_t {
    Setting_Unknown = 0,
    Custom_Mode_1 = 1,
    Custom_Mode_2 = 2,
    Custom_Mode_3 = 3,
    Custom_Mode_4 = 4,
    Custom_Mode_5 = 5,
    Custom_Mode_6 = 6,
    Custom_Mode_7 = 7,
};

enum class WthrSnwModeStrgVisDispVal : int32_t {
    Setting_Unknown = 0,
    Custom_Mode_1 = 1,
    Custom_Mode_2 = 2,
    Custom_Mode_3 = 3,
    Custom_Mode_4 = 4,
    Custom_Mode_5 = 5,
    Custom_Mode_6 = 6,
    Custom_Mode_7 = 7,
};

enum class ZALC_MltZnAudFtrStat : int32_t {
    Unknown = 0,
    Single_Zone_Audio = 1,
    Dual_Zone_Audio = 2,
    Quad_Zone_Audio = 3,
};

// Enum class for SUM availability(AV) status
enum class VCU_SUM_Av_Status : int32_t {
    Disabled = ENM_AV_DISABLED,
    Uninitialized =  ENM_AV_UNINITIALIZED,
    Unavailable = ENM_AV_UNAVAILABLE,
    Available = ENM_AV_AVAILABLE,
};

}}}

#endif /* ARXML_SIGNALENUMS_H_ */
