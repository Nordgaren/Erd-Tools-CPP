/* This file was automatically generated from XML paramdefs. */
#ifndef _PARAMDEF_SP_EFFECT_PARAM_ST_H
#define _PARAMDEF_SP_EFFECT_PARAM_ST_H
#pragma once
#include <inttypes.h>

// Data Version: 4
// Is Big Endian: False
// Is Unicode: True
// Format Version: 203
struct SP_EFFECT_PARAM_ST {

	// NAME: Icon ID - アイコンID
	// DESC: Icon ID (When -1, no icon is required) - アイコンID(-1の時は、アイコン必要なし)
	int32_t iconId;

	// NAME: Trigger condition: Remaining HP ratio [%] - 発動条件　残りHP比率[%]
	// DESC: Set what percentage of maxHP the remaining HP will be activated - 残りHPが、maxHPの何%になったら発動するかを設定
	float conditionHp;

	// NAME: Effect duration time [s] - 効果持続時間　時間[s]
	// DESC: Change duration / -1 for permanent / 0 for one moment only - 変化持続時間　/-1で永続 /0で瞬間1回限り
	float effectEndurance;

	// NAME: Activation interval [s] - 発動間隔[s]
	// DESC: Set how many seconds it occurs - 何秒間隔で発生するのかを設定
	float motionInterval;

	// NAME: Maximum HP magnification [%] - 最大HP倍率[%]
	// DESC: Correct the maximum HP - 最大HPに補正をかける
	float maxHpRate;

	// NAME: Maximum MP magnification [%] - 最大MP倍率[%]
	// DESC: Correct the maximum MP - 最大MPに補正をかける
	float maxMpRate;

	// NAME: Maximum stamina magnification [%] - 最大スタミナ倍率[%]
	// DESC: Correct the maximum SP - 最大SPに補正をかける
	float maxStaminaRate;

	// NAME: Defender: Slash damage multiplier - 防御側：斬撃ダメージ倍率
	// DESC: Slash damage ratio: Correct the calculated damage by XX times. 1 is normal. - 斬撃ダメージ倍率：算出したダメージに×○倍で補正をかける。１が通常。
	float slashDamageCutRate;

	// NAME: Defender: Batter damage multiplier - 防御側：打撃ダメージ倍率
	// DESC: Batter damage ratio: The calculated damage is corrected by XX times. 1 is normal. - 打撃ダメージ倍率：算出したダメージに×○倍で補正をかける。１が通常。
	float blowDamageCutRate;

	// NAME: Defender: Puncture damage multiplier - 防御側：刺突ダメージ倍率
	// DESC: Puncture damage ratio: Correct the calculated damage by XX times. 1 is normal. - 刺突ダメージ倍率：算出したダメージに×○倍で補正をかける。１が通常。
	float thrustDamageCutRate;

	// NAME: Defender: Non-attribute damage multiplier - 防御側：無属性ダメージ倍率
	// DESC: Non-attribute damage ratio: Correct the calculated damage by XX times. 1 is normal. - 無属性ダメージ倍率：算出したダメージに×○倍で補正をかける。１が通常。
	float neutralDamageCutRate;

	// NAME: Defender: Magic damage multiplier - 防御側：魔法ダメージ倍率
	// DESC: Magic damage multiplier: The calculated damage is corrected by XX times. 1 is normal. - 魔法ダメージ倍率：算出したダメージに×○倍で補正をかける。１が通常。
	float magicDamageCutRate;

	// NAME: Defender: Fire damage multiplier - 防御側：炎ダメージ倍率
	// DESC: Flame damage ratio: Correct the calculated damage by XX times. 1 is normal. - 炎ダメージ倍率：算出したダメージに×○倍で補正をかける。１が通常。
	float fireDamageCutRate;

	// NAME: Defender: Electric shock damage multiplier - 防御側：電撃ダメージ倍率
	// DESC: Electric shock damage ratio: Correct the calculated damage by XX times. 1 is normal. - 電撃ダメージ倍率：算出したダメージに×○倍で補正をかける。１が通常。
	float thunderDamageCutRate;

	// NAME: Attacker: Physical damage multiplier - 攻撃側：物理ダメージ倍率
	// DESC: Physical damage ratio: Correct the calculated damage by XX times. 1 is normal. - 物理ダメージ倍率：算出したダメージに×○倍で補正をかける。１が通常。
	float physicsAttackRate;

	// NAME: Attacker: Magic damage multiplier - 攻撃側：魔法ダメージ倍率
	// DESC: Magic damage multiplier: The calculated damage is corrected by XX times. 1 is normal. - 魔法ダメージ倍率：算出したダメージに×○倍で補正をかける。１が通常。
	float magicAttackRate;

	// NAME: Attacker: Fire damage multiplier - 攻撃側：炎ダメージ倍率
	// DESC: Flame damage ratio: Correct the calculated damage by XX times. 1 is normal. - 炎ダメージ倍率：算出したダメージに×○倍で補正をかける。１が通常。
	float fireAttackRate;

	// NAME: Attack side: Electric shock damage ratio - 攻撃側：電撃ダメージ倍率
	// DESC: Electric shock damage ratio: Correct the calculated damage by XX times. 1 is normal. - 電撃ダメージ倍率：算出したダメージに×○倍で補正をかける。１が通常。
	float thunderAttackRate;

	// NAME: Physical attack power multiplier - 物理攻撃力倍率
	// DESC: Multiply the physical attack power by the set value - 物理攻撃力に設定した数値をかけます
	float physicsAttackPowerRate;

	// NAME: Magic attack power multiplier - 魔法攻撃力倍率
	// DESC: Multiply the magic attack power by the set value - 魔法攻撃力に設定した数値をかけます
	float magicAttackPowerRate;

	// NAME: Fire attack power multiplier - 炎攻撃力倍率
	// DESC: Multiply the fire attack power by the set value - 炎攻撃力に設定した数値をかけます
	float fireAttackPowerRate;

	// NAME: Electric shock attack power multiplier - 電撃攻撃力倍率
	// DESC: Multiply the electric shock attack power by the set value - 電撃攻撃力に設定した数値をかけます
	float thunderAttackPowerRate;

	// NAME: Physical attack power [point] - 物理攻撃力[point]
	// DESC: Add or subtract the value set for physical attack power - 物理攻撃力に設定した数値を加減算する
	int32_t physicsAttackPower;

	// NAME: Magic attack power [point] - 魔法攻撃力[point]
	// DESC: Add or subtract the value set for the magic attack power - 魔法攻撃力に設定した数値を加減算する
	int32_t magicAttackPower;

	// NAME: Fire attack power [point] - 炎攻撃力[point]
	// DESC: Add or subtract the value set for the flame attack power - 炎攻撃力に設定した数値を加減算する
	int32_t fireAttackPower;

	// NAME: Electric shock attack power [point] - 電撃攻撃力[point]
	// DESC: Add or subtract the value set for the electric shock attack power - 電撃攻撃力に設定した数値を加減算する
	int32_t thunderAttackPower;

	// NAME: Physical defense power multiplier - 物理防御力倍率
	// DESC: Multiply the set value for physical defense - 物理防御力に設定した数値をかけます
	float physicsDiffenceRate;

	// NAME: Magic defense multiplier - 魔法防御力倍率
	// DESC: Multiply the value set for magic defense - 魔法防御力に設定した数値をかけます
	float magicDiffenceRate;

	// NAME: Fire defense multiplier - 炎防御力倍率
	// DESC: Multiply the fire defense by the set value - 炎防御力に設定した数値をかけます
	float fireDiffenceRate;

	// NAME: Electric shock defense power multiplier - 電撃防御力倍率
	// DESC: Multiply the value set for the electric shock defense - 電撃防御力に設定した数値をかけます
	float thunderDiffenceRate;

	// NAME: Physical defense [point] - 物理防御力[point]
	// DESC: Add or subtract the value set for physical defense - 物理防御力に設定した数値を加減算する
	int32_t physicsDiffence;

	// NAME: Magic defense [point] - 魔法防御力[point]
	// DESC: Add or subtract the value set for magic defense - 魔法防御力に設定した数値を加減算する
	int32_t magicDiffence;

	// NAME: Fire defense [point] - 炎防御力[point]
	// DESC: Add or subtract the value set for the fire defense - 炎防御力に設定した数値を加減算する
	int32_t fireDiffence;

	// NAME: Electric shock defense [point] - 電撃防御力[point]
	// DESC: Add or subtract the value set for the electric shock defense - 電撃防御力に設定した数値を加減算する
	int32_t thunderDiffence;

	// NAME: Gap damage ratio - 隙ダメージ倍率
	// DESC: Replace the damage ratio at the time of the gap with the set value (set on the damage side) - 隙のときのダメージ倍率を、設定した数値に置き換える（ダメージ側に設定）
	float NoGuardDamageRate;

	// NAME: Sweet spot magnification - スィートスポット倍率
	// DESC: Replaces the damage calculation of the sweet spot with the specified value (key point damage correction) -Invalid at 1.0 - スィートスポットのダメージ計算を指定した数値に差し替える(急所ダメージ補正) -1.0で無効
	float vitalSpotChangeRate;

	// NAME: Normal hit magnification - ノーマルヒット倍率
	// DESC: Replaces normal hit damage calculation with the specified number -Invalid at 1.0 - ノーマルヒットのダメージ計算を指定した数値に差し替える  -1.0で無効
	float normalSpotChangeRate;

	// NAME: LookAt Position Offset [m] - LookAt位置オフセット[m]
	// DESC: Offset the target position when the enemy looks at. Set to crouch or mount on the side to be seen - 敵がLookAtする際に目標位置をオフセットする。見られる側のしゃがみや騎乗に設定する
	float lookAtTargetPosOffset;

	// NAME: Action ID designation frame - 行動ID指定枠
	// DESC: Specified -1 when dealing damage using action ID from special effects - 特殊効果から行動IDを使ってダメージを与える場合に指定-1で無効
	int32_t behaviorId;

	// NAME: HP damage amount [%] - HPダメージ量[%]
	// DESC: Set what percentage of the maximum HP to subtract (or add) with one activation - 一度の発動で最大HPの何%分を減算（または加算）するかを設定
	float changeHpRate;

	// NAME: HP damage [point] - HPダメージ[point]
	// DESC: Set how many points to subtract (or add) with one activation - 一度の発動で何ポイント減算（または加算）するかを設定
	int32_t changeHpPoint;

	// NAME: MP damage amount [%] - MPダメージ量[%]
	// DESC: Set what percentage of the maximum MP to subtract (or add) with one activation - 一度の発動で最大MPの何%分を減算（または加算）するかを設定
	float changeMpRate;

	// NAME: MP damage [point] - MPダメージ[point]
	// DESC: Set how many points to subtract (or add) with one activation - 一度の発動で何ポイント減算（または加算）するかを設定
	int32_t changeMpPoint;

