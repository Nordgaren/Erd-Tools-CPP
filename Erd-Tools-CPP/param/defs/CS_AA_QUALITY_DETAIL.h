/* This file was automatically generated from XML paramdefs. */
#ifndef _PARAMDEF_CS_AA_QUALITY_DETAIL_H
#define _PARAMDEF_CS_AA_QUALITY_DETAIL_H
#pragma once
#include <inttypes.h>

// Data Version: 1
// Is Big Endian: False
// Is Unicode: True
// Format Version: 203
struct CS_AA_QUALITY_DETAIL {

	// NAME: AA valid - AA有効
	// DESC: AA valid - AA有効
	uint8_t enabled;

	// NAME: Force FXAA2 - 強制的にFXAA2
	// DESC: Force FXAA2 - 強制的にFXAA2
	uint8_t forceFXAA2;

	// NAME: dmy - dmy
	uint8_t dmy[2];
};

#endif
