// 函数: sub_5bca80
// 地址: 0x5bca80
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* ebx = arg2
int32_t eax = *ebx
int32_t eax_1 = eax s>> 2
int32_t esi_1 = eax s>> 1
float* edx_1 = arg3 i+ ((eax_1 + esi_1) << 2)
int32_t ebp_1 = eax_1 << 2
void* ecx = arg1 + (esi_1 << 2) - 0x1c
arg2 = edx_1
void* eax_3 = ebx[2] + ebp_1

do
    edx_1 -= 0x10
    long double x87_r7_2 = fneg(fconvert.t(*(ecx + 8)))
    ecx -= 0x20
    long double x87_r7_3 = x87_r7_2 * fconvert.t(*(eax_3 + 0xc))
    eax_3 += 0x10
    *edx_1 = fconvert.s(x87_r7_3 - fconvert.t(*(ecx + 0x20)) * fconvert.t(*(eax_3 - 8)))
    edx_1[1] = fconvert.s(fconvert.t(*(ecx + 0x20)) * fconvert.t(*(eax_3 - 4))
        - fconvert.t(*(eax_3 - 8)) * fconvert.t(*(ecx + 0x28)))
    edx_1[2] = fconvert.s(fneg(fconvert.t(*(ecx + 0x38))) * fconvert.t(*(eax_3 - 0xc))
        - fconvert.t(*(eax_3 - 0x10)) * fconvert.t(*(ecx + 0x30)))
    edx_1[3] = fconvert.s(fconvert.t(*(eax_3 - 0xc)) * fconvert.t(*(ecx + 0x30))
        - fconvert.t(*(ecx + 0x38)) * fconvert.t(*(eax_3 - 0x10)))
while (ecx u>= arg1)

float* edx_2 = arg2
void* ecx_1 = arg1 + (esi_1 << 2) - 0x20
void* eax_5 = ebx[2] + ebp_1

do
    long double x87_r7_15 = fconvert.t(*(eax_5 - 8))
    eax_5 -= 0x10
    long double x87_r7_16 = x87_r7_15 * fconvert.t(*(ecx_1 + 0x18))
    ecx_1 -= 0x20
    edx_2 = &edx_2[4]
    edx_2[-4] = fconvert.s(x87_r7_16 + fconvert.t(*(eax_5 + 0xc)) * fconvert.t(*(ecx_1 + 0x30)))
    edx_2[-3] = fconvert.s(fconvert.t(*(eax_5 + 8)) * fconvert.t(*(ecx_1 + 0x30))
        - fconvert.t(*(ecx_1 + 0x38)) * fconvert.t(*(eax_5 + 0xc)))
    edx_2[-2] = fconvert.s(fconvert.t(*(ecx_1 + 0x20)) * fconvert.t(*(eax_5 + 4))
        + fconvert.t(*eax_5) * fconvert.t(*(ecx_1 + 0x28)))
    edx_2[-1] = fconvert.s(fconvert.t(*(ecx_1 + 0x20)) * fconvert.t(*eax_5)
        - fconvert.t(*(eax_5 + 4)) * fconvert.t(*(ecx_1 + 0x28)))
while (ecx_1 u>= arg1)

int32_t ebp_2 = esi_1 << 2
int32_t eax_6 = arg3 i+ ebp_2
int32_t var_1c = esi_1
int32_t var_20 = eax_6
sub_5bc900(ebx, sub_5bc7f0(ebx, edx_2, ecx_1), arg3)
float* edi_2 = arg2
float* eax_10 = ebx[2] + ebp_2
void* ecx_4 = arg3 i+ 0xc
void* edx_5 = &arg2[2]

