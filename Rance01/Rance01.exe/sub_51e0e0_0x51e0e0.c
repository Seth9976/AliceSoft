// 函数: sub_51e0e0
// 地址: 0x51e0e0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

float var_10 = fconvert.s(fconvert.t(arg1[4]) * fconvert.t(arg3[1])
    + fconvert.t(*arg1) * fconvert.t(*arg3) + fconvert.t(arg1[8]) * fconvert.t(arg3[2])
    + fconvert.t(arg1[0xc]))
float var_c = fconvert.s(fconvert.t(arg1[1]) * fconvert.t(*arg3)
    + fconvert.t(arg1[5]) * fconvert.t(arg3[1]) + fconvert.t(arg1[9]) * fconvert.t(arg3[2])
    + fconvert.t(arg1[0xd]))
float var_8 = fconvert.s(fconvert.t(arg1[2]) * fconvert.t(*arg3)
    + fconvert.t(arg1[6]) * fconvert.t(arg3[1]) + fconvert.t(arg1[0xa]) * fconvert.t(arg3[2])
    + fconvert.t(arg1[0xe]))
long double x87_r7_20 = fconvert.t(fconvert.s(fconvert.t(arg1[3]) * fconvert.t(*arg3)
    + fconvert.t(arg1[7]) * fconvert.t(arg3[1]) + fconvert.t(arg1[0xb]) * fconvert.t(arg3[2])
    + fconvert.t(arg1[0xf])))
long double x87_r5 = float.t(1)
x87_r5 - x87_r7_20
arg1.w = (x87_r5 < x87_r7_20 ? 1 : 0) << 8 | (is_unordered.t(x87_r5, x87_r7_20) ? 1 : 0) << 0xa
    | (x87_r5 == x87_r7_20 ? 1 : 0) << 0xe | 0x3800
bool p = unimplemented  {test ah, 0x44}

if (not(p))
    *arg3 = fconvert.s(fconvert.t(var_10))
    arg3[1] = fconvert.s(fconvert.t(var_c))
    arg3[2] = fconvert.s(fconvert.t(var_8))
    return arg3

long double x87_r5_1 = float.t(0)
x87_r5_1 - x87_r7_20
arg1.w = (x87_r5_1 < x87_r7_20 ? 1 : 0) << 8 | (is_unordered.t(x87_r5_1, x87_r7_20) ? 1 : 0) << 0xa
    | (x87_r5_1 == x87_r7_20 ? 1 : 0) << 0xe | 0x3800
bool p_1 = unimplemented  {test ah, 0x44}

if (not(p_1))
    return arg3

long double x87_r6_18 = float.t(1)
long double x87_r7_25 = fconvert.t(fconvert.s(x87_r6_18 / x87_r6_18))
*arg3 = fconvert.s(x87_r7_25 * fconvert.t(var_10))
arg3[1] = fconvert.s(x87_r7_25 * fconvert.t(var_c))
arg3[2] = fconvert.s(x87_r7_25 * fconvert.t(var_8))
return arg3
