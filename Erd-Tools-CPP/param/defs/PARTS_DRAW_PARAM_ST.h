/* This file was automatically generated from XML paramdefs. */
#ifndef _PARAMDEF_PARTS_DRAW_PARAM_ST_H
#define _PARAMDEF_PARTS_DRAW_PARAM_ST_H
#pragma once
#include <inttypes.h>

// Data Version: 5
// Is Big Endian: False
// Is Unicode: True
// Format Version: 203
struct PARTS_DRAW_PARAM_ST {

	// NAME: LOD level 0-1 boundary distance [m] - LODレベル0-1境界距離[m]
	// DESC: Switching center - 切り替わる中心
	float lv01_BorderDist;

	// NAME: LOD level 0-1 play distance [m] - LODレベル0-1遊び距離[m]
	// DESC: ± play at the center of the boundary - 境界中心で±遊び
	float lv01_PlayDist;

	// NAME: LOD level 1-2 boundary distance [m] - LODレベル1-2境界距離[m]
	// DESC: Switching center - 切り替わる中心
	float lv12_BorderDist;

	// NAME: LOD level 1-2 play distance [m] - LODレベル1-2遊び距離[m]
	// DESC: ± play at the center of the boundary - 境界中心で±遊び
	float lv12_PlayDist;

	// NAME: LOD level 2-3 Boundary distance [m] - LODレベル2-3境界距離[m]
	// DESC: Switching center - 切り替わる中心
	float lv23_BorderDist;

	// NAME: LOD level 2-3 play distance [m] - LODレベル2-3遊び距離[m]
	// DESC: ± play at the center of the boundary - 境界中心で±遊び
	float lv23_PlayDist;

	// NAME: LOD level 3-4 Boundary distance [m] - LODレベル3-4境界距離[m]
	// DESC: Switching center - 切り替わる中心
	float lv34_BorderDist;

	// NAME: LOD level 3-4 play distance [m] - LODレベル3-4遊び距離[m]
	// DESC: ± play at the center of the boundary - 境界中心で±遊び
	float lv34_PlayDist;

	// NAME: LOD level 4-5 Boundary distance [m] - LODレベル4-5境界距離[m]
	// DESC: Switching center - 切り替わる中心
	float lv45_BorderDist;

	// NAME: LOD level 4-5 play distance [m] - LODレベル4-5遊び距離[m]
	// DESC: ± play at the center of the boundary - 境界中心で±遊び
	float lv45_PlayDist;

	// NAME: Texture LOD Level 0-1 Boundary distance [m] - TextureLODレベル0-1境界距離[m]
	// DESC: Texture switching center (Texure LOD disabled at 0) - Texture切り替わる中心(0でTexureLOD無効)
	float tex_lv01_BorderDist;

	// NAME: Texture LOD Level 0-1 Play distance [m] - TextureLODレベル0-1遊び距離[m]
	// DESC: Texture Play around the boundary - Texture境界中心で±遊び
	float tex_lv01_PlayDist;

	// NAME: Crossfade enabled - クロスフェード有効
	// DESC: Is crossfade enabled (0: disabled, 1: enabled)? - クロスフェード有効か(0:無効,1:有効)
	uint32_t enableCrossFade: 1;

	// NAME: Drawing distance [m] - 描画距離[m]
	// DESC: Maximum drawing distance. In the open, it will be used for the activation distance - 描画最大距離。オープンではアクティベート距離に利用されます
	float drawDist;

	// NAME: Fade range [m] - フェード範囲[m]
	// DESC: Fade distance from the maximum drawing distance to the actual disappearance - 描画最大距離から、実際に消えるまでのフェード距離
	float drawFadeRange;

	// NAME: Shadow drawing distance [m] - 影描画距離[m]
	// DESC: Maximum shadow drawing distance - 影の描画最大距離
	float shadowDrawDist;

	// NAME: Shadow fade range [m] - 影フェード範囲[m]
	// DESC: Fade distance from the maximum shadow drawing distance to the actual disappearance - 影の描画最大距離から、実際に消えるまでのフェード距離
	float shadowFadeRange;

	// NAME: Motion blur drawing boundary distance [m] - モーションブラー描画境界距離[m]
	// DESC: Distance at which motion blur is enabled - モーションブラーが有効になる距離
	float motionBlur_BorderDist;

	// NAME: Cast the shadow of a point light source - 点光源の影を落とす
	// DESC: Cast the shadow of a point light source - 点光源の影を落とす
	int8_t isPointLightShadowSrc;

	// NAME: Cast the shadow of a parallel light source - 平行光源の影を落とす
	// DESC: Cast the shadow of a parallel light source - 平行光源の影を落とす
	int8_t isDirLightShadowSrc;

