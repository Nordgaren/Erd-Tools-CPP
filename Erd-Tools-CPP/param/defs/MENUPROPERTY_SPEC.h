/* This file was automatically generated from XML paramdefs. */
#ifndef _PARAMDEF_MENUPROPERTY_SPEC_H
#define _PARAMDEF_MENUPROPERTY_SPEC_H
#pragma once
#include <inttypes.h>

// Data Version: 1
// Is Big Endian: False
// Is Unicode: True
// Format Version: 203
struct MENUPROPERTY_SPEC {

	// NAME: Item name Text ID - 項目名テキストID
	int32_t CaptionTextID;

	// NAME: Item icon ID - 項目アイコンID
	int32_t IconID;

	// NAME: Required skills - 必要スキル
	uint32_t RequiredPropertyID;

	// NAME: Superiority or inferiority judgment - 優劣判定
	int8_t CompareType;

	// NAME: Padding - パディング
	uint8_t pad2[1];

	// NAME: Format - 書式
	uint16_t FormatType;

	// NAME: Padding - パディング
	uint8_t pad[16];
};

#endif
