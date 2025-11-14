// 函数: sub_54f810
// 地址: 0x54f810
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

struct IVMArray2::sys43vm::CVMArrayWrapper::VTable** eax = arg1[0x16]

if (eax != 0)
    struct IVMArray2::sys43vm::CVMArrayWrapper::VTable** var_c_1 = eax
    *eax = &sys43vm::CVMArrayWrapper::`vftable'{for `IVMArray2'}
    sub_6b4d5b()

struct IString::sys43vm::CStringWrapper::VTable** eax_1 = arg1[0x15]

if (eax_1 != 0)
    struct IString::sys43vm::CStringWrapper::VTable** var_c_2 = eax_1
    *eax_1 = &sys43vm::CStringWrapper::`vftable'{for `IString'}
    sub_6b4d5b()

struct IVMGlobal::sys43vm::CVMGlobalWrapper::VTable** eax_2 = arg1[0x14]

if (eax_2 != 0)
    struct IVMGlobal::sys43vm::CVMGlobalWrapper::VTable** var_c_3 = eax_2
    *eax_2 = &sys43vm::CVMGlobalWrapper::`vftable'{for `IVMGlobal'}
    sub_6b4d5b()

struct IVMStruct3::sys43vm::CVMStructWrapper::VTable** eax_3 = arg1[0x13]

if (eax_3 != 0)
    struct IVMStruct3::sys43vm::CVMStructWrapper::VTable** var_c_4 = eax_3
    *eax_3 = &sys43vm::CVMStructWrapper::`vftable'{for `IVMStruct3'}
    sub_6b4d5b()

struct IMemory::sys43vm::CRecycleMemoryWrapper::VTable** eax_4 = arg1[0x12]

if (eax_4 != 0)
    struct IMemory::sys43vm::CRecycleMemoryWrapper::VTable** var_c_5 = eax_4
    *eax_4 = &sys43vm::CRecycleMemoryWrapper::`vftable'{for `IMemory'}
    sub_6b4d5b()

BOOL lpMem = arg1[8]

if (lpMem != 0)
    lpMem = HeapFree(data_797df0, HEAP_NONE, lpMem)

int32_t lpMem_1 = *arg1

if (lpMem_1 == 0)
    return lpMem

return HeapFree(data_797df4, HEAP_NONE, lpMem_1)
