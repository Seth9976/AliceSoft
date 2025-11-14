// 函数: sub_5590a0
// 地址: 0x5590a0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71a720
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_64
int32_t eax_2 = data_78c474 ^ &var_64
int32_t __saved_edi
int32_t var_78 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int128_t* lpMem_6 = nullptr
void* var_44 = nullptr
int32_t var_40 = 0
int32_t var_4 = 0
sub_5593b0(arg1, arg2, arg3, arg4, &lpMem_6)
int128_t* lpMem_5 = nullptr
int32_t var_54 = 0
int32_t var_50 = 0
int32_t var_4c = 0
var_4.b = 1
int32_t var_1c = 0xf
int32_t var_20 = 0
char var_30 = 0
bool var_5d = sub_560510(&var_30, sub_401270(&var_30, 3, 0x74c938), &lpMem_5) == 0

if (var_1c u>= 0x10)
    int32_t var_7c_1 = var_30.d
    sub_6b4d5b()

int32_t var_1c_1 = 0xf
int32_t var_20_1 = 0
var_30 = 0
int128_t* lpMem_1

if (var_5d == 0)
    char eax_10
    int32_t edx_2
    eax_10, edx_2 = sub_5604b0(&lpMem_5, 7)
    
    if (eax_10 != 0)
        if (sub_560510(arg4, edx_2, &lpMem_5) != 0)
            if (sub_5604b0(&lpMem_5, (arg5[1] - *arg5) s/ 0x1c) == 0)
                goto label_559187
            
            int32_t esi_2 = *arg5
            int32_t ecx_7 = arg5[1] - esi_2
            int32_t eax_21
            int32_t edx_7
            edx_7:eax_21 = muls.dp.d(0x92492493, ecx_7)
            int32_t edx_9 = (edx_7 + ecx_7) s>> 4
            int32_t i = 0
            
            if (ecx_7 s/ 0x1c s> 0)
                void* var_5c_1 = nullptr
                int32_t ecx_10
                
                do
                    if (sub_560510(var_5c_1 + esi_2, edx_9, &lpMem_5) == 0)
                        goto label_559187
                    
                    esi_2 = *arg5
                    var_5c_1 += 0x1c
                    ecx_10 = arg5[1] - esi_2
                    int32_t eax_28
                    int32_t edx_10
                    edx_10:eax_28 = muls.dp.d(0x92492493, ecx_10)
                    edx_9 = (edx_10 + ecx_10) s>> 4
                    i += 1
                while (i s< ecx_10 s/ 0x1c)
            
            int128_t* lpMem_4 = lpMem_6
            
            if (var_44 u<= 0)
            label_559335:
                bool cond:0_1 = sub_559990(arg1, arg2, arg3, &lpMem_5, 1) != 0
                lpMem_1 = lpMem_5
                
                if (cond:0_1)
                    if (lpMem_1 != 0)
                        HeapFree(data_797df4, HEAP_NONE, lpMem_1)
                    
                    if (lpMem_4 != 0)
                        HeapFree(data_797df4, HEAP_NONE, lpMem_4)
                    
                    lpMem_1.b = 1
                else
                    if (lpMem_1 != 0)
                        HeapFree(data_797df4, HEAP_NONE, lpMem_1)
                    
                    if (lpMem_4 == 0)
                        lpMem_1.b = 0
                    else
                        HeapFree(data_797df4, HEAP_NONE, lpMem_4)
                        lpMem_1.b = 0
            else
                if (sub_560450(&lpMem_5, lpMem_4, var_44) != 0)
                    goto label_559335
                
                lpMem_1 = lpMem_5
                
                if (lpMem_1 != 0)
                    HeapFree(data_797df4, HEAP_NONE, lpMem_1)
                
                if (lpMem_4 == 0)
                    lpMem_1.b = 0
                else
                    HeapFree(data_797df4, HEAP_NONE, lpMem_4)
                    lpMem_1.b = 0
        else
            int128_t* lpMem_3 = lpMem_5
            
            if (lpMem_3 != 0)
                HeapFree(data_797df4, HEAP_NONE, lpMem_3)
            
            lpMem_1 = lpMem_6
            
            if (lpMem_1 != 0)
                HeapFree(data_797df4, HEAP_NONE, lpMem_1)
            
            lpMem_1.b = 0
    else
        int128_t* lpMem_2 = lpMem_5
        
        if (lpMem_2 != 0)
            HeapFree(data_797df4, HEAP_NONE, lpMem_2)
        
        lpMem_1 = lpMem_6
        
        if (lpMem_1 != 0)
            HeapFree(data_797df4, HEAP_NONE, lpMem_1)
        
        lpMem_1.b = 0
else
label_559187:
    int128_t* lpMem = lpMem_5
    
    if (lpMem != 0)
        HeapFree(data_797df4, HEAP_NONE, lpMem)
    
    lpMem_1 = lpMem_6
    
    if (lpMem_1 != 0)
        HeapFree(data_797df4, HEAP_NONE, lpMem_1)
    
    lpMem_1.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_64)
return lpMem_1
