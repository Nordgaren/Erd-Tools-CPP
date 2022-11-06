/* This file was automatically generated from XML paramdefs. */
#ifndef _PARAMDEF_COMMON_SYSTEM_PARAM_ST_H
#define _PARAMDEF_COMMON_SYSTEM_PARAM_ST_H
#pragma once
#include <inttypes.h>

// Data Version: 0
// Is Big Endian: False
// Is Unicode: True
// Format Version: 203
struct COMMON_SYSTEM_PARAM_ST {

	// NAME: At the start of the game Map name ID_for save data - ゲーム開始時マップ名ID_セーブデータ用
	// DESC: At the start of the game Map name ID_for save data (SEQ15052) - ゲーム開始時マップ名ID_セーブデータ用(SEQ15052)
	uint32_t mapSaveMapNameIdOnGameStart;

	// NAME: Reserve - リザーブ
	// DESC: Reserve - リザーブ
	uint8_t reserve0[60];
};

#endif
