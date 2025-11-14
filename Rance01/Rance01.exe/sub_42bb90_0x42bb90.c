// 函数: sub_42bb90
// 地址: 0x42bb90
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

long double x87_r6 = fconvert.t(fconvert.s(fconvert.t(arg3) / float.t(*(arg2 + 0x34))))
float var_4 = fconvert.s(fconvert.t(*(arg2 + 0x48)))
float var_c = fconvert.s(fconvert.t(*(arg2 + 0x4c)))
float var_8 = fconvert.s(fconvert.t(*(arg2 + 0x48)))
long double x87_r5_2 = fconvert.t(fconvert.s(
    (fconvert.t(*(arg2 + 0x3c)) - fconvert.t(*(arg2 + 0x38))) * x87_r6
    + fconvert.t(*(arg2 + 0x38))))
*arg1 = fconvert.s(fconvert.t(fconvert.s(
    (fconvert.t(*(arg2 + 0x44)) - fconvert.t(*(arg2 + 0x40))) * x87_r6
    + fconvert.t(*(arg2 + 0x40)))) * x87_r5_2)
arg1[1] = fconvert.s(x87_r5_2
    * fconvert.t(fconvert.s(x87_r6 * (fconvert.t(var_c) - fconvert.t(var_8)) + fconvert.t(var_4))))
