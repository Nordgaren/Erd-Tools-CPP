#pragma once

#include "Common.h"
#include "ErdTools_globals.h"

class EventHook {
public:
	bool EnableFlagListener();
	bool DisableFlagListener();
	static void SetEventFlagHook(uint64_t event_man, uint32_t* event_id, bool state);
	static inline SetEventFlag SetEventFlagOriginal = nullptr;
	static inline IsEventFlag IsEventFlag = nullptr;
	uint64_t SetEventFlagAddress = 0;
	static uint64_t* EventMan;
	EventHook() {

	}
	~EventHook() {
	}
};
