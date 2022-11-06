/* This file was automatically generated from XML paramdefs. */
#ifndef _PARAMDEF_BONFIRE_WARP_TAB_PARAM_ST_H
#define _PARAMDEF_BONFIRE_WARP_TAB_PARAM_ST_H
#pragma once
#include <inttypes.h>

// Data Version: 2
// Is Big Endian: False
// Is Unicode: True
// Format Version: 203
struct BONFIRE_WARP_TAB_PARAM_ST {

	// NAME: Do you remove it from the NT version output? - NT版出力から外すか
	// DESC: Parameters marked with ○ are excluded in the NT version package. - ○をつけたパラメータをNT版パッケージでは除外します
	uint8_t disableParam_NT: 1;

	// NAME: Reserve for package output 1 - パッケージ出力用リザーブ1
	// DESC: Reserve for package output 1 - パッケージ出力用リザーブ1
	uint8_t disableParamReserve1: 7;

	// NAME: Reserve for package output 2 - パッケージ出力用リザーブ2
	// DESC: Reserve for package output 2 - パッケージ出力用リザーブ2
	uint8_t disableParamReserve2[3];

	// NAME: Text ID - テキストID
	// DESC: Tab Display Name Text ID [MenuText] - タブの表示名テキストID[MenuText]
	int32_t textId;

	// NAME: Sort ID - ソートID
	// DESC: Tab display order sort ID. Line up from the left with aim - タブの表示順ソートID。照準で左から並ぶ
	int32_t sortId;

	// NAME: Icon ID - アイコンID
	// DESC: Tab icon ID. Menu resource compliance - タブのアイコンID。メニューリソース準拠
	uint16_t iconId;

	// NAME: pad - パッド
	uint8_t pad[2];
};

#endif
