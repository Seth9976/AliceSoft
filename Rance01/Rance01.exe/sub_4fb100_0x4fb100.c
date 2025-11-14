// 函数: sub_4fb100
// 地址: 0x4fb100
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

float* eax = arg4
long double x87_r6 = fconvert.t(arg5)
float* result = arg3
float var_24 = fconvert.s(fconvert.t(*arg2) - fconvert.t(*eax))
float var_20 = fconvert.s(fconvert.t(arg2[1]) - fconvert.t(eax[1]))
float var_1c = fconvert.s(fconvert.t(arg2[2]) - fconvert.t(eax[2]))
float var_30 = fconvert.s(fconvert.t(*arg1) - fconvert.t(*eax))
long double x87_r6_2 = fconvert.t(fconvert.s(fneg(fconvert.t(arg6) - x87_r6)))
float var_8 =
    fconvert.s(fconvert.t(fconvert.s(fconvert.t(arg1[1]) - fconvert.t(eax[1]))) * x87_r6_2)
float var_4 =
    fconvert.s(x87_r6_2 * fconvert.t(fconvert.s(fconvert.t(arg1[2]) - fconvert.t(eax[2]))))
long double x87_r6_6 = fconvert.t(fconvert.s(fconvert.t(arg7) - x87_r6))
float var_14 = fconvert.s(fconvert.t(var_20) * x87_r6_6)
float var_10 = fconvert.s(x87_r6_6 * fconvert.t(var_1c))
var_30 = fconvert.s(fconvert.t(fconvert.s(fconvert.t(var_24) * x87_r6_6))
    + fconvert.t(fconvert.s(fconvert.t(var_30) * x87_r6_2)))
long double x87_r7_31 = fconvert.t(var_30)
long double x87_r6_10 = float.t(0)
x87_r6_10 - x87_r7_31
eax.w = (x87_r6_10 < x87_r7_31 ? 1 : 0) << 8 | (is_unordered.t(x87_r6_10, x87_r7_31) ? 1 : 0) << 0xa
    | (x87_r6_10 == x87_r7_31 ? 1 : 0) << 0xe | 0x3000
bool p = unimplemented  {test ah, 0x44}

if (not(p))
    long double x87_r6_11 = fconvert.t(fconvert.s(fconvert.t(var_14) + fconvert.t(var_8)))
    x87_r7_31 - x87_r6_11
    eax.w = (x87_r7_31 < x87_r6_11 ? 1 : 0) << 8
        | (is_unordered.t(x87_r7_31, x87_r6_11) ? 1 : 0) << 0xa
        | (x87_r7_31 == x87_r6_11 ? 1 : 0) << 0xe | 0x3800
    bool p_1 = unimplemented  {test ah, 0x44}
    
    if (not(p_1))
        long double x87_r6_12 = fconvert.t(fconvert.s(fconvert.t(var_10) + fconvert.t(var_4)))
        x87_r7_31 - x87_r6_12
        eax.w = (x87_r7_31 < x87_r6_12 ? 1 : 0) << 8
            | (is_unordered.t(x87_r7_31, x87_r6_12) ? 1 : 0) << 0xa
            | (x87_r7_31 == x87_r6_12 ? 1 : 0) << 0xe | 0x3800
        bool p_2 = unimplemented  {test ah, 0x44}
        
        if (not(p_2))
            *result = fconvert.s(float.t(1))
            result[1] = fconvert.s(x87_r7_31)
            result[2] = fconvert.s(x87_r7_31)
            return result

sub_51e2a0(&var_30, result)
return result
