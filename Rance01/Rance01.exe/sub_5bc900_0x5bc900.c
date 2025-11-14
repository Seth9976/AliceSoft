// 函数: sub_5bc900
// 地址: 0x5bc900
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t edx = *arg1
long double x87_r7 = fconvert.t(0.5)
int32_t* ecx = arg1[3]
void* ebx = arg3 + (edx s>> 1 << 2)
void* ebp = arg3 + 8
int32_t esi_2 = arg3 - ecx - 8
void* result = arg1[2] + (edx << 2)
float* edx_1 = ebx + 0xc

do
    int32_t esi_3 = *ecx
    int32_t edi_2 = ecx[1]
    float* esi_4 = ebx + (esi_3 << 2)
    float* edi_3 = ebx + (edi_2 << 2)
    edx_1 -= 0x10
    long double x87_r5_1 = fconvert.t(fconvert.s(fconvert.t(*edi_3) + fconvert.t(*esi_4)))
    long double x87_r4_2 = fconvert.t(fconvert.s(fconvert.t(*(ebx + (esi_3 << 2) + 4))
        - fconvert.t(*(ebx + (edi_2 << 2) + 4))))
    float var_8_1 =
        fconvert.s(x87_r5_1 * fconvert.t(*(result + 4)) - x87_r4_2 * fconvert.t(*result))
    float var_10_2 = fconvert.s((fconvert.t(*esi_4) - fconvert.t(*edi_3)) * x87_r7)
    long double x87_r6_17 = fconvert.t(fconvert.s(fconvert.t(*result) * x87_r5_1
        + x87_r4_2 * fconvert.t(*(result + 4))))
    long double x87_r4_5 =
        fconvert.t(fconvert.s((fconvert.t(edi_3[1]) + fconvert.t(esi_4[1])) * x87_r7))
    *(esi_2 + ecx + 8) = fconvert.s(x87_r6_17 + x87_r4_5)
    edx_1[-1] = fconvert.s(x87_r4_5 - x87_r6_17)
    long double x87_r6_19 = fconvert.t(var_8_1)
    long double x87_r4_7 = fconvert.t(var_10_2)
    *(ebp - 4) = fconvert.s(x87_r6_19 + x87_r4_7)
    *edx_1 = fconvert.s(x87_r6_19 - x87_r4_7)
    int32_t esi_6 = ecx[2]
    int32_t edi_4 = ecx[3]
    float* esi_7 = ebx + (esi_6 << 2)
    float* edi_5 = ebx + (edi_4 << 2)
    long double x87_r5_9 = fconvert.t(fconvert.s(fconvert.t(*(ebx + (esi_6 << 2) + 4))
        - fconvert.t(*(ebx + (edi_4 << 2) + 4))))
    long double x87_r3_5 = fconvert.t(fconvert.s(fconvert.t(*edi_5) + fconvert.t(*esi_7)))
    float var_c_2 =
        fconvert.s(fconvert.t(*(result + 8)) * x87_r3_5 + fconvert.t(*(result + 0xc)) * x87_r5_9)
    float var_8_2 =
        fconvert.s(x87_r3_5 * fconvert.t(*(result + 0xc)) - x87_r5_9 * fconvert.t(*(result + 8)))
    ecx = &ecx[4]
    result += 0x10
    ebp += 0x10
    float var_10_4 = fconvert.s((fconvert.t(*esi_7) - fconvert.t(*edi_5)) * x87_r7)
    long double x87_r6_36 = fconvert.t(var_c_2)
    long double x87_r4_14 =
        fconvert.t(fconvert.s((fconvert.t(edi_5[1]) + fconvert.t(esi_7[1])) * x87_r7))
    *(ebp - 0x10) = fconvert.s(x87_r6_36 + x87_r4_14)
    edx_1[-3] = fconvert.s(x87_r4_14 - x87_r6_36)
    long double x87_r6_38 = fconvert.t(var_8_2)
    long double x87_r4_16 = fconvert.t(var_10_4)
    *(ebp - 0xc) = fconvert.s(x87_r6_38 + x87_r4_16)
    edx_1[-2] = fconvert.s(x87_r6_38 - x87_r4_16)
while (esi_2 + ecx + 8 u< &edx_1[-3])

return result
