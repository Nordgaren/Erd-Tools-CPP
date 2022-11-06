/* This file was automatically generated from XML paramdefs. */
#ifndef _PARAMDEF_SP_EFFECT_VFX_PARAM_ST_H
#define _PARAMDEF_SP_EFFECT_VFX_PARAM_ST_H
#pragma once
#include <inttypes.h>

// Data Version: 1
// Is Big Endian: False
// Is Unicode: True
// Format Version: 203
struct SP_EFFECT_VFX_PARAM_ST {

	// NAME: In effect SfxID - 効果中SfxID
	// DESC: In effect SfxID (-1: invalid) - 効果中SfxID(-1：無効)
	int32_t midstSfxId;

	// NAME: In effect SeID - 効果中SeID
	// DESC: In effect SeID (-1: invalid) - 効果中SeID(-1：無効)
	int32_t midstSeId;

	// NAME: SfxID at the time of activation - 発動時SfxID
	// DESC: SfxID at activation (-1: invalid) - 発動時SfxID(-1：無効)
	int32_t initSfxId;

	// NAME: SeID at the time of activation - 発動時SeID
	// DESC: When activated SeID (-1: invalid) - 発動時SeID(-1：無効)
	int32_t initSeId;

	// NAME: SfxID at the time of release - 解除時SfxID
	// DESC: SfxID at the time of cancellation (-1: invalid) - 解除時SfxID(-1：無効)
	int32_t finishSfxId;

	// NAME: SeID at the time of release - 解除時SeID
	// DESC: SeID at the time of release (-1: invalid) - 解除時SeID(-1：無効)
	int32_t finishSeId;

	// NAME: Hidden start distance [m] - 姿隠し開始距離[m]
	// DESC: It is the camouflage start distance - カムフラージュ開始距離です
	float camouflageBeginDist;

	// NAME: Hidden end distance [m] - 姿隠し終了距離[m]
	// DESC: It is the camouflage end distance - カムフラージュ終了距離です
	float camouflageEndDist;

	// NAME: Makeover Armor ID - 変身防具ID
	// DESC: Makeover Armor ID (-1: None) - 変身防具ID(-1：なし)
	int32_t transformProtectorId;

	// NAME: Damipoli ID in effect - 効果中ダミポリID
	// DESC: In effect Damipoli ID (-1: Root) - 効果中ダミポリID(-1：ルート)
	int16_t midstDmyId;

	// NAME: Damipoli ID at the time of activation - 発動時ダミポリID
	// DESC: Damipoli ID at the time of activation (-1: root) - 発動時ダミポリID(-1：ルート)
	int16_t initDmyId;

	// NAME: Damipoli ID at the time of cancellation - 解除時ダミポリID
	// DESC: Damipoli ID at the time of cancellation (-1: root) - 解除時ダミポリID(-1：ルート)
	int16_t finishDmyId;

	// NAME: Effect type - エフェクトタイプ
	// DESC: Effect type - エフェクトタイプ
	uint8_t effectType;

	// NAME: Soul Param ID for Weapon Enchantment - 武器エンチャント用ソウルパラムID
	// DESC: Soul Param ID for Weapon Enchantment (-1: None). Change the applied Phantom Param. - 武器エンチャント用ソウルパラムID(-1：なし).適用されるファントムパラムを変更します。
	uint8_t soulParamIdForWepEnchant;

	// NAME: VFX playback category - VFX再生カテゴリ
	// DESC: Controls effect playback due to duplicate effects - 重複効果によるエフェクト再生を制御します
	uint8_t playCategory;

	// NAME: In-category priority - カテゴリ内優先度
	// DESC: Set the playback priority when the categories match (lower one has priority) - カテゴリ一致した場合の再生優先度を設定(低い方が優先)
	uint8_t playPriority;

	// NAME: Is there a large effect? - 大型用エフェクトがあるか
	// DESC: Is there a large effect? - 大型用エフェクトがあるか
	uint8_t existEffectForLarge: 1;

	// NAME: Is there an effect for the soul body? - ソウル体用エフェクトがあるか
	// DESC: Is there an effect for the soul body? - ソウル体用エフェクトがあるか
	uint8_t existEffectForSoul: 1;

	// NAME: Whether to hide the effect when hiding - 姿隠し時にエフェクトを非表示にするか
	// DESC: Whether to hide the effect when hiding - 姿隠し時にエフェクトを非表示にするか
	uint8_t effectInvisibleAtCamouflage: 1;

