/* This file was automatically generated from XML paramdefs. */
#ifndef _PARAMDEF_EQUIP_PARAM_PROTECTOR_ST_H
#define _PARAMDEF_EQUIP_PARAM_PROTECTOR_ST_H
#pragma once
#include <inttypes.h>

// Data Version: 6
// Is Big Endian: False
// Is Unicode: True
// Format Version: 203
struct EQUIP_PARAM_PROTECTOR_ST {

	// NAME: Do you remove it from the NT version output? - NT版出力から外すか
	// DESC: Parameters marked with ○ are excluded in the NT version package. - ○をつけたパラメータをNT版パッケージでは除外します
	uint8_t disableParam_NT: 1;

	// NAME: Reserve for package output 1 - パッケージ出力用リザーブ1
	// DESC: Reserve for package output 1 - パッケージ出力用リザーブ1
	uint8_t disableParamReserve1: 7;

	// NAME: Reserve for package output 2 - パッケージ出力用リザーブ2
	// DESC: Reserve for package output 2 - パッケージ出力用リザーブ2
	uint8_t disableParamReserve2[3];

	// NAME: Sort ID - ソートID
	// DESC: Sort ID (7 digits is the limit for s32 because the enhancement level is added in the program) - ソートID(プログラム内で強化レベルを加味しているので s32 では７桁が限界)
	int32_t sortId;

	// NAME: Wandering equipment ID - 徘徊装備ID
	// DESC: Replacement equipment ID for wandering ghosts. - 徘徊ゴースト用の差し替え装備ID.
	uint32_t wanderingEquipId;

	// NAME: Sleep tolerance - 睡眠耐性
	// DESC: Difficulty in getting sleep abnormalities - 睡眠状態異常へのかかりにくさ
	uint16_t resistSleep;

	// NAME: Madness resistance - 発狂耐性
	// DESC: Difficulty in getting mad - 発狂状態異常へのかかりにくさ
	uint16_t resistMadness;

	// NAME: SA durability value - SA耐久値
	// DESC: Super armor endurance - スーパーアーマー耐久力
	float saDurability;

	// NAME: Toughness correction factor - 強靭度 補正倍率
	// DESC: It is a magnification that corrects the basic value of toughness. - 強靭度の基本値を補正する倍率です
	float toughnessCorrectRate;

	// NAME: Repair price - 修理価格
	// DESC: Basic repair price - 修理基本価格
	int32_t fixPrice;

	// NAME: Basic price - 基本価格
	// DESC: Basic price - 基本価格
	int32_t basicPrice;

	// NAME: Sale price - 売却価格
	// DESC: Selling price - 販売価格
	int32_t sellValue;

	// NAME: Weight [kg] - 重量[kg]
	// DESC: Weight [kg]. - 重量[kg].
	float weight;

	// NAME: Resident special effect ID1 - 常駐特殊効果ID1
	// DESC: Resident special effect ID1 - 常駐特殊効果ID1
	int32_t residentSpEffectId;

	// NAME: Resident special effect ID2 - 常駐特殊効果ID2
	// DESC: Resident special effect ID2 - 常駐特殊効果ID2
	int32_t residentSpEffectId2;

	// NAME: Resident special effect ID3 - 常駐特殊効果ID3
	// DESC: Resident special effect ID3 - 常駐特殊効果ID3
	int32_t residentSpEffectId3;

	// NAME: Material ID - 素材ID
	// DESC: Material parameter ID required for weapon enhancement - 武器強化に必要な素材パラメータID
	int32_t materialSetId;

	// NAME: Part damage rate - 部位ダメージ率
	// DESC: Part damage rate - 部位ダメージ率
	float partsDamageRate;

	// NAME: SA recovery time correction value - SA回復時間補正値
	// DESC: Super Armor Recovery Time Correction Value - スーパーアーマー回復時間の補正値
	float corectSARecover;

	// NAME: Derivation source - 派生元
	// DESC: Strengthening of this armor Original armor ID - この防具の強化元防具ID
	int32_t originEquipPro;

	// NAME: Derivative source enhancement +1 - 派生元 強化+1
	// DESC: Strengthening this armor Original armor ID1 - この防具の強化元防具ID1
	int32_t originEquipPro1;

	// NAME: Derivative source enhancement +2 - 派生元 強化+2
	// DESC: Strengthening this armor Original armor ID2 - この防具の強化元防具ID2
	int32_t originEquipPro2;

	// NAME: Derivative source enhancement +3 - 派生元 強化+3
	// DESC: Strengthening this armor Original armor ID3 - この防具の強化元防具ID3
	int32_t originEquipPro3;

	// NAME: Derivative source enhancement +4 - 派生元 強化+4
	// DESC: Strengthening this armor Original armor ID4 - この防具の強化元防具ID4
	int32_t originEquipPro4;

	// NAME: Derivative source enhancement +5 - 派生元 強化+5
	// DESC: Strengthening this armor Original armor ID5 - この防具の強化元防具ID5
	int32_t originEquipPro5;

	// NAME: Derivative source enhancement +6 - 派生元 強化+6
	// DESC: Strengthening this armor Original armor ID6 - この防具の強化元防具ID6
	int32_t originEquipPro6;

	// NAME: Derivative source enhancement +7 - 派生元 強化+7
	// DESC: Strengthening this armor Original armor ID7 - この防具の強化元防具ID7
	int32_t originEquipPro7;

	// NAME: Derivative source enhancement +8 - 派生元 強化+8
	// DESC: Strengthening this armor Original armor ID8 - この防具の強化元防具ID8
	int32_t originEquipPro8;

