// 函数: sub_5f58d0
// 地址: 0x5f58d0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

char eax = sub_433a10(arg1[3], arg2)

if (eax == 0)
    return eax

sub_5ee180(&arg1[0x15], arg2)
sub_5ec050(&arg1[0x19], arg2)
sub_5ec050(&arg1[0x1d], arg2)
sub_5ec050(&arg1[0x21], arg2)
sub_5ec050(&arg1[0x25], arg2)
sub_5ee180(&arg1[0x29], arg2)
sub_4101f0(arg2, arg1[0x13])
sub_4101f0(arg2, arg1[0x14])
sub_4101f0(arg2, 4)
int32_t* eax_7 = arg1[0x2d]
void* var_8 = eax_7

if (eax_7 != arg1[0x2e])
    while (true)
        int32_t eax_9 = (*(**eax_7 + 8))()
        int32_t eax_10 = *(arg2 i+ 8)
        uint8_t var_9 = eax_9.b
        int32_t edx_3
        
        if (&var_9 u< eax_10)
            edx_3 = *(arg2 i+ 4)
        
        if (&var_9 u>= eax_10 || edx_3 u> &var_9)
            int32_t ecx_6 = *(arg2 i+ 0xc)
            
            if (eax_10 != ecx_6)
            label_5f5a30:
                char* eax_16 = *(arg2 i+ 8)
                
                if (eax_16 != 0)
                    *eax_16 = eax_9.b
                
                *(arg2 i+ 8) += 1
            label_5f5a41:
                int32_t eax_17 = *(arg2 i+ 8)
                uint8_t ebx_2 = (eax_9 u>> 8).b
                var_9 = ebx_2
                int32_t edx_10
                
                if (&var_9 u< eax_17)
                    edx_10 = *(arg2 i+ 4)
                
                if (&var_9 u>= eax_17 || edx_10 u> &var_9)
                    int32_t ecx_11 = *(arg2 i+ 0xc)
                    
                    if (eax_17 != ecx_11)
                    label_5f5ae5:
                        uint8_t* eax_23 = *(arg2 i+ 8)
                        
                        if (eax_23 != 0)
                            *eax_23 = ebx_2
                        
                    label_5f5aee:
                        *(arg2 i+ 8) += 1
                        int32_t eax_24 = *(arg2 i+ 8)
                        uint8_t ebx_5 = (eax_9 u>> 0x10).b
                        var_9 = ebx_5
                        int32_t edx_17
                        
                        if (&var_9 u< eax_24)
                            edx_17 = *(arg2 i+ 4)
                        
                        if (&var_9 u>= eax_24 || edx_17 u> &var_9)
                            int32_t ecx_16 = *(arg2 i+ 0xc)
                            
                            if (eax_24 != ecx_16)
                            label_5f5b99:
                                uint8_t* eax_30 = *(arg2 i+ 8)
                                
                                if (eax_30 != 0)
                                    *eax_30 = ebx_5
                                
                            label_5f5ba2:
                                *(arg2 i+ 8) += 1
                                int32_t eax_31 = *(arg2 i+ 8)
                                uint8_t ebx_8 = (eax_9 u>> 0x18).b
                                var_9 = ebx_8
                                int32_t edx_24
                                
                                if (&var_9 u< eax_31)
                                    edx_24 = *(arg2 i+ 4)
                                
                                if (&var_9 u>= eax_31 || edx_24 u> &var_9)
                                    int32_t ecx_21 = *(arg2 i+ 0xc)
                                    
                                    if (eax_31 != ecx_21)
                                    label_5f5c49:
                                        uint8_t* eax_37 = *(arg2 i+ 8)
                                        
                                        if (eax_37 != 0)
                                            *eax_37 = ebx_8
                                        
                                    label_5f5c52:
                                        *(arg2 i+ 8) += 1
                                        int32_t* edi_9 = var_8
                                        
                                        if ((*(**edi_9 + 0x64))(arg2) == 0)
                                            return 0
                                        
                                        var_8 = &edi_9[1]
                                        
                                        if (&edi_9[1] == arg1[0x2e])
                                            break
                                        
                                        eax_7 = var_8
                                        continue
                                    else
                                        int32_t edx_28 = *(arg2 i+ 4)
                                        int32_t eax_35 = eax_31 - edx_28
                                        
                                        if (eax_35 u<= 0xfffffffe)
                                            int32_t ecx_22 = ecx_21 - edx_28
                                            
                                            if (eax_35 + 1 u> ecx_22)
                                                uint32_t edx_30 = ecx_22 u>> 1
                                                uint32_t ecx_23
                                                
                                                if (0xffffffff - edx_30 u>= ecx_22)
                                                    ecx_23 = ecx_22 + edx_30
                                                else
                                                    ecx_23 = 0
                                                
                                                if (ecx_23 u< eax_35 + 1)
                                                    ecx_23 = eax_35 + 1
                                                
                                                sub_424860(arg2 i+ 4, ecx_23)
                                            
                                            goto label_5f5c49
                                else
                                    int32_t ecx_19 = *(arg2 i+ 0xc)
                                    
                                    if (eax_31 != ecx_19)
                                    label_5f5c02:
                                        char* eax_34 = *(arg2 i+ 8)
                                        
                                        if (eax_34 != 0)
                                            ecx_19.b = *(&var_9 - edx_24 + *(arg2 i+ 4))
                                            *eax_34 = ecx_19.b
                                        
                                        goto label_5f5c52
                                    
                                    int32_t eax_32 = eax_31 - edx_24
                                    
                                    if (eax_32 u<= 0xfffffffe)
                                        ecx_19 -= edx_24
                                        
                                        if (eax_32 + 1 u> ecx_19)
                                            uint32_t edx_26 = ecx_19 u>> 1
                                            uint32_t ecx_20
                                            
                                            if (0xffffffff - edx_26 u>= ecx_19)
                                                ecx_20 = ecx_19 + edx_26
                                            else
                                                ecx_20 = 0
                                            
                                            if (ecx_20 u< eax_32 + 1)
                                                ecx_20 = eax_32 + 1
                                            
                                            sub_424860(arg2 i+ 4, ecx_20)
                                        
                                        goto label_5f5c02
                            else
                                int32_t edx_21 = *(arg2 i+ 4)
                                int32_t eax_28 = eax_24 - edx_21
                                
                                if (eax_28 u<= 0xfffffffe)
                                    int32_t ecx_17 = ecx_16 - edx_21
                                    
                                    if (eax_28 + 1 u> ecx_17)
                                        uint32_t edx_23 = ecx_17 u>> 1
                                        uint32_t ecx_18
                                        
                                        if (0xffffffff - edx_23 u>= ecx_17)
                                            ecx_18 = ecx_17 + edx_23
                                        else
                                            ecx_18 = 0
                                        
                                        if (ecx_18 u< eax_28 + 1)
                                            ecx_18 = eax_28 + 1
                                        
                                        sub_424860(arg2 i+ 4, ecx_18)
                                    
                                    goto label_5f5b99
                        else
                            int32_t ecx_14 = *(arg2 i+ 0xc)
                            
                            if (eax_24 != ecx_14)
                            label_5f5b4e:
                                char* eax_27 = *(arg2 i+ 8)
                                
                                if (eax_27 != 0)
                                    ecx_14.b = *(&var_9 - edx_17 + *(arg2 i+ 4))
                                    *eax_27 = ecx_14.b
                                
                                goto label_5f5ba2
                            
                            int32_t eax_25 = eax_24 - edx_17
                            
                            if (eax_25 u<= 0xfffffffe)
                                ecx_14 -= edx_17
                                
                                if (eax_25 + 1 u> ecx_14)
                                    uint32_t edx_19 = ecx_14 u>> 1
                                    uint32_t ecx_15
                                    
                                    if (0xffffffff - edx_19 u>= ecx_14)
                                        ecx_15 = ecx_14 + edx_19
                                    else
                                        ecx_15 = 0
                                    
                                    if (ecx_15 u< eax_25 + 1)
                                        ecx_15 = eax_25 + 1
                                    
                                    sub_424860(arg2 i+ 4, ecx_15)
                                
                                goto label_5f5b4e
                    else
                        int32_t edx_14 = *(arg2 i+ 4)
                        int32_t eax_21 = eax_17 - edx_14
                        
                        if (eax_21 u<= 0xfffffffe)
                            int32_t ecx_12 = ecx_11 - edx_14
                            
                            if (eax_21 + 1 u> ecx_12)
                                uint32_t edx_16 = ecx_12 u>> 1
                                uint32_t ecx_13
                                
                                if (0xffffffff - edx_16 u>= ecx_12)
                                    ecx_13 = ecx_12 + edx_16
                                else
                                    ecx_13 = 0
                                
                                if (ecx_13 u< eax_21 + 1)
                                    ecx_13 = eax_21 + 1
                                
                                sub_424860(arg2 i+ 4, ecx_13)
                            
                            goto label_5f5ae5
                else
                    int32_t ecx_9 = *(arg2 i+ 0xc)
                    
                    if (eax_17 != ecx_9)
                    label_5f5a9a:
                        char* eax_20 = *(arg2 i+ 8)
                        
                        if (eax_20 != 0)
                            ecx_9.b = *(&var_9 - edx_10 + *(arg2 i+ 4))
                            *eax_20 = ecx_9.b
                        
                        goto label_5f5aee
                    
                    int32_t eax_18 = eax_17 - edx_10
                    
                    if (eax_18 u<= 0xfffffffe)
                        ecx_9 -= edx_10
                        
                        if (eax_18 + 1 u> ecx_9)
                            uint32_t edx_12 = ecx_9 u>> 1
                            uint32_t ecx_10
                            
                            if (0xffffffff - edx_12 u>= ecx_9)
                                ecx_10 = ecx_9 + edx_12
                            else
                                ecx_10 = 0
                            
                            if (ecx_10 u< eax_18 + 1)
                                ecx_10 = eax_18 + 1
                            
                            sub_424860(arg2 i+ 4, ecx_10)
                        
                        goto label_5f5a9a
            else
                int32_t edx_7 = *(arg2 i+ 4)
                int32_t eax_14 = eax_10 - edx_7
                
                if (eax_14 u<= 0xfffffffe)
                    int32_t ecx_7 = ecx_6 - edx_7
                    
                    if (eax_14 + 1 u> ecx_7)
                        uint32_t edx_9 = ecx_7 u>> 1
                        uint32_t ecx_8
                        
                        if (0xffffffff - edx_9 u>= ecx_7)
                            ecx_8 = ecx_7 + edx_9
                        else
                            ecx_8 = 0
                        
                        if (ecx_8 u< eax_14 + 1)
                            ecx_8 = eax_14 + 1
                        
                        sub_424860(arg2 i+ 4, ecx_8)
                    
                    goto label_5f5a30
        else
            int32_t ecx_4 = *(arg2 i+ 0xc)
            
            if (eax_10 != ecx_4)
            label_5f59e3:
                char* eax_13 = *(arg2 i+ 8)
                
                if (eax_13 != 0)
                    ecx_4.b = *(&var_9 - edx_3 + *(arg2 i+ 4))
                    *eax_13 = ecx_4.b
                
                *(arg2 i+ 8) += 1
                goto label_5f5a41
            
            int32_t eax_11 = eax_10 - edx_3
            
            if (eax_11 u<= 0xfffffffe)
                ecx_4 -= edx_3
                
                if (eax_11 + 1 u> ecx_4)
                    uint32_t edx_5 = ecx_4 u>> 1
                    uint32_t ecx_5
                    
                    if (0xffffffff - edx_5 u>= ecx_4)
                        ecx_5 = ecx_4 + edx_5
                    else
                        ecx_5 = 0
                    
                    if (ecx_5 u< eax_11 + 1)
                        ecx_5 = eax_11 + 1
                    
                    sub_424860(arg2 i+ 4, ecx_5)
                
                goto label_5f59e3
        
        sub_6b47bf("vector<T> too long")
        noreturn

eax_7.b = 1
return eax_7
