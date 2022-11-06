/* This file was automatically generated from XML paramdefs. */
#ifndef _PARAMDEF_GRASS_TYPE_PARAM_ST_H
#define _PARAMDEF_GRASS_TYPE_PARAM_ST_H
#pragma once
#include <inttypes.h>

// Data Version: 1
// Is Big Endian: False
// Is Unicode: True
// Format Version: 203
struct GRASS_TYPE_PARAM_ST {

	// NAME: LOD distance - LOD距離
	uint16_t lodRange;

	// NAME: LOD0 cluster type - LOD0のクラスタータイプ
	uint8_t lod0ClusterType;

	// NAME: LOD1 cluster type - LOD1のクラスタータイプ
	uint8_t lod1ClusterType;

	// NAME: LOD2 cluster type - LOD2のクラスタータイプ
	uint8_t lod2ClusterType;

	// NAME: pad0 - pad0
	uint8_t pad0[2];

	// NAME: Placement method - 配置方法
	uint8_t distributionType;

	// NAME: Basic density - 基本密度
	float baseDensity;

	// NAME: Model name (0) - モデル名（０）
	wchar_t model0Name[16];

	// NAME: Flat texture name - フラットテクスチャー名
	wchar_t flatTextureName[32];

	// NAME: Billboard texture name - ビルボードのテクスチャー名
	wchar_t billboardTextureName[32];

	// NAME: Effect of tilt (%) - 傾きの影響（％）
	uint8_t normalInfluence;

	// NAME: Maximum tilt angle (degrees) - 傾きの最大角度（度）
	uint8_t inclinationMax;

	// NAME: Randomness of tilt angle (degrees) - 傾斜角のランダム性（度）
	uint8_t inclinationJitter;

	// NAME: Width scale range (min,%) - 幅のスケール範囲(min，％)
	uint8_t scaleBaseMin;

	// NAME: Width scale range (max,%) - 幅のスケール範囲(max，％)
	uint8_t scaleBaseMax;

	// NAME: Height scale range (min,%) - 高さのスケール範囲(min，％)
	uint8_t scaleHeightMin;

	// NAME: Height scale range (max,%) - 高さのスケール範囲(max，％)
	uint8_t scaleHeightMax;

	// NAME: Multiplication color 1 (red) - 乗算カラー１ (赤）
	uint8_t colorShade1_r;

	// NAME: Multiplication color 1 (green) - 乗算カラー１ （緑）
	uint8_t colorShade1_g;

	// NAME: Multiplication color 1 (blue) - 乗算カラー １（青）
	uint8_t colorShade1_b;

	// NAME: Multiplication color 2 (red) - 乗算カラー２ （赤）
	uint8_t colorShade2_r;

	// NAME: Multiplication color 2 (green) - 乗算カラー２ （緑）
	uint8_t colorShade2_g;

	// NAME: Multiplication color 2 (blue) - 乗算カラー ２（青）
	uint8_t colorShade2_b;

	// NAME: Separation of planes - 平面の分離
	uint8_t flatSplitType;

	// NAME: Number of planes - 平面の枚数
	uint8_t flatBladeCount;

	// NAME: Plane angle (degrees) - 平面の角度（度）
	int8_t flatSlant;

	// NAME: Plane distance - 平面の距離
	float flatRadius;

	// NAME: Do you want to cast a shadow - 影を落とすか
	uint8_t castShadow;

	// NAME: Amplitude (magnitude of shaking) - 振幅(揺れの大きさ)
	uint8_t windAmplitude;

	// NAME: pad1 - pad1
	uint8_t pad1[1];

	// NAME: Cycle (speed) - 周期(速度)
	uint8_t windCycle;

	// NAME: Direction (degree) - 方向（度）
	// DESC: Random for -1 - -1の場合はランダム
	float orientationAngle;

	// NAME: Directional range (degrees) - 方向の範囲（度）
	float orientationRange;

	// NAME: Model spacing - モデル間隔
	float spacing;

	// NAME: Dithering - ディザリング
	uint8_t dithering;

	// NAME: pad2 - pad2
	uint8_t pad[3];

	// NAME: Simple model name - Simpleモデル名
	wchar_t simpleModelName[16];

	// NAME: Model name (1) - モデル名（１）
	wchar_t model1Name[16];
};

#endif
