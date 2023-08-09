#pragma once
#include <stdexcept>
#include <string>
#include <wchar.h>

#ifndef PARAM_STRUCTS
#define PARAM_STRUCTS
struct ParamTable {
    uint32_t ParamID;
    uint32_t Pad0x4;
    uint32_t ParamOffset;
    uint32_t Pad0xC;
    uint32_t StringOffset;
    uint32_t Pad0x14;
};
static_assert(sizeof(ParamTable) == 0x18);

struct ParamHeader {
    uint32_t StringOffset;
    uint8_t undefined0x4[0x6];
    uint16_t RowCount;
    uint8_t undefined0xC[0x4];
    uint64_t ParamTypeOffset;
    uint8_t undefined0x18[0x18];
    uint32_t DataOffset;
    uint8_t undefined0x34[0xC];
    ParamTable Table;
};
static_assert(sizeof(ParamHeader) == 0x58);

struct ParamInfo {
    uint8_t undefined0x0[0x18];
    wchar_t* ParamName;
    uint8_t undefined0x20[0x60];
    ParamHeader* Param;
};
static_assert(sizeof(ParamInfo) == 0x88);

struct ParamResCap {
    uint8_t undefined0x0[0x18];
    wchar_t* ParamName;
    uint8_t undefined0x20[0x8];
    uint32_t ParamNameLength;
    uint8_t undefined0x2C[0x54];
    ParamInfo* ParamInfo;
};
static_assert(sizeof(ParamResCap) == 0x88);

struct RepositoryEntry {
    bool paramLoaded;
    uint8_t undefined0x1[0x3];
    uint32_t pad0x4;
    ParamResCap* param;
    uint8_t undefined0x10[0x38];
};

static_assert(sizeof(RepositoryEntry) == 0x48);

struct SoloParamRepository {
    uint8_t unknown0x0[0x80];
    RepositoryEntry repositoryEntries[186];
};

static_assert(sizeof(SoloParamRepository) == 0x34D0);

#endif // !PARAMS


template <typename T>
class ParamEditor {
public:
    explicit ParamEditor();
    explicit ParamEditor(SoloParamRepository** soloParamRepository);
    explicit ParamEditor(SoloParamRepository* soloParamRepository);

    T* AddEntry(uint32_t rowId) {
        //Don't add anything that already has an ID.
        if (std::find(_rowIDs.begin(), _rowIDs.end(), rowId) != _rowIDs.end())
            throw std::runtime_error(
                "Trying to add a row that already exists in " + std::string(T::param_name) + "\n");

        _rowIDs.push_back(rowId);
        _rowData.template emplace_back(_defaultEntry);

        //I don't expect this to break, but it might?
        if (!_rowData.empty())
            return &_rowData.back();

        throw std::runtime_error(
            "_rowData for " + std::string(T::param_name) + " is empty after trying to add a new entry.\n");
    }

    T* RetrieveEntry(uint32_t rowId) {
        //Return a pointer to the param row for editing. This will also allow editing of existing params.
        std::vector<uint32_t>::iterator findRef = std::find(_rowIDs.begin(), _rowIDs.end(), rowId);
        if (findRef == _rowIDs.end())
            throw std::runtime_error(
                "Trying to retrieve a row that doesn't exist in" + std::string(T::param_name) + "\n");

        int index = std::distance(_rowIDs.begin(), findRef);
        if (index < _paramHeader->RowCount)
            return (T*)(_paramPointer + _paramTable[index].ParamOffset);


        return &_rowData[index - _paramHeader->RowCount];
    }

    ParamHeader* GetParamHeader() {
        return _paramHeader;
    }

    void AddNewParams();

    T* GetParamDataPtr() {
        return (T*)(_paramPointer + _paramHeader->DataOffset);
    };

private:
    void init(SoloParamRepository* soloParamRepository);
    ParamResCap* getParamResCap();
    T _defaultEntry;
    std::vector<uint32_t> _rowIDs;
    std::vector<T> _rowData;
    ParamResCap* _paramResCap;
    ParamHeader* _paramHeader;
    ParamTable* _paramTable;
    uintptr_t _paramPointer;
    SoloParamRepository* _soloParamRepository;
};

template <typename T>
ParamEditor<T>::ParamEditor(): _paramResCap(nullptr), _paramHeader(nullptr), _paramTable(nullptr), _paramPointer(0),
                               _soloParamRepository(nullptr) {
}

template <typename T>
ParamEditor<T>::ParamEditor(SoloParamRepository** soloParamRepository): _paramResCap(nullptr), _paramHeader(nullptr),
                                                                        _paramTable(nullptr), _paramPointer(0),
                                                                        _soloParamRepository(nullptr) {
    init(*soloParamRepository);
}

template <typename T>
ParamEditor<T>::ParamEditor(SoloParamRepository* soloParamRepository): _paramResCap(nullptr), _paramHeader(nullptr),
                                                                       _paramTable(nullptr), _paramPointer(0),
                                                                       _soloParamRepository(nullptr) {
    init(soloParamRepository);
}


