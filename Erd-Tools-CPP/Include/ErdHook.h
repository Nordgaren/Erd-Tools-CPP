#pragma once

#include "Common.h"
#include "ErdTools_globals.h"
#include "EventHook.h"
#include "DebugHook.h"
#include "FeHook.h"
#include "ParamHook.h"

class ErdHook {
public:
	bool CreateMemoryEdits();
	bool FindNeededSignatures();
	void ChangeExtension();
	EventHook* EventMan;
	DebugHook* DebugMan;
	ParamHook* ParamMan;
	FeHook* FeMan;
	WorldChrMan** WorldChrManIns = nullptr;
	CSSound** SoundIns = nullptr;
	GetChrInsFromHandle GetChrInsFromHandleFunc;
	wchar_t* _saveExtension = nullptr;
	std::wstring _extension = std::wstring(L".sl2");

	ErdHook() {
		EventMan = new EventHook();
		DebugMan = new DebugHook();
		ParamMan = new ParamHook();
		FeMan = new FeHook();
	}
	~ErdHook() {
		delete EventMan;
		delete DebugMan;
		delete ParamMan;
		delete FeMan;
	}

private:
	static uint64_t GetRelativeOffset(void* pointer, int address_offset, int instruction_size);
	void debugPrint();
	MH_STATUS _minhookActive = MH_UNKNOWN;
};

