/* This file was automatically generated from XML paramdefs. */
#ifndef _PARAMDEF_POSTURE_CONTROL_PARAM_WEP_LEFT_ST_H
#define _PARAMDEF_POSTURE_CONTROL_PARAM_WEP_LEFT_ST_H
#pragma once
#include <inttypes.h>

// Data Version: 1
// Is Big Endian: False
// Is Unicode: True
// Format Version: 203
struct POSTURE_CONTROL_PARAM_WEP_LEFT_ST {

	// NAME: Left arm_front and back - 左腕_前後
	// DESC: Left arm_front and back - 左腕_前後
	int16_t a000_leftArmFB;

	// NAME: Left wrist_front and back - 左手首_前後
	// DESC: Left wrist_front and back - 左手首_前後
	int16_t a000_leftWristFB;

	// NAME: Left wrist_inside and outside - 左手首_内外
	// DESC: Left wrist_inside and outside - 左手首_内外
	int16_t a000_leftWristIO;

	// NAME: Left arm_front and back - 左腕_前後
	// DESC: Left arm_front and back - 左腕_前後
	int16_t a002_leftArmFB;

	// NAME: Left wrist_front and back - 左手首_前後
	// DESC: Left wrist_front and back - 左手首_前後
	int16_t a002_leftWristFB;

	// NAME: Left wrist_inside and outside - 左手首_内外
	// DESC: Left wrist_inside and outside - 左手首_内外
	int16_t a002_leftWristIO;

	// NAME: Left arm_front and back - 左腕_前後
	// DESC: Left arm_front and back - 左腕_前後
	int16_t a003_leftArmFB;

	// NAME: Left wrist_front and back - 左手首_前後
	// DESC: Left wrist_front and back - 左手首_前後
	int16_t a003_leftWristFB;

	// NAME: Left wrist_inside and outside - 左手首_内外
	// DESC: Left wrist_inside and outside - 左手首_内外
	int16_t a003_leftWristIO;

	// NAME: pad - pad
	uint8_t pad[14];
};

#endif
