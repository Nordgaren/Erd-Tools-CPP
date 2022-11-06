/* This file was automatically generated from XML paramdefs. */
#ifndef _PARAMDEF_EVENT_FLAG_USAGE_PARAM_ST_H
#define _PARAMDEF_EVENT_FLAG_USAGE_PARAM_ST_H
#pragma once
#include <inttypes.h>

// Data Version: 1
// Is Big Endian: False
// Is Unicode: True
// Format Version: 203
struct EVENT_FLAG_USAGE_PARAM_ST {

	// NAME: Use - 用途
	// DESC: Use of the flag. - フラグの用途。
	uint8_t usageType;

	// NAME: Playlog category - プレイログカテゴリ
	// DESC: Valid only when the usage is "ON / OFF". If this is set, the play log will be collected when the flag is turned ON. - 用途が「ON/OFF」の場合のみ有効。これを設定するとフラグがONになったときにプレイログを収集する。
	uint8_t playlogCategory;

	// NAME: Padding - パディング
	// DESC: Padding - パディング
	uint8_t padding1[2];

	// NAME: Number of secured flags - 確保フラグ数
	// DESC: Set to 1 for "ON / OFF". In the case of "frame allocation" and "integer", "parameter number-parameter number + number of secured flags-1" is secured. - 「ON/OFF」の場合は1を設定する。「枠割り当て」「整数」の場合は「パラメータ番号～パラメータ番号+確保フラグ数-1」が確保される範囲になる。
	int32_t flagNum;

	// NAME: Padding - パディング
	// DESC: Padding - パディング
	uint8_t padding2[24];
};

#endif
