// Copyright (C) GM Global Technology Operations LLC 2024.
// All Rights Reserved.
// GM Confidential Restricted.
// 
// Designed and Developed by Rampgroup, © 2024 People Tech Group all rights reserved.

#include "Screen_8034.h"

#include "RTOS_InternalData.h"
#include <cstdlib>

namespace gm
{
namespace csm
{


void Screen_8034::Widget_Logic_Visibility_img_pedestrain_alert_vpm() noexcept
{
    const bool var_007 = gm::csm::Data_OBSTRUCTIONFOUND_Visibility_2.data();
    const bool var_006 = !(var_007);
    
    const bool var_004 = var_006;
    const bool var_005 = gm::csm::Camera_RVC_PEDESTRIAN_VISIBILITY.data();
    const bool var_003 = var_004 && var_005;
    
    const bool var_002 = var_003;
    const bool var_001 = var_002;

    if(mFlashing_1 == nullptr)
	{
		mFlashing_1 = new ::ramp::Flashing("img_pedestrain_alert_vpm");
	}
    
    mImg_pedestrain_alert_vpmVisibility.set(var_001);

    mFlashing_1->stop(gm::csm::FU_HMIC_Timer_Tick_50_MilliSec);

    mFlashing_1->start(gm::csm::Camera_UPA_FLASHON_INTEGER,gm::csm::FU_HMIC_Timer_Tick_50_MilliSec,mImg_pedestrain_alert_vpmVisibility);
    Image_img_pedestrain_alert_vpm.mVisibility = var_001;
}

void Screen_8034::Widget_Logic_Visibility_img_UPA_symbol_1_vpm() noexcept
{
    const bool var_009 = gm::csm::Data_VPM_OBSTRUCTIONFOUND_Visibility_1.data();
    const bool var_008 = var_009;

    if(mFlashing_2 == nullptr)
	{
		mFlashing_2 = new ::ramp::Flashing("img_UPA_symbol_1_vpm");
	}
    
    mImg_UPA_symbol_1_vpmVisibility.set(var_008);

    mFlashing_2->stop(gm::csm::FU_HMIC_Timer_Tick_50_MilliSec);

    mFlashing_2->start(gm::csm::Camera_UPA_FLASHON_INTEGER,gm::csm::FU_HMIC_Timer_Tick_50_MilliSec,mImg_UPA_symbol_1_vpmVisibility);
    Image_img_UPA_symbol_1_vpm.mVisibility = var_008;
}

void Screen_8034::Widget_Logic_Visibility_img_UPA_symbol_2() noexcept
{
    const bool var_016 = gm::csm::Camera_RVC_PEDESTRIAN_VISIBILITY.data();
    const bool var_015 = !(var_016);
    
    const bool var_013 = gm::csm::Data_OBSTRUCTIONFOUND_Visibility_2.data();
    const bool var_014 = var_015;
    const bool var_012 = var_013 && var_014;
    
    const bool var_011 = var_012;
    const bool var_010 = var_011;

    if(mFlashing_3 == nullptr)
	{
		mFlashing_3 = new ::ramp::Flashing("img_UPA_symbol_2");
	}
    
    mImg_UPA_symbol_2Visibility.set(var_010);

    mFlashing_3->stop(gm::csm::FU_HMIC_Timer_Tick_50_MilliSec);

    mFlashing_3->start(gm::csm::Camera_UPA_FLASHON_INTEGER,gm::csm::FU_HMIC_Timer_Tick_50_MilliSec,mImg_UPA_symbol_2Visibility);
    Image_img_UPA_symbol_2.mVisibility = var_010;
}

void Screen_8034::Widget_Logic_Visibility_img_pedestrain_alert_vpm_surround() noexcept
{
    const bool var_023 = gm::csm::Data_VPM_OBSTRUCTIONFOUND_Visibility_2.data();
    const bool var_022 = !(var_023);
    
    const bool var_020 = var_022;
    const bool var_021 = gm::csm::Camera_VPM_PEDESTRIAN_VISIBILITY.data();
    const bool var_019 = var_020 && var_021;
    
    const bool var_018 = var_019;
    const bool var_017 = var_018;

    if(mFlashing_4 == nullptr)
	{
		mFlashing_4 = new ::ramp::Flashing("img_pedestrain_alert_vpm_surround");
	}
    
    mImg_pedestrain_alert_vpm_surroundVisibility.set(var_017);

    mFlashing_4->stop(gm::csm::FU_HMIC_Timer_Tick_50_MilliSec);

    mFlashing_4->start(gm::csm::Camera_UPA_FLASHON_INTEGER,gm::csm::FU_HMIC_Timer_Tick_50_MilliSec,mImg_pedestrain_alert_vpm_surroundVisibility);
    Image_img_pedestrain_alert_vpm_surround.mVisibility = var_017;
}

void Screen_8034::Widget_Logic_Visibility_img_caution_left_Indicator_vpm() noexcept
{
    const bool var_025 = gm::csm::Data_Left_RCTA_VPM_Visibility.data();
    const bool var_024 = var_025;

    if(mFlashing_5 == nullptr)
	{
		mFlashing_5 = new ::ramp::Flashing("img_caution_left_Indicator_vpm");
	}
    
    mImg_caution_left_Indicator_vpmVisibility.set(var_024);

    mFlashing_5->stop(gm::csm::FU_HMIC_Timer_Tick_50_MilliSec);

    mFlashing_5->start(gm::csm::Camera_LEFT_RCTA_FLASHON_INTEGER,gm::csm::FU_HMIC_Timer_Tick_50_MilliSec,mImg_caution_left_Indicator_vpmVisibility);
    Image_img_caution_left_Indicator_vpm.mVisibility = var_024;
}

void Screen_8034::Widget_Logic_Visibility_img_UPA_symbol_3() noexcept
{
    const bool var_027 = gm::csm::Data_OBSTRUCTIONFOUND_Visibility_3.data();
    const bool var_026 = var_027;

    if(mFlashing_6 == nullptr)
	{
		mFlashing_6 = new ::ramp::Flashing("img_UPA_symbol_3");
	}
    
    mImg_UPA_symbol_3Visibility.set(var_026);

    mFlashing_6->stop(gm::csm::FU_HMIC_Timer_Tick_50_MilliSec);

    mFlashing_6->start(gm::csm::Camera_UPA_FLASHON_INTEGER,gm::csm::FU_HMIC_Timer_Tick_50_MilliSec,mImg_UPA_symbol_3Visibility);
    Image_img_UPA_symbol_3.mVisibility = var_026;
}

void Screen_8034::Widget_Logic_Visibility_img_UPA_symbol_3_vpm() noexcept
{
    const bool var_029 = gm::csm::Data_VPM_OBSTRUCTIONFOUND_Visibility_3.data();
    const bool var_028 = var_029;

    if(mFlashing_7 == nullptr)
	{
		mFlashing_7 = new ::ramp::Flashing("img_UPA_symbol_3_vpm");
	}
    
    mImg_UPA_symbol_3_vpmVisibility.set(var_028);

    mFlashing_7->stop(gm::csm::FU_HMIC_Timer_Tick_50_MilliSec);

    mFlashing_7->start(gm::csm::Camera_UPA_FLASHON_INTEGER,gm::csm::FU_HMIC_Timer_Tick_50_MilliSec,mImg_UPA_symbol_3_vpmVisibility);
    Image_img_UPA_symbol_3_vpm.mVisibility = var_028;
}

void Screen_8034::Widget_Logic_Visibility_img_side_pedestrain_alert_rvc() noexcept
{
    const bool var_033 = gm::csm::Data_OBSTRUCTIONFOUND_Visibility_2.data();
    const bool var_034 = gm::csm::Camera_RVC_PEDESTRIAN_VISIBILITY.data();
    const bool var_032 = var_033 && var_034;
    
    const bool var_031 = var_032;
    const bool var_030 = var_031;

    if(mFlashing_8 == nullptr)
	{
		mFlashing_8 = new ::ramp::Flashing("img_side_pedestrain_alert_rvc");
	}
    
    mImg_side_pedestrain_alert_rvcVisibility.set(var_030);

    mFlashing_8->stop(gm::csm::FU_HMIC_Timer_Tick_50_MilliSec);

    mFlashing_8->start(gm::csm::Camera_UPA_FLASHON_INTEGER,gm::csm::FU_HMIC_Timer_Tick_50_MilliSec,mImg_side_pedestrain_alert_rvcVisibility);
    Image_img_side_pedestrain_alert_rvc.mVisibility = var_030;
}

void Screen_8034::Widget_Logic_Visibility_img_side_pedestrain_red_amber_alert_rvc() noexcept
{
    const bool var_038 = gm::csm::Data_OBSTRUCTIONFOUND_Visibility_2.data();
    const bool var_039 = gm::csm::Camera_RVC_PEDESTRIAN_VISIBILITY.data();
    const bool var_037 = var_038 && var_039;
    
    const bool var_036 = var_037;
    const bool var_035 = var_036;

    if(mFlashing_9 == nullptr)
	{
		mFlashing_9 = new ::ramp::Flashing("img_side_pedestrain_red_amber_alert_rvc");
	}
    
    mImg_side_pedestrain_red_amber_alert_rvcVisibility.set(var_035);

    mFlashing_9->stop(gm::csm::FU_HMIC_Timer_Tick_50_MilliSec);

    mFlashing_9->start(gm::csm::Camera_UPA_FLASHON_INTEGER,gm::csm::FU_HMIC_Timer_Tick_50_MilliSec,mImg_side_pedestrain_red_amber_alert_rvcVisibility);
    Image_img_side_pedestrain_red_amber_alert_rvc.mVisibility = var_035;
}

void Screen_8034::Widget_Logic_Visibility_img_UPA_symbol_4() noexcept
{
    const bool var_041 = gm::csm::Data_OBSTRUCTIONFOUND_Visibility_4.data();
    const bool var_040 = var_041;

    if(mFlashing_10 == nullptr)
	{
		mFlashing_10 = new ::ramp::Flashing("img_UPA_symbol_4");
	}
    
    mImg_UPA_symbol_4Visibility.set(var_040);

    mFlashing_10->stop(gm::csm::FU_HMIC_Timer_Tick_50_MilliSec);

    mFlashing_10->start(gm::csm::Camera_UPA_FLASHON_INTEGER,gm::csm::FU_HMIC_Timer_Tick_50_MilliSec,mImg_UPA_symbol_4Visibility);
    Image_img_UPA_symbol_4.mVisibility = var_040;
}

void Screen_8034::Widget_Logic_Visibility_img_UPA_symbol_4_vpm() noexcept
{
    const bool var_043 = gm::csm::Data_VPM_OBSTRUCTIONFOUND_Visibility_4.data();
    const bool var_042 = var_043;

    if(mFlashing_11 == nullptr)
	{
		mFlashing_11 = new ::ramp::Flashing("img_UPA_symbol_4_vpm");
	}
    
    mImg_UPA_symbol_4_vpmVisibility.set(var_042);

    mFlashing_11->stop(gm::csm::FU_HMIC_Timer_Tick_50_MilliSec);

    mFlashing_11->start(gm::csm::Camera_UPA_FLASHON_INTEGER,gm::csm::FU_HMIC_Timer_Tick_50_MilliSec,mImg_UPA_symbol_4_vpmVisibility);
    Image_img_UPA_symbol_4_vpm.mVisibility = var_042;
}

void Screen_8034::Widget_Logic_Visibility_img_side_pedestrain_alert() noexcept
{
    const bool var_047 = gm::csm::Data_VPM_OBSTRUCTIONFOUND_Visibility_2.data();
    const bool var_048 = gm::csm::Camera_VPM_PEDESTRIAN_VISIBILITY.data();
    const bool var_046 = var_047 && var_048;
    
    const bool var_045 = var_046;
    const bool var_044 = var_045;

    if(mFlashing_12 == nullptr)
	{
		mFlashing_12 = new ::ramp::Flashing("img_side_pedestrain_alert");
	}
    
    mImg_side_pedestrain_alertVisibility.set(var_044);

    mFlashing_12->stop(gm::csm::FU_HMIC_Timer_Tick_50_MilliSec);

    mFlashing_12->start(gm::csm::Camera_UPA_FLASHON_INTEGER,gm::csm::FU_HMIC_Timer_Tick_50_MilliSec,mImg_side_pedestrain_alertVisibility);
    Image_img_side_pedestrain_alert.mVisibility = var_044;
}

void Screen_8034::Widget_Logic_Visibility_img_side_pedestrain_red_amber_alert() noexcept
{
    const bool var_052 = gm::csm::Data_VPM_OBSTRUCTIONFOUND_Visibility_2.data();
    const bool var_053 = gm::csm::Camera_VPM_PEDESTRIAN_VISIBILITY.data();
    const bool var_051 = var_052 && var_053;
    
    const bool var_050 = var_051;
    const bool var_049 = var_050;

    if(mFlashing_13 == nullptr)
	{
		mFlashing_13 = new ::ramp::Flashing("img_side_pedestrain_red_amber_alert");
	}
    
    mImg_side_pedestrain_red_amber_alertVisibility.set(var_049);

    mFlashing_13->stop(gm::csm::FU_HMIC_Timer_Tick_50_MilliSec);

    mFlashing_13->start(gm::csm::Camera_UPA_FLASHON_INTEGER,gm::csm::FU_HMIC_Timer_Tick_50_MilliSec,mImg_side_pedestrain_red_amber_alertVisibility);
    Image_img_side_pedestrain_red_amber_alert.mVisibility = var_049;
}

void Screen_8034::Widget_Logic_Visibility_img_caution_right_Indicator() noexcept
{
    const bool var_055 = gm::csm::Data_Right_RCTA_Visibility.data();
    const bool var_054 = var_055;

    if(mFlashing_14 == nullptr)
	{
		mFlashing_14 = new ::ramp::Flashing("img_caution_right_Indicator");
	}
    
    mImg_caution_right_IndicatorVisibility.set(var_054);

    mFlashing_14->stop(gm::csm::FU_HMIC_Timer_Tick_50_MilliSec);

    mFlashing_14->start(gm::csm::Camera_RIGHT_RCTA_FLASHON_INTEGER,gm::csm::FU_HMIC_Timer_Tick_50_MilliSec,mImg_caution_right_IndicatorVisibility);
    Image_img_caution_right_Indicator.mVisibility = var_054;
}

void Screen_8034::Widget_Logic_Visibility_img_caution_left_Indicator() noexcept
{
    const bool var_057 = gm::csm::Data_Left_RCTA_Visibility.data();
    const bool var_056 = var_057;

    if(mFlashing_15 == nullptr)
	{
		mFlashing_15 = new ::ramp::Flashing("img_caution_left_Indicator");
	}
    
    mImg_caution_left_IndicatorVisibility.set(var_056);

    mFlashing_15->stop(gm::csm::FU_HMIC_Timer_Tick_50_MilliSec);

    mFlashing_15->start(gm::csm::Camera_LEFT_RCTA_FLASHON_INTEGER,gm::csm::FU_HMIC_Timer_Tick_50_MilliSec,mImg_caution_left_IndicatorVisibility);
    Image_img_caution_left_Indicator.mVisibility = var_056;
}

void Screen_8034::Widget_Logic_Visibility_img_UPA_symbol_2_vpm() noexcept
{
    const bool var_064 = gm::csm::Camera_VPM_PEDESTRIAN_VISIBILITY.data();
    const bool var_063 = !(var_064);
    
    const bool var_061 = gm::csm::Data_VPM_OBSTRUCTIONFOUND_Visibility_2.data();
    const bool var_062 = var_063;
    const bool var_060 = var_061 && var_062;
    
    const bool var_059 = var_060;
    const bool var_058 = var_059;

    if(mFlashing_16 == nullptr)
	{
		mFlashing_16 = new ::ramp::Flashing("img_UPA_symbol_2_vpm");
	}
    
    mImg_UPA_symbol_2_vpmVisibility.set(var_058);

    mFlashing_16->stop(gm::csm::FU_HMIC_Timer_Tick_50_MilliSec);

    mFlashing_16->start(gm::csm::Camera_UPA_FLASHON_INTEGER,gm::csm::FU_HMIC_Timer_Tick_50_MilliSec,mImg_UPA_symbol_2_vpmVisibility);
    Image_img_UPA_symbol_2_vpm.mVisibility = var_058;
}

void Screen_8034::Widget_Logic_Visibility_img_UPA_symbol_1() noexcept
{
    const bool var_066 = gm::csm::Data_OBSTRUCTIONFOUND_Visibility_1.data();
    const bool var_065 = var_066;

    if(mFlashing_17 == nullptr)
	{
		mFlashing_17 = new ::ramp::Flashing("img_UPA_symbol_1");
	}
    
    mImg_UPA_symbol_1Visibility.set(var_065);

    mFlashing_17->stop(gm::csm::FU_HMIC_Timer_Tick_50_MilliSec);

    mFlashing_17->start(gm::csm::Camera_UPA_FLASHON_INTEGER,gm::csm::FU_HMIC_Timer_Tick_50_MilliSec,mImg_UPA_symbol_1Visibility);
    Image_img_UPA_symbol_1.mVisibility = var_065;
}

void Screen_8034::Widget_Logic_Visibility_img_caution_right_Indicator_vpm() noexcept
{
    const bool var_068 = gm::csm::Data_Right_RCTA_VPM_Visibility.data();
    const bool var_067 = var_068;

    if(mFlashing_18 == nullptr)
	{
		mFlashing_18 = new ::ramp::Flashing("img_caution_right_Indicator_vpm");
	}
    
    mImg_caution_right_Indicator_vpmVisibility.set(var_067);

    mFlashing_18->stop(gm::csm::FU_HMIC_Timer_Tick_50_MilliSec);

    mFlashing_18->start(gm::csm::Camera_RIGHT_RCTA_FLASHON_INTEGER,gm::csm::FU_HMIC_Timer_Tick_50_MilliSec,mImg_caution_right_Indicator_vpmVisibility);
    Image_img_caution_right_Indicator_vpm.mVisibility = var_067;
}

void Screen_8034::onScreenHide()
{
    Image_img_pedestrain_alert_vpm.mState.unBind(gm::csm::Camera_ALERT_PEDESTRAIN_STATE, mBindingsIds[0U]);
    Image_img_pedestrain_alert_vpm_surround.mState.unBind(gm::csm::Camera_ALERT_PEDESTRAIN_STATE, mBindingsIds[1U]);
    Image_img_side_pedestrain_alert_rvc.mState.unBind(gm::csm::Camera_ALERT_PEDESTRAIN_STATE, mBindingsIds[2U]);
    Image_img_icn_cameraerror.mVisibility.unBind(gm::csm::Data_VPM_CAMERA_ERROR_ICON_VISIBILITY, mBindingsIds[3U]);
    Image_img_side_pedestrain_alert.mState.unBind(gm::csm::Camera_ALERT_PEDESTRAIN_STATE, mBindingsIds[4U]);
    mFlashing_1->stop(gm::csm::FU_HMIC_Timer_Tick_50_MilliSec);
    delete mFlashing_1;
    mFlashing_1 = nullptr;
    mFlashing_2->stop(gm::csm::FU_HMIC_Timer_Tick_50_MilliSec);
    delete mFlashing_2;
    mFlashing_2 = nullptr;
    mFlashing_3->stop(gm::csm::FU_HMIC_Timer_Tick_50_MilliSec);
    delete mFlashing_3;
    mFlashing_3 = nullptr;
    mFlashing_4->stop(gm::csm::FU_HMIC_Timer_Tick_50_MilliSec);
    delete mFlashing_4;
    mFlashing_4 = nullptr;
    mFlashing_5->stop(gm::csm::FU_HMIC_Timer_Tick_50_MilliSec);
    delete mFlashing_5;
    mFlashing_5 = nullptr;
    mFlashing_6->stop(gm::csm::FU_HMIC_Timer_Tick_50_MilliSec);
    delete mFlashing_6;
    mFlashing_6 = nullptr;
    mFlashing_7->stop(gm::csm::FU_HMIC_Timer_Tick_50_MilliSec);
    delete mFlashing_7;
    mFlashing_7 = nullptr;
    mFlashing_8->stop(gm::csm::FU_HMIC_Timer_Tick_50_MilliSec);
    delete mFlashing_8;
    mFlashing_8 = nullptr;
    mFlashing_9->stop(gm::csm::FU_HMIC_Timer_Tick_50_MilliSec);
    delete mFlashing_9;
    mFlashing_9 = nullptr;
    mFlashing_10->stop(gm::csm::FU_HMIC_Timer_Tick_50_MilliSec);
    delete mFlashing_10;
    mFlashing_10 = nullptr;
    mFlashing_11->stop(gm::csm::FU_HMIC_Timer_Tick_50_MilliSec);
    delete mFlashing_11;
    mFlashing_11 = nullptr;
    mFlashing_12->stop(gm::csm::FU_HMIC_Timer_Tick_50_MilliSec);
    delete mFlashing_12;
    mFlashing_12 = nullptr;
    mFlashing_13->stop(gm::csm::FU_HMIC_Timer_Tick_50_MilliSec);
    delete mFlashing_13;
    mFlashing_13 = nullptr;
    mFlashing_14->stop(gm::csm::FU_HMIC_Timer_Tick_50_MilliSec);
    delete mFlashing_14;
    mFlashing_14 = nullptr;
    mFlashing_15->stop(gm::csm::FU_HMIC_Timer_Tick_50_MilliSec);
    delete mFlashing_15;
    mFlashing_15 = nullptr;
    mFlashing_16->stop(gm::csm::FU_HMIC_Timer_Tick_50_MilliSec);
    delete mFlashing_16;
    mFlashing_16 = nullptr;
    mFlashing_17->stop(gm::csm::FU_HMIC_Timer_Tick_50_MilliSec);
    delete mFlashing_17;
    mFlashing_17 = nullptr;
    mFlashing_18->stop(gm::csm::FU_HMIC_Timer_Tick_50_MilliSec);
    delete mFlashing_18;
    mFlashing_18 = nullptr;
}

void Screen_8034::onScreenShow()
{
    addDependency(this, &Screen_8034::Widget_Logic_Visibility_img_pedestrain_alert_vpm, gm::csm::Data_OBSTRUCTIONFOUND_Visibility_2,gm::csm::Camera_RVC_PEDESTRIAN_VISIBILITY);
    mBindingsIds[0U] = Image_img_pedestrain_alert_vpm.mState.bind(gm::csm::Camera_ALERT_PEDESTRAIN_STATE);
    addDependency(this, &Screen_8034::Widget_Logic_Visibility_img_UPA_symbol_1_vpm, gm::csm::Data_VPM_OBSTRUCTIONFOUND_Visibility_1);
    addDependency(this, &Screen_8034::Widget_Logic_Visibility_img_UPA_symbol_2, gm::csm::Data_OBSTRUCTIONFOUND_Visibility_2,gm::csm::Camera_RVC_PEDESTRIAN_VISIBILITY);
    addDependency(this, &Screen_8034::Widget_Logic_Visibility_img_pedestrain_alert_vpm_surround, gm::csm::Data_VPM_OBSTRUCTIONFOUND_Visibility_2,gm::csm::Camera_VPM_PEDESTRIAN_VISIBILITY);
    mBindingsIds[1U] = Image_img_pedestrain_alert_vpm_surround.mState.bind(gm::csm::Camera_ALERT_PEDESTRAIN_STATE);
    addDependency(this, &Screen_8034::Widget_Logic_Visibility_img_caution_left_Indicator_vpm, gm::csm::Data_Left_RCTA_VPM_Visibility);
    addDependency(this, &Screen_8034::Widget_Logic_Visibility_img_UPA_symbol_3, gm::csm::Data_OBSTRUCTIONFOUND_Visibility_3);
    addDependency(this, &Screen_8034::Widget_Logic_Visibility_img_UPA_symbol_3_vpm, gm::csm::Data_VPM_OBSTRUCTIONFOUND_Visibility_3);
    addDependency(this, &Screen_8034::Widget_Logic_Visibility_img_side_pedestrain_alert_rvc, gm::csm::Data_OBSTRUCTIONFOUND_Visibility_2,gm::csm::Camera_RVC_PEDESTRIAN_VISIBILITY);
    mBindingsIds[2U] = Image_img_side_pedestrain_alert_rvc.mState.bind(gm::csm::Camera_ALERT_PEDESTRAIN_STATE);
    addDependency(this, &Screen_8034::Widget_Logic_Visibility_img_side_pedestrain_red_amber_alert_rvc, gm::csm::Data_OBSTRUCTIONFOUND_Visibility_2,gm::csm::Camera_RVC_PEDESTRIAN_VISIBILITY);
    mBindingsIds[3U] = Image_img_icn_cameraerror.mVisibility.bind(gm::csm::Data_VPM_CAMERA_ERROR_ICON_VISIBILITY);
    addDependency(this, &Screen_8034::Widget_Logic_Visibility_img_UPA_symbol_4, gm::csm::Data_OBSTRUCTIONFOUND_Visibility_4);
    addDependency(this, &Screen_8034::Widget_Logic_Visibility_img_UPA_symbol_4_vpm, gm::csm::Data_VPM_OBSTRUCTIONFOUND_Visibility_4);
    addDependency(this, &Screen_8034::Widget_Logic_Visibility_img_side_pedestrain_alert, gm::csm::Data_VPM_OBSTRUCTIONFOUND_Visibility_2,gm::csm::Camera_VPM_PEDESTRIAN_VISIBILITY);
    mBindingsIds[4U] = Image_img_side_pedestrain_alert.mState.bind(gm::csm::Camera_ALERT_PEDESTRAIN_STATE);
    addDependency(this, &Screen_8034::Widget_Logic_Visibility_img_side_pedestrain_red_amber_alert, gm::csm::Data_VPM_OBSTRUCTIONFOUND_Visibility_2,gm::csm::Camera_VPM_PEDESTRIAN_VISIBILITY);
    addDependency(this, &Screen_8034::Widget_Logic_Visibility_img_caution_right_Indicator, gm::csm::Data_Right_RCTA_Visibility);
    addDependency(this, &Screen_8034::Widget_Logic_Visibility_img_caution_left_Indicator, gm::csm::Data_Left_RCTA_Visibility);
    addDependency(this, &Screen_8034::Widget_Logic_Visibility_img_UPA_symbol_2_vpm, gm::csm::Data_VPM_OBSTRUCTIONFOUND_Visibility_2,gm::csm::Camera_VPM_PEDESTRIAN_VISIBILITY);
    addDependency(this, &Screen_8034::Widget_Logic_Visibility_img_UPA_symbol_1, gm::csm::Data_OBSTRUCTIONFOUND_Visibility_1);
    addDependency(this, &Screen_8034::Widget_Logic_Visibility_img_caution_right_Indicator_vpm, gm::csm::Data_Right_RCTA_VPM_Visibility);
}


} // namespace csm
} // namespace gm
