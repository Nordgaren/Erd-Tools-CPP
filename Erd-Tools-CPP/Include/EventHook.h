#pragma once
#include <cstdint>
#include <windows.h>
#include <cstdio>

typedef void (*SetEventFlag)(uint64_t event_man, uint32_t* event_id, bool state);
typedef bool (*IsEventFlag)(uint64_t event_man, uint32_t* event_id);
class EventHook {
public:
	bool EnableFlagListener();
	bool DisableFlagListener();
	static void SetEventFlagHook(uint64_t event_man, uint32_t* event_id, bool state);
	static inline SetEventFlag SetEventFlagOriginal = nullptr;
	static inline IsEventFlag IsEventFlag = nullptr;
	uint64_t SetEventFlagAddress = 0;
	uint64_t IsEventFlagAddress = 0;
	uint64_t EventMan;
};
