#include "../Include/DebugHook.h"

#include <cstdio>

uint64_t DisableOpenMap = 0;
uint64_t CombatCloseMap = 0;

void DebugHook::EnableMapInCombat() {
	/* backup original bytes */
	memcpy(close_map_original_bytes, (void*)CloseMapInCombatLocation, sizeof(close_map_original_bytes));

	/* patch map functions */
	*(unsigned char*)DisableOpenMapInCombatLocation = 0xEB;
	memcpy((void*)CloseMapInCombatLocation, close_map_patch_bytes, sizeof(close_map_patch_bytes));
	combat_map_patched = true;
}

void DebugHook::DisableMapInCombat() {
	if (!combat_map_patched)
		return;

	*(unsigned char*)DisableOpenMapInCombatLocation = 0x74;
	memcpy((void*)CloseMapInCombatLocation, close_map_original_bytes, sizeof(close_map_patch_bytes));
	combat_map_patched = false;
}

void DebugHook::EnableCraftingInCombat() {
	/* backup original bytes */
	memcpy(disable_crafting_original_bytes, (void*)DisableCrafingInCombatLocation, sizeof(disable_crafting_original_bytes));

	/* patch map functions */
	memcpy((void*)DisableCrafingInCombatLocation, disable_crafting_patch_bytes, sizeof(disable_crafting_patch_bytes));
	combat_crafting_patched = true;
}

void DebugHook::DisableCraftingInCombat() {
	if (!combat_crafting_patched)
		return;

	memcpy((void*)DisableCrafingInCombatLocation, disable_crafting_original_bytes, sizeof(disable_crafting_original_bytes));
	combat_map_patched = false;
}