	// NAME: MP recovery speed change [point] - MP回復速度変化[point]
	// DESC: Change the recovery speed. Add or subtract to the standard recovery speed and initial recovery speed of the recovery formula. - 回復速度を変化させる。回復計算式の基準回復速度、初期回復速度に加減算する。
	int32_t mpRecoverChangeSpeed;

	// NAME: Stamina damage amount [%] - スタミナダメージ量[%]
	// DESC: Set what percentage of the maximum stamina to subtract (or add) with one activation - 一度の発動で最大スタミナの何%分を減算（または加算）するかを設定
	float changeStaminaRate;

	// NAME: Stamina damage [point] - スタミナダメージ[point]
	// DESC: Set how many points to subtract (or add) with one activation - 一度の発動で何ポイント減算（または加算）するかを設定
	int32_t changeStaminaPoint;

	// NAME: Stamina recovery speed change [point] - スタミナ回復速度変化[point]
	// DESC: Change the recovery speed. Add or subtract to the standard recovery speed and initial recovery speed of the recovery formula. - 回復速度を変化させる。回復計算式の基準回復速度、初期回復速度に加減算する。
	int32_t staminaRecoverChangeSpeed;

	// NAME: Magic effect time change - 魔法効果時間変化
	// DESC: Add / subtract the time set for the effect duration only for magic that has the effect duration set to 0.1 seconds or more. - 効果持続時間に0.1秒以上設定されている魔法のみ、効果持続時間に設定されている時間を加減算する
	float magicEffectTimeChange;

	// NAME: Durability change: Internal wear [point] - 耐久度変化：内部損耗度[point]
	// DESC: Add or subtract the numerical value to the internal wear degree - 内部損耗度に数値分を加減算する
	int32_t insideDurability;

	// NAME: Durability change: Maximum wear change [point] - 耐久度変化：最大損耗度変化[point]
	// DESC: Add the set value to the maximum value of the internal wear degree of durability. - 耐久度の内部損耗度の最大値に、設定された数値を加算する
	int32_t maxDurability;

	// NAME: Stamina attack power multiplier - スタミナ攻撃力倍率
	// DESC: Multiply the stamina attack power by a factor (1.0 1 times 0.5 half) - スタミナ攻撃力に、倍率をかける(1.0 1倍 0.5 半分）
	float staminaAttackRate;

	// NAME: Poison resistance attack power [point] - 毒耐性攻撃力[point]
	// DESC: A value to be added to the target's [poison resistance value] when it hits - ヒットした時に、対象の【毒耐性値】に加算する数値
	int32_t poizonAttackPower;

	// NAME: Epidemic resistance attack power [point] - 疫病耐性攻撃力[point]
	// DESC: Numerical value to be added to the target [Plague resistance value] when hit - ヒットした時に、対象の【疫病耐性値】に加算する数値
	int32_t diseaseAttackPower;

	// NAME: Bleeding resistance attack power [point] - 出血耐性攻撃力[point]
	// DESC: A value to be added to the target's [bleeding resistance value] when it hits - ヒットした時に、対象の【出血耐性値】に加算する数値
	int32_t bloodAttackPower;

	// NAME: Curse resistance attack power [point] - 呪耐性攻撃力[point]
	// DESC: A number to be added to the target [curse resistance value] when hit - ヒットした時に、対象の【呪耐性値】に加算する数値
	int32_t curseAttackPower;

	// NAME: Fall damage ratio - 落下ダメージ倍率
	// DESC: Multiply the damage calculation when falling - 落下時のダメージ計算に倍率をかける
	float fallDamageRate;

	// NAME: Get Soul Magnification - 取得ソウル倍率
	// DESC: The amount of soul acquired when defeating an enemy is added by the specified multiple. - 敵を倒した時の取得ソウル量が、指定倍数分上乗せされる
	float soulRate;

	// NAME: Equipment weight change rate - 装備重量変化倍率
	// DESC: Multiply the maximum equipment weight by the set magnification - 最大装備重量に、設定された倍率をかける
	float equipWeightChangeRate;

	// NAME: Possession weight change rate - 所持重量変化倍率
	// DESC: Multiply the maximum weight you have by the set magnification - 最大所持重量に、設定された倍率をかける
	float allItemWeightChangeRate;

	// NAME: Soul addition - ソウル加算
	// DESC: Add the set value to the possessed soul - 所持ソウルに、設定値を加算する
	int32_t soul;

	// NAME: Anime ID offset (invalid-1) - アニメIDオフセット(無効-1)
	// DESC: Anime ID offset (invalid-1) - アニメIDオフセット(無効-1)
	int32_t animIdOffset;

	// NAME: Possession soul rate - 所持ソウル率
	// DESC: For enemy lap effect. It is applied when the soul goes out from the set character. - 敵周回効果用。設定されているキャラから外にソウルが出て行く時に適用されます。
	float haveSoulRate;

	// NAME: Target priority addition - ターゲット優先度加算分
	// DESC: During multiplayer, the enemy will give priority to being targeted as a target. Addition of priority. 0 is the default. It will be often targeted with a positive value. Minus is up to -1. - マルチプレイ時、敵から優先的にターゲットとして狙われるようになる。プライオリティの加算。０がデフォルト。プラス値でよく狙われるようになる。マイナスは、－１まで。
	float targetPriority;

	// NAME: Those who can see: Visual magnification - 見られる方：視覚倍率
	// DESC: Correct the ease of finding by a magnification - 見つかりやすさを倍率で補正する
	float sightSearchEnemyRate;

	// NAME: Who can hear: AI sound radius magnification - 聞かせる方：AI音半径倍率
	// DESC: Correct the loudness of the AI sound emitted by the magnification - 発するAI音の大きさを倍率で補正する
	float hearingSearchEnemyRate;

	// NAME: Gravity rate - グラビティ率
	// DESC: Gravity rate - グラビティ率
	float grabityRate;

	// NAME: Poison resistance change rate - 毒耐性変化倍率
	// DESC: Multiply the poison resistance value by the set multiplier - 毒耐性値に設定された倍率をかける
	float registPoizonChangeRate;

	// NAME: Epidemic resistance change rate - 疫病耐性変化倍率
	// DESC: Multiply the plague resistance value by the set magnification - 疫病耐性値に設定された倍率をかける
	float registDiseaseChangeRate;

	// NAME: Bleeding resistance change rate - 出血耐性変化倍率
	// DESC: Multiply the bleeding resistance value by the set magnification - 出血耐性値に設定された倍率をかける
	float registBloodChangeRate;

	// NAME: Curse resistance change rate - 呪耐性変化倍率
	// DESC: Multiply the spell resistance value by the set multiplier - 呪耐性値に設定された倍率をかける
	float registCurseChangeRate;

	// NAME: Soul Steel Coefficient - ソウルスティール係数
	// DESC: Defense against HP robbed by NPCs in Soul Steel - NPCがソウルスティールで奪われるHPに対する防御力
	float soulStealRate;

	// NAME: Defense: Life factor - 防御：寿命係数
	float lifeReductionRate;

	// NAME: HP recovery coefficient - HP回復量係数
	// DESC: It doesn't work when HP decreases. - HPが減るときは、効かない。
	float hpRecoverRate;

	// NAME: Special effects to replace - 差し替える特殊効果
	// DESC: Special effect ID added at the end of life (-1 is ignored) - 寿命が尽きた時に追加される特殊効果ID(-1は無視)
	int32_t replaceSpEffectId;

	// NAME: Periodic special effects - 周期発生特殊効果
	// DESC: Special effect ID that occurs in each activation cycle (-1 is ignored) - 発動周期毎に発生する特殊効果ID(-1は無視)
	int32_t cycleOccurrenceSpEffectId;

	// NAME: Attack occurrence special effect - 攻撃発生特殊効果
	// DESC: Special effect ID that occurs when hitting an attack (-1 is ignored) - 攻撃Hit時に発生する特殊効果ID(-1は無視)
	int32_t atkOccurrenceSpEffectId;

	// NAME: When guarding, the defense power up rate - ガード時はじき防御力アップ倍率
	// DESC: Repellent defense correction value when guarding - ガード時のはじき防御力補正値
	float guardDefFlickPowerRate;

	// NAME: Stamina cut magnification when guarding - ガード時スタミナカット倍率
	// DESC: Stamina cut rate correction value when guarding - ガード時のスタミナカット率補正値
	float guardStaminaCutRate;

	// NAME: Passing the line of sight: Activation time [ms] - 視線通過：発動時間[ms]
	// DESC: Passing the line of sight: Activation time [ms] (for evil eye) - 視線通過：発動時間[ms]（邪眼用）
	int16_t rayCastPassedTime;

	// NAME: Vs to subcategory parameter change 1 - 対サブカテゴリパラメータ変化1
	// DESC: Vs to subcategory parameter change 1 - 対サブカテゴリパラメータ変化1
	uint8_t magicSubCategoryChange1;

	// NAME: Vs to subcategory parameter change 2 - 対サブカテゴリパラメータ変化2
	// DESC: Vs to subcategory parameter change 2 - 対サブカテゴリパラメータ変化2
	uint8_t magicSubCategoryChange2;

	// NAME: Bow distance correction [%] - 弓飛距離補正[％]
	// DESC: Correction value added to the flight distance correction of the weapon - 武器の飛距離補正に加算される補正値
	int16_t bowDistRate;

	// NAME: Special effects category - 特殊効果カテゴリ
	// DESC: Categories that determine behavior such as overwriting special effects - 特殊効果の上書きなどの挙動を決めるカテゴリ
	uint16_t spCategory;

	// NAME: In-category priority - カテゴリ内優先度
	// DESC: Priority within the same category (lower one has priority) - 同一カテゴリ内での優先度（低い方が優先）
	uint8_t categoryPriority;

	// NAME: Save category - 保存カテゴリ
	// DESC: Category to save special effects - 特殊効果を保存するカテゴリ
	int8_t saveCategory;

	// NAME: Magic registration frame change Magic slot - 魔法登録枠変化　魔法スロット
	// DESC: You can increase the specified number of magic registration slots - 魔法登録枠を指定数増やすことが出来る
	uint8_t changeMagicSlot;

	// NAME: Miracle registration frame change Miracle slot - 奇跡登録枠変化　奇跡スロット
	// DESC: You can increase the specified number of trajectory registration frames. - 軌跡登録枠を指定数増やすことが出来る
	uint8_t changeMiracleSlot;

	// NAME: Human damage value - 人間性ダメージ値
	// DESC: Damage value given to human nature value - 人間性値に与えるダメージ値
	int8_t heroPointDamage;

