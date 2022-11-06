/* This file was automatically generated from XML paramdefs. */
#ifndef _PARAMDEF_EQUIP_PARAM_WEAPON_ST_H
#define _PARAMDEF_EQUIP_PARAM_WEAPON_ST_H
#pragma once
#include <inttypes.h>

// Data Version: 6
// Is Big Endian: False
// Is Unicode: True
// Format Version: 203
struct EQUIP_PARAM_WEAPON_ST {

	// NAME: Do you remove it from the NT version output? - NT版出力から外すか
	// DESC: Parameters marked with ○ are excluded in the NT version package. - ○をつけたパラメータをNT版パッケージでは除外します
	uint8_t disableParam_NT: 1;

	// NAME: Reserve for package output 1 - パッケージ出力用リザーブ1
	// DESC: Reserve for package output 1 - パッケージ出力用リザーブ1
	uint8_t disableParamReserve1: 7;

	// NAME: Reserve for package output 2 - パッケージ出力用リザーブ2
	// DESC: Reserve for package output 2 - パッケージ出力用リザーブ2
	uint8_t disableParamReserve2[3];

	// NAME: Behavior variation ID - 行動バリエーションID
	// DESC: Used when determining the action parameter ID to be referenced during an attack - 攻撃時に参照する行動パラメータIDを決定するときに使う
	int32_t behaviorVariationId;

	// NAME: Sort ID - ソートID
	// DESC: Sort ID (-1: Do not collect) (7 digits is the limit in s32 to add the enhancement level in the program) - ソートID(-1:集めない)(プログラム内で強化レベルを加味するため s32 では７桁が限界)
	int32_t sortId;

	// NAME: Wandering equipment ID - 徘徊装備ID
	// DESC: Replacement equipment ID for wandering ghosts. - 徘徊ゴースト用の差し替え装備ID.
	uint32_t wanderingEquipId;

	// NAME: Weight [kg] - 重量[kg]
	// DESC: Weight [kg]. - 重量[kg].
	float weight;

	// NAME: Equipment weight ratio - 装備重量比率
	// DESC: Equipment weight ratio - 装備重量比率
	float weaponWeightRate;

	// NAME: Repair price - 修理価格
	// DESC: Basic repair price - 修理基本価格
	int32_t fixPrice;

	// NAME: Enhanced price - 強化価格
	// DESC: Enhanced price - 強化価格
	int32_t reinforcePrice;

	// NAME: Sale price - 売却価格
	// DESC: Selling price - 販売価格
	int32_t sellValue;

	// NAME: Strength correction - 筋力補正
	// DESC: Charapara correction value. - キャラパラ補正値.
	float correctStrength;

	// NAME: Agility correction - 俊敏補正
	// DESC: Charapara correction value. - キャラパラ補正値.
	float correctAgility;

	// NAME: Magic correction - 魔力補正
	// DESC: Charapara correction value. - キャラパラ補正値.
	float correctMagic;

	// NAME: Faith correction - 信仰補正
	// DESC: Charapara correction value. - キャラパラ補正値.
	float correctFaith;

	// NAME: Physical attack cut rate when guarding - ガード時物理攻撃カット率
	// DESC: Set the damage cut rate when guarding for each attack - ガード時のダメージカット率を各攻撃ごとに設定
	float physGuardCutRate;

	// NAME: Magic attack cut rate when guarding - ガード時魔法攻撃カット率
	// DESC: If it is not a guard attack, enter 0 - ガード攻撃でない場合は、0を入れる
	float magGuardCutRate;

	// NAME: Flame attack power cut rate when guarding - ガード時炎攻撃力カット率
	// DESC: How much to cut the fire attack? - 炎攻撃をどれだけカットするか？
	float fireGuardCutRate;

	// NAME: Electric shock attack power cut rate when guarding - ガード時電撃攻撃力カット率
	// DESC: How much to cut the electric shock attack? - 電撃攻撃をどれだけカットするか？
	float thunGuardCutRate;

	// NAME: Special effect ID 0 on attack hit - 攻撃ヒット時特殊効果ID0
	// DESC: Register when adding special effects to weapons - 武器に特殊効果を追加するときに登録する
	int32_t spEffectBehaviorId0;

	// NAME: Special effect ID1 on attack hit - 攻撃ヒット時特殊効果ID1
	// DESC: Register when adding special effects to weapons - 武器に特殊効果を追加するときに登録する
	int32_t spEffectBehaviorId1;

	// NAME: Special effect ID2 on attack hit - 攻撃ヒット時特殊効果ID2
	// DESC: Register when adding special effects to weapons - 武器に特殊効果を追加するときに登録する
	int32_t spEffectBehaviorId2;

	// NAME: Resident special effect ID - 常駐特殊効果ID
	// DESC: Resident special effect ID0 - 常駐特殊効果ID0
	int32_t residentSpEffectId;

	// NAME: Resident special effect ID1 - 常駐特殊効果ID1
	// DESC: Resident special effect ID1 - 常駐特殊効果ID1
	int32_t residentSpEffectId1;

	// NAME: Resident special effect ID2 - 常駐特殊効果ID2
	// DESC: Resident special effect ID2 - 常駐特殊効果ID2
	int32_t residentSpEffectId2;

	// NAME: Material ID - 素材ID
	// DESC: Material parameter ID required for weapon enhancement - 武器強化に必要な素材パラメータID
	int32_t materialSetId;

	// NAME: Derivation source - 派生元
	// DESC: This weapon's enhancement source weapon ID - この武器の強化元武器ID
	int32_t originEquipWep;

	// NAME: Derivative source enhancement +1 - 派生元 強化+1
	// DESC: This weapon's enhancement source weapon ID1 - この武器の強化元武器ID1
	int32_t originEquipWep1;

	// NAME: Derivative source enhancement +2 - 派生元 強化+2
	// DESC: This weapon's enhancement source weapon ID2 - この武器の強化元武器ID2
	int32_t originEquipWep2;

	// NAME: Derivative source enhancement +3 - 派生元 強化+3
	// DESC: This weapon's enhancement source weapon ID3 - この武器の強化元武器ID3
	int32_t originEquipWep3;

	// NAME: Derivative source enhancement +4 - 派生元 強化+4
	// DESC: This weapon's enhancement source weapon ID 4 - この武器の強化元武器ID4
	int32_t originEquipWep4;

	// NAME: Derivative source enhancement +5 - 派生元 強化+5
	// DESC: This weapon's enhancement source weapon ID 5 - この武器の強化元武器ID5
	int32_t originEquipWep5;

	// NAME: Derivative source enhancement +6 - 派生元 強化+6
	// DESC: This weapon's enhancement source weapon ID 6 - この武器の強化元武器ID6
	int32_t originEquipWep6;

	// NAME: Derivative source enhancement +7 - 派生元 強化+7
	// DESC: This weapon's enhancement source weapon ID 7 - この武器の強化元武器ID7
	int32_t originEquipWep7;

	// NAME: Derivative source enhancement +8 - 派生元 強化+8
	// DESC: This weapon's enhancement source weapon ID8 - この武器の強化元武器ID8
	int32_t originEquipWep8;

