/* This file was automatically generated from XML paramdefs. */
#ifndef _PARAMDEF_RUNTIME_BONE_CONTROL_PARAM_ST_H
#define _PARAMDEF_RUNTIME_BONE_CONTROL_PARAM_ST_H
#pragma once
#include <inttypes.h>

// Data Version: 1
// Is Big Endian: False
// Is Unicode: True
// Format Version: 203
struct RUNTIME_BONE_CONTROL_PARAM_ST {

	// NAME: Character ID - キャラID
	// DESC: Character ID - キャラID
	uint32_t chrId;

	// NAME: Control type - 制御タイプ
	// DESC: Control type - 制御タイプ
	uint8_t ctrlType;

	// NAME: pad - pad
	uint8_t pad[11];

	// NAME: Applicable joint - 適用関節
	// DESC: Applicable joint - 適用関節
	char applyBone[32];

	// NAME: Target joint 1 - ターゲット関節１
	// DESC: Target joint 1 - ターゲット関節１
	char targetBone1[32];

	// NAME: Target joint 2 - ターゲット関節２
	// DESC: Target joint 2 - ターゲット関節２
	char targetBone2[32];
};

#endif
