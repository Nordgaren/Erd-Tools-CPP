/* This file was automatically generated from XML paramdefs. */
#ifndef _PARAMDEF_MENU_OFFSCR_REND_PARAM_ST_H
#define _PARAMDEF_MENU_OFFSCR_REND_PARAM_ST_H
#pragma once
#include <inttypes.h>

// Data Version: 1
// Is Big Endian: False
// Is Unicode: True
// Format Version: 203
struct MENU_OFFSCR_REND_PARAM_ST {

	// NAME: Camera gaze point X - カメラ注視点X
	// DESC: Camera gaze point X - カメラ注視点X
	float camAtPosX;

	// NAME: Camera gaze point Y - カメラ注視点Y
	// DESC: Camera gaze point Y - カメラ注視点Y
	float camAtPosY;

	// NAME: Camera gaze point Z - カメラ注視点Z
	// DESC: Camera gaze point Z - カメラ注視点Z
	float camAtPosZ;

	// NAME: Camera distance - カメラ距離
	// DESC: Camera distance - カメラ距離
	float camDist;

	// NAME: Camera oriented X - カメラ向きX
	// DESC: Camera oriented X - カメラ向きX
	float camRotX;

	// NAME: Suitable for camera Y - カメラ向きY
	// DESC: Suitable for camera Y - カメラ向きY
	float camRotY;

	// NAME: Camera angle of view - カメラ画角
	// DESC: Camera angle of view - カメラ画角
	float camFov;

	// NAME: Shortest distance when operating the camera - カメラ操作時最短距離
	// DESC: Shortest distance when operating the camera - カメラ操作時最短距離
	float camDistMin;

	// NAME: Longest distance when operating the camera - カメラ操作時最長距離
	// DESC: Longest distance when operating the camera - カメラ操作時最長距離
	float camDistMax;

	// NAME: Minimum orientation when operating the camera - カメラ操作時最小向き
	// DESC: Minimum orientation when operating the camera - カメラ操作時最小向き
	float camRotXMin;

	// NAME: Maximum orientation when operating the camera - カメラ操作時最大向き
	// DESC: Maximum orientation when operating the camera - カメラ操作時最大向き
	float camRotXMax;

	// NAME: GparamID - GparamID
	// DESC: GparamID - GparamID
	uint32_t GparamID;

	// NAME: Environment map texture ID - 環境マップテクスチャID
	// DESC: Environment map texture ID. It corresponds to 4 digits of N: \ GR \ data \ Other \ SysEnvTex \ GILM ???? _rem.dds. - 環境マップテクスチャID。N:\GR\data\Other\SysEnvTex\GILM????_rem.dds の数字4桁に対応しています。
	uint32_t envTexId;

	// NAME: Gparam ID (for PS4) - GparamID(PS4用)
	// DESC: Gparam ID (for PS4) - GparamID(PS4用)
	uint32_t Grapm_ID_forPS4;

	// NAME: Gparam ID (for Xbox One) - GparamID(XboxOne用)
	// DESC: Gparam ID (for Xbox One) - GparamID(XboxOne用)
	uint32_t Grapm_ID_forXB1;

	// NAME: reserve - 予約
	// DESC: reserve - 予約
	uint8_t pad[4];
};

#endif