do
    edx_5 -= 0x10
    long double x87_r7_28 = fconvert.t(eax_10[1]) * fconvert.t(*(ecx_4 - 0xc))
    ecx_4 += 0x20
    long double x87_r6_18 = fconvert.t(*(ecx_4 - 0x28)) * fconvert.t(*eax_10)
    edi_2 = &edi_2[4]
    eax_10 = &eax_10[8]
    *(edx_5 + 4) = fconvert.s(x87_r7_28 - x87_r6_18)
    edi_2[-4] = fconvert.s(fneg(fconvert.t(*(ecx_4 - 0x2c)) * fconvert.t(eax_10[-8])
        + fconvert.t(*(ecx_4 - 0x28)) * fconvert.t(eax_10[-7])))
    *edx_5 = fconvert.s(fconvert.t(*(ecx_4 - 0x24)) * fconvert.t(eax_10[-5])
        - fconvert.t(eax_10[-6]) * fconvert.t(*(ecx_4 - 0x20)))
    edi_2[-3] = fconvert.s(fneg(fconvert.t(*(ecx_4 - 0x24)) * fconvert.t(eax_10[-6])
        + fconvert.t(eax_10[-5]) * fconvert.t(*(ecx_4 - 0x20))))
    *(edx_5 - 4) = fconvert.s(fconvert.t(*(ecx_4 - 0x1c)) * fconvert.t(eax_10[-3])
        - fconvert.t(*(ecx_4 - 0x18)) * fconvert.t(eax_10[-4]))
    edi_2[-2] = fconvert.s(fneg(fconvert.t(*(ecx_4 - 0x18)) * fconvert.t(eax_10[-3])
        + fconvert.t(*(ecx_4 - 0x1c)) * fconvert.t(eax_10[-4])))
    *(edx_5 - 8) = fconvert.s(fconvert.t(*(ecx_4 - 0x14)) * fconvert.t(eax_10[-1])
        - fconvert.t(*(ecx_4 - 0x10)) * fconvert.t(eax_10[-2]))
    edi_2[-1] = fconvert.s(fneg(fconvert.t(*(ecx_4 - 0x10)) * fconvert.t(eax_10[-1])
        + fconvert.t(*(ecx_4 - 0x14)) * fconvert.t(eax_10[-2])))
while (ecx_4 - 0xc u< edx_5 - 8)

void* ecx_6 = ebp_1 i+ arg3 + 8
float* i = arg2
void* edx_8 = &i[2 - esi_1]

do
    long double x87_r7_55 = fconvert.t(i[-1])
    i -= 0x10
    edx_8 -= 0x10
    long double x87_r7_56 = fconvert.t(fconvert.s(x87_r7_55))
    ecx_6 += 0x10
    *(edx_8 + 4) = fconvert.s(x87_r7_56)
    *(ecx_6 - 0x18) = fconvert.s(fneg(x87_r7_56))
    long double x87_r7_59 = fconvert.t(fconvert.s(fconvert.t(i[2])))
    *edx_8 = fconvert.s(x87_r7_59)
    *(ecx_6 - 0x14) = fconvert.s(fneg(x87_r7_59))
    long double x87_r7_62 = fconvert.t(fconvert.s(fconvert.t(i[1])))
    *(edx_8 - 4) = fconvert.s(x87_r7_62)
    *(ecx_6 - 0x10) = fconvert.s(fneg(x87_r7_62))
    long double x87_r7_65 = fconvert.t(fconvert.s(fconvert.t(*i)))
    *(edx_8 - 8) = fconvert.s(x87_r7_65)
    *(ecx_6 - 0xc) = fconvert.s(fneg(x87_r7_65))
while (ecx_6 - 8 u< i)

float* result = arg2
void* ecx_7 = &arg2[2]

do
    result -= 0x10
    *result = fconvert.s(fconvert.t(*(ecx_7 + 4)))
    ecx_7 += 0x10
    result[1] = fconvert.s(fconvert.t(*(ecx_7 - 0x10)))
    result[2] = fconvert.s(fconvert.t(*(ecx_7 - 0x14)))
    result[3] = fconvert.s(fconvert.t(*(ecx_7 - 0x18)))
while (result u> eax_6)

return result
