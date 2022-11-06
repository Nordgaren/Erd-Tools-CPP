/* This file was automatically generated from XML paramdefs. */
#ifndef _PARAMDEF_MATERIAL_EX_PARAM_ST_H
#define _PARAMDEF_MATERIAL_EX_PARAM_ST_H
#pragma once
#include <inttypes.h>

// Data Version: 4
// Is Big Endian: False
// Is Unicode: True
// Format Version: 203
struct MATERIAL_EX_PARAM_ST {

	// NAME: Material parameter name - マテリアルパラメータ名
	// DESC: Set the parameter name of the material. Up to 31 characters - マテリアルのパラメータ名を設定する。最大31文字まで
	wchar_t paramName[32];

	// NAME: Target material ID - 対象マテリアルID
	// DESC: NPC Para: Resident Material Expansion Para ID setting -1 for all materials - NPCパラ：常駐マテリアル拡張パラID用設定　-1なら全マテリアル対象
	int32_t materialId;

	// NAME: Overwrite value 1 (R) - 上書き値1(R)
	// DESC: NPC Para: Resident Material Extended Para ID Settings - NPCパラ：常駐マテリアル拡張パラID用設定
	float materialParamValue0;

	// NAME: Overwrite value 2 (G) - 上書き値2(G)
	// DESC: NPC Para: Resident Material Expansion Para ID Settings - NPCパラ：常駐マテリアル拡張パラID用設定
	float materialParamValue1;

	// NAME: Overwrite value 3 (B) - 上書き値3(B)
	// DESC: NPC Para: Resident Material Expansion Para ID Settings - NPCパラ：常駐マテリアル拡張パラID用設定
	float materialParamValue2;

	// NAME: Overwrite value 4 (A) - 上書き値4(A)
	// DESC: NPC Para: Resident Material Extended Para ID Settings - NPCパラ：常駐マテリアル拡張パラID用設定
	float materialParamValue3;

	// NAME: Overwrite value 5 (I) - 上書き値5(I)
	// DESC: NPC Para: Resident Material Expansion Para ID Settings - NPCパラ：常駐マテリアル拡張パラID用設定
	float materialParamValue4;

	// NAME: Padding - パディング
	// DESC: Padding - パディング
	uint8_t pad[8];
};

#endif
