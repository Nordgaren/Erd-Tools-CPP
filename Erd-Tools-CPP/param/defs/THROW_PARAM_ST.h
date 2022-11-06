/* This file was automatically generated from XML paramdefs. */
#ifndef _PARAMDEF_THROW_PARAM_ST_H
#define _PARAMDEF_THROW_PARAM_ST_H
#pragma once
#include <inttypes.h>

// Data Version: 2
// Is Big Endian: False
// Is Unicode: True
// Format Version: 203
struct THROW_PARAM_ST {

	// NAME: Throwing side character ID - 投げ側キャラID
	// DESC: Throwing side character ID - 投げ側キャラID
	int32_t AtkChrId;

	// NAME: Recipient character ID - 受け側キャラID
	// DESC: Recipient character ID - 受け側キャラID
	int32_t DefChrId;

	// NAME: Effective distance [m] - 有効距離[m]
	// DESC: Do not throw unless the distance is closer than this value [m] - この値より近い距離じゃないと投げない[m]
	float Dist;

	// NAME: Angle difference range between your own direction and the direction of the other party min - 自分の向きと相手の向きの角度差範囲min
	// DESC: If the angle difference (Y-axis) between the throwing side and the receiving side is not larger than this angle, it will not be thrown. - 投げ側と受け側の角度差(Y軸)がこの角度より大きくないと投げない
	float DiffAngMin;

	// NAME: Angle difference range between your own direction and the direction of the other party max - 自分の向きと相手の向きの角度差範囲max
	// DESC: If the angle difference (Y-axis) between the throwing side and the receiving side is smaller than this angle, it will not be thrown. - 投げ側と受け側の角度差(Y軸)がこの角度より小さくないと投げない
	float DiffAngMax;

	// NAME: On the height range [m] - 高さ範囲上[m]
	// DESC: Do not throw unless the relative distance of the Y axis from the throwing side to the receiving side is smaller than this value - 投げ側から受け側のY軸の相対距離がこの値より小さくないと投げない
	float upperYRange;

	// NAME: Below the height range [m] - 高さ範囲下[m]
	// DESC: Do not throw unless the relative distance of the Y axis from the throwing side to the receiving side is smaller than this value - 投げ側から受け側のY軸の相対距離がこの値より小さくないと投げない
	float lowerYRange;

	// NAME: Angle difference between your own direction and the direction from yourself to the other party - 自分の向きと自分から相手への方向の角度差
	// DESC: The angle difference between the vector in front of you and the vector in the direction from you to the other party. If it is larger than this value, it will not be thrown - 自分の正面のベクトルと、自分から相手への方向のベクトルの角度差。この値より大きいと投げない
	float diffAngMyToDef;

	// NAME: Throw type ID - 投げタイプID
	// DESC: ID that identifies the type of throw (association with attack parameter) - 投げの種類を特定するID(攻撃パラメタと紐付け)
	int32_t throwTypeId;

	// NAME: Throwing side anime ID - 投げ側アニメID
	// DESC: Set attack animation ID (linked to EzState) - 攻撃アニメIDを設定(EzStateと紐付け)
	int32_t atkAnimId;

	// NAME: Recipient anime ID - 受け側アニメID
	// DESC: Set damage animation ID (linked to EzState) - ダメージアニメIDを設定(EzStateと紐付け)
	int32_t defAnimId;

	// NAME: Throw through HP - 投げ抜けHP
	// DESC: Value that can withstand throwing through - 投げ抜けに耐えられる値
	uint16_t escHp;

	// NAME: Self-throwing cycle time [ms] - 自力投げ抜けサイクル時間[ms]
	// DESC: Cycle time for self-throwing [ms] - 自力投げ抜けのサイクル時間[ms]
	uint16_t selfEscCycleTime;

	// NAME: Sphere Cast Radius Ratio_Top [1/100 Rate] - スフィアキャスト半径比率_上[1/100Rate]
	// DESC: Ratio of upper radius of sphere cast [80-> 0.8] - スフィアキャストの上側半径の比率[80->0.8]
	uint16_t sphereCastRadiusRateTop;

	// NAME: Sphere Cast Radius Ratio_Bottom [1/100 Rate] - スフィアキャスト半径比率_下[1/100Rate]
	// DESC: Spherecast lower radius ratio [80-> 0.8] - スフィアキャストの下側半径の比率[80->0.8]
	uint16_t sphereCastRadiusRateLow;

