/* This file was automatically generated from XML paramdefs. */
#ifndef _PARAMDEF_SFX_BLOCK_RES_SHARE_PARAM_H
#define _PARAMDEF_SFX_BLOCK_RES_SHARE_PARAM_H
#pragma once
#include <inttypes.h>

// Data Version: 1
// Is Big Endian: False
// Is Unicode: True
// Format Version: 203
struct SFX_BLOCK_RES_SHARE_PARAM {

	// NAME: Block Sfx resource reference map number - ブロックSfxリソース参照先マップ番号
	// DESC: The map number that references the resource. Set the numerical value of the map number. (m12_34_56_78 → 12345678) - リソースを参照するマップ番号。マップ番号を数値化した値を設定します。(m12_34_56_78→12345678)
	uint32_t shareBlockRsMapUidVal;
};

#endif
