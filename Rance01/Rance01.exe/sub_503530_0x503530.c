// 函数: sub_503530
// 地址: 0x503530
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

double var_18 = fconvert.d(fconvert.t(arg4))
double var_30 = fconvert.d(fconvert.t(arg5))
long double x87_r7_5 =
    fconvert.t(arg6) * fconvert.t(0.5) * fconvert.t(3.1415926535897931) / fconvert.t(180.0)
int32_t mxcsr
int16_t x87control
sub_70d480(mxcsr, x87control, x87_r7_5)
long double x87_r6 = float.t(0)
long double x87_r5 = fconvert.t(arg6)
x87_r5 - x87_r6
int16_t result
long double x87_r3_11
long double x87_r4_6
long double x87_r5_1
long double x87_r6_5

if ((((x87_r5 < x87_r6 ? 1 : 0) << 8 | (is_unordered.t(x87_r5, x87_r6) ? 1 : 0) << 0xa
        | (x87_r5 == x87_r6 ? 1 : 0) << 0xe | 0x2800):1.b & 0x41) != 0)
    long double x87_r4_8 = fneg(x87_r5)
    float var_24_1
    
    if (arg3 == 0)
        var_24_1 = fconvert.s(x87_r6)
        x87_r5 = x87_r4_8
    else
        var_24_1 = fconvert.s(x87_r4_8 * float.t(arg2) / float.t(arg3))
    
    long double x87_r4_11 = fconvert.t(var_30)
    long double x87_r2_7 = fconvert.t(var_18)
    long double x87_r3_13 = x87_r4_11 - x87_r2_7
    long double x87_r0_1 = float.t(0)
    x87_r0_1 - x87_r3_13
    result = (x87_r0_1 < x87_r3_13 ? 1 : 0) << 8
        | (is_unordered.t(x87_r0_1, x87_r3_13) ? 1 : 0) << 0xa
        | (x87_r0_1 == x87_r3_13 ? 1 : 0) << 0xe | 0x1000
    bool p_2 = unimplemented  {test ah, 0x44}
    float var_20
    long double x87_r3_15
    
    if (not(p_2))
        x87_r4_11 = x87_r2_7
        var_30.d = fconvert.s(x87_r6)
        var_20 = fconvert.s(x87_r6)
        x87_r3_15 = x87_r3_13
    else
        var_30.d = fconvert.s(float.t(1) / x87_r3_13)
        x87_r3_15 = x87_r2_7
        var_20 = fconvert.s(fneg(x87_r2_7 / x87_r2_7))
    
    *arg1 = fconvert.s(fconvert.t(fconvert.d(x87_r4_8)))
    arg1[1] = fconvert.s(x87_r6)
    arg1[2] = fconvert.s(x87_r6)
    arg1[3] = fconvert.s(x87_r6)
    arg1[4] = fconvert.s(x87_r6)
    arg1[5] = fconvert.s(fconvert.t(var_24_1))
    arg1[6] = fconvert.s(x87_r6)
    arg1[7] = fconvert.s(x87_r6)
    arg1[8] = fconvert.s(x87_r6)
    arg1[9] = fconvert.s(x87_r6)
    arg1[0xa] = fconvert.s(fconvert.t(var_30.d))
    arg1[0xb] = fconvert.s(x87_r6)
    arg1[0xc] = fconvert.s(x87_r6)
    arg1[0xd] = fconvert.s(x87_r6)
    arg1[0xe] = fconvert.s(fconvert.t(var_20))
    arg1[0xf] = fconvert.s(float.t(1))
    x87_r4_6 = x87_r6
    x87_r6_5 = x87_r4_11
    x87_r3_11 = x87_r5
    x87_r5_1 = x87_r3_15
else
    x87_r5_1 = x87_r7_5
    float.t(0) - x87_r5_1
    bool p = unimplemented  {test ah, 0x44}
    double var_20_1
    long double x87_r4_2
    
    if (not(p))
        var_20_1 = fconvert.d(x87_r5_1)
        x87_r4_2 = x87_r5_1
    else
        x87_r4_2 = float.t(1) / x87_r7_5
        var_20_1 = fconvert.d(float.t(arg2) / (float.t(arg3) * x87_r7_5))
    
    long double x87_r3_5 = fconvert.t(var_30)
    long double x87_r1 = fconvert.t(var_18)
    long double x87_r2_4 = x87_r3_5 - x87_r1
    x87_r2_4 - x87_r5_1
    result = (x87_r2_4 < x87_r5_1 ? 1 : 0) << 8
        | (is_unordered.t(x87_r2_4, x87_r5_1) ? 1 : 0) << 0xa
        | (x87_r2_4 == x87_r5_1 ? 1 : 0) << 0xe | 0x800
    bool p_1 = unimplemented  {test ah, 0x44}
    float var_24
    
    if (not(p_1))
        var_30.d = fconvert.s(x87_r1)
        var_24 = fconvert.s(x87_r1)
        x87_r3_5 = x87_r2_4
    else
        var_30.d = fconvert.s(x87_r3_5 / x87_r2_4)
        long double x87_r1_4 = x87_r3_5 * x87_r5_1
        var_24 = fconvert.s(fneg(x87_r1_4 / x87_r1_4))
    
    *arg1 = fconvert.s(x87_r4_2)
    x87_r4_6 = x87_r1
    x87_r6_5 = x87_r3_5
    arg1[1] = fconvert.s(x87_r4_6)
    arg1[2] = fconvert.s(x87_r4_6)
    arg1[3] = fconvert.s(x87_r4_6)
    arg1[4] = fconvert.s(x87_r4_6)
    arg1[5] = fconvert.s(fconvert.t(var_20_1))
    arg1[6] = fconvert.s(x87_r4_6)
    arg1[7] = fconvert.s(x87_r4_6)
    arg1[8] = fconvert.s(x87_r4_6)
    arg1[9] = fconvert.s(x87_r4_6)
    arg1[0xa] = fconvert.s(fconvert.t(var_30.d))
    arg1[0xb] = fconvert.s(float.t(1))
    arg1[0xc] = fconvert.s(x87_r4_6)
    arg1[0xd] = fconvert.s(x87_r4_6)
    arg1[0xe] = fconvert.s(fconvert.t(var_24))
    arg1[0xf] = fconvert.s(x87_r4_6)
    x87_r3_11 = fconvert.t(arg6)

arg1[0x10] = arg2
arg1[0x12] = fconvert.s(fconvert.t(arg4))
arg1[0x11] = arg3
arg1[0x13] = fconvert.s(fconvert.t(arg5))
arg1[0x14] = fconvert.s(x87_r3_11)
long double x87_r5_5 = x87_r5_1 * x87_r7_5
long double x87_r5_6 = x87_r4_6
arg1[0x15] = fconvert.s(x87_r5_5)

if (arg2 == 0)
    x87_r5_6 = x87_r5_5
    arg1[0x16] = fconvert.s(x87_r5_6)
else
    arg1[0x16] = fconvert.s(x87_r5_5 * float.t(arg3) / float.t(arg2))

long double x87_r6_9 = x87_r6_5 * x87_r7_5
arg1[0x17] = fconvert.s(x87_r6_9)

if (arg2 == 0)
    arg1[0x18] = fconvert.s(x87_r6_9)
    return result

arg1[0x18] = fconvert.s(x87_r5_6 * float.t(arg3) / float.t(arg2))
return result
