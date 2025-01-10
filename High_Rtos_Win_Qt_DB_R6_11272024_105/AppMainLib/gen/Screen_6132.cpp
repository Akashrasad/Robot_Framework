// Copyright (C) GM Global Technology Operations LLC 2024.
// All Rights Reserved.
// GM Confidential Restricted.
// 
// Designed and Developed by Rampgroup, © 2024 People Tech Group all rights reserved.

#include "Screen_6132.h"

#include "RTOS_InternalData.h"
#include <cstdlib>

namespace gm
{
namespace csm
{


void Screen_6132::Widget_Logic_Visibility_img_airbag_off_cal() noexcept
{
    const bool var_002 = gm::csm::VIRTUALCONTROLS_PAB_OFF_WITH_CANADA_INTERNAL.data();
    const bool var_001 = var_002;

    if(mFlashing_1 == nullptr)
	{
		mFlashing_1 = new ::ramp::Flashing("img_airbag_off_cal");
	}
    
    mImg_airbag_off_calVisibility.set(var_001);

    mFlashing_1->stop(gm::csm::FU_HMIC_Timer_Tick_50_MilliSec);

    mFlashing_1->start(gm::csm::VIRTUALCONTROLS_PAB_FLASHOFF_WITH_CANADA_INTEGER,gm::csm::FU_HMIC_Timer_Tick_50_MilliSec,mImg_airbag_off_calVisibility);
    Image_img_airbag_off_cal.mVisibility = var_001;
}

void Screen_6132::Widget_Logic_Visibility_grp_img_on() noexcept
{
    const bool var_004 = gm::csm::VIRTUALCONTROLS_PAB_ON_INTERNAL.data();
    const bool var_003 = var_004;

    if(mFlashing_2 == nullptr)
	{
		mFlashing_2 = new ::ramp::Flashing("grp_img_on");
	}
    
    mGrp_img_onVisibility.set(var_003);

    mFlashing_2->stop(gm::csm::FU_HMIC_Timer_Tick_50_MilliSec);

    mFlashing_2->start(gm::csm::VIRTUALCONTROLS_PAB_FLASHON_INTEGER,gm::csm::FU_HMIC_Timer_Tick_50_MilliSec,mGrp_img_onVisibility);
    Group_grp_img_on.mVisibility = var_003;
}

void Screen_6132::Widget_Logic_Visibility_grp_airbag_off() noexcept
{
    const bool var_006 = gm::csm::VIRTUALCONTROLS_PAB_OFF_INTERNAL.data();
    const bool var_005 = var_006;

    if(mFlashing_3 == nullptr)
	{
		mFlashing_3 = new ::ramp::Flashing("grp_airbag_off");
	}
    
    mGrp_airbag_offVisibility.set(var_005);

    mFlashing_3->stop(gm::csm::FU_HMIC_Timer_Tick_50_MilliSec);

    mFlashing_3->start(gm::csm::VIRTUALCONTROLS_PAB_FLASHOFF_INTEGER,gm::csm::FU_HMIC_Timer_Tick_50_MilliSec,mGrp_airbag_offVisibility);
    Group_grp_airbag_off.mVisibility = var_005;
}

void Screen_6132::Widget_Logic_Visibility_img_passenger_seat_belt() noexcept
{
    const bool var_008 = gm::csm::VIRTUALCONTROLS_SEATBELT_INTERNAL.data();
    const bool var_007 = var_008;

    if(mFlashing_4 == nullptr)
	{
		mFlashing_4 = new ::ramp::Flashing("img_passenger_seat_belt");
	}
    
    mImg_passenger_seat_beltVisibility.set(var_007);

    mFlashing_4->stop(gm::csm::FU_HMIC_Timer_Tick_50_MilliSec);

    mFlashing_4->start(gm::csm::VIRTUALCONTROLS_SEATBET_FLASH_INTEGER,gm::csm::FU_HMIC_Timer_Tick_50_MilliSec,mImg_passenger_seat_beltVisibility);
    Image_img_passenger_seat_belt.mVisibility = var_007;
}

void Screen_6132::Widget_Logic_Visibility_img_passenger_seat_belt_cal() noexcept
{
    const bool var_010 = gm::csm::VIRTUALCONTROLS_SEATBELT_WITH_CANADA_INTERNAL.data();
    const bool var_009 = var_010;

    if(mFlashing_5 == nullptr)
	{
		mFlashing_5 = new ::ramp::Flashing("img_passenger_seat_belt_cal");
	}
    
    mImg_passenger_seat_belt_calVisibility.set(var_009);

    mFlashing_5->stop(gm::csm::FU_HMIC_Timer_Tick_50_MilliSec);

    mFlashing_5->start(gm::csm::VIRTUALCONTROLS_SEATBET_FLASH_CANADA_INTEGER,gm::csm::FU_HMIC_Timer_Tick_50_MilliSec,mImg_passenger_seat_belt_calVisibility);
    Image_img_passenger_seat_belt_cal.mVisibility = var_009;
}

void Screen_6132::Widget_Logic_Visibility_img_airbag_on_cal() noexcept
{
    const bool var_012 = gm::csm::VIRTUALCONTROLS_PAB_ON_WITH_CANADA_INTERNAL.data();
    const bool var_011 = var_012;

    if(mFlashing_6 == nullptr)
	{
		mFlashing_6 = new ::ramp::Flashing("img_airbag_on_cal");
	}
    
    mImg_airbag_on_calVisibility.set(var_011);

    mFlashing_6->stop(gm::csm::FU_HMIC_Timer_Tick_50_MilliSec);

    mFlashing_6->start(gm::csm::VIRTUALCONTROLS_PAB_FLASHON_WITH_CANADA_INTEGER,gm::csm::FU_HMIC_Timer_Tick_50_MilliSec,mImg_airbag_on_calVisibility);
    Image_img_airbag_on_cal.mVisibility = var_011;
}

void Screen_6132::Widget_Logic_Visibility_img_airbag_warning_cal() noexcept
{
    const bool var_014 = gm::csm::VIRTUALCONTROLS_PAB_ON_WITH_CANADA_INTERNAL.data();
    const bool var_013 = var_014;

    if(mFlashing_7 == nullptr)
	{
		mFlashing_7 = new ::ramp::Flashing("img_airbag_warning_cal");
	}
    
    mImg_airbag_warning_calVisibility.set(var_013);

    mFlashing_7->stop(gm::csm::FU_HMIC_Timer_Tick_50_MilliSec);

    mFlashing_7->start(gm::csm::VIRTUALCONTROLS_PAB_FLASHON_WITH_CANADA_INTEGER,gm::csm::FU_HMIC_Timer_Tick_50_MilliSec,mImg_airbag_warning_calVisibility);
    Image_img_airbag_warning_cal.mVisibility = var_013;
}

void Screen_6132::onScreenHide()
{
    Label_uiframework_passengerAirBag_csm.mVisibility.unBind(gm::csm::VIRTUALCONTROLS_PAB_TEXT_INTERNAL, mBindingsIds[0U]);
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
}

void Screen_6132::onScreenShow()
{
    mBindingsIds[0U] = Label_uiframework_passengerAirBag_csm.mVisibility.bind(gm::csm::VIRTUALCONTROLS_PAB_TEXT_INTERNAL);
    addDependency(this, &Screen_6132::Widget_Logic_Visibility_img_airbag_off_cal, gm::csm::VIRTUALCONTROLS_PAB_OFF_WITH_CANADA_INTERNAL);
    addDependency(this, &Screen_6132::Widget_Logic_Visibility_grp_img_on, gm::csm::VIRTUALCONTROLS_PAB_ON_INTERNAL);
    addDependency(this, &Screen_6132::Widget_Logic_Visibility_grp_airbag_off, gm::csm::VIRTUALCONTROLS_PAB_OFF_INTERNAL);
    addDependency(this, &Screen_6132::Widget_Logic_Visibility_img_passenger_seat_belt, gm::csm::VIRTUALCONTROLS_SEATBELT_INTERNAL);
    addDependency(this, &Screen_6132::Widget_Logic_Visibility_img_passenger_seat_belt_cal, gm::csm::VIRTUALCONTROLS_SEATBELT_WITH_CANADA_INTERNAL);
    addDependency(this, &Screen_6132::Widget_Logic_Visibility_img_airbag_on_cal, gm::csm::VIRTUALCONTROLS_PAB_ON_WITH_CANADA_INTERNAL);
    addDependency(this, &Screen_6132::Widget_Logic_Visibility_img_airbag_warning_cal, gm::csm::VIRTUALCONTROLS_PAB_ON_WITH_CANADA_INTERNAL);
}


} // namespace csm
} // namespace gm
