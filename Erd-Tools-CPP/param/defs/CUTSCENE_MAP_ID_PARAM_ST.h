/* This file was automatically generated from XML paramdefs. */
#ifndef _PARAMDEF_CUTSCENE_MAP_ID_PARAM_ST_H
#define _PARAMDEF_CUTSCENE_MAP_ID_PARAM_ST_H
#pragma once
#include <inttypes.h>

// Data Version: 2
// Is Big Endian: False
// Is Unicode: True
// Format Version: 203
struct CUTSCENE_MAP_ID_PARAM_ST {

	// NAME: Do you remove it from the NT version output? - NT版出力から外すか
	// DESC: Parameters marked with ○ are excluded in the NT version package. - ○をつけたパラメータをNT版パッケージでは除外します
	uint8_t disableParam_NT: 1;

	// NAME: Is it a debug parameter? - デバッグパラメータか
	// DESC: Parameters marked with a circle are excluded from all packages (because they are for debugging). - ○をつけたパラメータは全パッケージから除外します（デバッグ用なので）
	uint8_t disableParam_Debug: 1;

	// NAME: Reserve for package output 1 - パッケージ出力用リザーブ1
	// DESC: Reserve for package output 1 - パッケージ出力用リザーブ1
	uint8_t disableParamReserve1: 6;

	// NAME: Reserve for package output 2 - パッケージ出力用リザーブ2
	// DESC: Reserve for package output 2 - パッケージ出力用リザーブ2
	uint8_t disableParamReserve2[3];

	// NAME: Map number to play - 再生を行なうマップ番号
	// DESC: Please enter the map number to be played back as an 8-digit number. This is the map number used as the reference in the cutscene. If you do not specify the correct map number, the playback position will shift. - 再生を行なうマップ番号を8桁の数字で入力して下さい。カットシーンで基準としているマップの番号になります。正しいマップ番号を指定しないと再生位置がずれます。
	uint32_t PlayMapId;

	// NAME: Map number 1 required for display - 表示に必要なマップ番号１
	// DESC: Please enter the map number required for display as an 8-digit number. This parameter is used by the guest as a list to determine if the cutscene can be played. If you don't need it, you can leave it as 0 or blank. - 表示に必要なマップ番号を8桁の数字で入力して下さい。このパラメータは、ゲスト側がカットシーンを再生可能か判断するためのリストとして利用します。必要ない場合は、0もしくは未記入で良いです。
	uint32_t RequireMapId0;

	// NAME: Map number 2 required for display - 表示に必要なマップ番号２
	// DESC: Please enter the map number required for display as an 8-digit number. This parameter is used by the guest as a list to determine if the cutscene can be played. If you don't need it, you can leave it as 0 or blank. - 表示に必要なマップ番号を8桁の数字で入力して下さい。このパラメータは、ゲスト側がカットシーンを再生可能か判断するためのリストとして利用します。必要ない場合は、0もしくは未記入で良いです。
	uint32_t RequireMapId1;

	// NAME: Map number 3 required for display - 表示に必要なマップ番号３
	// DESC: Please enter the map number required for display as an 8-digit number. This parameter is used by the guest as a list to determine if the cutscene can be played. If you don't need it, you can leave it as 0 or blank. - 表示に必要なマップ番号を8桁の数字で入力して下さい。このパラメータは、ゲスト側がカットシーンを再生可能か判断するためのリストとして利用します。必要ない場合は、0もしくは未記入で良いです。
	uint32_t RequireMapId2;

	// NAME: Hit part ID for calculating camera position during loading - 読み込み中カメラ位置算出用ヒットパーツID
	// DESC: Hit part ID for calculating camera position during loading - 読み込み中カメラ位置算出用ヒットパーツID
	int32_t RefCamPosHitPartsID;

	// NAME: Reserve - 予備
	uint8_t reserved_2[12];

	// NAME: Waiting time when cannot be displayed [seconds] - 表示不可能時待機時間[秒]
	// DESC: The number of seconds used to display the progress of the loading screen progress bar that is displayed when the guest side cannot play in the multi. [GR] SEQ22843 [Cutscene] Players who have not read the map number required for display during cutscene playback will see the screen go dark. - マルチにおいてゲスト側が再生できない状態の時に表示されるロード画面プログレスバーの進捗表示に使われる秒数です。【GR】SEQ22843 【カットシーン】カットシーン再生時に表示に必要なマップ番号を読み込んでいないプレイヤーは画面暗転する対応
	uint16_t ClientDisableViewTimeForProgress;

	// NAME: reserved - reserved
	// DESC: reserved - reserved
	uint8_t reserved[2];

	// NAME: Hit parts waiting to be read 0 - 読み込み待ちヒットパーツ0
	// DESC: Hit parts waiting to be read 0 - 読み込み待ちヒットパーツ0
	int32_t HitParts_0;

	// NAME: Hit parts waiting to be read 1 - 読み込み待ちヒットパーツ1
	// DESC: Hit parts waiting to be read 1 - 読み込み待ちヒットパーツ1
	int32_t HitParts_1;
};

#endif
