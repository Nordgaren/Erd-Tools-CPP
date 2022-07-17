#pragma once
#include <cstdint>
#include <windows.h>
#include <cstdio>

typedef void (*set_event_flag)(uint64_t event_flag_man, uint32_t* event_id, int32_t event_value);
class EventMan {
public:
	bool enable_flag_listener();
	bool disable_flag_listener();
	static void set_event_flag_hook(uint64_t event_flag_man, uint32_t* event_id, int32_t event_value);
};
