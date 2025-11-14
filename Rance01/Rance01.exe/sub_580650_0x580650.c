// 函数: sub_580650
// 地址: 0x580650
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

float eax = *arg2
float eax_1 = arg2[1]
long double x87_r7 = fconvert.t(arg2[2])
float eax_3 = *arg3
float eax_4 = arg3[1]
float var_20 = fconvert.s(fneg(x87_r7) - fconvert.t(-0.10000000149011612))
long double x87_r6_4 = fconvert.t(arg3[2]) - x87_r7
long double x87_r5 = fconvert.t(fconvert.s(x87_r6_4))
long double x87_r3 = float.t(0)
x87_r3 - x87_r5
float eax_5
eax_5.w = (x87_r3 < x87_r5 ? 1 : 0) << 8 | (is_unordered.t(x87_r3, x87_r5) ? 1 : 0) << 0xa
    | (x87_r3 == x87_r5 ? 1 : 0) << 0xe | 0x1800
long double x87_r5_1 = x87_r3
bool p = unimplemented  {test ah, 0x44}
long double x87_r4_2

if (p)
    long double x87_r3_1 = fconvert.t(var_20)
    x87_r4_2 = x87_r3_1 / x87_r3_1
    x87_r5_1 = x87_r5
else
    x87_r6_4 = x87_r5
    x87_r4_2 = fconvert.t(var_20) * fconvert.t(999.99993896484375)

arg1[5] = fconvert.s(x87_r5_1)
arg1[6] = fconvert.s(x87_r5_1)
long double x87_r4_3 = fconvert.t(eax)
long double x87_r3_3 = fconvert.t(fconvert.s(x87_r4_2))
*arg1 = fconvert.s(x87_r4_3 + (fconvert.t(eax_3) - x87_r4_3) * x87_r3_3)
long double x87_r3_5 = fconvert.t(eax_1)
arg1[1] = fconvert.s((fconvert.t(eax_4) - x87_r3_5) * x87_r3_3 + x87_r3_5)
arg1[2] = fconvert.s(x87_r7 + x87_r6_4 * x87_r3_3)
arg1[5] = fconvert.s((fconvert.t(arg3[5]) - fconvert.t(arg2[5])) * x87_r3_3 + fconvert.t(arg2[5]))
arg1[6] = fconvert.s(x87_r3_3 * (fconvert.t(arg3[6]) - fconvert.t(arg2[6])) + fconvert.t(arg2[6]))
return arg1
