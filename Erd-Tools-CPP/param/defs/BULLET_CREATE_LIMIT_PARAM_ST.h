/* This file was automatically generated from XML paramdefs. */
#ifndef _PARAMDEF_BULLET_CREATE_LIMIT_PARAM_ST_H
#define _PARAMDEF_BULLET_CREATE_LIMIT_PARAM_ST_H
#pragma once
#include <inttypes.h>

// Data Version: 1
// Is Big Endian: False
// Is Unicode: True
// Format Version: 203
struct BULLET_CREATE_LIMIT_PARAM_ST {

	// NAME: Maximum number of bullets in the group - グループ内上限弾数
	// DESC: Maximum number of creations in the same group - 同一グループ内での作成上限数
	uint8_t limitNum_byGroup;

	// NAME: Is it restricted for each owner? - オーナー毎に制限するか
	// DESC: Is it restricted for each owner? - オーナー毎に制限するか
	uint8_t isLimitEachOwner: 1;

	// NAME: Padding - パディング
	// DESC: pad2 - pad2
	uint8_t pad2: 7;

	// NAME: Padding - パディング
	// DESC: pad3 - pad3
	uint8_t pad[30];
};

#endif
