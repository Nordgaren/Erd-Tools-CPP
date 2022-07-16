#pragma once
#include <Windows.h>
#include <stdexcept>
#include "../minhook/include/MinHook.h"
#include "../Include/ErdTools_globals.h"

struct Signature {
	const char* signature;
	const char* mask;
	size_t length;
	DWORD ret;
};

class SigScan {
public:
	bool get_image_info();
	void* find_signature(Signature& fnSig);

private:
	HMODULE module_handle;
	void* base_address = nullptr;
	size_t image_size = 0;
};


class ErdHook {
public:
	bool create_memory_edits();
	bool find_needed_signatures();
	void set_event_flag_hook(uint64_t event_flag_man, uint32_t* event_id, int32_t event_value);
	set_event_flag* set_event_flag_original;
private:
	MH_STATUS minhook_active;
	SigScan signature_class;
	uint64_t set_event_flag_address;
};

