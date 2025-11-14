// 函数: sub_5b67e0
// 地址: 0x5b67e0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if (arg1[2] s> 0)
    int32_t esi_1 = 0
    
    if (*arg1 s<= 8)
        if (arg4 s> 0)
            while (true)
                int32_t eax_5 = sub_5b6470(arg1, arg3)
                
                if (eax_5 == 0xffffffff)
                    return 0xffffffff
                
                int32_t edx_4 = *arg1
                float* ecx_4 = arg1[4] + ((edx_4 * eax_5) << 2)
                int32_t eax_7 = 0
                
                if (edx_4 - 1 u<= 7)
                    switch (edx_4)
                        case 2
                            goto label_5b68e6
                        case 3
                            goto label_5b68da
                        case 4
                            goto label_5b68ce
                        case 5
                            goto label_5b68c2
                        case 6
                            goto label_5b68b6
                        case 7
                            goto label_5b68aa
                        case 8
                            eax_7 = 1
                            long double x87_r7_4 =
                                fconvert.t(*ecx_4) + fconvert.t(*(arg2 + (esi_1 << 2)))
                            esi_1 += 1
                            *(arg2 + (esi_1 << 2) - 4) = fconvert.s(x87_r7_4)
                        label_5b68aa:
                            long double x87_r7_5 = fconvert.t(ecx_4[eax_7])
                            eax_7 += 1
                            long double x87_r7_6 = x87_r7_5 + fconvert.t(*(arg2 + (esi_1 << 2)))
                            esi_1 += 1
                            *(arg2 + (esi_1 << 2) - 4) = fconvert.s(x87_r7_6)
                        label_5b68b6:
                            long double x87_r7_7 = fconvert.t(ecx_4[eax_7])
                            eax_7 += 1
                            long double x87_r7_8 = x87_r7_7 + fconvert.t(*(arg2 + (esi_1 << 2)))
                            esi_1 += 1
                            *(arg2 + (esi_1 << 2) - 4) = fconvert.s(x87_r7_8)
                        label_5b68c2:
                            long double x87_r7_9 = fconvert.t(ecx_4[eax_7])
                            eax_7 += 1
                            long double x87_r7_10 = x87_r7_9 + fconvert.t(*(arg2 + (esi_1 << 2)))
                            esi_1 += 1
                            *(arg2 + (esi_1 << 2) - 4) = fconvert.s(x87_r7_10)
                        label_5b68ce:
                            long double x87_r7_11 = fconvert.t(ecx_4[eax_7])
                            eax_7 += 1
                            long double x87_r7_12 = x87_r7_11 + fconvert.t(*(arg2 + (esi_1 << 2)))
                            esi_1 += 1
                            *(arg2 + (esi_1 << 2) - 4) = fconvert.s(x87_r7_12)
                        label_5b68da:
                            long double x87_r7_13 = fconvert.t(ecx_4[eax_7])
                            eax_7 += 1
                            long double x87_r7_14 = x87_r7_13 + fconvert.t(*(arg2 + (esi_1 << 2)))
                            esi_1 += 1
                            *(arg2 + (esi_1 << 2) - 4) = fconvert.s(x87_r7_14)
                        label_5b68e6:
                            long double x87_r7_15 = fconvert.t(ecx_4[eax_7])
                            eax_7 += 1
                            long double x87_r7_16 = x87_r7_15 + fconvert.t(*(arg2 + (esi_1 << 2)))
                            esi_1 += 1
                            *(arg2 + (esi_1 << 2) - 4) = fconvert.s(x87_r7_16)
                    
                    esi_1 += 1
                    *(arg2 + (esi_1 << 2) - 4) = fconvert.s(fconvert.t(ecx_4[eax_7])
                        + fconvert.t(*(arg2 + (esi_1 << 2) - 4)))
                
                if (esi_1 s>= arg4)
                    return 0
    else if (arg4 s> 0)
        do
            int32_t eax_1 = sub_5b6470(arg1, arg3)
            
            if (eax_1 == 0xffffffff)
                return 0xffffffff
            
            int32_t ecx_1 = *arg1
            int32_t edx_3 = arg1[4] + ((ecx_1 * eax_1) << 2)
            int32_t i = 0
            
            if (ecx_1 s> 0)
                do
                    long double x87_r7_1 = fconvert.t(*(edx_3 + (i << 2)))
                    i += 1
                    long double x87_r7_2 = x87_r7_1 + fconvert.t(*(arg2 + (esi_1 << 2)))
                    esi_1 += 1
                    *(arg2 + (esi_1 << 2) - 4) = fconvert.s(x87_r7_2)
                while (i s< *arg1)
        while (esi_1 s< arg4)

return 0
