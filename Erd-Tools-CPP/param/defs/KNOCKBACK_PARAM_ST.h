/* This file was automatically generated from XML paramdefs. */
#ifndef _PARAMDEF_KNOCKBACK_PARAM_ST_H
#define _PARAMDEF_KNOCKBACK_PARAM_ST_H
#pragma once
#include <inttypes.h>

// Data Version: 1
// Is Big Endian: False
// Is Unicode: True
// Format Version: 203
struct KNOCKBACK_PARAM_ST {

	// NAME: Minimal damage_speed maintenance time [s] - 極小ダメージ_速度維持時間[s]
	// DESC: Set the maintenance time used for tiny damage animation - 極小ダメージアニメの時に使用される維持時間を設定
	float damage_Min_ContTime;

	// NAME: Small damage_speed maintenance time [s] - 小ダメージ_速度維持時間[s]
	// DESC: Set the maintenance time used for small damage animation - 小ダメージアニメの時に使用される維持時間を設定
	float damage_S_ContTime;

	// NAME: Medium damage_speed maintenance time [s] - 中ダメージ_速度維持時間[s]
	// DESC: Set the maintenance time used for medium damage animation - 中ダメージアニメの時に使用される維持時間を設定
	float damage_M_ContTime;

	// NAME: Large damage_speed maintenance time [s] - 大ダメージ_速度維持時間[s]
	// DESC: Set the maintenance time used for heavy damage animation - 大ダメージアニメの時に使用される維持時間を設定
	float damage_L_ContTime;

	// NAME: Small blow-off_speed maintenance time [s] - 小吹っ飛び_速度維持時間[s]
	// DESC: Set the maintenance time used for small blow-off damage animation - 小吹っ飛びダメージアニメの時に使用される維持時間を設定
	float damage_BlowS_ContTime;

	// NAME: Large blow-off_speed maintenance time [s] - 大吹っ飛び_速度維持時間[s]
	// DESC: Set the maintenance time used during the big blow damage animation - 大吹っ飛びダメージアニメの時に使用される維持時間を設定
	float damage_BlowM_ContTime;

	// NAME: Slamming_speed maintenance time [s] - 叩きつけ_速度維持時間[s]
	// DESC: Set the maintenance time used for slamming damage animation - 叩きつけダメージアニメの時に使用される維持時間を設定
	float damage_Strike_ContTime;

	// NAME: Launch_speed maintenance time [s] - 打ち上げ_速度維持時間[s]
	// DESC: Set the maintenance time used for launch damage animation - 打ち上げダメージアニメの時に使用される維持時間を設定
	float damage_Uppercut_ContTime;

	// NAME: Push_speed maintenance time [s] - プッシュ_速度維持時間[s]
	// DESC: Set the maintenance time used for push damage animation - プッシュダメージアニメの時に使用される維持時間を設定
	float damage_Push_ContTime;

	// NAME: Breath_speed maintenance time [s] - ブレス_速度維持時間[s]
	// DESC: Set the maintenance time used for breath damage animation - ブレスダメージアニメの時に使用される維持時間を設定
	float damage_Breath_ContTime;

	// NAME: Headshot_speed maintenance time [s] - ヘッドショット_速度維持時間[s]
	// DESC: Headshot damage Set the maintenance time used during animation - ヘッドショットダメージアニメの時に使用される維持時間を設定
	float damage_HeadShot_ContTime;

	// NAME: Guard reception small_speed maintenance time [s] - ガード受け小_速度維持時間[s]
	// DESC: Set the maintenance time used for guard receiving small animation - ガード受け小アニメの時に使用される維持時間を設定
	float guard_S_ContTime;

	// NAME: Large guard reception_speed maintenance time [s] - ガード受け大_速度維持時間[s]
	// DESC: Set the maintenance time used at the time of guard receiving large animation - ガード受け大アニメの時に使用される維持時間を設定
	float guard_L_ContTime;

	// NAME: Guard reception oversized_speed maintenance time [s] - ガード受け特大_速度維持時間[s]
	// DESC: Set the maintenance time used for guard receiving oversized animation - ガード受け特大アニメの時に使用される維持時間を設定
	float guard_LL_ContTime;

