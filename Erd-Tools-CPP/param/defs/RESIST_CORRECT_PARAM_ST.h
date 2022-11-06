/* This file was automatically generated from XML paramdefs. */
#ifndef _PARAMDEF_RESIST_CORRECT_PARAM_ST_H
#define _PARAMDEF_RESIST_CORRECT_PARAM_ST_H
#pragma once
#include <inttypes.h>

// Data Version: 1
// Is Big Endian: False
// Is Unicode: True
// Format Version: 203
struct RESIST_CORRECT_PARAM_ST {

	// NAME: Addition after the first activation pt - 1回目発動後加算pt
	// DESC: A value that is added to the resistance value after the abnormal condition is activated once. - 状態異常が1回発動した後に耐性値に加算される値
	float addPoint1;

	// NAME: Addition after the second activation pt - 2回目発動後加算pt
	// DESC: A value that is added to the resistance value after the abnormal condition is activated twice. - 状態異常が2回発動した後に耐性値に加算される値
	float addPoint2;

	// NAME: Addition after the third activation pt - 3回目発動後加算pt
	// DESC: A value that is added to the resistance value after the abnormal condition is activated 3 times. - 状態異常が3回発動した後に耐性値に加算される値
	float addPoint3;

	// NAME: Addition after the 4th activation pt - 4回目発動後加算pt
	// DESC: A value that is added to the resistance value after the abnormal condition is activated 4 times. - 状態異常が4回発動した後に耐性値に加算される値
	float addPoint4;

	// NAME: Addition after the 5th activation pt - 5回目発動後加算pt
	// DESC: A value that is added to the resistance value after the abnormal condition is activated 5 times. - 状態異常が5回発動した後に耐性値に加算される値
	float addPoint5;

	// NAME: Magnification after the first activation - 1回目発動後倍率
	// DESC: Magnification applied to the resistance value after the abnormal condition is activated once - 状態異常が1回発動した後に耐性値に掛かる倍率
	float addRate1;

	// NAME: Magnification after the second activation - 2回目発動後倍率
	// DESC: Magnification applied to the resistance value after the abnormal condition is activated twice - 状態異常が2回発動した後に耐性値に掛かる倍率
	float addRate2;

	// NAME: Magnification after the third activation - 3回目発動後倍率
	// DESC: Magnification applied to the resistance value after the abnormal condition is activated 3 times - 状態異常が3回発動した後に耐性値に掛かる倍率
	float addRate3;

	// NAME: Magnification after the 4th activation - 4回目発動後倍率
	// DESC: Magnification applied to the resistance value after the abnormal condition is activated 4 times - 状態異常が4回発動した後に耐性値に掛かる倍率
	float addRate4;

	// NAME: Magnification after the 5th activation - 5回目発動後倍率
	// DESC: Magnification applied to the resistance value after the abnormal condition is activated 5 times - 状態異常が5回発動した後に耐性値に掛かる倍率
	float addRate5;
};

#endif
