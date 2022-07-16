#pragma once
#include "ErdToolsMain.h"

typedef void (*set_event_flag)(uint64_t event_flag_man, uint32_t* event_id, int32_t event_value);
class EventMan
{
public:
	EventMan() {  }
	void set_event_flag_hook(uint64_t event_flag_man, uint32_t* event_id, int32_t event_value);
	set_event_flag set_event_flag_original;
	uint64_t set_event_flag_address;
};

