#pragma once
#include <cstdint>
#include <string.h>

class DebugHook
{
public:
	void EnableMapInCombat();
	void DisableMapInCombat();
	bool combat_map_patched;
	uint64_t DisableOpenMap;
	uint64_t CombatCloseMap;

private:
	const unsigned char close_map_patch_bytes[5] = { 0x48, 0x31, 0xC0, 0x90, 0x90 };
	unsigned char close_map_original_bytes[5];
};

