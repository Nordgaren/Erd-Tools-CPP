#pragma once
#include <cstdint>
#include <string.h>

class DebugHook
{
public:
	void EnableMapInCombat();
	void DisableMapInCombat();
	void EnableCraftingInCombat();
	void DisableCraftingInCombat();
	bool combat_map_patched;
	bool combat_crafting_patched;
	uint64_t DisableOpenMapInCombatLocation;
	uint64_t DisableCrafingInCombatLocation;
	uint64_t CloseMapInCombatLocation;

private:
	const unsigned char close_map_patch_bytes[5] = { 0x48, 0x31, 0xC0, 0x90, 0x90 };
	unsigned char close_map_original_bytes[5];
	const unsigned char disable_crafting_patch_bytes[5] = { 0xB8, 0x00, 0x00, 0x00, 0x00 };
	unsigned char disable_crafting_original_bytes[5];
};

