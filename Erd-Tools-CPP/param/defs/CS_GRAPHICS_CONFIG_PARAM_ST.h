/* This file was automatically generated from XML paramdefs. */
#ifndef _PARAMDEF_CS_GRAPHICS_CONFIG_PARAM_ST_H
#define _PARAMDEF_CS_GRAPHICS_CONFIG_PARAM_ST_H
#pragma once
#include <inttypes.h>

// Data Version: 2
// Is Big Endian: False
// Is Unicode: True
// Format Version: 203
struct CS_GRAPHICS_CONFIG_PARAM_ST {

	// NAME: Texture filter quality - テクスチャフィルタ品質
	// DESC: Texture filter quality (default Midele) - テクスチャフィルタ品質(デフォルトMidele)
	uint8_t m_textureFilterQuality;

	// NAME: AA quality - AA品質
	// DESC: AA quality (default High) - AA品質(デフォルトHigh)
	uint8_t m_aaQuality;

	// NAME: SSAO quality - SSAO品質
	// DESC: SSAO quality (default High) - SSAO品質(デフォルトHigh)
	uint8_t m_ssaoQuality;

	// NAME: Depth of field quality - 被写界深度品質
	// DESC: Depth of field quality (default High) - 被写界深度品質(デフォルトHigh)
	uint8_t m_dofQuality;

	// NAME: Motion blur quality - モーションブラー品質
	// DESC: Motion blur quality (default High) - モーションブラー品質(デフォルトHigh)
	uint8_t m_motionBlurQuality;

	// NAME: Shadow quality - シャドウ品質
	// DESC: Shadow quality (default High) - シャドウ品質(デフォルトHigh)
	uint8_t m_shadowQuality;

	// NAME: Lighting quality - ライティング品質
	// DESC: Lighting quality (default High) - ライティング品質(デフォルトHigh)
	uint8_t m_lightingQuality;

	// NAME: Effect quality - エフェクト品質
	// DESC: Effect quality (default High) - エフェクト品質(デフォルトHigh)
	uint8_t m_effectQuality;

	// NAME: Decal quality - デカール品質
	// DESC: Decal quality (default High) - デカール品質(デフォルトHigh)
	uint8_t m_decalQuality;

	// NAME: Reflection quality - 反射品質
	// DESC: Reflection quality (default High) - 反射品質(デフォルトHigh)
	uint8_t m_reflectionQuality;

	// NAME: Water quality - ウォーター品質
	// DESC: Water quality (default High) - ウォーター品質(デフォルトHigh)
	uint8_t m_waterQuality;

	// NAME: Shader quality - シェーダー品質
	// DESC: Shader quality (default High) - シェーダー品質(デフォルトHigh)
	uint8_t m_shaderQuality;

	// NAME: Volumetric effect quality - ボリューメトリック効果品質
	// DESC: Volumetric effect quality (default High) - ボリューメトリック効果品質(デフォルトHigh)
	uint8_t m_volumetricEffectQuality;

	// NAME: dmy - dmy
	uint8_t m_dummy[3];
};

#endif
