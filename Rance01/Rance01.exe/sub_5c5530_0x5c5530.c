// 函数: sub_5c5530
// 地址: 0x5c5530
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t result

while (true)
    if (arg1[0x16] == 3)
        result = sub_5c5300(arg1)
        
        if (result s< 0)
            break
    
    void* var_34
    
    if (arg1[0x16] == 4)
        int32_t edx_1 = *(*(arg1[0x12] + 0x1c) + 0xe48)
        char var_44_1 = edx_1.b
        
        while (arg1 != 0xffffff88)
            if (arg1[0x1e] == 0)
                break
            
            int32_t var_58_1 = 1
            void var_24
            int32_t eax_2
            int32_t* edx_2
            eax_2, edx_2 = sub_5b9e20(&arg1[0x1e], &var_24, edx_1)
            
            if (eax_2 == 0xffffffff)
                return 0xfffffffd
            
            if (eax_2 s<= 0)
                break
            
            void* var_58_2 = &var_24
            int32_t var_14
            int32_t ebx_1 = var_14
            int32_t var_10
            int32_t var_38_1 = var_10
            int32_t eax_4
            eax_4, edx_1 = sub_5c3e80(&arg1[0x94], edx_2)
            
            if (eax_4 == 0)
                int32_t ecx_13 = arg1[0x7e]
                
                if (ecx_13 s> 0xffffffff)
                    int32_t eax_20 = arg1[0x7d]
                    
                    if (ecx_13 s< eax_20 && eax_20 != ecx_13)
                        return 0xffffff7f
                
                sub_5b5650(&arg1[0x78], &arg1[0x94])
                int32_t ecx_15 = arg1[0x7e]
                int32_t eax_23
                
                if (ecx_15 s> 0xffffffff)
                    eax_23 = arg1[0x7d]
                
                int32_t eax_24
                
                if (ecx_15 s<= 0xffffffff || ecx_15 s>= eax_23)
                    eax_24 = 0
                else
                    eax_24 = eax_23 - ecx_15
                
                *(arg1 + 0x70) =
                    fconvert.d(float.t(eax_24 << var_44_1) + fconvert.t(*(arg1 + 0x70)))
                int32_t var_20
                *(arg1 + 0x68) = fconvert.d(float.t(var_20 << 3) + fconvert.t(*(arg1 + 0x68)))
                int32_t var_18
                
                if ((var_14 & var_10) != 0xffffffff && var_18 == 0)
                    int32_t ecx_18 = arg1[1]
                    int32_t var_44_5
                    int32_t eax_29
                    
                    if (ecx_18 == 0)
                        var_44_5 = 0
                        eax_29 = 0
                    else
                        eax_29 = arg1[0x18]
                        var_44_5 = eax_29
                    
                    if (ecx_18 != 0 && eax_29 s> 0)
                        int32_t ebx_3 = arg1[0x11]
                        int32_t eax_30 = eax_29 * 2
                        ebx_1 = var_14 - *(ebx_3 + (eax_30 << 3))
                        var_38_1 = sbb.d(var_10, *(ebx_3 + (eax_30 << 3) + 4), 
                            var_14 u< *(ebx_3 + (eax_30 << 3)))
                    
                    if (var_38_1 s<= 0 && (var_38_1 s< 0 || ebx_1 u< 0))
                        ebx_1 = 0
                        var_38_1 = 0
                    
                    int32_t esi_9 = arg1[0x7e]
                    int32_t eax_31
                    
                    if (esi_9 s> 0xffffffff)
                        eax_31 = arg1[0x7d]
                    
                    int32_t eax_32
                    
                    if (esi_9 s<= 0xffffffff || esi_9 s>= eax_31)
                        eax_32 = 0
                    else
                        eax_32 = eax_31 - esi_9
                    
                    var_34 = nullptr
                    int32_t var_30_1 = 0
                    int32_t ecx_20 = var_44_5
                    int32_t esi_10 = 0
                    int32_t ebp_3 = 0
                    int32_t eax_34
                    int32_t edx_14
                    edx_14:eax_34 = sx.q(eax_32 << var_44_1)
                    int32_t ebx_4 = ebx_1 - eax_34
                    int32_t var_38_2 = sbb.d(var_38_1, edx_14, ebx_1 u< eax_34)
                    int32_t eax_35 = 0
                    
                    if (ecx_20 s>= 2)
                        void* eax_37 = arg1[0x11] + 0x18
                        int32_t j_1 = ((ecx_20 - 2) u>> 1) + 1
                        int32_t edx_15 = j_1 * 2
                        int32_t j
                        
                        do
                            int32_t edx_16 = *(eax_37 - 0x10)
                            void* temp11_1 = var_34
                            var_34 += edx_16
                            var_30_1 =
                                adc.d(var_30_1, *(eax_37 - 0xc), temp11_1 + edx_16 u< temp11_1)
                            int32_t temp12_1 = esi_10
                            esi_10 += *eax_37
                            ebp_3 = adc.d(ebp_3, *(eax_37 + 4), temp12_1 + *eax_37 u< temp12_1)
                            eax_37 += 0x20
                            j = j_1
                            j_1 -= 1
                        while (j != 1)
                        eax_35 = edx_15
                        ecx_20 = var_44_5
                    
                    if (eax_35 s< ecx_20)
                        int32_t ecx_23 = arg1[0x11]
                        int32_t eax_38 = eax_35 * 2
                        int32_t temp9_1 = ebx_4
                        ebx_4 += *(ecx_23 + (eax_38 << 3) + 8)
                        var_38_2 = adc.d(var_38_2, *(ecx_23 + (eax_38 << 3) + 0xc), 
                            temp9_1 + *(ecx_23 + (eax_38 << 3) + 8) u< temp9_1)
                    
                    void* esi_11 = esi_10 + var_34
                    int32_t ebp_5 = adc.d(adc.d(ebp_3, var_30_1, esi_10 + var_34 u< esi_10), 
                        var_38_2, esi_11 + ebx_4 u< esi_11)
                    arg1[0x14] = esi_11 + ebx_4
                    arg1[0x15] = ebp_5
                
                return 1
    
    void* ebx_2
    
    if (arg1[0x16] s>= 2)
        while (true)
            int32_t eax_5
            int32_t edx_3
            eax_5, edx_3 = sub_5c4290(arg1, &var_34, 0xffffffff, 0xffffffff)
            
            if (edx_3 s< 0)
                return 0xfffffffe
            
            if (edx_3 s<= 0 && eax_5 u< 0)
                return 0xfffffffe
            
            ebx_2 = var_34
            int32_t var_30
            *(arg1 + 0x68) = fconvert.d(float.t(var_30 << 3) + fconvert.t(*(arg1 + 0x68)))
            
            if (arg1[0x16] != 4)
                break
            
            if (arg1[0x17] == (((zx.d(*(ebx_2 + 0x11)) << 8 | zx.d(*(ebx_2 + 0x10))) << 8
                    | zx.d(*(ebx_2 + 0xf))) << 8 | zx.d(*(ebx_2 + 0xe))))
                goto label_5c5685
            
            if ((*(ebx_2 + 5) & 2) != 0)
                sub_5b5350(&arg1[0x78])
                sub_5b4f70(&arg1[0x94])
                bool cond:1_1 = arg1[1] != 0
                arg1[0x16] = 2
                
                if (cond:1_1)
                    goto label_5c56aa
                
                sub_5ba0b0(arg1[0x12])
                sub_5ba040(arg1[0x13])
                goto label_5c5685
        
        goto label_5c568e
    
    ebx_2 = var_34
