/* This file was automatically generated from XML paramdefs. */
#ifndef _PARAMDEF_SPEEDTREE_MODEL_PARAM_ST_H
#define _PARAMDEF_SPEEDTREE_MODEL_PARAM_ST_H
#pragma once
#include <inttypes.h>

// Data Version: 2
// Is Big Endian: False
// Is Unicode: True
// Format Version: 203
struct SPEEDTREE_MODEL_PARAM_ST {

	// NAME: Leaf minimum fade value - Leafの最小フェード値
	float MinFadeLeaf;

	// NAME: Frond minimum fade value - Frondの最小フェード値
	float MinFadeFrond;

	// NAME: Branch minimum fade value - Branchの最小フェード値
	float MinFadeBranch;

	// NAME: Minimum transmitted light of Leaf - Leafの透過光最小値
	float MinTranslucencyLeaf;

	// NAME: Maximum transmitted light of Leaf - Leafの透過光最大値
	float MaxTranslucencyLeaf;

	// NAME: Minimum transmitted light of Frond - Frondの透過光最小値
	float MinTranslucencyFrond;

	// NAME: Maximum transmitted light of Frond - Frondの透過光最大値
	float MaxTranslucencyFrond;

	// NAME: Minimum transmitted light of Branch - Branchの透過光最小値
	float MinTranslucencyBranch;

	// NAME: Maximum transmitted light of Branch - Branchの透過光最大値
	float MaxTranslucencyBranch;

	// NAME: Billboard Specular suppression value - ビルボードのSpecular抑制値
	float BillboardBackSpecularWeakenParam;
};

#endif
