// 函数: sub_5bc530
// 地址: 0x5bc530
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t esi_1 = arg1 s>> 1
float* result = arg3 + (esi_1 << 2) - 0x20
float* edx = arg2 + 0x10
float* ecx_1 = &result[arg1 - esi_1 + 7]

do
    float var_4_1 = fconvert.s(fconvert.t(ecx_1[-1]) - fconvert.t(result[6]))
    float var_8_1 = fconvert.s(fconvert.t(*ecx_1) - fconvert.t(result[7]))
    ecx_1[-1] = fconvert.s(fconvert.t(result[6]) + fconvert.t(ecx_1[-1]))
    *ecx_1 = fconvert.s(fconvert.t(result[7]) + fconvert.t(*ecx_1))
    long double x87_r6_1 = fconvert.t(var_8_1)
    long double x87_r5_2 = fconvert.t(var_4_1)
    result[6] = fconvert.s(fconvert.t(edx[-3]) * x87_r6_1 + x87_r5_2 * fconvert.t(edx[-4]))
    result[7] = fconvert.s(x87_r6_1 * fconvert.t(edx[-4]) - x87_r5_2 * fconvert.t(edx[-3]))
    float var_4_2 = fconvert.s(fconvert.t(ecx_1[-3]) - fconvert.t(result[4]))
    float var_8_2 = fconvert.s(fconvert.t(ecx_1[-2]) - fconvert.t(result[5]))
    ecx_1[-3] = fconvert.s(fconvert.t(result[4]) + fconvert.t(ecx_1[-3]))
    ecx_1[-2] = fconvert.s(fconvert.t(ecx_1[-2]) + fconvert.t(result[5]))
    long double x87_r7_23 = fconvert.t(var_8_2)
    long double x87_r5_5 = fconvert.t(var_4_2)
    result[4] = fconvert.s(x87_r7_23 * fconvert.t(edx[1]) + x87_r5_5 * fconvert.t(*edx))
    result[5] = fconvert.s(x87_r7_23 * fconvert.t(*edx) - x87_r5_5 * fconvert.t(edx[1]))
    float var_4_3 = fconvert.s(fconvert.t(ecx_1[-5]) - fconvert.t(result[2]))
    float var_8_3 = fconvert.s(fconvert.t(ecx_1[-4]) - fconvert.t(result[3]))
    ecx_1[-5] = fconvert.s(fconvert.t(ecx_1[-5]) + fconvert.t(result[2]))
    ecx_1[-4] = fconvert.s(fconvert.t(ecx_1[-4]) + fconvert.t(result[3]))
    long double x87_r7_34 = fconvert.t(var_8_3)
    long double x87_r5_8 = fconvert.t(var_4_3)
    result[2] = fconvert.s(x87_r7_34 * fconvert.t(edx[5]) + x87_r5_8 * fconvert.t(edx[4]))
    result[3] = fconvert.s(x87_r7_34 * fconvert.t(edx[4]) - x87_r5_8 * fconvert.t(edx[5]))
    float var_4_4 = fconvert.s(fconvert.t(ecx_1[-7]) - fconvert.t(*result))
    result -= 0x20
    long double x87_r7_39 = fconvert.t(ecx_1[-6])
    ecx_1 -= 0x20
    edx = &edx[0x10]
    float var_8_4 = fconvert.s(x87_r7_39 - fconvert.t(result[9]))
    ecx_1[1] = fconvert.s(fconvert.t(result[8]) + fconvert.t(ecx_1[1]))
    ecx_1[2] = fconvert.s(fconvert.t(result[9]) + fconvert.t(ecx_1[2]))
    long double x87_r7_45 = fconvert.t(var_8_4)
    long double x87_r5_11 = fconvert.t(var_4_4)
    result[8] = fconvert.s(x87_r7_45 * fconvert.t(edx[-7]) + x87_r5_11 * fconvert.t(edx[-8]))
    result[9] = fconvert.s(x87_r7_45 * fconvert.t(edx[-8]) - x87_r5_11 * fconvert.t(edx[-7]))
while (result u>= arg3)

return result
