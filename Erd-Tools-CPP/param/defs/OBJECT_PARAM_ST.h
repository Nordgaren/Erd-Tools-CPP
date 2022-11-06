/* This file was automatically generated from XML paramdefs. */
#ifndef _PARAMDEF_OBJECT_PARAM_ST_H
#define _PARAMDEF_OBJECT_PARAM_ST_H
#pragma once
#include <inttypes.h>

// Data Version: 1
// Is Big Endian: False
// Is Unicode: True
// Format Version: 106
struct OBJECT_PARAM_ST {

	// NAME: HP - HP
	// DESC: Durability until destruction (-1: Indestructible) - 破壊までの耐久力(-1:破壊不可)
	int16_t hp;

	// NAME: Defense power - 防御力
	// DESC: Attack power below this value is no damage - この値以下の攻撃力はダメージなし
	uint16_t defense;

	// NAME: Xref texture ID - 外部参照テクスチャID
	// DESC: mAA / mAA_ ????. Tpf (-1: None) (AA: Area number) - mAA/mAA_????.tpf(-1:なし)(AA:エリア番号)
	int16_t extRefTexId;

	// NAME: Material ID - 材質ID
	// DESC: Material ID. Treated the same as the floor material. When -1, the same behavior as before - マテリアルID。床材質と同じ扱い。-1のときは今までと同じ挙動
	int16_t materialId;

	// NAME: Anime destruction ID maximum value - アニメ破壊ID最大値
	// DESC: What is the animation destruction ID from 0 to what? - アニメ破壊IDが0番から何番までか
	uint8_t animBreakIdMax;

	// NAME: Does the camera hit? - カメラが当たるか
	// DESC: Does the camera hit (0: not hit, 1: hit) - カメラが当たるか(0:当たらない, 1:当たる)
	uint8_t isCamHit: 1;

	// NAME: Will it break in a player collision? - プレイヤ衝突で壊れるか
	// DESC: Broken when the player touches (0: no, 1:) - プレイヤが接触したときに壊れ(0:ない, 1:る)
	uint8_t isBreakByPlayerCollide: 1;

	// NAME: Is it anime destruction? - アニメ破壊か
	// DESC: Is it animation destruction (0: physical destruction, 1: animation destruction) - アニメ破壊か(0:物理破壊, 1:アニメ破壊)
	uint8_t isAnimBreak: 1;

	// NAME: Will it hit a penetrating bullet? - 貫通弾丸が当たるか
	// DESC: Will the penetrating bullet hit (0: not hit, 1: hit) - 貫通弾丸が当たるか(0:当たらない, 1:当たる)
	uint8_t isPenetrationBulletHit: 1;

	// NAME: Will the character win? - キャラが当たるか
	// DESC: Does the character win (0: not hit, 1: hit) - キャラが当たるか(0:当たらない, 1:当たる)
	uint8_t isChrHit: 1;

	// NAME: Do you play the attack - 攻撃を弾くか
	// DESC: Do you play the attack (0: do not play, 1: play) - 攻撃を弾くか(0:弾かない, 1:弾く)
	uint8_t isAttackBacklash: 1;

	// NAME: No destruction for initial appearance - 初期出現用破壊禁止
	// DESC: Broken at the initial appearance of the player (0: ru, 1: no) - プレイヤの初期出現で壊れ(0:る, 1:ない)
	uint8_t isDisableBreakForFirstAppear: 1;

	// NAME: Is it a ladder? - ハシゴか
	// DESC: Is it a ladder (0: different, 1: yes) - ハシゴか(0:ちがう, 1:そう)
	uint8_t isLadder: 1;

	// NAME: Do you want to stop the animation during the poly play? - ポリ劇中アニメを停止するか
	// DESC: Do you want to stop the animation during the poly play (0: not, 1: do) - ポリ劇中アニメを停止するか(0:しない, 1:する)
	uint8_t isAnimPauseOnRemoPlay: 1;

	// NAME: Is it not damaged? - ダメージが当たらないか
	// DESC: No damage (0: hit, 1: not hit) - ダメージが当たらない(0:当たる, 1:当たらない)
	uint8_t isDamageNoHit: 1;

