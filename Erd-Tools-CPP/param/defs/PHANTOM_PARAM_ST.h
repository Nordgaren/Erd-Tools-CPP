/* This file was automatically generated from XML paramdefs. */
#ifndef _PARAMDEF_PHANTOM_PARAM_ST_H
#define _PARAMDEF_PHANTOM_PARAM_ST_H
#pragma once
#include <inttypes.h>

// Data Version: 3
// Is Big Endian: False
// Is Unicode: True
// Format Version: 203
struct PHANTOM_PARAM_ST {

	// NAME: A - A
	// DESC: Edge color A. - エッジ色Aです。
	float edgeColorA;

	// NAME: A - A
	// DESC: The front color is A. - 正面色Aです。
	float frontColorA;

	// NAME: A - A
	// DESC: Diffuse multiplication color A. - ディフューズ乗算色Aです。
	float diffMulColorA;

	// NAME: A - A
	// DESC: Specular multiplication color A. - スペキュラ乗算色Aです。
	float specMulColorA;

	// NAME: A - A
	// DESC: Light color A. - ライト色Aです。
	float lightColorA;

	// NAME: R - R
	// DESC: Edge color R. - エッジ色Rです。
	uint8_t edgeColorR;

	// NAME: G - G
	// DESC: Edge color G. - エッジ色Gです。
	uint8_t edgeColorG;

	// NAME: B - B
	// DESC: Edge color B. - エッジ色Bです。
	uint8_t edgeColorB;

	// NAME: R - R
	// DESC: The front color is R. - 正面色Rです。
	uint8_t frontColorR;

	// NAME: G - G
	// DESC: The front color is G. - 正面色Gです。
	uint8_t frontColorG;

	// NAME: B - B
	// DESC: Front color B. - 正面色Bです。
	uint8_t frontColorB;

	// NAME: R - R
	// DESC: Diffuse multiplication color R. - ディフューズ乗算色Rです。
	uint8_t diffMulColorR;

	// NAME: G - G
	// DESC: Diffuse multiplication color G. - ディフューズ乗算色Gです。
	uint8_t diffMulColorG;

	// NAME: B - B
	// DESC: Diffuse multiplication color B. - ディフューズ乗算色Bです。
	uint8_t diffMulColorB;

	// NAME: R - R
	// DESC: Specular multiplication color R. - スペキュラ乗算色Rです。
	uint8_t specMulColorR;

	// NAME: G - G
	// DESC: Specular multiplication color G. - スペキュラ乗算色Gです。
	uint8_t specMulColorG;

	// NAME: B - B
	// DESC: Specular multiplication color B. - スペキュラ乗算色Bです。
	uint8_t specMulColorB;

	// NAME: R - R
	// DESC: Light color R. - ライト色Rです。
	uint8_t lightColorR;

	// NAME: G - G
	// DESC: Light color G. - ライト色Gです。
	uint8_t lightColorG;

	// NAME: B - B
	// DESC: Light color B. - ライト色Bです。
	uint8_t lightColorB;

	// NAME: Reserve - 予備
	uint8_t reserve[1];

	// NAME: α - α
	// DESC: The overall transparency. - 全体の透過度です。
	float alpha;

	// NAME: Blend rate - ブレンド率
	// DESC: The blend ratio. - ブレンド率です。
	float blendRate;

	// NAME: α type - α種類
	// DESC: The type of alpha blend. - αブレンドの種類です。
	uint8_t blendType;

	// NAME: Whether to perform edge color subtraction - エッジ色減算を行うか
	// DESC: Whether to perform edge color subtraction. - エッジ色減算を行うかです。
	uint8_t isEdgeSubtract;

	// NAME: Whether to perform front color subtraction - 正面色減算を行うか
	// DESC: Is it front color subtraction? - 正面色減算を行うかです。
	uint8_t isFrontSubtract;

	// NAME: Do not do 2pass - 2passを行わない
	// DESC: Do you not do 2pass? - 2passを行わないかです。
	uint8_t isNo2Pass;

	// NAME: Edge width - エッジの幅
	// DESC: Edge width - エッジの幅
	float edgePower;

	// NAME: Glow strength - Glowの強さ
	// DESC: Glow strength - Glowの強さ
	float glowScale;
};

#endif
