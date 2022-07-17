#include "../Include/EventMan.h"
#include "../minhook/include/MinHook.h"

set_event_flag set_event_flag_original = nullptr;
uint64_t set_event_flag_address = 0;

void EventMan::set_event_flag_hook(uint64_t event_flag_man, uint32_t* event_id, int32_t event_value) {
	printf("Event Flag Set: %u %d\n", *event_id, event_value);
	set_event_flag_original(event_flag_man, event_id, event_value);
}

bool EventMan::enable_flag_listener() {
	if (MH_CreateHook((void*)set_event_flag_address, &EventMan::set_event_flag_hook, (void**)&set_event_flag_original) == MH_OK) {
		MH_EnableHook((void*)set_event_flag_address);
		return true;
	}

	return false;
}

bool EventMan::disable_flag_listener() {
	if (MH_DisableHook((void*)set_event_flag_address) != MH_OK) {
		return true;
	}

	return false;
}
