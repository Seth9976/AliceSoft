// 函数: sub_558da0
// 地址: 0x558da0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71eea0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_84
int32_t eax_2 = data_78c474 ^ &var_84
int32_t __saved_edi
int32_t var_94 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
char* eax_6 = arg3[1]
int32_t* var_80 = arg1
void* var_68
sub_405410(arg3, &var_68, *arg3, eax_6)
BOOL lpMem_1 = 0
int32_t var_78 = 0
int32_t var_74 = 0
int32_t var_70 = 0
int32_t var_4 = 0
BOOL lpMem

if (sub_559b90(arg2, var_80, arg4, &lpMem_1, 1) == 0)
label_558ece:
    lpMem = lpMem_1
    
    if (lpMem != 0)
        HeapFree(data_797df4, HEAP_NONE, lpMem)
    
    lpMem.b = 0
else
    int32_t var_50_1 = 0xf
    int32_t var_54_1 = 0
    char var_64 = 0
    var_4.b = 1
    
    if (sub_5568e0(&lpMem_1, &var_64) != 0)
        if (sub_402680(0x74c934, &var_64) == 0)
            if (var_50_1 u>= 0x10)
                int32_t var_98_4 = var_64.d
                sub_6b4d5b()
            
            int32_t var_50_3 = 0xf
            int32_t var_54_3 = 0
            var_64 = 0
            goto label_558ece
        
        if (sub_556800(&lpMem_1, &var_80) != 0)
            if (var_80 s< 7)
                goto label_559083
            
            int32_t var_34_1 = 0xf
            int32_t var_38_1 = 0
            char var_48 = 0
            var_4.b = 2
            
            if (sub_5568e0(&lpMem_1, &var_48) == 0)
            label_55907a:
                sub_401110(&var_48)
            label_559083:
                sub_401110(&var_64)
                sub_560430(&lpMem_1)
                lpMem.b = 0
            else
                void** eax_14 = arg5
                int32_t ebp_1 = eax_14[4]
                
                if (eax_14[5] u>= 0x10)
                    eax_14 = *eax_14
                
                int32_t edi_2 = var_38_1
                
                if (edi_2 u>= ebp_1)
                    edi_2 = ebp_1
                
                int32_t* edx_2 = var_48.d
                
                if (var_34_1 u< 0x10)
                    edx_2 = &var_48
                
                int32_t eax_15 = sub_402320(eax_14, edx_2, eax_14, edi_2)
                bool cond:0_1 = eax_15 == 0
                
                if (eax_15 == 0)
                    if (var_38_1 u>= ebp_1)
                        int32_t ecx_7
                        ecx_7.b = var_38_1 != ebp_1
                        eax_15 = ecx_7
                    else
                        eax_15 = 0xffffffff
                    
                    cond:0_1 = eax_15 == 0
                
                eax_15.b = cond:0_1
                eax_15.b = eax_15.b == 0
                
                if (eax_15.b != 0)
                    goto label_55907a
                
                if (sub_556800(&lpMem_1, &var_80) == 0)
                    goto label_55907a
                
                int32_t ebp_2 = 0
                
                if (var_80 s> 0)
                    while (true)
                        int32_t var_18_1 = 0xf
                        int32_t var_1c_1 = 0
                        char var_2c = 0
                        var_4.b = 3
                        struct _EXCEPTION_REGISTRATION_RECORD** ecx_8 = &var_2c
                        
                        if (sub_5568e0(&lpMem_1, &var_2c) == 0)
                            sub_401110(ecx_8)
                            break
                        
                        sub_405220(ecx_8, arg3)
                        var_4.b = 2
                        sub_401110(&var_2c)
                        ebp_2 += 1
                        
                        if (ebp_2 s>= var_80)
                            goto label_559032
                    
                    goto label_55907a
                
            label_559032:
                sub_401110(&var_48)
                sub_401110(&var_64)
                sub_560430(&lpMem_1)
                lpMem.b = 1
        else
            sub_401110(&var_64)
            lpMem = lpMem_1
            
            if (lpMem != 0)
                HeapFree(data_797df4, HEAP_NONE, lpMem)
            
            lpMem.b = 0
    else
        if (var_50_1 u>= 0x10)
            int32_t var_98_2 = var_64.d
            sub_6b4d5b()
        
        lpMem = lpMem_1
        int32_t var_50_2 = 0xf
        int32_t var_54_2 = 0
        var_64 = 0
        
        if (lpMem != 0)
            HeapFree(data_797df4, HEAP_NONE, lpMem)
        
        lpMem.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_84)
return lpMem