	// NAME: Operation type - 操作タイプ
	// DESC: Operation type - 操作タイプ
	uint8_t PadType;

	// NAME: Throwable state type on the throwing side - 投げ側の投げ可能状態タイプ
	// DESC: Please set the state type that can be thrown on the throwing side - 投げ側の投げが可能な状態タイプを設定してください
	uint8_t AtkEnableState;

	// NAME: Throw-following method - 投げ追従方式
	// DESC: How to follow the character possessed by Adsorbed Damipoli while throwing. * Follow-up period is controlled by TAE action - 投げ実行中、吸着ダミポリ所持キャラにどのように追従するか。※追従期間はTAEアクションでコントロール
	uint8_t throwFollowingType;

	// NAME: pad - pad
	// DESC: pad - pad
	uint8_t pad2[1];

	// NAME: Throw type - 投げ種別
	// DESC: Type of throw - 投げの種別
	uint8_t throwType;

	// NAME: Number of self-throwing cycles - 自力投げ抜けサイクル回数
	// DESC: Number of self-throwing cycles - 自力投げ抜けのサイクル回数
	uint8_t selfEscCycleCnt;

	// NAME: Direction of Damipoli possession character when throwing occurs - 投げ発生時のダミポリ所持キャラの向き
	// DESC: Direction of Damipoli possession character when throwing occurs - 投げ発生時のダミポリ所持キャラの向き
	uint8_t dmyHasChrDirType;

	// NAME: Does the throwing side turn? - 投げ側が旋回するか？
	// DESC: Does the throwing side turn? - 投げ側が旋回するか？
	uint8_t isTurnAtker: 1;

	// NAME: Do you want to skip the weapon category check? - 武器カテゴリチェックをスキップするか？
	// DESC: Do you want to skip the attacker's weapon category check? - 攻撃側の武器カテゴリチェックをスキップするか？
	uint8_t isSkipWepCate: 1;

	// NAME: Do you want to skip the sphere cast? - スフィアキャストをスキップするか？
	// DESC: Do you want to skip the sphere cast? - スフィアキャストをスキップするか？
	uint8_t isSkipSphereCast: 1;

	// NAME: Whether to return to the positional relationship equivalent to flat ground at the time of throwing adsorption - 投げ吸着時、平地相当の位置関係に戻すか
	// DESC: If it is set to ◯, the location of the throwing position will be the "position of the adsorption Damipoli that has returned to the positional relationship equivalent to the flat ground". - ◯にすると投げ位置合わせの場所が「平地相当の位置関係に戻した吸着ダミポリの位置」になる
	uint8_t isEnableCorrectPos_forThrowAdjust: 1;

	// NAME: Do you prevent the fall when the throwing follow is released? - 投げ追従解除時の落下を防止するか？
	// DESC: Is the same treatment as the wall removal prevention applied to the fall prevention wall so that it does not fall from the step when the follow-up is released? - 追従解除時に段差から落下しないよう、壁抜け防止と同じ処理を落下防止壁に対しても行うか？
	uint8_t isEnableThrowFollowingFallAssist: 1;

	// NAME: Do you want to prevent the wall from digging in while following the throw? - 投げ追従中の壁めり込みを抑制するか？
	// DESC: Do you want to return the character with the Adsorbed Damipoli when it comes in contact with a hit or fall prevention wall so that it does not look like it will get stuck in the middle wall or fall from a step? - 追従中壁にめり込んだり段差から落下しそうな見た目にならないよう、ヒットや落下防止壁に接触したときに吸着ダミポリ所持キャラごと戻す処理を行うか？
	uint8_t isEnableThrowFollowingFeedback: 1;

	// NAME: pad - pad
	// DESC: pad - pad
	uint8_t pad0: 2;

	// NAME: Throw side adsorption Damipoly ID - 投げ側 吸着ダミポリID
	// DESC: Where on the throwing side should the receiving side be attracted? - 投げ側のどこに受け側を吸着させるか？
	int16_t atkSorbDmyId;

	// NAME: Recipient side adsorption Damipoly ID - 受け側 吸着ダミポリID
	// DESC: Where on the receiving side should the throwing side be adsorbed? - 受け側のどこに投げ側を吸着させるか？
	int16_t defSorbDmyId;