	// NAME: Derivative source enhancement +9 - 派生元 強化+9
	// DESC: This weapon's enhancement source weapon ID 9 - この武器の強化元武器ID9
	int32_t originEquipWep9;

	// NAME: Derivative source enhancement +10 - 派生元 強化+10
	// DESC: This weapon's enhancement source weapon ID 10 - この武器の強化元武器ID10
	int32_t originEquipWep10;

	// NAME: Derivative source enhancement +11 - 派生元 強化+11
	// DESC: This weapon's enhancement source weapon ID 11 - この武器の強化元武器ID11
	int32_t originEquipWep11;

	// NAME: Derivative source enhancement +12 - 派生元 強化+12
	// DESC: This weapon's enhancement source weapon ID 12 - この武器の強化元武器ID12
	int32_t originEquipWep12;

	// NAME: Derivative source enhancement +13 - 派生元 強化+13
	// DESC: This weapon's enhancement source weapon ID 13 - この武器の強化元武器ID13
	int32_t originEquipWep13;

	// NAME: Derivative source enhancement +14 - 派生元 強化+14
	// DESC: This weapon's enhancement source weapon ID14 - この武器の強化元武器ID14
	int32_t originEquipWep14;

	// NAME: Derivative source enhancement +15 - 派生元 強化+15
	// DESC: This weapon's enhancement source weapon ID 15 - この武器の強化元武器ID15
	int32_t originEquipWep15;

	// NAME: Special attack A damage multiplier - 特攻Aダメージ倍率
	// DESC: Damage multiplier for special attack A - 特攻A用のダメージ倍率
	float weakA_DamageRate;

	// NAME: Special attack B damage multiplier - 特攻Bダメージ倍率
	// DESC: Damage multiplier for special attack B - 特攻B用のダメージ倍率
	float weakB_DamageRate;

	// NAME: Special attack C damage multiplier - 特攻Cダメージ倍率
	// DESC: Damage multiplier for special attack C - 特攻C用のダメージ倍率
	float weakC_DamageRate;

	// NAME: Special attack D damage multiplier - 特攻Dダメージ倍率
	// DESC: Damage multiplier for special attack D - 特攻D用のダメージ倍率
	float weakD_DamageRate;

	// NAME: Sleep tolerance cut rate_maximum correction value - 睡眠耐性カット率_最大補正値
	// DESC: Maximum value of cut rate correction value for attack power against sleep (set as special effect parameter) - 睡眠に対する攻撃力（特殊効果パラメータに設定）のカット率補正値の最大値
	float sleepGuardResist_MaxCorrect;

	// NAME: Madness resistance cut rate_maximum correction value - 発狂耐性カット率_最大補正値
	// DESC: Maximum value of cut rate correction value for attack power against madness (set as special effect parameter) - 発狂に対する攻撃力（特殊効果パラメータに設定）のカット率補正値の最大値
	float madnessGuardResist_MaxCorrect;

	// NAME: SA weapon attack power - SA武器攻撃力
	// DESC: Super Armor Basic Attack Power - スーパーアーマー基本攻撃力
	float saWeaponDamage;

	// NAME: Equipment model number - 装備モデル番号
	// DESC: Equipment model number. - 装備モデルの番号.
	uint16_t equipModelId;

	// NAME: Icon ID - アイコンID
	// DESC: Menu icon ID. - メニューアイコンID.
	uint16_t iconId;

	// NAME: Durability - 耐久度
	// DESC: Initial durability. - 初期耐久度.
	uint16_t durability;

	// NAME: Maximum durability - 耐久度最大値
	// DESC: New durability. - 新品耐久度.
	uint16_t durabilityMax;

	// NAME: Throw-through attack power basic value - 投げ抜け攻撃力基本値
	// DESC: Basic value of throw-through attack power - 投げ抜け攻撃力の基本値
	uint16_t attackThrowEscape;

	// NAME: Parry occurrence time [frame] - パリィ発生時間[frame]
	// DESC: Limit the life of parry damage. It does not last longer than it is set in TimeAct. - パリィダメージの寿命を制限する。TimeActで設定されている以上には持続しない。
	int16_t parryDamageLife;

	// NAME: Physical attack power basic value - 物理攻撃力基本値
	// DESC: Basic value of physical attribute attack that damages the enemy's HP - 敵のＨＰにダメージを与える物理属性攻撃の基本値
	uint16_t attackBasePhysics;

	// NAME: Magic attack power basic value - 魔法攻撃力基本値
	// DESC: Basic value of magic attribute attack that damages the enemy's HP - 敵のＨＰにダメージを与える魔法属性攻撃の基本値
	uint16_t attackBaseMagic;

	// NAME: Fire attack power basic value - 炎攻撃力基本値
	// DESC: Basic value of fire attribute attack that damages the enemy's HP - 敵のＨＰにダメージを与える炎属性攻撃の基本値
	uint16_t attackBaseFire;

	// NAME: Electric shock attack power basic value - 電撃攻撃力基本値
	// DESC: Basic value of electric shock attribute attack that damages the enemy's HP - 敵のＨＰにダメージを与える電撃属性攻撃の基本値
	uint16_t attackBaseThunder;

	// NAME: Stamina attack power - スタミナ攻撃力
	// DESC: Stamina attack power against the enemy - 敵へのスタミナ攻撃力
	uint16_t attackBaseStamina;

	// NAME: Guard range [deg] - ガード範囲[deg]
	// DESC: Defense occurrence range angle when guarding weapons - 武器のガード時の防御発生範囲角度
	int16_t guardAngle;

	// NAME: SA durability value - SA耐久値
	// DESC: Additional SA durability used during attack motion - 攻撃モーション中に使われる追加SA耐久値
	float saDurability;

	// NAME: Stamina defense when guarding - ガード時スタミナ防御力
	// DESC: Defense against enemy stamina attacks when guarding successfully - ガード成功時に、敵のスタミナ攻撃に対する防御力
	int16_t staminaGuardDef;

	// NAME: Enhanced type ID - 強化タイプID
	// DESC: Enhanced type ID - 強化タイプID
	int16_t reinforceTypeId;

	// NAME: Trophy S grade ID - トロフィーＳグレードID
	// DESC: Is it related to the trophy system? - トロフィーシステムに関係あるか？
	int16_t trophySGradeId;

	// NAME: Trophy SEQ number - トロフィーSEQ番号
	// DESC: Trophy SEQ number (13-29) - トロフィーのSEQ番号（１３～２９）
	int16_t trophySeqId;

	// NAME: Throw attack power multiplier - 投げ攻撃力倍率
	// DESC: Throw attack power multiplier - 投げの攻撃力倍率
	int16_t throwAtkRate;

	// NAME: Bow distance correction [%] - 弓飛距離補正[％]
	// DESC: Up% to extend the flight distance - 飛距離を伸ばすアップ％
	int16_t bowDistRate;

	// NAME: Equipment model type - 装備モデル種別
	// DESC: Equipment model type. - 装備モデルの種別.
	uint8_t equipModelCategory;

	// NAME: Equipment model gender - 装備モデル性別
	// DESC: Gender of equipment model. - 装備モデルの性別.
	uint8_t equipModelGender;

	// NAME: Weapon category - 武器カテゴリ
	// DESC: Weapon category. - 武器のカテゴリ.
	uint8_t weaponCategory;

