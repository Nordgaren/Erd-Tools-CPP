/* This file was automatically generated from XML paramdefs. */
#ifndef _PARAMDEF_ATK_PARAM_ST_H
#define _PARAMDEF_ATK_PARAM_ST_H
#pragma once
#include <inttypes.h>

// Data Version: 4
// Is Big Endian: False
// Is Unicode: True
// Format Version: 203
struct ATK_PARAM_ST {

	// NAME: 0 radius per - あたり0 半径
	// DESC: Sphere, capsule radius - 球、カプセルの半径
	float hit0_Radius;

	// NAME: 1 radius per - あたり1 半径
	// DESC: Sphere, capsule radius - 球、カプセルの半径
	float hit1_Radius;

	// NAME: 2 radii per - あたり2 半径
	// DESC: Sphere, capsule radius - 球、カプセルの半径
	float hit2_Radius;

	// NAME: 3 radii per - あたり3 半径
	// DESC: Sphere, capsule radius - 球、カプセルの半径
	float hit3_Radius;

	// NAME: Knockback distance [m] - ノックバック距離[m]
	// DESC: Knockback distance [m] - ノックバック距離[m]
	float knockbackDist;

	// NAME: Hit stop time [s] - ヒットストップ時間[s]
	// DESC: Hit stop stop time [s] - ヒットストップの停止時間[s]
	float hitStopTime;

	// NAME: Special effects 0 - 特殊効果0
	// DESC: Enter the ID created with the special effects parameter - 特殊効果パラメータで作成したＩＤを入れる
	int32_t spEffectId0;

	// NAME: Special effect 1 - 特殊効果1
	// DESC: Enter the ID created with the special effects parameter - 特殊効果パラメータで作成したＩＤを入れる
	int32_t spEffectId1;

	// NAME: Special effect 2 - 特殊効果2
	// DESC: Enter the ID created with the special effects parameter - 特殊効果パラメータで作成したＩＤを入れる
	int32_t spEffectId2;

	// NAME: Special effect 3 - 特殊効果3
	// DESC: Enter the ID created with the special effects parameter - 特殊効果パラメータで作成したＩＤを入れる
	int32_t spEffectId3;

	// NAME: Special effect 4 - 特殊効果4
	// DESC: Enter the ID created with the special effects parameter - 特殊効果パラメータで作成したＩＤを入れる
	int32_t spEffectId4;

	// NAME: Per 0 Damipoli 1 - あたり0 ダミポリ1
	// DESC: Damipoli in sphere, capsule position - 球、カプセル位置のダミポリ
	int16_t hit0_DmyPoly1;

	// NAME: 1 per Damipoli 1 - あたり1 ダミポリ1
	// DESC: Damipoli in sphere, capsule position - 球、カプセル位置のダミポリ
	int16_t hit1_DmyPoly1;

	// NAME: 2 per Damipoli 1 - あたり2 ダミポリ1
	// DESC: Damipoli in sphere, capsule position - 球、カプセル位置のダミポリ
	int16_t hit2_DmyPoly1;

	// NAME: 3 per Damipoli 1 - あたり3 ダミポリ1
	// DESC: Damipoli in sphere, capsule position - 球、カプセル位置のダミポリ
	int16_t hit3_DmyPoly1;

	// NAME: Per 0 Damipoli 2 - あたり0 ダミポリ2
	// DESC: The position of another point on the capsule Damipoli. -1 makes it a sphere - カプセルのもうひとつの点の位置ダミポリ。-1だと球になる
	int16_t hit0_DmyPoly2;

	// NAME: 1 per Damipoli 2 - あたり1 ダミポリ2
	// DESC: The position of another point on the capsule Damipoli. -1 makes it a sphere - カプセルのもうひとつの点の位置ダミポリ。-1だと球になる
	int16_t hit1_DmyPoly2;

	// NAME: 2 per Damipoli 2 - あたり2 ダミポリ2
	// DESC: The position of another point on the capsule Damipoli. -1 makes it a sphere - カプセルのもうひとつの点の位置ダミポリ。-1だと球になる
	int16_t hit2_DmyPoly2;

	// NAME: 3 per Damipoli 2 - あたり3 ダミポリ2
	// DESC: The position of another point on the capsule Damipoli. -1 makes it a sphere - カプセルのもうひとつの点の位置ダミポリ。-1だと球になる
	int16_t hit3_DmyPoly2;

	// NAME: Blow-off correction value - 吹き飛ばし補正値
	// DESC: Correction value when blowing off - 吹き飛ばす時の補正値
	uint16_t blowingCorrection;

	// NAME: Physical attack power correction value - 物理攻撃力補正値
	// DESC: PC only. Multiplier by multiplying the basic physical attack power - PCのみ。物理攻撃力基本値に掛ける倍率
	uint16_t atkPhysCorrection;

	// NAME: Magic attack power correction value - 魔法攻撃力補正値
	// DESC: PC only. Multiply the magic attack power (in the case of a bow, correct the missile) - PCのみ。魔法攻撃力に掛ける倍率（弓の場合は、飛び道具を補正）
	uint16_t atkMagCorrection;

	// NAME: Fire attack power correction value - 炎攻撃力補正値
	// DESC: PC only. Multiply the fire attack power (in the case of a bow, correct the missile) - PCのみ。炎攻撃力に掛ける倍率（弓の場合は、飛び道具を補正）
	uint16_t atkFireCorrection;

	// NAME: Electric shock attack power correction value - 電撃攻撃力補正値
	// DESC: PC only. Multiplier for electric shock attack power (in the case of a bow, correct the missile) - PCのみ。電撃攻撃力に掛ける倍率（弓の場合は、飛び道具を補正）
	uint16_t atkThunCorrection;

	// NAME: Stamina attack power correction value - スタミナ攻撃力補正値
	// DESC: PC only. Multiplier for stamina attack power - PCのみ。スタミナ攻撃力に掛ける倍率
	uint16_t atkStamCorrection;

	// NAME: Repellent attack power correction value - はじき攻撃力補正値
	// DESC: PC only. 1 only - PCのみ。1のみ
	uint16_t guardAtkRateCorrection;

