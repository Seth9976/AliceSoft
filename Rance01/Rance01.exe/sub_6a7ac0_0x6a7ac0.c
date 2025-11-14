// 函数: sub_6a7ac0
// 地址: 0x6a7ac0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* const esi = arg1
int32_t var_10 = *(esi + 0xc)

while (true)
    int32_t edi_1 = var_10
    int32_t eax_1 = sub_5d6740(edi_1)
    int32_t ebp_1 = *(arg1 + 0x14)
    int32_t* ebx_1 = *(esi + 0x10)
    int32_t var_c_1 = eax_1
    int32_t var_4_1 = ebp_1
    
    if (ebx_1 != ebp_1)
        do
            if (edi_1 == *ebx_1)
                int32_t eax_2 = *(esi + 0x14)
                int32_t var_8 = 0
                int32_t edx_1
                
                if (&var_8 u< eax_2)
                    edx_1 = *(esi + 0x10)
                
                if (&var_8 u>= eax_2 || edx_1 u> &var_8)
                    int32_t ecx_7 = *(esi + 0x18)
                    
                    if (eax_2 == ecx_7)
                        int32_t edx_5 = *(esi + 0x10)
                        int32_t eax_8 = (eax_2 - edx_5) s>> 2
                        
                        if (eax_8 u> 0x3ffffffe)
                            goto label_6a7d1a
                        
                        int32_t ecx_9 = (ecx_7 - edx_5) s>> 2
                        
                        if (eax_8 + 1 u> ecx_9)
                            uint32_t edx_7 = ecx_9 u>> 1
                            int32_t ecx_10
                            
                            if (0x3fffffff - edx_7 u>= ecx_9)
                                ecx_10 = ecx_9 + edx_7
                            else
                                ecx_10 = 0
                            
                            if (ecx_10 u< eax_8 + 1)
                                ecx_10 = eax_8 + 1
                            
                            sub_6b0560(esi + 0x10, ecx_10)
                    
                    int32_t* eax_10 = *(esi + 0x14)
                    
                    if (eax_10 != 0)
                        *eax_10 = 0
                else
                    int32_t ecx_2 = *(esi + 0x18)
                    
                    if (eax_2 == ecx_2)
                        int32_t eax_4 = (eax_2 - edx_1) s>> 2
                        
                        if (eax_4 u> 0x3ffffffe)
                            goto label_6a7d1a
                        
                        int32_t ecx_4 = (ecx_2 - edx_1) s>> 2
                        
                        if (eax_4 + 1 u> ecx_4)
                            uint32_t edx_3 = ecx_4 u>> 1
                            int32_t ecx_5
                            
                            if (0x3fffffff - edx_3 u>= ecx_4)
                                ecx_5 = ecx_4 + edx_3
                            else
                                ecx_5 = 0
                            
                            if (ecx_5 u< eax_4 + 1)
                                ecx_5 = eax_4 + 1
                            
                            sub_6b0560(esi + 0x10, ecx_5)
                            ebp_1 = var_4_1
                    
                    int32_t* eax_6 = *(esi + 0x14)
                    
                    if (eax_6 != 0)
                        *eax_6 = *(*(esi + 0x10) + ((&var_8 - edx_1) s>> 2 << 2))
                
                *(esi + 0x14) += 4
            
            edi_1 = var_10
            ebx_1 = &ebx_1[1]
        while (ebx_1 != ebp_1)
        
        eax_1 = var_c_1
    
    if (edi_1 == 0)
        if (eax_1 != 0xffffffff)
            break
        
        edi_1 = var_10
        goto label_6a7cea
    
    if (eax_1 == 0xffffffff)
    label_6a7cea:
        int32_t eax_21 = *(esi + 0x14)
        int32_t edx_17
        
        if (&var_10 u< eax_21)
            edx_17 = *(esi + 0x10)
        
        if (&var_10 u>= eax_21 || edx_17 u> &var_10)
            int32_t ecx_26 = *(esi + 0x18)
            
            if (eax_21 == ecx_26)
                int32_t edx_21 = *(esi + 0x10)
                int32_t eax_27 = (eax_21 - edx_21) s>> 2
                
                if (eax_27 u> 0x3ffffffe)
                    sub_6b47bf("vector<T> too long")
                    noreturn
                
                int32_t ecx_28 = (ecx_26 - edx_21) s>> 2
                
                if (eax_27 + 1 u> ecx_28)
                    uint32_t edx_23 = ecx_28 u>> 1
                    int32_t ecx_29
                    
                    if (0x3fffffff - edx_23 u>= ecx_28)
                        ecx_29 = ecx_28 + edx_23
                    else
                        ecx_29 = 0
                    
                    if (ecx_29 u< eax_27 + 1)
                        ecx_29 = eax_27 + 1
                    
                    sub_6b0560(esi + 0x10, ecx_29)
            
            int32_t* eax_29 = *(esi + 0x14)
            
            if (eax_29 != 0)
                *eax_29 = edi_1
            
            *(esi + 0x14) += 4
            break
        
        int32_t ecx_21 = *(esi + 0x18)
        
        if (eax_21 != ecx_21)
        label_6a7d4a:
            int32_t* eax_25 = *(esi + 0x14)
            
            if (eax_25 != 0)
                *eax_25 = *(*(esi + 0x10) + ((&var_10 - edx_17) s>> 2 << 2))
            
            *(esi + 0x14) += 4
            break
        
        int32_t eax_23 = (eax_21 - edx_17) s>> 2
        
        if (eax_23 u<= 0x3ffffffe)
            int32_t ecx_23 = (ecx_21 - edx_17) s>> 2
            
            if (eax_23 + 1 u> ecx_23)
                uint32_t edx_19 = ecx_23 u>> 1
                int32_t ecx_24
                
                if (0x3fffffff - edx_19 u>= ecx_23)
                    ecx_24 = ecx_23 + edx_19
                else
                    ecx_24 = 0
                
                if (ecx_24 u< eax_23 + 1)
                    ecx_24 = eax_23 + 1
                
                sub_6b0560(esi + 0x10, ecx_24)
            
            goto label_6a7d4a
    else
        int32_t eax_11 = *(esi + 0x14)
        int32_t edx_8
        
        if (&var_10 u< eax_11)
            edx_8 = *(esi + 0x10)
        
        if (&var_10 u>= eax_11 || edx_8 u> &var_10)
            int32_t ecx_16 = *(esi + 0x18)
            
            if (eax_11 != ecx_16)
            label_6a7ca5:
                int32_t* eax_19 = *(esi + 0x14)
                
                if (eax_19 != 0)
                    *eax_19 = edi_1
                
            label_6a7cae:
                void* const eax_20 = arg1
                *(esi + 0x14) += 4
                bool cond:0_1 = *(eax_20 + 0xc) s<= 5
                var_10 = var_c_1
                
                if (cond:0_1)
                    continue
                else if (var_c_1 s> 5)
                    continue
                else
                    *(eax_20 + 0xc) = var_c_1
                    continue
            else
                int32_t edx_12 = *(esi + 0x10)
                int32_t eax_17 = (eax_11 - edx_12) s>> 2
                
                if (eax_17 u<= 0x3ffffffe)
                    int32_t ecx_18 = (ecx_16 - edx_12) s>> 2
                    
                    if (eax_17 + 1 u> ecx_18)
                        uint32_t edx_14 = ecx_18 u>> 1
                        int32_t ecx_19
                        
                        if (0x3fffffff - edx_14 u>= ecx_18)
                            ecx_19 = ecx_18 + edx_14
                        else
                            ecx_19 = 0
                        
                        if (ecx_19 u< eax_17 + 1)
                            ecx_19 = eax_17 + 1
                        
                        sub_6b0560(esi + 0x10, ecx_19)
                    
                    goto label_6a7ca5
        else
            int32_t ecx_11 = *(esi + 0x18)
            
            if (eax_11 != ecx_11)
            label_6a7c51:
                int32_t* eax_15 = *(esi + 0x14)
                
                if (eax_15 != 0)
                    *eax_15 = *(*(esi + 0x10) + ((&var_10 - edx_8) s>> 2 << 2))
                
                goto label_6a7cae
            
            int32_t eax_13 = (eax_11 - edx_8) s>> 2
            
            if (eax_13 u<= 0x3ffffffe)
                int32_t ecx_13 = (ecx_11 - edx_8) s>> 2
                
                if (eax_13 + 1 u> ecx_13)
                    uint32_t edx_10 = ecx_13 u>> 1
                    int32_t ecx_14
                    
                    if (0x3fffffff - edx_10 u>= ecx_13)
                        ecx_14 = ecx_13 + edx_10
                    else
                        ecx_14 = 0
                    
                    if (ecx_14 u< eax_13 + 1)
                        ecx_14 = eax_13 + 1
                    
                    sub_6b0560(esi + 0x10, ecx_14)
                
                goto label_6a7c51
    
