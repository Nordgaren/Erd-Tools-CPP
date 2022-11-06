/* This file was automatically generated from XML paramdefs. */
#ifndef _PARAMDEF_ASSET_GEOMETORY_PARAM_ST_H
#define _PARAMDEF_ASSET_GEOMETORY_PARAM_ST_H
#pragma once
#include <inttypes.h>

// Data Version: 4
// Is Big Endian: False
// Is Unicode: True
// Format Version: 203
struct ASSET_GEOMETORY_PARAM_ST {

	// NAME: Sound bank ID - サウンドのバンクID
	// DESC: Sound bank ID (-1: no bank, other: bank with specified ID) - サウンドのバンクID(-1:バンクなし, それ以外:指定したIDのバンク)
	int32_t soundBankId;

	// NAME: Destruction sound SEID - 破壊音SEID
	// DESC: Destruction sound SEID (9 digits) -1: Generated from assetId - 破壊音SEID(9桁) -1：assetIdから生成
	int32_t soundBreakSEId;

	// NAME: Drawing parameter reference ID - 描画パラメータ参照ID
	// DESC: Drawing parameter reference ID. The reference ID for the part drawing parameter .xlsm. - 描画パラメータ参照ID。パーツ描画パラメータ.xlsmの参照IDです。
	int32_t refDrawParamId;

	// NAME: Static asset hit build settings - 静的アセットヒット構築設定
	// DESC: Sets the hit build type for static assets. Ignored for dynamic assets. - 静的アセットのヒット構築タイプを設定します。動的アセットでは無視されます。
	int8_t hitCreateType;

	// NAME: Asset behavior type - アセット挙動タイプ
	// DESC: Dynamic (all asset features available), static (light assets with limited functionality treated as old maps), partially static (partially destroyed assets) - 動的(すべてのアセット機能が使用可能)、静的(旧マップ扱いの機能制限された軽いアセット)、部分静的(部分破壊アセット)
	uint8_t behaviorType;

	// NAME: Collision detection type - 衝突判定タイプ
	// DESC: Collision detection type. You can set what the asset will hit. - 衝突判定タイプ。アセットが何と当たるかが設定できます。
	uint8_t collisionType;

	// NAME: Rain cutoff setting - 雨遮断設定
	// DESC: It is a type of rain blocking. You can set the blocking of SFX and wet expression. - 雨遮断のタイプです。SFXと濡れ表現の遮断設定が行えます
	uint8_t rainBlockingType;

	// NAME: HP - HP
	// DESC: Durability until destruction (-1: Indestructible) - 破壊までの耐久力(-1:破壊不可)
	int16_t hp;

	// NAME: Defense power - 防御力
	// DESC: Attack power below this value is no damage - この値以下の攻撃力はダメージなし
	uint16_t defense;

	// NAME: Forced stop time after destruction - 破壊後強制停止時間
	// DESC: Time from destruction to forced stop of rigid body (do not force stop at 0) - 破壊されてから剛体を強制的に停止するまでの時間（0で強制停止しない）
	float breakStopTime;

	// NAME: SFX ID at the time of destruction - 破壊時SFXID
	// DESC: SFX ID on destruction (-1: default (810030)) - 破壊時のSFXID(-1:デフォルト(810030))
	int32_t breakSfxId;

	// NAME: SFX Damipoli ID at the time of destruction - 破壊時SFXダミポリID
	// DESC: SFX generation position at the time of destruction Damipoly ID (-1: placement position) - 破壊時SFXの発生位置ダミポリID(-1：配置位置）
	int32_t breakSfxCpId;

	// NAME: SFX identifier when landing after destruction - 破壊後着地時SFX識別子
	// DESC: Object material-dependent SFX identifier that regenerates when first landing after being destroyed (-1: does not occur) - 破壊された後、最初に着地した際に再生するオブジェ材質依存SFXの識別子(-1:発生しない)
	int32_t breakLandingSfxId;

