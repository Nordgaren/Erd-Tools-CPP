/* This file was automatically generated from XML paramdefs. */
#ifndef _PARAMDEF_CS_SHADOW_QUALITY_DETAIL_H
#define _PARAMDEF_CS_SHADOW_QUALITY_DETAIL_H
#pragma once
#include <inttypes.h>

// Data Version: 2
// Is Big Endian: False
// Is Unicode: True
// Format Version: 203
struct CS_SHADOW_QUALITY_DETAIL {

	// NAME: Shadow is enabled - シャドウが有効
	// DESC: Shadow is enabled - シャドウが有効
	uint8_t enabled;

	// NAME: Maximum filter quality allowed - 許可される最大のフィルタ品質
	// DESC: Maximum filter quality allowed - 許可される最大のフィルタ品質
	uint8_t maxFilterLevel;

	// NAME: dmy - dmy
	uint8_t dmy[2];

	// NAME: Scaler with set shadow map resolution - 設定されたシャドウマップ解像度のスケーラ
	// DESC: Scaler with set shadow map resolution - 設定されたシャドウマップ解像度のスケーラ
	uint32_t textureSizeScaler;

	// NAME: Divide the set shadow map resolution - 設定されたシャドウマップ解像度を除算
	// DESC: Divide the set shadow map resolution - 設定されたシャドウマップ解像度を除算
	uint32_t textureSizeDivider;

	// NAME: Minimum resolution - 解像度最小
	// DESC: Clamp resolution - 解像度をクランプ
	uint32_t textureMinSize;

	// NAME: Maximum resolution - 解像度最大
	// DESC: Clamp the resolution. It will be the resolution judgment for each cascade - 解像度をクランプ。カスケード毎の解像度判定になります
	uint32_t textureMaxSize;

	// NAME: Blur count bias - ブラーカウントバイアス
	// DESC: Blur count bias (set count bias, unchanged at 0) - ブラーカウントバイアス(設定されたカウントのバイアス。0で変更なし)
	int32_t blurCountBias;
};

#endif
