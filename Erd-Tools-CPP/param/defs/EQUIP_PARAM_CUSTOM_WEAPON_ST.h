/* This file was automatically generated from XML paramdefs. */
#ifndef _PARAMDEF_EQUIP_PARAM_CUSTOM_WEAPON_ST_H
#define _PARAMDEF_EQUIP_PARAM_CUSTOM_WEAPON_ST_H
#pragma once
#include <inttypes.h>

// Data Version: 1
// Is Big Endian: False
// Is Unicode: True
// Format Version: 203
struct EQUIP_PARAM_CUSTOM_WEAPON_ST {

	// NAME: Weapon base ID - 武器ベースID
	// DESC: Weapon base ID - 武器ベースID
	int32_t baseWepId;

	// NAME: Magic stone ID - 魔石ID
	// DESC: Magic stone ID - 魔石ID
	int32_t gemId;

	// NAME: Enhancement value - 強化値
	// DESC: Enhancement value - 強化値
	uint8_t reinforceLv;

	// NAME: pad - pad
	// DESC: pad - pad
	uint8_t pad[7];
};

#endif