	// NAME: Repellent defense correction value - はじき防御力補正値
	// DESC: PC only. Multiplying the base value by the repelling of the attack - PCのみ。攻撃のはじかれ基本値に掛ける倍率
	uint16_t guardBreakCorrection;

	// NAME: Throw-through attack power correction value - 投げ抜け攻撃力補正値
	// DESC: Weapon correction value for throw-through attacks - 投げ抜け攻撃に対する武器補正値
	uint16_t atkThrowEscapeCorrection;

	// NAME: Subcategory 1 - サブカテゴリ1
	// DESC: Subcategory 1 - サブカテゴリ1
	uint8_t subCategory1;

	// NAME: Subcategory 2 - サブカテゴリ2
	// DESC: Subcategory 2 - サブカテゴリ2
	uint8_t subCategory2;

	// NAME: Physical attack power - 物理攻撃力
	// DESC: NPCs only. Basic damage of physical attack - NPCのみ。物理攻撃の基本ダメージ
	uint16_t atkPhys;

	// NAME: Magic attack power - 魔法攻撃力
	// DESC: NPCs only. Additional damage from magic attacks - NPCのみ。魔法攻撃の追加ダメージ
	uint16_t atkMag;

	// NAME: Fire attack power - 炎攻撃力
	// DESC: NPCs only. Additional damage from fire attacks - NPCのみ。炎攻撃の追加ダメージ
	uint16_t atkFire;

	// NAME: Electric shock attack power - 電撃攻撃力
	// DESC: NPCs only. Additional damage from electric shock attacks - NPCのみ。電撃攻撃の追加ダメージ
	uint16_t atkThun;

	// NAME: Stamina attack power - スタミナ攻撃力
	// DESC: NPCs only. Amount of damage to enemy (player) stamina - NPCのみ。敵（プレイヤー）のスタミナに対するダメージ量
	uint16_t atkStam;

	// NAME: Repellent attack power - はじき攻撃力
	// DESC: NPCs only. Flick value - NPCのみ。はじき値
	uint16_t guardAtkRate;

	// NAME: Repellent defense - はじき防御力
	// DESC: NPCs only. Value used to determine if an attack is repelled - NPCのみ。攻撃がはじかれるかどうかの判定に利用する値
	uint16_t guardBreakRate;

	// NAME: pad - pad
	uint8_t pad6[1];

	// NAME: Can damage bushes - 茂みにダメージ可
	// DESC: Do you want to calculate damage for assets that are "Break due to bush damage"? To set. 〇: Calculate, ×: Do not calculate (that is, you cannot inflict damage) [GR] SEQ20617 - 「茂みダメージで壊れるか」ONのアセットに対してダメージ計算をするか？を設定します。〇：計算する、×：計算しない(つまりダメージをあたえることはできない)【GR】SEQ20617 
	uint8_t isEnableCalcDamageForBushesObj;

	// NAME: Throw-through attack power - 投げ抜け攻撃力
	// DESC: Throw-through attack power - 投げ抜け攻撃力
	uint16_t atkThrowEscape;

	// NAME: Object attack power - オブジェ攻撃力
	// DESC: Attack power against OBJ - ＯＢＪに対する攻撃力
	uint16_t atkObj;

	// NAME: Stamina cut rate correction when guarding - ガード時スタミナカット率補正
	// DESC: Correct the [stamina cut rate when guarding] set in the weapon parameter and NPC parameter. - 武器パラメータ、ＮＰＣパラメータに設定されている【ガード時スタミナカット率】を補正する
	int16_t guardStaminaCutRate;

	// NAME: Guard magnification - ガード倍率
	// DESC: NPC, the guard performance set in the weapon parameter is uniformly corrected. 0, 1x / 100, 2x / -100, guard multiplier = (guard multiplier / 100) to increase / decrease the parameter to 0. + 1) - ＮＰＣ、武器パラメータで設定してあるガード性能を一律で補正を掛ける0で、1倍／100で、2倍／－100で、0　にパラメータが増減するようにするガード倍率　=　（ガード倍率/100　+　1）
	int16_t guardRate;

	// NAME: Throw type ID - 投げタイプID
	// DESC: ID associated with the throw parameter - 投げパラメータと紐付けされているID
	uint16_t throwTypeId;

	// NAME: 0 parts per - あたり0 部位
	// DESC: Hit part - あたり部位
	uint8_t hit0_hitType;

	// NAME: 1 part per part - あたり1 部位
	// DESC: Hit part - あたり部位
	uint8_t hit1_hitType;

	// NAME: 2 parts per - あたり2 部位
	// DESC: Hit part - あたり部位
	uint8_t hit2_hitType;

	// NAME: 3 parts per - あたり3 部位
	// DESC: Hit part - あたり部位
	uint8_t hit3_hitType;

	// NAME: 0 Priority per - あたり0 優先順位
	// DESC: priority. If there are two or more hits at the same time, the one with the higher priority will be adopted. - 優先度。同時に2つ以上のあたりがあたった場合、優先度が高いほうを採用する。
	uint8_t hti0_Priority;

	// NAME: 1 priority per - あたり1 優先順位
	// DESC: priority. If there are two or more hits at the same time, the one with the higher priority will be adopted. - 優先度。同時に2つ以上のあたりがあたった場合、優先度が高いほうを採用する。
	uint8_t hti1_Priority;

	// NAME: 2 priorities per - あたり2 優先順位
	// DESC: priority. If there are two or more hits at the same time, the one with the higher priority will be adopted. - 優先度。同時に2つ以上のあたりがあたった場合、優先度が高いほうを採用する。
	uint8_t hti2_Priority;

	// NAME: 3 priorities per - あたり3 優先順位
	// DESC: priority. If there are two or more hits at the same time, the one with the higher priority will be adopted. - 優先度。同時に2つ以上のあたりがあたった場合、優先度が高いほうを採用する。
	uint8_t hti3_Priority;

	// NAME: Damage level - ダメージレベル
	// DESC: Which damage motion should be played against the enemy when attacking? To decide. - 攻撃したとき、敵にどのダメージモーションを再生するか？を決める.
	uint8_t dmgLevel;