	// NAME: Weapon motion category - 武器モーションカテゴリ
	// DESC: Weapon motion category. - 武器モーションのカテゴリ.
	uint8_t wepmotionCategory;

	// NAME: Guard motion category - ガードモーションカテゴリ
	// DESC: Guard motion category - ガードモーションのカテゴリ
	uint8_t guardmotionCategory;

	// NAME: Attack material - 攻撃材質
	// DESC: Attack material used from attack para - 攻撃パラから使用される攻撃材質
	uint8_t atkMaterial;

	// NAME: Defense SE Material 1 - 防御SE材質1
	// DESC: Defense SE material used from attack para 1 - 攻撃パラから使用される防御SE材質1
	uint16_t defSeMaterial1;

	// NAME: Correction type (physical attack power) - 補正タイプ（物理攻撃力）
	// DESC: Correcting physical attack power by primary parameters Determines the type of graph - 一次パラメータによる物理攻撃力の補正グラフのタイプを決める
	uint8_t correctType_Physics;

	// NAME: Special attributes - 特殊属性
	// DESC: Weapon special attribute value - 武器の特殊属性値
	uint8_t spAttribute;

	// NAME: Special attack category - 特殊攻撃カテゴリ
	// DESC: Special attack category (possible from 50 to 999) - 特殊攻撃カテゴリ（50～999まで可能)
	uint16_t spAtkcategory;

	// NAME: Weapon motion one-handed ID - 武器モーション片手ID
	// DESC: Basic motion ID when equipped with one hand. - 片手装備時の基本モーションID.
	uint8_t wepmotionOneHandId;

	// NAME: Weapon motion two-handed ID - 武器モーション両手ID
	// DESC: Basic motion ID when equipped with both hands. - 両手装備時の基本モーションID.
	uint8_t wepmotionBothHandId;

	// NAME: Equipment proper strength - 装備適正筋力
	// DESC: Equipment appropriate value. - 装備適正値.
	uint8_t properStrength;

	// NAME: Equipment proper agility - 装備適正俊敏
	// DESC: Equipment appropriate value. - 装備適正値.
	uint8_t properAgility;

	// NAME: Equipment proper magic power - 装備適正魔力
	// DESC: Equipment appropriate value. - 装備適正値.
	uint8_t properMagic;

	// NAME: Equipment proper faith - 装備適正信仰
	// DESC: Equipment appropriate value. - 装備適正値.
	uint8_t properFaith;

	// NAME: Strength over start value - 筋力オーバー開始値
	// DESC: Strength over start value - 筋力オーバー開始値
	uint8_t overStrength;

	// NAME: Parry attack base value - パリィ攻撃基本値
	// DESC: Basic value to defeat the enemy's parry - 敵のパリィをやぶるための基本値
	uint8_t attackBaseParry;

	// NAME: Parry defense value - パリィ防御値
	// DESC: Used to judge whether to be a parry or a guard at the time of parry judgment - パリィ判定時に、パリィになるかガードになるかの判定に利用
	uint8_t defenseBaseParry;

	// NAME: Flick defense basic value - はじき防御力基本値
	// DESC: Used to determine if it will pop when guarding an enemy attack - 敵の攻撃をガードしたときに、はじけるかどうかの判定に利用
	uint8_t guardBaseRepel;

	// NAME: Flick attack power basic value - はじき攻撃力基本値
	// DESC: Guard Used to determine whether or not to be repelled when attacking an enemy - ガード敵を攻撃した時に、はじかれるかどうかの判定に利用
	uint8_t attackBaseRepel;

	// NAME: Guard cut invalidation magnification - ガードカット無効化倍率
	// DESC: Magnification that invalidates the opponent's guard cut. -100 is completely invalid. Double the defense effect of the opponent at 100. - 相手のガードカットを無効化させる倍率。-100で完全無効。100で相手の防御効果倍増。
	int8_t guardCutCancelRate;

	// NAME: Guard level - ガードレベル
	// DESC: When guarding, which guard motion will the enemy attack? Decide - ガードしたとき、敵の攻撃をどのガードモーションで受けるか？を決める
	int8_t guardLevel;

	// NAME: Slash attack cut rate - 斬撃攻撃カット率
	// DESC: Looking at the attack type, what percentage of the damage of the slashing attribute is cut? Specify - 攻撃タイプを見て、斬撃属性のダメージを何％カットするか？を指定
	int8_t slashGuardCutRate;

	// NAME: Batter attack cut rate - 打撃攻撃カット率
	// DESC: Looking at the attack type, what percentage of the damage of the hit attribute is cut? Specify - 攻撃タイプを見て、打撃属性のダメージを何％カットするか？を指定
	int8_t blowGuardCutRate;

	// NAME: Puncture attack cut rate - 刺突攻撃カット率
	// DESC: Looking at the attack type, what percentage of the damage of the piercing attribute is cut? Specify - 攻撃タイプを見て、刺突属性のダメージを何％カットするか？を指定
	int8_t thrustGuardCutRate;

	// NAME: Poison resistance cut rate - 毒耐性カット率
	// DESC: How much to cut the attack power to poison (set to the special effect parameter) - 毒にする攻撃力（特殊効果パラメータに設定）をどれだけカットするか
	int8_t poisonGuardResist;

	// NAME: Epidemic attack cut rate - 疫病攻撃カット率
	// DESC: How much to cut the attack power (set as a special effect parameter) to make it a plague - 疫病にする攻撃力（特殊効果パラメータに設定）をどれだけカットするか
	int8_t diseaseGuardResist;

	// NAME: Bleeding attack cut rate - 出血攻撃カット率
	// DESC: How much to cut the attack power (set as a special effect parameter) to make bleeding - 出血にする攻撃力（特殊効果パラメータに設定）をどれだけカットするか
	int8_t bloodGuardResist;

	// NAME: Curse attack cut rate - 呪攻撃カット率
	// DESC: How much to cut the attack power (set as a special effect parameter) to curse - 呪いにする攻撃力（特殊効果パラメータに設定）をどれだけカットするか
	int8_t curseGuardResist;

	// NAME: Physical attribute 1 - 物理属性1
	// DESC: Physical attribute 1 - 物理属性1
	uint8_t atkAttribute;

	// NAME: Right hand equipment - 右手装備
	// DESC: Is it possible to equip it with the right hand? - 右手装備可能か.
	uint8_t rightHandEquipable: 1;

	// NAME: Left hand equipment - 左手装備
	// DESC: Is it possible to equip it with the left hand? - 左手装備可能か.
	uint8_t leftHandEquipable: 1;

	// NAME: Two-handed equipment - 両手装備
	// DESC: Is it possible to equip with both hands? - 両手装備可能か.
	uint8_t bothHandEquipable: 1;

	// NAME: Bow and arrow bullet equipment - 弓矢弾装備
	// DESC: Is it possible to equip a bow bullet? - 弓用矢弾装備可能か.
	uint8_t arrowSlotEquipable: 1;

	// NAME: Crossbow bullet equipment - 弩矢弾装備
	// DESC: Is it possible to equip a crossbow bullet? - 弩用矢弾装備可能か.
	uint8_t boltSlotEquipable: 1;

