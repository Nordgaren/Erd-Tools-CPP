#pragma once
#include "Common.h"

struct ModuleData {
    ModuleData(std::string module);
    HMODULE ModuleHandle = nullptr;
    void* BaseAddress = nullptr;
    size_t ImageSize = 0;
};

struct Signature {
    explicit Signature(char* sig, int offset = 0);
    void* ScanResult = nullptr;
    void* Scan();
private:
    std::vector<uint8_t> _bytes = {};
    std::vector<uint8_t> _mask = {};
    const int _offset = 0;
    static int hex2num(char h);
};