	// NAME: See per map - マップあたり参照
	// DESC: Which map do you see around the attack? The set - 攻撃あたりが、どのマップあたりを見るか？を設定
	uint8_t mapHitType;

	// NAME: Guard cut rate invalidation factor - ガードカット率無効化倍率
	// DESC: Guard cut rate invalidation ratio (-100 to 100) → Normal at 0 / Completely invalidated at -100 / Doubles the defense effect of the opponent at 100 → -50, 100% cut shield becomes 50% cut Become  - ガードカット率無効化倍率（－100～100）　→0のとき通常／－100で完全無効化／100で相手の防御効果倍増 　→－50とすれば、100％カットの盾が、50％カットになります 
	int8_t guardCutCancelRate;

	// NAME: Physical attributes - 物理属性
	// DESC: Physical attributes to set for attacks - 攻撃に設定する物理属性
	uint8_t atkAttribute;

	// NAME: Special attributes - 特殊属性
	// DESC: Special attributes to set for attacks - 攻撃に設定する特殊属性
	uint8_t spAttribute;

	// NAME: Attack attribute [SFX / SE] - 攻撃属性[SFX/SE]
	// DESC: Specify SFX / SE at the time of attack (1 set by attribute, material, size) - 攻撃時のSFX/SEを指定(属性、材質、サイズで1セット)
	uint8_t atkType;

	// NAME: Attack material [SFX / SE] - 攻撃材質[SFX/SE]
	// DESC: Specify SFX / SE at the time of attack (1 set by attribute, material, size) - 攻撃時のSFX/SEを指定(属性、材質、サイズで1セット)
	uint8_t atkMaterial;

	// NAME: Guard judgment position - ガード判定位置
	// DESC: Guard judgment position - ガード判定位置
	uint8_t guardRangeType;

	// NAME: Defensive material 1 [SE] - 防御材質1[SE]
	// DESC: Used for SE when guarding 1 - ガード時のSEに使用1
	uint16_t defSeMaterial1;

	// NAME: Source per - あたり発生源
	// DESC: Where do you get the Damipoli ID per attack? To specify - 攻撃あたりのダミポリＩＤをどこから取ってくるか？を指定する
	uint8_t hitSourceType;

	// NAME: Throw - 投げ
	// DESC: Flag used for throwing information - 投げ情報に用いるフラグ
	uint8_t throwFlag;

	// NAME: Unguardable flag - ガード不可フラグ
	// DESC: If 1, ignore the guard on the guard side and enter the damage level - 1の場合、ガード側のガードを無視して、ダメージレベルを入れる
	uint8_t disableGuard: 1;

	// NAME: Stamina does not decrease - スタミナ減らない
	// DESC: "Destruction judgment" is performed by stamina attack power, but stamina is not actually reduced. - スタミナ攻撃力による「崩され判定」は行うが、実際にスタミナは減らさない
	uint8_t disableStaminaAttack: 1;

	// NAME: Special effects disabled on hit - ヒット時特殊効果無効
	// DESC: Disables special effects when an attack hits. SCE bug countermeasures - 攻撃ヒットしたときの特殊効果を無効にします。SCEバグ対策
	uint8_t disableHitSpEffect: 1;

	// NAME: Do not notify AI of missed swing - AIに空振り通知しない
	// DESC: Do not notify AI of missed swing - AIに空振り通知しない
	uint8_t IgnoreNotifyMissSwingForAI: 1;

	// NAME: Do you issue SFX many times during HIT? - ＨＩＴ時にＳＦＸを何度も出すか
	// DESC: Enemy only: Does SFX occur continuously when hitting a wall? - 敵専用：壁Hit時のSFXが連続で発生するか
	uint8_t repeatHitSfx: 1;

	// NAME: Is it an arrow attack? - 矢攻撃か
	// DESC: Used for site damage judgment. - 部位ダメージ判定に使用する。
	uint8_t isArrowAtk: 1;

	// NAME: Is it a ghost attack? - 霊体攻撃か
	// DESC: Used for determining spirit damage. - 霊体ダメージ判定に使用。
	uint8_t isGhostAtk: 1;

	// NAME: Do you penetrate invincible - 無敵を貫通するか
	// DESC: Ignore invincible effects such as steps, TAE's complete invincibility cannot be ignored. - ステップ等の無敵効果を無視します、TAEの完全無敵は無視できません。
	uint8_t isDisableNoDamage: 1;

	// NAME: Attack strength [SFX] - 攻撃強度[SFX]
	// DESC: Attack strength [SFX] - 攻撃強度[SFX]
	int8_t atkPow_forSfx;

	// NAME: Attack direction [SFX] - 攻撃方向[SFX]
	// DESC: Attack direction [SFX] - 攻撃方向[SFX]
	int8_t atkDir_forSfx;

	// NAME: Target: ● Hostile - 対象：●敵対
	// DESC: Target: ● Hostile - 対象：●敵対
	uint8_t opposeTarget: 1;

	// NAME: Target: ○ Allies - 対象：○味方
	// DESC: Target: ○ Allies - 対象：○味方
	uint8_t friendlyTarget: 1;

	// NAME: Target: myself - 対象：自分
	// DESC: Target: myself - 対象：自分
	uint8_t selfTarget: 1;

	// NAME: Do you want to check the door penetration? - 扉貫通チェックを行うか
	// DESC: Whether to check the door penetration. In the case of ○, it is judged whether or not the target through the door can be attacked. - 扉貫通チェックを行うかどうか。○の場合は扉越しの対象を攻撃できるかどうかの判定を行います。
	uint8_t isCheckDoorPenetration: 1;

	// NAME: Is it a riding special attack? - 騎乗特攻か
	// DESC: If you hit the target of the riding special attack while riding, the SA damage will be multiplied by the multiplier. - 騎乗中の騎乗特攻対象に攻撃を当てた場合、SAダメージに倍率補正が掛かる
	uint8_t isVsRideAtk: 1;

