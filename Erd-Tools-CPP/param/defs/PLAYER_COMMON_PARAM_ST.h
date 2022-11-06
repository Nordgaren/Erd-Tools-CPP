/* This file was automatically generated from XML paramdefs. */
#ifndef _PARAMDEF_PLAYER_COMMON_PARAM_ST_H
#define _PARAMDEF_PLAYER_COMMON_PARAM_ST_H
#pragma once
#include <inttypes.h>

// Data Version: 1
// Is Big Endian: False
// Is Unicode: True
// Format Version: 203
struct PLAYER_COMMON_PARAM_ST {

	// NAME: Player's automatic foot effect SFX identifier [3 digits] - プレイヤーの自動フットエフェクトのSFX識別子[3桁]
	// DESC: The identifier used for the SFX ID of the automatic foot effect. It corresponds to ZZZ of XYYZZZ. - 自動フットエフェクトのSFXIDに使われる識別子です。XYYZZZのZZZにあたります。
	int32_t playerFootEffect_bySFX;

	// NAME: Player hidden fade time during precision shooting - 精密射撃時プレイヤー非表示フェード時間
	// DESC: The fade time when hiding the player during precision shooting. The unit is seconds - 精密射撃時にプレイヤーを非表示にするときのフェード時間です。単位は秒
	float snipeModeDrawAlpha_FadeTime;

	// NAME: Player toughness recovery time correction value - プレイヤー強靭度 回復時間補正値
	// DESC: A correction value used to calculate the player's toughness recovery time. - プレイヤーの強靭度回復時間の計算に使われる補正値です。
	float toughnessRecoverCorrection;

	// NAME: Magic memory slot initial value - 魔法記憶スロット初期値
	// DESC: Magic memory slot initial value - 魔法記憶スロット初期値
	uint8_t baseMagicSlotSize;

	// NAME: Talisman equipment slot initial value - タリスマン装備スロット初期値
	// DESC: Talisman equipment slot initial value - タリスマン装備スロット初期値
	uint8_t baseAccSlotNum;

	// NAME: reserve - 予約
	// DESC: (dummy8) - (dummy8)
	uint8_t reserved02[2];

	// NAME: Drop item acquisition animation ID - ドロップアイテム取得アニメーションID
	// DESC: Animation ID when picking up a drop item - ドロップアイテムを拾った時のアニメーションID
	int32_t animeID_DropItemPick;

	// NAME: Player resistance value recovery amount_sleep [point / s] - プレイヤー耐性値回復量_睡眠[point/s]
	// DESC: Player resistance value recovery amount_sleep [point / s] - プレイヤー耐性値回復量_睡眠[point/s]
	float resistRecoverPoint_Sleep_Player;

	// NAME: Flare overwrite induction performance [deg / s] - フレア上書き誘導性能[deg/s]
	// DESC: Flare overwrite guidance performance [deg / s] (-1: no overwrite) - フレア上書き誘導性能[deg/s](-1:上書きなし)
	int32_t flareOverrideHomingAngle;

	// NAME: Flare overwrite guidance stop distance [m] - フレア上書き誘導停止距離[m]
	// DESC: Flare overwrite guidance stop distance [m] (-1: no overwrite) - フレア上書き誘導停止距離[m](-1:上書きなし)
	float flareOverrideHomingStopRange;

	// NAME: Animation ID when acquiring Nemuri item - ネムリアイテム取得時のアニメーションID
	// DESC: Animation ID when acquiring Nemuri item - ネムリアイテム取得時のアニメーションID
	int32_t animeID_SleepCollectorItemPick;

	// NAME: Weapon attribute ban event flag base ID - 武器属性解禁イベントフラグベースID
	// DESC: Weapon attribute ban event flag base ID - 武器属性解禁イベントフラグベースID
	uint32_t unlockEventFlagBaseId_forWepAttr;

