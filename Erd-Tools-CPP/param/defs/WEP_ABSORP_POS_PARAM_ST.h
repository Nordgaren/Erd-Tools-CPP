/* This file was automatically generated from XML paramdefs. */
#ifndef _PARAMDEF_WEP_ABSORP_POS_PARAM_ST_H
#define _PARAMDEF_WEP_ABSORP_POS_PARAM_ST_H
#pragma once
#include <inttypes.h>

// Data Version: 2
// Is Big Endian: False
// Is Unicode: True
// Format Version: 203
struct WEP_ABSORP_POS_PARAM_ST {

	// NAME: Do you remove it from the NT version output? - NT版出力から外すか
	// DESC: Parameters marked with ○ are excluded in the NT version package. - ○をつけたパラメータをNT版パッケージでは除外します
	uint8_t disableParam_NT: 1;

	// NAME: Reserve for package output 1 - パッケージ出力用リザーブ1
	// DESC: Reserve for package output 1 - パッケージ出力用リザーブ1
	uint8_t disableParamReserve1: 7;

	// NAME: Reserve for package output 2 - パッケージ出力用リザーブ2
	// DESC: Reserve for package output 2 - パッケージ出力用リザーブ2
	uint8_t disableParamReserve2[3];

	// NAME: Storage location type - 格納場所タイプ
	// DESC: The animation at the time of sword delivery changes depending on this value - この値によって納刀時アニメが変わります
	uint8_t hangPosType;

	// NAME: Do you want to combine skeletons? - スケルトン結合するか
	// DESC: Do you want to combine skeletons? - スケルトン結合するか
	uint8_t isSkeletonBind;

	// NAME: Padding - パディング
	uint8_t pad0[2];

	// NAME: Model 0_ Right hand adsorption Damipoly - モデル0_右手時吸着ダミポリ
	// DESC: Model 0 adsorption Damipoli when holding the weapon in one hand. - 武器を右手に片手で持っているときのモデル0の吸着ダミポリ。
	int16_t right_0;

	// NAME: Model 0_ Left hand adsorption Damipoly - モデル0_左手時吸着ダミポリ
	// DESC: Model 0 adsorption Damipoli when holding the weapon in one hand. - 武器を左手に片手で持っているときのモデル0の吸着ダミポリ。
	int16_t left_0;

	// NAME: Model 0_ Right hand Adsorption Damipoly with both hands - モデル0_右手両手時吸着ダミポリ
	// DESC: Model 0 adsorption Damipoli when holding a right-handed weapon with both hands. - 右手武器を両手で持っているときのモデル0の吸着ダミポリ。
	int16_t both_0;

	// NAME: Model 0_ Left hand sword adsorption Damipoly - モデル0_左手納刀時吸着ダミポリ
	// DESC: Model 0 adsorption Damipoli when holding a weapon in the left hand and delivering the weapon. - 武器を左手に持っていて、その武器を納刀しているときのモデル0の吸着ダミポリ。
	int16_t leftHang_0;

	// NAME: Model 0_Suction Damipoli at the time of right hand sword delivery - モデル0_右手納刀時吸着ダミポリ
	// DESC: Model 0 adsorption Damipoli when holding a weapon in the right hand and delivering the weapon. - 武器を右手に持っていて、その武器を納刀しているときのモデル0の吸着ダミポリ。
	int16_t rightHang_0;

	// NAME: Model 1_Right-handed adsorption Damipoly - モデル1_右手時吸着ダミポリ
	// DESC: Model 1 adsorption Damipoli when holding the weapon in one hand. - 武器を右手に片手で持っているときのモデル1の吸着ダミポリ。
	int16_t right_1;

	// NAME: Model 1_ Left hand adsorption Damipoly - モデル1_左手時吸着ダミポリ
	// DESC: Model 1 adsorption Damipoli when holding the weapon in one hand. - 武器を左手に片手で持っているときのモデル1の吸着ダミポリ。
	int16_t left_1;

	// NAME: Model 1_Right-handed two-handed adsorption Damipoly - モデル1_右手両手時吸着ダミポリ
	// DESC: Model 1 adsorption Damipoli when holding a right-handed weapon with both hands. - 右手武器を両手で持っているときのモデル1の吸着ダミポリ。
	int16_t both_1;

	// NAME: Model 1_ Left hand sword adsorption Damipoli - モデル1_左手納刀時吸着ダミポリ
	// DESC: Model 1 adsorption Damipoli when holding a weapon in the left hand and delivering the weapon. - 武器を左手に持っていて、その武器を納刀しているときのモデル1の吸着ダミポリ。
	int16_t leftHang_1;

