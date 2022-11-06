/* This file was automatically generated from XML paramdefs. */
#ifndef _PARAMDEF_CS_SSAO_QUALITY_DETAIL_H
#define _PARAMDEF_CS_SSAO_QUALITY_DETAIL_H
#pragma once
#include <inttypes.h>

// Data Version: 2
// Is Big Endian: False
// Is Unicode: True
// Format Version: 203
struct CS_SSAO_QUALITY_DETAIL {

	// NAME: SSAO enabled - SSAO有効
	// DESC: SSAO enabled - SSAO有効
	uint8_t enabled;

	// NAME: Reprojection enabled - リプロジェクション有効
	// DESC: When reprojection is forcibly enabled, Prevent Ghost is also enabled. - リプロジェクション強制有効の時は、PreventGhostも有効になる
	uint8_t cs_reprojEnabledType;

	// NAME: Bilateral upscale effective - バイラテラルアップスケール有効
	// DESC: Bilateral upscale effective - バイラテラルアップスケール有効
	uint8_t cs_upScaleEnabledType;

	// NAME: Valid to use normals - 法線使用有効
	// DESC: Valid to use normals - 法線使用有効
	uint8_t cs_useNormalEnabledType;

	// NAME: dmy - dmy
	uint8_t dmy[1];
};

#endif