	// NAME: Can be guarded - ガード可能
	// DESC: Guard with L1 when equipped with left hand - 左手装備時L1でガード
	uint8_t enableGuard: 1;

	// NAME: Parry possible - パリィ可能
	// DESC: Parry with L2 when equipped with left hand - 左手装備時L2でパリィ
	uint8_t enableParry: 1;

	// NAME: Magical possible - 魔法可能
	// DESC: Activates magic when attacking - 攻撃時に魔法発動
	uint8_t enableMagic: 1;

	// NAME: Can be spelled - 呪術可能
	// DESC: Cast magic when attacking - 攻撃時に呪術発動
	uint8_t enableSorcery: 1;

	// NAME: Miracle possible - 奇蹟可能
	// DESC: Miracle activated when attacking - 攻撃時に奇蹟発動
	uint8_t enableMiracle: 1;

	// NAME: Pledge magic possible - 誓約魔法可能
	// DESC: Activates pledge magic when attacking - 攻撃時に誓約魔法発動
	uint8_t enableVowMagic: 1;

	// NAME: Normal - 通常
	// DESC: Attack type for menu display. Is it normal? - メニュー表示用攻撃タイプ。通常か
	uint8_t isNormalAttackType: 1;

	// NAME: Batter - 打撃
	// DESC: Attack type for menu display. Is it a blow? - メニュー表示用攻撃タイプ。打撃か
	uint8_t isBlowAttackType: 1;

	// NAME: Slashing - 斬撃
	// DESC: Attack type for menu display. Is it a slash? - メニュー表示用攻撃タイプ。斬撃か
	uint8_t isSlashAttackType: 1;

	// NAME: Piercing - 刺突
	// DESC: Attack type for menu display. Is it a piercing? - メニュー表示用攻撃タイプ。刺突か
	uint8_t isThrustAttackType: 1;

	// NAME: Is it possible to enchant? - エンチャント可能か？
	// DESC: Can it be strengthened with pine fat? - 松脂などで、強化可能か？
	uint8_t isEnhance: 1;

	// NAME: Is there a humanity correction? - 人間性補正あるか
	// DESC: Is there an attack power correction by human nature? - 人間性による攻撃力補正があるか
	uint8_t isHeroPointCorrect: 1;

	// NAME: Can it be strengthened? - 強化できるか？
	// DESC: Listed in the enhancement target list at the enhancement shop (may be deleted due to specification changes?) - 強化ショップで強化対象リストに並ぶ(仕様変更で削除するかも？)
	uint8_t isCustom: 1;

	// NAME: Is job change reset prohibited? - 転職リセット禁止か
	// DESC: Is job change reset prohibited? - 転職リセット禁止か
	uint8_t disableBaseChangeReset: 1;

	// NAME: Is repair prohibited? - 修理禁止か
	// DESC: Is repair prohibited? - 修理禁止か
	uint8_t disableRepair: 1;

	// NAME: Is it a dark hand? - ダークハンドか
	// DESC: Is it a dark hand? - ダークハンドか
	uint8_t isDarkHand: 1;

	// NAME: Is there a simple model for DLC? - DLC用シンプルモデルありか
	// DESC: Is there a simple model for DLC? - ＤＬＣ用シンプルモデルが存在しているか
	uint8_t simpleModelForDlc: 1;

	// NAME: Lantern weapon - ランタン武器
	// DESC: Is it a lantern weapon? - ランタン武器か
	uint8_t lanternWep: 1;

	// NAME: Anti-spirit weapon - 対霊武器
	// DESC: NPC Para's "spirit body" will now hit the opponent of ○. Also, the attack para "Is it a ghost attack?" Will be able to guard the attack of ○. - NPCパラの「霊体か」が○の相手に攻撃を当たるようになります。また、攻撃パラの「霊体攻撃か」が○の攻撃をガードできるようになります。
	uint8_t isVersusGhostWep: 1;

	// NAME: Weapon career change category - 武器転職カテゴリ
	// DESC: Weapon career change category. Used to display the attribute icon. - 武器転職カテゴリ。属性アイコン表示に使用します。
	uint8_t baseChangeCategory: 6;

	// NAME: Is it a dragon hunt? - 竜狩りか
	// DESC: Is it a dragon hunting weapon? - 竜狩り武器か
	uint8_t isDragonSlayer: 1;

	// NAME: Can i deposit - 預けれるか
	// DESC: Can you leave it in the warehouse? - 倉庫に預けれるか
	uint8_t isDeposit: 1;

	// NAME: Is multi-drop sharing prohibited? - マルチドロップ共有禁止か
	// DESC: Is multi-drop sharing prohibited? - マルチドロップ共有禁止か
	uint8_t disableMultiDropShare: 1;

	// NAME: Can you throw it away - 捨てれるか
	// DESC: Can you throw away the item? TRUE = thrown away - アイテムを捨てれるか？TRUE=捨てれる
	uint8_t isDiscard: 1;

	// NAME: Can you put it on the spot - その場に置けるか
	// DESC: Can I put the item on the spot? TRUE = can be placed - アイテムをその場に置けるか？TRUE=置ける
	uint8_t isDrop: 1;

	// NAME: Acquisition log display condition - 取得ログ表示条件
	// DESC: Whether to display in the item acquisition log when acquiring the item (not entered: ○) - アイテム取得時にアイテム取得ログに表示するか（未入力: ○）
	uint8_t showLogCondType: 1;

	// NAME: Can be thrown - 投げ可能
	// DESC: Whether it is a throwable weapon - 投げ可能な武器かどうか
	uint8_t enableThrow: 1;

	// NAME: Acquisition dialog display condition - 取得ダイアログ表示条件
	// DESC: Whether to display it in the item acquisition dialog when acquiring an item (not entered: new only) - アイテム取得時にアイテム取得ダイアログに表示するか（未入力: newのみ）
	uint8_t showDialogCondType: 2;

	// NAME: Is it prohibited to change the magic stone attribute? - 魔石属性変更禁止か
	// DESC: Is it prohibited to change the magic stone attribute? - 魔石属性変更禁止か
	uint8_t disableGemAttr: 1;

	// NAME: Defensive SFX Material 1 - 防御SFX材質1
	// DESC: Defensive SFX material used from attack para 1 - 攻撃パラから使用される防御SFX材質1
	uint16_t defSfxMaterial1;

	// NAME: Weapon collaborative setting - 武器コライダブル設定
	// DESC: Weapon collaborative setting - 武器のコライダブル設定
	uint8_t wepCollidableType0;

	// NAME: Weapon 1 collaborative setting - 武器1コライダブル設定
	// DESC: Weapon 1 collaborative setting - 武器1のコライダブル設定
	uint8_t wepCollidableType1;

	// NAME: Attitude control ID (right hand) - 姿勢制御ID(右手)
	// DESC: Attitude control ID (right hand) - 姿勢制御ID(右手)
	uint8_t postureControlId_Right;

	// NAME: Attitude control ID (left hand) - 姿勢制御ID(左手)
	// DESC: Attitude control ID (left hand) - 姿勢制御ID(左手)
	uint8_t postureControlId_Left;

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