	// NAME: Repellent Defense_Overwrite - はじき防御力_上書き
	// DESC: Set a value that overwrites the repelling defense - はじき防御力を上書きする値を設定
	uint8_t defFlickPower;

	// NAME: Damage attenuation rate when repelling [%] _ Overwrite - はじき時ダメージ減衰率[%]_上書き
	// DESC: Set a value that overwrites the damage attenuation rate at the time of repelling - はじき時のダメージ減衰率を上書きする値を設定
	uint8_t flickDamageCutRate;

	// NAME: Bleeding damage correction factor - 出血ダメージ補正倍率
	// DESC: Point damage of state change type [bleeding], correction value used only when% damage - 状態変化タイプ[出血]のPointダメージ、％ダメージの時のみ使用される補正値
	uint8_t bloodDamageRate;

	// NAME: DL_No damage (0) - DL_ダメージなし（0）
	// DESC: Specify the type to replace the damage Lv0 - ダメージLv0を差し替えるタイプを指定
	int8_t dmgLv_None;

	// NAME: DL_Small (1) - DL_小（1）
	// DESC: Specify the type to replace the damage Lv1 - ダメージLv1を差し替えるタイプを指定
	int8_t dmgLv_S;

	// NAME: DL_Medium (2) - DL_中（2）
	// DESC: Specify the type to replace the damage Lv2 - ダメージLv2を差し替えるタイプを指定
	int8_t dmgLv_M;

	// NAME: DL_Large (3) - DL_大（3）
	// DESC: Specify the type to replace the damage Lv3 - ダメージLv3を差し替えるタイプを指定
	int8_t dmgLv_L;

	// NAME: DL_ Blow-off (4) - DL_吹っ飛び（4）
	// DESC: Specify the type to replace the damage Lv4 - ダメージLv4を差し替えるタイプを指定
	int8_t dmgLv_BlowM;

	// NAME: DL_push (5) - DL_プッシュ（5）
	// DESC: Specify the type to replace the damage Lv5 - ダメージLv5を差し替えるタイプを指定
	int8_t dmgLv_Push;

	// NAME: DL_Slamming (6) - DL_叩きつけ（6）
	// DESC: Specify the type to replace the damage Lv6 - ダメージLv6を差し替えるタイプを指定
	int8_t dmgLv_Strike;

	// NAME: DL_Small blow (7) - DL_小吹っ飛び（7）
	// DESC: Specify the type to replace the damage Lv7 - ダメージLv7を差し替えるタイプを指定
	int8_t dmgLv_BlowS;

	// NAME: DL_minimal (8) - DL_極小（8）
	// DESC: Specify the type to replace the damage Lv8 - ダメージLv8を差し替えるタイプを指定
	int8_t dmgLv_Min;

	// NAME: DL_ Launch (9) - DL_打ち上げ（9）
	// DESC: Specify the type to replace the damage Lv9 - ダメージLv9を差し替えるタイプを指定
	int8_t dmgLv_Uppercut;

	// NAME: DL_ Oversized Blowout (10) - DL_特大吹っ飛び(10)
	// DESC: Specify the type to replace the damage Lv10 - ダメージLv10を差し替えるタイプを指定
	int8_t dmgLv_BlowLL;

	// NAME: DL_Breath (11) - DL_ブレス(11)
	// DESC: Specify the type to replace the damage Lv11 - ダメージLv11を差し替えるタイプを指定
	int8_t dmgLv_Breath;

	// NAME: Physical attributes - 物理属性
	// DESC: Physical attributes to set for special effects - 特殊効果に設定する物理属性
	uint8_t atkAttribute;

	// NAME: Special attributes - 特殊属性
	// DESC: Special attributes to set for special effects - 特殊効果に設定する特殊属性
	uint8_t spAttribute;

	// NAME: State change type - 状態変化タイプ
	// DESC: State change judgment flag - 状態変化の判定フラグ
	uint16_t stateInfo;

	// NAME: Weapon parameter change - 対武器パラメータ変化
	// DESC: Specify which weapon is effective. If there is no limit, all attacks and defenses including enemies are targeted - どの武器に対して効果を発揮するかを指定する。制限無しの場合は敵も含めた全ての攻撃・防御が対象
	uint8_t wepParamChange;

	// NAME: Movement type - 移動タイプ
	// DESC: Movement type. Change the movement speed. - 移動タイプ。移動速度を変更する。
	uint8_t moveType;

	// NAME: Defense: Life reduction type - 防御：寿命減少タイプ
	uint16_t lifeReductionType;

	// NAME: Throwing conditions - 投げ条件
	// DESC: Throwing conditions. Affects the throwing mask. - 投げ条件。投げマスクに影響する。
	uint8_t throwCondition;

	// NAME: Condition value to be added to the action judgment ID - 行動判定IDに加算する条件値
	// DESC: Condition value to add a value to the action judgment ID (Def: -1) - 行動判定ＩＤに値を加算する条件値(Def:-1)
	int8_t addBehaviorJudgeId_condition;

	// NAME: Cold damage correction factor - 冷気ダメージ補正倍率
	// DESC: Correction value used only for point damage and% damage of state change type [cold air] - 状態変化タイプ[冷気]のPointダメージ、％ダメージの時のみ使用される補正値
	uint8_t freezeDamageRate;

	// NAME: Effect target: Affiliation - 効果対象：所属　自分
	// DESC: Only the target for which this judgment is checked is effective, the default is × - この判定にチェックが入っている対象のみ効果を発揮する、デフォルトは×
	uint8_t effectTargetSelf: 1;

	// NAME: Effect target: Affiliation ally - 効果対象：所属　味方
	// DESC: Only the target for which this judgment is checked is effective, the default is × - この判定にチェックが入っている対象のみ効果を発揮する、デフォルトは×
	uint8_t effectTargetFriend: 1;

	// NAME: Effect target: Affiliation enemy - 効果対象：所属　敵
	// DESC: Only the target for which this judgment is checked is effective, the default is × - この判定にチェックが入っている対象のみ効果を発揮する、デフォルトは×
	uint8_t effectTargetEnemy: 1;

	// NAME: Effect target: Operation PC - 効果対象：操作　PC
	// DESC: Only the target for which this judgment is checked is effective, the default is × - この判定にチェックが入っている対象のみ効果を発揮する、デフォルトは×
	uint8_t effectTargetPlayer: 1;

	// NAME: Effect target: Operation AI - 効果対象：操作　AI
	// DESC: Only the target for which this judgment is checked is effective, the default is × - この判定にチェックが入っている対象のみ効果を発揮する、デフォルトは×
	uint8_t effectTargetAI: 1;

	// NAME: Effect target: State survival - 効果対象：状態　生存
	// DESC: Only the target for which this judgment is checked is effective, the default is × - この判定にチェックが入っている対象のみ効果を発揮する、デフォルトは×
	uint8_t effectTargetLive: 1;

	// NAME: Effect target: State All ghosts - 効果対象：状態　全ゴースト
	// DESC: Only the target for which this judgment is checked is effective, the default is × - この判定にチェックが入っている対象のみ効果を発揮する、デフォルトは×
	uint8_t effectTargetGhost: 1;

	// NAME: Sleep disabled - 睡眠無効
	// DESC: If this effect is applied, you will not sleep - この効果がかかっていると睡眠にかからなくなる
	uint8_t disableSleep: 1;

	// NAME: Madness invalid - 発狂無効
	// DESC: With this effect, you won't go mad - この効果がかかっていると発狂にかからなくなる
	uint8_t disableMadness: 1;

	// NAME: Effect target: Activated by an attacker - 効果対象：攻撃者に発動
	// DESC: Apply special effects to attackers after damage (cannot enter defenders) - ダメージ後に攻撃者に特殊効果を適用（防御側には入れない）
	uint8_t effectTargetAttacker: 1;

	// NAME: Icon display even if not activated - 発動してなくてもアイコン表示
	// DESC: The icon is displayed even in the state of waiting for activation. - 発動待ちの状態でもアイコンを表示する。
	uint8_t dispIconNonactive: 1;

	// NAME: Whether to generate a regain gauge - リゲインゲージを発生させるか
	// DESC: Whether to generate a regain gauge - リゲインゲージを発生させるか
	uint8_t regainGaugeDamage: 1;

	// NAME: Do you want to correct the magic power? - 魔力補正するか？
	// DESC: Do you want to correct the magic power? - 魔力補正するか？
	uint8_t bAdjustMagicAblity: 1;

	// NAME: Do you correct your faith? - 信仰補正するか？
	// DESC: Do you correct your faith? - 信仰補正するか？
	uint8_t bAdjustFaithAblity: 1;

	// NAME: Is it for a lap bonus? - 周回ボーナス用か？
	// DESC: Whether it is for the game clear lap bonus. - ゲームクリア周回ボーナス用かどうか。
	uint8_t bGameClearBonus: 1;

	// NAME: Anti-magic parameter change - 対魔法パラメータ変化
	// DESC: Set whether or not it is effective against magic - 魔法に対して効果を発揮するかしないかを設定する
	uint8_t magParamChange: 1;

	// NAME: Anti-miracle parameter change - 対奇跡パラメータ変化
	// DESC: Set whether or not it is effective against miracles - 奇跡に対して効果を発揮するかしないかを設定する
	uint8_t miracleParamChange: 1;

	// NAME: Do you want to clear your soul? - 所持ソウルクリアするか
	// DESC: Possession soul becomes 0. - 所持ソウルが0になります。
	uint8_t clearSoul: 1;

	// NAME: SOS sign judgment flag - SOSサイン　判定フラグ
	// DESC: If checked, issue an SOS sign request when activated - チェックが付いている場合、発動時にSOSサイン要求を発行
	uint8_t requestSOS: 1;

	// NAME: Black SOS sign judgment flag - ブラックSOSサイン　判定フラグ
	// DESC: If checked, issue a black SOS sign request when activated - チェックが付いている場合、発動時にブラックSOSサイン要求を発行
	uint8_t requestBlackSOS: 1;

	// NAME: Intrusion_A request judgment flag - 侵入_Aリクエスト　判定フラグ
	// DESC: If checked, issue an intrusion_A request when activated - チェックが付いている場合、発動時に侵入_Aリクエストを発行
	uint8_t requestForceJoinBlackSOS: 1;

	// NAME: Kick judgment flag - キック　判定フラグ
	// DESC: If checked, a kick request will be issued at the time of activation. - チェックが付いている場合、発動時にキック要求を発行
	uint8_t requestKickSession: 1;

	// NAME: Exit judgment flag - 退出　判定フラグ
	// DESC: If checked, an exit request will be issued at the time of activation. - チェックが付いている場合、発動時に退出要求を発行
	uint8_t requestLeaveSession: 1;

	// NAME: NPC intrusion judgment flag - NPCへの侵入　判定フラグ
	// DESC: If checked, an intrusion request to the NPC will be issued at the time of activation. - チェックが付いている場合、発動時にNPCへの侵入要求を発行
	uint8_t requestNpcInveda: 1;

