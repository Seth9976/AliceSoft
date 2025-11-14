// 函数: sub_6d2ff0
// 地址: 0x6d2ff0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* eax = arg1
void var_ac
void* ecx = &var_ac
int32_t var_24 = 8

while (true)
    int32_t edx_1 = sx.d(*(eax + 0x10))
    int32_t var_2c_1
    int32_t edx_2
    int32_t ebx_1
    int32_t ebp_1
    int32_t esi_1
    
    if (edx_1 != 0)
        esi_1 = sx.d(*(eax + 0x20))
        edx_2 = sx.d(*(eax + 0x60))
        var_2c_1 = sx.d(*(eax + 0x70))
        ebp_1 = sx.d(*(eax + 0x50))
        ebx_1 = sx.d(*(eax + 0x30))
    label_6d3125:
        int32_t ecx_2 = sx.d(*eax) << 0xe
        int32_t eax_2 = esi_1 * 0x3b21 + edx_2 * 0xffffe782
        int32_t edx_7 = ecx_2 + eax_2
        int32_t ecx_3 = ecx_2 - eax_2
        int32_t eax_6 = ebp_1 * 0x2e75 + ebx_1 * 0xffffba79 + var_2c_1 * 0xfffff93e + edx_1 * 0x21f9
        int32_t ebp_6 = ebp_1 * 0xffffecc2 + ebx_1 * 0x1ccd + var_2c_1 * 0xffffefb0 + edx_1 * 0x5203
        *ecx = (ebp_6 + edx_7 + 0x800) s>> 0xc
        *(ecx + 0x60) = (edx_7 - ebp_6 + 0x800) s>> 0xc
        *(ecx + 0x20) = (eax_6 + ecx_3 + 0x800) s>> 0xc
        *(ecx + 0x40) = (ecx_3 - eax_6 + 0x800) s>> 0xc
        eax += 2
        ecx += 4
    else
        esi_1 = sx.d(*(eax + 0x20))
        
        if (esi_1 != 0)
            edx_2 = sx.d(*(eax + 0x60))
            ebp_1 = sx.d(*(eax + 0x50))
            var_2c_1 = sx.d(*(eax + 0x70))
            ebx_1 = sx.d(*(eax + 0x30))
            goto label_6d3125
        
        ebx_1 = sx.d(*(eax + 0x30))
        
        if (ebx_1 != 0)
            edx_2 = sx.d(*(eax + 0x60))
            var_2c_1 = sx.d(*(eax + 0x70))
            ebp_1 = sx.d(*(eax + 0x50))
            goto label_6d3125
        
        ebp_1 = sx.d(*(eax + 0x50))
        
        if (ebp_1 != 0)
            edx_2 = sx.d(*(eax + 0x60))
            var_2c_1 = sx.d(*(eax + 0x70))
            goto label_6d3125
        
        edx_2 = sx.d(*(eax + 0x60))
        
        if (edx_2 != 0)
            var_2c_1 = sx.d(*(eax + 0x70))
            goto label_6d3125
        
        int32_t edi_1 = sx.d(*(eax + 0x70))
        var_2c_1 = edi_1
        
        if (edi_1 != 0)
            goto label_6d3125
        
        int32_t edx_5 = sx.d(*eax) * 4
        *ecx = edx_5
        eax += 2
        *(ecx + 0x20) = edx_5
        *(ecx + 0x40) = edx_5
        *(ecx + 0x60) = edx_5
        ecx += 4
    int32_t edx_13 = var_24
    
    while (true)
        edx_13 -= 1
        
        if (edx_13 s<= 0)
            int16_t* edx_14 = arg1
            void* result = &var_ac
            
            for (int32_t i = 0; i s< 4; )
                int32_t ecx_11 = *(result + 4)
                i += 1
                int32_t var_2c_2
                int32_t var_18_2
                int32_t ebx_10
                int32_t ebp_7
                int32_t esi_3
                
                if (ecx_11 != 0)
                    ebp_7 = *(result + 8)
                    esi_3 = *(result + 0x18)
                    var_2c_2 = *(result + 0x1c)
                    var_18_2 = *(result + 0x14)
                    ebx_10 = *(result + 0xc)
                label_6d334f:
                    int32_t ecx_25 = *result << 0xe
                    int32_t edi_7 = ebp_7 * 0x3b21 + esi_3 * 0xffffe782
                    int32_t ebp_9 = ecx_25 + edi_7
                    int32_t ecx_26 = ecx_25 - edi_7
                    int32_t esi_8 = var_18_2 * 0x2e75 + ebx_10 * 0xffffba79 + var_2c_2 * 0xfffff93e
                        + ecx_11 * 0x21f9
                    int32_t esi_13 = var_18_2 * 0xffffecc2 + ebx_10 * 0x1ccd + var_2c_2 * 0xffffefb0
                        + ecx_11 * 0x5203
                    int32_t ebx_20 = ((esi_13 + ebp_9 + 0x40000) s>> 0x13) + 0x80
                    
                    if (ebx_20 s< 0)
                        ebx_20 = 0
                    else if (ebx_20 s> 0xff)
                        ebx_20 = 0xff
                    
                    *edx_14 = ebx_20.w
                    int32_t ebp_13 = ((ebp_9 - esi_13 + 0x40000) s>> 0x13) + 0x80
                    
                    if (ebp_13 s< 0)
                        ebp_13 = 0
                    else if (ebp_13 s> 0xff)
                        ebp_13 = 0xff
                    
                    edx_14[3] = ebp_13.w
                    int32_t ebx_24 = ((esi_8 + ecx_26 + 0x40000) s>> 0x13) + 0x80
                    
                    if (ebx_24 s< 0)
                        ebx_24 = 0
                    else if (ebx_24 s> 0xff)
                        ebx_24 = 0xff
                    
                    edx_14[1] = ebx_24.w
                    int32_t ecx_30 = ((ecx_26 - esi_8 + 0x40000) s>> 0x13) + 0x80
                    
                    if (ecx_30 s< 0)
                        ecx_30 = 0
                    else if (ecx_30 s> 0xff)
                        ecx_30 = 0xff
                    
                    edx_14[2] = ecx_30.w
                    result += 0x20
                    edx_14 = &edx_14[8]
                else
                    ebp_7 = *(result + 8)
                    
                    if (ebp_7 != 0)
                        esi_3 = *(result + 0x18)
                        var_2c_2 = *(result + 0x1c)
                        var_18_2 = *(result + 0x14)
                        ebx_10 = *(result + 0xc)
                        goto label_6d334f
                    
                    ebx_10 = *(result + 0xc)
                    
                    if (ebx_10 != 0)
                        esi_3 = *(result + 0x18)
                        var_2c_2 = *(result + 0x1c)
                        var_18_2 = *(result + 0x14)
                        goto label_6d334f
                    
                    int32_t ecx_12 = *(result + 0x14)
                    var_18_2 = ecx_12
                    
                    if (ecx_12 != 0)
                        esi_3 = *(result + 0x18)
                        var_2c_2 = *(result + 0x1c)
                        goto label_6d334f
                    
                    esi_3 = *(result + 0x18)
                    
                    if (esi_3 != 0)
                        var_2c_2 = *(result + 0x1c)
                        goto label_6d334f
                    
                    int32_t ecx_13 = *(result + 0x1c)
                    var_2c_2 = ecx_13
                    
                    if (ecx_13 != 0)
                        goto label_6d334f
                    
                    int32_t ecx_17 = ((*result + 0x10) s>> 5) + 0x80
                    
                    if (ecx_17 s< 0)
                        ecx_17 = 0
                    else if (ecx_17 s> 0xff)
                        ecx_17 = 0xff
                    
                    int16_t ecx_18 = ecx_17.w
                    result += 0x20
                    *edx_14 = ecx_18
                    edx_14[1] = ecx_18
                    edx_14[2] = ecx_18
                    edx_14[3] = ecx_18
                    edx_14 = &edx_14[8]
            
            return result
        
        if (edx_13 != 4)
            var_24 = edx_13
            break
        
        eax += 2
        ecx += 4
