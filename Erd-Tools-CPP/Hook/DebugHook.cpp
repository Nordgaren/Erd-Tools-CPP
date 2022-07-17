#include "../Include/DebugHook.h"

#include <cstdio>

uint64_t DisableOpenMap = 0;
uint64_t CombatCloseMap = 0;

void DebugHook::EnableMapInCombat() {
	/* backup original bytes */
	memcpy(close_map_original_bytes, (void*)CombatCloseMap, sizeof(close_map_original_bytes));

	/* patch map functions */
	*(unsigned char*)DisableOpenMap = 0xEB;
	memcpy((void*)CombatCloseMap, close_map_patch_bytes, sizeof(close_map_patch_bytes));
	combat_map_patched = true;
}

void DebugHook::DisableMapInCombat() {
	if (!combat_map_patched)
		return;

	*(unsigned char*)DisableOpenMap = 0x74;
	memcpy((void*)CombatCloseMap, close_map_original_bytes, sizeof(close_map_patch_bytes));
	combat_map_patched = false;
}