	// NAME: Undecidable judgment flag - 成仏不可　判定フラグ
	// DESC: Whether you can be corpse. With this check, you will not be dead - 死体状態になれるかどうか。このチェックが付いていると、死亡状態にならない
	uint8_t noDead: 1;

	// NAME: Does HP now affect even if the maximum HP increases or decreases? - 最大HPが増減しても、現在HPは影響しないか？
	// DESC: Does HP now affect even if the maximum HP increases or decreases? - 最大HPが増減しても、現在HPは影響しないか？
	uint8_t bCurrHPIndependeMaxHP: 1;

	// NAME: Ignore corrosion - 腐食無視
	// DESC: [State change type] ignores [Durability] decrease due to [Corrosion] - 【状態変化タイプ】が【腐食】による【耐久度】減少を無視する
	uint8_t corrosionIgnore: 1;

	// NAME: Ignore visual search enemy cuts - 視覚索敵カット無視
	// DESC: Ignore visual search invalidity - 視覚索敵無効を無視する
	uint8_t sightSearchCutIgnore: 1;

	// NAME: Ignore hearing search enemy cut - 聴覚索敵カット無視
	// DESC: Ignore auditory search invalidity - 聴覚索敵無効を無視する
	uint8_t hearingSearchCutIgnore: 1;

	// NAME: Anti-magic disabled - アンチマジック無効
	// DESC: You can use magic even in the anti-magic range - アンチマジック範囲でも魔法を使用できる
	uint8_t antiMagicIgnore: 1;

	// NAME: False target invalid_ hallucination system - 偽ターゲット無効_幻聴系
	// DESC: Don't get caught in the fake target that occurred - 発生した偽ターゲットに引っかからなくなる
	uint8_t fakeTargetIgnore: 1;

	// NAME: False target invalid_human - 偽ターゲット無効_人系
	// DESC: You will not be caught by the fake target of the human system that occurred - 発生した人系の偽ターゲットに引っかからなくなる
	uint8_t fakeTargetIgnoreUndead: 1;

	// NAME: False target invalid_beast system - 偽ターゲット無効_獣系
	// DESC: You will not be caught by the fake target of the beast system that occurred - 発生した獣系の偽ターゲットに引っかからなくなる
	uint8_t fakeTargetIgnoreAnimal: 1;

	// NAME: Gravity disabled - グラビティ無効
	// DESC: Gravity effect disabled - グラビティ効果無効
	uint8_t grabityIgnore: 1;

	// NAME: Poison invalid - 毒無効
	// DESC: If this effect is applied, it will not be poisoned. - この効果がかかっていると毒にかからなくなる
	uint8_t disablePoison: 1;

	// NAME: Epidemic invalid - 疫病無効
	// DESC: If this effect is applied, you will not get plague - この効果がかかっていると疫病にかからなくなる
	uint8_t disableDisease: 1;

	// NAME: Bleeding disabled - 出血無効
	// DESC: With this effect, you won't get bleeding - この効果がかかっていると出血にかからなくなる
	uint8_t disableBlood: 1;

	// NAME: Curse invalid - 呪無効
	// DESC: With this effect, you won't be cursed - この効果がかかっていると呪いにかからなくなる
	uint8_t disableCurse: 1;

	// NAME: Enchanting effective - 魅了有効
	// DESC: If this effect is applied, you will be fascinated. - この効果がかかっていると魅了にかかるようになる
	uint8_t enableCharm: 1;

	// NAME: Do you want to extend your life? - 寿命延長するか？
	// DESC: Will the life be extended when the flag is set by TAE? - TAEによるフラグ設定時に寿命延長するか？
	uint8_t enableLifeTime: 1;

	// NAME: Do you want to correct your strength? - 筋力補正するか？
	// DESC: Do you want to correct your strength? - 筋力補正するか？
	uint8_t bAdjustStrengthAblity: 1;

	// NAME: Do you want to correct your workmanship? - 技量補正するか？
	// DESC: Do you want to correct your workmanship? - 技量補正するか？
	uint8_t bAdjustAgilityAblity: 1;

	// NAME: Will it be extinguished by bonfire recovery? - 篝火回復で消えるか
	// DESC: Will it be extinguished by bonfire recovery? - 篝火回復で消えるか
	uint8_t eraseOnBonfireRecover: 1;

	// NAME: Anti-throw parameter change - 対投げパラメータ変化
	// DESC: Set whether or not it is effective against throwing attacks - 投げ攻撃に対して効果を発揮するかしないかを設定する
	uint8_t throwAttackParamChange: 1;

	// NAME: Exit from the arena Judgment flag - 闘技場退出　判定フラグ
	// DESC: If checked, a request to leave the arena will be issued at the time of activation. - チェックが付いている場合、発動時に闘技場退出要求を発行
	uint8_t requestLeaveColiseumSession: 1;

	// NAME: Will it be extended by the life extension effect? - 寿命延長効果で延長するか？
	// DESC: Whether to be eligible for extension when the life extension effect is applied - 寿命延長効果が掛かっている時に延長対象になるかどうか
	uint8_t isExtendSpEffectLife: 1;

	// NAME: Do you know the enemy? - 敵を把握しているか？
	// DESC: Do you know the enemy? : [Activation condition] (for evil eye users) - 敵を把握しているか？：[発動条件](邪眼使用者用)
	uint8_t hasTarget: 1;

	// NAME: Do you want to replan when activated? - 発動時リプランニングするか？
	// DESC: Whether to replan at the time of activation - 発動時リプランニングするか
	uint8_t replanningOnFire: 1;

	// NAME: Pledge 0 - 誓約0
	// DESC: Pledge 0 - 誓約0
	uint8_t vowType0: 1;

	// NAME: Pledge 1 - 誓約1
	// DESC: Pledge 1 - 誓約1
	uint8_t vowType1: 1;

	// NAME: Pledge 2 - 誓約2
	// DESC: Pledge 2 - 誓約2
	uint8_t vowType2: 1;

	// NAME: Pledge 3 - 誓約3
	// DESC: Pledge 3 - 誓約3
	uint8_t vowType3: 1;

	// NAME: Pledge 4 - 誓約4
	// DESC: Pledge 4 - 誓約4
	uint8_t vowType4: 1;

	// NAME: Pledge 5 - 誓約5
	// DESC: Pledge 5 - 誓約5
	uint8_t vowType5: 1;

	// NAME: Pledge 6 - 誓約6
	// DESC: Pledge 6 - 誓約6
	uint8_t vowType6: 1;

	// NAME: Pledge 7 - 誓約7
	// DESC: Pledge 7 - 誓約7
	uint8_t vowType7: 1;

	// NAME: Pledge 8 - 誓約8
	// DESC: Pledge 8 - 誓約8
	uint8_t vowType8: 1;

	// NAME: Pledge 9 - 誓約9
	// DESC: Pledge 9 - 誓約9
	uint8_t vowType9: 1;

	// NAME: Pledge 10 - 誓約10
	// DESC: Pledge 10 - 誓約10
	uint8_t vowType10: 1;

	// NAME: Pledge 11 - 誓約11
	// DESC: Pledge 11 - 誓約11
	uint8_t vowType11: 1;

	// NAME: Pledge 12 - 誓約12
	// DESC: Pledge 12 - 誓約12
	uint8_t vowType12: 1;

	// NAME: Pledge 13 - 誓約13
	// DESC: Pledge 13 - 誓約13
	uint8_t vowType13: 1;

	// NAME: Pledge 14 - 誓約14
	// DESC: Pledge 14 - 誓約14
	uint8_t vowType14: 1;

	// NAME: Pledge 15 - 誓約15
	// DESC: Pledge 15 - 誓約15
	uint8_t vowType15: 1;

	// NAME: Attack side damage level replacement - 攻撃側ダメージレベル差し替え
	// DESC: The damage level of the attacking side changes to this value - 攻撃側のダメージレベルがこの値に指し換わる
	int8_t repAtkDmgLv;

	// NAME: Viewer: Visual magnification - 見る方：視覚倍率
	// DESC: Correct the ease of finding with a magnification - 見つけやすさを倍率で補正する
	float sightSearchRate;

	// NAME: Effect target: ● Hostile - 効果対象：●敵対
	// DESC: Only the target for which this judgment is checked is effective, the default is × - この判定にチェックが入っている対象のみ効果を発揮する、デフォルトは×
	uint8_t effectTargetOpposeTarget: 1;

	// NAME: Effect target: ○ Allies - 効果対象：○味方
	// DESC: Only the target for which this judgment is checked is effective, the default is × - この判定にチェックが入っている対象のみ効果を発揮する、デフォルトは×
	uint8_t effectTargetFriendlyTarget: 1;

	// NAME: Effect target: myself - 効果対象：自分
	// DESC: Only the target for which this judgment is checked is effective, the default is × - この判定にチェックが入っている対象のみ効果を発揮する、デフォルトは×
	uint8_t effectTargetSelfTarget: 1;

	// NAME: Effect target: PC horse - 効果対象：PC馬
	// DESC: Only the target for which this judgment is checked is effective, the default is × - この判定にチェックが入っている対象のみ効果を発揮する、デフォルトは×
	uint8_t effectTargetPcHorse: 1;

	// NAME: Effect target: PC dead only - 効果対象：PC亡者のみ
	// DESC: Only the target for which this judgment is checked is effective, the default is × - この判定にチェックが入っている対象のみ効果を発揮する、デフォルトは×
	uint8_t effectTargetPcDeceased: 1;

	// NAME: Will it be shortened by the effect of shortening the life? - 寿命短縮効果で短縮するか？
	// DESC: Whether it will be shortened when the life shortening effect is applied - 寿命短縮効果が掛かっている時に短縮対象になるかどうか
	uint8_t isContractSpEffectLife: 1;

	// NAME: Deleted when entering the waiting state - 待ち状態に入ると削除
	// DESC: Do you want to delete it the moment you are in a waiting state? - 待ち状態になった瞬間に削除するか？
	uint8_t isWaitModeDelete: 1;

	// NAME: Will it be activated even when it is invincible? - 無敵時でも発動するか
	// DESC: Whether to apply the damage from this special effect even in the invincible state only when the state change type "Apply the activation function even when invincible" is applied. - 状態変化タイプ「無敵時でも発動機能を適応」が掛かっているときのみ、無敵状態でもこの特殊効果からのダメージを適応するか
	uint8_t isIgnoreNoDamage: 1;

	// NAME: Team type change - チームタイプ変更
	// DESC: Overwrites the specified team type - 指定したチームタイプに上書きする
	int8_t changeTeamType;

