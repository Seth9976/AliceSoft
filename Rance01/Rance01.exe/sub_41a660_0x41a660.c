// 函数: sub_41a660
// 地址: 0x41a660
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ebx = *(arg1 + 0x10)
int32_t* esi_1 = arg2 + 4
char var_d = ebx.b
sub_54e400(&var_d, esi_1)
arg2.b = (ebx u>> 8).b
sub_54e400(&arg2, esi_1)
arg2.b = (ebx u>> 0x10).b
sub_54e400(&arg2, esi_1)
arg2.b = (ebx u>> 0x18).b
sub_54e400(&arg2, esi_1)
int32_t ebx_2 = *(arg1 + 0x14)
arg2.b = ebx_2.b
sub_54e400(&arg2, esi_1)
arg2.b = (ebx_2 u>> 8).b
sub_54e400(&arg2, esi_1)
arg2.b = (ebx_2 u>> 0x10).b
sub_54e400(&arg2, esi_1)
arg2.b = (ebx_2 u>> 0x18).b
sub_54e400(&arg2, esi_1)
int32_t ebx_4 = *(arg1 + 0x18)
arg2.b = ebx_4.b
sub_54e400(&arg2, esi_1)
arg2.b = (ebx_4 u>> 8).b
sub_54e400(&arg2, esi_1)
arg2.b = (ebx_4 u>> 0x10).b
sub_54e400(&arg2, esi_1)
arg2.b = (ebx_4 u>> 0x18).b
sub_54e400(&arg2, esi_1)
int32_t ebx_6 = *(arg1 + 0x1c)
arg2.b = ebx_6.b
sub_54e400(&arg2, esi_1)
arg2.b = (ebx_6 u>> 8).b
sub_54e400(&arg2, esi_1)
arg2.b = (ebx_6 u>> 0x10).b
sub_54e400(&arg2, esi_1)
arg2.b = (ebx_6 u>> 0x18).b
sub_54e400(&arg2, esi_1)
int32_t ebx_8 = *(arg1 + 0x20)
arg2.b = ebx_8.b
sub_54e400(&arg2, esi_1)
arg2.b = (ebx_8 u>> 8).b
sub_54e400(&arg2, esi_1)
arg2.b = (ebx_8 u>> 0x10).b
sub_54e400(&arg2, esi_1)
arg2.b = (ebx_8 u>> 0x18).b
sub_54e400(&arg2, esi_1)
arg2.b = *(arg1 + 0x24) != 0
sub_54e400(&arg2, esi_1)
int32_t ebx_12 = (*(arg1 + 0x2c) - *(arg1 + 0x28)) s>> 2
arg2.b = ebx_12.b
sub_54e400(&arg2, esi_1)
arg2.b = (ebx_12 u>> 8).b
sub_54e400(&arg2, esi_1)
arg2.b = (ebx_12 u>> 0x10).b
sub_54e400(&arg2, esi_1)
arg2.b = (ebx_12 u>> 0x18).b
sub_54e400(&arg2, esi_1)
int32_t* eax_35 = *(arg1 + 0x28)
int32_t* var_c = eax_35

if (eax_35 == *(arg1 + 0x2c))
    eax_35.b = 1
    return eax_35

void* eax_65

