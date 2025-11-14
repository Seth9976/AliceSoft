// 函数: sub_552190
// 地址: 0x552190
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if (*(arg1 + 0x48) == 0)
    struct IMemory::sys43vm::CRecycleMemoryWrapper::VTable** result = operator new(0xc)
    
    if (result != 0)
        *result = &sys43vm::CRecycleMemoryWrapper::`vftable'{for `IMemory'}
        result[1] = arg1
        result[2] = 1
        *(arg1 + 0x48) = result
        return result
    
    *(arg1 + 0x48) = 0

return *(arg1 + 0x48)