	// NAME: Do you hide - 姿隠しするか
	// DESC: Do you hide - 姿隠しするか
	uint8_t useCamouflage: 1;

	// NAME: Is it hidden even by allies when hiding? - 姿隠し時に味方でも非表示か
	// DESC: Is it hidden even by allies when hiding? - 姿隠し時に味方でも非表示か
	uint8_t invisibleAtFriendCamouflage: 1;

	// NAME: Do you want to turn off the foot effect when hiding? - 姿隠し時にフットエフェクトを消すか
	// DESC: Do you want to turn off the foot effect when hiding? - 姿隠し時にフットエフェクトを消すか
	uint8_t isHideFootEffect_forCamouflage: 1;

	// NAME: Only translucent appearance - 半透明の姿隠しか
	// DESC: Only translucent appearance - 半透明の姿隠しか
	uint8_t halfCamouflage: 1;

	// NAME: Is the transformation armor ID for the whole body? - 変身防具IDが全身用か
	// DESC: Is the transformation armor ID for the whole body? - 変身防具IDが全身用か
	uint8_t isFullBodyTransformProtectorId: 1;

	// NAME: Invisible Weapon for Weapon Enchantment? - 武器エンチャント用インビジブルウェポンか
	// DESC: Invisible Weapon for Weapon Enchantment (0: Weapon Show, 1: Weapon Hide) - 武器エンチャント用インビジブルウェポンか(0:武器表示, 1:武器非表示)
	uint8_t isInvisibleWeapon: 1;

	// NAME: Is it silence? - サイレンスか
	// DESC: Is it silence? (0: No, 1: Yes) - サイレンスか(0:ちがう, 1:そう)
	uint8_t isSilence: 1;

	// NAME: Whole body (in effect) - 全身か（効果中）
	// DESC: Do you use whole body Damipoli for equipping SFX during effect? Play SFX from torso: 190, head: 191, hands: 192, legs: 193 at 1 - 効果中SFXを装備用全身ダミポリを使用するか。1の時に胴:190,頭:191,手:192,脚:193からSFXを再生する
	uint8_t isMidstFullbody: 1;

	// NAME: Whole body (at the time of activation) - 全身か（発動時）
	// DESC: Do you use the whole body Damipoli for equipping SFX during activation? Play SFX from torso: 190, head: 191, hands: 192, legs: 193 at 1 - 発動中SFXを装備用全身ダミポリを使用するか。1の時に胴:190,頭:191,手:192,脚:193からSFXを再生する
	uint8_t isInitFullbody: 1;

	// NAME: Whole body (at the time of release) - 全身か（解除時）
	// DESC: Do you use the whole body Damipoli for equipping SFX at the time of release? Play SFX from torso: 190, head: 191, hands: 192, legs: 193 at 1 - 解除時SFXを装備用全身ダミポリを使用するか。1の時に胴:190,頭:191,手:192,脚:193からSFXを再生する
	uint8_t isFinishFullbody: 1;

	// NAME: Do you want to display even when the body is dead? - 死体時でも表示を行うか
	// DESC: If ○, VFX will be displayed even when the corpse is dead. - ○の場合、死体時でもVFXが表示されるようになります。
	uint8_t isVisibleDeadChr: 1;

	// NAME: Enchantment SFX size offset adaptation? - エンチャントSFXサイズオフセット適応か
	// DESC: Whether to offset the SfxId according to the "enchantment Sfx size" of the weapon para - 武器パラの「エンチャントSfxサイズ」に従ってSfxIdをオフセットするか
	uint8_t isUseOffsetEnchantSfxSize: 1;

	// NAME: Padding - パディング
	// DESC: Padding - パディング
	uint8_t pad_1: 1;

	// NAME: Decal ID1 - デカールID1
	// DESC: Decal ID 1 (-1: invalid) - デカールID1(-1：無効)
	int32_t decalId1;

	// NAME: Decal ID2 - デカールID2
	// DESC: Decal ID 2 (-1: invalid) - デカールID2(-1：無効)
	int32_t decalId2;

	// NAME: Foot effect priority - フットエフェクト優先度
	// DESC: Foot effect offset priority (lower is higher) - フットエフェクトオフセットの優先度(低いほうが優先)
	uint8_t footEffectPriority;

	// NAME: Foot effect offset - フットエフェクトオフセット
	// DESC: Amount offset to foot effect ID when this special effect is applied - この特殊効果がかかっている場合にフットエフェクトIDにオフセットする量
	uint8_t footEffectOffset;

