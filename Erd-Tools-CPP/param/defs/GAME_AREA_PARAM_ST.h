/* This file was automatically generated from XML paramdefs. */
#ifndef _PARAMDEF_GAME_AREA_PARAM_ST_H
#define _PARAMDEF_GAME_AREA_PARAM_ST_H
#pragma once
#include <inttypes.h>

// Data Version: 3
// Is Big Endian: False
// Is Unicode: True
// Format Version: 203
struct GAME_AREA_PARAM_ST {

	// NAME: Do you remove it from the NT version output? - NT版出力から外すか
	// DESC: Parameters marked with ○ are excluded in the NT version package. - ○をつけたパラメータをNT版パッケージでは除外します
	uint8_t disableParam_NT: 1;

	// NAME: Reserve for package output 1 - パッケージ出力用リザーブ1
	// DESC: Reserve for package output 1 - パッケージ出力用リザーブ1
	uint8_t disableParamReserve1: 7;

	// NAME: Reserve for package output 2 - パッケージ出力用リザーブ2
	// DESC: Reserve for package output 2 - パッケージ出力用リザーブ2
	uint8_t disableParamReserve2[3];

	// NAME: Single time clear bonus soul amount - シングル時クリアボーナスソウル量
	// DESC: Amount of soul that can be obtained when defeating an area boss (in single play) - エリアボスを倒したときに取得できるソウル量(シングルプレイ時)
	uint32_t bonusSoul_single;

	// NAME: Clear bonus soul amount during multiplayer - マルチプレイ時クリアボーナスソウル量
	// DESC: Amount of soul that can be obtained when defeating an area boss (during multiplayer) - エリアボスを倒したときに取得できるソウル量(マルチプレイ時)
	uint32_t bonusSoul_multi;

	// NAME: Human nature drop point count head flag ID - 人間性ドロップポイントカウント先頭フラグID
	// DESC: First flag ID for managing humanity drop points (using 20 Bit) - 人間性ドロップポイントを管理する為の先頭フラグID(20Bit使用)
	uint32_t humanityPointCountFlagIdTop;

	// NAME: Human nature drop required point 1 - 人間性ドロップ必要ポイント1
	// DESC: Threshold for acquiring humanity 1 - 人間性を取得する為の閾値1
	uint16_t humanityDropPoint1;

	// NAME: Human nature drop required point 2 - 人間性ドロップ必要ポイント2
	// DESC: Threshold 2 for acquiring humanity - 人間性を取得する為の閾値2
	uint16_t humanityDropPoint2;

	// NAME: Human nature drop required point 3 - 人間性ドロップ必要ポイント3
	// DESC: Threshold 3 for acquiring humanity - 人間性を取得する為の閾値3
	uint16_t humanityDropPoint3;

	// NAME: Human nature drop required point 4 - 人間性ドロップ必要ポイント4
	// DESC: Threshold 4 for acquiring humanity - 人間性を取得する為の閾値4
	uint16_t humanityDropPoint4;

	// NAME: Human nature drop required point 5 - 人間性ドロップ必要ポイント5
	// DESC: Threshold 5 for acquiring humanity - 人間性を取得する為の閾値5
	uint16_t humanityDropPoint5;

	// NAME: Human nature drop required point 6 - 人間性ドロップ必要ポイント6
	// DESC: Threshold 6 for acquiring humanity - 人間性を取得する為の閾値6
	uint16_t humanityDropPoint6;

	// NAME: Human nature drop required point 7 - 人間性ドロップ必要ポイント7
	// DESC: Threshold for acquiring humanity 7 - 人間性を取得する為の閾値7
	uint16_t humanityDropPoint7;

	// NAME: Human nature drop required point 8 - 人間性ドロップ必要ポイント8
	// DESC: Threshold for acquiring humanity 8 - 人間性を取得する為の閾値8
	uint16_t humanityDropPoint8;

	// NAME: Human nature drop required point 9 - 人間性ドロップ必要ポイント9
	// DESC: Threshold for acquiring humanity 9 - 人間性を取得する為の閾値9
	uint16_t humanityDropPoint9;

	// NAME: Humanity drop required points 10 - 人間性ドロップ必要ポイント10
	// DESC: Threshold 10 for acquiring humanity - 人間性を取得する為の閾値10
	uint16_t humanityDropPoint10;

	// NAME: Solo intrusion point addition lower limit - ソロ侵入ポイント加算値下限
	// DESC: The minimum value of solo intrusion points to be added when defeating an area boss. - エリアボスを倒したときに加算するソロ侵入ポイントの最小値。
	uint32_t soloBreakInPoint_Min;

	// NAME: Solo intrusion point addition value upper limit - ソロ侵入ポイント加算値上限
	// DESC: The maximum value of solo intrusion points to be added when defeating an area boss. - エリアボスを倒したときに加算するソロ侵入ポイントの最大値。
	uint32_t soloBreakInPoint_Max;

