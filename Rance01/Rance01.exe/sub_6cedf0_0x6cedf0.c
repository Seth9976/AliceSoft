// 函数: sub_6cedf0
// 地址: 0x6cedf0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t esi
int32_t var_8 = esi
int16_t* edx = arg1
void* eax = arg1
int32_t i_1 = 8
int32_t i

do
    int32_t ebx_1 = sx.d(edx[0x28])
    int32_t ebp_1 = sx.d(edx[0x18])
    int32_t ecx_2 = ebx_1 - ebp_1
    int32_t ebx_2 = ebx_1 + ebp_1
    int32_t edi_1 = sx.d(edx[8])
    int32_t esi_2 = sx.d(edx[0x38])
    int32_t ebp_2 = edi_1 + esi_2
    int32_t edi_2 = edi_1 - esi_2
    int32_t esi_7 = ((ecx_2 - edi_2) * 0x61f8 + 0x4000) s>> 0xf
    int32_t ebx_3 = ebx_2 + ebp_2
    int32_t edi_7 = ((edi_2 * 0x8a8c + 0x4000) s>> 0xf) - esi_7 - ebx_3
    int16_t var_2c_1 = edi_7.w
    int32_t ecx_11 = (((ebp_2 - ebx_2) * 0xb505 + 0x4000) s>> 0xf) - edi_7
    int16_t esi_9 = esi_7.w - ((ecx_2 * 0x14e7b + 0x4000) s>> 0xf).w + ecx_11.w
    int32_t ecx_12 = sx.d(edx[0x20])
    int32_t esi_10 = sx.d(*edx)
    int16_t ebp_3 = esi_10.w + ecx_12.w
    int32_t esi_11 = esi_10 - ecx_12
    int32_t ecx_13 = sx.d(edx[0x10])
    int32_t edx_1 = sx.d(edx[0x30])
    int32_t ecx_14 = ecx_13 + edx_1
    int32_t edx_5 = (((ecx_13 - edx_1) * 0xb505 + 0x4000) s>> 0xf) - ecx_14
    int16_t edi_10 = ecx_14.w + ebp_3
    int16_t ebp_4 = ebp_3 - ecx_14.w
    int16_t ecx_15 = edx_5.w + esi_11.w
    int32_t esi_12 = esi_11 - edx_5
    *eax = ebx_3.w + edi_10
    *(eax + 0x10) = ecx_15 + var_2c_1
    *(eax + 0x20) = esi_12.w + ecx_11.w
    *(eax + 0x30) = ebp_4 - esi_9
    *(eax + 0x40) = ebp_4 + esi_9
    *(eax + 0x50) = (esi_12 - ecx_11).w
    *(eax + 0x60) = ecx_15 - var_2c_1
    i = i_1 - 1
    *(eax + 0x70) = edi_10 - ebx_3.w
    edx = &edx[1]
    eax += 2
    i_1 = i
while (i s> 0)
void* result_1 = arg1
void* result = result_1
int32_t var_20 = 8
bool cond:0_1

do
    int32_t esi_15 = sx.d(*(result_1 + 0xa))
    int32_t eax_1 = sx.d(*(result_1 + 6))
    int32_t ebp_7 = esi_15 - eax_1
    int32_t esi_16 = esi_15 + eax_1
    int32_t ebx_7 = sx.d(*(result_1 + 2))
    int32_t eax_2 = sx.d(*(result_1 + 0xe))
    int32_t edx_13 = ebx_7 + eax_2
    int32_t ebx_8 = ebx_7 - eax_2
    int32_t eax_7 = ((ebp_7 - ebx_8) * 0x61f8 + 0x4000) s>> 0xf
    int32_t esi_17 = esi_16 + edx_13
    int32_t edi_16 = ((ebx_8 * 0x8a8c + 0x4000) s>> 0xf) - eax_7 - esi_17
    int32_t edx_17 = (((edx_13 - esi_16) * 0xb505 + 0x4000) s>> 0xf) - edi_16
    int32_t eax_9 = eax_7 - ((ebp_7 * 0x14e7b + 0x4000) s>> 0xf) + edx_17
    int32_t ebx_14 = sx.d(*result_1)
    int32_t eax_10 = sx.d(*(result_1 + 8))
    int32_t edx_18 = ebx_14 + eax_10
    int32_t ebx_15 = ebx_14 - eax_10
    int32_t edi_17 = sx.d(*(result_1 + 4))
    int32_t ebp_8 = sx.d(*(result_1 + 0xc))
    int32_t edi_18 = edi_17 + ebp_8
    int32_t eax_16 = (((edi_17 - ebp_8) * 0xb505 + 0x4000) s>> 0xf) - edi_18
    int32_t ebp_9 = edi_18 + edx_18
    int32_t edx_19 = edx_18 - edi_18
    int32_t edx_20 = eax_16 + ebx_15
    int32_t ebx_16 = ebx_15 - eax_16
    int32_t edi_21 = ((esi_17 + ebp_9 + 8) s>> 4) + 0x80
    
    if (edi_21 s< 0)
        edi_21 = 0
    else if (edi_21 s> 0xff)
        edi_21 = 0xff
    
    *result = edi_21.w
    int32_t edi_25 = ((edx_20 + edi_16 + 8) s>> 4) + 0x80
    
    if (edi_25 s< 0)
        edi_25 = 0
    else if (edi_25 s> 0xff)
        edi_25 = 0xff
    
    *(result + 2) = edi_25.w
    int32_t edi_29 = ((ebx_16 + edx_17 + 8) s>> 4) + 0x80
    
    if (edi_29 s< 0)
        edi_29 = 0
    else if (edi_29 s> 0xff)
        edi_29 = 0xff
    
    *(result + 4) = edi_29.w
    int32_t edi_34 = ((edx_19 - eax_9 + 8) s>> 4) + 0x80
    
    if (edi_34 s< 0)
        edi_34 = 0
    else if (edi_34 s> 0xff)
        edi_34 = 0xff
    
    *(result + 6) = edi_34.w
    int32_t esi_21 = ((edx_19 + eax_9 + 8) s>> 4) + 0x80
    
    if (esi_21 s< 0)
        esi_21 = 0
    else if (esi_21 s> 0xff)
        esi_21 = 0xff
    
    *(result + 8) = esi_21.w
    int32_t ebx_20 = ((ebx_16 - edx_17 + 8) s>> 4) + 0x80
    
    if (ebx_20 s< 0)
        ebx_20 = 0
    else if (ebx_20 s> 0xff)
        ebx_20 = 0xff
    
    *(result + 0xa) = ebx_20.w
    int32_t edx_24 = ((edx_20 - edi_16 + 8) s>> 4) + 0x80
    
    if (edx_24 s< 0)
        edx_24 = 0
    else if (edx_24 s> 0xff)
        edx_24 = 0xff
    
    *(result + 0xc) = edx_24.w
    int32_t ebp_13 = ((ebp_9 - esi_17 + 8) s>> 4) + 0x80
    
    if (ebp_13 s< 0)
        ebp_13 = 0
    else if (ebp_13 s> 0xff)
        ebp_13 = 0xff
    
    *(result + 0xe) = ebp_13.w
    result_1 += 0x10
    result += 0x10
    cond:0_1 = var_20 - 1 s> 0
    var_20 -= 1
while (cond:0_1)
return result