label_5c5685:
    
    if (arg1[0x16] != 4)
    label_5c568e:
        
        if (arg1[0x16] s< 3)
            if (arg1[1] == 0)
                result = sub_5c4790(arg1, arg1[0x12], arg1[0x13], nullptr, nullptr, &var_34)
                
                if (result != 0)
                    break
                
                int32_t eax_17 = arg1[0x72]
                arg1[0x18] += 1
                arg1[0x17] = eax_17
            else
            label_5c56aa:
                int32_t esi_5 = arg1[0xd]
                uint32_t i = ((zx.d(*(ebx_2 + 0x11)) << 8 | zx.d(*(ebx_2 + 0x10))) << 8
                    | zx.d(*(ebx_2 + 0xf))) << 8 | zx.d(*(ebx_2 + 0xe))
                int32_t ecx_11 = 0
                
                if (esi_5 s> 0)
                    int32_t* edx_9 = arg1[0x10]
                    
                    while (*edx_9 != i)
                        ecx_11 += 1
                        edx_9 = &edx_9[1]
                        
                        if (ecx_11 s>= esi_5)
                            break
                
                if (ecx_11 == esi_5)
                    continue
                else
                    uint32_t i_1 = i
                    arg1[0x17] = i
                    arg1[0x18] = ecx_11
                    sub_5b9df0(i, &arg1[0x1e], ecx_11)
                    arg1[0x16] = 3
                    sub_5b9a70(&var_34, &arg1[0x1e])
                    continue
    
    sub_5b9a70(&var_34, &arg1[0x1e])

return result