	// NAME: Defensive SFX Material 2 - 防御SFX材質2
	// DESC: Defensive SFX material used from attack para 2 - 攻撃パラから使用される防御SFX材質2
	uint16_t defSfxMaterial2;

	// NAME: Defense SE Material 2 - 防御SE材質2
	// DESC: Defense SE material used from attack para 2 - 攻撃パラから使用される防御SE材質2
	uint16_t defSeMaterial2;

	// NAME: Suction position Id - 吸着位置Id
	// DESC: Weapon adsorption position parameter Id. This value determines the position where the weapon is attracted (-1: Refer to the value written directly in the old source code). - 武器吸着位置パラメータのId。この値により武器が吸着する位置を決定する(-1：旧ソースコード直書きの値を参照する)
	int32_t absorpParamId;

	// NAME: Toughness correction factor - 強靭度 補正倍率
	// DESC: It is a magnification that corrects the basic value of toughness. - 強靭度の基本値を補正する倍率です
	float toughnessCorrectRate;

	// NAME: Is the armor SA damage multiplier valid even at the initial value? - 防具SAダメージ倍率が初期値でも有効か？
	// DESC: Whether the toughness calculation is performed even if the armor SA is the initial value. Check the toughness specification .xlsx for details - 防具SAが初期値でも強靭度計算が行われるかどうか。詳細は強靭度仕様書.xlsxを確認してください
	uint8_t isValidTough_ProtSADmg: 1;

	// NAME: Is it a twin sword? - 双剣か
	// DESC: Is this weapon a twin sword? - この武器は双剣か。
	uint8_t isDualBlade: 1;

	// NAME: Is it possible to load automatically? - 自動装填可能か
	// DESC: Only valid for arrows and bolts. Whether to automatically equip this weapon if the target equipment slot is empty when picking up this weapon - 矢・ボルトのみ有効。新しくこの武器を拾っ時に対象装備スロットが空の場合に自動で装備するかどうか
	uint8_t isAutoEquip: 1;

	// NAME: Is emergency avoidance possible? - 緊急回避可能か
	// DESC: Is it an emergency avoidable weapon? Pass it to the behavior script. - 緊急回避可能な武器かどうか。ビヘイビアスクリプトに渡す。
	uint8_t isEnableEmergencyStep: 1;

	// NAME: Is it hidden during cutscenes? - カットシーン中非表示か
	// DESC: Is it hidden during cutscenes? - カットシーン中非表示か
	uint8_t invisibleOnRemo: 1;

	// NAME: pad - pad
	uint8_t pad2: 3;

	// NAME: Correction type (magic attack power) - 補正タイプ（魔法攻撃力）
	// DESC: Determining the type of magic attack power correction graph with primary parameters - 一次パラメータによる魔法攻撃力の補正グラフのタイプを決める
	uint8_t correctType_Magic;

	// NAME: Correction type (flame attack power) - 補正タイプ（炎攻撃力）
	// DESC: Determine the type of flame attack power correction graph with primary parameters - 一次パラメータによる炎攻撃力の補正グラフのタイプを決める
	uint8_t correctType_Fire;

	// NAME: Correction type (lightning attack power) - 補正タイプ（雷攻撃力）
	// DESC: Determine the type of lightning attack power correction graph with primary parameters - 一次パラメータによる雷攻撃力の補正グラフのタイプを決める
	uint8_t correctType_Thunder;

	// NAME: Special attack E damage multiplier - 特攻Eダメージ倍率
	// DESC: Damage multiplier for special attack E - 特攻E用のダメージ倍率
	float weakE_DamageRate;

	// NAME: Special attack F damage multiplier - 特攻Fダメージ倍率
	// DESC: Damage multiplier for special attack F - 特攻F用のダメージ倍率
	float weakF_DamageRate;

	// NAME: Dark attack power cut rate when guarding - ガード時闇攻撃力カット率
	// DESC: How much to cut the dark attack? - 闇攻撃をどれだけカットするか？
	float darkGuardCutRate;

	// NAME: Dark attack power basic value - 闇攻撃力基本値
	// DESC: Basic value of darkness attack that damages the enemy's HP - 敵のＨＰにダメージを与える闇属性攻撃の基本値
	uint16_t attackBaseDark;

	// NAME: Correction type (dark attack power) - 補正タイプ（闇攻撃力）
	// DESC: Determine the type of darkness attack power correction graph with primary parameters - 一次パラメータによる闇攻撃力の補正グラフのタイプを決める
	uint8_t correctType_Dark;

	// NAME: Correction type (poison attack power) - 補正タイプ（毒攻撃力）
	// DESC: Determining the type of poison attack power correction graph with primary parameters - 一次パラメータによる毒攻撃力の補正グラフのタイプを決める
	uint8_t correctType_Poison;

	// NAME: Sort item type ID - ソートアイテム種別ID
	// DESC: Sort item type ID. In the sort "Item type order", the same ID is displayed together as the same group. - ソートアイテム種別ID。ソート「アイテム種別順」にて、同じIDは同じグループとしてまとめて表示されます
	uint8_t sortGroupId;

	// NAME: Physical attribute 2 - 物理属性2
	// DESC: Physical attribute 2 - 物理属性2
	uint8_t atkAttribute2;

	// NAME: Sleep attack cut rate - 睡眠攻撃カット率
	// DESC: How much to cut the attack power (set as a special effect parameter) to sleep - 睡眠にする攻撃力（特殊効果パラメータに設定）をどれだけカットするか
	int8_t sleepGuardResist;

	// NAME: Mad attack cut rate - 発狂攻撃カット率
	// DESC: How much to cut the attack power (set to the special effect parameter) that makes you go mad - 発狂にする攻撃力（特殊効果パラメータに設定）をどれだけカットするか
	int8_t madnessGuardResist;

	// NAME: Correction type (bleeding attack power) - 補正タイプ（出血攻撃力）
	// DESC: Determine the type of bleeding attack power correction graph with primary parameters - 一次パラメータによる出血攻撃力の補正グラフのタイプを決める
	uint8_t correctType_Blood;

	// NAME: Equipment proper luck - 装備適正運
	// DESC: Equipment appropriate value. - 装備適正値.
	uint8_t properLuck;

	// NAME: Cold attack cut rate - 冷気攻撃カット率
	// DESC: How much to cut the attack power (set to the special effect parameter) to cool down - 冷気にする攻撃力（特殊効果パラメータに設定）をどれだけカットするか
	int8_t freezeGuardResist;

	// NAME: Automatic replenishment type - 自動補充タイプ
	// DESC: Controls whether or not to automatically replenish and default settings - 自動補充する/しないの可否およびデフォルト設定をコントロールします
	uint8_t autoReplenishType;

	// NAME: Arts parameter ID - アーツパラメータID
	// DESC: Arts parameter ID - アーツパラメータのID
	int32_t swordArtsParamId;

	// NAME: Luck correction - 運補正
	// DESC: Charapara correction value. - キャラパラ補正値.
	float correctLuck;

	// NAME: Equipment ID for quiver (magazine) display model - 矢筒(弾倉)表示モデル用装備ID
	// DESC: Equipment number of the quiver (magazine) display model. In the case of a bow, it is displayed as a quiver, and in the case of a crossbow, it is displayed as a magazine. - 矢筒(弾倉)表示モデルの装備品番号。弓の場合は矢筒、弩の場合は弾倉として表示する。
	uint32_t arrowBoltEquipId;

