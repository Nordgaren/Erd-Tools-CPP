/* This file was automatically generated from XML paramdefs. */
#ifndef _PARAMDEF_MAP_MIMICRY_ESTABLISHMENT_PARAM_ST_H
#define _PARAMDEF_MAP_MIMICRY_ESTABLISHMENT_PARAM_ST_H
#pragma once
#include <inttypes.h>

// Data Version: 1
// Is Big Endian: False
// Is Unicode: True
// Format Version: 203
struct MAP_MIMICRY_ESTABLISHMENT_PARAM_ST {

	// NAME: Mimicry weight 0 - 擬態重み0
	// DESC: Mimicry weight 0 - 擬態重み0
	float mimicryEstablishment0;

	// NAME: Mimicry weight 1 - 擬態重み1
	// DESC: Mimicry weight 1 - 擬態重み1
	float mimicryEstablishment1;

	// NAME: Mimicry weight 2 - 擬態重み2
	// DESC: Mimicry weight 2 - 擬態重み2
	float mimicryEstablishment2;

	// NAME: Mimicry 0 SFXID Forward swing - 擬態0 SFXID 前振り
	// DESC: Mimicry 0 SFXID Forward swing - 擬態0 SFXID 前振り
	int32_t mimicryBeginSfxId0;

	// NAME: Mimicry 0 SFXID body - 擬態0 SFXID 本体
	// DESC: Mimicry 0 SFXID body - 擬態0 SFXID 本体
	int32_t mimicrySfxId0;

	// NAME: Mimicry 0 SFXID release - 擬態0 SFXID 解除
	// DESC: Mimicry 0 SFXID release - 擬態0 SFXID 解除
	int32_t mimicryEndSfxId0;

	// NAME: Mimicry 1 SFXID Forward swing - 擬態1 SFXID 前振り
	// DESC: Mimicry 1 SFXID Forward swing - 擬態1 SFXID 前振り
	int32_t mimicryBeginSfxId1;

	// NAME: Mimicry 1 SFXID body - 擬態1 SFXID 本体
	// DESC: Mimicry 1 SFXID body - 擬態1 SFXID 本体
	int32_t mimicrySfxId1;

	// NAME: Mimicry 1 SFXID release - 擬態1 SFXID 解除
	// DESC: Mimicry 1 SFXID release - 擬態1 SFXID 解除
	int32_t mimicryEndSfxId1;

	// NAME: Mimicry 2 SFXID Forward swing - 擬態2 SFXID 前振り
	// DESC: Mimicry 2 SFXID Forward swing - 擬態2 SFXID 前振り
	int32_t mimicryBeginSfxId2;

	// NAME: Mimicry 2 SFXID body - 擬態2 SFXID 本体
	// DESC: Mimicry 2 SFXID body - 擬態2 SFXID 本体
	int32_t mimicrySfxId2;

	// NAME: Mimicry 2 SFXID cancellation - 擬態2 SFXID 解除
	// DESC: Mimicry 2 SFXID cancellation - 擬態2 SFXID 解除
	int32_t mimicryEndSfxId2;

	// NAME: pad - パッド
	// DESC: pad - pad
	uint8_t pad1[16];
};

#endif