	// NAME: Model 1_Suction Damipoli at the time of right hand sword delivery - モデル1_右手納刀時吸着ダミポリ
	// DESC: Model 1 adsorption Damipoli when holding a weapon in the right hand and delivering the weapon. - 武器を右手に持っていて、その武器を納刀しているときのモデル1の吸着ダミポリ。
	int16_t rightHang_1;

	// NAME: Model 2_Right-handed adsorption Damipoly - モデル2_右手時吸着ダミポリ
	// DESC: Model 2 adsorption Damipoli when holding the weapon in one hand. - 武器を右手に片手で持っているときのモデル2の吸着ダミポリ。
	int16_t right_2;

	// NAME: Model 2_ Left hand adsorption Damipoly - モデル2_左手時吸着ダミポリ
	// DESC: Model 2 adsorption Damipoli when holding the weapon in one hand. - 武器を左手に片手で持っているときのモデル2の吸着ダミポリ。
	int16_t left_2;

	// NAME: Model 2_Right-handed two-handed adsorption Damipoly - モデル2_右手両手時吸着ダミポリ
	// DESC: Model 2 adsorption Damipoli when holding a right-handed weapon with both hands. - 右手武器を両手で持っているときのモデル2の吸着ダミポリ。
	int16_t both_2;

	// NAME: Model 2_ Left hand sword adsorption Damipoli - モデル2_左手納刀時吸着ダミポリ
	// DESC: Model 2 adsorption Damipoli when holding a weapon in the left hand and delivering the weapon. - 武器を左手に持っていて、その武器を納刀しているときのモデル2の吸着ダミポリ。
	int16_t leftHang_2;

	// NAME: Model 2_Suction Damipoli at the time of right hand sword delivery - モデル2_右手納刀時吸着ダミポリ
	// DESC: Model 2 adsorption Damipoli when holding a weapon in the right hand and delivering the weapon. - 武器を右手に持っていて、その武器を納刀しているときのモデル2の吸着ダミポリ。
	int16_t rightHang_2;

	// NAME: Model 3_Right-handed adsorption Damipoly - モデル3_右手時吸着ダミポリ
	// DESC: Model 3 adsorption Damipoli when holding the weapon in one hand. - 武器を右手に片手で持っているときのモデル3の吸着ダミポリ。
	int16_t right_3;

	// NAME: Model 3_ Left hand adsorption Damipoly - モデル3_左手時吸着ダミポリ
	// DESC: Model 3 adsorption Damipoli when holding the weapon in one hand. - 武器を左手に片手で持っているときのモデル3の吸着ダミポリ。
	int16_t left_3;

	// NAME: Model 3_Right-handed two-handed adsorption Damipoly - モデル3_右手両手時吸着ダミポリ
	// DESC: Model 3 adsorption Damipoli when holding a right-handed weapon with both hands. - 右手武器を両手で持っているときのモデル3の吸着ダミポリ。
	int16_t both_3;

	// NAME: Model 3_ Left hand sword adsorption Damipoli - モデル3_左手納刀時吸着ダミポリ
	// DESC: Model 3 Adsorption Damipoli when holding a weapon in the left hand and delivering the weapon. - 武器を左手に持っていて、その武器を納刀しているときのモデル3の吸着ダミポリ。
	int16_t leftHang_3;

	// NAME: Model 3_Suction Damipoli at the time of right hand sword delivery - モデル3_右手納刀時吸着ダミポリ
	// DESC: Model 3 Adsorption Damipoli when holding a weapon in his right hand and delivering the weapon. - 武器を右手に持っていて、その武器を納刀しているときのモデル3の吸着ダミポリ。
	int16_t rightHang_3;

	// NAME: Model 0_Weapon hidden type - モデル0_武器非表示タイプ
	// DESC: Hidden type of model 0. When hiding a weapon with TAE, erase the one that matches this - モデル0の非表示タイプ。TAEで武器非表示にする際にこれと一致するものを消す
	uint8_t wepInvisibleType_0;

	// NAME: Model 1_Weapon hidden type - モデル1_武器非表示タイプ
	// DESC: Hidden type of model 1. When hiding a weapon with TAE, erase the one that matches this - モデル1の非表示タイプ。TAEで武器非表示にする際にこれと一致するものを消す
	uint8_t wepInvisibleType_1;

	// NAME: Model 2_Weapon hidden type - モデル2_武器非表示タイプ
	// DESC: Hidden type of model 2. When hiding a weapon with TAE, erase the one that matches this - モデル2の非表示タイプ。TAEで武器非表示にする際にこれと一致するものを消す
	uint8_t wepInvisibleType_2;

