#pragma once

#include "Common.h"
#include "ErdTools_globals.h"
#include "EventHook.h"
#include "DebugHook.h"
#include "ParamHook.h"

struct Signature {
	const char* signature;
	const char* mask;
	const int offset = 0;
};

class SigScan {
public:
	bool GetImageInfo();
	uint64_t PtrFromOffset(uint64_t offset);
	void* FindSignature(Signature& fnSig);

private:
	HMODULE _moduleHandle = nullptr;
	void* _baseAddress = nullptr;
	size_t _imageSize = 0;
};


class ErdHook {
public:
	bool CreateMemoryEdits();
	bool FindNeededSignatures();
	EventHook* EventMan;
	DebugHook* DebugMan;
	ParamHook* ParamMan;
	ErdHook() {
		EventMan = new EventHook();
		DebugMan = new DebugHook();
		ParamMan = new ParamHook();
	}

	~ErdHook() {
		delete  EventMan;
		delete  DebugMan;
		delete  ParamMan;
	}
private:
	static uint64_t GetRelativeOffset(void* pointer, int address_offset, int instruction_size);
	void debugPrint();
	MH_STATUS _minhookActive = MH_UNKNOWN;
	SigScan _signatureClass;
};