	// NAME: Damipoli ID - ダミポリID
	// DESC: Damipoli ID. Damipoli ID range is 0 to 999.1000, 10000 is the category number. - ダミポリID。ダミポリID範囲は0～999.1000,10000の位はカテゴリ番号.
	int16_t dmypolyId;

	// NAME: Special effect VfxId_0 - 特殊効果VfxId_０
	// DESC: Special effect VfxId (-1 disabled) - 特殊効果VfxId(-1無効)
	int32_t vfxId;

	// NAME: Special effect Id activated at the upper limit of the spirit ball - 元気玉上限時発動特殊効果Id
	// DESC: Special effect Id activated at the upper limit of the spirit ball - 元気玉上限時発動特殊効果Id
	int32_t accumuOverFireId;

	// NAME: Genkitama upper limit - 元気玉上限値
	// DESC: Genkitama upper limit - 元気玉上限値
	int32_t accumuOverVal;

	// NAME: Special effect Id activated at the lower limit of the spirit ball - 元気玉下限時発動特殊効果Id
	// DESC: Special effect Id activated at the lower limit of the spirit ball - 元気玉下限時発動特殊効果Id
	int32_t accumuUnderFireId;

	// NAME: Genkitama lower limit - 元気玉下限値
	// DESC: Genkitama lower limit - 元気玉下限値
	int32_t accumuUnderVal;

	// NAME: Genkitama accumulation value - 元気玉蓄積値
	// DESC: Genkitama accumulation value - 元気玉蓄積値
	int32_t accumuVal;

	// NAME: How to see: Overwrite visual angle (height) [deg] - 見る方：視覚角度（高さ）上書き[deg]
	// DESC: Override the findability angle - 見つけやすさの角度を上書きする
	uint8_t eye_angX;

	// NAME: How to see: Overwrite visual angle (width) [deg] - 見る方：視覚角度（幅）上書き[deg]
	// DESC: Override the findability angle - 見つけやすさの角度を上書きする
	uint8_t eye_angY;

	// NAME: Change the degree of death - 亡者度 変更
	// DESC: Add this value to the degree of death - この値分亡者度を加算する
	int16_t addDeceasedLv;

	// NAME: Special effect VfxId_1 - 特殊効果VfxId_１
	// DESC: Special effect VfxId1 (-1 invalid) - 特殊効果VfxId１(-1無効)
	int32_t vfxId1;

	// NAME: Special effect VfxId_2 - 特殊効果VfxId_２
	// DESC: Special effect VfxId2 (-1 invalid) - 特殊効果VfxId２(-1無効)
	int32_t vfxId2;

	// NAME: Special effect VfxId_3 - 特殊効果VfxId_３
	// DESC: Special effect VfxId3 (-1 invalid) - 特殊効果VfxId３(-1無効)
	int32_t vfxId3;

	// NAME: Special effect VfxId_4 - 特殊効果VfxId_４
	// DESC: Special effect VfxId4 (-1 invalid) - 特殊効果VfxId４(-1無効)
	int32_t vfxId4;

	// NAME: Special effect VfxId_5 - 特殊効果VfxId_５
	// DESC: Special effect VfxId5 (-1 invalid) - 特殊効果VfxId５(-1無効)
	int32_t vfxId5;

	// NAME: Special effect VfxId_6 - 特殊効果VfxId_６
	// DESC: Special effect VfxId6 (-1 invalid) - 特殊効果VfxId６(-1無効)
	int32_t vfxId6;

	// NAME: Special effect VfxId_7 - 特殊効果VfxId_７
	// DESC: Special effect VfxId7 (-1 invalid) - 特殊効果VfxId７(-1無効)
	int32_t vfxId7;

	// NAME: Cold resistance attack power [point] - 冷気耐性攻撃力[point]
	// DESC: Numerical value to be added to the target [Cold air resistance value] when hit - ヒットした時に、対象の【冷気耐性値】に加算する数値
	int32_t freezeAttackPower;

	// NAME: Generated AI sound ID - 発生AI音ID
	// DESC: Generates AI sound parameters with set values - 設定された値のAI音パラメータを発生させる
	int32_t AppearAiSoundId;

	// NAME: Additional foot effect identifier - 追加フットエフェクト識別子
	// DESC: The identifier of the foot effect that is additionally generated during special effects. XYYZZZ ZZZ - 特殊効果時に追加で発生させるフットエフェクトの識別子。XYYZZZのZZZ
	int16_t addFootEffectSfxId;

	// NAME: Virtual status for skill cancellation - 技量キャンセル用仮想ステータス
	// DESC: Add this value when calculating the end timing of the TAE flag of "Skill Cancel". - 「技量キャンセル」のTAEフラグの終了タイミングを計算する時に、この値を追加して計算する
	int8_t dexterityCancelSystemOnlyAddDexterity;

	// NAME: Team attack influence_overwrite - チーム攻撃影響力_上書き
	// DESC: Overwrite and change the target [Team Attack Influence] value. Do not change the default value (-1). - 対象の【チーム攻撃影響力】の値を、上書きして変更する。デフォルト値（-1）のときは変更しない。
	int8_t teamOffenseEffectivity;

	// NAME: Toughness Damage multiplier - 強靭度 被ダメージ倍率
	// DESC: Toughness version cut rate - 強靭度版カット率
	float toughnessDamageCutRate;

	// NAME: Special attack A damage multiplier correction - 特攻Aダメージ倍率補正
	// DESC: Special Attack A Damage multiplier is corrected. 1 is normal. - 特攻Aダメージ倍率に補正をかけます。１が通常。
	float weakDmgRateA;

	// NAME: Special attack B damage multiplier correction - 特攻Bダメージ倍率補正
	// DESC: Special attack B Damage multiplier is corrected. 1 is normal. - 特攻Bダメージ倍率に補正をかけます。１が通常。
	float weakDmgRateB;

	// NAME: Special attack C damage multiplier correction - 特攻Cダメージ倍率補正
	// DESC: Special attack C Damage multiplier is corrected. 1 is normal. - 特攻Cダメージ倍率に補正をかけます。１が通常。
	float weakDmgRateC;

	// NAME: Special attack D damage multiplier correction - 特攻Dダメージ倍率補正
	// DESC: Special attack D Damage multiplier is corrected. 1 is normal. - 特攻Dダメージ倍率に補正をかけます。１が通常。
	float weakDmgRateD;

	// NAME: Special attack E damage multiplier correction - 特攻Eダメージ倍率補正
	// DESC: Special attack E Damage multiplier is corrected. 1 is normal. - 特攻Eダメージ倍率に補正をかけます。１が通常。
	float weakDmgRateE;

	// NAME: Special attack F damage multiplier correction - 特攻Fダメージ倍率補正
	// DESC: Special attack F Damage multiplier is corrected. 1 is normal. - 特攻Fダメージ倍率に補正をかけます。１が通常。
	float weakDmgRateF;

	// NAME: Defender: Dark damage multiplier - 防御側：闇ダメージ倍率
	// DESC: Dark damage multiplier: Correct the calculated damage by XX times. 1 is normal. - 闇ダメージ倍率：算出したダメージに×○倍で補正をかける。１が通常。
	float darkDamageCutRate;

	// NAME: Dark defense multiplier - 闇防御力倍率
	// DESC: Multiply the darkness defense by the set value - 闇防御力に設定した数値をかけます
	float darkDiffenceRate;

	// NAME: Dark defense [point] - 闇防御力[point]
	// DESC: Add or subtract the value set for darkness defense - 闇防御力に設定した数値を加減算する
	int32_t darkDiffence;

	// NAME: Attacker: Dark damage multiplier - 攻撃側：闇ダメージ倍率
	// DESC: Dark damage multiplier: Correct the calculated damage by XX times. 1 is normal. - 闇ダメージ倍率：算出したダメージに×○倍で補正をかける。１が通常。
	float darkAttackRate;

	// NAME: Dark attack power multiplier - 闇攻撃力倍率
	// DESC: Multiply the dark attack power by the set value - 闇攻撃力に設定した数値をかけます
	float darkAttackPowerRate;

	// NAME: Dark attack power [point] - 闇攻撃力[point]
	// DESC: Add or subtract the value set for the dark attack power - 闇攻撃力に設定した数値を加減算する
	int32_t darkAttackPower;

	// NAME: Radius of full view of darkness [m] - 暗闇丸見え半径[m]
	// DESC: Radius of full view of darkness [m]. If you are within this distance, you will be able to see at normal distance even in the dark. - 暗闇丸見え半径[m]。この距離内にいる場合は暗所でも通常距離で見えるようになります
	float antiDarkSightRadius;

	// NAME: Damipoli ID with full view of darkness - 暗闇丸見えダミポリID
	// DESC: Damipoli ID (-1: Master) with full view of darkness. Create a full view area around this Damipoli - 暗闇丸見えダミポリID(-1:マスター)。このダミポリを中心に丸見え領域を作成します
	int32_t antiDarkSightDmypolyId;

	// NAME: Trigger condition: Remaining HP ratio is above a certain level [%] - 発動条件　残りHP比率が一定以上[%]
	// DESC: Activates only when you have HP above the specified value - 指定された値以上のHPを持っている時にしか発動しない
	float conditionHpRate;

	// NAME: Consumption stamina magnification - 消費スタミナ倍率
	// DESC: Multiply by multiplying the consumption stamina value of the behavior parameter - 行動パラメータの消費スタミナの値にかける倍率
	float consumeStaminaRate;

	// NAME: Item drop correction - アイテムドロップ補正
	// DESC: The set value is added to [Item Drop Correction] - 設定された値が【アイテムドロップ補正】に加算される 
	float itemDropRate;

	// NAME: Poison resistance change [point] - 毒耐性変化[point]
	// DESC: Increase or decrease the state resistance value - 状態耐性値を増減させる
	int32_t changePoisonResistPoint;

	// NAME: Epidemic resistance change [point] - 疫病耐性変化[point]
	// DESC: Increase or decrease the state resistance value - 状態耐性値を増減させる
	int32_t changeDiseaseResistPoint;

	// NAME: Bleeding resistance change [point] - 出血耐性変化[point]
	// DESC: Increase or decrease the state resistance value - 状態耐性値を増減させる
	int32_t changeBloodResistPoint;

	// NAME: Curse resistance change [point] - 呪耐性変化[point]
	// DESC: Increase or decrease the state resistance value - 状態耐性値を増減させる
	int32_t changeCurseResistPoint;

	// NAME: Change in cold tolerance [point] - 冷気耐性変化[point]
	// DESC: Increase or decrease the state resistance value - 状態耐性値を増減させる
	int32_t changeFreezeResistPoint;

	// NAME: Attacker: Slash damage multiplier - 攻撃側：斬撃ダメージ倍率
	// DESC: Slash damage ratio: Correct the calculated damage by XX times. 1 is normal. - 斬撃ダメージ倍率：算出したダメージに×○倍で補正をかける。１が通常。
	float slashAttackRate;