	// NAME: Do you refer to the additional attack power even in weapon attacks? - 武器攻撃でも加算攻撃力を参照するか
	// DESC: Do you refer to the additional attack power even in weapon attacks? - 武器攻撃でも加算攻撃力を参照するか
	uint8_t isAddBaseAtk: 1;

	// NAME: Is it excluded from threat level notification? - 脅威度通知対象除外か
	// DESC: Is it excluded from threat level notification? - 脅威度通知対象除外か
	uint8_t excludeThreatLvNotify: 1;

	// NAME: pad1 - pad1
	uint8_t pad1: 1;

	// NAME: Behavior identification value 1 - Behavior用識別値1
	// DESC: Behavior identification value: Extra large damage transition - Behavior用識別値：特大ダメージ遷移
	uint8_t atkBehaviorId;

	// NAME: Attack strength [SE] - 攻撃強度[SE]
	// DESC: Attack strength [SE] - 攻撃強度[SE]
	int8_t atkPow_forSe;

	// NAME: SA attack power - SA攻撃力
	// DESC: NPCs only. Value used for SA break calculation formula - NPCのみ。SAブレイク計算式に利用すする値
	float atkSuperArmor;

	// NAME: Decal ID 1 (directly specified) - デカールID1（直接指定）
	// DESC: Decal ID 1 (directly specified) - デカールID1（直接指定）
	int32_t decalId1;

	// NAME: Decal ID 2 (directly specified) - デカールID2（直接指定）
	// DESC: Decal ID 2 (directly specified) - デカールID2（直接指定）
	int32_t decalId2;

	// NAME: AI sound ID when it occurs - 発生時AI音ID
	// DESC: ID of AI sound generated when an attack occurs - 攻撃発生時に発生させるAI音のID
	int32_t AppearAiSoundId;

	// NAME: AI sound ID on hit - ヒット時AI音ID
	// DESC: ID of AI sound generated at the time of hit - ヒット時に発生させるAI音のID
	int32_t HitAiSoundId;

	// NAME: Vibration effect on hit (-1 invalid) - ヒット時振動効果(-1無効)
	// DESC: Vibration ID at the time of hit (-1 invalid). It is a vibration ID when none of the following three applies - ヒット時の振動ID（-1無効）。次の3つのどれにも当てはまらない時の振動IDとなる
	int32_t HitRumbleId;

	// NAME: Vibration ID when the tip hits - 先端ヒット時振動ID
	// DESC: Vibration ID at the time of hit when hitting the tip (-1 invalid) - 先端にヒットした時のヒット時振動ID（-1無効）
	int32_t HitRumbleIdByNormal;

	// NAME: Vibration ID when hit in the middle - 真ん中ヒット時振動ID
	// DESC: Vibration ID at the time of hit when hit in the middle (-1 invalid) - 真ん中にヒットした時のヒット時振動ID（-1無効）
	int32_t HitRumbleIdByMiddle;

	// NAME: Vibration ID at the time of root hit - 根本ヒット時振動ID
	// DESC: Vibration ID at the time of hit when hitting the root (-1 invalid) - 根本にヒットした時のヒット時振動ID（-1無効）
	int32_t HitRumbleIdByRoot;

	// NAME: Sword Flash SfxID_0 - 剣閃SfxID_０
	// DESC: Sword flash SfxID_0 (-1 invalid) - 剣閃SfxID_０(-1無効)
	int32_t traceSfxId0;

	// NAME: Root Sword Flash Damipoli ID_0 - 根元剣閃ダミポリID_０
	// DESC: Sword flash root Damipoli ID_0 (-1 invalid) - 剣閃根元ダミポリID_０(-1無効)
	int32_t traceDmyIdHead0;

	// NAME: Sword tip sword flash Damipoli ID_0 - 剣先剣閃ダミポリID_０
	// DESC: Sword Flash Sword Tip Damipoli ID_0 - 剣閃剣先ダミポリID_０
	int32_t traceDmyIdTail0;

	// NAME: Sword Flash SfxID_1 - 剣閃SfxID_１
	// DESC: Sword flash SfxID_1 (-1 invalid) - 剣閃SfxID_１(-1無効)
	int32_t traceSfxId1;

	// NAME: Root Sword Flash Damipoli ID_1 - 根元剣閃ダミポリID_１
	// DESC: Sword Flash Root Damipoli ID_1 (-1 invalid) - 剣閃根元ダミポリID_１(-1無効)
	int32_t traceDmyIdHead1;

	// NAME: Sword tip sword flash Damipoli ID_1 - 剣先剣閃ダミポリID_１
	// DESC: Sword Flash Sword Tip Damipoli ID_1 - 剣閃剣先ダミポリID_１
	int32_t traceDmyIdTail1;

	// NAME: Sword Flash SfxID_2 - 剣閃SfxID_２
	// DESC: Sword flash SfxID_2 (-1 invalid) - 剣閃SfxID_２(-1無効)
	int32_t traceSfxId2;

	// NAME: Root Sword Flash Damipoli ID_2 - 根元剣閃ダミポリID_２
	// DESC: Sword Flash Root Damipoli ID_2 (-1 invalid) - 剣閃根元ダミポリID_２(-1無効)
	int32_t traceDmyIdHead2;

	// NAME: Sword tip sword flash Damipoli ID_2 - 剣先剣閃ダミポリID_２
	// DESC: Sword Flash Sword Tip Damipoli ID_2 - 剣閃剣先ダミポリID_２
	int32_t traceDmyIdTail2;

	// NAME: Sword Flash SfxID_3 - 剣閃SfxID_３
	// DESC: Sword Flash SfxID_3 (-1 invalid) - 剣閃SfxID_３(-1無効)
	int32_t traceSfxId3;

	// NAME: Root Sword Flash Damipoli ID_3 - 根元剣閃ダミポリID_３
	// DESC: Sword flash root Damipoli ID_3 (-1 invalid) - 剣閃根元ダミポリID_３(-1無効)
	int32_t traceDmyIdHead3;

	// NAME: Sword tip sword flash Damipoli ID_3 - 剣先剣閃ダミポリID_３
	// DESC: Sword Flash Sword Tip Damipoli ID_3 - 剣閃剣先ダミポリID_３
	int32_t traceDmyIdTail3;

