/* This file was automatically generated from XML paramdefs. */
#ifndef _PARAMDEF_MENU_VALUE_TABLE_SPEC_H
#define _PARAMDEF_MENU_VALUE_TABLE_SPEC_H
#pragma once
#include <inttypes.h>

// Data Version: 1
// Is Big Endian: False
// Is Unicode: True
// Format Version: 203
struct MENU_VALUE_TABLE_SPEC {

	// NAME: Value to compare - 比較する値
	// DESC: Value to compare - 比較する値
	int32_t value;

	// NAME: Converted text ID - 変換後のテキストID
	// DESC: Converted text ID - 変換後のテキストID
	int32_t textId;

	// NAME: Comparison type - 比較タイプ
	// DESC: Comparison type - 比較タイプ
	int8_t compareType;

	// NAME: Padding - パディング
	// DESC: Padding - パディング
	uint8_t padding[3];
};

#endif
