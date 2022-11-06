/* This file was automatically generated from XML paramdefs. */
#ifndef _PARAMDEF_CS_REFLECTION_QUALITY_DETAIL_H
#define _PARAMDEF_CS_REFLECTION_QUALITY_DETAIL_H
#pragma once
#include <inttypes.h>

// Data Version: 1
// Is Big Endian: False
// Is Unicode: True
// Format Version: 203
struct CS_REFLECTION_QUALITY_DETAIL {

	// NAME: Reflective effective - 反射有効
	// DESC: Reflective effective - 反射有効
	uint8_t enabled;

	// NAME: Local light enabled - ローカルライト有効
	// DESC: Local light enabled - ローカルライト有効
	uint8_t localLightEnabled;

	// NAME: Local light forced enable - ローカルライト強制有効
	// DESC: Local light forced enable - ローカルライト強制有効
	uint8_t localLightForceEnabled;

	// NAME: dmy - dmy
	uint8_t dmy[1];

	// NAME: Resolution scale - 解像度スケール
	// DESC: Resolution scale - 解像度スケール
	uint32_t resolutionDivider;

	// NAME: SSR enabled - SSR有効
	// DESC: SSR enabled - SSR有効
	uint8_t ssrEnabled;

	// NAME: Gaussian blur permission - ガウスぼかしの許可
	// DESC: Gaussian blur permission - ガウスぼかしの許可
	uint8_t ssrGaussianBlurEnabled;

	// NAME: dmy - dmy
	uint8_t dmy2[2];

	// NAME: Calculated distance scale - 計算距離スケール
	// DESC: Calculated distance scale - 計算距離スケール
	float ssrDepthRejectThresholdScale;

	// NAME: Raytrace step factor (multiply by SSR parameter) - レイトレースステップ係数（SSRパラメータに乗算）
	// DESC: Raytrace step factor (multiply by SSR parameter) - レイトレースステップ係数（SSRパラメータに乗算）
	float ssrRayTraceStepScale;

	// NAME: Fade angle bias. High quality when made smaller - フェード角度バイアス。小さくすると高品質
	// DESC: Fade angle bias. High quality when made smaller - フェード角度バイアス。小さくすると高品質
	float ssrFadeToViewerBias;

	// NAME: Fresnel reject bias. High quality when made smaller - フレネルリジェクトバイアス。小さくすると高品質
	// DESC: Fresnel reject bias. High quality when made smaller - フレネルリジェクトバイアス。小さくすると高品質
	float ssrFresnelRejectBias;
};

#endif
