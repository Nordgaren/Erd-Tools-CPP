/* This file was automatically generated from XML paramdefs. */
#ifndef _PARAMDEF_CEREMONY_PARAM_ST_H
#define _PARAMDEF_CEREMONY_PARAM_ST_H
#pragma once
#include <inttypes.h>

// Data Version: 1
// Is Big Endian: False
// Is Unicode: True
// Format Version: 203
struct CEREMONY_PARAM_ST {

	// NAME: Event layer ID - イベントレイヤーID
	// DESC: Event maker layer ID - イベントメーカーのレイヤーID
	int32_t eventLayerId;

	// NAME: MapStudio Layer ID - MapStudioレイヤーID
	// DESC: Map Studio Layer ID - MapStudioのレイヤーID
	int32_t mapStudioLayerId;

	// NAME: Multiplayer area offset - マルチプレイエリアオフセット
	// DESC: Multiplayer area ID offset. For example, if you enter "100", the multiplayer area ID will be offset by "100". - マルチプレイエリアIDのオフセット。例えば「100」と入れるとマルチプレイエリアIDが「100」オフセットされる。
	int32_t multiPlayAreaOffset;

	// NAME: Map name ID overwrite_place name display - マップ名ID上書き_地名表示
	// DESC: Override the map name ID_place name display with the specified ID. -1: No overwrite, -2 or less, 0 or more: Overwrite the ID. - マップ名ID_地名表示を指定IDに上書きする。-1:上書き無し、-2以下,0以上:そのIDに上書き。
	int32_t overrideMapPlaceNameId;

	// NAME: Map name ID overwrite_save data display - マップ名ID上書き_セーブデータ表示
	// DESC: Map name ID_Overwrites the save data display with the specified ID. -1: No overwrite, -2 or less, 0 or more: Overwrite the ID. - マップ名ID_セーブデータ表示を指定IDに上書きする。-1:上書き無し、-2以下,0以上:そのIDに上書き。
	int32_t overrideSaveMapNameId;

	// NAME: pad2 - pad2
	uint8_t pad2[16];
};

#endif
