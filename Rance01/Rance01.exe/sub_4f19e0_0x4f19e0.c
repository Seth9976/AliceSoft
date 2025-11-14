// 函数: sub_4f19e0
// 地址: 0x4f19e0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

float* eax = *(arg2 + 4)
float var_30 = fconvert.s(fconvert.t(*eax) - fconvert.t(*arg1))
float var_38 = fconvert.s(fconvert.t(eax[7]) - fconvert.t(arg1[1]))
float var_34 = fconvert.s(fconvert.t(eax[8]) - fconvert.t(arg1[2]))
long double x87_r7_18 = fconvert.t(fconvert.s(fconvert.t(eax[5]) - fconvert.t(arg1[2])))
long double x87_r5 = fconvert.t(fconvert.s(fconvert.t(eax[1]) - fconvert.t(arg1[1])))
long double x87_r4_1 = fconvert.t(fconvert.s(fconvert.t(eax[4]) - fconvert.t(arg1[1])))
long double x87_r2 = fconvert.t(fconvert.s(fconvert.t(eax[2]) - fconvert.t(arg1[2])))
long double x87_r2_2 = fconvert.t(fconvert.s(fconvert.t(eax[3]) - fconvert.t(*arg1)))
long double x87_r2_10 = fconvert.t(fconvert.s(fconvert.t(eax[6]) - fconvert.t(*arg1)))
long double x87_r2_12 = fconvert.t(var_38)
long double x87_r2_14 = fconvert.t(var_34)
long double x87_r2_16 = fconvert.t(var_30)
long double x87_r7_28 = fconvert.t(fconvert.s(fconvert.t(*(arg2 + 0x40))))
long double x87_r4_8 = fconvert.t(fconvert.s(fconvert.t(*(arg2 + 0x44))))
long double x87_r6_10 =
    x87_r7_28 * fconvert.t(fconvert.s(x87_r2 * x87_r2_2 - x87_r7_18 * fconvert.t(var_30)))
    + fconvert.t(fconvert.s(fconvert.t(*(arg2 + 0x3c))))
    * fconvert.t(fconvert.s(x87_r7_18 * x87_r5 - x87_r4_1 * x87_r2))
    + x87_r4_8 * fconvert.t(fconvert.s(x87_r4_1 * fconvert.t(var_30) - x87_r2_2 * x87_r5))
long double x87_r4_10 = fconvert.t(fconvert.s(x87_r6_10))
long double x87_r3_19 = float.t(0)
x87_r3_19 - x87_r4_10
eax.w = (x87_r3_19 < x87_r4_10 ? 1 : 0) << 8 | (is_unordered.t(x87_r3_19, x87_r4_10) ? 1 : 0) << 0xa
    | (x87_r3_19 == x87_r4_10 ? 1 : 0) << 0xe | 0x1800

if ((eax:1.b & 0x41) != 0)
    long double x87_r3_23 =
        x87_r7_28 * fconvert.t(fconvert.s(x87_r7_18 * x87_r2_10 - fconvert.t(var_34) * x87_r2_2))
        + x87_r3_19
        * fconvert.t(fconvert.s(fconvert.t(var_34) * x87_r4_1 - fconvert.t(var_38) * x87_r7_18))
        + x87_r4_8 * fconvert.t(fconvert.s(x87_r2_2 * x87_r2_12 - x87_r4_1 * x87_r2_10))
    long double x87_r3_24 = fconvert.t(fconvert.s(x87_r3_23))
    x87_r3_24 - x87_r4_10
    eax.w = (x87_r3_24 < x87_r4_10 ? 1 : 0) << 8
        | (is_unordered.t(x87_r3_24, x87_r4_10) ? 1 : 0) << 0xa
        | (x87_r3_24 == x87_r4_10 ? 1 : 0) << 0xe | 0x2000
    bool p_1 = unimplemented  {test ah, 0x5}
    
    if (p_1)
        long double x87_r6_13 =
            x87_r4_8 * fconvert.t(fconvert.s(x87_r5 * x87_r2_10 - x87_r2_16 * x87_r2_12))
            + x87_r3_19 * fconvert.t(fconvert.s(x87_r2_12 * x87_r2 - x87_r2_14 * x87_r5))
            + x87_r7_28 * fconvert.t(fconvert.s(x87_r2_14 * x87_r2_16 - x87_r2 * x87_r2_10))
        long double temp1_1 = fconvert.t(fconvert.s(x87_r6_13))
        x87_r4_10 - temp1_1
        eax.w = (x87_r4_10 < temp1_1 ? 1 : 0) << 8
            | (is_unordered.t(x87_r4_10, temp1_1) ? 1 : 0) << 0xa
            | (x87_r4_10 == temp1_1 ? 1 : 0) << 0xe
        
        if ((eax:1.b & 0x41) != 0)
            eax.b = 1
            return 

eax.b = 0