	// NAME: Model 3_Weapon hidden type - モデル3_武器非表示タイプ
	// DESC: Model 3 hidden type. When hiding a weapon with TAE, erase the one that matches this - モデル3の非表示タイプ。TAEで武器非表示にする際にこれと一致するものを消す
	uint8_t wepInvisibleType_3;

	// NAME: Model 0_Left hand Adsorption Damipoly with both hands - モデル0_左手両手時吸着ダミポリ
	// DESC: Model 0 adsorption Damipoli when holding a left-handed weapon with both hands. - 左手武器を両手で持っているときのモデル0の吸着ダミポリ。
	int16_t leftBoth_0;

	// NAME: Model 1_Left hand Adsorption Damipoly with both hands - モデル1_左手両手時吸着ダミポリ
	// DESC: Model 1 adsorption Damipoli when holding a left-handed weapon with both hands. - 左手武器を両手で持っているときのモデル1の吸着ダミポリ。
	int16_t leftBoth_1;

	// NAME: Model 2_Left hand Adsorption Damipoly with both hands - モデル2_左手両手時吸着ダミポリ
	// DESC: Model 2 adsorption Damipoli when holding a left-handed weapon with both hands. - 左手武器を両手で持っているときのモデル2の吸着ダミポリ。
	int16_t leftBoth_2;

	// NAME: Model 3_ Left hand adsorption Damipoly with both hands - モデル3_左手両手時吸着ダミポリ
	// DESC: Model 3 adsorption Damipoli when holding a left-handed weapon with both hands. - 左手武器を両手で持っているときのモデル3の吸着ダミポリ。
	int16_t leftBoth_3;

	// NAME: Model 0_Right hand display position - モデル0_右手時表示位置
	// DESC: Model 0_ Right-hand display position (used to specify hidden position from TAE) - モデル0_右手時表示位置(TAE から非表示位置を指定するのに使用する)
	uint8_t dispPosType_right_0;

	// NAME: Model 0_left hand display position - モデル0_左手時表示位置
	// DESC: Model 0_Left hand display position (used to specify hidden position from TAE) - モデル0_左手時表示位置(TAE から非表示位置を指定するのに使用する)
	uint8_t dispPosType_left_0;

	// NAME: Model 0_Right hand Display position with both hands - モデル0_右手両手時表示位置
	// DESC: Model 0_Right-handed two-handed display position (used to specify hidden position from TAE) - モデル0_右手両手時表示位置(TAE から非表示位置を指定するのに使用する)
	uint8_t dispPosType_rightBoth_0;

	// NAME: Model 0_ Left hand Display position with both hands - モデル0_左手両手時表示位置
	// DESC: Model 0_ Left-handed two-handed display position (used to specify hidden position from TAE) - モデル0_左手両手時表示位置(TAE から非表示位置を指定するのに使用する)
	uint8_t dispPosType_leftBoth_0;

	// NAME: Model 0_ Right hand display position when sword is delivered - モデル0_右手納刀時表示位置
	// DESC: Model 0_ Right-handed sword display position (used to specify the non-display position from TAE) - モデル0_右手納刀時表示位置(TAE から非表示位置を指定するのに使用する)
	uint8_t dispPosType_rightHang_0;

	// NAME: Model 0_ Display position when delivering the left hand sword - モデル0_左手納刀時表示位置
	// DESC: Model 0_ Left hand sword display position (used to specify the non-display position from TAE) - モデル0_左手納刀時表示位置(TAE から非表示位置を指定するのに使用する)
	uint8_t dispPosType_leftHang_0;

	// NAME: Model 1_Right hand display position - モデル1_右手時表示位置
	// DESC: Model 1_ Right-hand display position (used to specify hidden position from TAE) - モデル1_右手時表示位置(TAE から非表示位置を指定するのに使用する)
	uint8_t dispPosType_right_1;

	// NAME: Model 1_left hand display position - モデル1_左手時表示位置
	// DESC: Model 1_Left hand display position (used to specify hidden position from TAE) - モデル1_左手時表示位置(TAE から非表示位置を指定するのに使用する)
	uint8_t dispPosType_left_1;

	// NAME: Model 1_Right hand Display position with both hands - モデル1_右手両手時表示位置
	// DESC: Model 1_Right-handed two-handed display position (used to specify hidden position from TAE) - モデル1_右手両手時表示位置(TAE から非表示位置を指定するのに使用する)
	uint8_t dispPosType_rightBoth_1;

	// NAME: Model 1_ Left hand Display position with both hands - モデル1_左手両手時表示位置
	// DESC: Model 1_ Left-handed two-handed display position (used to specify hidden position from TAE) - モデル1_左手両手時表示位置(TAE から非表示位置を指定するのに使用する)
	uint8_t dispPosType_leftBoth_1;

