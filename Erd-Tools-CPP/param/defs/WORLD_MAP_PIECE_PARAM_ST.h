/* This file was automatically generated from XML paramdefs. */
#ifndef _PARAMDEF_WORLD_MAP_PIECE_PARAM_ST_H
#define _PARAMDEF_WORLD_MAP_PIECE_PARAM_ST_H
#pragma once
#include <inttypes.h>

// Data Version: 2
// Is Big Endian: False
// Is Unicode: True
// Format Version: 203
struct WORLD_MAP_PIECE_PARAM_ST {

	// NAME: Do you remove it from the NT version output? - NT版出力から外すか
	// DESC: Parameters marked with ○ are excluded in the NT version package. - ○をつけたパラメータをNT版パッケージでは除外します
	uint8_t disableParam_NT: 1;

	// NAME: Reserve for package output 1 - パッケージ出力用リザーブ1
	// DESC: Reserve for package output 1 - パッケージ出力用リザーブ1
	uint8_t disableParamReserve1: 7;

	// NAME: Reserve for package output 2 - パッケージ出力用リザーブ2
	// DESC: Reserve for package output 2 - パッケージ出力用リザーブ2
	uint8_t disableParamReserve2[3];

	// NAME: Open event flag ID - 開放イベントフラグID
	// DESC: Event flag ID of open condition - 開放条件のイベントフラグID
	uint32_t openEventFlagId;

	// NAME: Opened traversal area: Xmin - 開放される踏破エリア：Xmin
	// DESC: Coordinates of the traversal area that expands when opened (Xmin) - 開放時に拡張する踏破エリアの座標（Xmin）
	float openTravelAreaLeft;

	// NAME: Opened traversal area: Xmax - 開放される踏破エリア：Xmax
	// DESC: Coordinates of the traversal area that expands when opened (Xmax) - 開放時に拡張する踏破エリアの座標（Xmax）
	float openTravelAreaRight;

	// NAME: Opened traversal area: Ymin - 開放される踏破エリア：Ymin
	// DESC: Coordinates of the traversal area that expands when opened (Ymin) - 開放時に拡張する踏破エリアの座標（Ymin）
	float openTravelAreaTop;

	// NAME: Opened traversal area: Ymax - 開放される踏破エリア：Ymax
	// DESC: Coordinates of the traversal area that expands when opened (Ymax) - 開放時に拡張する踏破エリアの座標（Ymax）
	float openTravelAreaBottom;

	// NAME: Acquisition production event flag ID - 入手演出イベントフラグID
	// DESC: Event flag ID of the acquisition production start condition. Assuming that only one of the map fragments is On - 入手演出開始条件のイベントフラグID。いずれかの地図断片ひとつのみがOnになっている想定
	uint32_t acquisitionEventFlagId;

	// NAME: Acquisition effect: Display magnification - 入手演出：表示倍率
	// DESC: Display magnification at the time of acquisition production - 入手演出時の表示倍率
	float acquisitionEventScale;

	// NAME: Obtained production: Center coordinates X - 入手演出：中心座標X
	// DESC: Center coordinates (X) at the time of acquisition production - 入手演出時の中心座標（X）
	float acquisitionEventCenterX;

	// NAME: Obtained production: Center coordinates Y - 入手演出：中心座標Y
	// DESC: For the central seat at the time of acquisition production (Y) - 入手演出時の中心座用（Y）
	float acquisitionEventCenterY;

	// NAME: Acquisition effect: Resource multiplier - 入手演出：リソース倍率
	// DESC: Display magnification of blindfold resources for acquisition production - 入手演出用目隠しリソースの表示倍率
	float acquisitionEventResScale;

	// NAME: Acquisition effect: Resource offset X - 入手演出：リソースオフセットX
	// DESC: Display position offset (X) of blindfold resource for acquisition production - 入手演出用目隠しリソースの表示位置オフセット（X）
	float acquisitionEventResOffsetX;

	// NAME: Acquisition effect: Resource offset Y - 入手演出：リソースオフセットY
	// DESC: Offset of display position of blindfold resource for acquisition production (Y) - 入手演出用目隠しリソースの表示位置オフセット（Y）
	float acquisitionEventResOffsetY;

	// NAME: pad - パッド
	uint8_t pad[12];
};

#endif
