/* This file was automatically generated from XML paramdefs. */
#ifndef _PARAMDEF_CS_EFFECT_QUALITY_DETAIL_H
#define _PARAMDEF_CS_EFFECT_QUALITY_DETAIL_H
#pragma once
#include <inttypes.h>

// Data Version: 3
// Is Big Endian: False
// Is Unicode: True
// Format Version: 203
struct CS_EFFECT_QUALITY_DETAIL {

	// NAME: Soft particles enabled - ソフトパーティクル有効
	// DESC: Soft particles enabled - ソフトパーティクル有効
	uint8_t softParticleEnabled;

	// NAME: Glow effective - グロー有効
	// DESC: Glow effective - グロー有効
	uint8_t glowEnabled;

	// NAME: Distortion effective - 歪み有効
	// DESC: Distortion effective - 歪み有効
	uint8_t distortionEnable;

	// NAME: Enable bilateral upscale - バイラテラルアップスケールを有効
	// DESC: Bilateral upscale effective - バイラテラルアップスケール有効
	uint8_t cs_upScaleEnabledType;

	// NAME: Number of Emits at one time - 一回のエミット数
	// DESC: Number of Emits at one time - 一回のエミット数
	float fNumOnceEmitsScale;

	// NAME: Emit interval - エミット間隔
	// DESC: Emit interval - エミット間隔
	float fEmitSpanScale;

	// NAME: 1st stage LOD distance scale - 1段階目のLOD距離スケール
	// DESC: 1st stage LOD distance scale - 1段階目のLOD距離スケール
	float fLodDistance1Scale;

	// NAME: Second stage LOD distance scale - 2段階目のLOD距離スケール
	// DESC: Second stage LOD distance scale - 2段階目のLOD距離スケール
	float fLodDistance2Scale;

	// NAME: 3rd stage LOD distance scale - 3段階目のLOD距離スケール
	// DESC: 3rd stage LOD distance scale - 3段階目のLOD距離スケール
	float fLodDistance3Scale;

	// NAME: 4th stage LOD distance scale - 4段階目のLOD距離スケール
	// DESC: 4th stage LOD distance scale - 4段階目のLOD距離スケール
	float fLodDistance4Scale;

	// NAME: Magnification to the distance registered in the reduction buffer - 縮小バッファへ登録される距離への倍率
	// DESC: Magnification to the distance registered in the reduction buffer - 縮小バッファへ登録される距離への倍率
	float fScaleRenderDistanceScale;

	// NAME: dummy - ダミー
	uint8_t dmy[4];
};

#endif
