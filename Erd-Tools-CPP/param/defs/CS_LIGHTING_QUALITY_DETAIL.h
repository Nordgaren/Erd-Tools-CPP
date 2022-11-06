/* This file was automatically generated from XML paramdefs. */
#ifndef _PARAMDEF_CS_LIGHTING_QUALITY_DETAIL_H
#define _PARAMDEF_CS_LIGHTING_QUALITY_DETAIL_H
#pragma once
#include <inttypes.h>

// Data Version: 1
// Is Big Endian: False
// Is Unicode: True
// Format Version: 203
struct CS_LIGHTING_QUALITY_DETAIL {

	// NAME: Local light effective distance coefficient - ローカルライト有効距離係数
	// DESC: Local light effective distance coefficient (smaller, it disappears at a short distance) - ローカルライト有効距離係数(小さくすると、近い距離で消える)
	float localLightDistFactor;

	// NAME: Local light shadow enabled - ローカルライトシャドウ有効
	// DESC: Local light shadow enabled - ローカルライトシャドウ有効
	uint8_t localLightShadowEnabled;

	// NAME: Forward pass writing enabled - フォワードパスライティング有効
	// DESC: Forward pass writing enabled - フォワードパスライティング有効
	uint8_t forwardPassLightingEnabled;

	// NAME: Local light shadow spec level - ローカルライトシャドウスペックレベル
	// DESC: Local light shadow spec level. The larger the value, the more light sources will be shadowed. - ローカルライトシャドウスペックレベル。大きいほど、より多くの光源にシャドウが設定される
	uint8_t localLightShadowSpecLevelMax;

	// NAME: dmy - dmy
	uint8_t dmy[1];
};

#endif
