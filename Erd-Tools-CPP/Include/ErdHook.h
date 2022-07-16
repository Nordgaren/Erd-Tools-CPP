#ifndef ERDHOOK_H
#define ERDHOOK_H
#include <stdexcept>
#include "ErdTools_globals.h"
#include "EventMan.h"D
#include "../minhook/include/MinHook.h"

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


private:
	MH_STATUS minhook_active;
	SigScan signature_class;
};
#endif