template <typename T>
void ParamEditor<T>::init(SoloParamRepository* soloParamRepository) {
    _soloParamRepository = soloParamRepository;
    _paramResCap = getParamResCap();

    if (!_paramResCap) {
        printf(
            "Param %s does not exist\n", T::param_name);
        throw std::runtime_error(
            "Param " + std::string(T::param_name) + " does not exist\n");
    }


    _paramHeader = _paramResCap->ParamInfo->Param;
    _paramPointer = (uintptr_t)_paramHeader;
    _paramTable = &_paramHeader->Table;

    std::string paramType = std::string((char*)(_paramPointer + _paramHeader->ParamTypeOffset));
    if (strcmp(paramType.c_str(), T::param_type) != 0) {
        printf("Param %s def strings name did not match. game: %s header: %s\n", T::param_name, paramType.c_str(),
               T::param_name);
        throw std::runtime_error(
            "Param " + std::string(T::param_name) + " def strings name did not match. game: "
            + paramType + " header: " + std::string(T::param_type) + "\n");
    }

    //Don't add params if the size of the param differs in game.
    size_t entrySize = _paramHeader->ParamTypeOffset - _paramHeader->DataOffset;
    if (_paramHeader->RowCount < 2) {
        entrySize =  _paramTable[1].ParamOffset - _paramTable[0].ParamOffset;
    }

    if (entrySize != sizeof(T)) {
        printf("Param %s new entries size and entry size in game did not match. In Game:%llu - %llu\n", T::param_name,
               entrySize, sizeof(T));
        throw std::runtime_error("Param " + std::string(T::param_name) +
            " new entries size and entry size in game did not match. In Game:" +
            std::to_string(entrySize) + " - " + std::to_string(sizeof(T)) + "\n");
    }


    for (int i = 0; i < _paramHeader->RowCount; ++i) {
        _rowIDs.push_back(_paramTable[i].ParamID);
    }

    _defaultEntry = T(*(T*)(_paramTable[0].ParamOffset + _paramPointer));
}

//std::vector<uint8_t> Param;

template <typename T>
void ParamEditor<T>::AddNewParams() {
    throw new std::runtime_error("Adding new Params not implimented.");

    uint32_t paramSize = *(uint32_t*)(_paramPointer - 0x10);
    uint32_t numEntries = _paramHeader->RowCount;

    //Calculate the size of the new data, and make the new param as a vector of bytes.
    size_t newEntries = _rowData.size();
    uint32_t newTableEntrySize = (sizeof(ParamTable) * newEntries);
    uint32_t newDataEntrySize = (sizeof(T) * newEntries);
    uint32_t newDataSize = newTableEntrySize + newDataEntrySize;
    size_t newParamSize = newDataSize + paramSize;
    std::vector<uint8_t> newParam(newParamSize);

    //Copy over the data from the beginning of the old param to the start of the data offset.
    ParamHeader* newParamHeader = (ParamHeader*)newParam.data();
    memcpy(newParamHeader, _paramHeader, _paramHeader->DataOffset);

    //update the offsets of each field in the header.
    newParamHeader->DataOffset += newTableEntrySize;
    newParamHeader->StringOffset += newDataSize;
    newParamHeader->ParamTypeOffset += newDataSize;
    newParamHeader->RowCount += newEntries;

    //Use old row count to update previous rows with new offsets
    ParamTable* newParamTable = &newParamHeader->Table;
    for (uint32_t i = 0; i < numEntries; ++i) {
        newParamTable[i].ParamOffset += newTableEntrySize;
        newParamTable[i].StringOffset += newDataSize;
    }

    std::string paramType = std::string((char*)(_paramPointer + _paramHeader->StringOffset));
    for (uint32_t i = numEntries; i < newParamHeader->RowCount; ++i) {
        newParamTable[i].ParamID = _rowIDs[i];
        newParamTable[i].ParamOffset = newParamHeader->DataOffset + (i * sizeof(T));
        newParamTable[i].StringOffset = newParamHeader->StringOffset + paramType.size();
    }

    //copy the old data section to the new section
    uintptr_t newParamPointer = (uintptr_t)newParamHeader;
    uintptr_t newDataPointer = newParamHeader->DataOffset + newParamPointer;

    //copy the old data section to the new data section
    size_t dataSize = sizeof(T) * _paramHeader->RowCount;
    memcpy((void*)newDataPointer,
           (void*)(_paramPointer + _paramHeader->DataOffset),
           dataSize);

    //copy the new entries to the new data section
    memcpy((void*)(newDataPointer + dataSize),
           _rowData.data(),
           newEntries * sizeof(T));

    //copy the param string section
    memcpy((void*)(newParamPointer + newParamHeader->StringOffset),
           (void*)(_paramPointer + _paramHeader->StringOffset),
           paramSize - _paramHeader->StringOffset);

    printf("SpEffectParam: %p\n", _paramResCap);
    Param = std::vector<uint8_t>(newParam); //Just putting it as a static variable, so I can debug in CE

    //    std::ofstream wf("G:\\Steam\\steamapps\\common\\ELDEN RING\\Game\\mods\\SpEffectParam.param", std::ios::out | std::ios::binary);
    //    wf.write((char*)Param.data(), newParamSize);

    printf("newParamHeader: %p\n", Param.data());
    // hook->ParamHook.UnloadParamFunc(_paramResCap);
    // ParamResCap* pCap = hook->ParamHook.LoadParamFunc(*(uintptr_t*)hook->ParamHook.FD4ParamRepositoryImp, T::param_namew, Param.data(), newParamSize);
    //printf("SpEffectParam: %p\n", pCap);
}

template <typename T>
ParamResCap* ParamEditor<T>::getParamResCap() {
    std::wstring paramName = std::wstring(T::param_namew);
    for (int i = 0; i < sizeof(_soloParamRepository->repositoryEntries); ++i) {
        if (_soloParamRepository->repositoryEntries[i].paramLoaded) {
            ParamResCap* paramResCap = _soloParamRepository->repositoryEntries[i].param;
            wchar_t* containerName = (wchar_t*)&paramResCap->ParamName;
            //small string optimization? fsstring?!?!
            if (paramResCap->ParamNameLength >= 8) {
                containerName = paramResCap->ParamName;
            }
            std::wstring containerParamName = std::wstring(containerName);

            if (paramName == containerParamName) {
                return paramResCap;
            }
        }
    }

    return nullptr;
}