	// NAME: Boss defeated flag ID (for displaying purpose when hosting) - ボス撃破済みフラグID(ホスト化時の目的表示用)
	// DESC: If this flag is ON, it will not be displayed in the list of purpose settings at the time of hosting. If it is 0, it is always displayed. - このフラグがONの場合はホスト化時の目的設定のリストに表示しない。0の場合は常時表示。
	uint32_t defeatBossFlagId_forSignAimList;

	// NAME: Purpose display flag ID - 目的表示フラグID
	uint32_t displayAimFlagId;

	// NAME: Boss discovery flag ID - ボス発見フラグID
	uint32_t foundBossFlagId;

	// NAME: Text ID at the time of discovery - 発見時テキストID
	int32_t foundBossTextId;

	// NAME: Undiscovered text ID - 未発見時テキストID
	int32_t notFindBossTextId;

	// NAME: Boss challengeable flag ID - ボス挑戦可能フラグID
	// DESC: Boss challengeable flag ID. When selecting the target boss in the intrusion position search when "Is the intrusion point automatically generated?" In the multiplayer area para is ○, the boss with this flag ON is targeted. If it is 0, it is always the target. - ボス挑戦可能フラグID。マルチプレイエリアパラの「侵入ポイント自動生成か」が○のときの侵入位置検索で目的のボスを選ぶ時にこのフラグがONのボスが対象になる。0の場合は常に対象になる。
	uint32_t bossChallengeFlagId;

	// NAME: Boss defeat flag ID - ボス撃破フラグID
	// DESC: Boss defeat flag ID. When selecting the target boss in the intrusion position search when "Is the intrusion point automatically generated?" In the multiplayer area para is ○, the boss with this flag OFF is targeted. - ボス撃破フラグID。マルチプレイエリアパラの「侵入ポイント自動生成か」が○のときの侵入位置検索で目的のボスを選ぶ時にこのフラグがOFFのボスが対象になる。
	uint32_t defeatBossFlagId;

	// NAME: Boss position_X coordinates - ボス位置_X座標
	// DESC: Boss position_X coordinates (relative coordinates from the specified map). It is used to check the distance between the host and the boss in the intrusion position search when "Is the intrusion point automatically generated?" In the multiplayer area para. - ボス位置_X座標（指定したマップからの相対座標）。マルチプレイエリアパラの「侵入ポイント自動生成か」が○のときの侵入位置検索でホストとボス間の距離確認に使われる。
	float bossPosX;

	// NAME: Boss position_Y coordinates - ボス位置_Y座標
	// DESC: Boss position_Y coordinates (relative coordinates from the specified map). It is used to check the distance between the host and the boss in the intrusion position search when "Is the intrusion point automatically generated?" In the multiplayer area para. - ボス位置_Y座標（指定したマップからの相対座標）。マルチプレイエリアパラの「侵入ポイント自動生成か」が○のときの侵入位置検索でホストとボス間の距離確認に使われる。
	float bossPosY;

	// NAME: Boss position_Z coordinates - ボス位置_Z座標
	// DESC: Boss position_Z coordinates (relative coordinates from the specified map). It is used to check the distance between the host and the boss in the intrusion position search when "Is the intrusion point automatically generated?" In the multiplayer area para. - ボス位置_Z座標（指定したマップからの相対座標）。マルチプレイエリアパラの「侵入ポイント自動生成か」が○のときの侵入位置検索でホストとボス間の距離確認に使われる。
	float bossPosZ;

	// NAME: Boss position_Area number (mXX_00_00_00) - ボス位置_エリア番号(mXX_00_00_00)
	// DESC: Boss position_area number (mXX_00_00_00). It is used to check the distance between the host and the boss in the intrusion position search when "Is the intrusion point automatically generated?" In the multiplayer area para. - ボス位置_エリア番号(mXX_00_00_00)。マルチプレイエリアパラの「侵入ポイント自動生成か」が○のときの侵入位置検索でホストとボス間の距離確認に使われる。
	uint8_t bossMapAreaNo;

	// NAME: Boss position_grid X number (m00_XX_00_00) - ボス位置_グリッドX番号(m00_XX_00_00)
	// DESC: Boss position_grid X number (m00_XX_00_00). It is used to check the distance between the host and the boss in the intrusion position search when "Is the intrusion point automatically generated?" In the multiplayer area para. - ボス位置_グリッドX番号(m00_XX_00_00)。マルチプレイエリアパラの「侵入ポイント自動生成か」が○のときの侵入位置検索でホストとボス間の距離確認に使われる。
	uint8_t bossMapBlockNo;

	// NAME: Boss position_grid Z number (m00_00_XX_00) - ボス位置_グリッドZ番号(m00_00_XX_00)
	// DESC: Boss position_grid Z number (m00_00_XX_00). It is used to check the distance between the host and the boss in the intrusion position search when "Is the intrusion point automatically generated?" In the multiplayer area para. - ボス位置_グリッドZ番号(m00_00_XX_00)。マルチプレイエリアパラの「侵入ポイント自動生成か」が○のときの侵入位置検索でホストとボス間の距離確認に使われる。
	uint8_t bossMapMapNo;

	// NAME: Reserved area - 予約領域
	// DESC: Reserved area - 予約領域
	uint8_t reserve[9];
};

#endif
