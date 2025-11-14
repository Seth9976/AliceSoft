// 函数: sub_55a120
// 地址: 0x55a120
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_4 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71ee50
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_60
int32_t eax_2 = data_78c474 ^ &var_60
int32_t __saved_edi
int32_t var_74 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_4 = 0
int128_t* lpMem_3
char eax_9 = sub_405d70(arg2, sub_401ec0(arg1, &lpMem_3, 0, arg2[4]))
int32_t var_4_1 = 0xffffffff
int32_t var_18

if (var_18 u>= 0x10)
    int128_t* lpMem_4 = lpMem_3
    sub_6b4d5b()

int32_t var_4_2 = 1
BOOL lpMem_2
char eax_13 = sub_405d70(arg2, sub_401ec0(arg4, &lpMem_2, 0, arg2[4]))
int32_t var_34

if (var_34 u>= 0x10)
    BOOL lpMem_5 = lpMem_2
    sub_6b4d5b()

char var_58
char var_54

if (eax_9 == 0)
    var_58 = 1
    
    if (eax_13 == 0)
        var_58 = 0
    
    var_54 = 0
else
    var_58 = 0
    
    var_54 = eax_13 != 0 ? 0 : 1

lpMem_3 = nullptr
void* var_28 = nullptr
int32_t var_24 = 0
int32_t var_20 = 0
int32_t var_4_3 = 2
BOOL lpMem

if (sub_559b90(arg3, arg2, arg4, &lpMem_3, var_54) != 0)
    lpMem_2 = 0
    int32_t var_44_1 = 0
    int32_t var_40_1 = 0
    int32_t var_3c_1 = 0
    var_4_3.b = 3
    int128_t* lpMem_1 = lpMem_3
    
    if (var_28 == 0)
    label_55a2d0:
        bool cond:2_1 = sub_559990(arg3, arg2, arg1, &lpMem_2, var_58) != 0
        lpMem = lpMem_2
        
        if (cond:2_1)
            if (lpMem != 0)
                HeapFree(data_797df4, HEAP_NONE, lpMem)
            
            if (lpMem_1 != 0)
                HeapFree(data_797df4, HEAP_NONE, lpMem_1)
            
            lpMem.b = 1
        else
            if (lpMem != 0)
                HeapFree(data_797df4, HEAP_NONE, lpMem)
            
            if (lpMem_1 != 0)
                HeapFree(data_797df4, HEAP_NONE, lpMem_1)
            
            lpMem.b = 0
    else
        if (sub_560450(&lpMem_2, lpMem_1, var_28) != 0)
            goto label_55a2d0
        
        lpMem = lpMem_2
        
        if (lpMem != 0)
            HeapFree(data_797df4, HEAP_NONE, lpMem)
        
        if (lpMem_1 != 0)
            HeapFree(data_797df4, HEAP_NONE, lpMem_1)
        
        lpMem.b = 0
else
    lpMem = lpMem_3
    
    if (lpMem != 0)
        HeapFree(data_797df4, HEAP_NONE, lpMem)
    
    lpMem.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_60)
return lpMem
