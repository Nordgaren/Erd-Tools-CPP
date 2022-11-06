/* This file was automatically generated from XML paramdefs. */
#ifndef _PARAMDEF_SE_MATERIAL_CONVERT_PARAM_ST_H
#define _PARAMDEF_SE_MATERIAL_CONVERT_PARAM_ST_H
#pragma once
#include <inttypes.h>

// Data Version: 1
// Is Big Endian: False
// Is Unicode: True
// Format Version: 203
struct SE_MATERIAL_CONVERT_PARAM_ST {

	// NAME: SE material ID - SE材質ID
	// DESC: Conversion from SFX material ID (3 digits) to SE material ID (2 digits) - SFX材質ID（３桁）からSE材質ID（２桁）への変換
	uint8_t seMaterialId;

	// NAME: Padding - パディング
	// DESC: Padding - パディング
	uint8_t pad[3];
};

#endif
