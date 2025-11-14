// 函数: sub_5593b0
// 地址: 0x5593b0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71a6e0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
BOOL lpMem_1
int32_t eax_2 = data_78c474 ^ &lpMem_1
int32_t __saved_edi
int32_t var_90 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
lpMem_1 = 0
int32_t var_78 = 0
int32_t var_74 = 0
int32_t var_70 = 0
int32_t var_4 = 0
BOOL lpMem

if (sub_559b90(arg1, arg2, arg3, &lpMem_1, 1) == 0)
label_5594c9:
    lpMem = lpMem_1
    
    if (lpMem != 0)
        HeapFree(data_797df4, HEAP_NONE, lpMem)
    
    lpMem.b = 0
else
    int32_t var_54_1 = 0xf
    int32_t var_58_1 = 0
    char var_68 = 0
    var_4.b = 1
    
    if (sub_5568e0(&lpMem_1, &var_68) != 0)
        if (sub_402680(0x74c93c, &var_68) == 0)
            if (var_54_1 u>= 0x10)
                int32_t var_94_4 = var_68.d
                sub_6b4d5b()
            
            int32_t var_54_3 = 0xf
            int32_t var_58_3 = 0
            var_68 = 0
            goto label_5594c9
        
        int32_t var_6c
        
        if (sub_556800(&lpMem_1, &var_6c) != 0)
            if (var_6c s< 7)
                goto label_559653
            
            int32_t var_38_1 = 0xf
            int32_t var_3c_1 = 0
            char var_4c = 0
            var_4.b = 2
            
            if (sub_5568e0(&lpMem_1, &var_4c) == 0)
            label_55964a:
                sub_401110(&var_4c)
            label_559653:
                sub_401110(&var_68)
                sub_560430(&lpMem_1)
                lpMem.b = 0
            else
                int32_t edi_2 = arg4[4]
                int32_t* ecx_2
                
                if (arg4[5] u< 0x10)
                    ecx_2 = arg4
                else
                    ecx_2 = *arg4
                
                int32_t eax_14 = var_3c_1
                
                if (var_3c_1 u>= edi_2)
                    eax_14 = edi_2
                
                int32_t* edx_2 = var_4c.d
                
                if (var_38_1 u< 0x10)
                    edx_2 = &var_4c
                
                int32_t eax_15 = sub_402320(eax_14, edx_2, ecx_2, eax_14)
                bool cond:1_1 = eax_15 == 0
                
                if (eax_15 == 0)
                    if (var_3c_1 u>= edi_2)
                        eax_15.b = var_3c_1 != edi_2
                    else
                        eax_15 = 0xffffffff
                    
                    cond:1_1 = eax_15 == 0
                
                eax_15.b = cond:1_1
                eax_15.b = eax_15.b == 0
                
                if (eax_15.b != 0)
                    goto label_55964a
                
                if (sub_556800(&lpMem_1, &var_6c) == 0)
                    goto label_55964a
                
                int32_t ebp_2 = var_6c
                int32_t edi_3 = 0
                
                if (ebp_2 s> 0)
                    while (true)
                        int32_t var_1c_1 = 0xf
                        int32_t var_20_1 = 0
                        char var_30 = 0
                        var_4.b = 3
                        char* ecx_3 = &var_30
                        
                        if (sub_5568e0(&lpMem_1, &var_30) == 0)
                            sub_401110(ecx_3)
                            break
                        
                        var_4.b = 2
                        sub_401110(ecx_3)
                        edi_3 += 1
                        
                        if (edi_3 s>= ebp_2)
                            goto label_559625
                    
                    goto label_55964a
                
            label_559625:
                int32_t edi_5 = var_78 - var_70
                
                if (edi_5 s> 0)
                    if (sub_427ad0(arg5, edi_5) == 0)
                        goto label_55964a
                    
                    void* edi_6 = arg5[1]
                    int128_t* eax_20
                    
                    if (edi_6 != 0)
                        eax_20 = *arg5
                    else
                        eax_20 = nullptr
                    
                    if (edi_6 != 0 && sub_5567c0(&lpMem_1, edi_6, eax_20) == 0)
                        goto label_55964a
                
                sub_401110(&var_4c)
                sub_401110(&var_68)
                sub_560430(&lpMem_1)
                lpMem.b = 1
        else
            sub_401110(&var_68)
            lpMem = lpMem_1
            
            if (lpMem != 0)
                HeapFree(data_797df4, HEAP_NONE, lpMem)
            
            lpMem.b = 0
    else
        if (var_54_1 u>= 0x10)
            int32_t var_94_2 = var_68.d
            sub_6b4d5b()
        
        lpMem = lpMem_1
        int32_t var_54_2 = 0xf
        int32_t var_58_2 = 0
        var_68 = 0
        
        if (lpMem != 0)
            HeapFree(data_797df4, HEAP_NONE, lpMem)
        
        lpMem.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &lpMem_1)
return lpMem
