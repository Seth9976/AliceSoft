// 函数: sub_52a050
// 地址: 0x52a050
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

float* edx = arg3
long double x87_r7_6 = fconvert.t(fconvert.s(fneg(fconvert.t(*edx))))
long double x87_r5_2 = fconvert.t(fconvert.s(fneg(fconvert.t(edx[1]))))
long double x87_r3 = fconvert.t(fconvert.s(fneg(fconvert.t(edx[2]))))
long double x87_r6_5 = fconvert.t(fconvert.s(x87_r7_6 * fconvert.t(*arg1)))
    + fconvert.t(fconvert.s(fconvert.t(arg1[3]) * fconvert.t(edx[3])))
    + fconvert.t(fconvert.s(x87_r5_2 * fconvert.t(arg1[1])))
    + fconvert.t(fconvert.s(fconvert.t(arg1[2]) * x87_r3))
arg2[3] = fconvert.s(x87_r6_5)
long double x87_r4_11 = fconvert.t(fconvert.s(fconvert.t(edx[3]) * fconvert.t(*arg1)))
    + fconvert.t(fconvert.s(fconvert.t(arg1[3]) * fconvert.t(*edx)))
    + fconvert.t(fconvert.s(fconvert.t(edx[1]) * fconvert.t(arg1[2])))
*arg2 = fconvert.s(x87_r4_11 + fconvert.t(fconvert.s(x87_r3 * fconvert.t(arg1[1]))))
long double x87_r5_8 = fconvert.t(fconvert.s(fconvert.t(edx[3]) * fconvert.t(arg1[1])))
    + fconvert.t(fconvert.s(fconvert.t(arg1[3]) * fconvert.t(edx[1])))
    + fconvert.t(fconvert.s(fconvert.t(edx[2]) * fconvert.t(*arg1)))
arg2[1] = fconvert.s(x87_r5_8 + fconvert.t(fconvert.s(x87_r7_6 * fconvert.t(arg1[2]))))
long double x87_r6_16 = fconvert.t(fconvert.s(fconvert.t(edx[3]) * fconvert.t(arg1[2])))
    + fconvert.t(fconvert.s(fconvert.t(arg1[3]) * fconvert.t(edx[2])))
    + fconvert.t(fconvert.s(fconvert.t(*edx) * fconvert.t(arg1[1])))
arg2[2] = fconvert.s(x87_r6_16 + fconvert.t(fconvert.s(x87_r5_2 * fconvert.t(*arg1))))
