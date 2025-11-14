// 函数: sub_529a90
// 地址: 0x529a90
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

float* ebp = arg3
float var_c = fconvert.s(fconvert.t(*arg1) - fconvert.t(*ebp))
float var_8 = fconvert.s(fconvert.t(arg1[1]) - fconvert.t(ebp[1]))
float var_4 = fconvert.s(fconvert.t(arg1[2]) - fconvert.t(ebp[2]))
float var_18
sub_51e2a0(&var_c, &var_18)
float var_10
long double x87_r7_6 = fconvert.t(var_10)
float var_14
long double x87_r4 = fconvert.t(var_14)
float var_24 = fconvert.s(x87_r7_6 * fconvert.t(arg4[1]) - fconvert.t(arg4[2]) * x87_r4)
long double x87_r4_2 = fconvert.t(var_18)
float var_20 = fconvert.s(fconvert.t(arg4[2]) * x87_r4_2 - x87_r7_6 * fconvert.t(*arg4))
float var_1c = fconvert.s(x87_r4 * fconvert.t(*arg4) - x87_r4_2 * fconvert.t(arg4[1]))
sub_51e2a0(&var_24, &var_c)
long double x87_r7_12 = fconvert.t(var_14)
long double x87_r5_8 = fconvert.t(var_4)
long double x87_r4_5 = fconvert.t(var_8)
long double x87_r2 = fconvert.t(var_10)
var_24 = fconvert.s(x87_r7_12 * x87_r5_8 - x87_r4_5 * x87_r2)
long double x87_r2_2 = fconvert.t(var_18)
float var_20_1 = fconvert.s(fconvert.t(var_c) * x87_r2 - x87_r2_2 * x87_r5_8)
float var_1c_1 = fconvert.s(x87_r2_2 * x87_r4_5 - fconvert.t(var_c) * x87_r7_12)
long double x87_r2_7 = fconvert.t(var_c)
*arg2 = fconvert.s(x87_r2_7)
arg2[1] = fconvert.s(fconvert.t(var_24))
arg2[2] = fconvert.s(x87_r2_2)
long double x87_r1_6 = float.t(0)
arg2[3] = fconvert.s(x87_r1_6)
arg2[4] = fconvert.s(x87_r4_5)
arg2[5] = fconvert.s(fconvert.t(var_20_1))
arg2[6] = fconvert.s(x87_r7_12)
arg2[7] = fconvert.s(x87_r1_6)
arg2[8] = fconvert.s(x87_r5_8)
arg2[9] = fconvert.s(fconvert.t(var_1c_1))
arg2[0xa] = fconvert.s(x87_r2)
arg2[0xb] = fconvert.s(x87_r1_6)
arg2[0xc] = fconvert.s(fneg(fconvert.t(fconvert.s(x87_r5_8 * fconvert.t(ebp[2])
    + x87_r4_5 * fconvert.t(ebp[1]) + x87_r2_7 * fconvert.t(*ebp)))))
arg2[0xd] = fconvert.s(fneg(fconvert.t(fconvert.s(fconvert.t(*ebp) * fconvert.t(var_24)
    + fconvert.t(var_20_1) * fconvert.t(ebp[1]) + fconvert.t(ebp[2]) * fconvert.t(var_1c_1)))))
arg2[0xe] = fconvert.s(fneg(fconvert.t(fconvert.s(x87_r2 * fconvert.t(ebp[2])
    + x87_r7_12 * fconvert.t(ebp[1]) + x87_r2_2 * fconvert.t(*ebp)))))
arg2[0xf] = fconvert.s(float.t(1))
return arg2
