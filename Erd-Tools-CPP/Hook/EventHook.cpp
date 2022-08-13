#include "../Include/EventHook.h"
#include "../minhook/include/MinHook.h"
#define MAX_TIME 100

void EventHook::SetEventFlagHook(const uint64_t event_man, uint32_t* event_id, bool state) {
	bool current_state = IsEventFlag(event_man, event_id);
	SetEventFlagOriginal(event_man, event_id, state);
	bool new_state = IsEventFlag(event_man, event_id);

	if (current_state == new_state)
		return;

	const time_t current_time = time(NULL);
	tm t = tm();
	localtime_s(&t, &current_time);
	char time[MAX_TIME];
	strftime(time, MAX_TIME, "%a, %d %b %Y %r", &t);
	printf("%s - Event Flag Set: %u %d and the address of event man is %llu\n", time, *event_id, state, *EventMan);
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
