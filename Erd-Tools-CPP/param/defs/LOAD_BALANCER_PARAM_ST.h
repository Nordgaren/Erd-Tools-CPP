/* This file was automatically generated from XML paramdefs. */
#ifndef _PARAMDEF_LOAD_BALANCER_PARAM_ST_H
#define _PARAMDEF_LOAD_BALANCER_PARAM_ST_H
#pragma once
#include <inttypes.h>

// Data Version: 0
// Is Big Endian: False
// Is Unicode: True
// Format Version: 203
struct LOAD_BALANCER_PARAM_ST {

	// NAME: lowerFpsThreshold - lowerFpsThreshold
	// DESC: If it falls below this FPS, increase the load balance level by 1. - このFPSを下回ったら、ロードバランスレベルを1上げる
	float lowerFpsThreshold;

	// NAME: upperFpsThreshold - upperFpsThreshold
	// DESC: If you exceed this FPS, lower the load balance level by 1. - このFPSを上回ったら、ロードバランスレベルを1下げる
	float upperFpsThreshold;

	// NAME: lowerFpsContinousCount - lowerFpsContinousCount
	// DESC: If this frame continues below the threshold, level up - このフレーム連続してしきい値を下回ったら、レベルアップ
	uint32_t lowerFpsContinousCount;

	// NAME: upperFpsContinousCount - upperFpsContinousCount
	// DESC: If the threshold is exceeded continuously for this frame, level down - このフレーム連続してしきい値を上回ったら、レベルダウン
	uint32_t upperFpsContinousCount;

	// NAME: downAfterChangeSleep - downAfterChangeSleep
	// DESC: Sleep frame count after level down - レベルダウン後のスリープフレームカウント
	uint32_t downAfterChangeSleep;

	// NAME: upAfterChangeSleep - upAfterChangeSleep
	// DESC: Sleep frame count after leveling up - レベルアップ後のスリープフレームカウント
	uint32_t upAfterChangeSleep;

	// NAME: Light shaft - ライトシャフト
	// DESC: Light shaft of filter - フィルタのライトシャフト
	uint8_t postProcessLightShaft;

	// NAME: Bloom - Bloom
	// DESC: Bloom - ブルーム
	uint8_t postProcessBloom;

	// NAME: Glow - Glow
	// DESC: Glow - グロー
	uint8_t postProcessGlow;

	// NAME: AA - AA
	// DESC: Antialiasing - アンチエイリアス
	uint8_t postProcessAA;

	// NAME: SSAO - SSAO
	// DESC: SSAO - SSAO
	uint8_t postProcessSSAO;

	// NAME: DOF - DOF
	// DESC: DOF - DOF
	uint8_t postProcessDOF;

	// NAME: Motion Blur - MotionBlur
	// DESC: Motion Blur - MotionBlur
	uint8_t postProcessMotionBlur;

	// NAME: MotionBlurIteration - MotionBlurIteration
	// DESC: Reduce the number of Motion Blur iterations - MotionBlurのイテレーション回数を下げる
	uint8_t postProcessMotionBlurIteration;

	// NAME: Reserve - 予備
	// DESC: Reserve - 予備
	uint8_t reserve0[1];

	// NAME: Shadow Blur - Shadow Blur
	// DESC: Cut the shadow blur - 影のブラーを切る
	uint8_t shadowBlur;

	// NAME: Around the SFX Emit - SFXのエミット回り
	// DESC: Emit interval, number of emits, LOD distance halved in graphics config - エミット間隔、エミット数、LOD距離をグラフィックスコンフィグの半分に
	uint8_t sfxParticleHalf;

	// NAME: SFX reflection - SFXの反射
	// DESC: Omit the reflection scene SFX - 反射シーンSFXをオミット
	uint8_t sfxReflection;

	// NAME: Water interaction - 水面インタラクション
	// DESC: Omit water surface interact SFX - 水面インタラクトSFXをオミット
	uint8_t sfxWaterInteraction;

	// NAME: SFX glow - SFXのグロー
	// DESC: Omit Glow playing with SFX - SFXでかけてるGlowをオミット
	uint8_t sfxGlow;

	// NAME: SFX distortion - SFXの歪み
	// DESC: Omit of distortion applied by SFX - SFXでかけてる歪みのオミット
	uint8_t sfxDistortion;

	// NAME: Soft sprite - ソフトスプライト
	// DESC: Soft sprite omit with SFX - SFXでかけてるソフトスプライトのオミット
	uint8_t sftSoftSprite;

	// NAME: Light shaft - ライトシャフト
	// DESC: SFX Light Shaft Omit - SFXのライトシャフトのオミット
	uint8_t sfxLightShaft;

	// NAME: Scale to the distance judgment of the effect dynamically registered in the reduction buffer - 動的に縮小バッファに登録されるエフェクトの距離判定にスケール
	// DESC: Scale to the distance judgment of the effect dynamically registered in the reduction buffer by the distance of SFX - SFXの距離で動的に縮小バッファに登録されるエフェクトの距離判定にスケール
	uint8_t sfxScaleRenderDistanceScale;

	// NAME: Dynamic resolution - 動的解像度
	// DESC: Dynamic resolution - 動的解像度
	uint8_t dynamicResolution;

	// NAME: Shadow Cascade0 Resolution Half - Shadow Cascade0 ResolutionHalf
	// DESC: Cut the shadow (cascade 0) resolution in half - 影（カスケード0）の解像度を半分に下げる
	uint8_t shadowCascade0ResolutionHalf;

	// NAME: Shadow Cascade1 Resolution Half - Shadow Cascade1 ResolutionHalf
	// DESC: Cut the shadow (cascade 1) resolution in half - 影（カスケード1）の解像度を半分に下げる
	uint8_t shadowCascade1ResolutionHalf;

	// NAME: Local player - ローカルプレイヤー
	// DESC: Turn off the water wetting process for local players - ローカルプレイヤーの水濡れ処理を切る
	uint8_t chrWetDisablePlayer;

	// NAME: Remote player - リモートプレイヤー
	// DESC: Turn off the water wetting process of the remote player - リモートプレイヤーの水濡れ処理を切る
	uint8_t chrWetDisableRemotePlayer;

	// NAME: Enemy character - 敵キャラ
	// DESC: Turn off the water wetting process of enemy characters - 敵キャラの水濡れ処理を切る
	uint8_t chrWetDisableEnemy;

	// NAME: Resolution reduction lower limit (%) - 解像度引き下げ 下限(%)
	// DESC: Resolution reduction lower limit (%) - 解像度引き下げ 下限(%)
	uint8_t dynamicResolutionPercentageMin;

	// NAME: Resolution reduction upper limit (%) - 解像度引き下げ 上限(%)
	// DESC: Resolution reduction upper limit (%) - 解像度引き下げ 上限(%)
	uint8_t dynamicResolutionPercentageMax;

	// NAME: Reserve - 予備
	// DESC: Reserve - 予備
	uint8_t reserve1[30];
};

#endif
