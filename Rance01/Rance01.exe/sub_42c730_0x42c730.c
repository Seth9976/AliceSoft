// 函数: sub_42c730
// 地址: 0x42c730
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

long double x87_r7 = fconvert.t(arg4)
float var_10 = fconvert.s(x87_r7 / float.t(*(arg2 + 0x34)))
long double x87_r7_2 = fconvert.t(fconvert.s(x87_r7 / float.t(*(*(arg1 + 0x1c) + 8))))
float var_c = fconvert.s(x87_r7_2 * x87_r7_2)
long double x87_r6_4 = float.t(0)
long double temp1 = fconvert.t(*(arg2 + 0x6c))
x87_r6_4 - temp1
arg1.w = (x87_r6_4 < temp1 ? 1 : 0) << 8 | (is_unordered.t(x87_r6_4, temp1) ? 1 : 0) << 0xa
    | (x87_r6_4 == temp1 ? 1 : 0) << 0xe | 0x3000

if ((arg1:1.b & 0x41) == 0)
    long double x87_r5_4 =
        fconvert.t(fconvert.s(fneg(fconvert.t(*(arg2 + 0x68))) / fconvert.t(*(arg2 + 0x6c))))
    x87_r5_4 - x87_r7_2
    arg1.w = (x87_r5_4 < x87_r7_2 ? 1 : 0) << 8
        | (is_unordered.t(x87_r5_4, x87_r7_2) ? 1 : 0) << 0xa
        | (x87_r5_4 == x87_r7_2 ? 1 : 0) << 0xe | 0x2800
    bool p_1 = unimplemented  {test ah, 0x5}
    
    if (p_1)
        x87_r6_4 = x87_r5_4
    else
        arg3 = x87_r5_4
        var_c = fconvert.s(x87_r7_2 * x87_r7_2)
        x87_r7_2 = fconvert.t(fconvert.s(x87_r7_2))

float var_14_4 = fconvert.s(
    fconvert.t(fconvert.s(x87_r7_2 * fconvert.t(*(arg2 + 0x68)) + fconvert.t(0.0)))
    + fconvert.t(*(arg2 + 0x6c)) * fconvert.t(var_c) * fconvert.t(0.5))
long double x87_r6_12 = fconvert.t(*(arg2 + 0x70))
x87_r6_12 - x87_r6_4
arg1.w = (x87_r6_12 < x87_r6_4 ? 1 : 0) << 8 | (is_unordered.t(x87_r6_12, x87_r6_4) ? 1 : 0) << 0xa
    | (x87_r6_12 == x87_r6_4 ? 1 : 0) << 0xe
bool p_2 = unimplemented  {test ah, 0x44}

if (p_2)
    long double x87_r7_6 = float.t(1)
    long double temp2_1 = fconvert.t(*(arg2 + 0x74))
    x87_r7_6 - temp2_1
    arg1.w = (x87_r7_6 < temp2_1 ? 1 : 0) << 8 | (is_unordered.t(x87_r7_6, temp2_1) ? 1 : 0) << 0xa
        | (x87_r7_6 == temp2_1 ? 1 : 0) << 0xe
    bool p_3 = unimplemented  {test ah, 0x5}
    int32_t mxcsr
    int16_t x87control
    
    if (not(p_3))
        int32_t eax = sub_70cce0(mxcsr, x87control, fconvert.t(*(arg2 + 0x74)), fconvert.t(var_10))
        float var_14_5 = fconvert.s(fconvert.t(fconvert.s(arg3)) * fconvert.t(*(arg2 + 0x70))
            + fconvert.t(var_14_4))
        return eax
    
    long double x87_r7_8 = fconvert.t(-1f)
    long double temp3_1 = fconvert.t(*(arg2 + 0x74))
    x87_r7_8 - temp3_1
    arg1.w = (x87_r7_8 < temp3_1 ? 1 : 0) << 8 | (is_unordered.t(x87_r7_8, temp3_1) ? 1 : 0) << 0xa
        | (x87_r7_8 == temp3_1 ? 1 : 0) << 0xe
    
    if ((arg1:1.b & 0x41) == 0)
        int32_t eax_1 = sub_70cce0(mxcsr, x87control, fneg(fconvert.t(*(arg2 + 0x74))), 
            fconvert.t(fconvert.s(float.t(1) - fconvert.t(var_10))))
        float var_14_6 = fconvert.s(
            (float.t(1) - fconvert.t(fconvert.s(arg3))) * fconvert.t(*(arg2 + 0x70))
            + fconvert.t(var_14_4))
        return eax_1
    
    var_14_4 = fconvert.s(fconvert.t(*(arg2 + 0x70)) * fconvert.t(var_10) + fconvert.t(var_14_4))

return arg1