	// NAME: Receive a shadow - 影を受ける
	// DESC: Receive a shadow - 影を受ける
	int8_t isShadowDst;

	// NAME: Shadow drawing only - 影描画のみ
	// DESC: Shadow drawing only - 影描画のみ
	int8_t isShadowOnly;

	// NAME: Reflected - 映り込む
	// DESC: Reflected - 映り込む
	int8_t drawByReflectCam;

	// NAME: Reflection drawing only - 映り込み描画のみ
	// DESC: Reflection drawing only - 映り込み描画のみ
	int8_t drawOnlyReflectCam;

	// NAME: What level of LodMap to include - どのレベルのLodMapまで含めるか
	// DESC: What level of LodMap to include - どのレベルのLodMapまで含めるか
	int8_t IncludeLodMapLv;

	// NAME: Don't FarClip - FarClipしない
	// DESC: Disable fur clips and always draw at the innermost depth of the clip space. Mainly for celestial sphere - ファークリップを無効にし、常にクリップ空間の一番奥の深度に描画する。主に天球用
	uint8_t isNoFarClipDraw;

	// NAME: LOD type - LODタイプ
	// DESC: Type and size of LOD target - LOD対象の種類、大きさ
	uint8_t lodType;

	// NAME: Shadow drawing LOD level offset - 影描画LODレベルオフセット
	// DESC: LOD level offset value when drawing shadows - 影描画時のLODレベルオフセット値
	int8_t shadowDrawLodOffset;

	// NAME: Follow the camera on the XZ plane - カメラをXZ平面上で追従する
	// DESC: Follow the camera on the XZ plane (GR SEQ09242) - カメラをXZ平面上で追従する(GR SEQ09242)
	uint8_t isTraceCameraXZ;

	// NAME: Switch to the celestial sphere drawing phase - 天球描画フェイズに切り替え
	// DESC: Set the drawing phase to the celestial sphere (GR SEQ09242) - 描画フェイズを天球に設定する(GR SEQ09242)
	uint8_t isSkydomeDrawPhase;

	// NAME: Distance switching distance [m] - 遠景切り替え距離[m]
	// DESC: Distance switching distance [m] - 遠景切り替え距離[m]
	float DistantViewModel_BorderDist;

	// NAME: Distant view switching play distance [m] - 遠景切り替え遊び距離[m]
	// DESC: Distant view switching play distance [m] - 遠景切り替え遊び距離[m]
	float DistantViewModel_PlayDist;

	// NAME: Construction limit distance for open [m] - オープン用構築制限距離[m]
	// DESC: Construction limit distance for open [m]. If the distance to the camera is less than this distance in the open, it will not be built. This is a function for distant view assets. -1: Function disabled (default) - オープン用構築制限距離[m]。オープンにおいてカメラとの距離がこの距離未満だと構築されないようになります。遠景アセット用の機能です。-1:機能無効(デフォルト)
	float LimtedActivate_BorderDist_forGrid;

	// NAME: Construction limit play distance for open [m] - オープン用構築制限遊び距離[m]
	// DESC: Open construction limit play distance [m] - オープン構築制限遊び距離[m]
	float LimtedActivate_PlayDist_forGrid;

	// NAME: Z sort offset - Zソートオフセット
	// DESC: If the distance from the camera is the same in the same drawing phase, the smaller translucent system is drawn in the foreground, and the opaque system is drawn in the larger value. The base point of the offset is the origin in the celestial sphere drawing phase. Other than that, it is mainly Model AABB. (GR SEQ09242) - 同じ描画フェーズ内でカメラからの距離が同じ場合、半透明系は小さいほうが手前、不透明系は値が大きいほうが手前に描画されます。 オフセットの基点は天球描画フェーズのものは原点。それ以外はModelAABB中心。(GR SEQ09242)
	float zSortOffsetForNoFarClipDraw;

	// NAME: Shadow drawing alpha test effective distance [m] - 影描画アルファテスト有効距離[m]
	// DESC: Distance to perform alpha test when drawing shadow [m] - 影描画時にアルファテストを行う距離[m]
	float shadowDrawAlphaTestDist;

	// NAME: Forward Drawing environment map Blend type - Forward描画物の環境マップブレンドタイプ
	// DESC: Forward Drawing environment map Blend type - Forward描画物の環境マップブレンドタイプ
	uint8_t fowardDrawEnvmapBlendType;

	// NAME: Drawing distance scale parameter ID - 描画距離スケールパラメータID
	// DESC: Load balancer drawing distance scale parameter ID - ロードバランサー描画距離スケールパラメータID
	uint8_t LBDrawDistScaleParamID;

	// NAME: reserve - 予約
	// DESC: reserve - 予約
	uint8_t resereve[34];
};

#endif