	// NAME: Guard smashed_speed maintenance time [s] - ガードくずされ_速度維持時間[s]
	// DESC: Set the maintenance time specified at the time of guard scraping animation - ガードくずされアニメの時に仕様される維持時間を設定
	float guardBrake_ContTime;

	// NAME: Minimal damage_Deceleration time [s] - 極小ダメージ_減速時間[s]
	// DESC: Set the deceleration time used for minimal damage animation - 極小ダメージアニメの時に使用される減速時間を設定
	float damage_Min_DecTime;

	// NAME: Small damage_deceleration time [s] - 小ダメージ_減速時間[s]
	// DESC: Set the deceleration time used for small damage animation - 小ダメージアニメの時に使用される減速時間を設定
	float damage_S_DecTime;

	// NAME: Medium damage_deceleration time [s] - 中ダメージ_減速時間[s]
	// DESC: Set the deceleration time used for medium damage animation - 中ダメージアニメの時に使用される減速時間を設定
	float damage_M_DecTime;

	// NAME: Large damage_deceleration time [s] - 大ダメージ_減速時間[s]
	// DESC: Set the deceleration time used for heavy damage animation - 大ダメージアニメの時に使用される減速時間を設定
	float damage_L_DecTime;

	// NAME: Small blow-off_deceleration time [s] - 小吹っ飛び_減速時間[s]
	// DESC: Set the deceleration time used for small blow-off damage animation - 小吹っ飛びダメージアニメの時に使用される減速時間を設定
	float damage_BlowS_DecTime;

	// NAME: Large blow-off_deceleration time [s] - 大吹っ飛び_減速時間[s]
	// DESC: Large blow-off damage Set the deceleration time used during animation - 大吹っ飛びダメージアニメの時に使用される減速時間を設定
	float damage_BlowM_DecTime;

	// NAME: Slamming_deceleration time [s] - 叩きつけ_減速時間[s]
	// DESC: Set the deceleration time used during slamming damage animation - 叩きつけダメージアニメの時に使用される減速時間を設定
	float damage_Strike_DecTime;

	// NAME: Launch_Deceleration time [s] - 打ち上げ_減速時間[s]
	// DESC: Set the deceleration time used during launch damage animation - 打ち上げダメージアニメの時に使用される減速時間を設定
	float damage_Uppercut_DecTime;

	// NAME: Push_deceleration time [s] - プッシュ_減速時間[s]
	// DESC: Set the deceleration time used during push damage animation - プッシュダメージアニメの時に使用される減速時間を設定
	float damage_Push_DecTime;

	// NAME: Breath_deceleration time [s] - ブレス_減速時間[s]
	// DESC: Set the deceleration time used during breath damage animation - ブレスダメージアニメの時に使用される減速時間を設定
	float damage_Breath_DecTime;

	// NAME: Headshot_Deceleration time [s] - ヘッドショット_減速時間[s]
	// DESC: Headshot damage Set the deceleration time used during animation - ヘッドショットダメージアニメの時に使用される減速時間を設定
	float damage_HeadShot_DecTime;

	// NAME: Guard reception small_Deceleration time [s] - ガード受け小_減速時間[s]
	// DESC: Set the deceleration time used for guard receiving small animation - ガード受け小アニメの時に使用される減速時間を設定
	float guard_S_DecTime;

	// NAME: Large guard reception_Deceleration time [s] - ガード受け大_減速時間[s]
	// DESC: Set the deceleration time used for guard receiving large animation - ガード受け大アニメの時に使用される減速時間を設定
	float guard_L_DecTime;

	// NAME: Oversized guard reception_Deceleration time [s] - ガード受け特大_減速時間[s]
	// DESC: Set the deceleration time used for guard receiving oversized animation - ガード受け特大アニメの時に使用される減速時間を設定
	float guard_LL_DecTime;

	// NAME: Guard smashed_Deceleration time [s] - ガードくずされ_減速時間[s]
	// DESC: Set the deceleration time specified at the time of guard breaking animation - ガードくずされアニメの時に仕様される減速時間を設定
	float guardBrake_DecTime;

	// NAME: pading - pading
	uint8_t pad[8];
};

#endif