	// NAME: Bomb generation at the time of destruction Action parameter ID - 破壊時 弾発生 行動パラメータID
	// DESC: Action parameter of [bullet] at the time of destruction (-1: does not occur). Please note that there is an offset specification due to laps. ([GR] SEQ35556) - 破壊時[弾]の行動パラメータ(-1:発生しない)。周回によるオフセットの仕様があるので注意。(【GR】SEQ35556 )
	int32_t breakBulletBehaviorId;

	// NAME: Damipoli ID - 破壊時 弾発生 ダミポリID
	// DESC: Location of [bullet] at the time of destruction Damipoli ID (-1: placement position) - 破壊時[弾]の発生位置ダミポリID(-1:配置位置)
	int32_t breakBulletCpId;

	// NAME: Hidden debris Wait time (seconds) - 破片非表示 待機時間(秒)
	// DESC: Hidden debris Waiting time (seconds) - 破片非表示 待機時間(秒)
	float FragmentInvisibleWaitTime;

	// NAME: Debris non-display time (seconds) - 破片非表示 時間(秒)
	// DESC: Time to hide debris (seconds) - 破片を非表示にさせる時間(秒)
	float FragmentInvisibleTime;

	// NAME: AI sound ID generated at the time of destruction - 破壊時発生AI音ID
	// DESC: AI sound ID generated at the time of destruction - 破壊時に発生させるAI音ID
	int32_t BreakAiSoundID;

	// NAME: At the time of destruction_Item lottery type - 破壊時_アイテム抽選種別
	// DESC: A type that decides how to obtain items drawn at the time of destruction - 破壊時に抽選したアイテムの入手方法を決めるタイプ
	int8_t breakItemLotType;

	// NAME: Anime destruction ID maximum value - アニメ破壊ID最大値
	// DESC: What is the animation destruction ID from 0 to what? - アニメ破壊IDが0番から何番までか
	uint8_t animBreakIdMax;

	// NAME: Bomb generation attribute damage condition at the time of destruction - 破壊時 弾発生 属性ダメージ条件
	// DESC: Generates a bullet if the last damage received when destroying an asset meets the conditions of this setting. - アセット破壊時に最後に受けたダメージがこの設定の条件を満たしていれば弾丸を生成する
	int8_t breakBulletAttributeDamageType;

	// NAME: Will it break in a player collision? - プレイヤ衝突で壊れるか
	// DESC: Broken when the player touches (0: no, 1:) - プレイヤが接触したときに壊れ(0:ない, 1:る)
	uint8_t isBreakByPlayerCollide: 1;

	// NAME: Will it be destroyed by an enemy character collision? - 敵キャラ衝突で壊れるか
	// DESC: Broken when an enemy character touches (0: No, 1: Ru) - 敵キャラが接触したときに壊れ(0:ない, 1:る)
	uint8_t isBreakByEnemyCollide: 1;

	// NAME: Will it break if the character gets on it? - キャラが乗ったら壊れるか
	// DESC: Will it break if the character gets on (0: it won't break 1: it will break) - キャラが乗ったら壊れるか(0:壊れるない 1:壊れる)
	uint8_t isBreak_ByChrRide: 1;

	// NAME: No destruction for initial appearance - 初期出現用破壊禁止
	// DESC: Broken at the initial appearance of the player (0: ru, 1: no) - プレイヤの初期出現で壊れ(0:る, 1:ない)
	uint8_t isDisableBreakForFirstAppear: 1;

	// NAME: Is it anime destruction? - アニメ破壊か
	// DESC: Is it animation destruction (0: physical destruction, 1: animation destruction) - アニメ破壊か(0:物理破壊, 1:アニメ破壊)
	uint8_t isAnimBreak: 1;

	// NAME: Do you want to shield the damage? - ダメージを遮蔽するか
	// DESC: Whether to pass the damage to the other side when receiving damage (0: pass, 1: do not pass) - ダメージを受けたときに、そのダメージを反対側に通さないかどうか　(0:通す, 1:通さない)
	uint8_t isDamageCover: 1;