	// NAME: Sword Flash SfxID_4 - 剣閃SfxID_４
	// DESC: Sword Flash SfxID_4 (-1 invalid) - 剣閃SfxID_４(-1無効)
	int32_t traceSfxId4;

	// NAME: Root Sword Flash Damipoli ID_4 - 根元剣閃ダミポリID_４
	// DESC: Sword flash root Damipoli ID_4 (-1 invalid) - 剣閃根元ダミポリID_４(-1無効)
	int32_t traceDmyIdHead4;

	// NAME: Sword tip sword flash Damipoli ID_4 - 剣先剣閃ダミポリID_４
	// DESC: Sword Flash Sword Tip Damipoli ID_4 - 剣閃剣先ダミポリID_４
	int32_t traceDmyIdTail4;

	// NAME: Sword Flash SfxID_5 - 剣閃SfxID_５
	// DESC: Sword Flash SfxID_5 (-1 invalid) - 剣閃SfxID_５(-1無効)
	int32_t traceSfxId5;

	// NAME: Root Sword Flash Damipoli ID_5 - 根元剣閃ダミポリID_５
	// DESC: Sword Flash Root Damipoli ID_5 (-1 invalid) - 剣閃根元ダミポリID_５(-1無効)
	int32_t traceDmyIdHead5;

	// NAME: Sword tip sword flash Damipoli ID_5 - 剣先剣閃ダミポリID_５
	// DESC: Sword Flash Sword Tip Damipoli ID_5 - 剣閃剣先ダミポリID_５
	int32_t traceDmyIdTail5;

	// NAME: Sword Flash SfxID_6 - 剣閃SfxID_６
	// DESC: Sword Flash SfxID_6 (-1 invalid) - 剣閃SfxID_６(-1無効)
	int32_t traceSfxId6;

	// NAME: Root Sword Flash Damipoli ID_6 - 根元剣閃ダミポリID_６
	// DESC: Sword Flash Root Damipoli ID_6 (-1 invalid) - 剣閃根元ダミポリID_６(-1無効)
	int32_t traceDmyIdHead6;

	// NAME: Sword tip sword flash Damipoli ID_6 - 剣先剣閃ダミポリID_６
	// DESC: Sword Flash Sword Tip Damipoli ID_6 - 剣閃剣先ダミポリID_６
	int32_t traceDmyIdTail6;

	// NAME: Sword Flash SfxID_7 - 剣閃SfxID_７
	// DESC: Sword Flash SfxID_7 (-1 invalid) - 剣閃SfxID_７(-1無効)
	int32_t traceSfxId7;

	// NAME: Root Sword Flash Damipoli ID_7 - 根元剣閃ダミポリID_７
	// DESC: Sword Flash Root Damipoli ID_7 (-1 invalid) - 剣閃根元ダミポリID_７(-1無効)
	int32_t traceDmyIdHead7;

	// NAME: Sword tip sword flash Damipoli ID_7 - 剣先剣閃ダミポリID_７
	// DESC: Sword Flash Sword Tip Damipoli ID_7 - 剣閃剣先ダミポリID_７
	int32_t traceDmyIdTail7;

	// NAME: 4 radii per - あたり4 半径
	// DESC: Sphere, capsule radius - 球、カプセルの半径
	float hit4_Radius;

	// NAME: 5 radii per - あたり5 半径
	// DESC: Sphere, capsule radius - 球、カプセルの半径
	float hit5_Radius;

	// NAME: 6 radii per - あたり6 半径
	// DESC: Sphere, capsule radius - 球、カプセルの半径
	float hit6_Radius;

	// NAME: 7 radii per - あたり7 半径
	// DESC: Sphere, capsule radius - 球、カプセルの半径
	float hit7_Radius;

	// NAME: 8 radii per - あたり8 半径
	// DESC: Sphere, capsule radius - 球、カプセルの半径
	float hit8_Radius;

	// NAME: 9 radii per - あたり9 半径
	// DESC: Sphere, capsule radius - 球、カプセルの半径
	float hit9_Radius;

	// NAME: 10 radii per - あたり10 半径
	// DESC: Sphere, capsule radius - 球、カプセルの半径
	float hit10_Radius;

	// NAME: 11 radii per - あたり11 半径
	// DESC: Sphere, capsule radius - 球、カプセルの半径
	float hit11_Radius;

	// NAME: 12 radii per - あたり12 半径
	// DESC: Sphere, capsule radius - 球、カプセルの半径
	float hit12_Radius;

	// NAME: 13 radii per - あたり13 半径
	// DESC: Sphere, capsule radius - 球、カプセルの半径
	float hit13_Radius;

	// NAME: 14 radii per - あたり14 半径
	// DESC: Sphere, capsule radius - 球、カプセルの半径
	float hit14_Radius;

	// NAME: 15 radii per - あたり15 半径
	// DESC: Sphere, capsule radius - 球、カプセルの半径
	float hit15_Radius;

	// NAME: 4 per Damipoli 1 - あたり4 ダミポリ1
	// DESC: Damipoli in sphere, capsule position - 球、カプセル位置のダミポリ
	int16_t hit4_DmyPoly1;

	// NAME: 5 per Damipoli 1 - あたり5 ダミポリ1
	// DESC: Damipoli in sphere, capsule position - 球、カプセル位置のダミポリ
	int16_t hit5_DmyPoly1;

	// NAME: 6 per Damipoli 1 - あたり6 ダミポリ1
	// DESC: Damipoli in sphere, capsule position - 球、カプセル位置のダミポリ
	int16_t hit6_DmyPoly1;

	// NAME: 7 per Damipoli 1 - あたり7 ダミポリ1
	// DESC: Damipoli in sphere, capsule position - 球、カプセル位置のダミポリ
	int16_t hit7_DmyPoly1;

	// NAME: 8 Damipoli per 1 - あたり8ダミポリ1
	// DESC: Damipoli in sphere, capsule position - 球、カプセル位置のダミポリ
	int16_t hit8_DmyPoly1;

