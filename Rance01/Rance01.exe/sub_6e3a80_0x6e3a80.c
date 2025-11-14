// 函数: sub_6e3a80
// 地址: 0x6e3a80
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t edx = *(arg1 + 0x34)

if (edx != 1 && edx != 2 && edx != 5)
    return arg5

int32_t var_3c
int32_t eax_7 = sub_6e0940(arg1 + 4, *(arg1 + 0x37b8) * arg5, arg5 * *(arg1 + 0x37bc), arg3, arg4, 
    *(arg1 + 0x30), *(arg1 + 0x3c), *(arg1 + 0x20), *(arg1 + 0x24), *(arg1 + 0x28), arg2 + 0x2c, 
    &var_3c)

if (eax_7 == 0)
    int32_t ecx_1 = *(arg2 + 0x2c)
    int32_t edi_2 = *(arg1 + 0x30)
    int32_t var_38
    int32_t var_34
    int32_t var_30
    int32_t ebp
    
    if (edi_2 == 3)
        int32_t esi_9 = var_38
        int32_t edx_16 = var_30
        
        if (esi_9 s< edx_16)
            eax_7 = var_34 * 3
            int32_t var_2c_2 = ebp
            
            do
                int32_t ebp_7 = var_3c * 3
                
                if (ebp_7 s< eax_7)
                    do
                        char* esi_13 = esi_9 * *(arg1 + 0x3c) + ecx_1
                        uint32_t edx_17 = zx.d(esi_13[ebp_7])
                        uint32_t ecx_5 = zx.d(esi_13[ebp_7 + 1])
                        uint32_t edi_17 = zx.d(esi_13[ebp_7 + 2])
                        int32_t eax_26 = ((edi_17 * 0x167 - 0xb2f5) s>> 8) + edx_17
                        
                        if (eax_26 s> 0xff)
                            eax_26 = 0xff
                        else if (eax_26 s< 0)
                            eax_26 = 0
                        
                        char eax_27 = eax_26.b
                        int32_t eax_31 =
                            ((ecx_5 * 0xffffffa8 + edi_17 * 0xffffff49 + 0x87f6) s>> 8) + edx_17
                        
                        if (eax_31 s> 0xff)
                            eax_31 = 0xff
                        else if (eax_31 s< 0)
                            eax_31 = 0
                        
                        char eax_32 = eax_31.b
                        int32_t edx_18 = edx_17 + ((ecx_5 * 0x1c6 - 0xe251) s>> 8)
                        
                        if (edx_18 s> 0xff)
                            edx_18 = 0xff
                        else if (edx_18 s< 0)
                            edx_18 = 0
                        
                        char edx_19 = edx_18.b
                        
                        if (*(arg1 + 0x34) == 2)
                            esi_13[ebp_7] = edx_19
                            *(ebp_7 + *(arg1 + 0x3c) * esi_9 + ecx_1 + 1) = eax_32
                            *(ebp_7 + *(arg1 + 0x3c) * esi_9 + ecx_1 + 2) = eax_27
                        else
                            esi_13[ebp_7] = eax_27
                            *(ebp_7 + *(arg1 + 0x3c) * esi_9 + ecx_1 + 1) = eax_32
                            *(ebp_7 + *(arg1 + 0x3c) * esi_9 + ecx_1 + 2) = edx_19
                        
                        ebp_7 += 3
                        eax_7 = var_34 * 3
                    while (ebp_7 s< eax_7)
                    
                    edx_16 = var_30
                
                esi_9 += 1
            while (esi_9 s< edx_16)
    else
        int32_t esi_1 = var_38
        int32_t edx_5 = var_30
        
        if (esi_1 s< edx_5)
            eax_7 = var_34 * edi_2
            int32_t var_2c_1 = ebp
            
            do
                int32_t ecx_3 = edi_2 * var_3c
                
                if (ecx_3 s< eax_7)
                    int32_t var_1c_1 = eax_7
                    int32_t var_18_1 = edi_2
                    
                    do
                        char* ebp_3 = esi_1 * *(arg1 + 0x3c) + ecx_1
                        uint32_t edx_6 = zx.d(ebp_3[ecx_3])
                        uint32_t esi_3 = zx.d(ebp_3[ecx_3 + 1])
                        uint32_t edi_4 = zx.d(ebp_3[ecx_3 + 2])
                        int32_t eax_12 = ((edi_4 * 0x167 - 0xb2f5) s>> 8) + edx_6
                        
                        if (eax_12 s> 0xff)
                            eax_12 = 0xff
                        else if (eax_12 s< 0)
                            eax_12 = 0
                        
                        char eax_13 = eax_12.b
                        int32_t eax_17 =
                            ((esi_3 * 0xffffffa8 + edi_4 * 0xffffff49 + 0x87f6) s>> 8) + edx_6
                        
                        if (eax_17 s> 0xff)
                            eax_17 = 0xff
                        else if (eax_17 s< 0)
                            eax_17 = 0
                        
                        char eax_18 = eax_17.b
                        int32_t edx_7 = edx_6 + ((esi_3 * 0x1c6 - 0xe251) s>> 8)
                        
                        if (edx_7 s> 0xff)
                            edx_7 = 0xff
                        else if (edx_7 s< 0)
                            edx_7 = 0
                        
                        char eax_19 = edx_7.b
                        int32_t edx_8 = *(arg1 + 0x58)
                        
                        if (edx_8 == 6)
                            ebp_3[ecx_3] = neg.b(eax_13) - 1
                            *(ecx_3 + *(arg1 + 0x3c) * esi_1 + ecx_1 + 1) = neg.b(eax_18) - 1
                            *(ecx_3 + *(arg1 + 0x3c) * esi_1 + ecx_1 + 2) = neg.b(eax_19) - 1
                            int32_t edi_15 = *(arg1 + 0x30)
                            var_18_1 = edi_15
                            var_1c_1 = edi_15 * var_34
                        else if (edx_8 == 3)
                            ebp_3[ecx_3] = eax_13
                            *(ecx_3 + *(arg1 + 0x3c) * esi_1 + ecx_1 + 1) = eax_18
                            *(ecx_3 + *(arg1 + 0x3c) * esi_1 + ecx_1 + 2) = eax_19
                            int32_t eax_20 = *(arg1 + 0x30)
                            var_18_1 = eax_20
                            var_1c_1 = eax_20 * var_34
                        
                        ecx_3 += var_18_1
                        eax_7 = var_1c_1
                    while (ecx_3 s< eax_7)
                    
                    edi_2 = var_18_1
                    edx_5 = var_30
                
                esi_1 += 1
            while (esi_1 s< edx_5)

return eax_7
