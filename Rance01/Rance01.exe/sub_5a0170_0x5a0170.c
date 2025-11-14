// 函数: sub_5a0170
// 地址: 0x5a0170
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

while (true)
    int32_t ebx_1 = arg1[0x1d]
    
    if (ebx_1 u<= 0x102)
        sub_59f5a0(arg1)
        ebx_1 = arg1[0x1d]
        
        if (ebx_1 == 0)
            void* ecx_13 = arg1[0x17]
            arg1[0x5ad] = 0
            void* eax_12
            
            if (ecx_13 s< 0)
                eax_12 = nullptr
            else
                eax_12 = arg1[0xe] + ecx_13
            
            int32_t var_10_3 = 1
            char* edx_14 = arg1[0x1b] - ecx_13
            char* var_14_3 = edx_14
            sub_5a3660(arg1, edx_14, ecx_13, eax_12)
            void* edi_3 = *arg1
            arg1[0x17] = arg1[0x1b]
            sub_59eae0(edi_3)
            int32_t eax_15
            eax_15.b = *(*arg1 + 0x10) != 0
            return eax_15 + 2
    
    arg1[0x18] = 0
    int128_t* i
    
    if (ebx_1 u>= 3)
        i = arg1[0x1b]
        
        if (i != 0)
            void* edx_2 = arg1[0xe] + i
            uint32_t ecx_1 = zx.d(*(edx_2 - 1))
            
            if (ecx_1 == zx.d(*edx_2) && ecx_1 == zx.d(*(edx_2 + 1)))
                i = edx_2 + 2
                
                if (ecx_1 == zx.d(*(edx_2 + 2)))
                    do
                        uint32_t ebp_4 = zx.d(*(i + 1))
                        i += 1
                        
                        if (ecx_1 != ebp_4)
                            break
                        
                        uint32_t ebp_5 = zx.d(*(i + 1))
                        i += 1
                        
                        if (ecx_1 != ebp_5)
                            break
                        
                        uint32_t ebp_6 = zx.d(*(i + 1))
                        i += 1
                        
                        if (ecx_1 != ebp_6)
                            break
                        
                        uint32_t ebp_7 = zx.d(*(i + 1))
                        i += 1
                        
                        if (ecx_1 != ebp_7)
                            break
                        
                        uint32_t ebp_8 = zx.d(*(i + 1))
                        i += 1
                        
                        if (ecx_1 != ebp_8)
                            break
                        
                        uint32_t ebp_9 = zx.d(*(i + 1))
                        i += 1
                        
                        if (ecx_1 != ebp_9)
                            break
                        
                        uint32_t ebp_10 = zx.d(*(i + 1))
                        i += 1
                        
                        if (ecx_1 != ebp_10)
                            break
                        
                        uint32_t ebp_11 = zx.d(*(i + 1))
                        i += 1
                        
                        if (ecx_1 != ebp_11)
                            break
                    while (i u< edx_2 + 0x102)
                    
                    arg1[0x18] = i - (edx_2 + 0x102) + 0x102
                    
                    if (i - (edx_2 + 0x102) + 0x102 u> ebx_1)
                        arg1[0x18] = ebx_1
    
    int32_t edx_4 = arg1[0x5a8]
    int32_t ecx_6
    
    if (arg1[0x18] u< 3)
        char* eax_3
        eax_3.b = arg1[0xe][arg1[0x1b]]
        *(arg1[0x5a9] + (edx_4 << 1)) = 0
        arg1[0x5a6][arg1[0x5a8]] = eax_3.b
        arg1[0x5a8] += 1
        uint32_t edx_9 = zx.d(eax_3.b)
        arg1[edx_9 + 0x25].w += 1
        ecx_6.b = arg1[0x5a8] == arg1[0x5a7] - 1
        arg1[0x1d] -= 1
        arg1[0x1b] += 1
    else
        i.b = arg1[0x18].b
        i.b -= 3
        *(arg1[0x5a9] + (edx_4 << 1)) = 1
        arg1[0x5a6][arg1[0x5a8]] = i.b
        arg1[0x5a8] += 1
        uint32_t eax_2 = zx.d(*(zx.d(i.b) + 0x746cd0))
        arg1[eax_2 + 0x126].w += 1
        arg1[0x262].w += 1
        i = arg1[0x18]
        bool cond:0_1 = arg1[0x5a8] == arg1[0x5a7] - 1
        arg1[0x18] = 0
        int32_t edx_7
        edx_7.b = cond:0_1
        arg1[0x1d] -= i
        arg1[0x1b] += i
        ecx_6 = edx_7
    
    if (ecx_6 != 0)
        void* ecx_10 = arg1[0x17]
        void* eax_6
        
        if (ecx_10 s< 0)
            eax_6 = nullptr
        else
            eax_6 = arg1[0xe] + ecx_10
        
        int32_t var_10_1 = 0
        char* edx_11 = arg1[0x1b] - ecx_10
        char* var_14_1 = edx_11
        sub_5a3660(arg1, edx_11, ecx_10, eax_6)
        void* edi_2 = *arg1
        arg1[0x17] = arg1[0x1b]
        void* ebp_12 = *(edi_2 + 0x1c)
        sub_5a3ce0(ebp_12)
        int128_t* i_1 = *(ebp_12 + 0x14)
        i = *(edi_2 + 0x10)
        
        if (i_1 u> i)
            i_1 = i
        
        if (i_1 != 0)
            sub_6c02a0(*(edi_2 + 0xc), *(ebp_12 + 0x10), i_1)
            *(edi_2 + 0xc) += i_1
            *(ebp_12 + 0x10) += i_1
            *(edi_2 + 0x14) += i_1
            *(edi_2 + 0x10) -= i_1
            int32_t temp0_1 = *(ebp_12 + 0x14)
            *(ebp_12 + 0x14) -= i_1
            
            if (temp0_1 == i_1)
                *(ebp_12 + 0x10) = *(ebp_12 + 8)
        
        if (*(*arg1 + 0x10) == 0)
            break

return 0
