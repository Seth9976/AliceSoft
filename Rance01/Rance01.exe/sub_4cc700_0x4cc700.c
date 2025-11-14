// 函数: sub_4cc700
// 地址: 0x4cc700
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* esi = *(arg1 + 0x2c)

if (esi != 0)
    sub_51ac50(esi)
    *(arg1 + 0x2c) = 0

int32_t* esi_1 = *(arg1 + 0x28)

if (esi_1 != 0)
    sub_51ac50(esi_1)
    *(arg1 + 0x28) = 0

sub_51add0(&arg1[0x18])
*(arg1 + 0xc) = 0
*(arg1 + 0x10) = 0
*(arg1 + 0x14) = 0

if (arg3 != 0)
    int32_t* esi_2 = arg2
    *arg1 = esi_2[7].b
    float var_10
    float* eax_3 = sub_500900(esi_2, &var_10)
    *(arg1 + 4) = *eax_3
    *(arg1 + 8) = eax_3[1]
    int128_t* ebx_3 = (esi_2[0xd] - esi_2[0xc]) s>> 2
    int128_t* var_18 = ebx_3
    int32_t ecx_1
    int32_t edx_2
    ecx_1, edx_2 = sub_51add0(&arg1[0x18])
    sub_51af30(ebx_3, edx_2, ecx_1, &arg1[0x18])
    int128_t* edi_3 = nullptr
    int32_t ebx_4 = 0
    
    if (var_18 s> 0)
        do
            int32_t eax_5
            
            if (ebx_4 s>= 0)
                eax_5 = esi_2[0xc]
            
            void* eax_6
            
            if (ebx_4 s< 0 || ebx_4 s>= (esi_2[0xd] - eax_5) s>> 2)
                void** eax_7 = esi_2[0xc]
                
                if (eax_7 != esi_2[0xd])
                    eax_6 = *eax_7
                    goto label_4cc7c2
            else
                eax_6 = *(eax_5 + (ebx_4 << 2))
            label_4cc7c2:
                
                if (eax_6 != 0)
                    int32_t ecx_5 = *(eax_6 + 0x38)
                    int32_t eax_8
                    
                    if (ecx_5 + *(eax_6 + 0x34) s< 0 || ecx_5 + *(eax_6 + 0x34) s<= 0)
                        eax_8 = *(eax_6 + 8)
                    else
                        eax_8 = *(eax_6 + 0xc)
                    
                    if (eax_8 != 0)
                        int32_t var_2c_2 = eax_8
                        int32_t* eax_9 = sub_51b520(arg3)
                        
                        if (eax_9 != 0)
                            int32_t edx_3 = *(arg1 + 0x18)
                            
                            if (*(edx_3 + (ebx_4 << 2)) != 0)
                                sub_51ac50(*(edx_3 + (ebx_4 << 2)))
                            
                            EnterCriticalSection(eax_9[1])
                            *eax_9 += 1
                            LeaveCriticalSection(eax_9[1])
                            *(*(arg1 + 0x18) + (ebx_4 << 2)) = eax_9
                            sub_51ac50(eax_9)
                            esi_2 = arg2
                        
                        edi_3 = nullptr
            ebx_4 += 1
        while (ebx_4 s< var_18)
    
    void* eax_14 = esi_2[0x10]
    
    if (eax_14 != 0)
        int32_t ecx_8 = *(eax_14 + 0x38)
        int32_t eax_15
        
        if (ecx_8 + *(eax_14 + 0x34) s< 0 || ecx_8 + *(eax_14 + 0x34) s<= 0)
            eax_15 = *(eax_14 + 8)
        else
            eax_15 = *(eax_14 + 0xc)
        
        if (eax_15 != 0)
            int32_t var_2c_5 = eax_15
            *(arg1 + 0x28) = sub_51b520(arg3)
            edi_3 = nullptr
    
    void* eax_17 = esi_2[0x11]
    
    if (eax_17 != 0)
        int32_t ecx_11 = *(eax_17 + 0x38)
        int32_t eax_18
        
        if (ecx_11 + *(eax_17 + 0x34) s< 0 || ecx_11 + *(eax_17 + 0x34) s<= 0)
            eax_18 = *(eax_17 + 8)
        else
            eax_18 = *(eax_17 + 0xc)
        
        if (eax_18 != 0)
            int32_t var_2c_6 = eax_18
            *(arg1 + 0x2c) = sub_51b520(arg3)
            edi_3 = nullptr
    
    int32_t ebx_5 = 0
    int32_t eax_22 = (esi_2[0x14] - esi_2[0x13]) s>> 2
    var_10 = eax_22
    int32_t var_14_1 = 0
    
    if (eax_22 s<= 0)
    label_4cca8f:
        sub_401180(&arg1[0x40], 0xffffffff, esi_2, 0)
        int32_t* result
        result.b = 1
        return result
    
    while (true)
        if (ebx_5 s< 0)
        label_4cc8da:
            int32_t eax_24 = *(arg1 + 0x34)
            var_18 = nullptr
            int32_t edx_6
            
            if (&var_18 u< eax_24)
                edx_6 = *(arg1 + 0x30)
            
            if (&var_18 u>= eax_24 || edx_6 u> &var_18)
                int32_t ecx_21 = *(arg1 + 0x38)
                
                if (eax_24 == ecx_21)
                    int32_t edx_10 = *(arg1 + 0x30)
                    int32_t eax_30 = (eax_24 - edx_10) s>> 2
                    
                    if (eax_30 u> 0x3ffffffe)
                        sub_6b47bf("vector<T> too long")
                        noreturn
                    
                    int32_t ecx_23 = (ecx_21 - edx_10) s>> 2
                    
                    if (eax_30 + 1 u> ecx_23)
                        uint32_t edx_12 = ecx_23 u>> 1
                        int32_t ecx_24
                        
                        if (0x3fffffff - edx_12 u>= ecx_23)
                            ecx_24 = ecx_23 + edx_12
                        else
                            ecx_24 = 0
                        
                        if (ecx_24 u< eax_30 + 1)
                            ecx_24 = eax_30 + 1
                        
                        sub_6b0560(&arg1[0x30], ecx_24)
                
                int32_t* eax_32 = *(arg1 + 0x34)
                
                if (eax_32 != 0)
                    *eax_32 = 0
                
                *(arg1 + 0x34) += 4
            else
                int32_t ecx_16 = *(arg1 + 0x38)
                
                if (eax_24 == ecx_16)
                    int32_t eax_26 = (eax_24 - edx_6) s>> 2
                    
                    if (eax_26 u> 0x3ffffffe)
                        sub_6b47bf("vector<T> too long")
                        noreturn
                    
                    int32_t ecx_18 = (ecx_16 - edx_6) s>> 2
                    
                    if (eax_26 + 1 u> ecx_18)
                        uint32_t edx_8 = ecx_18 u>> 1
                        int32_t ecx_19
                        
                        if (0x3fffffff - edx_8 u>= ecx_18)
                            ecx_19 = ecx_18 + edx_8
                        else
                            ecx_19 = 0
                        
                        if (ecx_19 u< eax_26 + 1)
                            ecx_19 = eax_26 + 1
                        
                        sub_6b0560(&arg1[0x30], ecx_19)
                        ebx_5 = var_14_1
                
                int32_t* eax_28 = *(arg1 + 0x34)
                
                if (eax_28 != 0)
                    *eax_28 = *(*(arg1 + 0x30) + ((&var_18 - edx_6) s>> 2 << 2))
                
                *(arg1 + 0x34) += 4
        else
            int32_t eax_23 = esi_2[0x13]
            
            if (ebx_5 s>= (esi_2[0x14] - eax_23) s>> 2)
                goto label_4cc8da
            
            int32_t esi_5 = *(eax_23 + (ebx_5 << 2))
            
            if (esi_5 == 0)
                goto label_4cc8da
            
            int128_t* eax_33 = operator new(0x5c)
            
            if (eax_33 != 0)
                long double x87_r7_1 = float.t(1)
                *eax_33 = 0
                *(eax_33 + 4) = fconvert.s(x87_r7_1)
                *(eax_33 + 8) = fconvert.s(x87_r7_1)
                __builtin_memset(eax_33 + 0xc, 0, 0x18)
                __builtin_memset(eax_33 + 0x28, 0, 0x14)
                eax_33[5].d = 0
                *(eax_33 + 0x54) = 0xf
                eax_33[4].b = 0
                edi_3 = eax_33
            
            var_18 = edi_3
            
            if (sub_4cc700(esi_5, arg3) == 0)
                if (edi_3 != 0)
                    sub_4cc4c0(edi_3)
                    int128_t* var_2c_11 = edi_3
                    sub_6b4d5b()
                
                break
            
            int32_t eax_34 = *(arg1 + 0x34)
            int32_t ecx_26
            
            if (&var_18 u< eax_34)
                ecx_26 = *(arg1 + 0x30)
            
            if (&var_18 u>= eax_34 || ecx_26 u> &var_18)
                if (eax_34 == *(arg1 + 0x38))
                    sub_4307a0(&arg1[0x30])
                
                int128_t** eax_38 = *(arg1 + 0x34)
                
                if (eax_38 != 0)
                    *eax_38 = edi_3
            else
                if (eax_34 == *(arg1 + 0x38))
                    sub_4307a0(&arg1[0x30])
                
                int32_t* eax_36 = *(arg1 + 0x34)
                
                if (eax_36 != 0)
                    *eax_36 = *(*(arg1 + 0x30) + ((&var_18 - ecx_26) s>> 2 << 2))
            
            *(arg1 + 0x34) += 4
        
        esi_2 = arg2
        ebx_5 += 1
        edi_3 = nullptr
        var_14_1 = ebx_5
        
        if (ebx_5 s>= var_10)
            goto label_4cca8f

return 0
