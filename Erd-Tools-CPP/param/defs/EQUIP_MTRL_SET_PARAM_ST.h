/* This file was automatically generated from XML paramdefs. */
#ifndef _PARAMDEF_EQUIP_MTRL_SET_PARAM_ST_H
#define _PARAMDEF_EQUIP_MTRL_SET_PARAM_ST_H
#pragma once
#include <inttypes.h>

// Data Version: 2
// Is Big Endian: False
// Is Unicode: True
// Format Version: 203
struct EQUIP_MTRL_SET_PARAM_ST {

	// NAME: Required Material Item ID 01 - 必要素材アイテムID01
	// DESC: Material item ID required to strengthen armor. - 武具強化に必要な素材アイテムIDです。
	int32_t materialId01;

	// NAME: Required Material Item ID 02 - 必要素材アイテムID02
	// DESC: Material item ID required to strengthen armor. - 武具強化に必要な素材アイテムIDです。
	int32_t materialId02;

	// NAME: Required Material Item ID 03 - 必要素材アイテムID03
	// DESC: Material item ID required to strengthen armor. - 武具強化に必要な素材アイテムIDです。
	int32_t materialId03;

	// NAME: Required Material Item ID 04 - 必要素材アイテムID04
	// DESC: Material item ID required to strengthen armor. - 武具強化に必要な素材アイテムIDです。
	int32_t materialId04;

	// NAME: Required Material Item ID 05 - 必要素材アイテムID05
	// DESC: Material item ID required to strengthen armor. - 武具強化に必要な素材アイテムIDです。
	int32_t materialId05;

	// NAME: Required Material Item ID 06 - 必要素材アイテムID06
	// DESC: Material item ID required to strengthen armor. - 武具強化に必要な素材アイテムIDです。
	int32_t materialId06;

	// NAME: Padding - パディング
	// DESC: Padding. For when the material item ID increases - パディング。素材アイテムIDが増えたとき用
	uint8_t pad_id[8];

	// NAME: Required number 01 - 必要個数01
	// DESC: The number of material items required to strengthen armor. - 武具強化に必要な素材アイテムの個数です。
	int8_t itemNum01;

	// NAME: Required number 02 - 必要個数02
	// DESC: The number of material items required to strengthen armor. - 武具強化に必要な素材アイテムの個数です。
	int8_t itemNum02;

	// NAME: Required number 03 - 必要個数03
	// DESC: The number of material items required to strengthen armor. - 武具強化に必要な素材アイテムの個数です。
	int8_t itemNum03;

	// NAME: Required number 04 - 必要個数04
	// DESC: The number of material items required to strengthen armor. - 武具強化に必要な素材アイテムの個数です。
	int8_t itemNum04;

	// NAME: Required number 05 - 必要個数05
	// DESC: The number of material items required to strengthen armor. - 武具強化に必要な素材アイテムの個数です。
	int8_t itemNum05;

	// NAME: Required number 06 - 必要個数06
	// DESC: The number of material items required to strengthen armor. - 武具強化に必要な素材アイテムの個数です。
	int8_t itemNum06;

	// NAME: Padding - パディング
	// DESC: Padding. For when the number of items increases - パディング。アイテムの個数が増えたとき用
	uint8_t pad_num[2];

	// NAME: Required Material Item Category 01 - 必要素材アイテムカテゴリ01
	// DESC: This is a category of material items required for strengthening armor. - 武具強化に必要な素材アイテムのカテゴリです。
	uint8_t materialCate01;

	// NAME: Required Material Item Category 02 - 必要素材アイテムカテゴリ02
	// DESC: This is a category of material items required for strengthening armor. - 武具強化に必要な素材アイテムのカテゴリです。
	uint8_t materialCate02;

	// NAME: Required Material Item Category 03 - 必要素材アイテムカテゴリ03
	// DESC: This is a category of material items required for strengthening armor. - 武具強化に必要な素材アイテムのカテゴリです。
	uint8_t materialCate03;

	// NAME: Required Material Item Category 04 - 必要素材アイテムカテゴリ04
	// DESC: This is a category of material items required for strengthening armor. - 武具強化に必要な素材アイテムのカテゴリです。
	uint8_t materialCate04;

	// NAME: Required Material Item Category 05 - 必要素材アイテムカテゴリ05
	// DESC: This is a category of material items required for strengthening armor. - 武具強化に必要な素材アイテムのカテゴリです。
	uint8_t materialCate05;

	// NAME: Required Material Item Category 06 - 必要素材アイテムカテゴリ06
	// DESC: This is a category of material items required for strengthening armor. - 武具強化に必要な素材アイテムのカテゴリです。
	uint8_t materialCate06;

	// NAME: Padding - パディング
	// DESC: Padding. For when the number of categories increases - パディング。カテゴリが増えたとき用
	uint8_t pad_cate[2];

	// NAME: Disable number display 01 - 個数表示を無効化01
	// DESC: Disable the number display (for enhanced shops) - 個数表示を無効化するか(強化ショップ用)
	uint8_t isDisableDispNum01: 1;

	// NAME: Disable number display 02 - 個数表示を無効化02
	// DESC: Whether to disable the number display - 個数表示を無効化するか
	uint8_t isDisableDispNum02: 1;

	// NAME: Disable number display 03 - 個数表示を無効化03
	// DESC: Whether to disable the number display - 個数表示を無効化するか
	uint8_t isDisableDispNum03: 1;

	// NAME: Disable number display 04 - 個数表示を無効化04
	// DESC: Whether to disable the number display - 個数表示を無効化するか
	uint8_t isDisableDispNum04: 1;

	// NAME: Disable number display 05 - 個数表示を無効化05
	// DESC: Whether to disable the number display - 個数表示を無効化するか
	uint8_t isDisableDispNum05: 1;

	// NAME: Disable number display 06 - 個数表示を無効化06
	// DESC: Whether to disable the number display - 個数表示を無効化するか
	uint8_t isDisableDispNum06: 1;

	// NAME: Padding - パディング
	// DESC: It's padding. - パディングです。
	uint8_t pad[3];
};

#endif