	// NAME: Effective distance (start throwing) [m] - 有効距離(投げ開始)[m]
	// DESC: Only throw at a distance closer than this value [m] Used for throwing at the start of the back stub - この値より近い距離じゃないと投げない[m]　バックスタブ開始時の投げに使われる
	float Dist_start;

	// NAME: Angle difference range between your own direction and the other's direction min (start throwing) - 自分の向きと相手の向きの角度差範囲min(投げ開始)
	// DESC: If the angle difference (Y-axis) between the throwing side and the receiving side is not larger than this angle, it will not be thrown. It is used for throwing at the start of the back stub. - 投げ側と受け側の角度差(Y軸)がこの角度より大きくないと投げない　バックスタブ開始時の投げに使われる
	float DiffAngMin_start;

	// NAME: Angle difference range between your own direction and the opponent's direction max (start throwing) - 自分の向きと相手の向きの角度差範囲max(投げ開始)
	// DESC: The angle difference (Y-axis) between the throwing side and the receiving side must be smaller than this angle to throw. Used for throwing at the start of the back stub. - 投げ側と受け側の角度差(Y軸)がこの角度より小さくないと投げない　バックスタブ開始時の投げに使われる
	float DiffAngMax_start;

	// NAME: On the height range (start throwing) [m] - 高さ範囲上(投げ開始)[m]
	// DESC: It will not be thrown unless the relative distance of the Y axis from the throwing side to the receiving side is smaller than this value. It is used for throwing at the start of the back stub. - 投げ側から受け側のY軸の相対距離がこの値より小さくないと投げない　バックスタブ開始時の投げに使われる
	float upperYRange_start;

	// NAME: Below the height range (start throwing) [m] - 高さ範囲下(投げ開始)[m]
	// DESC: It will not be thrown unless the relative distance of the Y axis from the throwing side to the receiving side is smaller than this value. It is used for throwing at the start of the back stub. - 投げ側から受け側のY軸の相対距離がこの値より小さくないと投げない　バックスタブ開始時の投げに使われる
	float lowerYRange_start;

	// NAME: Angle difference between your own direction and the direction from yourself to the opponent (start throwing) - 自分の向きと自分から相手への方向の角度差(投げ開始)
	// DESC: The angle difference between the vector in front of you and the vector in the direction from you to the other party. If it is larger than this value, it will not be thrown. It will be used for throwing at the start of the back stub. - 自分の正面のベクトルと、自分から相手への方向のベクトルの角度差。この値より大きいと投げない　バックスタブ開始時の投げに使われる
	float diffAngMyToDef_start;

	// NAME: Throwing range judgment criteria on the throwing side Damipoli Id - 投げ側の投げ範囲判定基準ダミポリId
	// DESC: Damipoli that the thrower considers to be his position when calculating the throw range. If -1, the capsule origin - 投げ側が、投げ範囲を計算するときに自分の位置と見なすダミポリ。-1ならカプセル原点
	int32_t judgeRangeBasePosDmyId1;

	// NAME: Criteria for throwing range on the thrown side Damipoli Id - 投られ側の投げ範囲判定基準ダミポリId
	// DESC: Damipoli that the thrower considers to be his position when calculating the throw range. If -1, the capsule origin - 投げられ側が、投げ範囲を計算するときに自分の位置と見なすダミポリ。-1ならカプセル原点
	int32_t judgeRangeBasePosDmyId2;

	// NAME: Model position interpolation time during adsorption [s] - 吸着時モデル位置補間時間[s]
	// DESC: After the capsule is adsorbed on Damipoli, the time it takes for the character model to interpolate and move to the position according to the throwing animation data (when 0 is set, the model position is not interpolated and playback starts immediately after adsorption with the positional relationship according to the animation data. Will be) - カプセルが吸着ダミポリに吸着したあと、キャラモデルが投げアニメデータ通りの位置に補間移動する時間（0を設定した場合はモデル位置の補間が行われず、吸着直後からアニメデータ通りの位置関係で再生開始される）
	float adsrobModelPosInterpolationTime;

	// NAME: Model position interpolation time at the end of tracking [s] - 追従終了時モデル位置補間時間[s]
	// DESC: Model position interpolation time at the end of tracking - 追従終了時モデル位置補間時間
	float throwFollowingEndEasingTime;

	// NAME: pad - pad
	// DESC: pad - pad
	uint8_t pad1[24];
};

#endif
