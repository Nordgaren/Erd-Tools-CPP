/* This file was automatically generated from XML paramdefs. */
#ifndef _PARAMDEF_ACTIONBUTTON_PARAM_ST_H
#define _PARAMDEF_ACTIONBUTTON_PARAM_ST_H
#pragma once
#include <inttypes.h>

// Data Version: 2
// Is Big Endian: False
// Is Unicode: True
// Format Version: 203
struct ACTIONBUTTON_PARAM_ST {

	// NAME: Range type - 範囲タイプ
	// DESC: Range shape (cylinder, prism, capsule) - 範囲形状(円柱、角柱、カプセル)
	uint8_t regionType;

	// NAME: category - カテゴリ
	// DESC: category. The number on the left side of the name is the priority when multiple action buttons overlap (the closer it is to 0, the higher the priority is displayed). - カテゴリ。名前の左側の数字は複数のアクションボタンが重なっていた場合の優先度(0に近い程優先表示)。
	uint8_t category;

	// NAME: Padding 1 - パディング1
	uint8_t padding1[2];

	// NAME: Damipoli 1 - ダミポリ1
	// DESC: Specify the Damipoli ID that is the center of the bottom of the range. If there is no Damipoly or -1 is entered, the center coordinates will be the reference. - 範囲の底面の中心となるダミポリIDを指定する　ダミポリがない場合 or -1が入力されている場合は、中心座標が基準になる
	int32_t dummyPoly1;

	// NAME: Damipoli 2 - ダミポリ2
	// DESC: Used only when the range type is a capsule. Additional Damipoly (capsule) that creates a line segment with two Damipoly - 範囲タイプがカプセルの場合のみ使用　ダミポリ2つで線分を作る追加ダミポリ(カプセル)
	int32_t dummyPoly2;

	// NAME: radius - 半径
	// DESC: Radius (cylinder / capsule) - 半径(円柱・カプセル)
	float radius;

	// NAME: angle - 角度
	// DESC: Angle (cylinder) - 角度(円柱)
	int32_t angle;

	// NAME: depth - 奥行き
	// DESC: Depth (prism) - 奥行き(角柱)
	float depth;

	// NAME: width - 幅
	// DESC: Width (prism) - 幅(角柱)
	float width;

	// NAME: height - 高さ
	// DESC: Height (cylinder / prism) - 高さ(円柱・角柱)
	float height;

	// NAME: Bottom height offset - 底面高さオフセット
	// DESC: How much to raise or lower the Y coordinate of the bottom (cylinder / prism) - 底面のY座標をどれだけ上下させるか(円柱・角柱)
	float baseHeightOffset;

	// NAME: Angle difference judgment type - 角度差判定タイプ
	// DESC: Angle difference judgment type (cylinder / prism) - 角度差判定タイプ(円柱・角柱)
	uint8_t angleCheckType;

	// NAME: Padding 2 - パディング2
	uint8_t padding2[3];

	// NAME: Allowable angle difference - 許容角度差
	// DESC: Allowable angle difference (cylinder / prism) - 許容角度差(円柱・角柱)
	int32_t allowAngle;

	// NAME: Action spot Damipoli - アクションスポットダミポリ
	// DESC: If there is no Damipoli that specifies the Damipoli ID that will be the position of the action spot, or if -1 is entered, the center coordinates will be the reference. - アクションスポットの位置となるダミポリIDを指定する ダミポリがない場合 or -1が入力されている場合は、中心座標が基準となる
	int32_t spotDummyPoly;

	// NAME: Text box type - テキストボックスタイプ
	// DESC: Text box type - テキストボックスタイプ
	uint8_t textBoxType;

	// NAME: Padding 3 - パディング3
	uint8_t padding3[2];

	// NAME: Padding 5 - パディング5
	uint8_t padding5: 1;

	// NAME: Is it invalid when riding? - 騎乗時無効か
	// DESC: If this item is YES, the action button will not appear when riding and no judgment will be made. - この項目がYESだと騎乗時にアクションボタンが出なくなり、判定も行われない
	uint8_t isInvalidForRide: 1;

	// NAME: Is it gray out when riding? - 騎乗時グレーアウトか
	// DESC: If this item is YES, the action button will be grayed out when riding and no judgment will be made. - この項目がYESだと騎乗時にアクションボタンがグレーアウトし、判定も行われない
	uint8_t isGrayoutForRide: 1;

	// NAME: Is it invalid when crouching? - しゃがみ時無効か
	// DESC: If this item is YES, the action button will not appear when crouching, and no judgment will be made. - この項目がYESだとしゃがみ時にアクションボタンが出なくなり、判定も行われない
	uint8_t isInvalidForCrouching: 1;

	// NAME: Is it gray out when crouching? - しゃがみ時グレーアウトか
	// DESC: If this item is YES, the action button will be grayed out when crouching and no judgment will be made. - この項目がYESだとしゃがみ時にアクションボタンがグレーアウトし、判定も行われない
	uint8_t isGrayoutForCrouching: 1;

	// NAME: Padding 4 - パディング4
	uint8_t padding4: 3;

	// NAME: Text ID - テキストID
	// DESC: Text ID to display - 表示するテキストID
	int32_t textId;

	// NAME: Invalid flag - 無効フラグ
	// DESC: If this flag is ON, the action button will not appear and no judgment will be made. - このフラグがONだとアクションボタンが出ず、判定も行われない
	uint32_t invalidFlag;

	// NAME: Gray out flag - グレーアウトフラグ
	// DESC: If this flag is ON, the action button will be grayed out and no judgment will be made. - このフラグがONだとアクションボタンがグレーアウトし、判定も行われない
	uint32_t grayoutFlag;

	// NAME: Replacement action button ID when riding - 騎乗時差し替えアクションボタンID
	// DESC: Replace with this action button ID parameter while riding (-1: No replacement) - 騎乗中はこのアクションボタンIDのパラメータに差し替える（-1：差し替え無し）
	int32_t overrideActionButtonIdForRide;

	// NAME: Invalid time after execution - 実行後無効時間
	// DESC: Invalid time after execution (-infinite by value) - 実行後無効時間(-値で無限)
	float execInvalidTime;

	// NAME: Padding 6 - パディング6
	uint8_t padding6[28];
};

#endif