	// NAME: Do you play the attack - 攻撃を弾くか
	// DESC: Do you play the attack (0: do not play, 1: play) - 攻撃を弾くか(0:弾かない, 1:弾く)
	uint8_t isAttackBacklash: 1;

	// NAME: Reserve 2 - リザーブ2
	uint8_t Reserve_2: 1;

	// NAME: Is it a ladder? - ハシゴか
	// DESC: Is it a ladder (0: different, 1: yes) - ハシゴか(0:ちがう, 1:そう)
	uint8_t isLadder: 1;

	// NAME: Is it a moving object? - 移動オブジェか
	// DESC: Is it a moving object? It is a flag used for branching of movement processing at the time of multi (0: different, 1: yes) - 移動オブジェか。マルチ時の移動処理の分岐に使われるフラグです(0:ちがう, 1:そう)
	uint8_t isMoveObj: 1;

	// NAME: Is it treated as a celestial sphere? - 天球扱いか
	// DESC: Processing that treats the celestial sphere (player tracking, etc.) is performed (0: different, 1: yes) - 天球扱いの処理(プレイヤー追従など)が行われます(0:ちがう, 1:そう)
	uint8_t isSkydomeFlag: 1;

	// NAME: Do you want to stop the animation during the poly play? - ポリ劇中アニメを停止するか
	// DESC: Do you want to stop the animation during the poly play (0: not, 1: do) - ポリ劇中アニメを停止するか(0:しない, 1:する)
	uint8_t isAnimPauseOnRemoPlay: 1;

	// NAME: Will it burn - 燃焼するか
	// DESC: Will it burn (0: not, 1:) - 燃焼するか(0:しない, 1:する)
	uint8_t isBurn: 1;

	// NAME: Is there a change during recollection? - 再収集時変化があるか
	// DESC: If this flag is ○, the parameter "At the time of recollection _ ***" will be used for the assets to be collected again in units of placement. - このフラグが○なら、配置単位で再度収集するアセットでは「再収集時_***」のパラメータが使われます
	uint8_t isEnableRepick: 1;

	// NAME: Is it destroyed at the time of collection? - 収集時破壊か
	// DESC: If ×, play the animation at the time of collection, if ○, destroy at the time of collection (destroy in all cases including replacement) - ×なら収集時にアニメ再生、○なら収集時に破壊（差し替えなど含めた全ての場合において破壊）
	uint8_t isBreakOnPickUp: 1;

	// NAME: Will it be destroyed by a huge enemy collision? - 巨大敵衝突で壊れるか
	// DESC: Broken when a giant enemy touches (0: No, 1:) - 巨大敵が接触したときに壊れ(0:ない, 1:る)
	uint8_t isBreakByHugeenemyCollide: 1;

	// NAME: Pre-destruction navigation mesh flag - 破壊前ナビメッシュフラグ
	// DESC: Navigation mesh flag set from assets before destruction - 破壊前のアセットから設定されるナビメッシュフラグ
	uint8_t navimeshFlag;

	// NAME: Combustion bullet generation interval (frame) - 燃焼 弾発生間隔(フレーム)
	// DESC: Interval (frame) to generate bullets for spreading fire - 延焼用の弾を発生する間隔(フレーム)
	uint16_t burnBulletInterval;

	// NAME: Cross update distance (m) - クロス更新距離(m)
	// DESC: Distance from the camera to update havokCloth (0: always update) - havokClothの更新を行なうカメラからの距離(0:必ず更新する)
	float clothUpdateDist;

	// NAME: Lifetime of runtime generated assets (seconds) - ランタイム生成アセットの寿命(秒)
	// DESC: Runtime-generated time after creation until disappearance (0: does not disappear) - ランタイム生成アセットが生成後に消滅するまでの時間 (0:消滅しない)
	float lifeTime_forRuntimeCreate;

	// NAME: SE ID when contacting a player - プレイヤー接触時SE ID
	// DESC: SE ID to play when touched by a local player operated by you (-1: Do not play) - 自分が操作するローカルプレイヤーが触れた際に再生するSEのID(-1:再生しない)
	int32_t contactSeId;

