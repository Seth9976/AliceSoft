// 函数: sub_5c6920
// 地址: 0x5c6920
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t result_1 = 0
int32_t result = sub_5c60a0(arg1, arg2, arg3)

if (result s>= 0)
    uint32_t i
    result, i = sub_5c5300(arg1)
    
    if (result == 0)
        while (true)
            void* ebx_3 = &arg1[0x1e]
            int32_t var_38
            
            if (ebx_3 == 0 || *ebx_3 == 0)
            label_5c6ab4:
                int32_t eax_22
                int32_t edx_6
                eax_22, edx_6 = sub_5c4290(arg1, &var_38, 0xffffffff, 0xffffffff)
                
                if (edx_6 s>= 0 && (edx_6 s> 0 || eax_22 u>= 0))
                    int32_t esi_7 = var_38
                    
                    if ((*(esi_7 + 5) & 2) != 0)
                        sub_5b5350(&arg1[0x78])
                        sub_5b4f70(&arg1[0x94])
                        arg1[0x16] = 2
                    
                    if (arg1[0x16] s< 3)
                        int32_t ebx_2 = arg1[0xd]
                        i = ((zx.d(*(esi_7 + 0x11)) << 8 | zx.d(*(esi_7 + 0x10))) << 8
                            | zx.d(*(esi_7 + 0xf))) << 8 | zx.d(*(esi_7 + 0xe))
                        int32_t eax_26 = 0
                        
                        if (ebx_2 s> 0)
                            int32_t* ecx_6 = arg1[0x10]
                            
                            while (*ecx_6 != i)
                                eax_26 += 1
                                ecx_6 = &ecx_6[1]
                                
                                if (eax_26 s>= ebx_2)
                                    break
                        
                        if (eax_26 == ebx_2)
                            continue
                        else
                            arg1[0x18] = eax_26
                            arg1[0x16] = 3
                            ebx_3 = &arg1[0x1e]
                            arg1[0x17] = ((zx.d(*(esi_7 + 0x11)) << 8 | zx.d(*(esi_7 + 0x10))) << 8
                                | zx.d(*(esi_7 + 0xf))) << 8 | zx.d(*(esi_7 + 0xe))
                            
                            if (ebx_3 != 0 && *ebx_3 != 0)
                                sub_5b9d90(ebx_3)
                                *(ebx_3 + 0x150) = i
                            
                            result = sub_5c5300(arg1)
                            
                            if (result != 0)
                                break
                            
                            result_1 = result
                    
                    i = sub_5b9a70(&var_38, ebx_3)
                    continue
            else
                int32_t var_54_1 = 0
                void var_28
                int32_t eax_2 = sub_5b9e20(ebx_3, &var_28, i)
                
                if (eax_2 s> 0)
                    void* esi_3 = arg1[0x12]
                    int32_t result_2
                    result_2, i = sub_5c4120((arg1[0x18] << 5) + esi_3, &var_28)
                    
                    if (result_2 s>= 0)
                        if (result_1 != 0)
                            int32_t eax_10
                            int32_t edx_2
                            edx_2:eax_10 = sx.q((result_1 + result_2) s>> 2)
                            int32_t temp5_1 = arg1[0x14]
                            arg1[0x14] += eax_10
                            arg1[0x15] = adc.d(arg1[0x15], edx_2, temp5_1 + eax_10 u< temp5_1)
                        
                        void* esi_4 = *(esi_3 + 0x1c)
                        int32_t eax_11
                        
                        if (esi_4 == 0)
                            eax_11 = 0xffffffff
                        else
                            eax_11 = *(esi_4 + 4)
                        
                        int32_t eax_14
                        int32_t edx_3
                        edx_3:eax_14 = sx.q((eax_11 + result_2) s>> 2)
                        int32_t edx_4 = adc.d(edx_3, arg1[0x15], eax_14 + arg1[0x14] u< eax_14)
                        
                        if (edx_4 s<= arg3 && (edx_4 s< arg3 || eax_14 + arg1[0x14] u< arg2))
                            if (*ebx_3 != 0)
                                int32_t var_54_3 = 1
                                sub_5b9e20(ebx_3, nullptr, edx_4)
                            
                            sub_5c4030(&arg1[0x94], &var_28)
                            i = sub_5b5650(&arg1[0x78], &arg1[0x94])
                            int32_t var_14
                            
                            if (var_14 s>= 0xffffffff)
                                uint32_t i_1
                                i = i_1
                                
                                if (var_14 s> 0xffffffff || i u> 0xffffffff)
                                    int32_t ebx_1 = arg1[0x18]
                                    void* esi_6 = arg1[0x11]
                                    int32_t eax_19 = ebx_1 * 2
                                    uint32_t i_2 = i
                                    i -= *(esi_6 + (eax_19 << 3))
                                    int32_t ecx_3 = sbb.d(var_14, *(esi_6 + (eax_19 << 3) + 4), 
                                        i_2 u< *(esi_6 + (eax_19 << 3)))
                                    arg1[0x14] = i
                                    arg1[0x15] = ecx_3
                                    int32_t ecx_4 = 0
                                    int32_t temp13_1 = arg1[0x15]
                                    
                                    if (temp13_1 s<= 0 && (temp13_1 s< 0 || i u< 0))
                                        arg1[0x14] = 0
                                        arg1[0x15] = 0
                                    
                                    if (ebx_1 s> 0)
                                        int32_t* eax_20 = esi_6 + 8
                                        
                                        do
                                            int32_t edx_5 = *eax_20
                                            int32_t temp14_1 = arg1[0x14]
                                            arg1[0x14] += edx_5
                                            i = eax_20[1]
                                            arg1[0x15] =
                                                adc.d(arg1[0x15], i, temp14_1 + edx_5 u< temp14_1)
                                            ecx_4 += 1
                                            eax_20 = &eax_20[4]
                                        while (ecx_4 s< ebx_1)
                            
                            result_1 = result_2
                            continue
                    else if (*ebx_3 == 0)
                        continue
                    else
                        int32_t var_54_2 = 1
                        i = sub_5b9e20(ebx_3, nullptr, i)
                        continue
                else if (eax_2 s>= 0 || eax_2 == 0xfffffffd)
                    goto label_5c6ab4
            
            long double x87_r7_1 = float.t(0)
            void* ecx_14 = arg1[0x12]
            *(arg1 + 0x68) = fconvert.d(x87_r7_1)
            *(arg1 + 0x70) = fconvert.d(x87_r7_1)
            int32_t esi_10 = *(*(ecx_14 + 0x1c) + 0xe48)
            int32_t var_44 = esi_10
            int32_t eax_33
            int32_t edx_16
            eax_33, edx_16 = __allshr(arg2, arg3, esi_10.b)
            int32_t eax_34
            int32_t edx_17
            eax_34, edx_17 = __allshl(eax_33, edx_16, esi_10.b)
            int32_t temp1_1 = arg1[0x15]
            
            if (temp1_1 s<= edx_17 && (temp1_1 s< edx_17 || arg1[0x14] u< eax_34))
                while (true)
                    int32_t eax_37
                    int32_t edx_20
                    eax_37, edx_20 = __allshr(arg2 - arg1[0x14], 
                        sbb.d(arg3, arg1[0x15], arg2 u< arg1[0x14]), esi_10.b)
                    int32_t eax_38 = arg1[0x7e]
                    var_38 = eax_37
                    int32_t esi_11
                    
                    if (eax_38 s> 0xffffffff)
                        esi_11 = arg1[0x7d]
                    
                    int32_t esi_12
                    
                    if (eax_38 s<= 0xffffffff || eax_38 s>= esi_11)
                        esi_12 = 0
                    else
                        esi_12 = esi_11 - eax_38
                    
                    int32_t eax_40
                    int32_t edx_21
                    edx_21:eax_40 = sx.q(esi_12)
                    
                    if (edx_21 s>= edx_20 && (edx_21 s> edx_20 || eax_40 u> eax_37))
                        esi_12 = eax_37
                    
                    if (esi_12 == 0 || arg1[0x7e] + esi_12 s<= arg1[0x7d])
                        arg1[0x7e] += esi_12
                    
                    int32_t eax_45
                    int32_t edx_22
                    edx_22:eax_45 = sx.q(esi_12 << var_44.b)
                    int32_t temp9_1 = arg1[0x14]
                    arg1[0x14] += eax_45
                    arg1[0x15] = adc.d(arg1[0x15], edx_22, temp9_1 + eax_45 u< temp9_1)
                    int32_t eax_47
                    int32_t edx_23
                    edx_23:eax_47 = sx.q(esi_12)
                    
                    if (edx_23 s<= edx_20 && (edx_23 s< edx_20 || eax_47 u< var_38)
                            && sub_5c5530(arg1) s<= 0)
                        int32_t eax_50
                        int32_t edx_24
                        eax_50, edx_24 = sub_5c5c40(arg1, 0xffffffff)
                        arg1[0x14] = eax_50
                        arg1[0x15] = edx_24
                    
                    int32_t ecx_20 = arg1[0x15]
                    
                    if (ecx_20 s>= edx_17)
                        if (ecx_20 s> edx_17)
                            break
                        
                        if (arg1[0x14] u>= eax_34)
                            break
                    
                    esi_10 = var_44
            
            return 0

return result