	// NAME: Special effect ID for activating large runes via the system - システム経由大ルーン発動用特殊効果ID
	// DESC: Special effect Id to call when a large rune is activated from the system - システムからの大ルーン発動の際に呼び出す特殊効果Id
	int32_t systemEnchant_BigRune;

	// NAME: Insufficient status Basic attack power reduction - ステータス不足 基本攻撃力低下量
	// DESC: Insufficient status Basic attack power reduction - ステータス不足 基本攻撃力低下量
	float lowStatus_AtkPowDown;

	// NAME: Insufficient status Stamina consumption ratio - ステータス不足 スタミナ消費倍率
	// DESC: Insufficient status Stamina consumption ratio - ステータス不足 スタミナ消費倍率
	float lowStatus_ConsumeStaminaRate;

	// NAME: Insufficient status Playing attack power - ステータス不足 弾き攻撃力
	// DESC: Insufficient status Playing attack power - ステータス不足 弾き攻撃力
	int16_t lowStatus_AtkGuardBreak;

	// NAME: Shield status correction Judgment status maximum value - 盾ステータス補正 判定ステータス最大値
	// DESC: Maximum status value to increase performance used when calculating the status correction value of shield performance - 盾の性能のステータス補正値を計算するときに使う、性能が上昇する最大ステータス値
	int16_t guardStatusCorrect_MaxStatusVal;

	// NAME: Weapon attribute ban event flag number of steps - 武器属性解禁イベントフラグステップ数
	// DESC: How much space is left for each weapon attribute ID from the base ID. Weapon attribute ban event flag ID = << Weapon attribute ban event flag base ID >> + Weapon attribute ID x << Weapon attribute ban event flag number of steps >> - ベースIDから武器属性IDごとにどのぐらい間隔を空けるか。武器属性解禁イベントフラグID＝《武器属性解禁イベントフラグベースID》＋武器属性ID×《武器属性解禁イベントフラグステップ数》
	uint16_t unlockEventFlagStepNum_forWepAttr;

	// NAME: Causal Retribution_Number of Damages Before Counterattack - 因果応報_反撃までの被ダメージ回数
	// DESC: Causal Retribution_Number of Damages Before Counterattack - 因果応報_反撃までの被ダメージ回数
	uint16_t retributionMagic_damageCountNum;

	// NAME: Causal response_Number of damages until counterattack Duration [s] - 因果応報_反撃までの被ダメージ回数存続時間[s]
	// DESC: Causal response_Number of damages until counterattack Duration [s] - 因果応報_反撃までの被ダメージ回数存続時間[s]
	uint16_t retributionMagic_damageCountRemainTime;

	// NAME: Causal Retribution_Counterattack Magic Damipoli ID - 因果応報_反撃魔法ダミポリID
	// DESC: Causal Retribution_Counterattack Magic Damipoli ID - 因果応報_反撃魔法ダミポリID
	uint16_t retributionMagic_burstDmypolyId;

	// NAME: Causal Retribution_Counterattack Magic Param ID - 因果応報_反撃魔法パラムID
	// DESC: Causal Retribution_Counterattack Magic Param ID - 因果応報_反撃魔法パラムID
	int32_t retributionMagic_burstMagicParamId;

	// NAME: Riding precision shooting camera offset height - 騎乗精密射撃カメラオフセット高さ
	// DESC: Riding precision shooting camera offset height - 騎乗精密射撃カメラオフセット高さ
	float chrAimCam_rideOffsetHeight;

	// NAME: reserve - 予約
	// DESC: (dummy8) - (dummy8)
	uint8_t reserved23[4];

	// NAME: Quiver adsorption Damipoly ID - 矢筒の吸着ダミポリID
	// DESC: Quiver adsorption Damipoly ID - 矢筒の吸着ダミポリID
	int32_t arrowCaseWepBindDmypolyId;

	// NAME: Bolt tube adsorption Damipoly ID - ボルト筒の吸着ダミポリID
	// DESC: Bolt cylinder adsorption Damipoly ID (However, if the bolt cylinder is used alone, the quiver Damipoly ID is used) - ボルト筒の吸着ダミポリID（ただしボルト筒単独の場合は矢筒のダミポリIDが使われる）
	int32_t boltPouchWepBindDmypolyId;