	// NAME: At the time of recollection_animation offset - 再収集時_アニメオフセット
	// DESC: When recollecting assets with "Is there a change at the time of recollection?" In units of placement, play the uncollected / collected animation with the anime ID offset by this value. - 「再収集時変化があるか」が○のアセットは配置単位で再収集時、この値でオフセットしたアニメIDで未収集/収集済のアニメを再生
	int32_t repickAnimIdOffset;

	// NAME: Wind coefficient (before destruction) - 風係数(破壊前)
	// DESC: Wind coefficient (before destruction) - 風係数(破壊前)
	float windEffectRate_0;

	// NAME: Wind coefficient (after destruction) - 風係数(破壊後)
	// DESC: Wind coefficient (after destruction) - 風係数(破壊後)
	float windEffectRate_1;

	// NAME: Wind effect type (before destruction) - 風影響タイプ(破壊前)
	// DESC: Wind effect type (before destruction) - 風影響タイプ(破壊前)
	uint8_t windEffectType_0;

	// NAME: Wind effect type (after destruction) - 風影響タイプ(破壊後)
	// DESC: Wind effect type (after destruction) - 風影響タイプ(破壊後)
	uint8_t windEffectType_1;

	// NAME: Overwrite material ID - 上書き材質ID
	// DESC: Asset material ID overwrite setting (-1: Do not overwrite model material ID 0 or more: Material ID overwrite) On the ladder, the material ID is reflected only with this setting - アセットの材質ID上書き設定(-1：モデルの材質IDを上書きしない 0以上：材質ID上書き)　はしご上ではこの設定でのみ材質IDが反映されます
	int16_t overrideMaterialId;

	// NAME: Height offset during automatic generation (m) - 自動生成時の高さオフセット(m)
	// DESC: Height offset of how much it floats from where the raycast hits the map when it is automatically generated [m] - マップに自動生成時にレイキャストが当たったところからどれぐらい浮かせるかの高さオフセット[m]
	float autoCreateOffsetHeight;

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

	// NAME: Combustion bullet generation delay time (seconds) - 燃焼 弾発生遅延時間(秒)
	// DESC: Time to delay the generation of bullets for fire spread (seconds) - 延焼用の弾発生を遅らせる時間(秒)
	float burnBulletDelayTime;

	// NAME: Paint decal target size - ペイントデカールターゲットサイズ
	// DESC: Paint decal target size 0: Decal disabled (0 to 4096 power of 2 0, 2, 4, 8,… 2048 only valid) - ペイントデカールターゲットサイズ 0：デカール無効 (0～4096 ２のべき乗 0, 2, 4, 8, … 2048 のみ有効)
	uint16_t paintDecalTargetTextureSize;

	// NAME: Post-destruction navigation mesh flag - 破壊後ナビメッシュフラグ
	// DESC: Navimesh flag set from the destroyed asset - 破壊後のアセットから設定されるナビメッシュフラグ
	uint8_t navimeshFlag_after;

	// NAME: Drawing when approaching the camera - カメラ接近時描画
	// DESC: Drawing settings when approaching the camera. [GR] SEQ07529 - カメラ接近時の描画設定。【GR】SEQ07529
	int8_t camNearBehaviorType;

	// NAME: At the time of destruction_item lottery ID_for map - 破壊時_アイテム抽選ID_マップ用
	// DESC: Item to be drawn at the time of destruction Lottery ID_for map-1: No lottery - 破壊時に抽選させるアイテム抽選ID_マップ用　-1：抽選しない
	int32_t breakItemLotParamId;

	// NAME: At the time of collection_action button ID - 収集時_アクションボタンID
	// DESC: Action button ID issued for collection-1: Collection function is disabled - 収集で出すアクションボタンID　-1：収集機能は無効
	int32_t pickUpActionButtonParamId;

