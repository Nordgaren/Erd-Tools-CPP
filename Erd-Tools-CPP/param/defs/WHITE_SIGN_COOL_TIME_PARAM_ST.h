/* This file was automatically generated from XML paramdefs. */
#ifndef _PARAMDEF_WHITE_SIGN_COOL_TIME_PARAM_ST_H
#define _PARAMDEF_WHITE_SIGN_COOL_TIME_PARAM_ST_H
#pragma once
#include <inttypes.h>

// Data Version: 1
// Is Big Endian: False
// Is Unicode: True
// Format Version: 203
struct WHITE_SIGN_COOL_TIME_PARAM_ST {

	// NAME: Time limit (normal, no finger) - 制限時間（通常・指なし）
	// DESC: Time limit [sec] (normal, dry fingerless) - 制限時間[sec]（通常・干からびた指無）
	float limitationTime_Normal;

	// NAME: Time limit (normal, with fingers) - 制限時間（通常・指あり）
	// DESC: Time limit [sec] (normal / dry finger) - 制限時間[sec]（通常・干からびた指有）
	float limitationTime_NormalDriedFinger;

	// NAME: Time limit (map protection, no fingers) - 制限時間（マップ守護・指なし）
	// DESC: Time limit [sec] (Map guardian, dry fingerless) - 制限時間[sec]（マップ守護・干からびた指無）
	float limitationTime_Guardian;

	// NAME: Time limit (map protection, with fingers) - 制限時間（マップ守護・指あり）
	// DESC: Time limit [sec] (Map guardian / dry finger) - 制限時間[sec]（マップ守護・干からびた指有）
	float limitationTime_GuardianDriedFinger;
};

#endif
