/* This file was automatically generated from XML paramdefs. */
#ifndef _PARAMDEF_MENUPROPERTY_LAYOUT_H
#define _PARAMDEF_MENUPROPERTY_LAYOUT_H
#pragma once
#include <inttypes.h>

// Data Version: 2
// Is Big Endian: False
// Is Unicode: True
// Format Version: 203
struct MENUPROPERTY_LAYOUT {

	// NAME: Layout path - レイアウトパス
	char LayoutPath[16];

	// NAME: Property ID - プロパティID
	int32_t PropertyID;

	// NAME: Item name Text ID - 項目名テキストID
	// DESC: If a valid text ID is set, this will be displayed in preference to the property name. - 有効なテキストIDが設定されている場合、プロパティ名よりもこちらを優先して表示します。
	int32_t CaptionTextID;

	// NAME: Help text ID - ヘルプテキストID
	// DESC: Only if this is a valid text ID will it be selectable in the field help. - ここが有効なテキストIDの場合のみ、項目ヘルプで選択できるようになります。
	int32_t HelpTextID;

	// NAME: reserve - 予約
	uint8_t reserved[4];
};

#endif
