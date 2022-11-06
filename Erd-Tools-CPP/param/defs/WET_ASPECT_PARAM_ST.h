/* This file was automatically generated from XML paramdefs. */
#ifndef _PARAMDEF_WET_ASPECT_PARAM_ST_H
#define _PARAMDEF_WET_ASPECT_PARAM_ST_H
#pragma once
#include <inttypes.h>

// Data Version: 1
// Is Big Endian: False
// Is Unicode: True
// Format Version: 203
struct WET_ASPECT_PARAM_ST {

	// NAME: Base color value R - ベースカラー 値R
	// DESC: Base color color R. - ベースカラー色Rです。
	uint8_t baseColorR;

	// NAME: Base color value G - ベースカラー 値G
	// DESC: Base color color G. - ベースカラー色Gです。
	uint8_t baseColorG;

	// NAME: Base color value B - ベースカラー 値B
	// DESC: Base color color B. - ベースカラー色Bです。
	uint8_t baseColorB;

	// NAME: Spare 1 - 予備1
	uint8_t reserve_0[1];

	// NAME: Base color% - ベースカラー ％
	// DESC: Base color override rate. - ベースカラーのオーバーライド率です。 
	float baseColorA;

	// NAME: Metallic value - メタリック 値
	// DESC: It's metallic. - メタリックです。
	uint8_t metallic;

	// NAME: Spare 2 - 予備2
	uint8_t reserve_1[1];

	// NAME: Spare 3 - 予備3
	uint8_t reserve_2[1];

	// NAME: Spare 4 - 予備4
	uint8_t reserve_3[1];

	// NAME: Metallic% - メタリック ％
	// DESC: Metallic override rate. - メタリックのオーバーライド率です。
	float metallicRate;

	// NAME: Shininess% - シャイニネス ％
	// DESC: Shininess override rate. - シャイニネスのオーバーライド率です。
	float shininessRate;

	// NAME: Shininess value - シャイニネス 値
	// DESC: Shininess. - シャイニネスです。 
	uint8_t shininess;

	// NAME: Spare 5 - 予備5
	uint8_t reserve_4[11];
};

#endif
