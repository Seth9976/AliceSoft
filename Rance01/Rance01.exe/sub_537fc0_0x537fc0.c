// 函数: sub_537fc0
// 地址: 0x537fc0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_728dd8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_58
int32_t eax_2 = data_78c474 ^ &var_58
int32_t __saved_edi
int32_t var_6c = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t esi = 0
BOOL lpMem_1 = 0
int32_t var_48 = 0
int32_t var_44 = 0
int32_t var_4 = 0
BOOL lpMem

if (sub_54f330(arg2, &lpMem_1) == 0)
    int32_t* eax_7
    
    if (arg2[5] u< 0x10)
        eax_7 = arg2
    else
        eax_7 = *arg2
    
    int32_t* var_70_1 = eax_7
    sub_604c90(0x75199c)
    lpMem = lpMem_1
    
    if (lpMem != 0)
        HeapFree(data_797df4, HEAP_NONE, lpMem)
    
    lpMem.b = 0
else if (var_48 u< 0x10)
label_538070:
    int32_t* eax_9
    
    if (arg2[5] u< 0x10)
        eax_9 = arg2
    else
        eax_9 = *arg2
    
    int32_t* var_70_4 = eax_9
    sub_604c90(0x7519f8)
    lpMem = lpMem_1
    
    if (lpMem != 0)
        HeapFree(data_797df4, HEAP_NONE, lpMem)
    
    lpMem.b = 0
