// 函数: sub_6e4020
// 地址: 0x6e4020
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ebx = *(arg1 + 0x20)
int32_t eax = *(arg1 + 0x34)

if (eax != 2 && eax != 1 && eax != 5)
    return eax

int32_t eax_1 = *(arg1 + 0x68)

if (eax_1 != 0)
    int32_t eax_2 = *(arg1 + 0x10)
    eax_1 = eax_2 - *(arg1 + 8)
    
    if (eax_2 == *(arg1 + 8))
        int32_t eax_4
        int32_t edx_1
        edx_1:eax_4 = sx.q(*(arg1 + 0x28))
        eax_1 = (eax_4 ^ edx_1) - edx_1
    
    int32_t edi_1 = *(arg1 + 0x30)
    int32_t edx_4 = (*(arg1 + 0xc) - *(arg1 + 4)) * edi_1
    
    if (edx_4 == 0)
        edx_4 = *(arg1 + 0x24) * edi_1
    
    int32_t ebp
    
    if (edi_1 == 3)
        int32_t i = eax_1 - 1
        
        if (eax_1 != 0)
            int32_t var_30_2 = ebp
            
            do
                eax_1 = 0
                
                if (edx_4 s> 0)
                    int32_t var_2c_2 = edx_4
                    
                    do
                        char* ebx_17 = i * *(arg1 + 0x3c) + ebx
                        uint32_t edx_26 = zx.d(ebx_17[eax_1])
                        uint32_t ebp_6 = zx.d(ebx_17[eax_1 + 1])
                        uint32_t ebp_7 = zx.d(ebx_17[eax_1 + 2])
                        int32_t ebx_21 = ((ebp_7 * 0x167 - 0xb2f5) s>> 8) + edx_26
                        
                        if (ebx_21 s> 0xff)
                            ebx_21 = 0xff
                        else if (ebx_21 s< 0)
                            ebx_21 = 0
                        
                        char ebx_22 = ebx_21.b
                        int32_t ebx_25 =
                            ((ebp_6 * 0xffffffa8 + ebp_7 * 0xffffff49 + 0x87f6) s>> 8) + edx_26
                        
                        if (ebx_25 s> 0xff)
                            ebx_25 = 0xff
                        else if (ebx_25 s< 0)
                            ebx_25 = 0
                        
                        char ebx_26 = ebx_25.b
                        int32_t edx_27 = edx_26 + ((ebp_6 * 0x1c6 - 0xe251) s>> 8)
                        
                        if (edx_27 s> 0xff)
                            edx_27 = 0xff
                        else if (edx_27 s< 0)
                            edx_27 = 0
                        
                        char edx_28 = edx_27.b
                        
                        if (*(arg1 + 0x34) == 2)
                            ebx_17[eax_1] = edx_28
                            *(eax_1 + *(arg1 + 0x3c) * i + ebx + 1) = ebx_26
                            *(eax_1 + *(arg1 + 0x3c) * i + ebx + 2) = ebx_22
                        else
                            ebx_17[eax_1] = ebx_22
                            *(eax_1 + *(arg1 + 0x3c) * i + ebx + 1) = ebx_26
                            *(eax_1 + *(arg1 + 0x3c) * i + ebx + 2) = edx_28
                        
                        eax_1 += *(arg1 + 0x30)
                        edx_4 = var_2c_2
                    while (eax_1 s< edx_4)
                
                i -= 1
            while (i != 0xffffffff)
    else
        int32_t i_1 = eax_1 - 1
        
        if (eax_1 != 0)
            int32_t var_18_1 = edi_1
            int32_t var_30_1 = ebp
            
            do
                eax_1 = 0
                
                if (edx_4 s> 0)
                    int32_t var_2c_1 = edx_4
                    
                    do
                        char* ebx_3 = i_1 * *(arg1 + 0x3c) + ebx
                        uint32_t edx_7 = zx.d(ebx_3[eax_1])
                        uint32_t ecx_1 = zx.d(ebx_3[eax_1 + 1])
                        uint32_t ebp_1 = zx.d(ebx_3[eax_1 + 2])
                        int32_t ebx_7 = ((ebp_1 * 0x167 - 0xb2f5) s>> 8) + edx_7
                        
                        if (ebx_7 s> 0xff)
                            ebx_7 = 0xff
                        else if (ebx_7 s< 0)
                            ebx_7 = 0
                        
                        char ebx_8 = ebx_7.b
                        int32_t ebx_11 =
                            ((ecx_1 * 0xffffffa8 + ebp_1 * 0xffffff49 + 0x87f6) s>> 8) + edx_7
                        
                        if (ebx_11 s> 0xff)
                            ebx_11 = 0xff
                        else if (ebx_11 s< 0)
                            ebx_11 = 0
                        
                        char ebx_12 = ebx_11.b
                        int32_t edx_8 = edx_7 + ((ecx_1 * 0x1c6 - 0xe251) s>> 8)
                        
                        if (edx_8 s> 0xff)
                            edx_8 = 0xff
                        else if (edx_8 s< 0)
                            edx_8 = 0
                        
                        char edx_9 = edx_8.b
                        int32_t edx_10 = *(arg1 + 0x58)
                        
                        if (edx_10 == 6)
                            ebx_3[eax_1] = neg.b(ebx_8) - 1
                            *(eax_1 + *(arg1 + 0x3c) * i_1 + ebx + 1) = neg.b(ebx_12) - 1
                            *(eax_1 + *(arg1 + 0x3c) * i_1 + ebx + 2) = neg.b(edx_9) - 1
                            var_18_1 = *(arg1 + 0x30)
                        else if (edx_10 == 3)
                            ebx_3[eax_1] = ebx_8
                            *(eax_1 + *(arg1 + 0x3c) * i_1 + ebx + 1) = ebx_12
                            *(eax_1 + *(arg1 + 0x3c) * i_1 + ebx + 2) = edx_9
                            *(eax_1 + *(arg1 + 0x3c) * i_1 + ebx + 3) = 0xff
                            var_18_1 = *(arg1 + 0x30)
                        
                        eax_1 += var_18_1
                        edx_4 = var_2c_1
                    while (eax_1 s< edx_4)
                
                i_1 -= 1
            while (i_1 != 0xffffffff)

return eax_1
