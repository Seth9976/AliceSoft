// 函数: sub_51e1c0
// 地址: 0x51e1c0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

float* ecx = arg4
long double x87_r7_5 = fconvert.t(fconvert.s(fconvert.t(arg3[4]) * fconvert.t(ecx[1])
    + fconvert.t(*arg3) * fconvert.t(*ecx) + fconvert.t(arg3[8]) * fconvert.t(ecx[2])
    + fconvert.t(arg3[0xc])))
*arg2 = fconvert.s(x87_r7_5)
long double x87_r6_9 = fconvert.t(fconvert.s(fconvert.t(arg3[1]) * fconvert.t(*ecx)
    + fconvert.t(arg3[5]) * fconvert.t(ecx[1]) + fconvert.t(arg3[9]) * fconvert.t(ecx[2])
    + fconvert.t(arg3[0xd])))
arg2[1] = fconvert.s(x87_r6_9)
long double x87_r5_9 = fconvert.t(fconvert.s(fconvert.t(arg3[2]) * fconvert.t(*ecx)
    + fconvert.t(arg3[6]) * fconvert.t(ecx[1]) + fconvert.t(arg3[0xa]) * fconvert.t(ecx[2])
    + fconvert.t(arg3[0xe])))
arg2[2] = fconvert.s(x87_r5_9)
long double x87_r4_9 = fconvert.t(fconvert.s(fconvert.t(arg3[3]) * fconvert.t(*ecx)
    + fconvert.t(arg3[7]) * fconvert.t(ecx[1]) + fconvert.t(arg3[0xb]) * fconvert.t(ecx[2])
    + fconvert.t(arg3[0xf])))
long double x87_r2 = float.t(1)
x87_r2 - x87_r4_9
arg3.w = (x87_r2 < x87_r4_9 ? 1 : 0) << 8 | (is_unordered.t(x87_r2, x87_r4_9) ? 1 : 0) << 0xa
    | (x87_r2 == x87_r4_9 ? 1 : 0) << 0xe | 0x2000
bool p = unimplemented  {test ah, 0x44}

if (not(p))
    return arg2

float.t(0) - x87_r4_9
bool p_1 = unimplemented  {test ah, 0x44}

if (not(p_1))
    return arg2

long double x87_r3_6 = float.t(1)
long double x87_r4_11 = fconvert.t(fconvert.s(x87_r3_6 / x87_r3_6))
*arg2 = fconvert.s(x87_r7_5 * x87_r4_11)
arg2[1] = fconvert.s(x87_r6_9 * x87_r4_11)
arg2[2] = fconvert.s(x87_r4_11 * x87_r5_9)
return arg2
