// 函数: sub_5ff0b0
// 地址: 0x5ff0b0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void var_c0
int32_t eax_1 = data_78c474 ^ &var_c0
float var_ac = fconvert.s(fconvert.t(arg9))
float var_a8 = fconvert.s(fconvert.t(arg10))
float var_b0 = fconvert.s(fconvert.t(arg11))

if (arg3 != 0)
    float var_8c
    sub_6603e0(&var_8c, arg2, arg3)
    long double x87_r7_4 = float.t(0)
    float var_bc = fconvert.s(x87_r7_4)
    float var_b8_1 = fconvert.s(x87_r7_4)
    long double x87_r6_1 = fconvert.t(0.5)
    float var_b4_1 = fconvert.s((fconvert.t(arg3[0x13]) + fconvert.t(arg3[0x12])) * x87_r6_1)
    float var_a4 = fconvert.s(fconvert.t(arg5) / (float.t(arg3[0x10]) * x87_r6_1))
    long double x87_r6_6 = fneg(fconvert.t(arg6))
    arg3[0x11]
    float var_a0_1 = fconvert.s(x87_r6_6 / x87_r6_6)
    float var_98
    float var_9c_1 = fconvert.s(fconvert.t(sub_51e1c0(arg3, &var_98, arg3, &var_bc)[2]))
    float* eax_6
    int32_t ecx_1
    eax_6, ecx_1 = sub_51e1c0(&var_a4, &var_bc, &var_8c, &var_a4)
    var_8c = fconvert.s(fconvert.t(arg7))
    long double x87_r7_13 = float.t(0)
    float var_88_1 = fconvert.s(x87_r7_13)
    float var_84_1 = fconvert.s(x87_r7_13)
    float var_80_1 = fconvert.s(x87_r7_13)
    float var_7c_1 = fconvert.s(x87_r7_13)
    float var_78_1 = fconvert.s(fconvert.t(arg8))
    float var_74_1 = fconvert.s(x87_r7_13)
    float var_70_1 = fconvert.s(x87_r7_13)
    float var_6c_1 = fconvert.s(x87_r7_13)
    float var_68_1 = fconvert.s(x87_r7_13)
    long double x87_r6_8 = float.t(1)
    float var_64_1 = fconvert.s(x87_r6_8)
    float var_50_1 = fconvert.s(x87_r6_8)
    float var_60_1 = fconvert.s(x87_r7_13)
    float var_5c_1 = fconvert.s(x87_r7_13)
    float var_58_1 = fconvert.s(x87_r7_13)
    float var_54_1 = fconvert.s(x87_r7_13)
    long double x87_r6_9 = fconvert.t(var_a8)
    x87_r7_13 - x87_r6_9
    eax_6.w = (x87_r7_13 < x87_r6_9 ? 1 : 0) << 8
        | (is_unordered.t(x87_r7_13, x87_r6_9) ? 1 : 0) << 0xa
        | (x87_r7_13 == x87_r6_9 ? 1 : 0) << 0xe | 0x3000
    bool p_1 = unimplemented  {test ah, 0x44}
    float var_4c[0x11]
    long double x87_r7_15
    
    if (not(p_1))
        x87_r7_15 = x87_r6_9
    else
        int32_t var_d0_3 = ecx_1
        sub_5dcfd0(&var_4c, fconvert.s(fneg(x87_r7_13)))
        ecx_1 = sub_42e150(&var_8c, &var_4c)
        x87_r7_15 = float.t(0)
    
    long double x87_r6_10 = fconvert.t(var_ac)
    x87_r7_15 - x87_r6_10
    eax_6.w = (x87_r7_15 < x87_r6_10 ? 1 : 0) << 8
        | (is_unordered.t(x87_r7_15, x87_r6_10) ? 1 : 0) << 0xa
        | (x87_r7_15 == x87_r6_10 ? 1 : 0) << 0xe | 0x3000
    bool p_2 = unimplemented  {test ah, 0x44}
    long double x87_r7_17
    
    if (not(p_2))
        x87_r7_17 = x87_r6_10
    else
        int32_t var_d0_5 = ecx_1
        sub_4b65a0(&var_4c, fconvert.s(fneg(x87_r7_15)))
        ecx_1 = sub_42e150(&var_8c, &var_4c)
        x87_r7_17 = float.t(0)
    
    long double x87_r6_11 = fconvert.t(var_b0)
    x87_r6_11 - x87_r7_17
    eax_6.w = (x87_r6_11 < x87_r7_17 ? 1 : 0) << 8
        | (is_unordered.t(x87_r6_11, x87_r7_17) ? 1 : 0) << 0xa
        | (x87_r6_11 == x87_r7_17 ? 1 : 0) << 0xe | 0x3000
    bool p_3 = unimplemented  {test ah, 0x44}
    
    if (p_3)
        int32_t var_d0_7 = ecx_1
        sub_5dd020(&var_4c, fconvert.s(fneg(x87_r7_17)))
        sub_42e150(&var_8c, &var_4c)
    
    float var_5c_2 = fconvert.s(fconvert.t(var_bc))
    float var_58_2 = fconvert.s(fconvert.t(var_b8_1))
    __builtin_memcpy(arg4, &var_8c, 0x40)
else
    long double x87_r7_3 = float.t(1)
    *arg4 = fconvert.s(x87_r7_3)
    long double x87_r6 = float.t(0)
    arg4[1] = fconvert.s(x87_r6)
    arg4[2] = fconvert.s(x87_r6)
    arg4[3] = fconvert.s(x87_r6)
    arg4[4] = fconvert.s(x87_r6)
    arg4[6] = fconvert.s(x87_r6)
    arg4[7] = fconvert.s(x87_r6)
    arg4[8] = fconvert.s(x87_r6)
    arg4[9] = fconvert.s(x87_r6)
    arg4[0xb] = fconvert.s(x87_r6)
    arg4[0xc] = fconvert.s(x87_r6)
    arg4[0xd] = fconvert.s(x87_r6)
    arg4[0xe] = fconvert.s(x87_r6)
    arg4[5] = fconvert.s(x87_r7_3)
    arg4[0xa] = fconvert.s(x87_r7_3)
    arg4[0xf] = fconvert.s(x87_r7_3)

sub_6b4885(eax_1 ^ &var_c0)
