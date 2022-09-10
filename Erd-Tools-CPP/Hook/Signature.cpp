#include "..\Include\Signature.h"

ModuleData::ModuleData(std::string module) {

    ModuleHandle = GetModuleHandleA(module.c_str());

    if (ModuleHandle) {
        MEMORY_BASIC_INFORMATION memInfo;
        if (VirtualQuery((void*)ModuleHandle, &memInfo, sizeof(memInfo)) != 0) {
            IMAGE_DOS_HEADER* hDos = (IMAGE_DOS_HEADER*)ModuleHandle;
            IMAGE_NT_HEADERS* hPe = (IMAGE_NT_HEADERS*)((ULONG64)memInfo.AllocationBase + (ULONG64)hDos->e_lfanew);

            if ((hDos->e_magic == IMAGE_DOS_SIGNATURE) && (hPe->Signature == IMAGE_NT_SIGNATURE)) {
                BaseAddress = memInfo.AllocationBase;
                ImageSize = (SIZE_T)hPe->OptionalHeader.SizeOfImage;
                IMAGE_SECTION_HEADER* sections = IMAGE_FIRST_SECTION(hPe);
                for (int i = 0; i < hPe->FileHeader.NumberOfSections; ++i) {
                    if (sections[i].Characteristics & IMAGE_SCN_MEM_EXECUTE) {
                        ExecutableSections.emplace_back((char*)BaseAddress + sections[i].VirtualAddress, sections[i].Misc.VirtualSize);
                    }
                }
            }
        }
    }

};

Signature::Signature(char* sig, int offset) : _offset(offset) {

    for (char* c = sig; *c; c++) {
        if (c[0] == ' ') continue;

        if (c[0] == '?') {
            _bytes.push_back(0);
            _mask.push_back(0);
            if (c[1] == '?')
                c++;
        } else {
            _bytes.push_back(hex2num(c[0]) << 4 | hex2num(c[1]));
            _mask.push_back(-1);
            c++;
        }
    }

    while (_bytes.size() % 8) {
        _bytes.push_back(0);
        _mask.push_back(0);
    }

}

void* Signature::Scan(ModuleData *moduleData) {

    if (ScanResult)
        return ScanResult;
    size_t len = _bytes.size();
    unsigned char* aob = _bytes.data();
    unsigned char* m = _mask.data();

    for (int i = 0; i < moduleData->ExecutableSections.size(); ++i) {
        char* pScan = (char*)moduleData->ExecutableSections[i].SectionPtr;
        char* max_address = pScan + moduleData->ExecutableSections[i].SectionSize;

        while (pScan < max_address) {
            size_t szLength = 0;
            for (size_t i = 0; i <= len; i += 8) {
                szLength = i;
                if ((*(uint64_t*)(pScan + i) ^ *(uint64_t*)(aob + i)) & *(uint64_t*)(m + i)) break;
            }

            if (szLength == len) {
                ScanResult = pScan + _offset;
                return ScanResult;
            }

            pScan++;
        }
    }

    return nullptr;

};

int Signature::hex2num(char h) {
    if (h >= '0' && h <= '9') return h - '0';
    else if (h >= 'a' && h <= 'f') return 10 + h - 'a';
    else if (h >= 'A' && h <= 'F') return 10 + h - 'A';
    else return 0;
}