	// NAME: Level setting at the time of reduction - 還元時レベル設定
	// DESC: Type of how to set the enhancement level when returning or deriving a weapon - 武器を還元・派生させるときに強化レベルをどう設定するかの種別
	uint8_t DerivationLevelType;

	// NAME: Enchantment Sfx size - エンチャントSfxサイズ
	// DESC: Value offset to enchantment SfxId - エンチャントSfxIdにオフセットする値
	uint8_t enchantSfxSize;

	// NAME: Weapon type - 武器種別
	// DESC: Weapon type. Used for linking text and magic stones (* It is now used for other than text) - 武器種別。テキストと、魔石の紐付けに使われる（※テキスト以外にも使われるようになった）
	uint16_t wepType;

	// NAME: Physical attack cut rate when guarding_maximum correction value - ガード時物理攻撃カット率_最大補正値
	// DESC: Maximum damage physical cut rate correction value when guarding - ガード時のダメージ物理カット率の補正値の最大値
	float physGuardCutRate_MaxCorrect;

	// NAME: Magic attack cut rate when guarding_maximum correction value - ガード時魔法攻撃カット率_最大補正値
	// DESC: Maximum value of correction value of damage magic cut rate when guarding - ガード時のダメージ魔法カット率の補正値の最大値
	float magGuardCutRate_MaxCorrect;

	// NAME: Flame attack power cut rate when guarding_maximum correction value - ガード時炎攻撃力カット率_最大補正値
	// DESC: Maximum value of correction value of damage flame cut rate when guarding - ガード時のダメージ炎カット率の補正値の最大値
	float fireGuardCutRate_MaxCorrect;

	// NAME: Electric shock attack power cut rate when guarding_maximum correction value - ガード時電撃攻撃力カット率_最大補正値
	// DESC: Maximum value of correction value of damage electric shock cut rate when guarding - ガード時のダメージ電撃カット率の補正値の最大値
	float thunGuardCutRate_MaxCorrect;

	// NAME: Darkness attack power cut rate when guarding_maximum correction value - ガード時闇攻撃力カット率_最大補正値
	// DESC: Maximum value of correction value of damage darkness cut rate when guarding - ガード時のダメージ闇カット率の補正値の最大値
	float darkGuardCutRate_MaxCorrect;

	// NAME: Poison resistance cut rate_maximum correction value - 毒耐性カット率_最大補正値
	// DESC: Maximum value of cut rate correction value for attack power against poison (set as special effect parameter) - 毒に対する攻撃力（特殊効果パラメータに設定）のカット率補正値の最大値
	float poisonGuardResist_MaxCorrect;

	// NAME: Epidemic resistance cut rate_maximum correction value - 疫病耐性カット率_最大補正値
	// DESC: Maximum value of cut rate correction value for attack power against plague (set as special effect parameter) - 疫病に対する攻撃力（特殊効果パラメータに設定）のカット率補正値の最大値
	float diseaseGuardResist_MaxCorrect;

	// NAME: Bleeding resistance cut rate_maximum correction value - 出血耐性カット率_最大補正値
	// DESC: Maximum value of cut rate correction value for attack power against bleeding (set as special effect parameter) - 出血に対する攻撃力（特殊効果パラメータに設定）のカット率補正値の最大値
	float bloodGuardResist_MaxCorrect;

	// NAME: Curse resistance cut rate_maximum correction value - 呪耐性カット率_最大補正値
	// DESC: Maximum value of cut rate correction value for attack power against curse (set as special effect parameter) - 呪いに対する攻撃力（特殊効果パラメータに設定）のカット率補正値の最大値
	float curseGuardResist_MaxCorrect;

	// NAME: Cold resistance cut rate_maximum correction value - 冷気耐性カット率_最大補正値
	// DESC: Maximum value of cut rate correction value for attack power against cold air (set as special effect parameter) - 冷気に対する攻撃力（特殊効果パラメータに設定）のカット率補正値の最大値
	float freezeGuardResist_MaxCorrect;

	// NAME: Stamina defense when guarding_maximum correction value - ガード時スタミナ防御力_最大補正値
	// DESC: When the guard is successful, the maximum value of the defense power correction value against the enemy's stamina attack - ガード成功時に、敵のスタミナ攻撃に対する防御力の補正値の最大値
	float staminaGuardDef_MaxCorrect;

	// NAME: Resident SfxId1 - 常駐SfxId１
	// DESC: Resident SfxId1 - 常駐SfxId1
	int32_t residentSfxId_1;

	// NAME: Resident SfxId2 - 常駐SfxId２
	// DESC: Resident SfxId2 - 常駐SfxId2
	int32_t residentSfxId_2;

	// NAME: Resident SfxId3 - 常駐SfxId３
	// DESC: Resident SfxId3 - 常駐SfxId3
	int32_t residentSfxId_3;

	// NAME: Resident SfxId4 - 常駐SfxId４
	// DESC: Resident SfxId4 - 常駐SfxId4
	int32_t residentSfxId_4;

	// NAME: Resident Sfx Damipoli Id1 - 常駐SfxダミポリId１
	// DESC: Resident Sfx Damipoli Id1 - 常駐SfxダミポリId１
	int32_t residentSfx_DmyId_1;

	// NAME: Resident Sfx Damipoli Id2 - 常駐SfxダミポリId２
	// DESC: Resident Sfx Damipoli Id2 - 常駐SfxダミポリId２
	int32_t residentSfx_DmyId_2;

	// NAME: Resident Sfx Damipoli Id3 - 常駐SfxダミポリId３
	// DESC: Resident Sfx Damipoli Id3 - 常駐SfxダミポリId３
	int32_t residentSfx_DmyId_3;

	// NAME: Resident Sfx Damipoli Id4 - 常駐SfxダミポリId４
	// DESC: Resident Sfx Damipoli Id4 - 常駐SfxダミポリId４
	int32_t residentSfx_DmyId_4;

	// NAME: Stamina consumption ratio - スタミナ消費量倍率
	// DESC: Stamina consumption ratio - スタミナ消費量倍率
	float staminaConsumptionRate;

	// NAME: Physical damage correction factor against player - 対プレイヤー 物理ダメージ補正倍率
	// DESC: Only attacks on the player will correct the damage done. - プレイヤーに対する攻撃のみ、与えるダメージを補正する。
	float vsPlayerDmgCorrectRate_Physics;

	// NAME: Anti-player magic damage correction factor - 対プレイヤー 魔法ダメージ補正倍率
	// DESC: Only attacks on the player will correct the damage done. - プレイヤーに対する攻撃のみ、与えるダメージを補正する。
	float vsPlayerDmgCorrectRate_Magic;

	// NAME: Anti-player flame damage correction factor - 対プレイヤー 炎ダメージ補正倍率
	// DESC: Only attacks on the player will correct the damage done. - プレイヤーに対する攻撃のみ、与えるダメージを補正する。
	float vsPlayerDmgCorrectRate_Fire;