	// NAME: Sword flash SFX ID offset type - 剣閃SFXIDオフセットタイプ
	// DESC: The offset value applied to the sword flash SFX ID. Used for enchantment and sword trajectory effects - 剣閃SFXIDにかけるオフセット値です。エンチャントと剣の軌跡エフェクトに使われる
	uint8_t traceSfxIdOffsetType;

	// NAME: Forced overwriting of player appearance - プレイヤー見た目強制上書き
	// DESC: A function that can force the appearance of a character to be alive / dead - キャラクターの見た目を強制的に生者/亡者にできる機能
	uint8_t forceDeceasedType;

	// NAME: Enchantment time root Damipoli ID_0 - エンチャント時根元ダミポリID＿０
	// DESC: Damipoli ID generated at the base of enchantment - エンチャント時の根元に発生させるダミポリID
	int32_t enchantStartDmyId_0;

	// NAME: Damipoli ID_0 at the time of enchantment - エンチャント時剣先ダミポリID＿０
	// DESC: Damipoli ID generated at the tip of the sword at the time of enchantment. -1 If specified, it will be automatically put out to the point where it is a serial number. - エンチャント時の剣先に発生させるダミポリID。-1指定で自動的に連番になってるところまで出す。
	int32_t enchantEndDmyId_0;

	// NAME: Enchantment time root Damipoli ID_1 - エンチャント時根元ダミポリID＿１
	// DESC: Damipoli ID generated at the base of enchantment - エンチャント時の根元に発生させるダミポリID
	int32_t enchantStartDmyId_1;

	// NAME: Damipoli ID_1 at the time of enchantment - エンチャント時剣先ダミポリID＿１
	// DESC: Damipoli ID generated at the tip of the sword at the time of enchantment. -1 If specified, it will be automatically put out to the point where it is a serial number. - エンチャント時の剣先に発生させるダミポリID。-1指定で自動的に連番になってるところまで出す。
	int32_t enchantEndDmyId_1;

	// NAME: Enchantment time root Damipoli ID_2 - エンチャント時根元ダミポリID＿２
	// DESC: Damipoli ID generated at the base of enchantment - エンチャント時の根元に発生させるダミポリID
	int32_t enchantStartDmyId_2;

	// NAME: Enchantment time sword tip Damipoli ID_2 - エンチャント時剣先ダミポリID＿２
	// DESC: Damipoli ID generated at the tip of the sword at the time of enchantment. -1 If specified, it will be automatically put out to the point where it is a serial number. - エンチャント時の剣先に発生させるダミポリID。-1指定で自動的に連番になってるところまで出す。
	int32_t enchantEndDmyId_2;

	// NAME: Enchantment time root Damipoli ID_3 - エンチャント時根元ダミポリID＿３
	// DESC: Damipoli ID generated at the base of enchantment - エンチャント時の根元に発生させるダミポリID
	int32_t enchantStartDmyId_3;

	// NAME: Damipoli ID_3 at the time of enchantment - エンチャント時剣先ダミポリID＿３
	// DESC: Damipoli ID generated at the tip of the sword at the time of enchantment. -1 If specified, it will be automatically put out to the point where it is a serial number. - エンチャント時の剣先に発生させるダミポリID。-1指定で自動的に連番になってるところまで出す。
	int32_t enchantEndDmyId_3;

	// NAME: Enchantment time root Damipoli ID_4 - エンチャント時根元ダミポリID＿４
	// DESC: Damipoli ID generated at the base of enchantment - エンチャント時の根元に発生させるダミポリID
	int32_t enchantStartDmyId_4;

	// NAME: Damipoli ID_4 at the time of enchantment - エンチャント時剣先ダミポリID＿４
	// DESC: Damipoli ID generated at the tip of the sword at the time of enchantment. -1 If specified, it will be automatically put out to the point where it is a serial number. - エンチャント時の剣先に発生させるダミポリID。-1指定で自動的に連番になってるところまで出す。
	int32_t enchantEndDmyId_4;

	// NAME: Enchantment time root Damipoli ID_5 - エンチャント時根元ダミポリID＿５
	// DESC: Damipoli ID generated at the base of enchantment - エンチャント時の根元に発生させるダミポリID
	int32_t enchantStartDmyId_5;

	// NAME: Damipoli ID_5 at the time of enchantment - エンチャント時剣先ダミポリID＿５
	// DESC: Damipoli ID generated at the tip of the sword at the time of enchantment. -1 If specified, it will be automatically put out to the point where it is a serial number. - エンチャント時の剣先に発生させるダミポリID。-1指定で自動的に連番になってるところまで出す。
	int32_t enchantEndDmyId_5;

