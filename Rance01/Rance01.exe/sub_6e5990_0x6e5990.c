// 函数: sub_6e5990
// 地址: 0x6e5990
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ecx = *(arg1 + 0x34)

if (ecx != 2 && ecx != 1 && ecx != 5)
    return arg3

int32_t var_3c
int32_t eax_4 = sub_6e0940(arg1 + 4, *(arg1 + 0x37b8) * 8, *(arg1 + 0x37bc) * 8, arg3, arg4, 
    *(arg1 + 0x30), *(arg1 + 0x3c), *(arg1 + 0x20), *(arg1 + 0x24), *(arg1 + 0x28), arg2 + 0x2c, 
    &var_3c)

if (eax_4 == 0)
    int32_t ecx_11 = *(arg2 + 0x2c)
    int32_t edi_1 = *(arg1 + 0x30)
    int32_t var_38
    int32_t var_34
    int32_t var_30
    int32_t ebp
    
    if (edi_1 == 3)
        int32_t esi_9 = var_38
        int32_t edx_13 = var_30
        
        if (esi_9 s< edx_13)
            eax_4 = var_34 * 3
            int32_t var_2c_2 = ebp
            
            do
                int32_t ebp_7 = var_3c * 3
                
                if (ebp_7 s< eax_4)
                    do
                        char* esi_13 = esi_9 * *(arg1 + 0x3c) + ecx_11
                        uint32_t edx_14 = zx.d(esi_13[ebp_7])
                        uint32_t ecx_15 = zx.d(esi_13[ebp_7 + 1])
                        uint32_t edi_16 = zx.d(esi_13[ebp_7 + 2])
                        int32_t eax_23 = ((edi_16 * 0x167 - 0xb2f5) s>> 8) + edx_14
                        
                        if (eax_23 s> 0xff)
                            eax_23 = 0xff
                        else if (eax_23 s< 0)
                            eax_23 = 0
                        
                        char eax_24 = eax_23.b
                        int32_t eax_28 =
                            ((ecx_15 * 0xffffffa8 + edi_16 * 0xffffff49 + 0x87f6) s>> 8) + edx_14
                        
                        if (eax_28 s> 0xff)
                            eax_28 = 0xff
                        else if (eax_28 s< 0)
                            eax_28 = 0
                        
                        char eax_29 = eax_28.b
                        int32_t edx_15 = edx_14 + ((ecx_15 * 0x1c6 - 0xe251) s>> 8)
                        
                        if (edx_15 s> 0xff)
                            edx_15 = 0xff
                        else if (edx_15 s< 0)
                            edx_15 = 0
                        
                        char edx_16 = edx_15.b
                        
                        if (*(arg1 + 0x34) == 2)
                            esi_13[ebp_7] = edx_16
                            *(ebp_7 + *(arg1 + 0x3c) * esi_9 + ecx_11 + 1) = eax_29
                            *(ebp_7 + *(arg1 + 0x3c) * esi_9 + ecx_11 + 2) = eax_24
                        else
                            esi_13[ebp_7] = eax_24
                            *(ebp_7 + *(arg1 + 0x3c) * esi_9 + ecx_11 + 1) = eax_29
                            *(ebp_7 + *(arg1 + 0x3c) * esi_9 + ecx_11 + 2) = edx_16
                        
                        ebp_7 += 3
                        eax_4 = var_34 * 3
                    while (ebp_7 s< eax_4)
                    
                    edx_13 = var_30
                
                esi_9 += 1
            while (esi_9 s< edx_13)
    else
        int32_t esi_1 = var_38
        int32_t edx_2 = var_30
        
        if (esi_1 s< edx_2)
            eax_4 = var_34 * edi_1
            int32_t var_2c_1 = ebp
            
            do
                int32_t ecx_13 = edi_1 * var_3c
                
                if (ecx_13 s< eax_4)
                    int32_t var_1c_1 = eax_4
                    int32_t var_18_1 = edi_1
                    
                    do
                        char* ebp_3 = esi_1 * *(arg1 + 0x3c) + ecx_11
                        uint32_t edx_3 = zx.d(ebp_3[ecx_13])
                        uint32_t esi_3 = zx.d(ebp_3[ecx_13 + 1])
                        uint32_t edi_3 = zx.d(ebp_3[ecx_13 + 2])
                        int32_t eax_9 = ((edi_3 * 0x167 - 0xb2f5) s>> 8) + edx_3
                        
                        if (eax_9 s> 0xff)
                            eax_9 = 0xff
                        else if (eax_9 s< 0)
                            eax_9 = 0
                        
                        char eax_10 = eax_9.b
                        int32_t eax_14 =
                            ((esi_3 * 0xffffffa8 + edi_3 * 0xffffff49 + 0x87f6) s>> 8) + edx_3
                        
                        if (eax_14 s> 0xff)
                            eax_14 = 0xff
                        else if (eax_14 s< 0)
                            eax_14 = 0
                        
                        char eax_15 = eax_14.b
                        int32_t edx_4 = edx_3 + ((esi_3 * 0x1c6 - 0xe251) s>> 8)
                        
                        if (edx_4 s> 0xff)
                            edx_4 = 0xff
                        else if (edx_4 s< 0)
                            edx_4 = 0
                        
                        char eax_16 = edx_4.b
                        int32_t edx_5 = *(arg1 + 0x58)
                        
                        if (edx_5 == 6)
                            ebp_3[ecx_13] = neg.b(eax_10) - 1
                            *(ecx_13 + *(arg1 + 0x3c) * esi_1 + ecx_11 + 1) = neg.b(eax_15) - 1
                            *(ecx_13 + *(arg1 + 0x3c) * esi_1 + ecx_11 + 2) = neg.b(eax_16) - 1
                            int32_t edi_14 = *(arg1 + 0x30)
                            var_18_1 = edi_14
                            var_1c_1 = edi_14 * var_34
                        else if (edx_5 == 3)
                            ebp_3[ecx_13] = eax_10
                            *(ecx_13 + *(arg1 + 0x3c) * esi_1 + ecx_11 + 1) = eax_15
                            *(ecx_13 + *(arg1 + 0x3c) * esi_1 + ecx_11 + 2) = eax_16
                            int32_t eax_17 = *(arg1 + 0x30)
                            var_18_1 = eax_17
                            var_1c_1 = eax_17 * var_34
                        
                        ecx_13 += var_18_1
                        eax_4 = var_1c_1
                    while (ecx_13 s< eax_4)
                    
                    edi_1 = var_18_1
                    edx_2 = var_30
                
                esi_1 += 1
            while (esi_1 s< edx_2)

return eax_4