	// NAME: Multi-time client bottle correction magnification - マルチ時クライアント瓶補正倍率
	// DESC: Multi-time client bottle correction magnification (0.5 specified to halve the number of possessions) - マルチ時クライアント瓶補正倍率(0.5指定で所持数半分に)
	float estusFlaskAllocateRate;

	// NAME: reserve - 予約
	// DESC: (dummy8) - (dummy8)
	uint8_t reserved38[2];

	// NAME: Angle at which a kick can be taken when viewed from the front of the player - プレイヤー正面から見てキックを出せる角度
	// DESC: Angle at which a kick can be taken when viewed from the front of the player - プレイヤー正面から見てキックを出せる角度
	uint8_t kickAcceptanceDeg;

	// NAME: Analog Weight Ratio for NPC Players_Lightweight - NPCプレイヤー用アナログ重量比率_軽量
	// DESC: Analog weight ratio for NPC players [%]. lightweight. - NPCプレイヤー用アナログ重量比率[%]。軽量。
	uint8_t npcPlayerAnalogWeightRate_Light;

	// NAME: Analog Weight Ratio for NPC Players_Medium Weight - NPCプレイヤー用アナログ重量比率_中量
	// DESC: Analog weight ratio for NPC players [%]. Medium weight. - NPCプレイヤー用アナログ重量比率[%]。中量。
	uint8_t npcPlayerAnalogWeightRate_Normal;

	// NAME: Analog Weight Ratio for NPC Players_Weight - NPCプレイヤー用アナログ重量比率_重量
	// DESC: Analog weight ratio for NPC players [%]. weight. - NPCプレイヤー用アナログ重量比率[%]。重量。
	uint8_t npcPlayerAnalogWeightRate_Heavy;

	// NAME: Analog Weight Ratio for NPC Players_Overweight - NPCプレイヤー用アナログ重量比率_重量過多
	// DESC: Analog weight ratio for NPC players [%]. Overweight. - NPCプレイヤー用アナログ重量比率[%]。重量過多。
	uint8_t npcPlayerAnalogWeightRate_WeightOver;

	// NAME: Analog Weight Ratio for NPC Players_Ultra Lightweight - NPCプレイヤー用アナログ重量比率_超軽量
	// DESC: Analog weight ratio for NPC players [%]. Super lightweight. - NPCプレイヤー用アナログ重量比率[%]。超軽量。
	uint8_t npcPlayerAnalogWeightRate_SuperLight;

	// NAME: reserve - 予約
	// DESC: (dummy8) - (dummy8)
	uint8_t reserved45[4];

	// NAME: Orbit correction special effect standard ID - 周回補正特殊効果基準ID
	// DESC: Criteria ID for special effects applied for lap correction - 周回補正のためにかける特殊効果の基準ID
	int32_t clearCountCorrectBaseSpEffectId;

	// NAME: Arrow, bolt model Id offset - 矢、ボルトのモデルIdオフセット
	// DESC: Offset added to the model ID when equipped in slot 1 when displaying the arrow and bolt models. (Model Id + offset value) - 矢、ボルトモデルを表示する際に、スロット１に装備された場合のモデルIDに加えるオフセット。（モデルId+オフセット値）
	int32_t arrowBoltModelIdOffset;

	// NAME: Threshold for the remaining number of model masks based on the remaining amount of arrows and bolts _1 step [%] - 矢、ボルトの残量によるモデルマスクの残数閾値_1段階[%]
	// DESC: When displaying the arrow and bolt models, the one-step judgment value [%] of the threshold value when applying the display mask by the number. (If it is more than this value, it is displayed in one step) - 矢、ボルトモデルを表示する際に、本数による表示マスクをかけるときの閾値の１段階判定値[%]。（この値より多ければ１段階表示）
	int8_t arrowBoltRemainingNumModelMaskThreshold1;