else
    if (sub_5396d0(&lpMem_1) == 0)
        goto label_538070
    
    int32_t var_40 = 0
    int32_t var_3c_1 = 0
    int32_t var_38_1 = 0
    var_4.b = 1
    
    if (var_48 u< 0x10)
        goto label_5380d6
    
    int32_t* var_70_6 = &var_40
    
    if (sub_539810(&lpMem_1) != 0)
        int32_t eax_14 = var_40
        int32_t var_54 = eax_14
        arg1[0x54] = 0
        int32_t* ebx
        
        if (eax_14 u< var_3c_1)
            while (true)
                int32_t var_18_1 = 0xf
                int32_t var_1c_1 = 0
                char var_2c = 0
                var_4.b = 2
                
                if (sub_554780(&var_54, &var_2c, 4) == 0)
                    int32_t* eax_60
                    
                    if (arg2[5] u< 0x10)
                        eax_60 = arg2
                    else
                        eax_60 = *arg2
                    
                    int32_t* var_70_34 = eax_60
                    ebx.b = sub_604c90(0x751a50)
                    sub_401110(&var_2c)
                    break
                
                int32_t eax_16 = var_1c_1
                
                if (var_1c_1 u>= 4)
                    eax_16 = 4
                
                char* edx_2 = var_2c.d
                
                if (var_18_1 u< 0x10)
                    edx_2 = &var_2c
                
                int32_t eax_17 = sub_402320(eax_16, edx_2, "CODE", eax_16)
                bool cond:1_1 = eax_17 == 0
                
                if (eax_17 == 0)
                    if (var_1c_1 u>= 4)
                        eax_17.b = var_1c_1 != 4
                    else
                        eax_17 = 0xffffffff
                    
                    cond:1_1 = eax_17 == 0
                
                eax_17.b = cond:1_1
                char eax_19
                
                if (eax_17.b == 0)
                    if (sub_402680("MSG0", &var_2c) != 0)
                        eax_19 = sub_538680(arg1, &var_54)
                        goto label_538483
                    
                    if (sub_402680("FUNC", &var_2c) == 0)
                        char eax_23
                        int32_t edx_3
                        eax_23, edx_3 = sub_402680("STRT", &var_2c)
                        
                        if (eax_23 == 0)
                            if (sub_402680("MAIN", &var_2c) == 0)
                                if (sub_402680("MSGF", &var_2c) == 0)
                                    char eax_28
                                    int32_t edx_5
                                    eax_28, edx_5 = sub_402680("GLOB", &var_2c)
                                    
                                    if (eax_28 == 0)
                                        if (sub_402680("GSET", &var_2c) == 0)
                                            if (sub_402680("HLL0", &var_2c) == 0)
                                                if (sub_402680("SWI0", &var_2c) == 0)
                                                    if (sub_402680("STR0", &var_2c) == 0)
                                                        if (sub_402680("FNAM", &var_2c) == 0)
                                                            if (sub_402680("OJMP", &var_2c) == 0)
                                                                if (sub_402680("GVER", &var_2c) == 0)
                                                                    if (sub_402680("VERS", &var_2c) != 0)
                                                                        if (sub_5546f0(&var_54, &arg1[0x54])
                                                                                == 0)
                                                                            sub_401110(&var_2c)
                                                                            goto label_5383ea
                                                                        
                                                                        if (arg1[0x54] == 6)
                                                                            goto label_53848b
                                                                        
                                                                        int32_t var_70_24 = arg1[0x54]
                                                                        sub_604c90(0x751afc)
                                                                        sub_401110(&var_2c)
                                                                        goto label_5383ea
                                                                    
                                                                    if (sub_402680("FNCT", &var_2c) == 0)
                                                                        if (sub_402680("DELG", &var_2c) == 0)
                                                                            if (sub_402680("KEYC", &var_2c) == 0)
                                                                                if (sub_402680("OBJG", &var_2c) == 0)
                                                                                    char* ecx_31 = var_2c.d
                                                                                    
                                                                                    if (var_18_1 u< 0x10)
                                                                                        ecx_31 = &var_2c
                                                                                    
                                                                                    if (arg2[5] u< 0x10)
                                                                                        char* var_70_36 = ecx_31
                                                                                        int32_t* var_74_6 = arg2
                                                                                        sub_604c90(0x751b78)
                                                                                    else
                                                                                        char* var_70_35 = ecx_31
                                                                                        int32_t var_74_5 = *arg2
                                                                                        sub_604c90(0x751b78)
                                                                                    
                                                                                    sub_401110(&var_2c)
                                                                                    goto label_5383ea
                                                                                
                                                                                eax_19 = sub_539220(arg1, &var_54)
                                                                            else
                                                                                eax_19 = sub_5391d0(0, &var_54, arg1)
                                                                        else
                                                                            eax_19 =
                                                                                sub_5388d0(&var_54, &arg1[0x23])
                                                                    else
                                                                        eax_19 =
                                                                            sub_5388d0(&var_54, &arg1[0x1f])
                                                                else
                                                                    eax_19 =
                                                                        sub_5546f0(&var_54, &arg1[0x58])
                                                            else
                                                                eax_19 =
                                                                    sub_5546f0(&var_54, &arg1[0x57])
                                                        else
                                                            eax_19 = sub_539060(arg1, &var_54)
                                                    else
                                                        eax_19 = sub_538ef0(arg1, &var_54)
                                                else
                                                    eax_19 = sub_538d40(&var_54, arg1)
                                            else
                                                eax_19 = sub_538ae0(&var_54, arg1)
                                        else
                                            eax_19 = sub_538a50(arg1, &var_54)
                                    else
                                        eax_19 = sub_5389f0(&var_54, edx_5, arg1)
                                else
                                    eax_19 = sub_5546f0(&var_54, &arg1[0x56])
                            else
                                eax_19 = sub_5546f0(&var_54, &arg1[0x55])
                        else
                            sub_538960(&var_54, edx_3, arg1)
                        label_53848b:
                            var_4.b = 1
                            
                            if (var_18_1 u>= 0x10)
                                int32_t var_70_29 = var_2c.d
                                sub_6b4d5b()
                            
                            if (var_54 u>= var_3c_1)
                                goto label_5384c3
                            
                            continue
                    else
                        eax_19 = sub_5387f0(&var_54, arg1)
                else
                    eax_19 = sub_538600(arg1, &var_54)
                
            label_538483:
                
                if (eax_19 != 0)
                    goto label_53848b
                
                sub_401110(&var_2c)
                goto label_5383ea
            
            goto label_538595
        
    label_5384c3:
        int32_t eax_49
        int32_t edx_9
        edx_9:eax_49 = muls.dp.d(0x66666667, arg1[0x3c] - arg1[0x3b])
        int32_t edx_10 = edx_9 s>> 4
        int32_t esi_5 = 0
        
        if ((edx_10 u>> 0x1f) + edx_10 s<= 0)
        label_538515:
            
            if (sub_539960(arg1) == 0)
            label_5383ea:
                sub_65ab60(&var_40)
                sub_560430(&lpMem_1)
                lpMem.b = 0
            else
                sub_539340(arg1)
                sub_55e5f0(&arg1[0x5b], &arg1[0x1b])
                sub_65ab60(&var_40)
                sub_560430(&lpMem_1)
                lpMem.b = 1
        else
            int32_t edi_19 = 0
            
            while (true)
                if (sub_55bd50(arg1, arg1[0x3b] + edi_19) == 0)
                    ebx.b = sub_604c90("switch")
                    break
                
                int32_t eax_53
                int32_t edx_11
                edx_11:eax_53 = muls.dp.d(0x66666667, arg1[0x3c] - arg1[0x3b])
                int32_t edx_12 = edx_11 s>> 4
                esi_5 += 1
                edi_19 += 0x28
                
                if (esi_5 s>= (edx_12 u>> 0x1f) + edx_12)
                    goto label_538515
            
        label_538595:
            sub_65ab60(&var_40)
            sub_560430(&lpMem_1)
            lpMem.b = ebx.b
    else
        esi = var_40
    label_5380d6:
        int32_t* eax_12
        
        if (arg2[5] u< 0x10)
            eax_12 = arg2
        else
            eax_12 = *arg2
        
        int32_t* var_70_7 = eax_12
        sub_604c90(0x7519cc)
        
        if (esi != 0)
            int32_t var_70_8 = esi
            sub_6b4d5b()
        
        lpMem = lpMem_1
        
        if (lpMem != 0)
            HeapFree(data_797df4, HEAP_NONE, lpMem)
        
        lpMem.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_58)
return lpMem
