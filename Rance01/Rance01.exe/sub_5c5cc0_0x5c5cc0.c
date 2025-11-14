// 函数: sub_5c5cc0
// 地址: 0x5c5cc0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t eax = arg1[0x16]

if (eax s>= 2)
    if (arg1[1] == 0)
        return 0xffffff76
    
    int32_t esi_1 = arg3
    
    if (esi_1 s>= 0 && (esi_1 s> 0 || arg2 u>= 0))
        int32_t temp1_1 = arg1[5]
        
        if (esi_1 s<= temp1_1 && (esi_1 s< temp1_1 || arg2 u<= arg1[4]))
            int32_t ecx
            
            if (eax s>= 3)
                int32_t eax_2 = arg1[0x18]
                ecx = arg1[0xe]
                int32_t temp2_1 = *(ecx + (eax_2 << 3) + 4)
                int32_t* eax_3 = ecx + (eax_2 << 3)
                
                if (esi_1 s< temp2_1 || (esi_1 s<= temp2_1 && arg2 u< *eax_3))
                    ecx = sub_5c5500(arg1)
                    esi_1 = arg3
                else
                    int32_t temp3_1 = eax_3[3]
                    
                    if (esi_1 s>= temp3_1 && (esi_1 s> temp3_1 || arg2 u>= eax_3[2]))
                        ecx = sub_5c5500(arg1)
                        esi_1 = arg3
            
            arg1[0x14] = 0xffffffff
            arg1[0x15] = 0xffffffff
            int32_t eax_4 = arg1[0x17]
            int32_t var_1d4 = eax_4
            sub_5b9df0(eax_4, &arg1[0x1e], ecx)
            sub_5b55f0(&arg1[0x78])
            int32_t eax_6
            int32_t edx_1
            eax_6, edx_1 = sub_5c4230(arg1, arg2, esi_1)
            int32_t var_170[0x5a]
            
            if (eax_6 != 0)
                arg1[0x14] = 0xffffffff
                arg1[0x15] = 0xffffffff
                sub_5b9710(&var_170)
                sub_5c5500(arg1)
                return 0xffffff77
            
            int32_t var_1b0 = 0
            int32_t var_1a4 = 0
            int32_t var_1c4 = 0
            int32_t var_1b4 = 0
            int32_t var_1d4_2 = arg1[0x17]
            int32_t edx_2 = sub_5b9690(&var_170, edx_1)
            sub_5b9d90(&var_170)
            
            while (true)
                if (arg1[0x16] s< 3 || var_170[0] == 0)
                    goto label_5c5e82
                
                int32_t var_1d4_3 = 1
                void var_190
                
                if (sub_5b9e20(&var_170, &var_190, edx_2) s<= 0)
                    goto label_5c5e82
                
                void* eax_13 = arg1[0x12] + (arg1[0x18] << 5)
                int32_t eax_40
                
                if (*(eax_13 + 0x1c) == 0)
                    sub_5b9f30(&arg1[0x1e])
                label_5c5e82:
                    
                    if (var_1b0 != 0)
                        eax_40 = 0xffffffff
                        arg1[0x15] = eax_40
                    else
                        void* var_1a0
                        int32_t eax_21
                        int32_t edx_6
                        eax_21, edx_6 = sub_5c4290(arg1, &var_1a0, 0xffffffff, 0xffffffff)
                        
                        if (edx_6 s>= 0 && (edx_6 s> 0 || eax_21 u>= 0))
                            if (arg1[0x16] s< 3)
                            label_5c5eee:
                                uint32_t i_5
                                i_5, edx_2 = sub_5b9660(&var_1a0)
                                int32_t ecx_4 = arg1[0xd]
                                int32_t esi_13 = 0
                                uint32_t i = i_5
                                
                                if (ecx_4 s> 0)
                                    i_5 = arg1[0x10]
                                    
                                    while (*i_5 != i)
                                        esi_13 += 1
                                        i_5 += 4
                                        
                                        if (esi_13 s>= ecx_4)
                                            break
                                
                                if (esi_13 == ecx_4)
                                    continue
                                else
                                    uint32_t i_2 = i
                                    arg1[0x18] = esi_13
                                    arg1[0x17] = i
                                    uint32_t i_3 = i
                                    sub_5b9df0(sub_5b9df0(i_5, &arg1[0x1e], ecx_4), &var_170, 0)
                                    int32_t eax_26 = arg1[0xf]
                                    arg1[0x16] = 3
                                    int32_t temp5_1 = *(eax_26 + (esi_13 << 3) + 4)
                                    
                                    if (edx_6 s> temp5_1 || (edx_6 s>= temp5_1
                                            && eax_21 u> *(eax_26 + (esi_13 << 3))))
                                        var_1b4 = 0
                                    else
                                        var_1b4 = 1
                            else
                                uint32_t eax_23 = sub_5b9660(&var_1a0)
                                
                                if (arg1[0x17] != eax_23 && (*(var_1a0 + 5) & 2) != 0)
                                    sub_5c5500(arg1)
                                    sub_5b9710(&var_170)
                                
                                if (arg1[0x16] s< 3)
                                    goto label_5c5eee
                            
                            sub_5b9a70(&var_1a0, &arg1[0x1e])
                            edx_2 = sub_5b9a70(&var_1a0, &var_170)
                            var_1c4 = zx.d(*(var_1a0 + 5)) & 4
                            continue
                        
                        int32_t edx_21
                        eax_40, edx_21 = sub_5c5c40(arg1, 0xffffffff)
                        arg1[0x15] = edx_21
                else
                    int32_t ebx_2 = sub_5c4120(eax_13, &var_190)
                    
                    if (ebx_2 s< 0)
                        sub_5b9f30(&arg1[0x1e])
                        ebx_2 = 0
                    else if (var_1c4 != 0 && var_1b4 == 0)
                        sub_5b9f30(&arg1[0x1e])
                    else if (var_1b0 != 0)
                        var_1a4 += (ebx_2 + var_1b0) s>> 2
                    
                    int32_t var_180
                    edx_2 = var_180
                    int32_t var_17c
                    
                    if ((edx_2 & var_17c) != 0xffffffff)
                        int32_t ecx_6 = arg1[0x18]
                        void* eax_32 = arg1[0x11]
                        int32_t ecx_7 = ecx_6 * 2
                        int32_t edx_11 = edx_2 - *(eax_32 + (ecx_7 << 3))
                        int32_t ecx_8 = 0
                        int32_t ebx_3 = sbb.d(var_17c, *(eax_32 + (ecx_7 << 3) + 4), 
                            edx_2 u< *(eax_32 + (ecx_7 << 3)))
                        int32_t var_1c0_2 = edx_11
                        int32_t var_1bc_2 = ebx_3
                        
                        if (ebx_3 s<= 0 && (ebx_3 s< 0 || edx_11 u< 0))
                            ebx_3 = 0
                            var_1c0_2 = 0
                            var_1bc_2 = 0
                        
                        int32_t esi_17 = 0
                        int32_t edx_12 = 0
                        int32_t var_1b0_1 = 0
                        int32_t var_1ac_1 = 0
                        
                        if (ecx_6 s>= 2)
                            int32_t i_6 = ((arg1[0x18] - 2) u>> 1) + 1
                            void* eax_33 = eax_32 + 0x18
                            int32_t i_4 = i_6
                            int32_t i_1
                            
                            do
                                int32_t edx_17 = *(eax_33 - 0x10)
                                int32_t temp14_1 = var_1b0_1
                                var_1b0_1 += edx_17
                                var_1ac_1 =
                                    adc.d(var_1ac_1, *(eax_33 - 0xc), temp14_1 + edx_17 u< temp14_1)
                                int32_t temp15_1 = ecx_8
                                ecx_8 += *eax_33
                                esi_17 =
                                    adc.d(esi_17, *(eax_33 + 4), temp15_1 + *eax_33 u< temp15_1)
                                eax_33 += 0x20
                                i_1 = i_4
                                i_4 -= 1
                            while (i_1 != 1)
                            ebx_3 = var_1bc_2
                            edx_12 = i_6 * 2
                        
                        if (edx_12 s< arg1[0x18])
                            int32_t edx_19 = edx_12 << 4
                            int32_t eax_35 = *(edx_19 + arg1[0x11] + 8)
                            int32_t temp13_1 = var_1c0_2
                            var_1c0_2 += eax_35
                            int32_t var_1c4_2 = edx_19
                            ebx_3 = adc.d(ebx_3, *(edx_19 + arg1[0x11] + 0xc), 
                                temp13_1 + eax_35 u< temp13_1)
                        
                        int32_t eax_39
                        int32_t edx_20
                        edx_20:eax_39 = sx.q(var_1a4)
                        int32_t ecx_9 = ecx_8 - eax_39
                        int32_t ecx_10 = ecx_9 + var_1b0_1
                        int32_t ecx_11 = ecx_10 + var_1c0_2
                        int32_t esi_20 = adc.d(
                            adc.d(sbb.d(esi_17, edx_20, ecx_8 u< eax_39), var_1ac_1, 
                                ecx_9 + var_1b0_1 u< ecx_9), 
                            ebx_3, ecx_10 + var_1c0_2 u< ecx_10)
                        eax_40 = 0
                        arg1[0x14] = ecx_11
                        arg1[0x15] = esi_20
                        
                        if (esi_20 s> 0)
                            break
                        
                        if (esi_20 s>= 0 && ecx_11 u>= 0)
                            break
                    else
                        var_1b0 = ebx_2
                        continue
                    
                    arg1[0x15] = eax_40
                
                arg1[0x14] = eax_40
                break
            
            sub_5b9710(&var_170)
            long double x87_r7 = float.t(0)
            *(arg1 + 0x68) = fconvert.d(x87_r7)
            *(arg1 + 0x70) = fconvert.d(x87_r7)
            return 0

return 0xffffff7d
