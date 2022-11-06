/* This file was automatically generated from XML paramdefs. */
#ifndef _PARAMDEF_KEY_ASSIGN_PARAM_ST_H
#define _PARAMDEF_KEY_ASSIGN_PARAM_ST_H
#pragma once
#include <inttypes.h>

// Data Version: 1
// Is Big Endian: False
// Is Unicode: True
// Format Version: 203
struct KEY_ASSIGN_PARAM_ST {

	// NAME: pad - パッド
	// DESC: Pad (physical key) - パッド（物理キー）
	int32_t padKeyId;

	// NAME: Keyboard modifier - キーボード修飾
	// DESC: Keyboard modifier keys - キーボード修飾キー
	int32_t keyboardModifyKey;

	// NAME: keyboard - キーボード
	// DESC: Keyboard (physical keys) - キーボード（物理キー）
	int32_t keyboardKeyId;

	// NAME: Mouse modification - マウス修飾
	// DESC: Mouse modifier key - マウス修飾キー
	int32_t mouseModifyKey;

	// NAME: mouse - マウス
	// DESC: Mouse (physical key) - マウス（物理キー）
	int32_t mouseKeyId;

	// NAME: ---- - ----
	uint8_t reserved[12];
};

#endif