	// NAME: 9 per Damipoli 1 - あたり9 ダミポリ1
	// DESC: Damipoli in sphere, capsule position - 球、カプセル位置のダミポリ
	int16_t hit9_DmyPoly1;

	// NAME: 10 per Damipoli 1 - あたり10 ダミポリ1
	// DESC: Damipoli in sphere, capsule position - 球、カプセル位置のダミポリ
	int16_t hit10_DmyPoly1;

	// NAME: Per 11 Damipoli 1 - あたり11 ダミポリ1
	// DESC: Damipoli in sphere, capsule position - 球、カプセル位置のダミポリ
	int16_t hit11_DmyPoly1;

	// NAME: 12 per Damipoli 1 - あたり12 ダミポリ1
	// DESC: Damipoli in sphere, capsule position - 球、カプセル位置のダミポリ
	int16_t hit12_DmyPoly1;

	// NAME: 13 Damipoli per 1 - あたり13ダミポリ1
	// DESC: Damipoli in sphere, capsule position - 球、カプセル位置のダミポリ
	int16_t hit13_DmyPoly1;

	// NAME: Per 14 Damipoli 1 - あたり14 ダミポリ1
	// DESC: Damipoli in sphere, capsule position - 球、カプセル位置のダミポリ
	int16_t hit14_DmyPoly1;

	// NAME: 15 per Damipoli 1 - あたり15 ダミポリ1
	// DESC: Damipoli in sphere, capsule position - 球、カプセル位置のダミポリ
	int16_t hit15_DmyPoly1;

	// NAME: 4 per Damipoli 2 - あたり4 ダミポリ2
	// DESC: The position of another point on the capsule Damipoli. -1 makes it a sphere - カプセルのもうひとつの点の位置ダミポリ。-1だと球になる
	int16_t hit4_DmyPoly2;

	// NAME: 5 Damipoli 2 per - あたり5ダミポリ2
	// DESC: The position of another point on the capsule Damipoli. -1 makes it a sphere - カプセルのもうひとつの点の位置ダミポリ。-1だと球になる
	int16_t hit5_DmyPoly2;

	// NAME: 6 Damipoli 2 per - あたり6ダミポリ2
	// DESC: The position of another point on the capsule Damipoli. -1 makes it a sphere - カプセルのもうひとつの点の位置ダミポリ。-1だと球になる
	int16_t hit6_DmyPoly2;

	// NAME: 7 Damipoli 2 per - あたり7ダミポリ2
	// DESC: The position of another point on the capsule Damipoli. -1 makes it a sphere - カプセルのもうひとつの点の位置ダミポリ。-1だと球になる
	int16_t hit7_DmyPoly2;

	// NAME: 8 per Damipoli 2 - あたり8 ダミポリ2
	// DESC: The position of another point on the capsule Damipoli. -1 makes it a sphere - カプセルのもうひとつの点の位置ダミポリ。-1だと球になる
	int16_t hit8_DmyPoly2;

	// NAME: 9 Damipoli per 2 - あたり9ダミポリ2
	// DESC: The position of another point on the capsule Damipoli. -1 makes it a sphere - カプセルのもうひとつの点の位置ダミポリ。-1だと球になる
	int16_t hit9_DmyPoly2;

	// NAME: 10 per Damipoli 2 - あたり10 ダミポリ2
	// DESC: The position of another point on the capsule Damipoli. -1 makes it a sphere - カプセルのもうひとつの点の位置ダミポリ。-1だと球になる
	int16_t hit10_DmyPoly2;

	// NAME: Per 11 Damipoli 2 - あたり11 ダミポリ2
	// DESC: The position of another point on the capsule Damipoli. -1 makes it a sphere - カプセルのもうひとつの点の位置ダミポリ。-1だと球になる
	int16_t hit11_DmyPoly2;

	// NAME: 12 per Damipoli 2 - あたり12 ダミポリ2
	// DESC: The position of another point on the capsule Damipoli. -1 makes it a sphere - カプセルのもうひとつの点の位置ダミポリ。-1だと球になる
	int16_t hit12_DmyPoly2;

	// NAME: Per 13 Damipoli 2 - あたり13 ダミポリ2
	// DESC: The position of another point on the capsule Damipoli. -1 makes it a sphere - カプセルのもうひとつの点の位置ダミポリ。-1だと球になる
	int16_t hit13_DmyPoly2;

	// NAME: Per 14 Damipoli 2 - あたり14 ダミポリ2
	// DESC: The position of another point on the capsule Damipoli. -1 makes it a sphere - カプセルのもうひとつの点の位置ダミポリ。-1だと球になる
	int16_t hit14_DmyPoly2;

	// NAME: 15 per Damipoli 2 - あたり15 ダミポリ2
	// DESC: The position of another point on the capsule Damipoli. -1 makes it a sphere - カプセルのもうひとつの点の位置ダミポリ。-1だと球になる
	int16_t hit15_DmyPoly2;

	// NAME: 4 parts per - あたり4 部位
	// DESC: Hit part - あたり部位
	uint8_t hit4_hitType;

	// NAME: 5 parts per - あたり5 部位
	// DESC: Hit part - あたり部位
	uint8_t hit5_hitType;

	// NAME: 6 parts per - あたり6 部位
	// DESC: Hit part - あたり部位
	uint8_t hit6_hitType;

	// NAME: 7 parts per - あたり7 部位
	// DESC: Hit part - あたり部位
	uint8_t hit7_hitType;

	// NAME: 8 parts per - あたり8 部位
	// DESC: Hit part - あたり部位
	uint8_t hit8_hitType;

	// NAME: 9 parts per - あたり9 部位
	// DESC: Hit part - あたり部位
	uint8_t hit9_hitType;

	// NAME: 10 parts per - あたり10 部位
	// DESC: Hit part - あたり部位
	uint8_t hit10_hitType;

	// NAME: 11 parts per - あたり11 部位
	// DESC: Hit part - あたり部位
	uint8_t hit11_hitType;

	// NAME: 12 parts per - あたり12 部位
	// DESC: Hit part - あたり部位
	uint8_t hit12_hitType;