	// NAME: Is it a moving object? - 移動オブジェか
	// DESC: Is it a moving object (0: different, 1: yes) - 移動オブジェか(0:ちがう, 1:そう)
	uint8_t isMoveObj: 1;

	// NAME: Is it a suspension bridge object? - 吊り橋オブジェクトか
	// DESC: Suspension bridge object (0: different, 1: yes) - 吊り橋オブジェクトか(0:ちがう, 1:そう)
	uint8_t isRopeBridge: 1;

	// NAME: Does the damage blow off the rigid body? - ダメージによって剛体が吹き飛ぶか
	// DESC: Does the damage blow the rigid body (0: do not blow, 1: blow) - ダメージによって剛体が吹き飛ぶか(0:吹き飛ばない, 1:吹き飛ぶ)
	uint8_t isAddRigidImpulse_ByDamage: 1;

	// NAME: Will it break if the character gets on it? - キャラが乗ったら壊れるか
	// DESC: Will it break if the character gets on (0: it won't break 1: it will break) - キャラが乗ったら壊れるか(0:壊れるない 1:壊れる)
	uint8_t isBreak_ByChrRide: 1;

	// NAME: Will it burn - 燃焼するか
	// DESC: Will it burn (0: not, 1:) - 燃焼するか(0:しない, 1:する)
	uint8_t isBurn: 1;

	// NAME: Will it be destroyed by an enemy character collision? - 敵キャラ衝突で壊れるか
	// DESC: Broken when an enemy character touches (0: No, 1: Ru) - 敵キャラが接触したときに壊れ(0:ない, 1:る)
	uint8_t isBreakByEnemyCollide: 1;

	// NAME: Default LOD Param ID - デフォルトLODパラムID
	// DESC: Default LOD Param ID (-1: None) - デフォルトLODパラムID(-1：なし)
	int8_t defaultLodParamId;

	// NAME: SFX ID at the time of destruction - 破壊時SFXID
	// DESC: SFXID when destroying an object (-1: default (810030)) - オブジェ破壊時のSFXID(-1:デフォルト(810030))
	int32_t breakSfxId;

	// NAME: SFX Damipoli ID at the time of destruction - 破壊時SFXダミポリID
	// DESC: SFX generation position when the object is destroyed Damipoly ID (-1: placement position) - オブジェ破壊時SFXの発生位置ダミポリID(-1：配置位置）
	int32_t breakSfxCpId;

	// NAME: Bomb generation at the time of destruction Action parameter ID - 破壊時 弾発生 行動パラメータID
	// DESC: Action parameter of [bullet] at the time of destruction (-1: does not occur) - 破壊時[弾]の行動パラメータ(-1:発生しない)
	int32_t breakBulletBehaviorId;

	// NAME: Damipoli ID - 破壊時 弾発生 ダミポリID
	// DESC: Location of [bullet] at the time of destruction Damipoli ID (-1: placement position) - 破壊時[弾]の発生位置ダミポリID(-1:配置位置)
	int32_t breakBulletCpId;

	// NAME: Fall destruction height (m) - 落下破壊高さ(m)
	// DESC: Height at which the object breaks when dropped (0: does not break when dropped) - 落下時にオブジェクトが壊れる高さ（0：落下では壊れない)
	uint8_t breakFallHeight;

	// NAME: Wind effect type (before destruction) - 風影響タイプ(破壊前)
	// DESC: Wind effect type (before destruction) - 風影響タイプ(破壊前)
	uint8_t windEffectType_0;

	// NAME: Wind effect type (after destruction) - 風影響タイプ(破壊後)
	// DESC: Wind effect type (after destruction) - 風影響タイプ(破壊後)
	uint8_t windEffectType_1;

	// NAME: Camera avoidance setting - カメラ回避設定
	// DESC: What to do if an object blocks between the camera and player - オブジェクトがカメラ・プレイヤー間を遮蔽した場合の対処方法
	uint8_t camAvoidType;

	// NAME: Wind coefficient (before destruction) - 風係数(破壊前)
	// DESC: Wind coefficient (before destruction) - 風係数(破壊前)
	float windEffectRate_0;

	// NAME: Wind coefficient (after destruction) - 風係数(破壊後)
	// DESC: Wind coefficient (after destruction) - 風係数(破壊後)
	float windEffectRate_1;

