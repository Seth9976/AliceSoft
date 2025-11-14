// 函数: sub_4ef640
// 地址: 0x4ef640
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

long double x87_r7 = fconvert.t(4294967295.0)
long double x87_r6 = fconvert.t(2.0)
float* ebx = arg2
long double x87_r5 = float.t(1)

for (int32_t i = 0; i s< 0x64; )
    *arg1 += 1
    int32_t ecx
    
    if (*arg1 s>= 0x209)
        sub_595240(ecx, arg1)
        *arg1 = 0
    
    int32_t eax_1 = *arg1
    int32_t ecx_1 = arg1[eax_1 + 1]
    long double x87_r4_1 = float.t(arg1[eax_1 + 1])
    
    if (ecx_1 s< 0)
        x87_r4_1 = x87_r4_1 + fconvert.t(4294967296.0)
    
    *arg1 = eax_1 + 1
    arg2 = fconvert.s(fconvert.t(fconvert.s(x87_r4_1 / x87_r7)) * x87_r6 - x87_r5)
    
    if (eax_1 + 1 s>= 0x209)
        ecx_1 = sub_595240(ecx_1, arg1)
        *arg1 = 0
    
    int32_t eax_3 = *arg1
    long double x87_r4_6 = float.t(arg1[eax_3 + 1])
    
    if (arg1[eax_3 + 1] s< 0)
        x87_r4_6 = x87_r4_6 + fconvert.t(4294967296.0)
    
    *arg1 = eax_3 + 1
    
    if (eax_3 + 1 s>= 0x209)
        sub_595240(ecx_1, arg1)
        *arg1 = 0
    
    int32_t eax_5 = *arg1
    ecx = arg1[eax_5 + 1]
    long double x87_r4_11 = float.t(arg1[eax_5 + 1])
    
    if (ecx s< 0)
        x87_r4_11 = x87_r4_11 + fconvert.t(4294967296.0)
    
    float var_8_3 = fconvert.s(fconvert.t(fconvert.s(x87_r4_11 / x87_r7)) * x87_r6 - x87_r5)
    long double x87_r4_16 =
        fconvert.t(fconvert.s(fconvert.t(fconvert.s(x87_r4_6 / x87_r7)) * x87_r6 - x87_r5))
    long double x87_r2_1 = fconvert.t(arg2)
    long double x87_r1_1 = fconvert.t(var_8_3)
    long double x87_r3_4 = x87_r4_16 * x87_r4_16 + x87_r2_1 * x87_r2_1 + x87_r1_1 * x87_r1_1
    x87_r3_4 - x87_r5
    eax_5.w = (x87_r3_4 < x87_r5 ? 1 : 0) << 8 | (is_unordered.t(x87_r3_4, x87_r5) ? 1 : 0) << 0xa
        | (x87_r3_4 == x87_r5 ? 1 : 0) << 0xe | 0x2000
    bool p_1 = unimplemented  {test ah, 0x41}
    
    if (not(p_1))
        long double x87_r5_1 = fconvert.t(arg3)
        *ebx = fconvert.s(fconvert.t(arg2) * x87_r5_1)
        ebx[1] = fconvert.s(x87_r4_16 * x87_r5_1)
        ebx[2] = fconvert.s(x87_r5_1 * fconvert.t(var_8_3))
        return x87_r5
    
    i += 1
    x87_r5 = x87_r4_16

long double x87_r7_1 = fconvert.t(arg3)
*ebx = fconvert.s(x87_r7_1)
long double x87_r7_3 = fconvert.t(fconvert.s(x87_r7_1 * fconvert.t(0.0)))
ebx[1] = fconvert.s(x87_r7_3)
ebx[2] = fconvert.s(x87_r7_3)
return x87_r7
