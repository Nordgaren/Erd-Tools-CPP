/* This file was automatically generated from XML paramdefs. */
#ifndef _PARAMDEF_PERFORMANCE_CHECK_PARAM_H
#define _PARAMDEF_PERFORMANCE_CHECK_PARAM_H
#pragma once
#include <inttypes.h>

// Data Version: 1
// Is Big Endian: False
// Is Unicode: True
// Format Version: 202
struct PERFORMANCE_CHECK_PARAM {

	// NAME: Report destination_Job type tag - 報告先_職種タグ
	// DESC: Report destination_Job type tag - 報告先_職種タグ
	uint8_t workTag;

	// NAME: Report destination_category tag - 報告先_カテゴリタグ
	// DESC: Report destination_category tag - 報告先_カテゴリタグ
	uint8_t categoryTag;

	// NAME: Comparison symbol - 比較記号
	// DESC: Comparison symbol - 比較記号
	uint8_t compareType;

	// NAME: Reservation 1 - 予約1
	// DESC: Reservation 1 - 予約1
	uint8_t dummy1[1];

	// NAME: Comparison value - 比較数値
	// DESC: Comparison value - 比較数値
	float compareValue;

	// NAME: Reservation 2 - 予約2
	// DESC: Reservation 2 - 予約2
	uint8_t dummy2[8];

	// NAME: Report destination_user tag - 報告先_userタグ
	// DESC: Report to_Performance person tag - 報告先_パフォーマンス人物タグ
	wchar_t userTag[16];
};

#endif
