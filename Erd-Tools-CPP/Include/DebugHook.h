#pragma once

#include "Common.h"

class DebugHook
{
public:
	void EnableMapInCombat();
	void DisableMapInCombat();
	void EnableCraftingInCombat();
	void DisableCraftingInCombat();
	void EnableAutoHarvest();
	void DisableAutoHarvest();
	bool combat_map_patched;
	bool combat_crafting_patched;
	bool auto_harvest_patched;
	uint64_t DisableOpenMapInCombatLocation;
	uint64_t DisableCrafingInCombatLocation;
	uint64_t CloseMapInCombatLocation;
	uint64_t AutoHarvestLocation = 0;


private:
	const unsigned char CLOSE_MAP_PATCH_BYTES[5] = { 0x48, 0x31, 0xC0, 0x90, 0x90 };
	unsigned char close_map_original_bytes[5];
	const unsigned char DISABLE_CRAFTING_PATCH_BYTES[5] = { 0xB8, 0x00, 0x00, 0x00, 0x00 };
	unsigned char disable_crafting_original_bytes[5];
	const unsigned char AUTO_HARVEST_PATCH_BYTES[5] = { 0xB8, 0x01, 0x00, 0x00, 0x00 };
	unsigned char auto_harvest_original_bytes[5];
};