	// NAME: Model 1_ Right hand display position when sword is delivered - モデル1_右手納刀時表示位置
	// DESC: Model 1_ Right-handed sword display position (used to specify the non-display position from TAE) - モデル1_右手納刀時表示位置(TAE から非表示位置を指定するのに使用する)
	uint8_t dispPosType_rightHang_1;

	// NAME: Model 1_ Display position when delivering the left hand sword - モデル1_左手納刀時表示位置
	// DESC: Model 1_ Left hand sword display position (used to specify the non-display position from TAE) - モデル1_左手納刀時表示位置(TAE から非表示位置を指定するのに使用する)
	uint8_t dispPosType_leftHang_1;

	// NAME: Model 2_Right hand display position - モデル2_右手時表示位置
	// DESC: Model 2_ Right-hand display position (used to specify hidden position from TAE) - モデル2_右手時表示位置(TAE から非表示位置を指定するのに使用する)
	uint8_t dispPosType_right_2;

	// NAME: Model 2_left hand display position - モデル2_左手時表示位置
	// DESC: Model 2_Left hand display position (used to specify hidden position from TAE) - モデル2_左手時表示位置(TAE から非表示位置を指定するのに使用する)
	uint8_t dispPosType_left_2;

	// NAME: Model 2_Right hand Display position with both hands - モデル2_右手両手時表示位置
	// DESC: Model 2_Right-handed two-handed display position (used to specify hidden position from TAE) - モデル2_右手両手時表示位置(TAE から非表示位置を指定するのに使用する)
	uint8_t dispPosType_rightBoth_2;

	// NAME: Model 2_ Left hand Display position with both hands - モデル2_左手両手時表示位置
	// DESC: Model 2_ Left-handed two-handed display position (used to specify hidden position from TAE) - モデル2_左手両手時表示位置(TAE から非表示位置を指定するのに使用する)
	uint8_t dispPosType_leftBoth_2;

	// NAME: Model 2_ Right hand display position when sword is delivered - モデル2_右手納刀時表示位置
	// DESC: Model 2_Right-handed sword display position (used to specify the non-display position from TAE) - モデル2_右手納刀時表示位置(TAE から非表示位置を指定するのに使用する)
	uint8_t dispPosType_rightHang_2;

	// NAME: Model 2_ Display position when delivering the left hand sword - モデル2_左手納刀時表示位置
	// DESC: Model 2_ Left hand sword display position (used to specify the non-display position from TAE) - モデル2_左手納刀時表示位置(TAE から非表示位置を指定するのに使用する)
	uint8_t dispPosType_leftHang_2;

	// NAME: Model 3_ Right hand display position - モデル3_右手時表示位置
	// DESC: Model 3_ Right-hand display position (used to specify hidden position from TAE) - モデル3_右手時表示位置(TAE から非表示位置を指定するのに使用する)
	uint8_t dispPosType_right_3;

	// NAME: Model 3_left hand display position - モデル3_左手時表示位置
	// DESC: Model 3_Left hand display position (used to specify hidden position from TAE) - モデル3_左手時表示位置(TAE から非表示位置を指定するのに使用する)
	uint8_t dispPosType_left_3;

	// NAME: Model 3_Right hand display position with both hands - モデル3_右手両手時表示位置
	// DESC: Model 3_Right-handed two-handed display position (used to specify hidden position from TAE) - モデル3_右手両手時表示位置(TAE から非表示位置を指定するのに使用する)
	uint8_t dispPosType_rightBoth_3;

	// NAME: Model 3_ Left hand Display position with both hands - モデル3_左手両手時表示位置
	// DESC: Model 3_ Left-handed two-handed display position (used to specify hidden position from TAE) - モデル3_左手両手時表示位置(TAE から非表示位置を指定するのに使用する)
	uint8_t dispPosType_leftBoth_3;

	// NAME: Model 3_ Right hand display position when sword is delivered - モデル3_右手納刀時表示位置
	// DESC: Model 3_Right-handed sword display position (used to specify the non-display position from TAE) - モデル3_右手納刀時表示位置(TAE から非表示位置を指定するのに使用する)
	uint8_t dispPosType_rightHang_3;

	// NAME: Model 3_ Display position when delivering the left hand sword - モデル3_左手納刀時表示位置
	// DESC: Model 3_ Left hand sword display position (used to specify the non-display position from TAE) - モデル3_左手納刀時表示位置(TAE から非表示位置を指定するのに使用する)
	uint8_t dispPosType_leftHang_3;

	// NAME: Reserved area - 予約領域
	uint8_t reserve[12];
};

#endif
