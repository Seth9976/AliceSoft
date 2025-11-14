// 函数: sub_54f500
// 地址: 0x54f500
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_712958
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_2c = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
BOOL lpMem_1 = 0
int32_t var_14 = 0
int32_t var_10 = 0
int32_t var_4 = 0
bool cond:0 = sub_54f330(arg3, &lpMem_1) != 0
BOOL lpMem = lpMem_1

if (cond:0)
    if (var_14 == 0)
        if (lpMem != 0)
            HeapFree(data_797df4, HEAP_NONE, lpMem)
        
        lpMem.b = 0
    else if (lpMem == 0)
        lpMem.b = 0
    else if (*lpMem != 0x47)
        HeapFree(data_797df4, HEAP_NONE, lpMem)
        lpMem.b = 0
    else if (*(lpMem + 1) != 0x44)
        HeapFree(data_797df4, HEAP_NONE, lpMem)
        lpMem.b = 0
    else if (*(lpMem + 2) == *arg2 && *(lpMem + 3) == arg2[1])
        if (sub_427ad0(arg1, *(lpMem + 4)) == 0)
            sub_560430(&lpMem_1)
            lpMem.b = 0
        else
            int32_t edx_4 = arg1[1]
            int32_t eax_8
            
            if (edx_4 != 0)
                eax_8 = *arg1
            else
                eax_8 = 0
            
            int32_t* ecx_3 = *(arg2 + 4)
            
            if (ecx_3 == 0)
                sub_560430(&lpMem_1)
                lpMem.b = 0
            else if ((*(*ecx_3 + 8))(eax_8, edx_4, lpMem + 8, var_14 - 8) == 0)
                sub_560430(&lpMem_1)
                lpMem.b = 0
            else
                sub_560430(&lpMem_1)
                lpMem.b = 1
    else
        sub_560430(&lpMem_1)
        lpMem.b = 0
else if (lpMem == 0)
    lpMem.b = 0
else
    HeapFree(data_797df4, HEAP_NONE, lpMem)
    lpMem.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
return lpMem