	// NAME: Threshold for the remaining number of model masks based on the remaining amount of arrows and bolts _2 steps [%] - 矢、ボルトの残量によるモデルマスクの残数閾値_2段階[%]
	// DESC: Two-step judgment value [%] of the threshold value when applying a display mask based on the number of arrows and bolt models. (If it is more than this value, it is displayed in 2 steps) - 矢、ボルトモデルを表示する際に、本数による表示マスクをかけるときの閾値の２段階判定値[%]。（この値より多ければ２段階表示）
	int8_t arrowBoltRemainingNumModelMaskThreshold2;

	// NAME: reserve - 予約
	// DESC: (dummy8) - (dummy8)
	uint8_t reserved27[2];

	// NAME: Player resistance recovery amount_poison [point / s] - プレイヤー耐性値回復量_毒[point/s]
	// DESC: Player resistance recovery amount_poison [point / s] - プレイヤー耐性値回復量_毒[point/s]
	float resistRecoverPoint_Poision_Player;

	// NAME: Player resistance value recovery amount_plague [point / s] - プレイヤー耐性値回復量_疫病[point/s]
	// DESC: Player resistance value recovery amount_plague [point / s] - プレイヤー耐性値回復量_疫病[point/s]
	float resistRecoverPoint_Desease_Player;

	// NAME: Player resistance recovery amount_bleeding [point / s] - プレイヤー耐性値回復量_出血[point/s]
	// DESC: Player resistance recovery amount_bleeding [point / s] - プレイヤー耐性値回復量_出血[point/s]
	float resistRecoverPoint_Blood_Player;

	// NAME: Player resistance recovery amount_curse [point / s] - プレイヤー耐性値回復量_呪い[point/s]
	// DESC: Player resistance recovery amount_curse [point / s] - プレイヤー耐性値回復量_呪い[point/s]
	float resistRecoverPoint_Curse_Player;

	// NAME: Player resistance value recovery amount_cold air [point / s] - プレイヤー耐性値回復量_冷気[point/s]
	// DESC: Player resistance value recovery amount_cold air [point / s] - プレイヤー耐性値回復量_冷気[point/s]
	float resistRecoverPoint_Freeze_Player;

	// NAME: Enemy resistance recovery amount_poison [point / s] - 敵耐性値回復量_毒[point/s]
	// DESC: Enemy resistance recovery amount_poison [point / s] - 敵耐性値回復量_毒[point/s]
	float resistRecoverPoint_Poision_Enemy;

	// NAME: Enemy resistance value recovery amount_plague [point / s] - 敵耐性値回復量_疫病[point/s]
	// DESC: Enemy resistance value recovery amount_plague [point / s] - 敵耐性値回復量_疫病[point/s]
	float resistRecoverPoint_Desease_Enemy;

	// NAME: Enemy resistance recovery amount_bleeding [point / s] - 敵耐性値回復量_出血[point/s]
	// DESC: Enemy resistance recovery amount_bleeding [point / s] - 敵耐性値回復量_出血[point/s]
	float resistRecoverPoint_Blood_Enemy;

	// NAME: Enemy resistance recovery amount_curse [point / s] - 敵耐性値回復量_呪い[point/s]
	// DESC: Enemy resistance recovery amount_curse [point / s] - 敵耐性値回復量_呪い[point/s]
	float resistRecoverPoint_Curse_Enemy;

	// NAME: Enemy resistance value recovery amount_cold air [point / s] - 敵耐性値回復量_冷気[point/s]
	// DESC: Enemy resistance value recovery amount_cold air [point / s] - 敵耐性値回復量_冷気[point/s]
	float resistRecoverPoint_Freeze_Enemy;

	// NAME: Left hand two-handed request button long press time [s] - 左手両手持ちリクエストのボタン長押し時間[s]
	// DESC: Button input time when holding both left hand - 左手両手持ちするときのボタン入力時間
	float requestTimeLeftBothHand;

