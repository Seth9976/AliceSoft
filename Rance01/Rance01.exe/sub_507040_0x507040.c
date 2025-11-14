// 函数: sub_507040
// 地址: 0x507040
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ebx_2 = (arg2[1] - *arg2) s>> 2
uint8_t var_9 = ebx_2.b
sub_54e400(&var_9, arg1 + 4)
var_9 = (ebx_2 u>> 8).b
sub_54e400(&var_9, arg1 + 4)
var_9 = (ebx_2 u>> 0x10).b
sub_54e400(&var_9, arg1 + 4)
var_9 = (ebx_2 u>> 0x18).b
sub_54e400(&var_9, arg1 + 4)
float* result = *arg2
float* result_1 = result

if (result != arg2[1])
    while (true)
        int32_t eax_6 = *(arg1 + 8)
        float var_8_1 = fconvert.s(fconvert.t(*result))
        var_9 = var_8_1.b
        int32_t edx_1
        
        if (&var_9 u< eax_6)
            edx_1 = *(arg1 + 4)
        
        if (&var_9 u>= eax_6 || edx_1 u> &var_9)
            int32_t ecx_4 = *(arg1 + 0xc)
            
            if (eax_6 != ecx_4)
            label_507164:
                char* eax_12 = *(arg1 + 8)
                
                if (eax_12 != 0)
                    *eax_12 = var_8_1.b
                
            label_50716d:
                *(arg1 + 8) += 1
                int32_t eax_13 = *(arg1 + 8)
                uint8_t ebx_5 = (var_8_1 u>> 8).b
                var_9 = ebx_5
                int32_t edx_8
                
                if (&var_9 u< eax_13)
                    edx_8 = *(arg1 + 4)
                
                if (&var_9 u>= eax_13 || edx_8 u> &var_9)
                    int32_t ecx_9 = *(arg1 + 0xc)
                    
                    if (eax_13 != ecx_9)
                    label_507214:
                        uint8_t* eax_19 = *(arg1 + 8)
                        
                        if (eax_19 != 0)
                            *eax_19 = ebx_5
                        
                    label_50721d:
                        *(arg1 + 8) += 1
                        int32_t eax_20 = *(arg1 + 8)
                        uint8_t ebx_8 = (var_8_1 u>> 0x10).b
                        var_9 = ebx_8
                        int32_t edx_15
                        
                        if (&var_9 u< eax_20)
                            edx_15 = *(arg1 + 4)
                        
                        if (&var_9 u>= eax_20 || edx_15 u> &var_9)
                            int32_t ecx_14 = *(arg1 + 0xc)
                            
                            if (eax_20 != ecx_14)
                            label_5072c8:
                                uint8_t* eax_26 = *(arg1 + 8)
                                
                                if (eax_26 != 0)
                                    *eax_26 = ebx_8
                                
                            label_5072d1:
                                *(arg1 + 8) += 1
                                int32_t eax_27 = *(arg1 + 8)
                                uint8_t ebx_11 = (var_8_1 u>> 0x18).b
                                var_9 = ebx_11
                                int32_t edx_22
                                
                                if (&var_9 u< eax_27)
                                    edx_22 = *(arg1 + 4)
                                
                                if (&var_9 u>= eax_27 || edx_22 u> &var_9)
                                    int32_t ecx_19 = *(arg1 + 0xc)
                                    
                                    if (eax_27 != ecx_19)
                                    label_507378:
                                        uint8_t* eax_33 = *(arg1 + 8)
                                        
                                        if (eax_33 != 0)
                                            *eax_33 = ebx_11
                                        
                                    label_507389:
                                        *(arg1 + 8) += 1
                                        result = &result_1[1]
                                        result_1 = result
                                        
                                        if (result == arg2[1])
                                            break
                                        
                                        result = result_1
                                        continue
                                    else
                                        int32_t edx_26 = *(arg1 + 4)
                                        int32_t eax_31 = eax_27 - edx_26
                                        
                                        if (eax_31 u<= 0xfffffffe)
                                            int32_t ecx_20 = ecx_19 - edx_26
                                            
                                            if (eax_31 + 1 u> ecx_20)
                                                uint32_t edx_28 = ecx_20 u>> 1
                                                uint32_t ecx_21
                                                
                                                if (0xffffffff - edx_28 u>= ecx_20)
                                                    ecx_21 = ecx_20 + edx_28
                                                else
                                                    ecx_21 = 0
                                                
                                                if (ecx_21 u< eax_31 + 1)
                                                    ecx_21 = eax_31 + 1
                                                
                                                sub_424860(arg1 + 4, ecx_21)
                                            
                                            goto label_507378
                                else
                                    int32_t ecx_17 = *(arg1 + 0xc)
                                    
                                    if (eax_27 != ecx_17)
                                    label_507331:
                                        char* eax_30 = *(arg1 + 8)
                                        
                                        if (eax_30 != 0)
                                            ecx_17.b = *(&var_9 - edx_22 + *(arg1 + 4))
                                            *eax_30 = ecx_17.b
                                        
                                        goto label_507389
                                    
                                    int32_t eax_28 = eax_27 - edx_22
                                    
                                    if (eax_28 u<= 0xfffffffe)
                                        ecx_17 -= edx_22
                                        
                                        if (eax_28 + 1 u> ecx_17)
                                            uint32_t edx_24 = ecx_17 u>> 1
                                            uint32_t ecx_18
                                            
                                            if (0xffffffff - edx_24 u>= ecx_17)
                                                ecx_18 = ecx_17 + edx_24
                                            else
                                                ecx_18 = 0
                                            
                                            if (ecx_18 u< eax_28 + 1)
                                                ecx_18 = eax_28 + 1
                                            
                                            sub_424860(arg1 + 4, ecx_18)
                                        
                                        goto label_507331
                            else
                                int32_t edx_19 = *(arg1 + 4)
                                int32_t eax_24 = eax_20 - edx_19
                                
                                if (eax_24 u<= 0xfffffffe)
                                    int32_t ecx_15 = ecx_14 - edx_19
                                    
                                    if (eax_24 + 1 u> ecx_15)
                                        uint32_t edx_21 = ecx_15 u>> 1
                                        uint32_t ecx_16
                                        
                                        if (0xffffffff - edx_21 u>= ecx_15)
                                            ecx_16 = ecx_15 + edx_21
                                        else
                                            ecx_16 = 0
                                        
                                        if (ecx_16 u< eax_24 + 1)
                                            ecx_16 = eax_24 + 1
                                        
                                        sub_424860(arg1 + 4, ecx_16)
                                    
                                    goto label_5072c8
                        else
                            int32_t ecx_12 = *(arg1 + 0xc)
                            
                            if (eax_20 != ecx_12)
                            label_50727d:
                                char* eax_23 = *(arg1 + 8)
                                
                                if (eax_23 != 0)
                                    ecx_12.b = *(&var_9 - edx_15 + *(arg1 + 4))
                                    *eax_23 = ecx_12.b
                                
                                goto label_5072d1
                            
                            int32_t eax_21 = eax_20 - edx_15
                            
                            if (eax_21 u<= 0xfffffffe)
                                ecx_12 -= edx_15
                                
                                if (eax_21 + 1 u> ecx_12)
                                    uint32_t edx_17 = ecx_12 u>> 1
                                    uint32_t ecx_13
                                    
                                    if (0xffffffff - edx_17 u>= ecx_12)
                                        ecx_13 = ecx_12 + edx_17
                                    else
                                        ecx_13 = 0
                                    
                                    if (ecx_13 u< eax_21 + 1)
                                        ecx_13 = eax_21 + 1
                                    
                                    sub_424860(arg1 + 4, ecx_13)
                                
                                goto label_50727d
                    else
                        int32_t edx_12 = *(arg1 + 4)
                        int32_t eax_17 = eax_13 - edx_12
                        
                        if (eax_17 u<= 0xfffffffe)
                            int32_t ecx_10 = ecx_9 - edx_12
                            
                            if (eax_17 + 1 u> ecx_10)
                                uint32_t edx_14 = ecx_10 u>> 1
                                uint32_t ecx_11
                                
                                if (0xffffffff - edx_14 u>= ecx_10)
                                    ecx_11 = ecx_10 + edx_14
                                else
                                    ecx_11 = 0
                                
                                if (ecx_11 u< eax_17 + 1)
                                    ecx_11 = eax_17 + 1
                                
                                sub_424860(arg1 + 4, ecx_11)
                            
                            goto label_507214
                else
                    int32_t ecx_7 = *(arg1 + 0xc)
                    
                    if (eax_13 != ecx_7)
                    label_5071c9:
                        char* eax_16 = *(arg1 + 8)
                        
                        if (eax_16 != 0)
                            ecx_7.b = *(&var_9 - edx_8 + *(arg1 + 4))
                            *eax_16 = ecx_7.b
                        
                        goto label_50721d
                    
                    int32_t eax_14 = eax_13 - edx_8
                    
                    if (eax_14 u<= 0xfffffffe)
                        ecx_7 -= edx_8
                        
                        if (eax_14 + 1 u> ecx_7)
                            uint32_t edx_10 = ecx_7 u>> 1
                            uint32_t ecx_8
                            
                            if (0xffffffff - edx_10 u>= ecx_7)
                                ecx_8 = ecx_7 + edx_10
                            else
                                ecx_8 = 0
                            
                            if (ecx_8 u< eax_14 + 1)
                                ecx_8 = eax_14 + 1
                            
                            sub_424860(arg1 + 4, ecx_8)
                        
                        goto label_5071c9
            else
                int32_t edx_5 = *(arg1 + 4)
                int32_t eax_10 = eax_6 - edx_5
                
                if (eax_10 u<= 0xfffffffe)
                    int32_t ecx_5 = ecx_4 - edx_5
                    
                    if (eax_10 + 1 u> ecx_5)
                        uint32_t edx_7 = ecx_5 u>> 1
                        uint32_t ecx_6
                        
                        if (0xffffffff - edx_7 u>= ecx_5)
                            ecx_6 = ecx_5 + edx_7
                        else
                            ecx_6 = 0
                        
                        if (ecx_6 u< eax_10 + 1)
                            ecx_6 = eax_10 + 1
                        
                        sub_424860(arg1 + 4, ecx_6)
                    
                    goto label_507164
        else
            int32_t ecx_2 = *(arg1 + 0xc)
            
            if (eax_6 != ecx_2)
            label_507119:
                char* eax_9 = *(arg1 + 8)
                
                if (eax_9 != 0)
                    ecx_2.b = *(&var_9 - edx_1 + *(arg1 + 4))
                    *eax_9 = ecx_2.b
                
                goto label_50716d
            
            int32_t eax_7 = eax_6 - edx_1
            
            if (eax_7 u<= 0xfffffffe)
                ecx_2 -= edx_1
                
                if (eax_7 + 1 u> ecx_2)
                    uint32_t edx_3 = ecx_2 u>> 1
                    uint32_t ecx_3
                    
                    if (0xffffffff - edx_3 u>= ecx_2)
                        ecx_3 = ecx_2 + edx_3
                    else
                        ecx_3 = 0
                    
                    if (ecx_3 u< eax_7 + 1)
                        ecx_3 = eax_7 + 1
                    
                    sub_424860(arg1 + 4, ecx_3)
                
                goto label_507119
        
        sub_6b47bf("vector<T> too long")
        noreturn

return result