	// NAME: 13 parts per - あたり13 部位
	// DESC: Hit part - あたり部位
	uint8_t hit13_hitType;

	// NAME: 14 parts per - あたり14 部位
	// DESC: Hit part - あたり部位
	uint8_t hit14_hitType;

	// NAME: 15 parts per - あたり15 部位
	// DESC: Hit part - あたり部位
	uint8_t hit15_hitType;

	// NAME: 4 priorities per - あたり4 優先順位
	// DESC: priority. If there are two or more hits at the same time, the one with the higher priority will be adopted. - 優先度。同時に2つ以上のあたりがあたった場合、優先度が高いほうを採用する。
	uint8_t hti4_Priority;

	// NAME: 5 priorities per - あたり5 優先順位
	// DESC: priority. If there are two or more hits at the same time, the one with the higher priority will be adopted. - 優先度。同時に2つ以上のあたりがあたった場合、優先度が高いほうを採用する。
	uint8_t hti5_Priority;

	// NAME: 6 priorities per - あたり6 優先順位
	// DESC: priority. If there are two or more hits at the same time, the one with the higher priority will be adopted. - 優先度。同時に2つ以上のあたりがあたった場合、優先度が高いほうを採用する。
	uint8_t hti6_Priority;

	// NAME: 7 priorities per - あたり7 優先順位
	// DESC: priority. If there are two or more hits at the same time, the one with the higher priority will be adopted. - 優先度。同時に2つ以上のあたりがあたった場合、優先度が高いほうを採用する。
	uint8_t hti7_Priority;

	// NAME: 8 priorities per - あたり8 優先順位
	// DESC: priority. If there are two or more hits at the same time, the one with the higher priority will be adopted. - 優先度。同時に2つ以上のあたりがあたった場合、優先度が高いほうを採用する。
	uint8_t hti8_Priority;

	// NAME: 9 priorities per - あたり9 優先順位
	// DESC: priority. If there are two or more hits at the same time, the one with the higher priority will be adopted. - 優先度。同時に2つ以上のあたりがあたった場合、優先度が高いほうを採用する。
	uint8_t hti9_Priority;

	// NAME: 10 priorities per - あたり10 優先順位
	// DESC: priority. If there are two or more hits at the same time, the one with the higher priority will be adopted. - 優先度。同時に2つ以上のあたりがあたった場合、優先度が高いほうを採用する。
	uint8_t hti10_Priority;

	// NAME: 11 priorities per - あたり11 優先順位
	// DESC: priority. If there are two or more hits at the same time, the one with the higher priority will be adopted. - 優先度。同時に2つ以上のあたりがあたった場合、優先度が高いほうを採用する。
	uint8_t hti11_Priority;

	// NAME: 12 priorities per - あたり12 優先順位
	// DESC: priority. If there are two or more hits at the same time, the one with the higher priority will be adopted. - 優先度。同時に2つ以上のあたりがあたった場合、優先度が高いほうを採用する。
	uint8_t hti12_Priority;

	// NAME: 13 priorities per - あたり13 優先順位
	// DESC: priority. If there are two or more hits at the same time, the one with the higher priority will be adopted. - 優先度。同時に2つ以上のあたりがあたった場合、優先度が高いほうを採用する。
	uint8_t hti13_Priority;

	// NAME: 14 priorities per - あたり14 優先順位
	// DESC: priority. If there are two or more hits at the same time, the one with the higher priority will be adopted. - 優先度。同時に2つ以上のあたりがあたった場合、優先度が高いほうを採用する。
	uint8_t hti14_Priority;

	// NAME: 15 priorities per - あたり15 優先順位
	// DESC: priority. If there are two or more hits at the same time, the one with the higher priority will be adopted. - 優先度。同時に2つ以上のあたりがあたった場合、優先度が高いほうを採用する。
	uint8_t hti15_Priority;

	// NAME: Defensive material 1 [SFX] - 防御材質1[SFX]
	// DESC: Used for SFX when guarding. 1 - ガード時のSFXに使用.1
	uint16_t defSfxMaterial1;

	// NAME: Defensive material 2 [SE] - 防御材質2[SE]
	// DESC: Used for SE when guarding 2 - ガード時のSEに使用2
	uint16_t defSeMaterial2;

	// NAME: Defensive material 2 [SFX] - 防御材質2[SFX]
	// DESC: Used for SFX when guarding. 2 - ガード時のSFXに使用.2
	uint16_t defSfxMaterial2;

	// NAME: Dark attack power correction value - 闇攻撃力補正値
	// DESC: PC only. Multiply the dark attack power (in the case of a bow, correct the missile) - PCのみ。闇攻撃力に掛ける倍率（弓の場合は、飛び道具を補正）
	uint16_t atkDarkCorrection;

	// NAME: Dark attack power - 闇攻撃力
	// DESC: NPCs only. Additional damage from dark attacks - NPCのみ。闇攻撃の追加ダメージ
	uint16_t atkDark;

	// NAME: pad - pad
	// DESC: pad - pad
	uint8_t pad5: 1;

	// NAME: Attack contact parry judgment invalid - 攻撃接触パリィ判定無効
	// DESC: This is a flag to disable the new parry control. A process that determines that the damage on the attacking side has been parried when it comes into contact with a character in the parry state on the defending side. - 新パリィ制御を無効化するかどうかのフラグです。攻撃側のダメージが、防御側でパリィ状態のキャラに接触した場合にパリィされたと判定する処理。
	uint8_t isDisableParry: 1;

	// NAME: Is the attack power bonus invalid when holding both hands? - 両手持ち時攻撃力ボーナス無効か
	// DESC: Avoid using the 1.5x growth status adaptation with both hands - 両手時の成長ステータス1.5倍適応を使わないようにする
	uint8_t isDisableBothHandsAtkBonus: 1;

	// NAME: Will it be disabled with limited invincibility (only in the air)? - 限定無敵（空中のみ）で無効化されるか
	// DESC: If "Do you want to penetrate invincibility" is ◯, this setting will be ignored. - 「無敵を貫通するか」が◯の場合、この設定は無視されます
	uint8_t isInvalidatedByNoDamageInAir: 1;