	// NAME: Forced stop time after destruction - 破壊後強制停止時間
	// DESC: Time from destruction to forced stop of rigid body (do not force stop at 0) - 破壊されてから剛体を強制的に停止するまでの時間（0で強制停止しない）
	float breakStopTime;

	// NAME: Burning time (seconds) - 燃焼時間(秒)
	// DESC: Burning time (seconds) (continues to burn at 0) - 燃焼時間(秒)(0で燃え続ける)
	float burnTime;

	// NAME: Combustion fracture judgment progress - 燃焼 破壊判定進行度
	// DESC: Burnup threshold for switching to the ruptured state - 破壊状態に切り替わる燃焼度の閾値
	float burnBraekRate;

	// NAME: Combustion SFXID: 0 - 燃焼 SFXID：0
	// DESC: SFX ID at the time of combustion: 0 (-1: No SFX) - 燃焼時のSFXID：0 (-1：SFXなし)
	int32_t burnSfxId;

	// NAME: Combustion SFXID: 1 - 燃焼 SFXID：1
	// DESC: SFX ID at the time of combustion: 1 (-1: No SFX) - 燃焼時のSFXID：1 (-1：SFXなし)
	int32_t burnSfxId_1;

	// NAME: Combustion SFXID: 2 - 燃焼 SFXID：2
	// DESC: SFX ID at the time of combustion: 2 (-1: No SFX) - 燃焼時のSFXID：2 (-1：SFXなし)
	int32_t burnSfxId_2;

	// NAME: Combustion SFXID: 3 - 燃焼 SFXID：3
	// DESC: SFX ID at the time of combustion: 3 (-1: No SFX) - 燃焼時のSFXID：3 (-1：SFXなし)
	int32_t burnSfxId_3;

	// NAME: Combustion bullet generation Behavior parameter: 0 - 燃焼 弾発生 行動パラメータ：0
	// DESC: Bullet generation behavior parameter at the time of burning: 0 (-1: does not occur) - 燃焼時の弾発生行動パラメータ：0(-1:発生しない)
	int32_t burnBulletBehaviorId;

	// NAME: Combustion bullet generation Behavior parameter: 1 - 燃焼 弾発生 行動パラメータ：1
	// DESC: Bullet generation behavior parameter at the time of burning: 1 (-1: does not occur) - 燃焼時の弾発生行動パラメータ：1(-1:発生しない)
	int32_t burnBulletBehaviorId_1;

	// NAME: Combustion bullet generation Behavior parameter: 2 - 燃焼 弾発生 行動パラメータ：2
	// DESC: Bullet generation behavior parameter at the time of burning: 2 (-1: does not occur) - 燃焼時の弾発生行動パラメータ：2(-1:発生しない)
	int32_t burnBulletBehaviorId_2;

	// NAME: Combustion bullet generation Behavior parameters: 3 - 燃焼 弾発生 行動パラメータ：3
	// DESC: Bullet generation behavior parameter at the time of burning: 3 (-1: does not occur) - 燃焼時の弾発生行動パラメータ：3(-1:発生しない)
	int32_t burnBulletBehaviorId_3;

	// NAME: Combustion bullet generation interval (frame) - 燃焼 弾発生間隔(フレーム)
	// DESC: Interval (frame) to generate bullets for spreading fire - 延焼用の弾を発生する間隔(フレーム)
	uint16_t burnBulletInterval;

	// NAME: Navi mesh flag - ナビメッシュフラグ
	// DESC: Navigation mesh flag set from the object - オブジェから設定されるナビメッシュフラグ
	uint8_t navimeshFlag;

	// NAME: Collision detection type - 衝突判定タイプ
	// DESC: Collision detection type - 衝突判定タイプ
	uint8_t collisionType;

	// NAME: Combustion bullet generation delay time (seconds) - 燃焼 弾発生遅延時間(秒)
	// DESC: Time to delay the generation of bullets for fire spread (seconds) - 延焼用の弾発生を遅らせる時間(秒)
	float burnBulletDelayTime;

