/* This file was automatically generated from XML paramdefs. */
#ifndef _PARAMDEF_DIRECTION_CAMERA_PARAM_ST_H
#define _PARAMDEF_DIRECTION_CAMERA_PARAM_ST_H
#pragma once
#include <inttypes.h>

// Data Version: 1
// Is Big Endian: False
// Is Unicode: True
// Format Version: 203
struct DIRECTION_CAMERA_PARAM_ST {

	// NAME: Affected by options - オプションの影響を受けるか
	// DESC: Is it affected by the production camera ON / OFF option? - 演出カメラON/OFFオプションの影響を受けるか？
	uint8_t isUseOption: 1;

	// NAME: pad - パッド
	// DESC: pad - pad
	uint8_t pad2: 3;

	// NAME: pad - パッド
	// DESC: pad - pad
	uint8_t pad1[15];
};

#endif