	// NAME: pad1 - pad1
	uint8_t pad2: 4;

	// NAME: Damage level vs. player - ダメージレベル 対プレイヤー
	// DESC: Damage level to the player. If it is "0 (default)", it is not used. The meaning of the range other than "0 (default)" is the same as "Damage level". - プレイヤーに対するダメージレベル。“0(デフォルト)”であれば使わない。“0(デフォルト)”以外の値域の意味は、《ダメージレベル》と同じ。
	int8_t dmgLevel_vsPlayer;

	// NAME: Abnormal state attack power magnification correction - 状態異常攻撃力倍率補正
	// DESC: Magnification correction is performed for the abnormal state attack power of special effects. - 特殊効果の状態異常攻撃力に対して、倍率補正を行う。
	uint16_t statusAilmentAtkPowerCorrectRate;

	// NAME: Special effects attack power multiplier correction (attack power points) - 特殊効果攻撃力倍率補正（攻撃力ポイント）
	// DESC: Magnification correction is performed for the special effect ~ ~ attack power [point]. - 特殊効果の～～攻撃力[point]に対して、倍率補正を行う。
	uint16_t spEffectAtkPowerCorrectRate_byPoint;

	// NAME: Special effect attack power multiplier correction (attack power multiplier) - 特殊効果攻撃力倍率補正（攻撃力倍率）
	// DESC: Magnification is corrected for the special effect's attack power multiplier. - 特殊効果の～～攻撃力倍率に対して、倍率補正を行う。
	uint16_t spEffectAtkPowerCorrectRate_byRate;

	// NAME: Special effect attack power multiplier correction (final attack power multiplier) - 特殊効果攻撃力倍率補正（最終攻撃力倍率）
	// DESC: Attack side of special effect: ~ ~ Performs magnification correction for damage multiplier. - 特殊効果の攻撃側：～～ダメージ倍率に対して、倍率補正を行う。
	uint16_t spEffectAtkPowerCorrectRate_byDmg;

	// NAME: Behavior identification value 2 - Behavior用識別値2
	// DESC: Behavior identification value: Plays damage motion only at specific times - Behavior用識別値：特定の時だけダメージモーションを再生する 
	uint8_t atkBehaviorId_2;

	// NAME: Throw damage attribute - 投げダメージ属性
	// DESC: Attribute of throw damage of attack judgment. Corresponding special effects will be applied. It works only when the attack ATK_PATAM_THROWFLAG_TYPE is "2: Throw". - 攻撃判定の投げダメージの属性。対応する特殊効果がかかるようになる。攻撃のATK_PATAM_THROWFLAG_TYPEが「2：投げ」の場合にのみ、機能を発揮する
	uint8_t throwDamageAttribute;

	// NAME: Special effect status abnormality correction (attack power point) - 特殊効果状態異常補正（攻撃力ポイント）
	// DESC: Magnification correction is performed for the special effect "Whether to apply the abnormal state attack power magnification correction". - 特殊効果の「状態異常攻撃力倍率補正を適応するか」に対して、倍率補正を行う。
	uint16_t statusAilmentAtkPowerCorrectRate_byPoint;

	// NAME: Attack attribute correction ID overwrite - 攻撃属性補正ID上書き
	// DESC: For overwriting the ID of the parameter that corrects the attack attribute - 攻撃属性を補正するパラメータのID上書き用
	int32_t overwriteAttackElementCorrectId;

	// NAME: Decal identifier 1 - デカール識別子1
	// DESC: Decal identifier 1 (3 digits) - デカール識別子1(3桁)
	int16_t decalBaseId1;

	// NAME: Decal identifier 2 - デカール識別子2
	// DESC: Decal identifier 2 (3 digits) - デカール識別子2(3桁)
	int16_t decalBaseId2;

	// NAME: Weapon regain amount correction value - 武器リゲイン量補正値
	// DESC: Weapon regain amount correction value - 武器リゲイン量補正値
	uint16_t wepRegainHpScale;

	// NAME: Amount of attack regain - 攻撃リゲイン量
	// DESC: Amount of attack regain - 攻撃リゲイン量
	uint16_t atkRegainHp;

	// NAME: Regainable time correction factor - リゲイン可能時間補正倍率
	// DESC: Regainable time correction factor - リゲイン可能時間補正倍率
	float regainableTimeScale;

	// NAME: Regainable rate correction factor - リゲイン可能率補正倍率
	// DESC: Regainable rate correction factor - リゲイン可能率補正倍率
	float regainableHpRateScale;

	// NAME: Same attack judgment ID - 同一攻撃判定ID
	// DESC: Same attack judgment ID - 同一攻撃判定ID
	int8_t regainableSlotId;

	// NAME: Special attribute variation value - 特殊属性バリエーション値
	// DESC: Value for giving variation to SFX and SE generated by special attribute in combination with "special attribute" (SEQ16473) - 「特殊属性」と組み合わせて特殊属性によって発生するSFX、SEにバリエーションを持たせるための値(SEQ16473)
	uint8_t spAttributeVariationValue;

	// NAME: Front angle offset of parry establishment condition - パリィ成立条件の正面角度オフセット
	// DESC: Front angle offset of [collapsed side] of parry establishment condition - パリィ成立条件の【崩される側】の正面角度オフセット
	int16_t parryForwardOffset;

	// NAME: SA attack power correction value - SA攻撃力補正値
	// DESC: PC only. Correction value to be applied to the [basic value] set for the weapon - PCのみ。武器に設定された【基本値】にかける補正値
	float atkSuperArmorCorrection;

	// NAME: Defensive material variation value - 防御材質バリエーション値
	// DESC: A value to have variations of damage SFX and SE in combination with "defense material 1 or 2" used when guarding. (SEQ16473) - ガード時に使用される「防御材質1or2」と組み合わせてダメージSFX、SEのバリエーションを持たせるための値。(SEQ16473)
	uint8_t defSfxMaterialVariationValue;

	// NAME: pad - pad
	uint8_t pad4[19];
};

#endif
