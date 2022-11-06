/* This file was automatically generated from XML paramdefs. */
#ifndef _PARAMDEF_CUTSCENE_TIMEZONE_CONVERT_PARAM_ST_H
#define _PARAMDEF_CUTSCENE_TIMEZONE_CONVERT_PARAM_ST_H
#pragma once
#include <inttypes.h>

// Data Version: 1
// Is Big Endian: False
// Is Unicode: True
// Format Version: 203
struct CUTSCENE_TIMEZONE_CONVERT_PARAM_ST {

	// NAME: Pre-conversion time zone start time [hour] - 変換前時間帯開始時刻[hour]
	// DESC: Start time of the time zone to be converted to cutscene time [hour] - カットシーン時刻に変換する時間帯の開始時刻[hour]
	float SrcTimezoneStart;

	// NAME: Cutscene time after conversion [hour] - 変換後カットシーン時刻[hour]
	// DESC: Enter the time used during cutscene playback in hours [hour] - カットシーン再生中に使われる時刻を時間単位で入力[hour]
	float DstCutscenTime;
};

#endif
