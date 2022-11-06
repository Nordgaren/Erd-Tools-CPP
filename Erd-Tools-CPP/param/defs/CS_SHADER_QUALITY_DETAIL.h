/* This file was automatically generated from XML paramdefs. */
#ifndef _PARAMDEF_CS_SHADER_QUALITY_DETAIL_H
#define _PARAMDEF_CS_SHADER_QUALITY_DETAIL_H
#pragma once
#include <inttypes.h>

// Data Version: 1
// Is Big Endian: False
// Is Unicode: True
// Format Version: 203
struct CS_SHADER_QUALITY_DETAIL {

	// NAME: SSS enabled - SSS有効
	// DESC: SSS enabled - SSS有効
	uint8_t sssEnabled;

	// NAME: Tessellation enabled - テッセレーション有効
	// DESC: Tessellation enabled - テッセレーション有効
	uint8_t tessellationEnabled;

	// NAME: High precision normal effective - 高精度ノーマル有効
	// DESC: High precision normal valid (setting the accuracy of the normal stored in G-Buffer) - 高精度ノーマル有効(G-Bufferに格納する法線の精度の設定)
	uint8_t highPrecisionNormalEnabled;

	// NAME: dmy - dmy
	char dmy[1];
};

#endif
