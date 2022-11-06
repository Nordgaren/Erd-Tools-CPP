/* This file was automatically generated from XML paramdefs. */
#ifndef _PARAMDEF_BASECHR_SELECT_MENU_PARAM_ST_H
#define _PARAMDEF_BASECHR_SELECT_MENU_PARAM_ST_H
#pragma once
#include <inttypes.h>

// Data Version: 1
// Is Big Endian: False
// Is Unicode: True
// Format Version: 203
struct BASECHR_SELECT_MENU_PARAM_ST {

	// NAME: Do you remove it from the NT version output? - NT版出力から外すか
	// DESC: Parameters marked with ○ are excluded in the NT version package. - ○をつけたパラメータをNT版パッケージでは除外します
	uint8_t disableParam_NT: 1;

	// NAME: Reserve for package output 1 - パッケージ出力用リザーブ1
	// DESC: Reserve for package output 1 - パッケージ出力用リザーブ1
	uint8_t disableParamReserve1: 7;

	// NAME: Reserve for package output 2 - パッケージ出力用リザーブ2
	// DESC: Reserve for package output 2 - パッケージ出力用リザーブ2
	uint8_t disableParamReserve2[3];

	// NAME: Architype ID: Base character - アーキタイプID：ベースキャラクター
	// DESC: Specify the initial parameter ID for each architype for which face para is set. - フェイスパラを設定したアーキタイプ別初期パラメータIDを指定する 
	uint32_t chrInitParam;

	// NAME: Architype ID: Identity - アーキタイプID：素性
	// DESC: Specify the initial parameter ID for each feature archetype - 素性のアーキタイプ別初期パラメータIDを指定する
	uint32_t originChrInitParam;

	// NAME: Image ID - イメージID
	// DESC: Images lined up on the base character selection screen. Specify the number of frames of resources embedded in Fla - ベースキャラクター選択画面に並ぶ画像。Flaに埋め込まれたリソースのフレーム数を指定
	int32_t imageId;

	// NAME: Text ID - テキストID
	// DESC: Occupation name menu text ID - 職業名のメニューテキストID
	int32_t textId;

	// NAME: Reserve - リザーブ
	uint8_t reserve[12];
};

#endif