	// NAME: At the time of collection_item lottery ID_for map - 収集時_アイテム抽選ID_マップ用
	// DESC: Item to be drawn at the time of collection For lottery ID_map-1: Collection function is invalid - 収集時に抽選させるアイテム抽選ID_マップ用　-1：収集機能は無効
	int32_t pickUpItemLotParamId;

	// NAME: Automatic drawing group_Back side check - 自動描画グループ_裏面チェック
	// DESC: Automatic drawing group_Back side check - 自動描画グループ_裏面チェック
	uint8_t autoDrawGroupBackFaceCheck;

	// NAME: Auto drawing group_shield - 自動描画グループ_遮蔽
	// DESC: Auto drawing group_shield - 自動描画グループ_遮蔽
	uint8_t autoDrawGroupDepthWrite;

	// NAME: Automatic drawing group_shadow test - 自動描画グループ_影テスト
	// DESC: Automatic drawing group_shadow test - 自動描画グループ_影テスト
	uint8_t autoDrawGroupShadowTest;

	// NAME: Debug_allowable ground height check - デバッグ_許容地面高さチェック
	// DESC: Debug_Allow Ground Height Check See SEQ07876 for details - デバッグ_許容地面高さチェック 詳細はSEQ07876参照
	uint8_t debug_isHeightCheckEnable;

	// NAME: Underfloor navigation mesh not subject to clipping - 床下ナビメッシュ切り抜き対象外
	// DESC: If it is placed lower than the hit on the floor (ground), set whether to exclude it from the underfloor navigation mesh deletion target Refer to from the tool - 床（地面）のヒットより低い位置に配置された場合、床下ナビメッシュ削除対象から外すかを設定すること ツールから参照
	uint8_t hitCarverCancelAreaFlag;

	// NAME: Navigation mesh join control - ナビメッシュ結合制御
	// DESC: The set assets are excluded from the target of joining hit parts when building the Nav Mesh. - 設定されたアセットが、ナビメッシュビルド時に、ヒットパーツの結合対象から除外される
	uint8_t assetNavimeshNoCombine;

	// NAME: Navimesh flag application destination - ナビメッシュフラグ適用先
	// DESC: Where to apply the navigation mesh flag set from the asset - アセットから設定されるナビメッシュフラグの適用先
	uint8_t navimeshFlagApply;

	// NAME: Post-destruction navigation mesh flag application destination - 破壊後ナビメッシュフラグ適用先
	// DESC: Where to apply the navigation mesh flag set from the destroyed asset - 破壊後のアセットから設定されるナビメッシュフラグの適用先
	uint8_t navimeshFlagApply_after;

	// NAME: Auto-draw group_passing pixels - 自動描画グループ_合格ピクセル
	// DESC: Automatic drawing group_Pass pixel (set to 0.0-1.0 to enlarge at the time of shooting) - 自動描画グループ_合格ピクセル（0.0～1.0に設定することで撮影時に拡大される）
	float autoDrawGroupPassPixelNum;

	// NAME: At the time of collection_replacement flag condition - 収集時_差し替えフラグ条件
	// DESC: When this event flag is ON, use the ID of the subsequent replacement 0: Do not always replace - このイベントフラグがONの時は後続の差し替えのIDを使う　0：常に差し替えない
	uint32_t pickUpReplacementEventFlag;

	// NAME: At the time of collection_replacement animation offset - 収集時_差し替えアニメオフセット
	// DESC: When "Collecting_replacement flag condition" is ON, play the uncollected / collected animation with the animation ID offset by this value. - 「収集時_差し替えフラグ条件」がONの時、この値でオフセットしたアニメIDで未収集/収集済のアニメを再生
	int32_t pickUpReplacementAnimIdOffset;

	// NAME: At the time of collection_replacement action button ID - 収集時_差し替えアクションボタンID
	// DESC: This action button ID is used when "Collecting_replacement flag condition" is ON. - 「収集時_差し替えフラグ条件」がONの時、このアクションボタンIDが使われる
	int32_t pickUpReplacementActionButtonParamId;