	// NAME: Combustion SFX generation delay Start time (seconds): 0 - 燃焼 SFX発生遅延 開始時間(秒)：0
	// DESC: SFX generation delay time during combustion Randomly determined between start and end times - 燃焼時のSFX発生遅延時間 開始～終了時間の間でランダムに決まる
	float burnSfxDelayTimeMin;

	// NAME: Combustion SFX generation delay Start time (seconds): 1 - 燃焼 SFX発生遅延 開始時間(秒)：1
	// DESC: SFX generation delay time during combustion Randomly determined between start and end times - 燃焼時のSFX発生遅延時間 開始～終了時間の間でランダムに決まる
	float burnSfxDelayTimeMin_1;

	// NAME: Combustion SFX generation delay Start time (seconds): 2 - 燃焼 SFX発生遅延 開始時間(秒)：2
	// DESC: SFX generation delay time during combustion Randomly determined between start and end times - 燃焼時のSFX発生遅延時間 開始～終了時間の間でランダムに決まる
	float burnSfxDelayTimeMin_2;

	// NAME: Combustion SFX generation delay Start time (seconds): 3 - 燃焼 SFX発生遅延 開始時間(秒)：3
	// DESC: SFX generation delay time during combustion Randomly determined between start and end times - 燃焼時のSFX発生遅延時間 開始～終了時間の間でランダムに決まる
	float burnSfxDelayTimeMin_3;

	// NAME: Combustion SFX generation delay End time (seconds): 0 - 燃焼 SFX発生遅延 終了時間(秒)：0
	// DESC: SFX generation delay time during combustion Randomly determined between start and end times - 燃焼時のSFX発生遅延時間 開始～終了時間の間でランダムに決まる
	float burnSfxDelayTimeMax;

	// NAME: Combustion SFX generation delay End time (seconds): 1 - 燃焼 SFX発生遅延 終了時間(秒)：1
	// DESC: SFX generation delay time during combustion Randomly determined between start and end times - 燃焼時のSFX発生遅延時間 開始～終了時間の間でランダムに決まる
	float burnSfxDelayTimeMax_1;

	// NAME: Combustion SFX generation delay End time (seconds): 2 - 燃焼 SFX発生遅延 終了時間(秒)：2
	// DESC: SFX generation delay time during combustion Randomly determined between start and end times - 燃焼時のSFX発生遅延時間 開始～終了時間の間でランダムに決まる
	float burnSfxDelayTimeMax_2;

	// NAME: Combustion SFX generation delay End time (seconds): 3 - 燃焼 SFX発生遅延 終了時間(秒)：3
	// DESC: SFX generation delay time during combustion Randomly determined between start and end times - 燃焼時のSFX発生遅延時間 開始～終了時間の間でランダムに決まる
	float burnSfxDelayTimeMax_3;

	// NAME: AI sound ID generated at the time of destruction - 破壊時発生AI音ID
	// DESC: AI sound ID generated at the time of destruction - 破壊時に発生させるAI音ID
	int32_t BreakAiSoundID;

	// NAME: Hidden debris Wait time (seconds) - 破片非表示 待機時間(秒)
	// DESC: Material ID of debris (-1: Do not hide) - 破片のマテリアルID(-1：非表示処理を行なわない)
	float FragmentInvisibleWaitTime;

	// NAME: Debris non-display time (seconds) - 破片非表示 時間(秒)
	// DESC: Time to hide debris (seconds) - 破片を非表示にさせる時間(秒)
	float FragmentInvisibleTime;

	// NAME: Padding - パディング
	// DESC: Material ID of debris (-1: Do not hide) - 破片のマテリアルID(-1：非表示処理を行なわない)
	uint8_t pad_3[16];

	// NAME: Rigid body collision point distance coefficient [soft] - 剛体 衝突点距離係数 [柔らかい]
	// DESC: Rigid body soft contact setting Collision point distance coefficient [soft] - 剛体ソフトコンタクト設定 衝突点距離係数 [柔らかい]
	float RigidPenetrationScale_Soft;

	// NAME: Rigid body collision point distance coefficient [normal] - 剛体 衝突点距離係数 [通常]
	// DESC: Rigid soft contact setting Collision point distance coefficient [Normal] - 剛体ソフトコンタクト設定 衝突点距離係数 [通常]
	float RigidPenetrationScale_Normal;

