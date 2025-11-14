// 函数: sub_4ffcf0
// 地址: 0x4ffcf0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

long double x87_r7 = fconvert.t(arg2)
long double x87_r5 = fconvert.t(arg4)
long double x87_r4_1 = fconvert.t(arg3)
long double x87_r4_3 = fconvert.t(fconvert.s(fconvert.t(*(arg1 + 0x24)) * x87_r5))
*(arg1 + 0x20) = fconvert.s(fconvert.t(fconvert.s(x87_r7 * fconvert.t(*(arg1 + 0x20)))) + x87_r4_1)
long double x87_r3_1 = fconvert.t(arg5)
*(arg1 + 0x24) = fconvert.s(x87_r4_3 + x87_r3_1)
long double x87_r3_9 = fconvert.t(fconvert.s(fconvert.t(*(arg1 + 0x60)) * x87_r5))
*(arg1 + 0x5c) = fconvert.s(fconvert.t(fconvert.s(x87_r7 * fconvert.t(*(arg1 + 0x5c)))) + x87_r4_1)
*(arg1 + 0x60) = fconvert.s(x87_r3_9 + x87_r3_1)
float var_4_2 = fconvert.s(x87_r5 * fconvert.t(*(arg1 + 0x9c)))
*(arg1 + 0x98) = fconvert.s(x87_r4_1 + fconvert.t(fconvert.s(x87_r7 * fconvert.t(*(arg1 + 0x98)))))
*(arg1 + 0x9c) = fconvert.s(x87_r3_1 + fconvert.t(var_4_2))
