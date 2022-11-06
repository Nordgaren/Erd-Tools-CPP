#pragma once
#include "../Include/Common.h"
#include "../Include/ErdTools_globals.h"
template<typename T>
class ParamEditor {
public:
    explicit ParamEditor(uintptr_t soloParamRepository);

    T *AddEntry(uint32_t rowId) {
        //Don't add anything that already has an ID.
        if (find(_rowIDs.begin(), _rowIDs.end(), rowId) != _rowIDs.end())
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

    T *RetrieveEntry(uint32_t rowId) {
        //Return a pointer to the param row for editing. This will also allow editing of existing params.
        std::vector<uint32_t>::iterator findRef = find(_rowIDs.begin(), _rowIDs.end(), rowId);
        if (findRef == _rowIDs.end())
            throw std::runtime_error("Trying to retrieve a row that doesn't exist in" + std::string(T::param_name) + "\n");

        int index = std::distance(_rowIDs.begin(), findRef);
        if (index < _paramHeader->RowCount)
            return (T*)(_paramPointer + _paramTable[index].ParamOffset);


        return &_rowData[index - _paramHeader->RowCount];
    }
    
    ParamHeader *GetParamHeader() {
        return _paramHeader;
    }

    void AddNewParams();
    T* GetParamDataPtr() {
        return (T*)(_paramPointer + _paramHeader->DataOffset);
    };

private:
    ParamResCap* getParamResCap();
    T _defaultEntry;
    std::vector<uint32_t> _rowIDs;
    std::vector<T> _rowData;
    ParamResCap *_paramResCap;
    ParamHeader *_paramHeader;
    ParamTable *_paramTable;
    uintptr_t _paramPointer;
    uintptr_t _soloParamRepository;
};

template<typename T>
ParamEditor<T>::ParamEditor(uintptr_t soloParamRepository) {
    _soloParamRepository = soloParamRepository;
    _paramResCap = getParamResCap();

    if (!_paramResCap)
        throw std::runtime_error(
                "Param " + std::string(T::param_name) + " does not exist\n");

    _paramHeader = _paramResCap->ParamInfo->Param;
    _paramPointer = (uintptr_t) _paramHeader;
    _paramTable = &_paramHeader->Table;

    std::string paramType = std::string((char *) (_paramPointer + _paramHeader->StringOffset));
    if (strcmp(paramType.c_str(), T::param_type) != 0)
        throw std::runtime_error(
                "Param " + std::string(T::param_name) + " def strings name did not match. game: "
                + paramType + " header: " + std::string(T::param_type) + "\n");

    //Don't add params if the size of the param differs in game.
    size_t entrySize = _paramTable[1].ParamOffset - _paramTable[0].ParamOffset;
    if (entrySize != sizeof(T))
        throw std::runtime_error("Param " + std::string(T::param_name) +
                                 " new entries size and entry size in game did not match. In Game:" +
                                 std::to_string(entrySize) + " - " + std::to_string(sizeof(T)) + "\n");


    for (int i = 0; i < _paramHeader->RowCount; ++i) {
        _rowIDs.push_back(_paramTable[i].ParamID);
    }

    _defaultEntry = T(*(T *) (_paramTable[0].ParamOffset + _paramPointer));
}

std::vector<uint8_t> Param;

template<typename T>
void ParamEditor<T>::AddNewParams() {
    throw new std::runtime_error("Adding new Params not implimented.");

    uint32_t paramSize = *(uint32_t *) (_paramPointer - 0x10);
    uint32_t numEntries = _paramHeader->RowCount;

    //Calculate the size of the new data, and make the new param as a vector of bytes.
    size_t newEntries = _rowData.size();
    uint32_t newTableEntrySize = (sizeof(ParamTable) * newEntries);
    uint32_t newDataEntrySize = (sizeof(T) * newEntries);
    uint32_t newDataSize = newTableEntrySize + newDataEntrySize;
    size_t newParamSize = newDataSize + paramSize;
    std::vector<uint8_t> newParam(newParamSize);

    //Copy over the data from the beginning of the old param to the start of the data offset.
    ParamHeader *newParamHeader = (ParamHeader *) newParam.data();
    memcpy(newParamHeader, _paramHeader, _paramHeader->DataOffset);

    //update the offsets of each field in the header.
    newParamHeader->DataOffset += newTableEntrySize;
    newParamHeader->StringOffset += newDataSize;
    newParamHeader->ParamTypeOffset += newDataSize;
    newParamHeader->RowCount += newEntries;

    //Use old row count to update previous rows with new offsets
    ParamTable *newParamTable = &newParamHeader->Table;
    for (uint32_t i = 0; i < numEntries; ++i) {
        newParamTable[i].ParamOffset += newTableEntrySize;
        newParamTable[i].StringOffset += newDataSize;
    }

    std::string paramType = std::string((char *) (_paramPointer + _paramHeader->StringOffset));
    for (uint32_t i = numEntries; i < newParamHeader->RowCount; ++i) {
        newParamTable[i].ParamID = _rowIDs[i];
        newParamTable[i].ParamOffset = newParamHeader->DataOffset + (i * sizeof(T));
        newParamTable[i].StringOffset = newParamHeader->StringOffset + paramType.size();
    }

    //copy the old data section to the new section
    uintptr_t newParamPointer = (uintptr_t) newParamHeader;
    uintptr_t newDataPointer = newParamHeader->DataOffset + newParamPointer;

    //copy the old data section to the new data section
    size_t dataSize = sizeof(T) * _paramHeader->RowCount;
    memcpy((void *) newDataPointer,
           (void *) (_paramPointer + _paramHeader->DataOffset),
           dataSize);

    //copy the new entries to the new data section
    memcpy((void *) (newDataPointer + dataSize),
           _rowData.data(),
           newEntries * sizeof(T));

    //copy the param string section
    memcpy((void *) (newParamPointer + newParamHeader->StringOffset),
           (void *) (_paramPointer + _paramHeader->StringOffset),
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

template<typename T>
ParamResCap *ParamEditor<T>::getParamResCap() {

    for (int i = 0; i < 185; i++) {
        int paramOffset = i * 0x48;
        int *param = (int *) (_soloParamRepository + paramOffset + 0x80);
        if (*param > 0) {
            ParamResCap *paramResCap = (ParamResCap *) *(uint64_t *) (_soloParamRepository + paramOffset + 0x88);
            wchar_t *containerName = (wchar_t *) &paramResCap->ParamName;
            //small string optimization? fsstring?!?!
            if (paramResCap->ParamNameLength >= 8) {
                containerName = paramResCap->ParamName;
            }
            if (wcsncmp(T::param_namew, containerName, sizeof(T::param_namew)) == 0) {
                return paramResCap;
            }
        }
    }
    return nullptr;
}
