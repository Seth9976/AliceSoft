// 函数: sub_6cfb90
// 地址: 0x6cfb90
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t esi
int32_t var_8 = esi
int16_t* edx = arg1
int32_t i_2 = 7
int32_t i

do
    int16_t* var_30_1 = edx
    int32_t eax_1 = sx.d(*edx)
    int32_t ecx_1 = sx.d(edx[7])
    int32_t eax_2 = eax_1 + ecx_1
    int32_t ebp_1 = sx.d(edx[1])
    int32_t esi_2 = sx.d(edx[6])
    int32_t ebx_1 = sx.d(edx[5])
    int32_t eax_3 = ebp_1 + esi_2
    int32_t edi_1 = sx.d(edx[4])
    int32_t eax_4 = sx.d(edx[2])
    int32_t ecx_2 = eax_4 + ebx_1
    int32_t ecx_3 = sx.d(edx[3])
    int32_t edx_1 = ecx_3 + edi_1
    int32_t eax_5 = eax_4 - ebx_1
    int32_t ebp_2 = ebp_1 - esi_2
    int32_t esi_3 = eax_2 + edx_1
    int32_t ebp_4 = eax_2 - edx_1
    int32_t ecx_7 = eax_3 + ecx_2
    int32_t ebx_3 = eax_3 - ecx_2
    *var_30_1 = ((esi_3 + ecx_7) << 0x13 s>> 0x10).w
    var_30_1[4] = ((esi_3 - ecx_7) << 0x13 s>> 0x10).w
    var_30_1[2] = ((ebp_4 * 0xa73d + ebx_3 * 0x4546 + 0x800) s>> 0xc).w
    int32_t esi_8 = eax_5 + ebp_2
    var_30_1[6] = ((ebp_4 * 0x4546 + ebx_3 * 0xffff58c3 + 0x800) s>> 0xc).w
    int32_t ebp_6 = ebp_2 - eax_5
    int32_t ebx_7 = ((ecx_3 - edi_1) * 0xb505 + 0x800) s>> 0xc
    int32_t ecx_18 = ((eax_1 - ecx_1) * 0xb505 + 0x800) s>> 0xc
    int32_t esi_9 = ecx_18 + (esi_8 << 3)
    int32_t ecx_19 = ecx_18 - esi_8 * 8
    int32_t ebp_7 = ebx_7 + (ebp_6 << 3)
    int32_t ebx_8 = ebx_7 - ebp_6 * 8
    var_30_1[1] = ((esi_9 * 0xfb1 + ebp_7 * 0x31f + 0x800) s>> 0xc).w
    var_30_1[7] = ((esi_9 * 0x31f + ebp_7 * 0xfffff04f + 0x800) s>> 0xc).w
    var_30_1[5] = ((ecx_19 * 0x8e4 + ebx_8 * 0xd4e + 0x800) s>> 0xc).w
    var_30_1[3] = ((ecx_19 * 0xd4e + ebx_8 * 0xfffff71c + 0x800) s>> 0xc).w
    edx = &var_30_1[8]
    i = i_2 - 1
    i_2 = i
while (i s>= 0)
int16_t* result = arg1
int32_t i_3 = 7
int32_t i_1

do
    int16_t* result_1 = result
    int32_t ecx_21 = sx.d(*result)
    int32_t edx_4 = sx.d(result[0x38])
    int32_t ebp_10 = sx.d(result[8])
    int32_t esi_11 = sx.d(result[0x30])
    int32_t edx_5 = ecx_21 + edx_4
    int32_t ebx_9 = sx.d(result[0x10])
    int32_t edx_6 = ebp_10 + esi_11
    int32_t ecx_22 = sx.d(result[0x28])
    int32_t edx_7 = ebx_9 + ecx_22
    int32_t edi_10 = sx.d(result[0x20])
    int32_t edx_8 = sx.d(result[0x18])
    int32_t eax_22 = edx_8 + edi_10
    int32_t ebx_10 = ebx_9 - ecx_22
    int32_t ebp_11 = ebp_10 - esi_11
    int32_t ecx_23 = edx_5 + eax_22
    int32_t ebp_13 = edx_5 - eax_22
    int32_t edx_12 = edx_6 + edx_7
    int32_t esi_13 = edx_6 - edx_7
    *result_1 = ((ecx_23 + edx_12 + 0x20) s>> 6).w
    result_1[0x20] = ((ecx_23 - edx_12 + 0x20) s>> 6).w
    result_1[0x10] = ((ebp_13 * 0xa73d + esi_13 * 0x4546 + 0x100000) s>> 0x15).w
    result_1[0x30] = ((ebp_13 * 0x4546 + esi_13 * 0xffff58c3 + 0x100000) s>> 0x15).w
    int32_t edx_19 = ebx_10 + ebp_11
    int32_t ebp_15 = ebp_11 - ebx_10
    int32_t edi_15 = ((edx_8 - edi_10) * 0xb505 + 0x800) s>> 0xc
    int32_t esi_18 = ((ecx_21 - edx_4) * 0xb505 + 0x800) s>> 0xc
    int32_t edx_20 = esi_18 + (edx_19 << 3)
    int32_t esi_19 = esi_18 - edx_19 * 8
    int32_t ecx_32 = edi_15 + (ebp_15 << 3)
    int32_t edi_16 = edi_15 - ebp_15 * 8
    result_1[8] = ((edx_20 * 0xfb1 + ecx_32 * 0x31f + 0x100000) s>> 0x15).w
    result_1[0x38] = ((edx_20 * 0x31f + ecx_32 * 0xfffff04f + 0x100000) s>> 0x15).w
    result_1[0x28] = ((esi_19 * 0x8e4 + edi_16 * 0xd4e + 0x100000) s>> 0x15).w
    result_1[0x18] = ((esi_19 * 0xd4e + edi_16 * 0xfffff71c + 0x100000) s>> 0x15).w
    result = &result_1[1]
    i_1 = i_3 - 1
    i_3 = i_1
while (i_1 s>= 0)
return result
