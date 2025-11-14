// 函数: sub_59f760
// 地址: 0x59f760
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ecx
int32_t var_4_1 = ecx
int32_t eax_1 = arg1[3] - 5
int32_t var_4 = 0xffff

if (eax_1 u< 0xffff)
    var_4 = eax_1

while (true)
    int32_t eax_2 = arg1[0x1d]
    
    if (eax_2 u<= 1)
        sub_59f5a0(arg1)
        eax_2 = arg1[0x1d]
        
        if (eax_2 == 0)
            if (arg2 != 0)
                arg1[0x5ad] = 0
                
                if (arg2 == 4)
                    void* ecx_9 = arg1[0x17]
                    void* eax_21
                    
                    if (ecx_9 s< 0)
                        eax_21 = nullptr
                    else
                        eax_21 = arg1[0xe] + ecx_9
                    
                    int32_t var_18_5 = 1
                    char* edx_11 = arg1[0x1b] - ecx_9
                    char* var_1c_5 = edx_11
                    sub_5a3660(arg1, edx_11, ecx_9, eax_21)
                    void* edi_4 = *arg1
                    arg1[0x17] = arg1[0x1b]
                    sub_59eae0(edi_4)
                    int32_t eax_24
                    eax_24.b = *(*arg1 + 0x10) != 0
                    return eax_24 + 2
                
                int32_t eax_26 = arg1[0x1b]
                char* edx_12 = arg1[0x17]
                
                if (eax_26 s> edx_12)
                    void* ecx_13
                    
                    if (edx_12 s< 0)
                        ecx_13 = nullptr
                    else
                        ecx_13 = &edx_12[arg1[0xe]]
                    
                    int32_t var_18_6 = 0
                    void* var_1c_6 = eax_26 - edx_12
                    sub_5a3660(arg1, edx_12, ecx_13, ecx_13)
                    void* edi_5 = *arg1
                    arg1[0x17] = arg1[0x1b]
                    sub_59eae0(edi_5)
                
                if (eax_26 s<= edx_12 || *(*arg1 + 0x10) != 0)
                    return 1
            
            break
    
    int32_t temp0_1 = arg1[0x1b]
    arg1[0x1b] += eax_2
    void* ecx_1 = arg1[0x17]
    int32_t edx_1 = arg1[0x1b]
    arg1[0x1d] = 0
    void* eax_4 = ecx_1 + var_4
    
    if (temp0_1 == neg.d(eax_2) || edx_1 u>= eax_4)
        arg1[0x1d] = edx_1 - eax_4
        arg1[0x1b] = eax_4
        char* edx_4
        
        if (ecx_1 s< 0)
            edx_4 = nullptr
        else
            edx_4 = arg1[0xe] + ecx_1
        
        int32_t var_18_1 = 0
        void* var_1c_1 = eax_4 - ecx_1
        sub_5a3660(arg1, edx_4, ecx_1, edx_4)
        void* edi_2 = *arg1
        arg1[0x17] = arg1[0x1b]
        void* ebx_1 = *(edi_2 + 0x1c)
        sub_5a3ce0(ebx_1)
        void* ebp_1 = *(ebx_1 + 0x14)
        void* eax_8 = *(edi_2 + 0x10)
        
        if (ebp_1 u> eax_8)
            ebp_1 = eax_8
        
        if (ebp_1 != 0)
            sub_6c02a0(*(edi_2 + 0xc), *(ebx_1 + 0x10), ebp_1)
            *(edi_2 + 0xc) += ebp_1
            *(ebx_1 + 0x10) += ebp_1
            *(edi_2 + 0x14) += ebp_1
            *(edi_2 + 0x10) -= ebp_1
            int32_t temp1_1 = *(ebx_1 + 0x14)
            *(ebx_1 + 0x14) -= ebp_1
            
            if (temp1_1 == ebp_1)
                *(ebx_1 + 0x10) = *(ebx_1 + 8)
        
        if (*(*arg1 + 0x10) == 0)
            break
    
    char* edx_7 = arg1[0x17]
    void* ecx_5 = arg1[0x1b] - edx_7
    
    if (ecx_5 u>= arg1[0xb] - 0x106)
        void* eax_13
        
        if (edx_7 s< 0)
            eax_13 = nullptr
        else
            eax_13 = &edx_7[arg1[0xe]]
        
        int32_t var_18_3 = 0
        void* var_1c_3 = ecx_5
        sub_5a3660(arg1, edx_7, ecx_5, eax_13)
        void* edi_3 = *arg1
        arg1[0x17] = arg1[0x1b]
        void* ebx_2 = *(edi_3 + 0x1c)
        sub_5a3ce0(ebx_2)
        void* ebp_2 = *(ebx_2 + 0x14)
        void* eax_16 = *(edi_3 + 0x10)
        
        if (ebp_2 u> eax_16)
            ebp_2 = eax_16
        
        if (ebp_2 != 0)
            sub_6c02a0(*(edi_3 + 0xc), *(ebx_2 + 0x10), ebp_2)
            *(edi_3 + 0xc) += ebp_2
            *(ebx_2 + 0x10) += ebp_2
            *(edi_3 + 0x14) += ebp_2
            *(edi_3 + 0x10) -= ebp_2
            int32_t temp2_1 = *(ebx_2 + 0x14)
            *(ebx_2 + 0x14) -= ebp_2
            
            if (temp2_1 == ebp_2)
                *(ebx_2 + 0x10) = *(ebx_2 + 8)
        
        if (*(*arg1 + 0x10) == 0)
            break

return 0