	// NAME: Derivative source enhancement +9 - 派生元 強化+9
	// DESC: Strengthening this armor Original armor ID9 - この防具の強化元防具ID9
	int32_t originEquipPro9;

	// NAME: Derivative source enhancement +10 - 派生元 強化+10
	// DESC: Strengthening this armor Original armor ID10 - この防具の強化元防具ID10
	int32_t originEquipPro10;

	// NAME: Derivative source enhancement +11 - 派生元 強化+11
	// DESC: Strengthening this armor Original armor ID11 - この防具の強化元防具ID11
	int32_t originEquipPro11;

	// NAME: Derivative source enhancement +12 - 派生元 強化+12
	// DESC: Strengthening this armor Original armor ID12 - この防具の強化元防具ID12
	int32_t originEquipPro12;

	// NAME: Derivative source enhancement +13 - 派生元 強化+13
	// DESC: Strengthening this armor Original armor ID13 - この防具の強化元防具ID13
	int32_t originEquipPro13;

	// NAME: Derivative source enhancement +14 - 派生元 強化+14
	// DESC: Strengthening this armor Original armor ID14 - この防具の強化元防具ID14
	int32_t originEquipPro14;

	// NAME: Derivative source enhancement +15 - 派生元 強化+15
	// DESC: Strengthening this armor Original armor ID15 - この防具の強化元防具ID15
	int32_t originEquipPro15;

	// NAME: Man profile enlargement scale - 男横顔拡大スケール
	float faceScaleM_ScaleX;

	// NAME: Male face enlargement scale - 男前顔拡大スケール
	float faceScaleM_ScaleZ;

	// NAME: Maximum magnification for male profile enlargement - 男横顔拡大最大倍率
	float faceScaleM_MaxX;

	// NAME: Maximum magnification for man's face enlargement - 男前顔拡大最大倍率
	float faceScaleM_MaxZ;

	// NAME: Female profile enlargement scale - 女横顔拡大スケール
	float faceScaleF_ScaleX;

	// NAME: Female face enlargement scale - 女前顔拡大スケール
	float faceScaleF_ScaleZ;

	// NAME: Female profile enlargement maximum magnification - 女横顔拡大最大倍率
	float faceScaleF_MaxX;

	// NAME: Maximum magnification for female face enlargement - 女前顔拡大最大倍率
	float faceScaleF_MaxZ;

	// NAME: QWCID - QWCID
	// DESC: QWC parameter ID - QWCのパラメタID
	int32_t qwcId;

	// NAME: Equipment model number - 装備モデル番号
	// DESC: Equipment model number. - 装備モデルの番号.
	uint16_t equipModelId;

	// NAME: Icon ID for men - 男用アイコンID
	// DESC: Men's menu icon ID. - 男用メニューアイコンID.
	uint16_t iconIdM;

	// NAME: Female icon ID - 女用アイコンID
	// DESC: Women's menu icon ID. - 女用メニューアイコンID.
	uint16_t iconIdF;

	// NAME: Knockback cut rate - ノックバックカット率
	// DESC: Knockback reduction value. - ノックバックの減少値.
	uint16_t knockBack;

	// NAME: Knockback repulsion rate - ノックバック反発率
	// DESC: Knockback repulsion rate. - ノックバックの反発率.
	uint16_t knockbackBounceRate;

	// NAME: Durability - 耐久度
	// DESC: Initial durability. - 初期耐久度.
	uint16_t durability;

	// NAME: Maximum durability - 耐久度最大値
	// DESC: New durability. - 新品耐久度.
	uint16_t durabilityMax;

	// NAME: pad - pad
	uint8_t pad03[2];

	// NAME: Repellent defense - はじき防御力
	// DESC: Used to determine the repulsion of enemy attacks. - 敵の攻撃のはじき返し判定に利用.
	uint16_t defFlickPower;

	// NAME: Physical defense - 物理防御力
	// DESC: Physical attack damage protection. - 物理攻撃のダメージ防御.
	uint16_t defensePhysics;

	// NAME: Magic defense - 魔法防御力
	// DESC: Magic attack damage protection. - 魔法攻撃のダメージ防御.
	uint16_t defenseMagic;

	// NAME: Fire defense - 炎防御力
	// DESC: Fire attack damage protection. - 炎攻撃のダメージ防御.
	uint16_t defenseFire;

	// NAME: Electric shock defense - 電撃防御力
	// DESC: Damage protection for electric shock attacks. - 電撃攻撃のダメージ防御.
	uint16_t defenseThunder;

	// NAME: Slash defense - 斬撃防御力
	// DESC: Look at the attack type, and if it is a slashing attribute, reduce the defense power - 攻撃タイプを見て、斬撃属性のときは、防御力を減少させる
	int16_t defenseSlash;

	// NAME: Strike defense - 打撃防御力
	// DESC: Look at the attack attribute, and if it is a hit attribute, reduce the defense power. - 攻撃属性を見て、打撃属性のときは、防御力を減少させる.
	int16_t defenseBlow;

	// NAME: Puncture defense - 刺突防御力
	// DESC: Look at the attack attribute, and if it is a hit attribute, reduce the defense power. - 攻撃属性を見て、打撃属性のときは、防御力を減少させる.
	int16_t defenseThrust;

	// NAME: Poison resistance - 毒耐性
	// DESC: Difficulty in getting poisonous - 毒状態異常へのかかりにくさ
	uint16_t resistPoison;

	// NAME: Epidemic resistance - 疫病耐性
	// DESC: Difficulty in getting sick - 疫病状態異常へのかかりにくさ
	uint16_t resistDisease;

