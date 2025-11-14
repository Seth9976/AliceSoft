// 函数: sub_59fce0
// 地址: 0x59fce0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

while (true)
    int32_t ecx_1 = arg1[0x1d]
    
    if (ecx_1 u< 0x106)
        sub_59f5a0(arg1)
        ecx_1 = arg1[0x1d]
        
        if (ecx_1 u< 0x106 && arg2 == 0)
            break
        
        if (ecx_1 == 0)
            if (arg1[0x1a] != 0)
                int32_t eax_38
                eax_38.b = *(arg1[0x1b] + arg1[0xe] - 1)
                *(arg1[0x5a9] + (arg1[0x5a8] << 1)) = 0
                arg1[0x5a6][arg1[0x5a8]] = eax_38.b
                arg1[0x5a8] += 1
                uint32_t eax_39 = zx.d(eax_38.b)
                arg1[eax_39 + 0x25].w += 1
                arg1[0x1a] = 0
            
            int32_t eax_41 = arg1[0x1b]
            int32_t ecx_34 = eax_41
            
            if (eax_41 u>= 2)
                ecx_34 = 2
            
            arg1[0x5ad] = ecx_34
            
            if (arg2 == 4)
                char* edx_29 = arg1[0x17]
                void* ecx_36
                
                if (edx_29 s< 0)
                    ecx_36 = nullptr
                else
                    ecx_36 = &edx_29[arg1[0xe]]
                
                int32_t var_14_5 = 1
                void* var_18_5 = eax_41 - edx_29
                sub_5a3660(arg1, edx_29, ecx_36, ecx_36)
                void* edi_8 = *arg1
                arg1[0x17] = arg1[0x1b]
                sub_59eae0(edi_8)
                int32_t eax_44
                eax_44.b = *(*arg1 + 0x10) != 0
                return eax_44 + 2
            
            if (arg1[0x5a8] != 0)
                char* edx_31 = arg1[0x17]
                void* ecx_39
                
                if (edx_31 s< 0)
                    ecx_39 = nullptr
                else
                    ecx_39 = &edx_31[arg1[0xe]]
                
                int32_t var_14_6 = 0
                void* var_18_6 = eax_41 - edx_31
                sub_5a3660(arg1, edx_31, ecx_39, ecx_39)
                void* edi_9 = *arg1
                arg1[0x17] = arg1[0x1b]
                sub_59eae0(edi_9)
            
            if (arg1[0x5a8] == 0 || *(*arg1 + 0x10) != 0)
                return 1
            
            break
    
    uint32_t eax_5 = 0
    
    if (ecx_1 u>= 3)
        int32_t edx_1 = arg1[0x1b]
        int32_t eax_4 = (arg1[0x12] << (arg1[0x16]).b ^ zx.d(*(arg1[0xe] + edx_1 + 2))) & arg1[0x15]
        int32_t ecx_5 = arg1[0x11]
        int32_t edi_3 = arg1[0xd] & edx_1
        int32_t edx_2 = arg1[0x10]
        arg1[0x12] = eax_4
        eax_4.w = *(ecx_5 + (eax_4 << 1))
        *(edx_2 + (edi_3 << 1)) = eax_4.w
        eax_5 = zx.d(*(arg1[0x10] + ((arg1[0x1b] & arg1[0xd]) << 1)))
        edi_3.w = arg1[0x1b].w
        *(arg1[0x11] + (arg1[0x12] << 1)) = edi_3.w
    
    int32_t ecx_9 = arg1[0x18]
    int32_t edx_5 = arg1[0x1c]
    arg1[0x1e] = ecx_9
    arg1[0x19] = edx_5
    arg1[0x18] = 2
    
    if (eax_5 != 0 && ecx_9 u< arg1[0x20] && arg1[0x1b] - eax_5 u<= arg1[0xb] - 0x106)
        char* eax_6
        eax_6, edx_5 = sub_59f440(eax_5, arg1)
        arg1[0x18] = eax_6
        
        if (eax_6 u<= 5)
            if (arg1[0x22] == 1)
                arg1[0x18] = 2
            else if (eax_6 == 3 && arg1[0x1b] - arg1[0x1c] u> 0x1000)
                arg1[0x18] = 2
    
    int32_t eax_7 = arg1[0x1e]
    bool cond:1_1
    
    if (eax_7 u>= 3 && arg1[0x18] u<= eax_7)
        edx_5.w = arg1[0x1b].w
        edx_5.w -= arg1[0x19].w
        int32_t edi_5 = arg1[0x1b] + arg1[0x1d] - 3
        int32_t eax_8
        eax_8.b = arg1[0x1e].b
        edx_5.w -= 1
        int16_t ecx_13 = edx_5.w
        *(arg1[0x5a9] + (arg1[0x5a8] << 1)) = ecx_13
        eax_8.b -= 3
        arg1[0x5a6][arg1[0x5a8]] = eax_8.b
        arg1[0x5a8] += 1
        uint32_t edx_10 = zx.d(*(zx.d(eax_8.b) + 0x746cd0))
        arg1[edx_10 + 0x126].w += 1
        uint32_t eax_10
        
        if (ecx_13 - 1 u>= 0x100)
            eax_10 = zx.d(*((zx.d(ecx_13 - 1) u>> 7) + 0x746bd0))
        else
            eax_10 = zx.d(*(zx.d(ecx_13 - 1) + 0x746ad0))
        
        arg1[eax_10 + 0x262].w += 1
        int32_t eax_13 = arg1[0x1e]
        int32_t* ecx_16
        ecx_16.b = arg1[0x5a8] == arg1[0x5a7] - 1
        arg1[0x1d] += 1 - eax_13
        arg1[0x1e] = eax_13 - 2
        int32_t i
        
        do
            arg1[0x1b] += 1
            int32_t edx_14 = arg1[0x1b]
            
            if (edx_14 u<= edi_5)
                int32_t ebp_3 = arg1[0xd]
                int32_t eax_18 =
                    (arg1[0x12] << (arg1[0x16]).b ^ zx.d(*(arg1[0xe] + edx_14 + 2))) & arg1[0x15]
                int32_t ecx_20 = arg1[0x11]
                arg1[0x12] = eax_18
                *(arg1[0x10] + ((ebp_3 & edx_14) << 1)) = *(ecx_20 + (eax_18 << 1))
                *(arg1[0x11] + (arg1[0x12] << 1)) = arg1[0x1b].w
            
            i = arg1[0x1e]
            arg1[0x1e] -= 1
        while (i != 1)
        arg1[0x1b] += 1
        int32_t eax_21 = arg1[0x1b]
        arg1[0x1a] = 0
        arg1[0x18] = 2
        
        if (ecx_16 == 0)
            continue
        else
            char* edx_17 = arg1[0x17]
            void* ecx_23
            
            if (edx_17 s< 0)
                ecx_23 = nullptr
            else
                ecx_23 = &edx_17[arg1[0xe]]
            
            int32_t var_14_1 = 0
            void* var_18_1 = eax_21 - edx_17
            sub_5a3660(arg1, edx_17, ecx_23, ecx_23)
            void* edi_6 = *arg1
            arg1[0x17] = arg1[0x1b]
            void* ebx_1 = *(edi_6 + 0x1c)
            sub_5a3ce0(ebx_1)
            void* ebp_5 = *(ebx_1 + 0x14)
            void* eax_25 = *(edi_6 + 0x10)
            
            if (ebp_5 u> eax_25)
                ebp_5 = eax_25
            
            if (ebp_5 != 0)
                sub_6c02a0(*(edi_6 + 0xc), *(ebx_1 + 0x10), ebp_5)
                *(edi_6 + 0xc) += ebp_5
                *(ebx_1 + 0x10) += ebp_5
                *(edi_6 + 0x14) += ebp_5
                *(edi_6 + 0x10) -= ebp_5
                int32_t temp2_1 = *(ebx_1 + 0x14)
                *(ebx_1 + 0x14) -= ebp_5
                
                if (temp2_1 == ebp_5)
                    *(ebx_1 + 0x10) = *(ebx_1 + 8)
            
            cond:1_1 = *(*arg1 + 0x10) != 0
    else if (arg1[0x1a] == 0)
        arg1[0x1b] += 1
        arg1[0x1d] -= 1
        arg1[0x1a] = 1
        continue
    else
        int32_t eax_28
        eax_28.b = *(arg1[0x1b] + arg1[0xe] - 1)
        *(arg1[0x5a9] + (arg1[0x5a8] << 1)) = 0
        arg1[0x5a6][arg1[0x5a8]] = eax_28.b
        arg1[0x5a8] += 1
        uint32_t edx_22 = zx.d(eax_28.b)
        arg1[edx_22 + 0x25].w += 1
        
        if (arg1[0x5a8] == arg1[0x5a7] - 1)
            void* ecx_29 = arg1[0x17]
            void* eax_32
            
            if (ecx_29 s< 0)
                eax_32 = nullptr
            else
                eax_32 = arg1[0xe] + ecx_29
            
            int32_t var_14_3 = 0
            char* edx_24 = arg1[0x1b] - ecx_29
            char* var_18_3 = edx_24
            sub_5a3660(arg1, edx_24, ecx_29, eax_32)
            void* edi_7 = *arg1
            arg1[0x17] = arg1[0x1b]
            void* ebx_2 = *(edi_7 + 0x1c)
            sub_5a3ce0(ebx_2)
            void* ebp_6 = *(ebx_2 + 0x14)
            void* eax_36 = *(edi_7 + 0x10)
            
            if (ebp_6 u> eax_36)
                ebp_6 = eax_36
            
            if (ebp_6 != 0)
                sub_6c02a0(*(edi_7 + 0xc), *(ebx_2 + 0x10), ebp_6)
                *(edi_7 + 0xc) += ebp_6
                *(ebx_2 + 0x10) += ebp_6
                *(edi_7 + 0x14) += ebp_6
                *(edi_7 + 0x10) -= ebp_6
                int32_t temp1_1 = *(ebx_2 + 0x14)
                *(ebx_2 + 0x14) -= ebp_6
                
                if (temp1_1 == ebp_6)
                    *(ebx_2 + 0x10) = *(ebx_2 + 8)
        
        int32_t ecx_31 = *arg1
        arg1[0x1b] += 1
        arg1[0x1d] -= 1
        cond:1_1 = *(ecx_31 + 0x10) != 0
    
    if (not(cond:1_1))
        break

return 0
