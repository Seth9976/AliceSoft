// 函数: sub_59f970
// 地址: 0x59f970
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

while (true)
    uint32_t eax_1 = arg1[0x1d]
    
    if (eax_1 u< 0x106)
        sub_59f5a0(arg1)
        eax_1 = arg1[0x1d]
        
        if (eax_1 u< 0x106 && arg2 == 0)
            break
        
        if (eax_1 == 0)
            int32_t eax_32 = arg1[0x1b]
            int32_t ecx_20 = eax_32
            
            if (eax_32 u>= 2)
                ecx_20 = 2
            
            arg1[0x5ad] = ecx_20
            
            if (arg2 == 4)
                char* edx_25 = arg1[0x17]
                void* ecx_22
                
                if (edx_25 s< 0)
                    ecx_22 = nullptr
                else
                    ecx_22 = &edx_25[arg1[0xe]]
                
                int32_t var_14_3 = 1
                void* var_18_3 = eax_32 - edx_25
                sub_5a3660(arg1, edx_25, ecx_22, ecx_22)
                void* edi_8 = *arg1
                arg1[0x17] = arg1[0x1b]
                sub_59eae0(edi_8)
                int32_t ecx_23
                ecx_23.b = *(*arg1 + 0x10) != 0
                return ecx_23 + 2
            
            if (arg1[0x5a8] == 0)
                return 1
            
            char* edx_27 = arg1[0x17]
            void* ecx_25
            
            if (edx_27 s< 0)
                ecx_25 = nullptr
            else
                ecx_25 = &edx_27[arg1[0xe]]
            
            int32_t var_14_4 = 0
            void* var_18_4 = eax_32 - edx_27
            sub_5a3660(arg1, edx_27, ecx_25, ecx_25)
            void* edi_9 = *arg1
            arg1[0x17] = arg1[0x1b]
            sub_59eae0(edi_9)
            
            if (*(*arg1 + 0x10) != 0)
                return 1
            
            break
    
    uint32_t ecx
    
    if (eax_1 u>= 3)
        int32_t edx_1 = arg1[0x1b]
        int32_t eax_5 = (arg1[0x12] << (arg1[0x16]).b ^ zx.d(*(arg1[0xe] + edx_1 + 2))) & arg1[0x15]
        int32_t ecx_4 = arg1[0x11]
        int32_t edi_3 = arg1[0xd] & edx_1
        int32_t edx_2 = arg1[0x10]
        arg1[0x12] = eax_5
        eax_5.w = *(ecx_4 + (eax_5 << 1))
        *(edx_2 + (edi_3 << 1)) = eax_5.w
        eax_1 = zx.d(*(arg1[0x10] + ((arg1[0x1b] & arg1[0xd]) << 1)))
        edi_3.w = arg1[0x1b].w
        *(arg1[0x11] + (arg1[0x12] << 1)) = edi_3.w
        
        if (eax_1 != 0 && arg1[0x1b] - eax_1 u<= arg1[0xb] - 0x106)
            eax_1, ecx = sub_59f440(eax_1, arg1)
            arg1[0x18] = eax_1
    
    int32_t ebx_1
    
    if (arg1[0x18] u< 3)
        int32_t eax_21
        eax_21.b = arg1[0x1b][arg1[0xe]]
        *(arg1[0x5a9] + (arg1[0x5a8] << 1)) = 0
        arg1[0x5a6][arg1[0x5a8]] = eax_21.b
        arg1[0x5a8] += 1
        uint32_t eax_22 = zx.d(eax_21.b)
        arg1[eax_22 + 0x25].w += 1
        ebx_1.b = arg1[0x5a8] == arg1[0x5a7] - 1
        arg1[0x1d] -= 1
        arg1[0x1b] += 1
    else
        ecx.w = arg1[0x1b].w
        ecx.w -= arg1[0x1c].w
        eax_1.b = arg1[0x18].b
        int16_t ecx_8 = ecx.w
        *(arg1[0x5a9] + (arg1[0x5a8] << 1)) = ecx_8
        eax_1.b -= 3
        arg1[0x5a6][arg1[0x5a8]] = eax_1.b
        arg1[0x5a8] += 1
        uint32_t edx_9 = zx.d(*(zx.d(eax_1.b) + 0x746cd0))
        arg1[edx_9 + 0x126].w += 1
        uint32_t eax_7
        
        if (ecx_8 - 1 u>= 0x100)
            eax_7 = zx.d(*((zx.d(ecx_8 - 1) u>> 7) + 0x746bd0))
        else
            eax_7 = zx.d(*(zx.d(ecx_8 - 1) + 0x746ad0))
        
        arg1[eax_7 + 0x262].w += 1
        int32_t eax_10 = arg1[0x18]
        ebx_1.b = arg1[0x5a8] == arg1[0x5a7] - 1
        arg1[0x1d] -= eax_10
        
        if (eax_10 u> arg1[0x20] || arg1[0x1d] u< 3)
            arg1[0x1b] += eax_10
            char* edx_16 = arg1[0xe] + arg1[0x1b]
            char ecx_15 = (arg1[0x16]).b
            arg1[0x18] = 0
            uint32_t eax_17 = zx.d(*edx_16)
            arg1[0x12] = eax_17
            arg1[0x12] = (eax_17 << ecx_15 ^ zx.d(edx_16[1])) & arg1[0x15]
        else
            arg1[0x18] = eax_10 - 1
            int32_t i
            
            do
                arg1[0x1b] += 1
                int32_t edx_12 = arg1[0x1b]
                int32_t ecx_14 = arg1[0x11]
                int32_t eax_14 =
                    (zx.d(*(edx_12 + arg1[0xe] + 2)) ^ arg1[0x12] << (arg1[0x16]).b) & arg1[0x15]
                int32_t ebp_3 = arg1[0xd]
                arg1[0x12] = eax_14
                *(arg1[0x10] + ((ebp_3 & edx_12) << 1)) = *(ecx_14 + (eax_14 << 1))
                *(arg1[0x11] + (arg1[0x12] << 1)) = arg1[0x1b].w
                i = arg1[0x18]
                arg1[0x18] -= 1
            while (i != 1)
            arg1[0x1b] += 1
    
    if (ebx_1 != 0)
        void* ecx_18 = arg1[0x17]
        void* eax_25
        
        if (ecx_18 s< 0)
            eax_25 = nullptr
        else
            eax_25 = arg1[0xe] + ecx_18
        
        int32_t var_14_1 = 0
        char* edx_23 = arg1[0x1b] - ecx_18
        char* var_18_1 = edx_23
        sub_5a3660(arg1, edx_23, ecx_18, eax_25)
        void* edi_7 = *arg1
        arg1[0x17] = arg1[0x1b]
        void* ebp_5 = *(edi_7 + 0x1c)
        sub_5a3ce0(ebp_5)
        void* ebx_2 = *(ebp_5 + 0x14)
        void* eax_29 = *(edi_7 + 0x10)
        
        if (ebx_2 u> eax_29)
            ebx_2 = eax_29
        
        if (ebx_2 != 0)
            sub_6c02a0(*(edi_7 + 0xc), *(ebp_5 + 0x10), ebx_2)
            *(edi_7 + 0xc) += ebx_2
            *(ebp_5 + 0x10) += ebx_2
            *(edi_7 + 0x14) += ebx_2
            *(edi_7 + 0x10) -= ebx_2
            int32_t temp1_1 = *(ebp_5 + 0x14)
            *(ebp_5 + 0x14) -= ebx_2
            
            if (temp1_1 == ebx_2)
                *(ebp_5 + 0x10) = *(ebp_5 + 8)
        
        if (*(*arg1 + 0x10) == 0)
            break

return 0