	// NAME: Bleeding resistance - 出血耐性
	// DESC: Difficulty in getting bleeding abnormalities - 出血状態異常へのかかりにくさ
	uint16_t resistBlood;

	// NAME: Curse resistance - 呪耐性
	// DESC: Difficulty in getting a curse condition - 呪い状態異常へのかかりにくさ
	uint16_t resistCurse;

	// NAME: Enhanced type ID - 強化タイプID
	// DESC: Enhanced type ID - 強化タイプID
	int16_t reinforceTypeId;

	// NAME: Trophy - トロフィー
	// DESC: Is it related to the trophy system? - トロフィーシステムに関係あるか？
	int16_t trophySGradeId;

	// NAME: Shop level - ショップレベル
	// DESC: Level that can be sold at the store - お店で販売できるレベル
	int16_t shopLv;

	// NAME: Knockback parameter ID - ノックバックパラメータID
	// DESC: ID of the parameter used for knockback - ノックバックで使用するパラメータのID
	uint8_t knockbackParamId;

	// NAME: Damage attenuation rate when repelling [%] - はじき時ダメージ減衰率[%]
	// DESC: Used for damage attenuation rate when repelling - はじき時のダメージ減衰率に使用
	uint8_t flickDamageCutRate;

	// NAME: Equipment model type - 装備モデル種別
	// DESC: Equipment model type. - 装備モデルの種別.
	uint8_t equipModelCategory;

	// NAME: Equipment model gender - 装備モデル性別
	// DESC: Gender of equipment model. - 装備モデルの性別.
	uint8_t equipModelGender;

	// NAME: Armor category - 防具カテゴリ
	// DESC: Armor category. - 防具のカテゴリ.
	uint8_t protectorCategory;

	// NAME: Rarity - レア度
	// DESC: Rarity used in item acquisition logs - アイテム取得ログで使うレア度
	uint8_t rarity;

	// NAME: Sort item type ID - ソートアイテム種別ID
	// DESC: Sort item type ID. In the sort "Item type order", the same ID is displayed together as the same group. - ソートアイテム種別ID。ソート「アイテム種別順」にて、同じIDは同じグループとしてまとめて表示されます
	uint8_t sortGroupId;

	// NAME: Part damage application attack - 部位ダメージ適用攻撃
	// DESC: Set the attack type to judge the part damage - 部位ダメージ判定を行う攻撃タイプを設定
	uint8_t partsDmgType;

	// NAME: Padding - パディング
	uint8_t pad04[2];

	// NAME: Can i deposit - 預けれるか
	// DESC: Can you leave it in the warehouse? - 倉庫に預けれるか
	uint8_t isDeposit: 1;

	// NAME: Head equipment - 頭装備
	// DESC: Is it head equipment? - 頭装備か.
	uint8_t headEquip: 1;

	// NAME: Torso equipment - 胴装備
	// DESC: Is it torso equipment? - 胴装備か.
	uint8_t bodyEquip: 1;

	// NAME: Arm equipment - 腕装備
	// DESC: Is it arm equipment? - 腕装備か.
	uint8_t armEquip: 1;

	// NAME: Leg equipment - 脚装備
	// DESC: Is it leg equipment? - 脚装備か.
	uint8_t legEquip: 1;

	// NAME: Whether to use a face scale - 顔スケールを使用するか
	// DESC: Whether to use a face scale - 顔スケールを使用するか
	uint8_t useFaceScale: 1;

	// NAME: Do you want to skip the weakness animation? - 弱点アニメをスキップするか
	// DESC: Weakness damage Whether to skip animation playback. "Part damage rate" and "defense material" are treated as weak points just by not playing the animation. - 弱点ダメージアニメ再生をスキップするかどうか。アニメを再生しないだけで「部位ダメージ率」「防御材質」は弱点として扱われます。
	uint8_t isSkipWeakDamageAnim: 1;

	// NAME: Padding - パディング
	uint8_t pad06: 1;

	// NAME: Weakness defense material variation value - 弱点防御材質バリエーション値
	// DESC: It is a value used for variation of abnormal condition, damage SFX, SE in combination with weak point defense material. SEQ16473 - 弱点防御材質と組み合わせて状態異常、ダメージSFX,SEのバリエーション分けに使用する値です。SEQ16473
	uint8_t defenseMaterialVariationValue_Weak;

	// NAME: Foot decal identifier 2 - フットデカール識別子2
	// DESC: Decal ID for automatic foot effects. Floor material is also considered. Only used when the "armor category" is "legs". - 自動フットエフェクトのデカールID。床材質も考慮される。防具カテゴリ」が「脚」のときのみ利用される。
	int16_t autoFootEffectDecalBaseId2;

	// NAME: Foot decal identifier 3 - フットデカール識別子3
	// DESC: Decal ID for automatic foot effects. Floor material is also considered. Only used when the "armor category" is "legs". - 自動フットエフェクトのデカールID。床材質も考慮される。防具カテゴリ」が「脚」のときのみ利用される。
	int16_t autoFootEffectDecalBaseId3;

	// NAME: Defensive material variation value - 防御材質バリエーション値
	// DESC: It is a value used in combination with the defense material to classify abnormal conditions, damage SFX, and SE. SEQ16473 - 防御材質と組み合わせて状態異常、ダメージSFX,SEのバリエーション分けに使用する値です。SEQ16473
	uint8_t defenseMaterialVariationValue;

