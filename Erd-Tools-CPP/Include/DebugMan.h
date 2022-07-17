#pragma once
#include <cstdint>
#include <string.h>

class DebugMan
{
public:
	void enable_map_in_combat();
	void disable_map_in_combat();

private:
	const unsigned char close_map_patch_bytes[5] = { 0x48, 0x31, 0xC0, 0x90, 0x90 };
	unsigned char close_map_original_bytes[5];
};

