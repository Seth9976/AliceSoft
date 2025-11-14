// 函数: sub_55d500
// 地址: 0x55d500
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_71ed58
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t eax_2 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
BOOL lpMem = 0
BOOL lpMem_2 = 0
int32_t var_24 = 0
int32_t var_20 = 0
int32_t var_1c = 0
int32_t var_c_1 = 0

if (arg3 s> 0)
    uint32_t var_20_1 = arg3
    
    if (arg3 u<= 0)
    label_55d57a:
        int32_t ecx_1 = neg.d(arg3)
        uint32_t var_24_2 = arg3
        int32_t var_1c_2 = 0
        sub_6c02a0(sbb.d(ecx_1, ecx_1, arg3 != 0) & lpMem, arg2, arg3, eax_2)
        goto label_55d59a
    
    lpMem = HeapAlloc(data_797df4, HEAP_NONE, arg3)
    lpMem_2 = lpMem
    
    if (lpMem != 0)
        goto label_55d57a
else
    int32_t var_24_1 = 0
    int32_t var_1c_1 = 0
label_55d59a:
    
    if (sub_55d970(arg1, &lpMem_2) != 0)
        BOOL lpMem_1 = lpMem_2
        
        if (lpMem_1 != 0)
            HeapFree(data_797df4, HEAP_NONE, lpMem_1)
        
        lpMem_1.b = 1
        fsbase->NtTib.ExceptionList = ExceptionList
        return lpMem_1
    
    sub_604c90("CmemoryFrameArray::Load()\nError")
    lpMem = lpMem_2
    
    if (lpMem != 0)
        HeapFree(data_797df4, HEAP_NONE, lpMem)

lpMem.b = 0
fsbase->NtTib.ExceptionList = ExceptionList
return lpMem