	// NAME: Enchantment time root Damipoli ID_6 - エンチャント時根元ダミポリID＿６
	// DESC: Damipoli ID generated at the base of enchantment - エンチャント時の根元に発生させるダミポリID
	int32_t enchantStartDmyId_6;

	// NAME: Damipoli ID_6 at the time of enchantment - エンチャント時剣先ダミポリID＿６
	// DESC: Damipoli ID generated at the tip of the sword at the time of enchantment. -1 If specified, it will be automatically put out to the point where it is a serial number. - エンチャント時の剣先に発生させるダミポリID。-1指定で自動的に連番になってるところまで出す。
	int32_t enchantEndDmyId_6;

	// NAME: Enchantment time root Damipoli ID_7 - エンチャント時根元ダミポリID＿７
	// DESC: Damipoli ID generated at the base of enchantment - エンチャント時の根元に発生させるダミポリID
	int32_t enchantStartDmyId_7;

	// NAME: Damipoli ID_7 at the time of enchantment - エンチャント時剣先ダミポリID＿７
	// DESC: Damipoli ID generated at the tip of the sword at the time of enchantment. -1 If specified, it will be automatically put out to the point where it is a serial number. - エンチャント時の剣先に発生させるダミポリID。-1指定で自動的に連番になってるところまで出す。
	int32_t enchantEndDmyId_7;

	// NAME: SfxID offset type - SfxIDオフセットタイプ
	// DESC: SfxID offset type - SfxIDオフセットタイプ
	uint8_t SfxIdOffsetType;

	// NAME: Forced specification of phantom parameters - ファントムパラメータ強制指定
	// DESC: Forced overwrite type of phantom parameters - ファントムパラメータの強制上書きタイプ
	uint8_t phantomParamOverwriteType;

	// NAME: Minimum α value when hiding [%] - 姿隠し時最小α値[%]
	// DESC: Minimum α value when hiding [%] - 姿隠し時最小α値[%]
	uint8_t camouflageMinAlpha;

	// NAME: Water wet effect - 水濡れ効果
	// DESC: Generate a wet expression by referring to the wet parameter - ウェットパラメータを参照して水濡れ表現を発生させる
	uint8_t wetAspectType;

	// NAME: Phantom parameter overwrite ID - ファントムパラメータ上書きID
	// DESC: Forced Id of phantom parameter - ファントムパラメータの強制Id
	int32_t phantomParamOverwriteId;

	// NAME: Material extension parameter ID - マテリアル拡張パラメータID
	// DESC: ID0-99 are GS reservation IDs. If ID100 or later is specified, the material extension parameter is referenced (-1: invalid value). - ID0～99はGSの予約IDです。ID100以降を指定した場合、マテリアル拡張パラメータを参照します（-1：無効値）
	int32_t materialParamId;

	// NAME: Initial values of material parameters - マテリアルパラメータの初期値
	// DESC: The value at the start of the fade of the material parameter. The target is specified by the material parameter ID. If the material parameter ID is -1, do nothing - マテリアルパラメータのフェード開始時の値。対象はマテリアルパラメータIDで指定する。マテリアルパラメータIDが -1 なら何もしない
	float materialParamInitValue;

	// NAME: Material parameter target value - マテリアルパラメータの目標値
	// DESC: The value at the end of the fade of the material parameter. The target is specified by the material parameter ID. If the material parameter ID is -1, do nothing - マテリアルパラメータのフェード終了時の値。対象はマテリアルパラメータIDで指定する。マテリアルパラメータIDが -1 なら何もしない
	float materialParamTargetValue;

	// NAME: Fade time of material parameter values - マテリアルパラメータ値のフェード時間
	// DESC: Fade time for material parameter values. Gradually reach the target value over this time. If the material parameter ID is -1, do nothing - マテリアルパラメータ値のフェード時間。この時間かけて徐々に目標値へ行く。マテリアルパラメータIDが -1 なら何もしない
	float materialParamFadeTime;

	// NAME: Foot Decal Material Offset Forced Overwrite ID - フットデカール材質オフセット強制上書きID 
	// DESC: Forcibly rewrite the floor material ID offset of the foot decal (-1 unused) - フットデカールの床材質IDオフセットを強制的に書き換える（-1未使用）
	int16_t footDecalMaterialOffsetOverwriteId;

	// NAME: Padding - パディング
	// DESC: Padding - パディング
	uint8_t pad[14];
};

#endif
