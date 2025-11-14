// 函数: sub_55f760
// 地址: 0x55f760
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ebp
int32_t var_4 = ebp
int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_71ece3
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t* var_38 = &var_4
int32_t __saved_edi
int32_t eax_2 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t lpMem_2 = 0
int32_t var_24 = 0
int32_t var_20 = 0
int32_t var_1c = 0
int32_t var_c_1 = 0

if (sub_55f980(arg1, &lpMem_2) != 0)
    struct IMemory::common::CIMemory::VTable** eax_4 = operator new(0x20)
    struct IMemory::common::CIMemory::VTable** var_2c_1 = eax_4
    var_c_1.b = 1
    struct IMemory::common::CIMemory::VTable** result
    
    if (eax_4 == 0)
        result = nullptr
    else
        result = sub_631440(eax_4)
    
    var_c_1.b = 0
    int32_t lpMem_1 = lpMem_2
    
    if (var_1c s<= 0)
        goto label_55f846
    
    char eax_7 = (*result)->vFunc_2(var_1c)
    struct IMemory::common::CIMemory::VTable* edx_2 = *result
    
    if (eax_7 != 0)
        int32_t eax_11 = neg.d(var_24)
        sub_6c02a0(edx_2->vFunc_6(sbb.d(eax_11, eax_11, var_24 != 0) & lpMem_1, var_1c, eax_2))
    label_55f846:
        
        if (lpMem_1 != 0)
            HeapFree(data_797df4, HEAP_NONE, lpMem_1)
        
        fsbase->NtTib.ExceptionList = ExceptionList
        *var_38
        return result
    
    edx_2->vFunc_1(eax_2)

int32_t lpMem = lpMem_2

if (lpMem != 0)
    HeapFree(data_797df4, HEAP_NONE, lpMem)

fsbase->NtTib.ExceptionList = ExceptionList
*var_38
return 0
