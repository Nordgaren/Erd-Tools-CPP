/* This file was automatically generated from XML paramdefs. */
#ifndef _PARAMDEF_CS_TEXTURE_FILTER_QUALITY_DETAIL_H
#define _PARAMDEF_CS_TEXTURE_FILTER_QUALITY_DETAIL_H
#pragma once
#include <inttypes.h>

// Data Version: 1
// Is Big Endian: False
// Is Unicode: True
// Format Version: 203
struct CS_TEXTURE_FILTER_QUALITY_DETAIL {

	// NAME: filter - フィルター
	// DESC: filter - フィルター
	uint8_t filter;

	// NAME: dmy - dmy
	uint8_t dmy[3];

	// NAME: Aniso level - アニソレベル
	// DESC: Aniso level - アニソレベル
	uint32_t maxAnisoLevel;
};

#endif