	// NAME: Can you throw it away - 捨てれるか
	// DESC: Can you throw away the item? TRUE = thrown away - アイテムを捨てれるか？TRUE=捨てれる
	uint8_t isDiscard: 1;

	// NAME: Can you put it on the spot - その場に置けるか
	// DESC: Can I put the item on the spot? TRUE = can be placed - アイテムをその場に置けるか？TRUE=置ける
	uint8_t isDrop: 1;

	// NAME: Is multi-drop sharing prohibited? - マルチドロップ共有禁止か
	// DESC: Is multi-drop sharing prohibited? - マルチドロップ共有禁止か
	uint8_t disableMultiDropShare: 1;

	// NAME: Is there a simple model for DLC? - DLC用シンプルモデルありか
	// DESC: Is there a simple model for DLC? - ＤＬＣ用シンプルモデルが存在しているか
	uint8_t simpleModelForDlc: 1;

	// NAME: Acquisition log display condition - 取得ログ表示条件
	// DESC: Whether to display in the item acquisition log when acquiring the item (not entered: ○) - アイテム取得時にアイテム取得ログに表示するか（未入力: ○）
	uint8_t showLogCondType: 1;

	// NAME: Acquisition dialog display condition - 取得ダイアログ表示条件
	// DESC: Whether to display it in the item acquisition dialog when acquiring an item (not entered: new only) - アイテム取得時にアイテム取得ダイアログに表示するか（未入力: newのみ）
	uint8_t showDialogCondType: 2;

	// NAME: Padding - パディング
	uint8_t pad: 1;

	// NAME: Non-attribute damage multiplier - 無属性ダメージ倍率
	// DESC: Non-attribute damage multiplier - 無属性ダメージ倍率
	float neutralDamageCutRate;

	// NAME: Slash damage multiplier - 斬撃ダメージ倍率
	// DESC: Slash damage multiplier - 斬撃ダメージ倍率
	float slashDamageCutRate;

	// NAME: Batter damage multiplier - 打撃ダメージ倍率
	// DESC: Batter damage multiplier - 打撃ダメージ倍率
	float blowDamageCutRate;

	// NAME: Puncture damage ratio - 刺突ダメージ倍率
	// DESC: Puncture damage ratio - 刺突ダメージ倍率
	float thrustDamageCutRate;

	// NAME: Magic damage multiplier - 魔法ダメージ倍率
	// DESC: Magic damage multiplier - 魔法ダメージ倍率
	float magicDamageCutRate;

	// NAME: Flame damage multiplier - 火炎ダメージ倍率
	// DESC: Flame damage multiplier - 火炎ダメージ倍率
	float fireDamageCutRate;

	// NAME: Electric shock damage ratio - 電撃ダメージ倍率
	// DESC: Electric shock damage ratio - 電撃ダメージ倍率
	float thunderDamageCutRate;

	// NAME: Defensive material 1 [SFX] - 防御材質1【SFX】
	// DESC: For SFX when moving / defending. 1 - 移動/防御時のSFX用.1
	uint16_t defenseMaterialSfx1;

	// NAME: Weakness protection material 1 [SFX] - 弱点防御材質1【SFX】
	// DESC: For SFX when weak points are damaged 1 - 弱点部位ダメージ時のSFX用1
	uint16_t defenseMaterialSfx_Weak1;

	// NAME: Defensive material 1 [SE] - 防御材質1【SE】
	// DESC: For SE when moving / defending. 1 - 移動/防御時のSE用.1
	uint16_t defenseMaterial1;

	// NAME: Weakness defense material 1 [SE] - 弱点防御材質1【SE】
	// DESC: For SE when weak points are damaged 1 - 弱点部位ダメージ時のSE用1
	uint16_t defenseMaterial_Weak1;

	// NAME: Defensive material 2 [SFX] - 防御材質2【SFX】
	// DESC: For SFX when moving / defending. 2 - 移動/防御時のSFX用.2
	uint16_t defenseMaterialSfx2;

	// NAME: Weakness protection material 2 [SFX] - 弱点防御材質2【SFX】
	// DESC: 2 for SFX when weak points are damaged - 弱点部位ダメージ時のSFX用2
	uint16_t defenseMaterialSfx_Weak2;

	// NAME: Foot equipment material [SE] - 足装備材質【SE】
	// DESC: Material for foot equipment SE. Only foot equipment is referenced. ([GR] SEQ10061) In the case of "139: None", the defense material 1 [SE] is referred to. - 足装備SE用材質。足装備のみ参照される。(【GR】SEQ10061) 「139:なし」の場合は防御材質1【SE】が参照される
	uint16_t footMaterialSe;

	// NAME: Weakness defense material 2 [SE] - 弱点防御材質2【SE】
	// DESC: 2 for SE when weak points are damaged - 弱点部位ダメージ時のSE用2
	uint16_t defenseMaterial_Weak2;

	// NAME: Foot decal identifier 1 - フットデカール識別子1
	// DESC: Decal ID for automatic foot effects. Floor material is also considered. Only used when the "armor category" is "legs". - 自動フットエフェクトのデカールID。床材質も考慮される。防具カテゴリ」が「脚」のときのみ利用される。
	int32_t autoFootEffectDecalBaseId1;

	// NAME: Toughness Damage multiplier - 強靭度 被ダメージ倍率
	// DESC: Toughness version cut rate - 強靭度版カット率
	float toughnessDamageCutRate;

	// NAME: Toughness recovery time correction value - 強靭度 回復時間補正値
	// DESC: Correction value for toughness recovery time - 強靭度の回復時間用の補正値
	float toughnessRecoverCorrection;

