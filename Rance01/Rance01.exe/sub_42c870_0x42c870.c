// 函数: sub_42c870
// 地址: 0x42c870
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* eax = *(arg2 + 0x1c)

if (eax == 0 || *(arg1 + 0x78) == 0)
    return 

long double x87_r7_3 = fconvert.t(fconvert.s(fconvert.t(arg4) / float.t(*(eax + 8))))
arg4 = fconvert.s(fconvert.t(*(arg1 + 0x7c)))
float var_10_1 = fconvert.s(fconvert.t(*(arg1 + 0x80)))
long double x87_r6_5 = fconvert.t(arg4)
long double x87_r4_1 = float.t(0)
x87_r4_1 - x87_r6_5
eax.w = (x87_r4_1 < x87_r6_5 ? 1 : 0) << 8 | (is_unordered.t(x87_r4_1, x87_r6_5) ? 1 : 0) << 0xa
    | (x87_r4_1 == x87_r6_5 ? 1 : 0) << 0xe | 0x2000
bool p_1 = unimplemented  {test ah, 0x44}

if (p_1)
    long double x87_r4_2 = fconvert.t(var_10_1)
    x87_r6_5 - x87_r4_2
    eax.w = (x87_r6_5 < x87_r4_2 ? 1 : 0) << 8 | (is_unordered.t(x87_r6_5, x87_r4_2) ? 1 : 0) << 0xa
        | (x87_r6_5 == x87_r4_2 ? 1 : 0) << 0xe | 0x2000
    bool p_2 = unimplemented  {test ah, 0x44}
    
    if (p_2)
        *arg3 = fconvert.s(x87_r6_5)
        int32_t mxcsr
        int16_t x87control
        sub_70d0bc(mxcsr, x87control)
        long double x87_r6_9 = fconvert.t(arg4)
        long double x87_r5_10 = x87_r6_9 * fconvert.t(9.8066501617431641)
        arg3[1] = fconvert.s(x87_r5_10 / x87_r5_10 * (fconvert.t(fconvert.d(x87_r7_3)) - x87_r6_9
            / fconvert.t(var_10_1) * (float.t(1) -
            fconvert.t(fconvert.s(fconvert.t(fconvert.s(fneg(x87_r7_3 * x87_r4_2 / x87_r4_2))))))))
        arg3[2] = fconvert.s(float.t(0))
        return 

*arg3 = fconvert.s(x87_r6_5)
arg3[1] = fconvert.s(fconvert.t(fconvert.s(x87_r7_3 * x87_r7_3)) * fconvert.t(9.8066501617431641)
    * fconvert.t(0.5))
arg3[2] = fconvert.s(x87_r6_5)
