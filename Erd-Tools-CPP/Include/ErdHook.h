#pragma once
#include <stdexcept>
#include "ErdTools_globals.h"
#include "EventHook.h"
#include "DebugHook.h"
#include "../minhook/include/MinHook.h"

struct Signature {
	const char* signature;
	const char* mask;
	size_t length;
	DWORD ret;
};

class SigScan {
public:
	bool GetImageInfo();
	void* FindSignature(Signature& fnSig);

private:
	HMODULE module_handle;
	void* base_address = nullptr;
	size_t image_size = 0;
};


class ErdHook {
public:
	bool CreateMemoryEdits();
	bool FindNeededSignatures();
	EventHook* event_hook;
	DebugHook* debug_hook;
	ErdHook() {
		event_hook = new EventHook();
		debug_hook = new DebugHook();
	}
private:
	MH_STATUS minhook_active = MH_UNKNOWN;
	SigScan signature_class;
};

