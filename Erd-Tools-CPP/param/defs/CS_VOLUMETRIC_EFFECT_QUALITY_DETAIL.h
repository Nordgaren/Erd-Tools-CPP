/* This file was automatically generated from XML paramdefs. */
#ifndef _PARAMDEF_CS_VOLUMETRIC_EFFECT_QUALITY_DETAIL_H
#define _PARAMDEF_CS_VOLUMETRIC_EFFECT_QUALITY_DETAIL_H
#pragma once
#include <inttypes.h>

// Data Version: 2
// Is Big Endian: False
// Is Unicode: True
// Format Version: 203
struct CS_VOLUMETRIC_EFFECT_QUALITY_DETAIL {

	// NAME: Fog enabled - フォグ有効
	// DESC: Fog enabled - フォグ有効
	uint8_t fogEnabled;

	// NAME: Fog shadow permission - フォグシャドウ許可
	// DESC: Fog shadow permission - フォグシャドウ許可
	uint8_t fogShadowEnabled;

	// NAME: dmy - dmy
	// DESC: dmy - dmy
	uint8_t dmy[2];

	// NAME: Shadow sample count offset. - シャドウのサンプルカウントオフセット。
	// DESC: Shadow sample count offset. - シャドウのサンプルカウントオフセット。
	int32_t fogShadowSampleCountBias;

	// NAME: Local light calculation distance scale (0 does not calculate local light) - ローカルライト計算距離スケール (0にするとローカルライト計算をしない)
	// DESC: Local light calculation distance scale (0 does not calculate local light) - ローカルライト計算距離スケール (0にするとローカルライト計算をしない)
	float fogLocalLightDistScale;

	// NAME: Fog volume size scaler - フォグボリュームサイズスケーラ
	// DESC: Fog volume size scaler - フォグボリュームサイズスケーラ
	uint32_t fogVolueSizeScaler;

	// NAME: Fog volume size division - フォグボリュームサイズ除算
	// DESC: Fog volume size division - フォグボリュームサイズ除算
	uint32_t fogVolueSizeDivider;

	// NAME: Fog Volume Depth Slice Scaler - フォグボリューム奥行きスライススケーラ
	// DESC: Fog Volume Depth Slice Scaler - フォグボリューム奥行きスライススケーラ
	uint32_t fogVolumeDepthScaler;

	// NAME: Fog volume depth slice division - フォグボリューム奥行きスライス除算
	// DESC: Fog volume depth slice division - フォグボリューム奥行きスライス除算
	uint32_t fogVolumeDepthDivider;

	// NAME: Arranged fog volume enabled - 配置式フォグボリューム有効
	// DESC: Arranged fog volume enabled - 配置式フォグボリューム有効
	uint8_t fogVolumeEnabled;

	// NAME: Upscale type - アップスケール種別
	// DESC: Method type at the time of upscale - アップスケール時の手法種別
	uint8_t fogVolumeUpScaleType;

	// NAME: Edge correction level performed only when bilateral - バイラテラル時のみ行われるエッジ補正レベル
	// DESC: Edge correction level performed only at bilateral (0: invalid, edge redraw permission at 1: 1 / 2x1 / 2 resolution, edge redraw permission with parameter reduction at 2: 1 / 2x1 / 2 + 1x1 resolution, 3 : 1 / 2x1 / 2 + 1x1 resolution edge redraw permission) - バイラテラル時のみ行われるエッジ補正レベル(0:無効,1:1/2x1/2解像度でのエッジ再描画許可,2:1/2x1/2+1x1解像度でパラメータ削減ありのエッジ再描画許可,3:1/2x1/2+1x1解像度でのエッジ再描画許可)
	uint8_t fogVolumeEdgeCorrectionLevel;

	// NAME: Offset of sampling number during ray marching - レイマーチング時のサンプリング数のオフセット
	// DESC: Offset of sampling number during ray marching - レイマーチング時のサンプリング数のオフセット
	int8_t fogVolumeRayMarcingSampleCountOffset;

	// NAME: Shadow permission - シャドウ許可
	// DESC: Shadow permission (refers to shadow processing due to density changes in the area, where shadows are cast on the area) - シャドウ許可(領域に影が落ちる、領域内の密度変化による陰影処理を指す)
	uint8_t fogVolumeShadowEnabled;

	// NAME: Forcibly casts a shadow on the area regardless of the setting when shadow is allowed - シャドウ許可時に設定にかかわらず領域に強制的に影を落とす
	// DESC: Forcibly casts a shadow on the area regardless of the setting when shadow is permitted (shadow processing is not affected) - シャドウ許可時に設定にかかわらず領域に強制的に影を落とす(陰影処理は影響をうけない)
	uint8_t fogVolumeForceShadowing;

	// NAME: Fog volume upscale processing resolution - フォグボリュームのアップスケール処理解像度
	uint8_t fogVolumeResolution;

	// NAME: pad - pad
	uint8_t pad2[1];
};

#endif
