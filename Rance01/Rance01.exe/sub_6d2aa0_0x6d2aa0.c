// 函数: sub_6d2aa0
// 地址: 0x6d2aa0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int16_t* ebx = arg1
void var_140
void* ecx = &var_140
int32_t var_20 = 0
void* var_18 = &var_140
bool cond:0_1

do
    int32_t ebp_1 = sx.d(ebx[7])
    int32_t ecx_1 = sx.d(ebx[1])
    int32_t eax_2 = ecx_1 * 0x7d8a + ebp_1 * 0x18f9
    int32_t ecx_3 = ecx_1 * 0x18f9 + ebp_1 * 0xffff8276
    int32_t edi_1 = sx.d(ebx[5])
    int32_t edx_3 = sx.d(ebx[3])
    int32_t ebp_3 = edi_1 * 0x471d + edx_3 * 0x6a6e
    int32_t esi_3 = edi_1 * 0x6a6e + edx_3 * 0xffffb8e3
    int32_t edi_3 = eax_2 - ebp_3
    int32_t edx_6 = ecx_3 - esi_3
    int32_t eax_5 = ((eax_2 + ebp_3 + 0x800) s>> 0xc) * 0x16a1
    int32_t ecx_6 = ((ecx_3 + esi_3 + 0x800) s>> 0xc) * 0x16a1
    int32_t esi_4 = sx.d(ebx[6])
    int32_t ecx_7 = edi_3 + edx_6
    int32_t edi_4 = edi_3 - edx_6
    int32_t edx_7 = sx.d(*ebx)
    int32_t ecx_8 = sx.d(ebx[4])
    int32_t ebp_5 = (edx_7 + ecx_8) << 0xf
    int32_t edx_9 = (edx_7 - ecx_8) << 0xf
    int32_t ecx_9 = sx.d(ebx[2])
    int32_t ebx_2 = ecx_9 * 0xa73d + esi_4 * 0x4546
    int32_t ecx_11 = ecx_9 * 0x4546 + esi_4 * 0xffff58c3
    int32_t esi_6 = ebp_5 + ebx_2
    int32_t ebp_6 = ebp_5 - ebx_2
    int32_t ebx_3 = edx_9 + ecx_11
    int32_t edx_10 = edx_9 - ecx_11
    *ecx = (eax_5 + esi_6 + 0x800) s>> 0xc
    *(ecx + 0x1c) = (esi_6 - eax_5 + 0x800) s>> 0xc
    *(ecx + 4) = (ecx_7 + ebx_3 + 0x800) s>> 0xc
    *(ecx + 0x18) = (ebx_3 - ecx_7 + 0x800) s>> 0xc
    *(ecx + 8) = (edi_4 + edx_10 + 0x800) s>> 0xc
    *(ecx + 0x14) = (edx_10 - edi_4 + 0x800) s>> 0xc
    *(ecx + 0xc) = (ecx_6 + ebp_6 + 0x800) s>> 0xc
    ebx = &ebx[8]
    *(ecx + 0x10) = (ebp_6 - ecx_6 + 0x800) s>> 0xc
    ecx += 0x20
    cond:0_1 = var_20 + 1 s< 8
    var_20 += 1
while (cond:0_1)
void* edx_15 = var_18
int16_t* result = arg1
int32_t var_20_1 = 0
bool cond:1_1

