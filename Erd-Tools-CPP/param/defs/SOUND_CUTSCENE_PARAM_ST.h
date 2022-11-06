/* This file was automatically generated from XML paramdefs. */
#ifndef _PARAMDEF_SOUND_CUTSCENE_PARAM_ST_H
#define _PARAMDEF_SOUND_CUTSCENE_PARAM_ST_H
#pragma once
#include <inttypes.h>

// Data Version: 5
// Is Big Endian: False
// Is Unicode: True
// Format Version: 203
struct SOUND_CUTSCENE_PARAM_ST {

	// NAME: Do you remove it from the NT version output? - NT版出力から外すか
	// DESC: Parameters marked with ○ are excluded in the NT version package. - ○をつけたパラメータをNT版パッケージでは除外します
	uint8_t disableParam_NT: 1;

	// NAME: Reserve for package output 1 - パッケージ出力用リザーブ1
	// DESC: Reserve for package output 1 - パッケージ出力用リザーブ1
	uint8_t disableParamReserve1: 7;

	// NAME: Reserve for package output 2 - パッケージ出力用リザーブ2
	// DESC: Reserve for package output 2 - パッケージ出力用リザーブ2
	uint8_t disableParamReserve2[3];

	// NAME: Reverb type in cutscenes - カットシーン中のリバーブタイプ
	// DESC: Specifies the reverb type to apply during the cutscene - カットシーン中に適応するリバーブタイプを指定します
	uint8_t ReverbType;

	// NAME: pad0 - pad0
	uint8_t pad0[3];

	// NAME: Normal BGM behavior at the start of cutscenes - カットシーン開始時通常BGM挙動
	// DESC: Specifies normal BGM behavior at the start of cutscenes - カットシーン開始時通常BGM挙動を指定します
	int16_t BgmBehaviorTypeOnStart;

	// NAME: One-shot BGM behavior at the start of the cutscene - カットシーン開始時ワンショットBGM挙動
	// DESC: Specifies the one-shot BGM behavior at the start of the cutscene - カットシーン開始時ワンショットBGM挙動を指定します
	int16_t OneShotBgmBehaviorOnStart;

	// NAME: SEID (category: p) specification to post at the end of the cutscene (-1: do not post) - カットシーン終了時にポストするSEID（カテゴリ：p)指定(-1:ポストしない)
	// DESC: SEID (category: p) specification to post at the end of the cutscene (-1: do not post) - カットシーン終了時にポストするSEID（カテゴリ：p)指定(-1:ポストしない)
	int32_t PostPlaySeId;

	// NAME: Post at the end of the cutscene SEID_Skip (category: p) specified (-1: do not post) - カットシーン終了時にポストするSEID_スキップ時（カテゴリ：p)指定(-1:ポストしない)
	// DESC: SEID_ for skipping to post at the end of the cutscene (category: p) specified (-1: not posted) - カットシーン終了時にポストするSEID_スキップ時用（カテゴリ：p)指定(-1:ポストしない)
	int32_t PostPlaySeIdForSkip;

	// NAME: Cutscene drawing time to unmute immediately after entering [seconds] (less than 0: not canceled in drawing time) - 入場直後ミュート解除するカットシーン描画時間[秒](0より小さい：描画時間で解除しない)
	// DESC: Cutscene drawing time to unmute immediately after entering [seconds] (less than 0: not canceled in drawing time) - 入場直後のミュート解除するカットシーン描画時間[秒](0より小さい：描画時間で解除しない)
	float EnterMapMuteStopTimeOnDrawCutscene;

	// NAME: Reserve - リザーブ
	// DESC: Reserve - リザーブ
	uint8_t reserved[8];
};

#endif