	// NAME: Dark damage multiplier - 闇ダメージ倍率
	// DESC: Dark damage multiplier - 闇ダメージ倍率
	float darkDamageCutRate;

	// NAME: Dark defense - 闇防御力
	// DESC: Dark attack damage protection. - 闇攻撃のダメージ防御.
	uint16_t defenseDark;

	// NAME: PAD_original_ # 48 # hidden - PAD_元_#48#非表示
	// DESC: Original _ # 48 # hidden - 元_#48#非表示
	uint8_t invisibleFlag48: 1;

	// NAME: PAD_original_ # 49 # hidden - PAD_元_#49#非表示
	// DESC: Original _ # 49 # hidden - 元_#49#非表示
	uint8_t invisibleFlag49: 1;

	// NAME: PAD_original_ # 50 # hidden - PAD_元_#50#非表示
	// DESC: Original _ # 50 # hidden - 元_#50#非表示
	uint8_t invisibleFlag50: 1;

	// NAME: PAD_original_ # 51 # hidden - PAD_元_#51#非表示
	// DESC: Original _ # 51 # hidden - 元_#51#非表示
	uint8_t invisibleFlag51: 1;

	// NAME: PAD_original_ # 52 # hidden - PAD_元_#52#非表示
	// DESC: Original _ # 52 # hidden - 元_#52#非表示
	uint8_t invisibleFlag52: 1;

	// NAME: PAD_original_ # 53 # hidden - PAD_元_#53#非表示
	// DESC: Original _ # 53 # hidden - 元_#53#非表示
	uint8_t invisibleFlag53: 1;

	// NAME: PAD_original_ # 54 # hidden - PAD_元_#54#非表示
	// DESC: Original _ # 54 # hidden - 元_#54#非表示
	uint8_t invisibleFlag54: 1;

	// NAME: PAD_original_ # 55 # hidden - PAD_元_#55#非表示
	// DESC: Original _ # 55 # hidden - 元_#55#非表示
	uint8_t invisibleFlag55: 1;

	// NAME: PAD_original_ # 56 # hidden - PAD_元_#56#非表示
	// DESC: Original _ # 56 # hidden - 元_#56#非表示
	uint8_t invisibleFlag56: 1;

	// NAME: PAD_original_ # 57 # hidden - PAD_元_#57#非表示
	// DESC: Original _ # 57 # hidden - 元_#57#非表示
	uint8_t invisibleFlag57: 1;

	// NAME: PAD_original_ # 58 # hidden - PAD_元_#58#非表示
	// DESC: Original _ # 58 # hidden - 元_#58#非表示
	uint8_t invisibleFlag58: 1;

	// NAME: PAD_original_ # 59 # hidden - PAD_元_#59#非表示
	// DESC: Original _ # 59 # hidden - 元_#59#非表示
	uint8_t invisibleFlag59: 1;

	// NAME: PAD_original_ # 60 # hidden - PAD_元_#60#非表示
	// DESC: Original _ # 60 # hidden - 元_#60#非表示
	uint8_t invisibleFlag60: 1;

	// NAME: PAD_original_ # 61 # hidden - PAD_元_#61#非表示
	// DESC: Original _ # 61 # Hidden - 元_#61#非表示
	uint8_t invisibleFlag61: 1;

	// NAME: PAD_original_ # 62 # hidden - PAD_元_#62#非表示
	// DESC: Original _ # 62 # hidden - 元_#62#非表示
	uint8_t invisibleFlag62: 1;

	// NAME: PAD_original_ # 63 # hidden - PAD_元_#63#非表示
	// DESC: Original _ # 63 # hidden - 元_#63#非表示
	uint8_t invisibleFlag63: 1;

	// NAME: PAD_original_ # 64 # hidden - PAD_元_#64#非表示
	// DESC: Original _ # 64 # hidden - 元_#64#非表示
	uint8_t invisibleFlag64: 1;

	// NAME: PAD_original_ # 65 # hidden - PAD_元_#65#非表示
	// DESC: Original _ # 65 # hidden - 元_#65#非表示
	uint8_t invisibleFlag65: 1;

	// NAME: PAD_original_ # 66 # hidden - PAD_元_#66#非表示
	// DESC: Original _ # 66 # hidden - 元_#66#非表示
	uint8_t invisibleFlag66: 1;

	// NAME: PAD_original_ # 67 # hidden - PAD_元_#67#非表示
	// DESC: Original _ # 67 # hidden - 元_#67#非表示
	uint8_t invisibleFlag67: 1;

	// NAME: PAD_original_ # 68 # hidden - PAD_元_#68#非表示
	// DESC: Original _ # 68 # hidden - 元_#68#非表示
	uint8_t invisibleFlag68: 1;

	// NAME: PAD_original_ # 69 # hidden - PAD_元_#69#非表示
	// DESC: Original _ # 69 # hidden - 元_#69#非表示
	uint8_t invisibleFlag69: 1;

	// NAME: PAD_original_ # 70 # hidden - PAD_元_#70#非表示
	// DESC: Original _ # 70 # hidden - 元_#70#非表示
	uint8_t invisibleFlag70: 1;

	// NAME: PAD_original_ # 71 # hidden - PAD_元_#71#非表示
	// DESC: Original _ # 71 # hidden - 元_#71#非表示
	uint8_t invisibleFlag71: 1;

	// NAME: PAD_original_ # 72 # hidden - PAD_元_#72#非表示
	// DESC: Original _ # 72 # hidden - 元_#72#非表示
	uint8_t invisibleFlag72: 1;

