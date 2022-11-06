/* This file was automatically generated from XML paramdefs. */
#ifndef _PARAMDEF_FE_TEXT_EFFECT_PARAM_ST_H
#define _PARAMDEF_FE_TEXT_EFFECT_PARAM_ST_H
#pragma once
#include <inttypes.h>

// Data Version: 1
// Is Big Endian: False
// Is Unicode: True
// Format Version: 203
struct FE_TEXT_EFFECT_PARAM_ST {

	// NAME: Resource ID - リソースID
	// DESC: Instance name of the menu resource. ID of TextEffect_X - メニューリソースのインスタンス名。TextEffect_X のID
	int16_t resId;

	// NAME: Padding - パディング
	uint8_t pad1[2];

	// NAME: Text ID - テキストID
	// DESC: Text ID to display (-1: No text). MenuText - 表示するテキストID(-1: テキストなし)。MenuText
	int32_t textId;

	// NAME: SE ID - SEのID
	// DESC: Voice ID to play (-1: No SE) - 再生するVoiceのID(-1: SEなし)
	int32_t seId;

	// NAME: Whether to display at the same time as the map name - マップ名と同時に表示するか
	// DESC: Whether to display at the same time as the map name - マップ名と同時に表示するか
	uint8_t canMixMapName: 1;

	// NAME: Padding - パディング
	uint8_t pad3: 7;

	// NAME: Padding - パディング
	uint8_t pad2[19];
};

#endif
