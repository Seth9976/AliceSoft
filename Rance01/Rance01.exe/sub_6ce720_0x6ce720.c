// 函数: sub_6ce720
// 地址: 0x6ce720
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void var_160
void* eax = &var_160
int32_t var_44 = 7
int16_t* var_38 = arg1
void* var_3c = &var_160
bool cond:0_1

do
    int32_t edx_1 = sx.d(*var_38)
    int32_t ecx_1 = sx.d(var_38[7])
    int32_t edx_2 = edx_1 + ecx_1
    int32_t ebp_1 = sx.d(var_38[1])
    int32_t esi_1 = sx.d(var_38[6])
    int32_t edx_3 = ebp_1 + esi_1
    int32_t ecx_2 = sx.d(var_38[2])
    int32_t ebx_1 = sx.d(var_38[5])
    int32_t edx_4 = ecx_2 + ebx_1
    int32_t edx_5 = sx.d(var_38[3])
    int32_t edi_1 = sx.d(var_38[4])
    int32_t eax_2 = edx_5 + edi_1
    int32_t ecx_3 = ecx_2 - ebx_1
    int32_t ebp_2 = ebp_1 - esi_1
    int32_t ebp_3 = edx_2 + eax_2
    int32_t ecx_5 = edx_1 - ecx_1
    int32_t esi_3 = edx_2 - eax_2
    int32_t ecx_6 = edx_3 + edx_4
    *eax = ebp_3 + ecx_6
    *(eax + 0x10) = ebp_3 - ecx_6
    int32_t ebx_7 = ((edx_3 - edx_4 + esi_3) * 0x5a82 + 0x4000) s>> 0xf
    *(eax + 8) = esi_3 + ebx_7
    int32_t edx_7 = edx_5 - edi_1 + ecx_3
    *(eax + 0x18) = esi_3 - ebx_7
    int32_t edi_4 = ebp_2 + ecx_5
    int32_t ebx_12 = ((edx_7 - edi_4) * 0x30fc + 0x4000) s>> 0xf
    int32_t esi_8 = ((edx_7 * 0x4546 + 0x4000) s>> 0xf) + ebx_12
    int32_t ebx_13 = ebx_12 + ((edi_4 * 0xa73d + 0x4000) s>> 0xf)
    int32_t edx_13 = ((ecx_3 + ebp_2) * 0x5a82 + 0x4000) s>> 0xf
    int32_t ebp_7 = ecx_5 + edx_13
    int32_t ecx_9 = ecx_5 - edx_13
    *(eax + 0x14) = esi_8 + ecx_9
    *(eax + 0xc) = ecx_9 - esi_8
    *(eax + 4) = ebx_13 + ebp_7
    *(eax + 0x1c) = ebp_7 - ebx_13
    eax += 0x20
    var_38 = &var_38[8]
    cond:0_1 = var_44 - 1 s>= 0
    var_44 -= 1
while (cond:0_1)
void* edx_18 = var_3c
int16_t* ecx_11 = arg1
int32_t i_1 = 7
int32_t i

do
    int32_t eax_5 = *edx_18
    int32_t ebp_9 = *(edx_18 + 0xe0)
    int32_t ebx_14 = eax_5 + ebp_9
    int32_t eax_6 = eax_5 - ebp_9
    int32_t ebp_10 = *(edx_18 + 0xc0)
    int32_t eax_7 = *(edx_18 + 0x20)
    int32_t edi_5 = eax_7 + ebp_10
    int32_t eax_8 = eax_7 - ebp_10
    int32_t ebp_11 = *(edx_18 + 0xa0)
    int32_t eax_9 = *(edx_18 + 0x40)
    int32_t esi_10 = eax_9 + ebp_11
    int32_t eax_10 = eax_9 - ebp_11
    int32_t ebp_12 = *(edx_18 + 0x80)
    int32_t eax_11 = *(edx_18 + 0x60)
    int32_t edx_19 = eax_11 + ebp_12
    int16_t ebp_13 = ebx_14.w + edx_19.w
    int32_t ebx_15 = ebx_14 - edx_19
    int16_t edx_20 = edi_5.w + esi_10.w
    *ecx_11 = ebp_13 + edx_20
    ecx_11[0x20] = ebp_13 - edx_20
    int16_t edx_23 = (((edi_5 - esi_10 + ebx_15) * 0x5a82 + 0x4000) s>> 0xf).w
    ecx_11[0x10] = ebx_15.w + edx_23
    int32_t eax_13 = eax_11 - ebp_12 + eax_10
    ecx_11[0x30] = ebx_15.w - edx_23
    int32_t ebp_17 = eax_8 + eax_6
    int16_t edx_28 = (((eax_13 - ebp_17) * 0x30fc + 0x4000) s>> 0xf).w
    int16_t edi_11 = ((eax_13 * 0x4546 + 0x4000) s>> 0xf).w + edx_28
    int16_t edx_29 = edx_28 + ((ebp_17 * 0xa73d + 0x4000) s>> 0xf).w
    int16_t ebp_20 = (((eax_10 + eax_8) * 0x5a82 + 0x4000) s>> 0xf).w
    int16_t eax_17 = eax_6.w + ebp_20
    int16_t ebx_18 = eax_6.w - ebp_20
    ecx_11[0x28] = edi_11 + ebx_18
    ecx_11[0x18] = ebx_18 - edi_11
    ecx_11[8] = edx_29 + eax_17
    edx_18 += 4
    ecx_11[0x38] = eax_17 - edx_29
    ecx_11 = &ecx_11[1]
    i = i_1 - 1
    i_1 = i
while (i s>= 0)

return i
