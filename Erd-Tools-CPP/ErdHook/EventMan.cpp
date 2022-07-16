#include "../Include/EventMan.h"

void EventMan::set_event_flag_hook(uint64_t event_flag_man, uint32_t* event_id, int32_t event_value) {
	printf("Event Flag Set: %u %d\n", *event_id, event_value);
	set_event_flag_original(event_flag_man, event_id, event_value);
}