	// NAME: Attacker: Batter damage multiplier - 攻撃側：打撃ダメージ倍率
	// DESC: Batter damage ratio: The calculated damage is corrected by XX times. 1 is normal. - 打撃ダメージ倍率：算出したダメージに×○倍で補正をかける。１が通常。
	float blowAttackRate;

	// NAME: Attack side: piercing damage multiplier - 攻撃側：刺突ダメージ倍率
	// DESC: Puncture damage ratio: Correct the calculated damage by XX times. 1 is normal. - 刺突ダメージ倍率：算出したダメージに×○倍で補正をかける。１が通常。
	float thrustAttackRate;

	// NAME: Attacker: Non-attribute damage multiplier - 攻撃側：無属性ダメージ倍率
	// DESC: Non-attribute damage ratio: Correct the calculated damage by XX times. 1 is normal. - 無属性ダメージ倍率：算出したダメージに×○倍で補正をかける。１が通常。
	float neutralAttackRate;

	// NAME: Slash attack power multiplier - 斬撃攻撃力倍率
	// DESC: Multiply the slashing attack power by the set value - 斬撃攻撃力に設定した数値をかけます
	float slashAttackPowerRate;

	// NAME: Batter attack power multiplier - 打撃攻撃力倍率
	// DESC: Multiply the hit attack power by the set value - 打撃攻撃力に設定した数値をかけます
	float blowAttackPowerRate;

	// NAME: Puncture attack power multiplier - 刺突攻撃力倍率
	// DESC: Multiply the piercing attack power by the set value - 刺突攻撃力に設定した数値をかけます
	float thrustAttackPowerRate;

	// NAME: Non-attribute attack power multiplier - 無属性攻撃力倍率
	// DESC: Multiply the non-attribute attack power by the set value - 無属性攻撃力に設定した数値をかけます
	float neutralAttackPowerRate;

	// NAME: Slash attack power [point] - 斬撃攻撃力[point]
	// DESC: Add or subtract the value set for the slashing attack power - 斬撃攻撃力に設定した数値を加減算する
	int32_t slashAttackPower;

	// NAME: Batter attack power [point] - 打撃攻撃力[point]
	// DESC: Add or subtract the value set for the batter attack power - 打撃攻撃力に設定した数値を加減算する
	int32_t blowAttackPower;

	// NAME: Puncture attack power [point] - 刺突攻撃力[point]
	// DESC: Add or subtract the value set for the piercing attack power - 刺突攻撃力に設定した数値を加減算する
	int32_t thrustAttackPower;

	// NAME: Non-attribute attack power [point] - 無属性攻撃力[point]
	// DESC: Add or subtract the value set for non-attribute attack power - 無属性攻撃力に設定した数値を加減算する
	int32_t neutralAttackPower;

	// NAME: Strength correction change [point] - 筋力補正変化[point]
	// DESC: Add or subtract the correction value of the weapon - 武器の補正値を加減算する
	int32_t changeStrengthPoint;

	// NAME: Agility correction change [point] - 俊敏補正変化[point]
	// DESC: Add or subtract the correction value of the weapon - 武器の補正値を加減算する
	int32_t changeAgilityPoint;

	// NAME: Magic correction change [point] - 魔力補正変化[point]
	// DESC: Add or subtract the correction value of the weapon - 武器の補正値を加減算する
	int32_t changeMagicPoint;

	// NAME: Faith correction change [point] - 信仰補正変化[point]
	// DESC: Add or subtract the correction value of the weapon - 武器の補正値を加減算する
	int32_t changeFaithPoint;

	// NAME: Luck correction change [point] - 運補正変化[point]
	// DESC: Add or subtract the correction value of the weapon - 武器の補正値を加減算する
	int32_t changeLuckPoint;

	// NAME: Arts point recovery Strength system - アーツポイント回復 筋力系
	// DESC: Arts Point Restores strength - アーツポイント筋力を回復させる
	int8_t recoverArtsPoint_Str;

	// NAME: Arts point recovery workmanship system - アーツポイント回復 技量系
	// DESC: Restores arts point workmanship - アーツポイント技量を回復させる
	int8_t recoverArtsPoint_Dex;

	// NAME: Arts point recovery magic system - アーツポイント回復 魔法系
	// DESC: Restores arts point magic - アーツポイント魔法を回復させる
	int8_t recoverArtsPoint_Magic;

	// NAME: Arts point recovery Miracle system - アーツポイント回復 奇跡系
	// DESC: Recover arts point miracles - アーツポイント奇跡を回復させる
	int8_t recoverArtsPoint_Miracle;

	// NAME: Mad damage correction factor - 発狂ダメージ補正倍率
	// DESC: Correction value used only for point damage and% damage of state change type [madness] - 状態変化タイプ[発狂]のPointダメージ、％ダメージの時のみ使用される補正値
	uint8_t madnessDamageRate;

	// NAME: Whether to apply the abnormal state attack power multiplier correction - 状態異常攻撃力倍率補正を適応するか
	// DESC: If ○, the abnormal state attack power multiplier correction of the attack para is applied. - ○なら攻撃パラの状態異常攻撃力倍率補正を適応します。
	uint8_t isUseStatusAilmentAtkPowerCorrect: 1;

	// NAME: Whether to apply the attack power multiplier correction of the attack parameter - 攻撃パラメータの攻撃力倍率補正を適応するか
	// DESC: If ○, the attack power multiplier correction of the attack para is applied. - ○なら攻撃パラの攻撃力倍率補正を適応します。
	uint8_t isUseAtkParamAtkPowerCorrect: 1;

	// NAME: Do not delete at death - 死亡時に削除しない
	// DESC: If it is ○, it will not be deleted even if the character dies. Mainly used for death effects. - ○ならキャラが死亡しても削除しません。主に死亡エフェクトに使います。
	uint8_t dontDeleteOnDead: 1;

	// NAME: Cold air invalid - 冷気無効
	// DESC: When this effect is applied, it will not be cold - この効果がかかっていると冷気にかからなくなる
	uint8_t disableFreeze: 1;

	// NAME: Do not synchronize with the net - ネット同期しない
	// DESC: Do not synchronize with the net. It does not mean that you will be able to call it locally, but simply do not send it online. For example, a remote character does not activate locally, so nothing happens in that case. - ネット同期しない。ローカルに掛けるようになる、という意味ではなく、単にネット送信しない。例えばリモートキャラはローカル発動しないので、その場合何も起こらない。
	uint8_t isDisableNetSync: 1;

	// NAME: Anti-magic parameter change - 対呪術パラメータ変化
	// DESC: Set whether or not it is effective against spells - 呪術に対して効果を発揮するかしないかを設定する
	uint8_t shamanParamChange: 1;

	// NAME: Stop notification of search enemy status - 被索敵状態の通知停止
	// DESC: Whether to stop notifications targeting your army (used by EventMaker decisions and buddy platoons) - 自軍をターゲットしている通知を停止するかどうか(EventMakerでの判定やバディ小隊で使用)
	uint8_t isStopSearchedNotify: 1;

	// NAME: It only takes when outside the rain shield - 雨遮蔽外の時のみかかる
	// DESC: If it is ○, it will not be applied when it is judged to be shielded (× is always applied) - ○なら遮蔽判定されているときは掛からない（×は常に掛かる）
	uint8_t isCheckAboveShadowTest: 1;

	// NAME: Addition value to be added to the action judgment ID - 行動判定IDに加算する加算値
	// DESC: If the addition value of the action judgment ID is 0, the action is not switched and the action is stopped. - 行動判定IDの加算値 ０の場合は行動を切り替えるのではなく、行動しなくなります。
	uint16_t addBehaviorJudgeId_add;

	// NAME: SA value_damage ratio - SA値_被ダメージ倍率
	// DESC: Multiplier for SA damage - SAダメージかかる倍率
	float saReceiveDamageRate;

	// NAME: Defending player Physical damage compensation factor - 防御側 プレイヤー 物理ダメージ補正倍率
	// DESC: Damage correction for the damage value received from the player. - プレイヤーから受けるダメージ値に対するダメージ補正。
	float defPlayerDmgCorrectRate_Physics;

	// NAME: Defending player magic damage correction multiplier - 防御側 プレイヤー 魔法ダメージ補正倍率
	// DESC: Damage correction for the damage value received from the player. - プレイヤーから受けるダメージ値に対するダメージ補正。
	float defPlayerDmgCorrectRate_Magic;

	// NAME: Defending player Fire damage compensation factor - 防御側 プレイヤー 炎ダメージ補正倍率
	// DESC: Damage correction for the damage value received from the player. - プレイヤーから受けるダメージ値に対するダメージ補正。
	float defPlayerDmgCorrectRate_Fire;

	// NAME: Defending player Lightning damage compensation factor - 防御側 プレイヤー 雷ダメージ補正倍率
	// DESC: Damage correction for the damage value received from the player. - プレイヤーから受けるダメージ値に対するダメージ補正。
	float defPlayerDmgCorrectRate_Thunder;

	// NAME: Defending player Dark damage correction factor - 防御側 プレイヤー 闇ダメージ補正倍率
	// DESC: Damage correction for the damage value received from the player. - プレイヤーから受けるダメージ値に対するダメージ補正。
	float defPlayerDmgCorrectRate_Dark;

	// NAME: Defender Enemy Physical Damage Compensation Magnification - 防御側 敵 物理ダメージ補正倍率
	// DESC: Damage correction for the damage value received from the enemy. - 敵から受けるダメージ値に対するダメージ補正。
	float defEnemyDmgCorrectRate_Physics;

	// NAME: Defender enemy magic damage correction factor - 防御側 敵 魔法ダメージ補正倍率
	// DESC: Damage correction for the damage value received from the enemy. - 敵から受けるダメージ値に対するダメージ補正。
	float defEnemyDmgCorrectRate_Magic;

	// NAME: Defender enemy flame damage correction factor - 防御側 敵 炎ダメージ補正倍率
	// DESC: Damage correction for the damage value received from the enemy. - 敵から受けるダメージ値に対するダメージ補正。
	float defEnemyDmgCorrectRate_Fire;

	// NAME: Defender enemy lightning damage correction factor - 防御側 敵 雷ダメージ補正倍率
	// DESC: Damage correction for the damage value received from the enemy. - 敵から受けるダメージ値に対するダメージ補正。
	float defEnemyDmgCorrectRate_Thunder;

	// NAME: Defender enemy darkness damage correction factor - 防御側 敵 闇ダメージ補正倍率
	// DESC: Damage correction for the damage value received from the enemy. - 敵から受けるダメージ値に対するダメージ補正。
	float defEnemyDmgCorrectRate_Dark;

