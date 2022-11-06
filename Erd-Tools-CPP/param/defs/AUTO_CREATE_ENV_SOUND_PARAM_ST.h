/* This file was automatically generated from XML paramdefs. */
#ifndef _PARAMDEF_AUTO_CREATE_ENV_SOUND_PARAM_ST_H
#define _PARAMDEF_AUTO_CREATE_ENV_SOUND_PARAM_ST_H
#pragma once
#include <inttypes.h>

// Data Version: 0
// Is Big Endian: False
// Is Unicode: True
// Format Version: 203
struct AUTO_CREATE_ENV_SOUND_PARAM_ST {

	// NAME: Appearance distance Min [m] - 出現距離Min[m]
	// DESC: Appearance distance Min [m] - 出現距離Min[m]
	float RangeMin;

	// NAME: Appearance distance Max [m] - 出現距離Max[m]
	// DESC: Appearance distance Max [ - 出現距離Max[
	float RangeMax;

	// NAME: Lifespan Min [seconds] - 寿命Min[秒]
	// DESC: Lifespan Min [seconds] - 寿命Min[秒]
	float LifeTimeMin;

	// NAME: Lifespan Max [seconds] - 寿命Max[秒]
	// DESC: Lifespan Max [seconds] - 寿命Max[秒]
	float LifeTimeMax;

	// NAME: Delete distance [m] - 削除距離[m]
	// DESC: Delete distance [m] - 削除距離[m]
	float DeleteDist;

	// NAME: Neighborhood judgment distance [m] - 近傍判定距離[m]
	// DESC: Neighborhood judgment distance [m] - 近傍判定距離[m]
	float NearDist;

	// NAME: Generation angle limit Min [degree] - 生成角度制限Min[度]
	// DESC: Angle limit Min [degree] (Specify the Y-axis angle +-in front of the camera. 180 is omnidirectional) - 角度制限Min[度](カメラの前方のY軸角度+-の指定。180なら全方位) 
	float LimiteRotateMin;

	// NAME: Generation angle limit Max [degrees] - 生成角度制限Max[度]
	// DESC: Angle limit Max [degree] (Specify the Y-axis angle +-in front of the camera. 180 is omnidirectional) - 角度制限Max[度](カメラの前方のY軸角度+-の指定。180なら全方位) 
	float LimiteRotateMax;
};

#endif
