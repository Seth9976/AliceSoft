// 函数: sub_5feef0
// 地址: 0x5feef0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void var_98
int32_t eax_1 = data_78c474 ^ &var_98
long double x87_r7

if (arg1 != 0)
    int32_t eax_2 = arg1[0x10]
    int32_t ecx_1 = arg1[0x11]
    float var_48[0x11]
    int32_t edx
    sub_6603e0(&var_48, edx, arg1)
    long double x87_r7_1 = float.t(0)
    float var_68 = fconvert.s(x87_r7_1)
    float var_64_1 = fconvert.s(x87_r7_1)
    long double x87_r6_1 = fconvert.t(0.5)
    float var_60_1 = fconvert.s((fconvert.t(arg1[0x13]) + fconvert.t(arg1[0x12])) * x87_r6_1)
    long double x87_r6_4 = float.t(eax_2) * x87_r6_1
    int32_t var_58_1
    var_58_1.q = fconvert.d(x87_r6_4)
    float var_84 = fconvert.s(fconvert.t(arg3) / x87_r6_4)
    double var_50_1 = fconvert.d(x87_r6_1 * float.t(ecx_1))
    long double x87_r6_7 = fneg(fconvert.t(arg4))
    float var_80_1 = fconvert.s(x87_r6_7 / x87_r6_7)
    float var_78
    float* eax_5
    int32_t ecx_3
    eax_5, ecx_3 = sub_51e1c0(arg1, &var_78, arg1, &var_68)
    float var_7c_1 = fconvert.s(fconvert.t(eax_5[2]))
    float* edx_2 = &var_78
    sub_51e1c0(ecx_3, edx_2, &var_48, &var_84)
    float var_94 = fconvert.s(fconvert.t(var_78))
    float var_74
    float var_90_1 = fconvert.s(fconvert.t(var_74))
    float var_8c_1 = fconvert.s(float.t(0))
    sub_51e0e0(arg5, edx_2, &var_94)
    long double x87_r6_8 = float.t(0)
    var_84 = fconvert.s(fconvert.t(var_94) + x87_r6_8)
    float var_80_2 = fconvert.s(x87_r6_8 + fconvert.t(var_90_1))
    float var_7c_2 = fconvert.s(fconvert.t(var_8c_1) + fconvert.t(var_60_1))
    var_68 = fconvert.s(fconvert.t(var_84))
    float var_64_2 = fconvert.s(fconvert.t(var_80_2))
    float var_60_2 = fconvert.s(fconvert.t(var_7c_2))
    float var_5c_1 = fconvert.s(float.t(1))
    sub_6601d0(arg1, &var_78, &var_68)
    float var_6c
    x87_r7 = fconvert.t(var_6c)
    long double x87_r5_1 = float.t(0)
    x87_r5_1 - x87_r7
    float* eax_8
    eax_8.w = (x87_r5_1 < x87_r7 ? 1 : 0) << 8 | (is_unordered.t(x87_r5_1, x87_r7) ? 1 : 0) << 0xa
        | (x87_r5_1 == x87_r7 ? 1 : 0) << 0xe | 0x3800
    bool p_1 = unimplemented  {test ah, 0x44}
    float var_90_2
    long double x87_r6_16
    float var_70
    
    if (not(p_1))
        var_94 = fconvert.s(fconvert.t(var_78))
        var_90_2 = fconvert.s(fconvert.t(var_74))
        x87_r6_16 = fconvert.t(var_70)
    else
        long double x87_r5_2 = float.t(1)
        long double x87_r5_3 = fconvert.t(fconvert.s(x87_r5_2 / x87_r5_2))
        var_94 = fconvert.s(fconvert.t(var_78) * x87_r5_3)
        var_90_2 = fconvert.s(fconvert.t(var_74) * x87_r5_3)
        x87_r6_16 = x87_r5_3 * fconvert.t(var_70)
    float var_8c_2 = fconvert.s(x87_r6_16)
    *arg2 = fconvert.s(fconvert.t(var_94) * fconvert.t(var_58_1.q))
    arg2[1] = fconvert.s(fneg(fconvert.t(var_90_2)) * fconvert.t(var_50_1))
    arg2[2] = fconvert.s(fconvert.t(var_8c_2))
else
    x87_r7 = float.t(0)
    *arg2 = fconvert.s(x87_r7)
    arg2[1] = fconvert.s(x87_r7)
    arg2[2] = fconvert.s(x87_r7)

arg2[3] = fconvert.s(x87_r7)
sub_6b4885(eax_1 ^ &var_98)
return arg2