	// NAME: PAD_original_ # 73 # hidden - PAD_元_#73#非表示
	// DESC: Original _ # 73 # hidden - 元_#73#非表示
	uint8_t invisibleFlag73: 1;

	// NAME: PAD_original_ # 74 # hidden - PAD_元_#74#非表示
	// DESC: Original _ # 74 # hidden - 元_#74#非表示
	uint8_t invisibleFlag74: 1;

	// NAME: PAD_original_ # 75 # hidden - PAD_元_#75#非表示
	// DESC: Original _ # 75 # hidden - 元_#75#非表示
	uint8_t invisibleFlag75: 1;

	// NAME: PAD_original_ # 76 # hidden - PAD_元_#76#非表示
	// DESC: Original _ # 76 # hidden - 元_#76#非表示
	uint8_t invisibleFlag76: 1;

	// NAME: PAD_original_ # 77 # hidden - PAD_元_#77#非表示
	// DESC: Original _ # 77 # hidden - 元_#77#非表示
	uint8_t invisibleFlag77: 1;

	// NAME: PAD_original_ # 78 # hidden - PAD_元_#78#非表示
	// DESC: Original _ # 78 # hidden - 元_#78#非表示
	uint8_t invisibleFlag78: 1;

	// NAME: PAD_original_ # 79 # hidden - PAD_元_#79#非表示
	// DESC: Original _ # 79 # hidden - 元_#79#非表示
	uint8_t invisibleFlag79: 1;

	// NAME: PAD_original_ # 80 # hidden - PAD_元_#80#非表示
	// DESC: Original _ # 80 # hidden - 元_#80#非表示
	uint8_t invisibleFlag80: 1;

	// NAME: Padding - パディング
	uint8_t padbit: 7;

	// NAME: Attitude control ID (torso) - 姿勢制御ID(胴)
	// DESC: Attitude control ID (torso) - 姿勢制御ID(胴)
	uint8_t postureControlId;

	// NAME: pad - pad
	uint8_t pad2[4];

	// NAME: Selling price - 販売価格
	// DESC: Selling price - 販売価格
	int32_t saleValue;

	// NAME: Cold resistance - 冷気耐性
	// DESC: Difficulty in getting cold air condition abnormal - 冷気状態異常へのかかりにくさ
	uint16_t resistFreeze;

	// NAME: # 00 #Hidden (Gender designation) - #00#非表示(男女指定)
	// DESC: Bangs tip - 前髪の先
	uint8_t invisibleFlag_SexVer00;

	// NAME: # 01 #Hidden (Gender designation) - #01#非表示(男女指定)
	// DESC: Bangs root - 前髪の根元
	uint8_t invisibleFlag_SexVer01;

	// NAME: # 02 #Hidden (Gender designation) - #02#非表示(男女指定)
	// DESC: Sideburns - もみあげ
	uint8_t invisibleFlag_SexVer02;

	// NAME: # 03 #Hidden (Gender designation) - #03#非表示(男女指定)
	// DESC: Top of the head - 頭頂部
	uint8_t invisibleFlag_SexVer03;

	// NAME: # 04 #Hidden (Gender designation) - #04#非表示(男女指定)
	// DESC: Top of the head - 頭頂部
	uint8_t invisibleFlag_SexVer04;

	// NAME: # 05 #Hidden (Gender designation) - #05#非表示(男女指定)
	// DESC: Back hair - 後ろ髪
	uint8_t invisibleFlag_SexVer05;

	// NAME: # 06 #Hidden (Gender designation) - #06#非表示(男女指定)
	// DESC: The tip of the back hair - 後ろ髪の先
	uint8_t invisibleFlag_SexVer06;

	// NAME: # 07 #Hidden (Gender designation) - #07#非表示(男女指定)
	uint8_t invisibleFlag_SexVer07;

	// NAME: # 08 #Hidden (Gender designation) - #08#非表示(男女指定)
	uint8_t invisibleFlag_SexVer08;

	// NAME: # 09 #Hidden (Gender designation) - #09#非表示(男女指定)
	uint8_t invisibleFlag_SexVer09;

	// NAME: # 10 #Hidden (Gender designation) - #10#非表示(男女指定)
	// DESC: collar - 襟
	uint8_t invisibleFlag_SexVer10;

	// NAME: # 11 #Hidden (Gender designation) - #11#非表示(男女指定)
	// DESC: Around the collar - 襟回り
	uint8_t invisibleFlag_SexVer11;

	// NAME: # 12 #Hidden (Gender designation) - #12#非表示(男女指定)
	uint8_t invisibleFlag_SexVer12;

	// NAME: # 13 #Hidden (Gender designation) - #13#非表示(男女指定)
	uint8_t invisibleFlag_SexVer13;

	// NAME: # 14 #Hidden (Gender designation) - #14#非表示(男女指定)
	uint8_t invisibleFlag_SexVer14;

	// NAME: # 15 #Hidden (Gender designation) - #15#非表示(男女指定)
	// DESC: Hood hem - 頭巾の裾
	uint8_t invisibleFlag_SexVer15;

	// NAME: # 16 #Hidden (Gender designation) - #16#非表示(男女指定)
	uint8_t invisibleFlag_SexVer16;

	// NAME: # 17 #Hidden (Gender designation) - #17#非表示(男女指定)
	uint8_t invisibleFlag_SexVer17;

	// NAME: # 18 #Hidden (Gender designation) - #18#非表示(男女指定)
	uint8_t invisibleFlag_SexVer18;

	// NAME: # 19 #Hidden (Gender designation) - #19#非表示(男女指定)
	uint8_t invisibleFlag_SexVer19;

