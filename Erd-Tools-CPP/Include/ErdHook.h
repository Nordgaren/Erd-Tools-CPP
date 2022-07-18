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
	HMODULE _moduleHandle;
	void* _baseAddress = nullptr;
	size_t _imageSize = 0;
};


class ErdHook {
public:
	bool CreateMemoryEdits();
	bool FindNeededSignatures();
	EventHook* EventMan;
	DebugHook* DebugMan;
	ErdHook() {
		EventMan = new EventHook();
		DebugMan = new DebugHook();
	}

	~ErdHook() {
		delete  EventMan;
		delete  DebugMan;
	}
private:
	MH_STATUS _minhookActive = MH_UNKNOWN;
	SigScan _signatureClass;
};

