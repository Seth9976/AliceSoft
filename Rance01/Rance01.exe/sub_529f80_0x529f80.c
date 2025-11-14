// 函数: sub_529f80
// 地址: 0x529f80
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

float* edx = arg5
long double x87_r7_1 = fconvert.t(arg1[1]) - fconvert.t(edx[1])
float* var_14 = arg3
long double x87_r6_1 = fconvert.t(arg3[2]) - fconvert.t(arg1[2])
long double x87_r5_1 = fconvert.t(arg1[2]) - fconvert.t(edx[2])
long double x87_r4_1 = fconvert.t(arg3[1]) - fconvert.t(arg1[1])
float var_c = fconvert.s(x87_r6_1 * x87_r7_1 - x87_r4_1 * x87_r5_1)
long double x87_r3_4 = fconvert.t(*arg3) - fconvert.t(*arg1)
long double x87_r2_3 = fconvert.t(*arg1) - fconvert.t(*edx)
float var_8 = fconvert.s(x87_r5_1 * x87_r3_4 - x87_r6_1 * x87_r2_3)
float var_4 = fconvert.s(x87_r2_3 * x87_r4_1 - x87_r7_1 * x87_r3_4)
long double x87_r7_4 = fconvert.t(var_8)
long double x87_r6_6 = fconvert.t(var_c)
long double x87_r5_6 = fconvert.t(var_4)
int32_t eax
long double st0
st0, eax = sub_4d9250(fconvert.s(fconvert.t(fconvert.s(x87_r7_4 * x87_r7_4 + x87_r6_6 * x87_r6_6
    + x87_r5_6 * x87_r5_6))))
long double x87_r7_10 = fconvert.t(fconvert.s(st0))
long double x87_r5_8 = float.t(0)
x87_r5_8 - x87_r7_10
eax.w = (x87_r5_8 < x87_r7_10 ? 1 : 0) << 8 | (is_unordered.t(x87_r5_8, x87_r7_10) ? 1 : 0) << 0xa
    | (x87_r5_8 == x87_r7_10 ? 1 : 0) << 0xe | 0x2800
long double x87_r7_11 = x87_r5_8
bool p = unimplemented  {test ah, 0x44}

if (p)
    long double x87_r6_11 = float.t(1)
    x87_r7_11 = x87_r6_11 / x87_r6_11

long double x87_r7_13 = fconvert.t(fconvert.s(x87_r7_11))
*arg4 = fconvert.s(x87_r7_13 * fconvert.t(var_c))
arg4[1] = fconvert.s(x87_r7_13 * fconvert.t(var_8))
arg4[2] = fconvert.s(x87_r7_13 * fconvert.t(var_4))
