// 函数: sub_52a490
// 地址: 0x52a490
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

long double x87_r6 = fconvert.t(arg5)
float var_c = fconvert.s(fconvert.t(fconvert.s(fconvert.t(arg2[1]) - fconvert.t(arg4[1]))) * x87_r6)
float var_8 = fconvert.s(fconvert.t(fconvert.s(fconvert.t(arg2[2]) - fconvert.t(arg4[2]))) * x87_r6)
float var_4 = fconvert.s(x87_r6 * fconvert.t(fconvert.s(fconvert.t(arg2[3]) - fconvert.t(arg4[3]))))
*arg3 = fconvert.s(fconvert.t(*arg4) +
    fconvert.t(fconvert.s(fconvert.t(fconvert.s(fconvert.t(*arg2) - fconvert.t(*arg4))) * x87_r6)))
arg3[1] = fconvert.s(fconvert.t(var_c) + fconvert.t(arg4[1]))
arg3[2] = fconvert.s(fconvert.t(arg4[2]) + fconvert.t(var_8))
arg3[3] = fconvert.s(fconvert.t(var_4) + fconvert.t(arg4[3]))