	// NAME: At the time of collection_replacement item lottery ID_for map - 収集時_差し替えアイテム抽選ID_マップ用
	// DESC: When "Collecting_replacement flag condition" is ON, this item lottery ID_map is used. - 「収集時_差し替えフラグ条件」がONの時、このアイテム抽選ID_マップ用が使われる
	int32_t pickUpReplacementItemLotParamId;

	// NAME: Behavior when a bullet crawling on the ground lands - 地面を這う弾丸の着弾時の挙動
	// DESC: When a bullet of the follow-up type "Crawling on the ground even if it collides" collides with an asset, does it bend in the direction along the landing point? Behavior - 追従タイプ「衝突しても地面を這う」の弾丸がアセットに衝突した際、着弾地点に沿う方向に曲げるか？の挙動
	uint8_t slidingBulletHitType;

	// NAME: Will it break due to bush damage? - 茂みダメージで壊れるか
	// DESC: ◯ Assets can only be damaged by "damage to bushes" ◯ and "object attack power> defense power" attacks [GR] SEQ20617 - ◯のアセットは、 「茂みにダメージ可」◯  かつ 「オブジェ攻撃力 ＞ 防御力」の攻撃のみ、ダメージが通るようになります【GR】SEQ20617
	uint8_t isBushesForDamage;

	// NAME: Bullet penetration type - 弾丸貫通タイプ
	// DESC: Will the bullet hit and land? Which bullet para to refer to when deciding? The value that determines. - 弾丸がヒットして着弾するか？を決める時に、どの弾丸パラを参照するか？を決める値。
	uint8_t penetrationBulletType;

	// NAME: Reserve 3 - リザーブ3
	uint8_t Reserve_3[1];

	// NAME: Reserve 4 - リザーブ4
	uint8_t Reserve_4[4];

	// NAME: Destruction sound Damipoli ID - 破壊音ダミポリID
	// DESC: Damipoli ID of the place where the destruction sound is played (-1: Placement position) - 破壊音を再生する場所のダミポリID (-1:配置位置)
	int32_t soundBreakSECpId;

	// NAME: Debug_Allowable ground height_Minimum [m] - デバッグ_許容地面高さ_最小[m]
	// DESC: Debug_Allowable ground height_Minimum [m] See SEQ07876 for details. Must be smaller than maximum - デバッグ_許容地面高さ_最小[m] 詳細はSEQ07876参照　最大より小さい必要あり
	float debug_HeightCheckCapacityMin;

	// NAME: Debug_Allowable ground height_Max [m] - デバッグ_許容地面高さ_最大[m]
	// DESC: Debug_Allowable ground height_Max [m] See SEQ07876 for details. Must be larger than minimum - デバッグ_許容地面高さ_最大[m] 詳細はSEQ07876参照　最小より大きい必要あり
	float debug_HeightCheckCapacityMax;

	// NAME: At the time of recollection_action button ID - 再収集時_アクションボタンID
	// DESC: This action button ID is used when recollecting assets whose "Is there a change at the time of recollection?" - 「再収集時変化があるか」が○のアセットは配置単位で再収集時、このアクションボタンIDが使われる
	int32_t repickActionButtonParamId;

	// NAME: At the time of recollection_item lottery ID_for map - 再収集時_アイテム抽選ID_マップ用
	// DESC: Assets with "Is there a change at the time of recollection?" Are used for this item lottery ID_map when recollecting in units of placement. - 「再収集時変化があるか」が○のアセットは配置単位で再収集時、このアイテム抽選ID_マップ用が使われる
	int32_t repickItemLotParamId;

	// NAME: At the time of recollection_replacement animation offset - 再収集時_差し替えアニメオフセット
	// DESC: Use this parameter instead of "At the time of collection_replacement animation offset" at the time of recollection for assets whose "Is there a change at the time of recollection?" - 「再収集時変化があるか」が○のアセットは配置単位で再収集時、「収集時_差し替えアニメオフセット」の代わりにこのパラメータを使う
	int32_t repickReplacementAnimIdOffset;

