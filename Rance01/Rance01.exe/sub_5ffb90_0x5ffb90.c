// 函数: sub_5ffb90
// 地址: 0x5ffb90
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

float* result = arg6
long double x87_r7_1 = fconvert.t(fconvert.s(float.t(arg8) / float.t(arg7)))
long double x87_r6_1 = float.t(1) - x87_r7_1
long double x87_r4 = fconvert.t(3.0)
long double x87_r4_5 = fconvert.t(*arg4) * x87_r4 * x87_r7_1 * x87_r6_1 * x87_r6_1
    + fconvert.t(*arg5) * x87_r6_1 * x87_r6_1 * x87_r6_1
    + fconvert.t(*arg2) * x87_r4 * x87_r7_1 * x87_r7_1 * x87_r6_1
*result = fconvert.s(x87_r4_5 + fconvert.t(*arg3) * x87_r7_1 * x87_r7_1 * x87_r7_1)
long double x87_r6_3 = x87_r6_1 * x87_r4 * fconvert.t(arg2[1]) * x87_r7_1 * x87_r7_1
    + fconvert.t(arg4[1]) * x87_r4 * x87_r7_1 * x87_r6_1 * x87_r6_1
    + fconvert.t(arg5[1]) * x87_r6_1 * x87_r6_1 * x87_r6_1
result[1] = fconvert.s(x87_r7_1 * fconvert.t(arg3[1]) * x87_r7_1 * x87_r7_1 + x87_r6_3)
return result
