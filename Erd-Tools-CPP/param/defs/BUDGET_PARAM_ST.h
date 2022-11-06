/* This file was automatically generated from XML paramdefs. */
#ifndef _PARAMDEF_BUDGET_PARAM_ST_H
#define _PARAMDEF_BUDGET_PARAM_ST_H
#pragma once
#include <inttypes.h>

// Data Version: 1
// Is Big Endian: False
// Is Unicode: True
// Format Version: 203
struct BUDGET_PARAM_ST {

	// NAME: VRAM: ALL - VRAM:ALL
	// DESC: VRAM: ALL (unit is MB) - VRAM:ALL(単位はMB)
	float vram_all;

	// NAME: VRAM: Map / Object Texture - VRAM:マップ/オブジェ テクスチャ
	// DESC: VRAM: Map / Object Texture (Unit: MB) - VRAM:マップ/オブジェ テクスチャ(単位はMB)
	float vram_mapobj_tex;

	// NAME: VRAM: Map / Object Model - VRAM:マップ/オブジェ モデル
	// DESC: VRAM: Map / object model (in MB) - VRAM:マップ/オブジェ モデル(単位はMB)
	float vram_mapobj_mdl;

	// NAME: VRAM: map - VRAM:マップ
	// DESC: VRAM: Map (in MB) - VRAM:マップ(単位はMB)
	float vram_map;

	// NAME: VRAM: Character - VRAM:キャラ
	// DESC: VRAM: Character (unit is MB) - VRAM:キャラ(単位はMB)
	float vram_chr;

	// NAME: VRAM: Parts - VRAM:パーツ
	// DESC: VRAM: Parts (unit is MB) - VRAM:パーツ(単位はMB)
	float vram_parts;

	// NAME: VRAM: SFX - VRAM:SFX
	// DESC: VRAM: SFX (unit is MB) - VRAM:SFX(単位はMB)
	float vram_sfx;

	// NAME: VRAM: Character texture - VRAM:キャラ テクスチャ
	// DESC: VRAM: Character texture (unit is MB) - VRAM:キャラ テクスチャ(単位はMB)
	float vram_chr_tex;

	// NAME: VRAM: Character model - VRAM:キャラ モデル
	// DESC: VRAM: Character model (unit is MB) - VRAM:キャラ モデル(単位はMB)
	float vram_chr_mdl;

	// NAME: VRAM: Parts texture - VRAM:パーツ テクスチャ
	// DESC: VRAM: Parts texture (unit is MB) - VRAM:パーツ テクスチャ(単位はMB)
	float vram_parts_tex;

	// NAME: VRAM: Parts model - VRAM:パーツ モデル
	// DESC: VRAM: Parts model (unit is MB) - VRAM:パーツ モデル(単位はMB)
	float vram_parts_mdl;

	// NAME: VRAM: SFX texture - VRAM:SFX テクスチャ
	// DESC: VRAM: SFX texture (unit is MB) - VRAM:SFX テクスチャ(単位はMB)
	float vram_sfx_tex;

	// NAME: VRAM: SFX model - VRAM:SFX モデル
	// DESC: VRAM: SFX model (in MB) - VRAM:SFX モデル(単位はMB)
	float vram_sfx_mdl;

	// NAME: VRAM: Gi - VRAM:Gi
	// DESC: VRAM: Gi (unit is MB) - VRAM:Gi(単位はMB)
	float vram_gi;

	// NAME: VRAM: Menu - VRAM:メニュー
	// DESC: VRAM: Menu (unit is MB) - VRAM:メニュー(単位はMB)
	float vram_menu_tex;

	// NAME: VRAM: DECAL_RT - VRAM:DECAL_RT
	// DESC: VRAM: DECAL render target (unit is MB) - VRAM:DECALレンダーターゲット(単位はMB)
	float vram_decal_rt;

	// NAME: VRAM: DECAL - VRAM:DECAL
	// DESC: VRAM: DECAL (unit is MB) - VRAM:DECAL(単位はMB)
	float vram_decal;

	// NAME: Reserved area - 予約領域
	uint8_t reserve_0[4];

	// NAME: VRAM: Other textures - VRAM:その他 テクスチャ
	// DESC: VRAM: Other models (in MB) - VRAM:その他 モデル(単位はMB)
	float vram_other_tex;

	// NAME: VRAM: Other models - VRAM:その他 モデル
	// DESC: VRAM: Other textures (in MB) - VRAM:その他 テクスチャ(単位はMB)
	float vram_other_mdl;

	// NAME: HAVOK: Anime - HAVOK:アニメ
	// DESC: HAVOK: Animation (unit is MB) - HAVOK:アニメ(単位はMB)
	float havok_anim;

	// NAME: HAVOK: Placement - HAVOK:配置
	// DESC: HAVOK: Placement (unit is MB) - HAVOK:配置(単位はMB)
	float havok_ins;

	// NAME: HAVOK: Hit - HAVOK:ヒット
	// DESC: HAVOK: Hit (unit is MB) - HAVOK:ヒット(単位はMB)
	float havok_hit;

	// NAME: VRAM: Other - VRAM:その他
	// DESC: VRAM: Other (unit is MB) - VRAM:その他(単位はMB)
	float vram_other;

	// NAME: VRAM: total value - VRAM:合算値
	// DESC: VRAM: Total value (unit is MB) - VRAM:合算値(単位はMB)
	float vram_detail_all;

	// NAME: VRAM: Characters & Parts - VRAM:キャラ&パーツ
	// DESC: VRAM: Total value of characters and parts (unit is MB) - VRAM:キャラとパーツ合算値(単位はMB)
	float vram_chr_and_parts;

	// NAME: HAVOK: Navimesh - HAVOK:ナビメッシュ
	// DESC: HAVOK: Navimesh (unit is MB) - HAVOK:ナビメッシュ(単位はMB)
	float havok_navimesh;

	// NAME: Reserved area - 予約領域
	// DESC: Reserved area - 予約領域
	uint8_t reserve_1[24];
};

#endif