do
    int32_t ecx_13 = *(edx_15 + 0x20)
    int32_t ebx_9 = *(edx_15 + 0xe0)
    int32_t eax_15 = ecx_13 * 0x7d8a + ebx_9 * 0x18f9
    int32_t ecx_15 = ecx_13 * 0x18f9 + ebx_9 * 0xffff8276
    int32_t ebx_11 = *(edx_15 + 0xa0)
    int32_t ebp_11 = *(edx_15 + 0x60)
    int32_t edi_9 = ebx_11 * 0x471d + ebp_11 * 0x6a6e
    int32_t ebx_13 = ebx_11 * 0x6a6e + ebp_11 * 0xffffb8e3
    int32_t ebp_14 = eax_15 - edi_9
    int32_t esi_13 = ecx_15 - ebx_13
    int32_t eax_18 = ((eax_15 + edi_9 + 0x800) s>> 0xc) * 0x16a1
    int32_t ecx_18 = ((ecx_15 + ebx_13 + 0x800) s>> 0xc) * 0x16a1
    int32_t ecx_19 = ebp_14 + esi_13
    int32_t ebp_15 = ebp_14 - esi_13
    int32_t ecx_20 = *(edx_15 + 0x80)
    int32_t esi_14 = *(edx_15 + 0x40)
    int32_t ebp_16 = *edx_15
    int32_t ebx_15 = (ebp_16 + ecx_20) << 0xf
    int32_t ebp_18 = (ebp_16 - ecx_20) << 0xf
    int32_t ecx_21 = *(edx_15 + 0xc0)
    int32_t edx_17 = esi_14 * 0xa73d + ecx_21 * 0x4546
    int32_t edi_12 = esi_14 * 0x4546 + ecx_21 * 0xffff58c3
    int32_t esi_15 = ebx_15 + edx_17
    int32_t ebx_16 = ebx_15 - edx_17
    int32_t ecx_23 = ebp_18 + edi_12
    int32_t ebp_19 = ebp_18 - edi_12
    int32_t edi_13
    
    if (((eax_18 + esi_15 + 0x100000) s>> 0x15) + 0x80 s< 0)
        edi_13 = 0
        int32_t var_30_4 = 0
    else
        edi_13 = ((eax_18 + esi_15 + 0x100000) s>> 0x15) + 0x80
        
        if (edi_13 s> 0xff)
            edi_13 = 0xff
            int32_t var_30_3 = 0xff
    
    *result = edi_13.w
    int32_t esi_19 = ((esi_15 - eax_18 + 0x100000) s>> 0x15) + 0x80
    
    if (esi_19 s< 0)
        esi_19 = 0
    else if (esi_19 s> 0xff)
        esi_19 = 0xff
    
    result[0x38] = esi_19.w
    int32_t esi_23 = ((ecx_19 + ecx_23 + 0x100000) s>> 0x15) + 0x80
    
    if (esi_23 s< 0)
        esi_23 = 0
    else if (esi_23 s> 0xff)
        esi_23 = 0xff
    
    result[8] = esi_23.w
    int32_t ecx_27 = ((ecx_23 - ecx_19 + 0x100000) s>> 0x15) + 0x80
    
    if (ecx_27 s< 0)
        ecx_27 = 0
    else if (ecx_27 s> 0xff)
        ecx_27 = 0xff
    
    result[0x30] = ecx_27.w
    int32_t ecx_31 = ((ebp_15 + ebp_19 + 0x100000) s>> 0x15) + 0x80
    
    if (ecx_31 s< 0)
        ecx_31 = 0
    else if (ecx_31 s> 0xff)
        ecx_31 = 0xff
    
    result[0x10] = ecx_31.w
    int32_t ebp_23 = ((ebp_19 - ebp_15 + 0x100000) s>> 0x15) + 0x80
    
    if (ebp_23 s< 0)
        ebp_23 = 0
    else if (ebp_23 s> 0xff)
        ebp_23 = 0xff
    
    result[0x28] = ebp_23.w
    int32_t ecx_35 = ((ecx_18 + ebx_16 + 0x100000) s>> 0x15) + 0x80
    
    if (ecx_35 s< 0)
        ecx_35 = 0
    else if (ecx_35 s> 0xff)
        ecx_35 = 0xff
    
    result[0x18] = ecx_35.w
    int32_t ebx_20 = ((ebx_16 - ecx_18 + 0x100000) s>> 0x15) + 0x80
    
    if (ebx_20 s< 0)
        ebx_20 = 0
    else if (ebx_20 s> 0xff)
        ebx_20 = 0xff
    
    result[0x20] = ebx_20.w
    edx_15 += 4
    result = &result[1]
    cond:1_1 = var_20_1 + 1 s< 8
    var_20_1 += 1
while (cond:1_1)
return result
