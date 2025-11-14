// 函数: sub_5b6930
// 地址: 0x5b6930
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* edi = arg1

if (edi[2] s> 0)
    int32_t ebp_1 = 0
    int32_t var_c_1 = 0
    
    if (arg4 s> 0)
        while (true)
            int32_t i = edi[0xa]
            int32_t eax_2 = sub_5b4c20(arg3, edi[9])
            int32_t eax_5
            int32_t ebp_3
            int32_t esi_3
            
            if (eax_2 s< 0)
                ebp_3 = edi[2]
                esi_3 = 0
            label_5b69fc:
                int32_t eax_12 = sub_5b4c20(arg3, i)
                
                if (eax_12 s< 0)
                    while (i s> 1)
                        int32_t i_3 = i - 1
                        i = i_3
                        eax_12 = sub_5b4c20(arg3, i_3)
                        
                        if (eax_12 s>= 0)
                            goto label_5b6a28
                    
                    if (eax_12 s< 0)
                        return 0xffffffff
                
            label_5b6a28:
                int32_t eax_13 = rol.d(eax_12, 0x10)
                int32_t eax_17 = ((eax_13 u>> 8 ^ eax_13 << 8) & 0xff00ff) ^ eax_13 << 8
                int32_t ecx_15 = ((eax_17 u>> 4 ^ eax_17 << 4) & 0xf0f0f0f) ^ eax_17 << 4
                int32_t eax_23 = ((ecx_15 u>> 2 ^ ecx_15 << 2) & 0x33333333) ^ (ecx_15 * 4)
                int32_t i_1 = ebp_3 - esi_3
                
                if (i_1 s> 1)
                    do
                        int32_t edx_17 = i_1 s>> 1
                        int32_t eax_26 = edx_17 + esi_3
                        int32_t eax_28 = neg.d(sbb.d(eax_26, eax_26, 
                            (((eax_23 u>> 1 ^ (eax_23 * 2)) & 0x55555555) ^ (eax_23 * 2))
                                u< *(edi[5] + (eax_26 << 2))))
                        ebp_3 -= neg.d(eax_28) & edx_17
                        esi_3 += (eax_28 - 1) & edx_17
                        i_1 = ebp_3 - esi_3
                    while (i_1 s> 1)
                    
                    edi = arg1
                
                int32_t eax_32 = sx.d(*(edi[7] + esi_3))
                int32_t ecx_24 = arg3[1]
                
                if (eax_32 s> i)
                    int32_t eax_45 = arg3[4]
                    int32_t esi_9 = *arg3
                    int32_t ecx_35 = ecx_24 + i
                    
                    if (esi_9 s> eax_45 - ((ecx_35 + 7) s>> 3))
                        *arg3 = eax_45
                        arg3[3] = 0
                        arg3[1] = 1
                        return 0xffffffff
                    
                    int32_t eax_48
                    int32_t edx_28
                    edx_28:eax_48 = sx.q(ecx_35)
                    int32_t eax_50 = (eax_48 + (edx_28 & 7)) s>> 3
                    arg3[3] += eax_50
                    arg3[1] = ecx_35 & 7
                    *arg3 = eax_50 + esi_9
                    return 0xffffffff
                
                int32_t ebp_4 = *arg3
                int32_t ecx_25 = ecx_24 + eax_32
                int32_t eax_35
                
                if (ebp_4 s<= arg3[4] - ((ecx_25 + 7) s>> 3))
                    int32_t eax_37
                    int32_t edx_21
                    edx_21:eax_37 = sx.q(ecx_25)
                    int32_t eax_39 = (eax_37 + (edx_21 & 7)) s>> 3
                    arg3[3] += eax_39
                    eax_35 = eax_39 + ebp_4
                    arg3[1] = ecx_25 & 7
                else
                    eax_35 = arg3[4]
                    arg3[3] = 0
                    arg3[1] = 1
                
                ebp_1 = var_c_1
                *arg3 = eax_35
                eax_5 = esi_3
            else
                int32_t eax_3 = *(edi[8] + (eax_2 << 2))
                
                if (eax_3 s< 0)
                    esi_3 = eax_3 s>> 0xf & 0x7fff
                    ebp_3 = edi[2] - (eax_3 & 0x7fff)
                    goto label_5b69fc
                
                int32_t ecx_4 = sx.d(*(edi[7] + eax_3 - 1)) + arg3[1]
                int32_t esi_6 = *arg3
                
                if (esi_6 s<= arg3[4] - ((ecx_4 + 7) s>> 3))
                    int32_t eax_7
                    int32_t edx_5
                    edx_5:eax_7 = sx.q(ecx_4)
                    int32_t eax_9 = (eax_7 + (edx_5 & 7)) s>> 3
                    arg3[3] += eax_9
                    *arg3 = eax_9 + esi_6
                    arg3[1] = ecx_4 & 7
                    eax_5 = eax_3 - 1
                else
                    int32_t ecx_5 = arg3[4]
                    arg3[3] = 0
                    *arg3 = ecx_5
                    arg3[1] = 1
                    eax_5 = eax_3 - 1
            int32_t esi_7 = arg4
            
            if (eax_5 == 0xffffffff)
                return 0xffffffff
            
            int32_t i_2 = 0
            int32_t edx_24 = edi[4] + ((*edi * eax_5) << 2)
            
            if (ebp_1 s>= esi_7)
                break
            
            if (esi_7 - ebp_1 s>= 4)
                void* ecx_33 = arg2 + (ebp_1 << 2) + 8
                
                while (true)
                    if (i_2 s< *edi)
                        *(ecx_33 - 8) = fconvert.s(fconvert.t(*(edx_24 + (i_2 << 2))))
                        
                        if (i_2 + 1 s>= *edi)
                            ebp_1 += 1
                        else
                            *(ecx_33 - 4) = fconvert.s(fconvert.t(*(edx_24 + ((i_2 + 1) << 2))))
                            
                            if (i_2 + 2 s>= *edi)
                                ebp_1 += 2
                            else
                                *ecx_33 = fconvert.s(fconvert.t(*(edx_24 + ((i_2 + 2) << 2))))
                                
                                if (i_2 + 3 s>= *edi)
                                    ebp_1 += 3
                                else
                                    *(ecx_33 + 4) =
                                        fconvert.s(fconvert.t(*(edx_24 + ((i_2 + 3) << 2))))
                                    ebp_1 += 4
                                    i_2 += 4
                                    ecx_33 += 0x10
                                    bool cond:0_1 = ebp_1 s< esi_7 - 3
                                    esi_7 = arg4
                                    
                                    if (cond:0_1)
                                        continue
                                    
                                    var_c_1 = ebp_1
                                    break
                    
                    var_c_1 = ebp_1
                    goto label_5b6bd3
            
            if (ebp_1 s>= esi_7)
                break
            
            float* edx_25 = edx_24 + (i_2 << 2)
            
            while (i_2 s< *edi)
                *(arg2 + (ebp_1 << 2)) = fconvert.s(fconvert.t(*edx_25))
                ebp_1 += 1
                i_2 += 1
                edx_25 = &edx_25[1]
                var_c_1 = ebp_1
                
                if (ebp_1 s>= esi_7)
                    return 0
            
        label_5b6bd3:
            
            if (ebp_1 s>= esi_7)
                return 0
else if (arg4 s> 0)
    __builtin_memset(arg2, 0, arg4 << 2)

return 0