	// NAME: Defender Object Damage Compensation Magnification - 防御側 オブジェクトダメージ補正倍率
	// DESC: Damage correction for the damage value received from OBJ. - OBJから受けるダメージ値に対するダメージ補正。
	float defObjDmgCorrectRate;

	// NAME: Attacking player Physical damage correction factor - 攻撃側 プレイヤー 物理ダメージ補正倍率
	// DESC: Damage correction for the damage value given to the player. - プレイヤーに与えるダメージ値に対するダメージ補正。
	float atkPlayerDmgCorrectRate_Physics;

	// NAME: Attacking player Magic damage compensation factor - 攻撃側 プレイヤー 魔法ダメージ補正倍率
	// DESC: Damage correction for the damage value given to the player. - プレイヤーに与えるダメージ値に対するダメージ補正。
	float atkPlayerDmgCorrectRate_Magic;

	// NAME: Attacker Player Flame Damage Compensation Multiplier - 攻撃側 プレイヤー 炎ダメージ補正倍率
	// DESC: Damage correction for the damage value given to the player. - プレイヤーに与えるダメージ値に対するダメージ補正。
	float atkPlayerDmgCorrectRate_Fire;

	// NAME: Attacking player Lightning damage compensation factor - 攻撃側 プレイヤー 雷ダメージ補正倍率
	// DESC: Damage correction for the damage value given to the player. - プレイヤーに与えるダメージ値に対するダメージ補正。
	float atkPlayerDmgCorrectRate_Thunder;

	// NAME: Attacking player Dark damage correction factor - 攻撃側 プレイヤー 闇ダメージ補正倍率
	// DESC: Damage correction for the damage value given to the player. - プレイヤーに与えるダメージ値に対するダメージ補正。
	float atkPlayerDmgCorrectRate_Dark;

	// NAME: Attacker Enemy Physical Damage Compensation Magnification - 攻撃側 敵 物理ダメージ補正倍率
	// DESC: Damage correction for the damage value given to the enemy. - 敵に与えるダメージ値に対するダメージ補正。
	float atkEnemyDmgCorrectRate_Physics;

	// NAME: Attacking side Enemy magic damage correction factor - 攻撃側 敵 魔法ダメージ補正倍率
	// DESC: Damage correction for the damage value given to the enemy. - 敵に与えるダメージ値に対するダメージ補正。
	float atkEnemyDmgCorrectRate_Magic;

	// NAME: Attacking side Enemy flame damage correction factor - 攻撃側 敵 炎ダメージ補正倍率
	// DESC: Damage correction for the damage value given to the enemy. - 敵に与えるダメージ値に対するダメージ補正。
	float atkEnemyDmgCorrectRate_Fire;

	// NAME: Attacking side Enemy lightning damage correction factor - 攻撃側 敵 雷ダメージ補正倍率
	// DESC: Damage correction for the damage value given to the enemy. - 敵に与えるダメージ値に対するダメージ補正。
	float atkEnemyDmgCorrectRate_Thunder;

	// NAME: Attacking side Enemy darkness damage correction factor - 攻撃側 敵 闇ダメージ補正倍率
	// DESC: Damage correction for the damage value given to the enemy. - 敵に与えるダメージ値に対するダメージ補正。
	float atkEnemyDmgCorrectRate_Dark;

	// NAME: Cold resistance change rate - 冷気耐性変化倍率
	// DESC: Multiply the cold resistance value by the set magnification - 冷気耐性値に設定された倍率をかける
	float registFreezeChangeRate;

	// NAME: Trigger condition state change type 1 - 発動条件状態変化タイプ1
	// DESC: Trigger condition state change type 1 - 発動条件状態変化タイプ1
	uint16_t invocationConditionsStateChange1;

	// NAME: Trigger condition state change type 2 - 発動条件状態変化タイプ2
	// DESC: Trigger condition state change type 2 - 発動条件状態変化タイプ2
	uint16_t invocationConditionsStateChange2;

	// NAME: Trigger condition state change type 3 - 発動条件状態変化タイプ3
	// DESC: Trigger condition state change type 3 - 発動条件状態変化タイプ3
	uint16_t invocationConditionsStateChange3;

	// NAME: Listener: Overwrite audible AI sound level - 聞く方：可聴AI音レベル上書き
	// DESC: Overwrite how good your ears are - どれくらい耳が良いのかを上書きする
	int16_t hearingAiSoundLevel;

	// NAME: Capsule size magnification - カプセルサイズ倍率
	// DESC: Magnification over the height of the character capsule - キャラカプセルの高さに掛かる倍率
	float chrProxyHeightRate;

	// NAME: Search side addition correction_viewer - 索敵度加算補正_見る側
	// DESC: Search side addition correction_viewer - 索敵度加算補正_見る側
	float addAwarePointCorrectValue_forMe;

	// NAME: Searching degree addition correction _ side to be seen - 索敵度加算補正_見られる側
	// DESC: Searching degree addition correction _ side to be seen - 索敵度加算補正_見られる側
	float addAwarePointCorrectValue_forTarget;

	// NAME: Those who can see: Visual addition - 見られる方：視覚加算
	// DESC: Correct the ease of finding with a real number - 見つかりやすさを実数で補正する
	float sightSearchEnemyAdd;

	// NAME: How to see: Visual addition - 見る方：視覚加算
	// DESC: Correct the ease of finding with a real number - 見つけやすさを実数で補正する
	float sightSearchAdd;

	// NAME: Listener: AI sound radius addition - 聞く方：AI音半径加算
	// DESC: Correct the hearing of AI sounds with real numbers - AI音の聞こえ具合を実数で補正する
	float hearingSearchAdd;

	// NAME: Listener: AI sound radius magnification - 聞く方：AI音半径倍率
	// DESC: Correct the audibility of AI sound by magnification - AI音の聞こえ具合を倍率で補正する
	float hearingSearchRate;

	// NAME: Those who can hear: AI sound radius addition - 聞かせる方：AI音半径加算
	// DESC: Correct the loudness of the emitted AI sound with a real number - 発するAI音の大きさを実数で補正する
	float hearingSearchEnemyAdd;

	// NAME: Sales price correction: Magnification - 販売価格補正：倍率
	// DESC: Sales price correction: Magnification - 販売価格補正：倍率
	float value_Magnification;

	// NAME: Arts MP consumption magnification - アーツ消費MP倍率
	// DESC: Arts MP consumption multiplier [%] - アーツ消費MP倍率[%]
	float artsConsumptionRate;

	// NAME: Magic consumption MP magnification - 魔法消費MP倍率
	// DESC: Magic consumption MP multiplier [%] - 魔法消費MP倍率[%]
	float magicConsumptionRate;

	// NAME: Magic consumption MP multiplier - 呪術消費MP倍率
	// DESC: Magic consumption MP multiplier [%] - 呪術消費MP倍率[%]
	float shamanConsumptionRate;

	// NAME: Miracle consumption MP magnification - 奇跡消費MP倍率
	// DESC: Miracle consumption MP magnification [%] - 奇跡消費MP倍率[%]
	float miracleConsumptionRate;

	// NAME: Est bottle HP damage amount [%] - エスト瓶HPダメージ量[%]
	// DESC: Set what percentage of the maximum HP to add (or subtract) with one activation - 一度の発動で最大HPの何%分を加算（または減算）するかを設定
	int32_t changeHpEstusFlaskRate;

	// NAME: Est bottle HP damage amount [point] - エスト瓶HPダメージ量[point]
	// DESC: Set how many points to add (or subtract) with one activation - 一度の発動で何ポイント加算（または減算）するかを設定
	int32_t changeHpEstusFlaskPoint;

	// NAME: Est Bottle MP Damage Amount [%] - エスト瓶MPダメージ量[%] 
	// DESC: Set what percentage of the maximum MP to add (or subtract) with one activation - 一度の発動で最大MPの何%分を加算（または減算）するかを設定
	int32_t changeMpEstusFlaskRate;

	// NAME: Est Bottle MP Damage Amount [point] - エスト瓶MPダメージ量[point] 
	// DESC: Set how many points to add (or subtract) with one activation - 一度の発動で何ポイント加算（または減算）するかを設定
	int32_t changeMpEstusFlaskPoint;

	// NAME: Est bottle HP damage multiplier - エスト瓶HPダメージ倍率 
	// DESC: Correct the damage amount of the HP Est bottle - HPエスト瓶のダメージ量に対して補正をかける
	float changeHpEstusFlaskCorrectRate;

	// NAME: Est bottle MP damage multiplier - エスト瓶MPダメージ倍率 
	// DESC: Correct the damage amount of MP Est Bottle - MPエスト瓶のダメージ量に対して補正をかける
	float changeMpEstusFlaskCorrectRate;

	// NAME: HP drain activation special effect - HPドレイン発動特殊効果
	// DESC: When the special effect of the state change type "HP drain" is enabled, when the enemy is defeated, the special effect ID set in the "HP drain activation special effect" of the same special effect is called (0: ignore). - 状態変化タイプ「HPドレイン」の特殊効果が有効の時に、敵を倒した際に同じ特殊効果の「HPドレイン発動特殊効果」に設定されている特殊効果IDを呼び出す(0：無視)
	int32_t applyIdOnGetSoul;

	// NAME: Life extension factor - 寿命延長倍率
	// DESC: Extension coefficient of state change type "life extension" - 状態変化タイプ「寿命延長」の延長係数
	float extendLifeRate;

	// NAME: Life shortening ratio - 寿命短縮倍率
	// DESC: Shortening coefficient of state change type "life shortening" - 状態変化タイプ「寿命短縮」の短縮係数
	float contractLifeRate;

	// NAME: Damaged object attack power multiplier - 被ダメージ オブジェクト攻撃力倍率
	// DESC: Corrects the attack power against the damage received from OBJ. (Not damage compensation) - OBJから受けるダメージに対して攻撃力を補正する。（ダメージ補正ではない）
	float defObjectAttackPowerRate;

	// NAME: Group ID that deletes the character's paint decal when the special effect disappears - 特殊効果消失時にキャラのペイントデカールを削除するグループID
	// DESC: When the special effect disappears (lifetime / overwritten / erased ... etc.), the paint decal is deleted if the special effect of the same group ID is not applied. - 特殊効果が消失した時（寿命/何かに上書きされる/消される…など）に、同じグループIDの特殊効果がかかっていなければペイントデカールを削除する。
	int16_t effectEndDeleteDecalGroupId;

	// NAME: Vitality additional value - 生命力追加値
	// DESC: Add value to growth status - 成長ステータスに値を加える
	int8_t addLifeForceStatus;

	// NAME: Mental strength additional value - 精神力追加値
	// DESC: Add value to growth status - 成長ステータスに値を加える
	int8_t addWillpowerStatus;