	// NAME: Rigid body collision point distance coefficient [hard] - 剛体 衝突点距離係数 [固い]
	// DESC: Rigid soft contact setting Collision point distance coefficient [hard] - 剛体ソフトコンタクト設定 衝突点距離係数 [固い]
	float RigidPenetrationScale_Hard;

	// NAME: SFX ID at the time of terrain contact - 地形接触時のSFXID
	// DESC: SFX ID at terrain contact (-1: offset by terrain material) - 地形接触時のSFXID(-1:地形のマテリアルによりオフセット)
	int32_t LandTouchSfxId;

	// NAME: Do you want to shield the damage? - ダメージを遮蔽するか
	// DESC: Whether to pass the damage to the other side when receiving damage (0: pass, 1: do not pass) - ダメージを受けたときに、そのダメージを反対側に通さないかどうか　(0:通す, 1:通さない)
	uint8_t isDamageCover: 1;

	// NAME: Padding - パディング
	uint8_t pad_4[1];

	// NAME: Paint decal target size - ペイントデカールターゲットサイズ
	// DESC: Paint decal target size (only powers of 0 to 4096 2 allowed) - ペイントデカールターゲットサイズ(0～4096 ２のべき乗のみ許可)
	uint16_t paintDecalTargetTextureSize;

	// NAME: Life of dynamically generated Obj (seconds) - 動的生成Objの寿命(秒)
	// DESC: Time until dynamically generated Obj disappears after generation (0: does not disappear) - 動的生成Objが生成後に消滅するまでの時間 (0:消滅しない)
	float lifeTime_forDC;

	// NAME: Cross update distance (m) - クロス更新距離(m)
	// DESC: Distance from the camera to update havokCloth (0: always update) - havokClothの更新を行なうカメラからの距離(0:必ず更新する)
	float clothUpdateDist;

	// NAME: SE ID when contacting a player - プレイヤー接触時SE ID
	// DESC: SE ID to play when touched by a local player operated by you (-1: Do not play) - 自分が操作するローカルプレイヤーが触れた際に再生するSEのID(-1:再生しない)
	int32_t contactSeId;

	// NAME: SFX identifier when landing after destruction - 破壊後着地時SFX識別子
	// DESC: Object material-dependent SFX identifier that regenerates when first landing after being destroyed (-1: does not occur) - 破壊された後、最初に着地した際に再生するオブジェ材質依存SFXの識別子(-1:発生しない)
	int32_t breakLandingSfxId;

	// NAME: Waypoint Damipoli ID_0 - ウェイポイントダミポリID_0
	// DESC: Waypoint Damipoli ID_0 (-1: None) - ウェイポイントダミポリID_0(-1:なし)
	int32_t waypointDummyPolyId_0;

	// NAME: Waypoint parameter ID_0 - ウェイポイントパラメータID_0
	// DESC: Waypoint parameter ID_0 (-1: none) - ウェイポイントパラメータID_0(-1:なし)
	int32_t waypointParamId_0;

	// NAME: Sound bank ID - サウンドのバンクID
	// DESC: Sound bank ID (-1: no bank, other: bank with specified ID) - サウンドのバンクID(-1:バンクなし, それ以外:指定したIDのバンク)
	int32_t soundBankId;

	// NAME: Drawing parameter reference ID - 描画パラメータ参照ID
	// DESC: Reference ID of drawing parameter - 描画パラメータの参照ID
	int32_t refDrawParamId;

	// NAME: Automatically generated appearance height offset [m] - 自動生成出現高さオフセット[m]
	// DESC: Map automatic generation OBJ appearance height offset [m], does it float from where the ray cast hits? - マップ自動生成OBJの出現高さオフセット[m]、レイキャストが当たったところから度ぐらい浮かすか
	float autoCreateDynamicOffsetHeight;

	// NAME: Reserve - リザーブ
	// DESC: Reserve - リザーブ
	int32_t reserved0;

	// NAME: Destruction sound SEID - 破壊音SEID
	// DESC: Destruction sound SEID (9 digits) -1: Generated from objId - 破壊音SEID(9桁) -1：objIdから生成
	int32_t soundBreakSEId;

	// NAME: Padding - パディング
	uint8_t pad_5[40];
};

#endif
