// 函数: sub_55d290
// 地址: 0x55d290
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_7275e8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t ebx
int32_t var_1c = ebx
int32_t __saved_edi
int32_t var_2c = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD** result

if (arg3 s< 0)
    result.b = 0
else
    int32_t* lpMem = nullptr
    int32_t var_18_1 = 0
    int32_t var_14_1 = arg3
    int32_t var_10_1 = arg3
    
    if (arg3 != 0)
        lpMem = HeapAlloc(data_797df0, HEAP_NONE, arg3 << 2)
        int32_t* lpMem_1 = lpMem
    
    int32_t eax_5 = 0
    int32_t var_4 = 0
    
    if (arg3 s> 0)
        int32_t* ecx_1 = arg2 + (arg3 << 2) - 4
        
        do
            lpMem[eax_5] = *ecx_1
            eax_5 += 1
            ecx_1 -= 4
        while (eax_5 s< arg3)
    
    int32_t* eax_6 = arg1[1]
    
    if (eax_6[0x10].b != 0)
        uint32_t edx_3 = *lpMem
        char eax_10
        
        if (edx_3 s> 0)
            uint32_t ecx_5 = eax_6[1] u>> 2
            
            if (edx_3 == ecx_5)
                HeapFree(data_797df0, HEAP_NONE, lpMem)
                result.b = 1
            else
                if (edx_3 s<= ecx_5)
                    eax_10 = sub_551af0(ecx_5, eax_6, edx_3)
                    goto label_55d359
                
                if (sub_551920(eax_6, ecx_5, edx_3) != 0)
                    HeapFree(data_797df0, HEAP_NONE, lpMem)
                    result.b = 1
                else
                    HeapFree(data_797df0, HEAP_NONE, lpMem)
                    result.b = 0
        else
            eax_10 = sub_5514f0(eax_6)
        label_55d359:
            
            if (eax_10 != 0)
                HeapFree(data_797df0, HEAP_NONE, lpMem)
                result.b = 1
            else
                HeapFree(data_797df0, HEAP_NONE, lpMem)
                result.b = 0
    else if (*lpMem s<= 0)
        HeapFree(data_797df0, HEAP_NONE, lpMem)
        result.b = 1
    else
        ebx.b = (*(*arg1 + 0x18))(arg2, arg3)
        HeapFree(data_797df0, HEAP_NONE, lpMem)
        result.b = ebx.b

fsbase->NtTib.ExceptionList = ExceptionList
return result
