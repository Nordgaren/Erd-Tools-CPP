/* This file was automatically generated from XML paramdefs. */
#ifndef _PARAMDEF_HIT_EFFECT_SFX_CONCEPT_PARAM_ST_H
#define _PARAMDEF_HIT_EFFECT_SFX_CONCEPT_PARAM_ST_H
#pragma once
#include <inttypes.h>

// Data Version: 2
// Is Big Endian: False
// Is Unicode: True
// Format Version: 203
struct HIT_EFFECT_SFX_CONCEPT_PARAM_ST {

	// NAME: Iron: Concept 1 - 鉄製：概念１
	// DESC: Iron: Concept 1 - 鉄製：概念１
	int16_t atkIron_1;

	// NAME: Iron: Concept 2 - 鉄製：概念２
	// DESC: Iron: Concept 2 - 鉄製：概念２
	int16_t atkIron_2;

	// NAME: Made of leather: Concept 1 - 革製：概念１
	// DESC: Leather: Concept 1 - 革：概念１
	int16_t atkLeather_1;

	// NAME: Made of leather: Concept 2 - 革製：概念２
	// DESC: Leather: Concept 2 - 革：概念２
	int16_t atkLeather_2;

	// NAME: Wooden: Concept 1 - 木製：概念１
	// DESC: Wooden: Concept 1 - 木製：概念１
	int16_t atkWood_1;

	// NAME: Wooden: Concept 2 - 木製：概念２
	// DESC: Wooden: Concept 2 - 木製：概念２
	int16_t atkWood_2;

	// NAME: Meat: Concept 1 - 肉：概念１
	// DESC: Meat: Concept 1 - 肉：概念１
	int16_t atkBody_1;

	// NAME: Meat: Concept 2 - 肉：概念２
	// DESC: Meat: Concept 2 - 肉：概念２
	int16_t atkBody_2;

	// NAME: Stone: Concept 1 - 石製：概念１
	// DESC: Corrosion: Concept 1 - 蝕：概念１
	int16_t atkStone_1;

	// NAME: Stone: Concept 2 - 石製：概念２
	// DESC: Corrosion: Concept 2 - 蝕：概念２
	int16_t atkStone_2;

	// NAME: pad - pad
	uint8_t pad[4];

	// NAME: None: Concept 1 - なし：概念１
	// DESC: None: Concept 1 - なし：概念１
	int16_t atkNone_1;

	// NAME: None: Concept 2 - なし：概念２
	// DESC: None: Concept 2 - なし：概念２
	int16_t atkNone_2;

	// NAME: Reserved area - 予約領域
	uint8_t reserve[52];
};

#endif