label_6a7d1a:
    sub_6b47bf("vector<T> too long")
    noreturn

int32_t eax_30 = *(esi + 0x14)
arg1 = nullptr
int32_t edx_24

if (&arg1 u< eax_30)
    edx_24 = *(esi + 0x10)

int32_t* result

if (&arg1 u>= eax_30 || edx_24 u> &arg1)
    int32_t ecx_35 = *(esi + 0x18)
    
    if (eax_30 == ecx_35)
        int32_t edx_28 = *(esi + 0x10)
        int32_t eax_35 = (eax_30 - edx_28) s>> 2
        
        if (eax_35 u> 0x3ffffffe)
            sub_6b47bf("vector<T> too long")
            noreturn
        
        int32_t ecx_37 = (ecx_35 - edx_28) s>> 2
        
        if (eax_35 + 1 u> ecx_37)
            uint32_t edx_30 = ecx_37 u>> 1
            int32_t ecx_38
            
            if (0x3fffffff - edx_30 u>= ecx_37)
                ecx_38 = ecx_37 + edx_30
            else
                ecx_38 = 0
            
            if (ecx_38 u< eax_35 + 1)
                ecx_38 = eax_35 + 1
            
            sub_6b0560(esi + 0x10, ecx_38)
    
    result = *(esi + 0x14)
    
    if (result != 0)
        *result = 0
else
    int32_t ecx_30 = *(esi + 0x18)
    
    if (eax_30 == ecx_30)
        int32_t eax_32 = (eax_30 - edx_24) s>> 2
        
        if (eax_32 u> 0x3ffffffe)
            sub_6b47bf("vector<T> too long")
            noreturn
        
        int32_t ecx_32 = (ecx_30 - edx_24) s>> 2
        
        if (eax_32 + 1 u> ecx_32)
            uint32_t edx_26 = ecx_32 u>> 1
            int32_t ecx_33
            
            if (0x3fffffff - edx_26 u>= ecx_32)
                ecx_33 = ecx_32 + edx_26
            else
                ecx_33 = 0
            
            if (ecx_33 u< eax_32 + 1)
                ecx_33 = eax_32 + 1
            
            sub_6b0560(esi + 0x10, ecx_33)
    
    result = *(esi + 0x14)
    
    if (result != 0)
        *result = *(*(esi + 0x10) + ((&arg1 - edx_24) s>> 2 << 2))
        *(esi + 0x14) += 4
        return result

*(esi + 0x14) += 4
return result