	// NAME: Player resistance value recovery amount_madness [point / s] - プレイヤー耐性値回復量_発狂[point/s]
	// DESC: Player resistance value recovery amount_madness [point / s] - プレイヤー耐性値回復量_発狂[point/s]
	float resistRecoverPoint_Madness_Player;

	// NAME: Material Item acquisition animation ID - 素材アイテム取得アニメーションID
	// DESC: Animation ID when picking up a material item - 素材アイテムを拾った時のアニメーションID
	int32_t animeID_MaterialItemPick;

	// NAME: Yellow Cloth HP Est Bottle Correction Magnification - 黄衣HPエスト瓶補正倍率 
	// DESC: Yellow Cloth HP Est Bottle Correction Magnification - 黄衣HPエスト瓶補正倍率 
	float hpEstusFlaskAllocateRateForYellowMonk;

	// NAME: Yellow Cloth HP Est Bottle Offset - 黄衣HPエスト瓶オフセット
	// DESC: Yellow Cloth HP Est Bottle Offset - 黄衣HPエスト瓶オフセット
	int32_t hpEstusFlaskAllocateOffsetForYellowMonk;

	// NAME: Yellow Cloth MP Est Bottle Correction Magnification - 黄衣MPエスト瓶補正倍率
	// DESC: Yellow Cloth MP Est Bottle Correction Magnification - 黄衣MPエスト瓶補正倍率
	float mpEstusFlaskAllocateRateForYellowMonk;

	// NAME: Yellow Cloth MP Est Bottle Offset - 黄衣MPエスト瓶オフセット
	// DESC: Yellow Cloth MP Est Bottle Offset - 黄衣MPエスト瓶オフセット
	int32_t mpEstusFlaskAllocateOffsetForYellowMonk;

	// NAME: Enemy resistance value recovery amount_sleep [point / s] - 敵耐性値回復量_睡眠[point/s]
	// DESC: Enemy resistance value recovery amount_sleep [point / s] - 敵耐性値回復量_睡眠[point/s]
	float resistRecoverPoint_Sleep_Enemy;

	// NAME: Enemy resistance value recovery amount_madness [point / s] - 敵耐性値回復量_発狂[point/s]
	// DESC: Enemy resistance value recovery amount_madness [point / s] - 敵耐性値回復量_発狂[point/s]
	float resistRecoverPoint_Madness_Enemy;

	// NAME: Abnormal condition_immediate death_immediate death Item ID - 状態異常_即死_即死アイテムID
	// DESC: Abnormal condition_immediate death_immediate death Item ID - 状態異常_即死_即死アイテムID
	int32_t resistCurseItemId;

	// NAME: Abnormal condition_immediate death_maximum number of instant death items - 状態異常_即死_即死アイテム最大数
	// DESC: Abnormal condition_immediate death_maximum number of instant death items - 状態異常_即死_即死アイテム最大数
	uint8_t resistCurseItemMaxNum;

	// NAME: reserve - 予約
	// DESC: (dummy8) - (dummy8)
	uint8_t reserved_123[3];

	// NAME: Abnormal condition_Instant death_Instant death Item possession Special effect base ID - 状態異常_即死_即死アイテム所持特殊効果ベースID
	// DESC: Abnormal condition_Instant death_Instant death Item possession Special effect base ID - 状態異常_即死_即死アイテム所持特殊効果ベースID
	int32_t resistCurseItemSpEffectBaseId;

	// NAME: Abnormal condition_immediate death_immediate death item lottery ID_for map - 状態異常_即死_即死時アイテム抽選ID_マップ用
	// DESC: Abnormal condition_immediate death_immediate death item lottery ID_for map - 状態異常_即死_即死時アイテム抽選ID_マップ用
	int32_t resistCurseItemLotParamId_map;

	// NAME: reserve - 予約
	// DESC: (dummy8) - (dummy8)
	uint8_t reserved41[52];
};

#endif
