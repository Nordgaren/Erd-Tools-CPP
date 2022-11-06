/* This file was automatically generated from XML paramdefs. */
#ifndef _PARAMDEF_MENU_PARAM_COLOR_TABLE_ST_H
#define _PARAMDEF_MENU_PARAM_COLOR_TABLE_ST_H
#pragma once
#include <inttypes.h>

// Data Version: 2
// Is Big Endian: False
// Is Unicode: True
// Format Version: 203
struct MENU_PARAM_COLOR_TABLE_ST {

	// NAME: Interpolation method - 補間方法
	// DESC: Interpolation method - 補間方法
	uint8_t lerpMode;

	// NAME: pad - パッド
	uint8_t pad1[3];

	// NAME: Hue - 色相
	// DESC: Hue. Treat as a fixed value in interpolation - 色相。補間では固定値として扱う
	uint16_t h;

	// NAME: pad - パッド
	uint8_t pad2[2];

	// NAME: saturation - 彩度
	// DESC: Saturation 1. Treated as the first point of interpolation - 彩度1。補間の1点目として扱われる
	float s1;

	// NAME: brightness - 明度
	// DESC: Brightness 1. Treated as the first point of interpolation - 明度1。補間の1点目として扱われる
	float v1;

	// NAME: saturation - 彩度
	// DESC: Saturation 2. Treated as the second point of interpolation - 彩度2。補間の2点目として扱われる
	float s2;

	// NAME: brightness - 明度
	// DESC: Brightness 2. Treated as the second point of interpolation - 明度2。補間の2点目として扱われる
	float v2;

	// NAME: saturation - 彩度
	// DESC: Saturation 3. Treated as the third point of interpolation - 彩度3。補間の3点目として扱われる
	float s3;

	// NAME: brightness - 明度
	// DESC: Brightness 3. Treated as the third point of interpolation - 明度3。補間の3点目として扱われる
	float v3;
};

#endif