	// NAME: At the time of recollection_replacement action button ID - 再収集時_差し替えアクションボタンID
	// DESC: Use this parameter instead of "At the time of collection_replacement action button ID" when recollecting assets whose "Is there a change at the time of recollection?" - 「再収集時変化があるか」が○のアセットは配置単位で再収集時、「収集時_差し替えアクションボタンID」の代わりにこのパラメータを使う
	int32_t repickReplacementActionButtonParamId;

	// NAME: At the time of recollection_replacement item lottery ID_for map - 再収集時_差し替えアイテム抽選ID_マップ用
	// DESC: Use this parameter instead of "At the time of collection_Replacement item lottery ID_For map" when recollecting assets whose "Is there a change at the time of recollection?" - 「再収集時変化があるか」が○のアセットは配置単位で再収集時、「収集時_差し替えアイテム抽選ID_マップ用」の代わりにこのパラメータを使う
	int32_t repickReplacementItemLotParamId;

	// NAME: Navimesh terrain judgment invalidation - ナビメッシュ地形内判定無効化
	// DESC: Asset with this set does not create Carver - これが設定されたAssetはCarverを作らない
	uint8_t noGenerateCarver;

	// NAME: Do not hit huge enemies after destruction - 破壊後に巨大敵に当たらない
	// DESC: Overwrite the hit filter after destruction with a collision detection type that does not hit a huge enemy (static ○ dynamic ○) - 破壊後のヒットフィルタを衝突判定タイプ巨大敵に当たらない（静○動○）相当のもので上書きする
	uint8_t noHitHugeAfterBreak;

	// NAME: Do you want to synchronize the destruction - 破壊を同期するか
	// DESC: If this is x, do not perform initial synchronization, map activation synchronization, asset destruction synchronization during in-game, and the attack of the remote PC will not hit. - これが×の場合は初期同期,マップアクティベート同期,インゲーム中のアセット破壊同期を行わないようにし、リモートPCの攻撃が当たらなくなる
	uint8_t isEnabledBreakSync: 1;

	// NAME: When recollecting _ hidden - 再収集時_非表示
	// DESC: Hide assets if you can't get them by lottery when recollecting by placement unit - 配置単位で再収集時にアイテム抽選的に取れなければアセットを非表示にします
	uint8_t isHiddenOnRepick: 1;

	// NAME: Is it valid only during multi (dynamic only)? - マルチ中のみ有効か(動的のみ)
	// DESC: Is it valid only during multi? Only valid for dynamic assets. (Details: SEQ15087) - マルチ中のみ有効か。動的アセットのみ有効。(詳細：SEQ15087)
	uint8_t isCreateMultiPlayOnly: 1;

	// NAME: Does not generate bullet landing SFX - 弾丸の着弾SFXを発生しない
	// DESC: In the case of ○, the landing SFX does not occur regardless of whether the hit bullet penetrates or lands. - ○の場合、当たった弾丸が貫通しようと着弾しようと着弾SFXは発生しない
	uint8_t isDisableBulletHitSfx: 1;

	// NAME: Is it possible to create a sign / blood character (before destroying the asset)? - サイン／血文字作成可能か(アセット破壊前) 
	// DESC: Set whether sign / blood character can be created when on the asset (before destruction) 〇: Possible, ×: Impossible (Details: SEQ122568) - アセット上にいるときサイン/血文字の作成可能かを設定する(破壊前)〇：可能、×：不可能(詳細：SEQ122568)
	uint8_t isEnableSignPreBreak: 1;

	// NAME: Is it possible to create a sign / blood character (after destroying the asset)? - サイン／血文字作成可能か(アセット破壊後) 
	// DESC: Set whether sign / blood character can be created when on the asset (after destruction) 〇: Possible, ×: Impossible (Details: SEQ122568) - アセット上にいるときサイン/血文字の作成可能かを設定する(破壊後)〇：可能、×：不可能(詳細：SEQ122568)
	uint8_t isEnableSignPostBreak: 1;