	// NAME: # 20 #Hidden (Gender designation) - #20#非表示(男女指定)
	// DESC: Sleeve A - 袖A
	uint8_t invisibleFlag_SexVer20;

	// NAME: # 21 #Hidden (Gender designation) - #21#非表示(男女指定)
	// DESC: Sleeve B - 袖B
	uint8_t invisibleFlag_SexVer21;

	// NAME: # 22 #Hidden (Gender designation) - #22#非表示(男女指定)
	uint8_t invisibleFlag_SexVer22;

	// NAME: # 23 #Hidden (Gender designation) - #23#非表示(男女指定)
	uint8_t invisibleFlag_SexVer23;

	// NAME: # 24 #Hidden (Gender designation) - #24#非表示(男女指定)
	uint8_t invisibleFlag_SexVer24;

	// NAME: # 25 #Hidden (Gender designation) - #25#非表示(男女指定)
	// DESC: arm - 腕
	uint8_t invisibleFlag_SexVer25;

	// NAME: # 26 #Hidden (Gender designation) - #26#非表示(男女指定)
	uint8_t invisibleFlag_SexVer26;

	// NAME: # 27 #Hidden (Gender designation) - #27#非表示(男女指定)
	uint8_t invisibleFlag_SexVer27;

	// NAME: # 28 #Hidden (Gender designation) - #28#非表示(男女指定)
	uint8_t invisibleFlag_SexVer28;

	// NAME: # 29 #Hidden (Gender designation) - #29#非表示(男女指定)
	uint8_t invisibleFlag_SexVer29;

	// NAME: # 30 #Hidden (Gender designation) - #30#非表示(男女指定)
	// DESC: belt - ベルト
	uint8_t invisibleFlag_SexVer30;

	// NAME: # 31 #Hidden (Gender designation) - #31#非表示(男女指定)
	uint8_t invisibleFlag_SexVer31;

	// NAME: # 32 #Hidden (Men and women specified) - #32#非表示(男女指定)
	uint8_t invisibleFlag_SexVer32;

	// NAME: # 33 #Hidden (Gender designation) - #33#非表示(男女指定)
	uint8_t invisibleFlag_SexVer33;

	// NAME: # 34 #Hidden (Gender designation) - #34#非表示(男女指定)
	uint8_t invisibleFlag_SexVer34;

	// NAME: # 35 #Hidden (Gender designation) - #35#非表示(男女指定)
	uint8_t invisibleFlag_SexVer35;

	// NAME: # 36 #Hidden (Gender designation) - #36#非表示(男女指定)
	uint8_t invisibleFlag_SexVer36;

	// NAME: # 37 #Hidden (Gender designation) - #37#非表示(男女指定)
	uint8_t invisibleFlag_SexVer37;

	// NAME: # 38 #Hidden (Gender designation) - #38#非表示(男女指定)
	uint8_t invisibleFlag_SexVer38;

	// NAME: # 39 #Hidden (Gender designation) - #39#非表示(男女指定)
	uint8_t invisibleFlag_SexVer39;

	// NAME: # 40 #Hidden (Gender designation) - #40#非表示(男女指定)
	uint8_t invisibleFlag_SexVer40;

	// NAME: # 41 #Hidden (Gender designation) - #41#非表示(男女指定)
	uint8_t invisibleFlag_SexVer41;

	// NAME: # 42 #Hidden (Gender designation) - #42#非表示(男女指定)
	uint8_t invisibleFlag_SexVer42;

	// NAME: # 43 #Hidden (Gender designation) - #43#非表示(男女指定)
	uint8_t invisibleFlag_SexVer43;

	// NAME: # 44 #Hidden (Gender designation) - #44#非表示(男女指定)
	uint8_t invisibleFlag_SexVer44;

	// NAME: # 45 #Hidden (Gender designation) - #45#非表示(男女指定)
	uint8_t invisibleFlag_SexVer45;

	// NAME: # 46 #Hidden (Gender designation) - #46#非表示(男女指定)
	uint8_t invisibleFlag_SexVer46;

	// NAME: # 47 #Hidden (Gender designation) - #47#非表示(男女指定)
	uint8_t invisibleFlag_SexVer47;

	// NAME: # 48 #Hidden (Gender designation) - #48#非表示(男女指定)
	uint8_t invisibleFlag_SexVer48;

	// NAME: # 49 #Hidden (Gender designation) - #49#非表示(男女指定)
	uint8_t invisibleFlag_SexVer49;

	// NAME: # 50 #Hidden (Gender designation) - #50#非表示(男女指定)
	uint8_t invisibleFlag_SexVer50;

	// NAME: # 51 #Hidden (Gender designation) - #51#非表示(男女指定)
	uint8_t invisibleFlag_SexVer51;

	// NAME: # 52 #Hidden (Gender designation) - #52#非表示(男女指定)
	uint8_t invisibleFlag_SexVer52;

	// NAME: # 53 #Hidden (Gender designation) - #53#非表示(男女指定)
	uint8_t invisibleFlag_SexVer53;

	// NAME: # 54 #Hidden (Gender designation) - #54#非表示(男女指定)
	uint8_t invisibleFlag_SexVer54;

	// NAME: # 55 #Hidden (Gender designation) - #55#非表示(男女指定)
	uint8_t invisibleFlag_SexVer55;

	// NAME: # 56 #Hidden (Gender designation) - #56#非表示(男女指定)
	uint8_t invisibleFlag_SexVer56;

	// NAME: # 57 #Hidden (Gender designation) - #57#非表示(男女指定)
	uint8_t invisibleFlag_SexVer57;