	// NAME: Anti-player lightning damage correction factor - 対プレイヤー 雷ダメージ補正倍率
	// DESC: Only attacks on the player will correct the damage done. - プレイヤーに対する攻撃のみ、与えるダメージを補正する。
	float vsPlayerDmgCorrectRate_Thunder;

	// NAME: Against player darkness damage correction factor - 対プレイヤー 闇ダメージ補正倍率
	// DESC: Only attacks on the player will correct the damage done. - プレイヤーに対する攻撃のみ、与えるダメージを補正する。
	float vsPlayerDmgCorrectRate_Dark;

	// NAME: Anti-player poison damage correction factor - 対プレイヤー 毒ダメージ補正倍率
	// DESC: Only attacks on the player will correct the damage done. - プレイヤーに対する攻撃のみ、与えるダメージを補正する。
	float vsPlayerDmgCorrectRate_Poison;

	// NAME: Anti-player bleeding damage correction factor - 対プレイヤー 出血ダメージ補正倍率
	// DESC: Only attacks on the player will correct the damage done. - プレイヤーに対する攻撃のみ、与えるダメージを補正する。
	float vsPlayerDmgCorrectRate_Blood;

	// NAME: Anti-player cold damage correction factor - 対プレイヤー 冷気ダメージ補正倍率
	// DESC: Only attacks on the player will correct the damage done. - プレイヤーに対する攻撃のみ、与えるダメージを補正する。
	float vsPlayerDmgCorrectRate_Freeze;

	// NAME: Weapon ability release status value: Strength - 武器能力解放ステータス値：筋力
	// DESC: To change the R2 attack into a special action when the status is X or higher when using a specific weapon. - 特定の武器を使った際、ステータスがX以上だとR2攻撃が特殊なアクションに変わるようするためのもの
	int32_t attainmentWepStatusStr;

	// NAME: Weapon ability release status value: Skill - 武器能力解放ステータス値：技量
	// DESC: To change the R2 attack into a special action when the status is X or higher when using a specific weapon. - 特定の武器を使った際、ステータスがX以上だとR2攻撃が特殊なアクションに変わるようするためのもの
	int32_t attainmentWepStatusDex;

	// NAME: Weapon ability release status value: reason - 武器能力解放ステータス値：理力
	// DESC: To change the R2 attack into a special action when the status is X or higher when using a specific weapon. - 特定の武器を使った際、ステータスがX以上だとR2攻撃が特殊なアクションに変わるようするためのもの
	int32_t attainmentWepStatusMag;

	// NAME: Weapon ability release status value: Faith - 武器能力解放ステータス値：信仰
	// DESC: This is to change the R2 attack into a special action when the status is X or higher when using a specific weapon. - 特定の武器を使った際、ステータスがX以上だとR2攻撃が特殊なアクションに変わるようするためのもの
	int32_t attainmentWepStatusFai;

	// NAME: Weapon ability release status value: Luck - 武器能力解放ステータス値：運
	// DESC: This is to change the R2 attack into a special action when the status is X or higher when using a specific weapon. - 特定の武器を使った際、ステータスがX以上だとR2攻撃が特殊なアクションに変わるようするためのもの
	int32_t attainmentWepStatusLuc;

	// NAME: Attack attribute correction ID - 攻撃属性補正ID
	// DESC: ID of the parameter that corrects the attack attribute - 攻撃属性を補正するパラメータのID
	int32_t attackElementCorrectId;

	// NAME: Selling price - 販売価格
	// DESC: Selling price - 販売価格
	int32_t saleValue;

	// NAME: Enhanced shop category - 強化ショップカテゴリ
	// DESC: Enhanced shop category - 強化ショップカテゴリ
	uint8_t reinforceShopCategory;

	// NAME: Maximum number of arrows - 矢の最大所持数
	// DESC: Maximum number of arrows - 矢の最大所持数
	uint8_t maxArrowQuantity;

	// NAME: Resident SFX1 Whether to display at the time of sword delivery - 常駐SFX1納刀時表示するか
	// DESC: If "Do you want to display when resident SFX1 is delivered?" Is true, hide the SFX set to "resident SFX ID1" when the weapon is delivered. - 「常駐SFX1納刀時表示するか」がtrueの場合、武器が納刀された時に「常駐SFXID1」に設定されているSFXを非表示にする
	uint8_t residentSfx_1_IsVisibleForHang: 1;

	// NAME: Whether to display when resident SFX2 sword is delivered - 常駐SFX2納刀時表示するか
	// DESC: If "Do you want to display when resident SFX2 is delivered?" Is true, hide the SFX set to "resident SFX ID2" when the weapon is delivered. - 「常駐SFX2納刀時表示するか」がtrueの場合、武器が納刀された時に「常駐SFXID2」に設定されているSFXを非表示にする
	uint8_t residentSfx_2_IsVisibleForHang: 1;

	// NAME: Whether to display when resident SFX3 sword is delivered - 常駐SFX3納刀時表示するか
	// DESC: If "Do you want to display when resident SFX3 is delivered?" Is true, hide the SFX set to "resident SFX ID3" when the weapon is delivered. - 「常駐SFX3納刀時表示するか」がtrueの場合、武器が納刀された時に「常駐SFXID3」に設定されているSFXを非表示にする
	uint8_t residentSfx_3_IsVisibleForHang: 1;

	// NAME: Whether to display when resident SFX4 sword is delivered - 常駐SFX4納刀時表示するか
	// DESC: If "Do you want to display when resident SFX4 is delivered?" Is true, hide the SFX set to "resident SFX ID 4" when the weapon is delivered. - 「常駐SFX4納刀時表示するか」がtrueの場合、武器が納刀された時に「常駐SFXID4」に設定されているSFXを非表示にする
	uint8_t residentSfx_4_IsVisibleForHang: 1;

	// NAME: Model_0 Is it possible to replace the Soul Param ID? - モデル_0 ソウルパラムID差し替え可能か
	// DESC: Whether the vfx parameter "Soul Param ID for Weapon Enchantment" and "Invisible Weapon for Weapon Enchantment" settings are applied - vfxパラメータの「武器エンチャント用ソウルパラムID」と「武器エンチャント用インビジブルウェポンか」設定が適応されるか
	uint8_t isSoulParamIdChange_model0: 1;

	// NAME: Is it possible to replace the model _1 Soul Param ID? - モデル_1 ソウルパラムID差し替え可能か
	// DESC: Whether the vfx parameter "Soul Param ID for Weapon Enchantment" and "Invisible Weapon for Weapon Enchantment" settings are applied - vfxパラメータの「武器エンチャント用ソウルパラムID」と「武器エンチャント用インビジブルウェポンか」設定が適応されるか
	uint8_t isSoulParamIdChange_model1: 1;

	// NAME: Model_2 Soul Param ID can be replaced? - モデル_2 ソウルパラムID差し替え可能か
	// DESC: Whether the vfx parameter "Soul Param ID for Weapon Enchantment" and "Invisible Weapon for Weapon Enchantment" settings are applied - vfxパラメータの「武器エンチャント用ソウルパラムID」と「武器エンチャント用インビジブルウェポンか」設定が適応されるか
	uint8_t isSoulParamIdChange_model2: 1;

