/* This file was automatically generated from XML paramdefs. */
#ifndef _PARAMDEF_SOUND_AUTO_REVERB_EVALUATION_DIST_PARAM_ST_H
#define _PARAMDEF_SOUND_AUTO_REVERB_EVALUATION_DIST_PARAM_ST_H
#pragma once
#include <inttypes.h>

// Data Version: 1
// Is Big Endian: False
// Is Unicode: True
// Format Version: 203
struct SOUND_AUTO_REVERB_EVALUATION_DIST_PARAM_ST {

	// NAME: Distance to No Hit [m] - NoHitとする距離[m]
	// DESC: Collision points above this distance [m] are judged as No Hit (less than 0: invalid) - この距離[m]以上の衝突点をNoHitとして判定する(0より小さい:無効)
	float NoHitDist;

	// NAME: Do you include NoHit collision points? - NoHitの衝突点含めるか？
	// DESC: Do you include NoHit collision points? - NoHitの衝突点含めるか？
	uint8_t isCollectNoHitPoint;

	// NAME: Do you include outdoor collision points? - 屋外の衝突点含めるか？
	// DESC: Do you include outdoor collision points? - 屋外の衝突点含めるか？
	uint8_t isCollectOutdoorPoint;

	// NAME: Do you include floor collision points? - 床の衝突点含めるか？
	// DESC: Do you include floor collision points? - 床の衝突点含めるか？
	uint8_t isCollectFloorPoint;

	// NAME: Evaluation distance calculation type - 評価距離計算タイプ
	// DESC: Evaluation distance calculation type (0: normal, average from 1: Max) - 評価距離計算タイプ(0:通常,1:Maxからの平均)
	uint8_t distValCalcType;

	// NAME: Effective collision point life [seconds] - 有効な衝突点寿命[秒]
	// DESC: Collision points longer than this life [second] are treated as invalid. Set to be less than or equal to the life of the common setting - この寿命[秒]以上の衝突点は無効扱いにする。共通設定の寿命以下に設定すること
	float enableLifeTime;

	// NAME: Max Number of collision point records - Max衝突点レコード数
	// DESC: Max Number of collision point records - Max衝突点レコード数
	uint32_t maxDistRecordNum;

	// NAME: Max distance decimation - Max距離間引き数
	// DESC: Max distance decimation number (0: not decimation) (must be set to the value of "Max collision point record number-1". Incorrect value will be corrected) - Max距離間引き数(0:間引かない)(「Max衝突点レコード数-1」の値に設定する必要がある。不正な値は修正される)
	uint32_t ignoreDistNumForMax;
};

#endif
