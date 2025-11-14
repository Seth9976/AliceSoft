// 函数: sub_529e40
// 地址: 0x529e40
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

float* edx = arg4
float var_10 = fconvert.s(fconvert.t(arg2[2]) - fconvert.t(arg1[2]))
long double x87_r7_9 = fconvert.t(fconvert.s(fconvert.t(arg2[1]) - fconvert.t(arg1[1])))
long double x87_r5_4 = fconvert.t(fconvert.s(fconvert.t(fconvert.s(fconvert.t(*edx)))
    * fconvert.t(fconvert.s(fconvert.t(*arg2) - fconvert.t(*arg1)))
    + x87_r7_9 * fconvert.t(fconvert.s(fconvert.t(edx[1])))
    + fconvert.t(fconvert.s(fconvert.t(edx[2]))) * fconvert.t(var_10)))
long double x87_r3_1 = float.t(0)
x87_r3_1 - x87_r5_4
arg2.w = (x87_r3_1 < x87_r5_4 ? 1 : 0) << 8 | (is_unordered.t(x87_r3_1, x87_r5_4) ? 1 : 0) << 0xa
    | (x87_r3_1 == x87_r5_4 ? 1 : 0) << 0xe | 0x1800
bool p = unimplemented  {test ah, 0x44}

if (p)
    long double x87_r2_4 = fconvert.t(*arg1) * fconvert.t(fconvert.s(fconvert.t(*edx)))
        + fconvert.t(fconvert.s(fconvert.t(edx[1]))) * fconvert.t(arg1[1])
        + fconvert.t(arg1[2]) * fconvert.t(fconvert.s(fconvert.t(edx[2])))
    long double x87_r3_7 = fneg(fconvert.t(edx[3])) - fconvert.t(fconvert.s(x87_r2_4))
    long double x87_r4_6 = fconvert.t(fconvert.s(x87_r3_7 / x87_r3_7))
    x87_r4_6 - x87_r5_4
    arg2.w = (x87_r4_6 < x87_r5_4 ? 1 : 0) << 8
        | (is_unordered.t(x87_r4_6, x87_r5_4) ? 1 : 0) << 0xa
        | (x87_r4_6 == x87_r5_4 ? 1 : 0) << 0xe | 0x2000
    bool p_1 = unimplemented  {test ah, 0x5}
    
    if (p_1)
        long double x87_r4_7 = float.t(1)
        x87_r4_7 - x87_r5_4
        arg2.w = (x87_r4_7 < x87_r5_4 ? 1 : 0) << 8
            | (is_unordered.t(x87_r4_7, x87_r5_4) ? 1 : 0) << 0xa
            | (x87_r4_7 == x87_r5_4 ? 1 : 0) << 0xe | 0x2800
        bool p_2 = unimplemented  {test ah, 0x5}
        
        if (p_2)
            float var_14_1 =
                fconvert.s(fconvert.t(fconvert.s(x87_r7_9 * x87_r5_4)) + fconvert.t(arg1[1]))
            long double x87_r7_18 =
                fconvert.t(arg1[2]) + fconvert.t(fconvert.s(x87_r5_4 * fconvert.t(var_10)))
            *arg3 = fconvert.s(fconvert.t(*arg1) + fconvert.t(fconvert.s(x87_r4_6 * x87_r5_4)))
            arg3[1] = var_14_1
            float eax
            eax.b = 1
            arg3[2] = fconvert.s(x87_r7_18)
            return eax

arg2.b = 0
return arg2
