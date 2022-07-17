#include "../Include/DebugMan.h"

#include <cstdio>


uint64_t disable_open_map = 0;
uint64_t combat_close_map = 0;

void DebugMan::enable_map_in_combat() {
	/* backup original bytes */
	memcpy(close_map_original_bytes, (void*)combat_close_map, sizeof(close_map_original_bytes));

	/* patch map functions */
	*(unsigned char*)disable_open_map = 0xEB;
	memcpy((void*)combat_close_map, close_map_patch_bytes, sizeof(close_map_patch_bytes));
	map_enabled_in_combat = true;
}

void DebugMan::disable_map_in_combat() {
	*(unsigned char*)disable_open_map = 0x74;
	memcpy((void*)combat_close_map, close_map_original_bytes, sizeof(close_map_patch_bytes));
	map_enabled_in_combat = false;
}
