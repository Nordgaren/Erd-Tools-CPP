/* This file was automatically generated from XML paramdefs. */
#ifndef _PARAMDEF_CHARMAKEMENU_LISTITEM_PARAM_ST_H
#define _PARAMDEF_CHARMAKEMENU_LISTITEM_PARAM_ST_H
#pragma once
#include <inttypes.h>

// Data Version: 2
// Is Big Endian: False
// Is Unicode: True
// Format Version: 203
struct CHARMAKEMENU_LISTITEM_PARAM_ST {

	// NAME: value - 値
	// DESC: The value handled by the program. Make serial numbers within one group - プログラム側に扱う値。1つのグループ内で通し番号にする
	int32_t value;

	// NAME: Item text ID - 項目テキストID
	// DESC: ID of the text to be displayed - 表示するテキストのID
	int32_t captionId;

	// NAME: Icon ID - アイコンID
	// DESC: ID of the icon to be displayed - 表示するアイコンのID
	uint8_t iconId;

	// NAME: reserve - 予約
	uint8_t reserved[7];
};

#endif