	// NAME: Model_3 Is it possible to replace the Soul Param ID? - モデル_3 ソウルパラムID差し替え可能か
	// DESC: Whether the vfx parameter "Soul Param ID for Weapon Enchantment" and "Invisible Weapon for Weapon Enchantment" settings are applied - vfxパラメータの「武器エンチャント用ソウルパラムID」と「武器エンチャント用インビジブルウェポンか」設定が適応されるか
	uint8_t isSoulParamIdChange_model3: 1;

	// NAME: Weapon SEID offset value - 武器SEIDオフセット値
	// DESC: SEID offset value - SEIDのオフセット値 
	int8_t wepSeIdOffset;

	// NAME: Evolution price - 進化価格
	// DESC: Evolution price - 進化価格
	int32_t baseChangePrice;

	// NAME: Level sync correction ID - レベルシンク補正ID
	// DESC: Level sync correction ID - レベルシンク補正ID
	int16_t levelSyncCorrectId;

	// NAME: Correction type (sleep attack power) - 補正タイプ（睡眠攻撃力）
	// DESC: Determine the type of sleep attack correction graph with primary parameters - 一次パラメータによる睡眠攻撃力の補正グラフのタイプを決める
	uint8_t correctType_Sleep;

	// NAME: Correction type (mad attack power) - 補正タイプ（発狂攻撃力）
	// DESC: Determining the type of mad attack power correction graph with primary parameters - 一次パラメータによる発狂攻撃力の補正グラフのタイプを決める
	uint8_t correctType_Madness;

	// NAME: Rarity - レア度
	// DESC: Rarity used in item acquisition logs - アイテム取得ログで使うレア度
	uint8_t rarity;

	// NAME: Is it possible to attach magic stones? - 魔石装着可能か
	// DESC: Is it possible to attach magic stones? - 魔石装着可能か
	uint8_t gemMountType;

	// NAME: Weapon regain amount - 武器リゲイン量
	// DESC: Weapon regain amount - 武器リゲイン量
	uint16_t wepRegainHp;

	// NAME: Effect text ID 00 - 効果テキストID00
	// DESC: Effect text ID 00 (Weapon_Effect). Weapon-specific effect text to display in status - 効果テキストID00(Weapon_Effect)。ステータスに表示する武器固有効果のテキスト
	int32_t spEffectMsgId0;

	// NAME: Effect text ID 01 - 効果テキストID01
	// DESC: Effect text ID 01 (Weapon_Effect). Weapon-specific effect text to display in status - 効果テキストID01(Weapon_Effect)。ステータスに表示する武器固有効果のテキスト
	int32_t spEffectMsgId1;

	// NAME: Effect text ID 02 - 効果テキストID02
	// DESC: Effect text ID 02 (Weapon_Effect). Weapon-specific effect text to display in status - 効果テキストID02(Weapon_Effect)。ステータスに表示する武器固有効果のテキスト
	int32_t spEffectMsgId2;

	// NAME: Derivative source enhancement +16 - 派生元 強化+16
	// DESC: This weapon's enhancement source weapon ID 16 - この武器の強化元武器ID16
	int32_t originEquipWep16;

	// NAME: Derivative source enhancement +17 - 派生元 強化+17
	// DESC: This weapon's enhancement source weapon ID 17 - この武器の強化元武器ID17
	int32_t originEquipWep17;

	// NAME: Derivative source enhancement +18 - 派生元 強化+18
	// DESC: This weapon's enhancement source weapon ID18 - この武器の強化元武器ID18
	int32_t originEquipWep18;

	// NAME: Derivative source enhancement +19 - 派生元 強化+19
	// DESC: This weapon's enhancement source weapon ID 19 - この武器の強化元武器ID19
	int32_t originEquipWep19;

	// NAME: Derivative source enhancement +20 - 派生元 強化+20
	// DESC: This weapon's enhancement source weapon ID 20 - この武器の強化元武器ID20
	int32_t originEquipWep20;

	// NAME: Derivative source enhancement +21 - 派生元 強化+21
	// DESC: This weapon's enhancement source weapon ID21 - この武器の強化元武器ID21
	int32_t originEquipWep21;

	// NAME: Derivative source enhancement +22 - 派生元 強化+22
	// DESC: This weapon's enhancement source weapon ID 22 - この武器の強化元武器ID22
	int32_t originEquipWep22;

	// NAME: Derivative source enhancement +23 - 派生元 強化+23
	// DESC: This weapon's enhancement source weapon ID 23 - この武器の強化元武器ID23
	int32_t originEquipWep23;

	// NAME: Derivative source enhancement +24 - 派生元 強化+24
	// DESC: This weapon's enhancement source weapon ID 24 - この武器の強化元武器ID24
	int32_t originEquipWep24;

	// NAME: Derivative source enhancement +25 - 派生元 強化+25
	// DESC: This weapon's enhancement source weapon ID 25 - この武器の強化元武器ID25
	int32_t originEquipWep25;

	// NAME: Anti-player sleep damage correction factor - 対プレイヤー 睡眠ダメージ補正倍率
	// DESC: Only attacks on the player will correct the damage done. - プレイヤーに対する攻撃のみ、与えるダメージを補正する。
	float vsPlayerDmgCorrectRate_Sleep;

	// NAME: Anti-player mad damage correction factor - 対プレイヤー 発狂ダメージ補正倍率
	// DESC: Only attacks on the player will correct the damage done. - プレイヤーに対する攻撃のみ、与えるダメージを補正する。
	float vsPlayerDmgCorrectRate_Madness;

	// NAME: SA attack cut rate when guarding - ガード時SA攻撃カット率
	// DESC: SA damage cut rate when guard is successful - ガード成功時のSAダメージのカット率
	float saGuardCutRate;

	// NAME: Defensive material variation value - 防御材質バリエーション値
	// DESC: It is a value used to divide the damage SFX and SE into variations in combination with the defense material used when guarding. SEQ16473 - ガード時に使用される防御材質と組み合わせてダメージSFX,SEのバリエーション分けに使用する値です。SEQ16473
	uint8_t defMaterialVariationValue;

	// NAME: Special attribute variation value - 特殊属性バリエーション値
	// DESC: It is a value used to give variation to abnormal state SFX, SE, etc. in combination with the special attribute of the weapon. SEQ16473 - 武器の特殊属性と組み合わせて状態異常SFX,SEなどにバリエーションを持たせるために使用する値です。SEQ16473
	uint8_t spAttributeVariationValue;

	// NAME: Stealth attack power multiplier - ステルス攻撃力倍率
	// DESC: Stealth attack power multiplier - ステルス攻撃力倍率
	int16_t stealthAtkRate;

	// NAME: Anti-player plague damage correction factor - 対プレイヤー 疫病ダメージ補正倍率
	// DESC: Only attacks on the player will correct the damage done. - プレイヤーに対する攻撃のみ、与えるダメージを補正する。
	float vsPlayerDmgCorrectRate_Disease;

	// NAME: Anti-player curse damage correction factor - 対プレイヤー 呪ダメージ補正倍率
	// DESC: Only attacks on the player will correct the damage done. - プレイヤーに対する攻撃のみ、与えるダメージを補正する。
	float vsPlayerDmgCorrectRate_Curse;

	// NAME: pad - pad
	// DESC: pad - pad
	uint8_t pad[8];
};

#endif
