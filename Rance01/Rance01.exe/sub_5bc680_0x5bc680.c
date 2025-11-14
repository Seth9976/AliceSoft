// 函数: sub_5bc680
// 地址: 0x5bc680
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

float ebx = arg4
int32_t edi_1 = arg3 s>> 1
int32_t esi_2 = arg5 i* 4
void* result = ebx i+ (edi_1 << 2) - 0x20
float* ecx_2 = result + ((arg3 - edi_1) << 2) + 0x1c

do
    arg5 = fconvert.s(fconvert.t(ecx_2[-1]) - fconvert.t(*(result + 0x18)))
    arg4 = fconvert.s(fconvert.t(*ecx_2) - fconvert.t(*(result + 0x1c)))
    ecx_2[-1] = fconvert.s(fconvert.t(*(result + 0x18)) + fconvert.t(ecx_2[-1]))
    *ecx_2 = fconvert.s(fconvert.t(*(result + 0x1c)) + fconvert.t(*ecx_2))
    long double x87_r6_1 = fconvert.t(arg4)
    long double x87_r4_1 = fconvert.t(arg5)
    *(result + 0x18) = fconvert.s(fconvert.t(*arg2) * x87_r4_1 + fconvert.t(*(arg2 + 4)) * x87_r6_1)
    void* edx = arg2 + esi_2
    *(result + 0x1c) = fconvert.s(x87_r6_1 * fconvert.t(*arg2) - x87_r4_1 * fconvert.t(*(arg2 + 4)))
    arg5 = fconvert.s(fconvert.t(ecx_2[-3]) - fconvert.t(*(result + 0x10)))
    arg4 = fconvert.s(fconvert.t(ecx_2[-2]) - fconvert.t(*(result + 0x14)))
    ecx_2[-3] = fconvert.s(fconvert.t(*(result + 0x10)) + fconvert.t(ecx_2[-3]))
    ecx_2[-2] = fconvert.s(fconvert.t(*(result + 0x14)) + fconvert.t(ecx_2[-2]))
    long double x87_r6_3 = fconvert.t(arg4)
    long double x87_r4_3 = fconvert.t(arg5)
    *(result + 0x10) = fconvert.s(fconvert.t(*edx) * x87_r4_3 + fconvert.t(*(edx + 4)) * x87_r6_3)
    void* edx_1 = edx + esi_2
    *(result + 0x14) = fconvert.s(x87_r6_3 * fconvert.t(*edx) - x87_r4_3 * fconvert.t(*(edx + 4)))
    arg5 = fconvert.s(fconvert.t(ecx_2[-5]) - fconvert.t(*(result + 8)))
    arg4 = fconvert.s(fconvert.t(ecx_2[-4]) - fconvert.t(*(result + 0xc)))
    ecx_2[-5] = fconvert.s(fconvert.t(*(result + 8)) + fconvert.t(ecx_2[-5]))
    ecx_2[-4] = fconvert.s(fconvert.t(ecx_2[-4]) + fconvert.t(*(result + 0xc)))
    long double x87_r6_5 = fconvert.t(arg4)
    long double x87_r4_5 = fconvert.t(arg5)
    *(result + 8) = fconvert.s(fconvert.t(*edx_1) * x87_r4_5 + fconvert.t(*(edx_1 + 4)) * x87_r6_5)
    result -= 0x20
    float* edx_2 = edx_1 + esi_2
    ecx_2 -= 0x20
    *(result + 0x2c) =
        fconvert.s(x87_r6_5 * fconvert.t(*edx_1) - x87_r4_5 * fconvert.t(*(edx_1 + 4)))
    arg5 = fconvert.s(fconvert.t(ecx_2[1]) - fconvert.t(*(result + 0x20)))
    arg4 = fconvert.s(fconvert.t(ecx_2[2]) - fconvert.t(*(result + 0x24)))
    ecx_2[1] = fconvert.s(fconvert.t(*(result + 0x20)) + fconvert.t(ecx_2[1]))
    ecx_2[2] = fconvert.s(fconvert.t(*(result + 0x24)) + fconvert.t(ecx_2[2]))
    long double x87_r6_7 = fconvert.t(arg4)
    long double x87_r4_7 = fconvert.t(arg5)
    *(result + 0x20) = fconvert.s(fconvert.t(*edx_2) * x87_r4_7 + fconvert.t(edx_2[1]) * x87_r6_7)
    arg2 = &edx_2[arg5]
    *(result + 0x24) = fconvert.s(x87_r6_7 * fconvert.t(*edx_2) - x87_r4_7 * fconvert.t(edx_2[1]))
while (result u>= ebx)

return result
