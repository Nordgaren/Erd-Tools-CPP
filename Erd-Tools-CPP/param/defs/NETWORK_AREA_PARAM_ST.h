/* This file was automatically generated from XML paramdefs. */
#ifndef _PARAMDEF_NETWORK_AREA_PARAM_ST_H
#define _PARAMDEF_NETWORK_AREA_PARAM_ST_H
#pragma once
#include <inttypes.h>

// Data Version: 4
// Is Big Endian: False
// Is Unicode: True
// Format Version: 203
struct NETWORK_AREA_PARAM_ST {

	// NAME: Cell size X - セルサイズX
	// DESC: Cell size X - セルサイズX
	float cellSizeX;

	// NAME: Cell size Y - セルサイズY
	// DESC: Cell size Y - セルサイズY
	float cellSizeY;

	// NAME: Cell size Z - セルサイズZ
	// DESC: Cell size Z - セルサイズZ
	float cellSizeZ;

	// NAME: Cell offset X - セルオフセットX
	// DESC: Cell offset X - セルオフセットX
	float cellOffsetX;

	// NAME: Cell offset Y - セルオフセットY
	// DESC: Cell offset Y - セルオフセットY
	float cellOffsetY;

	// NAME: Cell offset Z - セルオフセットZ
	// DESC: Cell offset Z - セルオフセットZ
	float cellOffsetZ;

	// NAME: Effective bloodstain / death illusion - 血痕・死亡幻影有効
	// DESC: Effective bloodstain / death illusion - 血痕・死亡幻影有効
	uint8_t enableBloodstain: 1;

	// NAME: Blood character valid - 血文字有効
	// DESC: Blood character valid - 血文字有効
	uint8_t enableBloodMessage: 1;

	// NAME: Phantom effective - 幻影有効
	// DESC: Phantom effective - 幻影有効
	uint8_t enableGhost: 1;

	// NAME: Multiplayer enabled - マルチプレイ有効
	// DESC: Multiplayer enabled - マルチプレイ有効
	uint8_t enableMultiPlay: 1;

	// NAME: Ring search enabled - 指輪検索有効
	// DESC: Is it a search target for ring search? (Area called Kanemori Ash Spirit / Relief Blue Spirit) - 指輪検索の検索対象か？（鐘守灰霊・救援青霊として呼ばれるエリア）
	uint8_t enableRingSearch: 1;

	// NAME: Intrusion search enabled - 乱入検索有効
	// DESC: Is it the target of intrusion search? - 乱入検索の対象か？
	uint8_t enableBreakInSearch: 1;

	// NAME: dummy - ダミー
	uint8_t dummy[3];
};

#endif
