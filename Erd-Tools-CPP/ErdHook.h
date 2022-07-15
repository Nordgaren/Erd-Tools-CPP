#pragma once
#include <Windows.h>
#include <stdexcept>
#include "../../MinHook/include/MinHook.h"

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
private:
	MH_STATUS minhook_active;
	SigScan signature_class;

};