	// NAME: Reserve 1 - リザーブ1
	uint8_t Reserve_1: 2;

	// NAME: Summoning prohibited / intrusion prohibited area generation (Damipoli) - 召喚禁止/侵入禁止領域生成（ダミポリ）
	// DESC: Summoning prohibited / intrusion prohibited area generation (Damipoli) - 召喚禁止/侵入禁止領域生成（ダミポリ）
	uint8_t generateMultiForbiddenRegion;

	// NAME: Resident SEID0 - 常駐SEID0
	// DESC: Sound ID 0 (9 digits) to be resident in the asset (-1: No resident) - アセットに常駐させるサウンドID0(9桁) (-1:常駐なし)
	int32_t residentSeId0;

	// NAME: Resident SEID1 - 常駐SEID1
	// DESC: Sound ID 1 (9 digits) to be resident in the asset (-1: No resident) - アセットに常駐させるサウンドID1(9桁) (-1:常駐なし)
	int32_t residentSeId1;

	// NAME: Resident SEID2 - 常駐SEID2
	// DESC: Sound ID 2 (9 digits) to be resident in the asset (-1: No resident) - アセットに常駐させるサウンドID2(9桁) (-1:常駐なし)
	int32_t residentSeId2;

	// NAME: Resident SEID3 - 常駐SEID3
	// DESC: Sound ID 3 (9 digits) to be resident in the asset (-1: not resident) - アセットに常駐させるサウンドID3(9桁) (-1:常駐なし)
	int32_t residentSeId3;

	// NAME: Resident SE Damipoli ID0 - 常駐SEダミポリID0
	// DESC: Damipoli ID0 to attach resident sound (-1: placement position) - 常駐サウンドをアタッチするダミポリID0 (-1:配置位置)
	int16_t residentSeDmypolyId0;

	// NAME: Resident SE Damipoli ID1 - 常駐SEダミポリID1
	// DESC: Damipoli ID1 to attach resident sound (-1: placement position) - 常駐サウンドをアタッチするダミポリID1 (-1:配置位置)
	int16_t residentSeDmypolyId1;

	// NAME: Resident SE Damipoli ID2 - 常駐SEダミポリID2
	// DESC: Damipoli ID2 to attach resident sound (-1: placement position) - 常駐サウンドをアタッチするダミポリID2 (-1:配置位置)
	int16_t residentSeDmypolyId2;

	// NAME: Resident SE Damipoli ID3 - 常駐SEダミポリID3
	// DESC: Damipoli ID3 to attach resident sound (-1: placement position) - 常駐サウンドをアタッチするダミポリID3 (-1:配置位置)
	int16_t residentSeDmypolyId3;

	// NAME: Open_XB1 exclusion rate - オープン_XB1除外割合
	// DESC: Open_XB1 exclusion rate [GR] SEQ25310 - オープン_XB1除外割合【GR】SEQ25310
	uint8_t excludeActivateRatio_Xboxone_Grid;

	// NAME: Legacy_XB1 exclusion rate - レガシー_XB1除外割合
	// DESC: Legacy_XB1 exclusion rate [GR] SEQ25310 - レガシー_XB1除外割合【GR】SEQ25310
	uint8_t excludeActivateRatio_Xboxone_Legacy;

	// NAME: Open_PS4 exclusion rate - オープン_PS4除外割合
	// DESC: Open_PS4 exclusion rate [GR] SEQ25310 - オープン_PS4除外割合【GR】SEQ25310
	uint8_t excludeActivateRatio_PS4_Grid;

	// NAME: Legacy_PS4 exclusion rate - レガシー_PS4除外割合
	// DESC: Legacy_PS4 exclusion rate [GR] SEQ25310 - レガシー_PS4除外割合【GR】SEQ25310
	uint8_t excludeActivateRatio_PS4_Legacy;

	// NAME: Reserve 0 - リザーブ0
	// DESC: Reserve 0 - リザーブ0
	uint8_t Reserve_0[32];
};

#endif
