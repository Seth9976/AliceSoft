// 函数: sub_59eb30
// 地址: 0x59eb30
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if (arg1 != 0)
    int32_t** esi_1 = arg1[7]
    
    if (esi_1 != 0)
        if (arg1[3] != 0 && (*arg1 != 0 || arg1[1] == 0))
            if (arg1[4] == 0)
                arg1[6] = "buffer error"
                return 0xfffffffb
            
            bool cond:0 = esi_1[1] != 0x2a
            char* edx = 2
            *esi_1 = arg1
            esi_1[0xa] = 4
            
            if (not(cond:0))
                if (esi_1[6] != 2)
                    int32_t ebp_2
                    
                    if (esi_1[0x22] s< 2)
                        ebp_2 = esi_1[0x21]
                    
                    int32_t eax_24
                    
                    if (esi_1[0x22] s>= 2 || ebp_2 s< 2)
                        eax_24 = 0
                    else if (ebp_2 s>= 6)
                        int32_t eax_25
                        eax_25.b = ebp_2 != 6
                        eax_24 = eax_25 + 2
                    else
                        eax_24 = 1
                    
                    int32_t ecx_32 = (((esi_1[0xc] - 8) << 0xc) + 0x800) | eax_24 << 6
                    
                    if (esi_1[0x1b] != 0)
                        ecx_32 |= 0x20
                    
                    int32_t eax_27
                    int32_t edx_13
                    edx_13:eax_27 = mulu.dp.d(0x8421085, ecx_32)
                    esi_1[1] = 0x71
                    edx = sub_59eab0(esi_1, edx_13, (ecx_32 u/ 0x1f + 1) * 0x1f)
                    
                    if (esi_1[0x1b] != 0)
                        edx = sub_59eab0(esi_1, sub_59eab0(esi_1, edx, zx.d(*(arg1 + 0x32))), 
                            zx.d(arg1[0xc].w))
                    
                    arg1[0xc] = 1
                else
                    arg1[0xc] = 0
                    esi_1[5][esi_1[2]] = 0x1f
                    esi_1[5] += 1
                    esi_1[5][esi_1[2]] = 0x8b
                    esi_1[5] += 1
                    esi_1[5][esi_1[2]] = 8
                    esi_1[5] += 1
                    void* eax_4 = esi_1[7]
                    int32_t ebp_1 = esi_1[5]
                    
                    if (eax_4 != 0)
                        int32_t edx_1 = *(eax_4 + 0x24)
                        int32_t ecx_10 = *(eax_4 + 0x2c)
                        char edx_2 = (neg.d(edx_1)).b
                        char ecx_11 = (neg.d(ecx_10)).b
                        int32_t ecx_12 = *(eax_4 + 0x1c)
                        char ecx_13 = (neg.d(ecx_12)).b
                        int32_t ecx_14 = *(eax_4 + 0x10)
                        char ecx_15 = (neg.d(ecx_14)).b
                        edx_2 = (sbb.b(edx_2, edx_2, edx_1 != 0) & 0x10)
                            + (sbb.b(ecx_11, ecx_11, ecx_10 != 0) & 2)
                            + (sbb.b(ecx_13, ecx_13, ecx_12 != 0) & 8)
                            + (sbb.b(ecx_15, ecx_15, ecx_14 != 0) & 4)
                        eax_4.b = *eax_4 != 0
                        esi_1[2][ebp_1] = edx_2 + eax_4.b
                        esi_1[5] += 1
                        esi_1[5][esi_1[2]] = esi_1[7][1].b
                        esi_1[5] += 1
                        esi_1[5][esi_1[2]] = *(esi_1[7] + 5)
                        esi_1[5] += 1
                        esi_1[5][esi_1[2]] = *(esi_1[7] + 6)
                        esi_1[5] += 1
                        esi_1[5][esi_1[2]] = *(esi_1[7] + 7)
                        esi_1[5] += 1
                        int32_t eax_17 = esi_1[0x21]
                        char eax_18
                        
                        if (eax_17 == 9)
                            eax_18 = 2
                        else if (esi_1[0x22] s>= 2 || eax_17 s< 2)
                            eax_18 = 4
                        else
                            eax_18 = 0
                        
                        esi_1[5][esi_1[2]] = eax_18
                        esi_1[5] += 1
                        void* ecx_24
                        ecx_24.b = esi_1[7][3].b
                        esi_1[5][esi_1[2]] = ecx_24.b
                        esi_1[5] += 1
                        void* eax_20 = esi_1[7]
                        char* ecx_25 = esi_1[5]
                        
                        if (*(eax_20 + 0x10) != 0)
                            eax_20.b = *(eax_20 + 0x14)
                            ecx_25[esi_1[2]] = eax_20.b
                            esi_1[5] += 1
                            void* ecx_26
                            ecx_26.b = *(esi_1[7] + 0x15)
                            esi_1[5][esi_1[2]] = ecx_26.b
                            esi_1[5] += 1
                            ecx_25 = esi_1[5]
                        
                        edx = esi_1[7]
                        
                        if (*(edx + 0x2c) != 0)
                            int32_t eax_22 = arg1[0xc]
                            int32_t eax_23
                            eax_23, edx = sub_59e5b0(eax_22, edx, esi_1[2], eax_22, ecx_25)
                            arg1[0xc] = eax_23
                        
                        esi_1[8] = 0
                        esi_1[1] = 0x45
                    else
                        esi_1[2][ebp_1] = 0
                        esi_1[5] += 1
                        esi_1[5][esi_1[2]] = 0
                        esi_1[5] += 1
                        esi_1[5][esi_1[2]] = 0
                        esi_1[5] += 1
                        esi_1[5][esi_1[2]] = 0
                        esi_1[5] += 1
                        esi_1[5][esi_1[2]] = 0
                        esi_1[5] += 1
                        int32_t eax_10 = esi_1[0x21]
                        char eax_11
                        
                        if (eax_10 == 9)
                            eax_11 = 2
                        else if (esi_1[0x22] s>= 2 || eax_10 s< 2)
                            eax_11 = 4
                        else
                            eax_11 = 0
                        
                        edx = esi_1[2]
                        *(esi_1[5] + edx) = eax_11
                        esi_1[5] += 1
                        esi_1[5][esi_1[2]] = 0xb
                        esi_1[5] += 1
                        esi_1[1] = 0x71
            
            if (esi_1[1] == 0x45)
                void* eax_32 = esi_1[7]
                
                if (*(eax_32 + 0x10) == 0)
                    esi_1[1] = 0x49
                else
                    edx = esi_1[5]
                    
                    if (esi_1[8] u< zx.d(*(eax_32 + 0x14)))
                        do
                            char* eax_35 = esi_1[5]
                            
                            if (eax_35 == esi_1[3])
                                if (esi_1[7][0xb] != 0 && eax_35 u> edx)
                                    void* eax_33 = eax_35 - edx
                                    int32_t edx_15 = arg1[0xc]
                                    arg1[0xc] =
                                        sub_59e5b0(eax_33, edx_15, esi_1[2] + edx, edx_15, eax_33)
                                
                                sub_59eae0(arg1)
                                eax_35 = esi_1[5]
                                edx = eax_35
                                
                                if (eax_35 == esi_1[3])
                                    break
                            
                            char* ecx_45
                            ecx_45.b = esi_1[7][4][esi_1[8]]
                            eax_35[esi_1[2]] = ecx_45.b
                            esi_1[5] += 1
                            esi_1[8] += 1
                        while (esi_1[8] u< zx.d(esi_1[7][5].w))
                    
                    if (esi_1[7][0xb] != 0)
                        int32_t eax_38 = esi_1[5]
                        
                        if (eax_38 u> edx)
                            void* eax_39 = eax_38 - edx
                            int32_t edx_16 = arg1[0xc]
                            int32_t eax_40
                            eax_40, edx = sub_59e5b0(eax_39, edx_16, esi_1[2] + edx, edx_16, eax_39)
                            arg1[0xc] = eax_40
                    
                    if (esi_1[8] == esi_1[7][5])
                        esi_1[8] = 0
                        esi_1[1] = 0x49
            
            if (esi_1[1] == 0x49)
                edx = esi_1[7]
                
                if (*(edx + 0x1c) == 0)
                    esi_1[1] = 0x5b
                else
                    edx = esi_1[5]
                    uint32_t i
                    
                    do
                        char* eax_44 = esi_1[5]
                        
                        if (eax_44 == esi_1[3])
                            if (esi_1[7][0xb] != 0 && eax_44 u> edx)
                                void* eax_42 = eax_44 - edx
                                int32_t edx_17 = arg1[0xc]
                                arg1[0xc] =
                                    sub_59e5b0(eax_42, edx_17, esi_1[2] + edx, edx_17, eax_42)
                            
                            sub_59eae0(arg1)
                            eax_44 = esi_1[5]
                            edx = eax_44
                            
                            if (eax_44 == esi_1[3])
                                i = 1
                                break
                        
                        int32_t ecx_53 = esi_1[8]
                        i = zx.d(*(esi_1[7][7] + ecx_53))
                        esi_1[8] = ecx_53 + 1
                        eax_44[esi_1[2]] = i.b
                        esi_1[5] += 1
                    while (i != 0)
                    
                    if (esi_1[7][0xb] != 0)
                        int32_t eax_46 = esi_1[5]
                        
                        if (eax_46 u> edx)
                            void* eax_47 = eax_46 - edx
                            int32_t edx_18 = arg1[0xc]
                            int32_t eax_48
                            eax_48, edx = sub_59e5b0(eax_47, edx_18, esi_1[2] + edx, edx_18, eax_47)
                            arg1[0xc] = eax_48
                    
                    if (i == 0)
                        esi_1[8] = i
                        esi_1[1] = 0x5b
            
            if (esi_1[1] == 0x5b)
                uint32_t i_1
                
                if (esi_1[7][9] != 0)
                    edx = esi_1[5]
                    
                    do
                        char* eax_52 = esi_1[5]
                        
                        if (eax_52 == esi_1[3])
                            if (esi_1[7][0xb] != 0 && eax_52 u> edx)
                                void* eax_50 = eax_52 - edx
                                int32_t edx_19 = arg1[0xc]
                                arg1[0xc] =
                                    sub_59e5b0(eax_50, edx_19, esi_1[2] + edx, edx_19, eax_50)
                            
                            sub_59eae0(arg1)
                            eax_52 = esi_1[5]
                            edx = eax_52
                            
                            if (eax_52 == esi_1[3])
                                i_1 = 1
                                break
                        
                        int32_t ecx_61 = esi_1[8]
                        i_1 = zx.d(*(esi_1[7][9] + ecx_61))
                        esi_1[8] = ecx_61 + 1
                        eax_52[esi_1[2]] = i_1.b
                        esi_1[5] += 1
                    while (i_1 != 0)
                    
                    if (esi_1[7][0xb] != 0)
                        int32_t eax_54 = esi_1[5]
                        
                        if (eax_54 u> edx)
                            void* eax_55 = eax_54 - edx
                            int32_t edx_20 = arg1[0xc]
                            int32_t eax_56
                            eax_56, edx = sub_59e5b0(eax_55, edx_20, esi_1[2] + edx, edx_20, eax_55)
                            arg1[0xc] = eax_56
                
                if (esi_1[7][9] == 0 || i_1 == 0)
                    esi_1[1] = 0x67
            
            if (esi_1[1] == 0x67)
                if (esi_1[7][0xb] == 0)
                    esi_1[1] = 0x71
                else
                    if (esi_1[5] + 2 u> esi_1[3])
                        sub_59eae0(arg1)
                    
                    char* eax_58 = esi_1[5]
                    edx = &eax_58[2]
                    
                    if (edx u<= esi_1[3])
                        eax_58[esi_1[2]] = arg1[0xc].b
                        esi_1[5] += 1
                        edx = zx.d(*(arg1 + 0x31))
                        esi_1[5][esi_1[2]] = edx.b
                        esi_1[5] += 1
                        arg1[0xc] = 0
                        esi_1[1] = 0x71
            
            if (esi_1[5] != 0)
                edx = sub_59eae0(arg1)
            
            if (esi_1[5] != 0 && arg1[4] == 0)
                esi_1[0xa] = 0xffffffff
                return 0
            
            int32_t eax_60 = esi_1[1]
            
            if (eax_60 == 0x29a)
                if (arg1[1] != 0)
                    arg1[6] = "buffer error"
                    return 0xfffffffb
                
                if (esi_1[0x1d] != 0 || eax_60 != 0x29a)
                    goto label_59f0dd
            else if (arg1[1] != 0 || esi_1[0x1d] != 0 || eax_60 != 0x29a)
            label_59f0dd:
                int32_t eax_62 = esi_1[0x22]
                int32_t eax_63
                
                if (eax_62 == 2)
                    eax_63, edx = sub_5a03f0(esi_1)
                else if (eax_62 != 3)
                    eax_63, edx = (&data_7481e0)[esi_1[0x21] * 3](esi_1, 4)
                else
                    eax_63, edx = sub_5a0170(esi_1)
                
                if (eax_63 == 2 || eax_63 == 3)
                    esi_1[1] = 0x29a
                
                if (eax_63 == 0 || eax_63 == 2)
                    if (arg1[4] != 0)
                        return 0
                    
                    esi_1[0xa] = 0xffffffff
                    return 0
                
                if (eax_63 == 1)
                    sub_5a35c0(esi_1, edx, 0, nullptr, 0)
                    edx = sub_59eae0(arg1)
                    
                    if (arg1[4] == 0)
                        esi_1[0xa] = 0xffffffff
                        return 0
            
            int32_t eax_67 = esi_1[6]
            
            if (eax_67 s<= 0)
                return 1
            
            if (eax_67 != 2)
                sub_59eab0(esi_1, sub_59eab0(esi_1, edx, zx.d(*(arg1 + 0x32))), zx.d(arg1[0xc].w))
            else
                esi_1[5][esi_1[2]] = arg1[0xc].b
                esi_1[5] += 1
                esi_1[5][esi_1[2]] = *(arg1 + 0x31)
                esi_1[5] += 1
                esi_1[5][esi_1[2]] = *(arg1 + 0x32)
                esi_1[5] += 1
                esi_1[5][esi_1[2]] = *(arg1 + 0x33)
                esi_1[5] += 1
                esi_1[5][esi_1[2]] = arg1[2].b
                esi_1[5] += 1
                esi_1[5][esi_1[2]] = *(arg1 + 9)
                esi_1[5] += 1
                esi_1[5][esi_1[2]] = *(arg1 + 0xa)
                esi_1[5] += 1
                esi_1[5][esi_1[2]] = *(arg1 + 0xb)
                esi_1[5] += 1
            
            sub_59eae0(arg1)
            int32_t eax_78 = esi_1[6]
            
            if (eax_78 s> 0)
                esi_1[6] = neg.d(eax_78)
            
            int32_t result
            result.b = esi_1[5] == 0
            return result
        
        arg1[6] = "stream error"

return 0xfffffffe
