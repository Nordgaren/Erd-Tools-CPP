/* This file was automatically generated from XML paramdefs. */
#ifndef _PARAMDEF_BONFIRE_WARP_SUB_CATEGORY_PARAM_ST_H
#define _PARAMDEF_BONFIRE_WARP_SUB_CATEGORY_PARAM_ST_H
#pragma once
#include <inttypes.h>

// Data Version: 1
// Is Big Endian: False
// Is Unicode: True
// Format Version: 203
struct BONFIRE_WARP_SUB_CATEGORY_PARAM_ST {

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
	// DESC: Subcategory display name Text ID [MenuText] - サブカテゴリの表示名テキストID[MenuText]
	int32_t textId;

	// NAME: Kagaribi Warp Tab ID - 篝火ワープタブID
	// DESC: Kagaribi Warp Tab ID. ID of the tab to which this subcategory belongs - 篝火ワープタブID。このサブカテゴリが所属するタブのID
	uint16_t tabId;

	// NAME: Bonfire Warp Tab Sort ID - 篝火ワープタブソートID
	// DESC: Bonfire Warp Tab Sort ID. Display order of subcategories in tabs - 篝火ワープタブソートID。タブの中サブカテゴリの表示順
	uint16_t sortId;

	// NAME: pad - pad
	uint8_t pad[4];
};

#endif