	// NAME: # 58 #Hidden (Gender designation) - #58#非表示(男女指定)
	uint8_t invisibleFlag_SexVer58;

	// NAME: # 59 #Hidden (Gender designation) - #59#非表示(男女指定)
	uint8_t invisibleFlag_SexVer59;

	// NAME: # 60 #Hidden (Men and women specified) - #60#非表示(男女指定)
	uint8_t invisibleFlag_SexVer60;

	// NAME: # 61 #Hidden (Gender designation) - #61#非表示(男女指定)
	uint8_t invisibleFlag_SexVer61;

	// NAME: # 62 #Hidden (Gender designation) - #62#非表示(男女指定)
	uint8_t invisibleFlag_SexVer62;

	// NAME: # 63 #Hidden (Gender designation) - #63#非表示(男女指定)
	uint8_t invisibleFlag_SexVer63;

	// NAME: # 64 #Hidden (Gender designation) - #64#非表示(男女指定)
	uint8_t invisibleFlag_SexVer64;

	// NAME: # 65 #Hidden (Gender designation) - #65#非表示(男女指定)
	uint8_t invisibleFlag_SexVer65;

	// NAME: # 66 #Hidden (Gender designation) - #66#非表示(男女指定)
	uint8_t invisibleFlag_SexVer66;

	// NAME: # 67 #Hidden (Gender designation) - #67#非表示(男女指定)
	uint8_t invisibleFlag_SexVer67;

	// NAME: # 68 #Hidden (Gender designation) - #68#非表示(男女指定)
	uint8_t invisibleFlag_SexVer68;

	// NAME: # 69 #Hidden (Gender designation) - #69#非表示(男女指定)
	uint8_t invisibleFlag_SexVer69;

	// NAME: # 70 #Hidden (Gender designation) - #70#非表示(男女指定)
	uint8_t invisibleFlag_SexVer70;

	// NAME: # 71 #Hidden (Gender designation) - #71#非表示(男女指定)
	uint8_t invisibleFlag_SexVer71;

	// NAME: # 72 #Hidden (Gender designation) - #72#非表示(男女指定)
	uint8_t invisibleFlag_SexVer72;

	// NAME: # 73 #Hidden (Gender designation) - #73#非表示(男女指定)
	uint8_t invisibleFlag_SexVer73;

	// NAME: # 74 #Hidden (Gender designation) - #74#非表示(男女指定)
	uint8_t invisibleFlag_SexVer74;

	// NAME: # 75 #Hidden (Gender designation) - #75#非表示(男女指定)
	uint8_t invisibleFlag_SexVer75;

	// NAME: # 76 #Hidden (Gender designation) - #76#非表示(男女指定)
	uint8_t invisibleFlag_SexVer76;

	// NAME: # 77 #Hidden (Gender designation) - #77#非表示(男女指定)
	uint8_t invisibleFlag_SexVer77;

	// NAME: # 78 #Hidden (Gender designation) - #78#非表示(男女指定)
	uint8_t invisibleFlag_SexVer78;

	// NAME: # 79 #Hidden (Gender designation) - #79#非表示(男女指定)
	uint8_t invisibleFlag_SexVer79;

	// NAME: # 80 #Hidden (Gender designation) - #80#非表示(男女指定)
	uint8_t invisibleFlag_SexVer80;

	// NAME: # 81 #Hidden (Gender designation) - #81#非表示(男女指定)
	uint8_t invisibleFlag_SexVer81;

	// NAME: # 82 #Hidden (Gender designation) - #82#非表示(男女指定)
	uint8_t invisibleFlag_SexVer82;

	// NAME: # 83 #Hidden (Gender designation) - #83#非表示(男女指定)
	uint8_t invisibleFlag_SexVer83;

	// NAME: # 84 #Hidden (Gender designation) - #84#非表示(男女指定)
	uint8_t invisibleFlag_SexVer84;

	// NAME: # 85 #Hidden (Gender designation) - #85#非表示(男女指定)
	uint8_t invisibleFlag_SexVer85;

	// NAME: # 86 #Hidden (Gender designation) - #86#非表示(男女指定)
	uint8_t invisibleFlag_SexVer86;

	// NAME: # 87 #Hidden (Gender designation) - #87#非表示(男女指定)
	uint8_t invisibleFlag_SexVer87;

	// NAME: # 88 #Hidden (Gender designation) - #88#非表示(男女指定)
	uint8_t invisibleFlag_SexVer88;

	// NAME: # 89 #Hidden (Gender designation) - #89#非表示(男女指定)
	uint8_t invisibleFlag_SexVer89;

	// NAME: # 90 #Hidden (Gender designation) - #90#非表示(男女指定)
	uint8_t invisibleFlag_SexVer90;

	// NAME: # 91 #Hidden (Gender designation) - #91#非表示(男女指定)
	uint8_t invisibleFlag_SexVer91;

	// NAME: # 92 #Hidden (Gender designation) - #92#非表示(男女指定)
	uint8_t invisibleFlag_SexVer92;

	// NAME: # 93 #Hidden (Gender designation) - #93#非表示(男女指定)
	uint8_t invisibleFlag_SexVer93;

	// NAME: # 94 #Hidden (Gender designation) - #94#非表示(男女指定)
	uint8_t invisibleFlag_SexVer94;

	// NAME: # 95 #Hidden (Gender designation) - #95#非表示(男女指定)
	uint8_t invisibleFlag_SexVer95;

	// NAME: Padding - パディング
	// DESC: Padding - パディング
	uint8_t pad404[14];
};

#endif
