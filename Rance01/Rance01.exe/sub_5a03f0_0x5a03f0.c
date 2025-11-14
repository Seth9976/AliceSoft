// 函数: sub_5a03f0
// 地址: 0x5a03f0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

while (true)
    if (arg1[0x1d] == 0)
        sub_59f5a0(arg1)
        
        if (arg1[0x1d] == 0)
            void* ecx_8 = arg1[0x17]
            arg1[0x5ad] = 0
            void* eax_11
            
            if (ecx_8 s< 0)
                eax_11 = nullptr
            else
                eax_11 = arg1[0xe] + ecx_8
            
            int32_t var_10_3 = 1
            char* edx_9 = arg1[0x1b] - ecx_8
            char* var_14_3 = edx_9
            sub_5a3660(arg1, edx_9, ecx_8, eax_11)
            void* edi_3 = *arg1
            arg1[0x17] = arg1[0x1b]
            sub_59eae0(edi_3)
            int32_t eax_14
            eax_14.b = *(*arg1 + 0x10) != 0
            return eax_14 + 2
    
    char* eax_1 = arg1[0x1b]
    int32_t ecx_1 = arg1[0xe]
    int32_t edx_1 = arg1[0x5a8]
    arg1[0x18] = 0
    eax_1.b = eax_1[ecx_1]
    *(arg1[0x5a9] + (edx_1 << 1)) = 0
    arg1[0x5a6][arg1[0x5a8]] = eax_1.b
    uint32_t edx_3 = zx.d(eax_1.b)
    arg1[0x5a8] += 1
    arg1[edx_3 + 0x25].w += 1
    arg1[0x1b] += 1
    arg1[0x1d] -= 1
    
    if (arg1[0x5a8] == arg1[0x5a7] - 1)
        char* edx_6 = arg1[0x17]
        void* ecx_5
        
        if (edx_6 s< 0)
            ecx_5 = nullptr
        else
            ecx_5 = &edx_6[arg1[0xe]]
        
        int32_t var_10_1 = 0
        void* var_14_1 = arg1[0x1b] - edx_6
        sub_5a3660(arg1, edx_6, ecx_5, ecx_5)
        void* edi_2 = *arg1
        arg1[0x17] = arg1[0x1b]
        void* ebx_1 = *(edi_2 + 0x1c)
        sub_5a3ce0(ebx_1)
        void* ebp_1 = *(ebx_1 + 0x14)
        void* eax_7 = *(edi_2 + 0x10)
        
        if (ebp_1 u> eax_7)
            ebp_1 = eax_7
        
        if (ebp_1 != 0)
            sub_6c02a0(*(edi_2 + 0xc), *(ebx_1 + 0x10), ebp_1)
            *(edi_2 + 0xc) += ebp_1
            *(ebx_1 + 0x10) += ebp_1
            *(edi_2 + 0x14) += ebp_1
            *(edi_2 + 0x10) -= ebp_1
            int32_t temp0_1 = *(ebx_1 + 0x14)
            *(ebx_1 + 0x14) -= ebp_1
            
            if (temp0_1 == ebp_1)
                *(ebx_1 + 0x10) = *(ebx_1 + 8)
        
        if (*(*arg1 + 0x10) == 0)
            break

return 0