	// NAME: Endurance additional value - 持久力追加値
	// DESC: Add value to growth status - 成長ステータスに値を加える
	int8_t addEndureStatus;

	// NAME: Additional physical strength - 体力追加値
	// DESC: Add value to growth status - 成長ステータスに値を加える
	int8_t addVitalityStatus;

	// NAME: Strength addition value - 筋力追加値
	// DESC: Add value to growth status - 成長ステータスに値を加える
	int8_t addStrengthStatus;

	// NAME: Workmanship addition value - 技量追加値
	// DESC: Add value to growth status - 成長ステータスに値を加える
	int8_t addDexterityStatus;

	// NAME: Force addition value - 理力追加値
	// DESC: Add value to growth status - 成長ステータスに値を加える
	int8_t addMagicStatus;

	// NAME: Faith additional value - 信仰追加値
	// DESC: Add value to growth status - 成長ステータスに値を加える
	int8_t addFaithStatus;

	// NAME: Luck addition value - 運追加値
	// DESC: Add value to growth status - 成長ステータスに値を加える
	int8_t addLuckStatus;

	// NAME: Deletion condition damage - 削除条件ダメージ
	// DESC: Reason for damage under the condition to remove special effects - 特殊効果を削除する条件のダメージ理由
	uint8_t deleteCriteriaDamage;

	// NAME: Vs to subcategory parameter change 3 - 対サブカテゴリパラメータ変化3
	// DESC: Vs to subcategory parameter change 3 - 対サブカテゴリパラメータ変化3
	uint8_t magicSubCategoryChange3;

	// NAME: Special attribute variation value - 特殊属性バリエーション値
	// DESC: This value is used to give variation to abnormal state SFX, SE, etc. in combination with the special attribute set for the special effect. SEQ16473 - 特殊効果に設定する特殊属性と組み合わせて状態異常SFX,SEなどにバリエーションを持たせるために使用する値です。SEQ16473
	uint8_t spAttributeVariationValue;

	// NAME: Repelling attack power_overwrite - はじき攻撃力_上書き
	// DESC: Set a value that overwrites the repelling attack power - はじき攻撃力を上書きする値を設定
	uint8_t atkFlickPower;

	// NAME: Water level setting for wet conditions - 濡れる条件の水位設定
	// DESC: TimeAct Determines whether special effects are applied in combination with "at what water level you get wet" - TimeAct「どの水位で濡れるか」と組み合わせて特殊効果に掛かるかどうかを判定する
	uint8_t wetConditionDepth;

	// NAME: SA recovery speed change - SA回復速度変化
	// DESC: Change the recovery speed of SA durability - SA耐久度の回復速度を変化させる
	float changeSaRecoveryVelocity;

	// NAME: Regain magnification - リゲイン倍率
	// DESC: Regain magnification - リゲイン倍率
	float regainRate;

	// NAME: SA attack power multiplier - SA攻撃力倍率
	// DESC: SA attack power multiplier - SA攻撃力倍率
	float saAttackPowerRate;

	// NAME: Sleep tolerance attack power [point] - 睡眠耐性攻撃力[point]
	// DESC: Numerical value to be added to the target's [Sleep tolerance] when hit - ヒットした時に、対象の【睡眠耐性値】に加算する数値
	int32_t sleepAttackPower;

	// NAME: Madness resistance attack power [point] - 発狂耐性攻撃力[point]
	// DESC: A number to be added to the target's [madness resistance value] when it hits - ヒットした時に、対象の【発狂耐性値】に加算する数値
	int32_t madnessAttackPower;

	// NAME: Sleep tolerance change rate - 睡眠耐性変化倍率
	// DESC: Multiply the sleep tolerance value by the set magnification - 睡眠耐性値に設定された倍率をかける
	float registSleepChangeRate;

	// NAME: Madness resistance change rate - 発狂耐性変化倍率
	// DESC: Multiply the madness resistance value by the set multiplier - 発狂耐性値に設定された倍率をかける
	float registMadnessChangeRate;

	// NAME: Changes in sleep tolerance [point] - 睡眠耐性変化[point]
	// DESC: Increase or decrease the state resistance value - 状態耐性値を増減させる
	int32_t changeSleepResistPoint;

	// NAME: Madness resistance change [point] - 発狂耐性変化[point]
	// DESC: Increase or decrease the state resistance value - 状態耐性値を増減させる
	int32_t changeMadnessResistPoint;

	// NAME: Sleep damage correction factor - 睡眠ダメージ補正倍率
	// DESC: Point damage of state change type [Sleep], correction value used only when% damage - 状態変化タイプ[睡眠]のPointダメージ、％ダメージの時のみ使用される補正値
	uint8_t sleepDamageRate;

	// NAME: Changes in site parameters - 対部位パラメータ変化
	// DESC: The effect is limited by the part where the attack hits. Only defensive items in damage calculation are subject to restriction - 攻撃がヒットした部位によって効果を制限する。ダメージ計算の防御系の項目のみ制限対象となる
	uint8_t applyPartsGroup;

	// NAME: Clear the target - ターゲットクリア
	// DESC: Does not recognize the target while the special effect is applied (excluding the riding target) - 特殊効果が掛かっている間ターゲットを認識しない（騎乗ターゲット除く
	uint8_t clearTarget: 1;

	// NAME: False target invalid_subhuman - 偽ターゲット無効_亜人系
	// DESC: You will not be caught by the fake target of the subhuman system that occurred - 発生した亜人系の偽ターゲットに引っかからなくなる
	uint8_t fakeTargetIgnoreAjin: 1;

	// NAME: False target invalid_phantom arts system - 偽ターゲット無効_幻影アーツ系
	// DESC: You will not be caught by the fake target of the phantom arts system that occurred - 発生した幻影アーツ系の偽ターゲットに引っかからなくなる
	uint8_t fakeTargetIgnoreMirageArts: 1;

	// NAME: Intrusion_B request judgment flag - 侵入_Bリクエスト　判定フラグ
	// DESC: If checked, issue an intrusion_B request when activated - チェックが付いている場合、発動時に侵入_Bリクエストを発行
	uint8_t requestForceJoinBlackSOS_B: 1;

	// NAME: unk353_4 - unk353_4
	uint8_t unk353_4: 1;

	// NAME: pad - pad
	uint8_t pad2[1];

	// NAME: Maximum SA addition value [point] - 最大SA加算値[point]
	// DESC: Value to add to the super armor value - スーパーアーマー値に加算する値
	float changeSuperArmorPoint;

	// NAME: SA damage amount [point] - SAダメージ量[point]
	// DESC: Set how many points to subtract (or add) with one activation - 一度の発動で何ポイント減算（または加算）するかを設定
	float changeSaPoint;

	// NAME: Giant enemy lift height overwrite [m] - 巨大敵持ち上げ高さ上書き[m]
	// DESC: Giant enemy lift height overwrite [m] - 巨大敵持ち上げ高さ上書き[m]
	float hugeEnemyPickupHeightOverwrite;

	// NAME: Defender: Poison resistance damage multiplier - 防御側：毒耐性ダメージ倍率
	// DESC: Poison resistance damage ratio: Correct the calculated damage by XX times. 1 is normal. - 毒耐性ダメージ倍率：算出したダメージに×○倍で補正をかける。１が通常。
	float poisonDefDamageRate;

	// NAME: Defender: Epidemic resistance damage multiplier - 防御側：疫病耐性ダメージ倍率
	// DESC: Epidemic resistance damage ratio: Correct the calculated damage by XX times. 1 is normal. - 疫病耐性ダメージ倍率：算出したダメージに×○倍で補正をかける。１が通常。
	float diseaseDefDamageRate;

	// NAME: Defender: Bleeding resistance damage multiplier - 防御側：出血耐性ダメージ倍率
	// DESC: Bleeding resistance damage ratio: Correct the calculated damage by XX times. 1 is normal. - 出血耐性ダメージ倍率：算出したダメージに×○倍で補正をかける。１が通常。
	float bloodDefDamageRate;

	// NAME: Defender: Curse resistance damage multiplier - 防御側：呪耐性ダメージ倍率
	// DESC: Curse resistance damage multiplier: Corrects the calculated damage by XX times. 1 is normal. - 呪耐性ダメージ倍率：算出したダメージに×○倍で補正をかける。１が通常。
	float curseDefDamageRate;

	// NAME: Defender: Cold resistance damage multiplier - 防御側：冷気耐性ダメージ倍率
	// DESC: Cold resistance damage ratio: Correct the calculated damage by XX times. 1 is normal. - 冷気耐性ダメージ倍率：算出したダメージに×○倍で補正をかける。１が通常。
	float freezeDefDamageRate;

	// NAME: Defender: Sleep resistance damage multiplier - 防御側：睡眠耐性ダメージ倍率
	// DESC: Sleep resistance damage ratio: Correct the calculated damage by XX times. 1 is normal. - 睡眠耐性ダメージ倍率：算出したダメージに×○倍で補正をかける。１が通常。
	float sleepDefDamageRate;

	// NAME: Defender: Madness resistance damage multiplier - 防御側：発狂耐性ダメージ倍率
	// DESC: Madness resistance damage multiplier: Correct the calculated damage by XX times. 1 is normal. - 発狂耐性ダメージ倍率：算出したダメージに×○倍で補正をかける。１が通常。
	float madnessDefDamageRate;

	// NAME: Distance to go home no matter what [m] _ overwrite - 何があっても帰宅する距離[m]_上書き
	// DESC: Distance to go home no matter what [m] _ overwrite - 何があっても帰宅する距離[m]_上書き
	uint16_t overwrite_maxBackhomeDist;

	// NAME: Distance to return home while fighting [m] _ Overwrite - 戦闘しつつ帰宅する距離[m]_上書き
	// DESC: Distance to return home while fighting [m] _ Overwrite - 戦闘しつつ帰宅する距離[m]_上書き
	uint16_t overwrite_backhomeDist;

	// NAME: Distance to give up and fight to return to the nest [m] _ overwrite - 巣に帰るのをあきらめて戦闘する距離[m]_上書き
	// DESC: Distance to give up and fight to return to the nest [m] _ overwrite - 巣に帰るのをあきらめて戦闘する距離[m]_上書き 
	uint16_t overwrite_backhomeBattleDist;

	// NAME: When returning home: Distance to see the target [m] _ Overwrite - 帰宅時：ターゲットを見ている距離[m]_上書き
	// DESC: When returning home: Distance to see the target [m] _ Overwrite - 帰宅時：ターゲットを見ている距離[m]_上書き
	uint16_t overwrite_BackHome_LookTargetDist;

	// NAME: Item consumption MP magnification - アイテム消費MP倍率
	// DESC: Item consumption MP multiplier - アイテム消費MP倍率
	float goodsConsumptionRate;

	// NAME: pad - pad
	uint8_t pad3[8];
};

#endif
