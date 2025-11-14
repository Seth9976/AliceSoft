// 函数: sub_5f7cc0
// 地址: 0x5f7cc0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

double var_10 = fconvert.d(fconvert.t(arg4))
double var_18 = fconvert.d(fconvert.t(arg5))
long double x87_r7_5 =
    fconvert.t(arg6) * fconvert.t(0.5) * fconvert.t(3.1415926535897931) / fconvert.t(180.0)
int32_t mxcsr
int16_t x87control
sub_70d480(mxcsr, x87control, x87_r7_5)
long double x87_r6 = float.t(0)
long double x87_r5 = fconvert.t(arg6)
x87_r5 - x87_r6
long double x87_r2_3
long double x87_r3_3
long double x87_r4_2
long double x87_r5_3
long double x87_r6_2

if ((((x87_r5 < x87_r6 ? 1 : 0) << 8 | (is_unordered.t(x87_r5, x87_r6) ? 1 : 0) << 0xa
        | (x87_r5 == x87_r6 ? 1 : 0) << 0xe | 0x2800):1.b & 0x41) != 0)
    long double x87_r5_4 = fneg(x87_r5)
    *arg1 = fconvert.s(x87_r5_4)
    arg1[1] = fconvert.s(x87_r6)
    arg1[2] = fconvert.s(x87_r6)
    arg1[3] = fconvert.s(x87_r6)
    arg1[4] = fconvert.s(x87_r6)
    long double x87_r4_3 = float.t(arg2)
    long double x87_r3_4 = float.t(arg3)
    x87_r6_2 = x87_r3_4
    arg1[5] = fconvert.s(x87_r5_4 * x87_r4_3 / x87_r3_4)
    x87_r5_3 = x87_r4_3
    arg1[6] = fconvert.s(x87_r6)
    arg1[7] = fconvert.s(x87_r6)
    arg1[8] = fconvert.s(x87_r6)
    arg1[9] = fconvert.s(x87_r6)
    x87_r3_3 = fconvert.t(var_18)
    long double x87_r0_5 = float.t(1)
    arg1[0xa] = fconvert.s(x87_r0_5 / x87_r0_5)
    x87_r4_2 = fconvert.t(var_10)
    arg1[0xb] = fconvert.s(x87_r6)
    arg1[0xc] = fconvert.s(x87_r6)
    arg1[0xd] = fconvert.s(x87_r6)
    arg1[0xe] = fconvert.s(x87_r6)
    x87_r2_3 = float.t(1)
else
    *arg1 = fconvert.s(float.t(1) / x87_r7_5)
    arg1[1] = fconvert.s(x87_r5)
    arg1[2] = fconvert.s(x87_r5)
    arg1[3] = fconvert.s(x87_r5)
    arg1[4] = fconvert.s(x87_r5)
    x87_r5_3 = float.t(arg2)
    long double x87_r4 = float.t(arg3)
    arg1[5] = fconvert.s(x87_r5_3 / (x87_r4 * x87_r7_5))
    x87_r6_2 = x87_r4
    arg1[6] = fconvert.s(x87_r5)
    arg1[7] = fconvert.s(x87_r5)
    arg1[8] = fconvert.s(x87_r5)
    arg1[9] = fconvert.s(x87_r5)
    x87_r3_3 = fconvert.t(var_18)
    long double x87_r1 = fconvert.t(var_10)
    arg1[0xa] = fconvert.s(x87_r3_3 / (x87_r3_3 - x87_r1))
    arg1[0xb] = fconvert.s(float.t(1))
    x87_r4_2 = x87_r1
    arg1[0xc] = fconvert.s(x87_r5)
    arg1[0xd] = fconvert.s(x87_r5)
    long double x87_r0_4 = x87_r3_3 * x87_r4_2
    x87_r2_3 = x87_r5
    arg1[0xe] = fconvert.s(fneg(x87_r0_4 / x87_r0_4))

arg1[0xf] = fconvert.s(x87_r2_3)
arg1[0x12] = fconvert.s(fconvert.t(arg4))
arg1[0x10] = arg2
arg1[0x11] = arg3
arg1[0x13] = fconvert.s(fconvert.t(arg5))
arg1[0x14] = fconvert.s(fconvert.t(arg6))
long double x87_r4_5 = x87_r4_2 * x87_r7_5
arg1[0x15] = fconvert.s(x87_r4_5)
arg1[0x16] = fconvert.s(x87_r4_5 * x87_r6_2 / x87_r5_3)
long double x87_r7_6 = x87_r7_5 * x87_r3_3
arg1[0x17] = fconvert.s(x87_r7_6)
long double x87_r6_6 = x87_r6_2 * x87_r7_6
arg1[0x18] = fconvert.s(x87_r6_6 / x87_r6_6)
return arg2
