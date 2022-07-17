#include "../Include/EventHook.h"
#include "../minhook/include/MinHook.h"
#include <string>
#include <time.h>


uint32_t _last_event_id = 0;
bool _last_event_state = false;

void EventHook::SetEventFlagHook(uint64_t event_man, uint32_t* event_id, bool event_state) {
	bool current_state = IsEventFlag(event_man, event_id);
	SetEventFlagOriginal(event_man, event_id, event_state);
	bool new_state = IsEventFlag(event_man, event_id);

	if (current_state == new_state)
		return;

	_last_event_id = *event_id;
	_last_event_state = event_state;
	time_t current_time = time(NULL);
	std::string date = ctime(&current_time);
	printf("%s - Event Flag Set: %u %d\n", date.substr(0, date.size() - 1).c_str(),*event_id, event_state);
}

bool EventHook::EnableFlagListener() {
	if (MH_CreateHook((void*)SetEventFlagAddress, &EventHook::SetEventFlagHook, (void**)&EventHook::SetEventFlagOriginal) == MH_OK) {
		MH_EnableHook((void*)SetEventFlagAddress);
		return true;
	}

	return false;
}

bool EventHook::DisableFlagListener() {
	if (MH_DisableHook((void*)SetEventFlagAddress) != MH_OK) {
		return true;
	}

	return false;
}