while (true)
    int32_t ebx_14 = *eax_35
    int32_t eax_36 = esi_1[1]
    arg2.b = ebx_14.b
    int32_t edx_8
    
    if (&arg2 u< eax_36)
        edx_8 = *esi_1
    
    if (&arg2 u>= eax_36 || edx_8 u> &arg2)
        int32_t ecx_9 = esi_1[2]
        
        if (eax_36 != ecx_9)
        label_41a8f3:
            char* eax_42 = esi_1[1]
            
            if (eax_42 != 0)
                *eax_42 = ebx_14.b
            
            esi_1[1] += 1
        label_41a904:
            int32_t eax_43 = esi_1[1]
            uint8_t ebx_15 = (ebx_14 u>> 8).b
            arg2.b = ebx_15
            int32_t edx_15
            
            if (&arg2 u< eax_43)
                edx_15 = *esi_1
            
            if (&arg2 u>= eax_43 || edx_15 u> &arg2)
                int32_t ecx_14 = esi_1[2]
                
                if (eax_43 != ecx_14)
                label_41a9a8:
                    uint8_t* eax_49 = esi_1[1]
                    
                    if (eax_49 != 0)
                        *eax_49 = ebx_15
                    
                label_41a9b1:
                    esi_1[1] += 1
                    int32_t eax_50 = esi_1[1]
                    uint8_t ebx_18 = (ebx_14 u>> 0x10).b
                    arg2.b = ebx_18
                    int32_t edx_22
                    
                    if (&arg2 u< eax_50)
                        edx_22 = *esi_1
                    
                    if (&arg2 u>= eax_50 || edx_22 u> &arg2)
                        int32_t ecx_19 = esi_1[2]
                        
                        if (eax_50 != ecx_19)
                        label_41aa5c:
                            uint8_t* eax_56 = esi_1[1]
                            
                            if (eax_56 != 0)
                                *eax_56 = ebx_18
                            
                        label_41aa65:
                            esi_1[1] += 1
                            int32_t eax_57 = esi_1[1]
                            uint8_t ebx_21 = (ebx_14 u>> 0x18).b
                            arg2.b = ebx_21
                            int32_t edx_29
                            
                            if (&arg2 u< eax_57)
                                edx_29 = *esi_1
                            
                            if (&arg2 u>= eax_57 || edx_29 u> &arg2)
                                int32_t ecx_24 = esi_1[2]
                                
                                if (eax_57 != ecx_24)
                                label_41ab0c:
                                    uint8_t* eax_63 = esi_1[1]
                                    
                                    if (eax_63 != 0)
                                        *eax_63 = ebx_21
                                    
                                label_41ab1d:
                                    esi_1[1] += 1
                                    eax_65 = &var_c[1]
                                    var_c = eax_65
                                    
                                    if (eax_65 == *(arg1 + 0x2c))
                                        break
                                    
                                    eax_35 = var_c
                                    continue
                                else
                                    int32_t edx_33 = *esi_1
                                    int32_t eax_61 = eax_57 - edx_33
                                    
                                    if (eax_61 u<= 0xfffffffe)
                                        int32_t ecx_25 = ecx_24 - edx_33
                                        
                                        if (eax_61 + 1 u> ecx_25)
                                            uint32_t edx_35 = ecx_25 u>> 1
                                            int32_t ecx_26
                                            
                                            if (0xffffffff - edx_35 u>= ecx_25)
                                                ecx_26 = ecx_25 + edx_35
                                            else
                                                ecx_26 = 0
                                            
                                            if (ecx_26 u< eax_61 + 1)
                                                ecx_26 = eax_61 + 1
                                            
                                            sub_424860(esi_1, ecx_26)
                                        
                                        goto label_41ab0c
                            else
                                int32_t ecx_22 = esi_1[2]
                                
                                if (eax_57 != ecx_22)
                                label_41aac5:
                                    char* eax_60 = esi_1[1]
                                    
                                    if (eax_60 != 0)
                                        ecx_22.b = *(&arg2 - edx_29 + *esi_1)
                                        *eax_60 = ecx_22.b
                                    
                                    goto label_41ab1d
                                
                                int32_t eax_58 = eax_57 - edx_29
                                
                                if (eax_58 u<= 0xfffffffe)
                                    ecx_22 -= edx_29
                                    
                                    if (eax_58 + 1 u> ecx_22)
                                        uint32_t edx_31 = ecx_22 u>> 1
                                        int32_t ecx_23
                                        
                                        if (0xffffffff - edx_31 u>= ecx_22)
                                            ecx_23 = ecx_22 + edx_31
                                        else
                                            ecx_23 = 0
                                        
                                        if (ecx_23 u< eax_58 + 1)
                                            ecx_23 = eax_58 + 1
                                        
                                        sub_424860(esi_1, ecx_23)
                                    
                                    goto label_41aac5
                        else
                            int32_t edx_26 = *esi_1
                            int32_t eax_54 = eax_50 - edx_26
                            
                            if (eax_54 u<= 0xfffffffe)
                                int32_t ecx_20 = ecx_19 - edx_26
                                
                                if (eax_54 + 1 u> ecx_20)
                                    uint32_t edx_28 = ecx_20 u>> 1
                                    int32_t ecx_21
                                    
                                    if (0xffffffff - edx_28 u>= ecx_20)
                                        ecx_21 = ecx_20 + edx_28
                                    else
                                        ecx_21 = 0
                                    
                                    if (ecx_21 u< eax_54 + 1)
                                        ecx_21 = eax_54 + 1
                                    
                                    sub_424860(esi_1, ecx_21)
                                
                                goto label_41aa5c
                    else
                        int32_t ecx_17 = esi_1[2]
                        
                        if (eax_50 != ecx_17)
                        label_41aa11:
                            char* eax_53 = esi_1[1]
                            
                            if (eax_53 != 0)
                                ecx_17.b = *(&arg2 - edx_22 + *esi_1)
                                *eax_53 = ecx_17.b
                            
                            goto label_41aa65
                        
                        int32_t eax_51 = eax_50 - edx_22
                        
                        if (eax_51 u<= 0xfffffffe)
                            ecx_17 -= edx_22
                            
                            if (eax_51 + 1 u> ecx_17)
                                uint32_t edx_24 = ecx_17 u>> 1
                                int32_t ecx_18
                                
                                if (0xffffffff - edx_24 u>= ecx_17)
                                    ecx_18 = ecx_17 + edx_24
                                else
                                    ecx_18 = 0
                                
                                if (ecx_18 u< eax_51 + 1)
                                    ecx_18 = eax_51 + 1
                                
                                sub_424860(esi_1, ecx_18)
                            
                            goto label_41aa11
                else
                    int32_t edx_19 = *esi_1
                    int32_t eax_47 = eax_43 - edx_19
                    
                    if (eax_47 u<= 0xfffffffe)
                        int32_t ecx_15 = ecx_14 - edx_19
                        
                        if (eax_47 + 1 u> ecx_15)
                            uint32_t edx_21 = ecx_15 u>> 1
                            int32_t ecx_16
                            
                            if (0xffffffff - edx_21 u>= ecx_15)
                                ecx_16 = ecx_15 + edx_21
                            else
                                ecx_16 = 0
                            
                            if (ecx_16 u< eax_47 + 1)
                                ecx_16 = eax_47 + 1
                            
                            sub_424860(esi_1, ecx_16)
                        
                        goto label_41a9a8
            else
                int32_t ecx_12 = esi_1[2]
                
                if (eax_43 != ecx_12)
                label_41a95d:
                    char* eax_46 = esi_1[1]
                    
                    if (eax_46 != 0)
                        ecx_12.b = *(&arg2 - edx_15 + *esi_1)
                        *eax_46 = ecx_12.b
                    
                    goto label_41a9b1
                
                int32_t eax_44 = eax_43 - edx_15
                
                if (eax_44 u<= 0xfffffffe)
                    ecx_12 -= edx_15
                    
                    if (eax_44 + 1 u> ecx_12)
                        uint32_t edx_17 = ecx_12 u>> 1
                        int32_t ecx_13
                        
                        if (0xffffffff - edx_17 u>= ecx_12)
                            ecx_13 = ecx_12 + edx_17
                        else
                            ecx_13 = 0
                        
                        if (ecx_13 u< eax_44 + 1)
                            ecx_13 = eax_44 + 1
                        
                        sub_424860(esi_1, ecx_13)
                    
                    goto label_41a95d
        else
            int32_t edx_12 = *esi_1
            int32_t eax_40 = eax_36 - edx_12
            
            if (eax_40 u<= 0xfffffffe)
                int32_t ecx_10 = ecx_9 - edx_12
                
                if (eax_40 + 1 u> ecx_10)
                    uint32_t edx_14 = ecx_10 u>> 1
                    int32_t ecx_11
                    
                    if (0xffffffff - edx_14 u>= ecx_10)
                        ecx_11 = ecx_10 + edx_14
                    else
                        ecx_11 = 0
                    
                    if (ecx_11 u< eax_40 + 1)
                        ecx_11 = eax_40 + 1
                    
                    sub_424860(esi_1, ecx_11)
                
                goto label_41a8f3
    else
        int32_t ecx_7 = esi_1[2]
        
        if (eax_36 != ecx_7)
        label_41a8a6:
            char* eax_39 = esi_1[1]
            
            if (eax_39 != 0)
                ecx_7.b = *(&arg2 - edx_8 + *esi_1)
                *eax_39 = ecx_7.b
            
            esi_1[1] += 1
            goto label_41a904
        
        int32_t eax_37 = eax_36 - edx_8
        
        if (eax_37 u<= 0xfffffffe)
            ecx_7 -= edx_8
            
            if (eax_37 + 1 u> ecx_7)
                uint32_t edx_10 = ecx_7 u>> 1
                int32_t ecx_8
                
                if (0xffffffff - edx_10 u>= ecx_7)
                    ecx_8 = ecx_7 + edx_10
                else
                    ecx_8 = 0
                
                if (ecx_8 u< eax_37 + 1)
                    ecx_8 = eax_37 + 1
                
                sub_424860(esi_1, ecx_8)
            
            goto label_41a8a6
    
    sub_6b47bf("vector<T> too long")
    noreturn

eax_65.b = 1
return eax_65
