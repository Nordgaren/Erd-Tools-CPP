#pragma once
#include "Common.h"

//Signature class that takes a CE style string and scans only the text section
//Thank you to tremwil for the suggestion and walkthrough on how to scan the code with XOR + AND
struct ExecutableSection {
    ExecutableSection(void* ptr, DWORD size) {
        SectionPtr = ptr;
        SectionSize = size;
    };
    void* SectionPtr = nullptr;
    DWORD SectionSize = 0;
};

struct ModuleData {
    ModuleData(const char *module);
    HMODULE ModuleHandle = nullptr;
    void* BaseAddress = nullptr;
    size_t ImageSize = 0;
    std::vector<ExecutableSection> ExecutableSections;
};

struct Signature {
    explicit Signature(const char* sig, int offset = 0);
    void* Scan(ModuleData *moduleData);
    uint64_t GetRelativeOffset(int address_offset, int instruction_size);
    void* ScanResult = nullptr;
private:
    std::vector<uint8_t> _bytes = {};
    std::vector<uint8_t> _mask = {};
    const int _offset;
    static int hex2num(char h);
};

