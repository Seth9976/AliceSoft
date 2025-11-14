// 函数: sub_4ef7a0
// 地址: 0x4ef7a0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ecx
int32_t var_4_1 = ecx
long double x87_r7 = fconvert.t(4294967295.0)
long double x87_r6 = fconvert.t(2.0)
float* ebx = arg2
long double x87_r5 = float.t(1)

for (int32_t i = 0; i s< 0x64; )
    *arg1 += 1
    
    if (*arg1 s>= 0x209)
        sub_595240(ecx, arg1)
        *arg1 = 0
    
    int32_t eax_1 = *arg1
    ecx = arg1[eax_1 + 1]
    long double x87_r4_1 = float.t(arg1[eax_1 + 1])
    
    if (ecx s< 0)
        x87_r4_1 = x87_r4_1 + fconvert.t(4294967296.0)
    
    *arg1 = eax_1 + 1
    
    if (eax_1 + 1 s>= 0x209)
        ecx = sub_595240(ecx, arg1)
        *arg1 = 0
    
    int32_t edx_3 = *arg1
    long double x87_r4_6 = float.t(arg1[edx_3 + 1])
    
    if (arg1[edx_3 + 1] s< 0)
        x87_r4_6 = x87_r4_6 + fconvert.t(4294967296.0)
    
    long double x87_r4_11 =
        fconvert.t(fconvert.s(fconvert.t(fconvert.s(x87_r4_6 / x87_r7)) * x87_r6 - x87_r5))
    long double x87_r2_1 =
        fconvert.t(fconvert.s(fconvert.t(fconvert.s(x87_r4_1 / x87_r7)) * x87_r6 - x87_r5))
    long double x87_r3_3 = x87_r4_11 * x87_r4_11 + x87_r2_1 * x87_r2_1
    x87_r3_3 - x87_r5
    int32_t eax_3
    eax_3.w = (x87_r3_3 < x87_r5 ? 1 : 0) << 8 | (is_unordered.t(x87_r3_3, x87_r5) ? 1 : 0) << 0xa
        | (x87_r3_3 == x87_r5 ? 1 : 0) << 0xe | 0x1800
    bool p_1 = unimplemented  {test ah, 0x41}
    
    if (not(p_1))
        long double x87_r5_2 = fconvert.t(arg3)
        *ebx = fconvert.s(x87_r2_1 * x87_r5_2)
        ebx[1] = fconvert.s(fconvert.t(0.0) * x87_r5_2)
        ebx[2] = fconvert.s(x87_r5 * x87_r5_2)
        return x87_r4_11
    
    i += 1
    x87_r5 = x87_r4_11

long double x87_r7_1 = fconvert.t(arg3)
*ebx = fconvert.s(x87_r7_1)
long double x87_r7_3 = fconvert.t(fconvert.s(x87_r7_1 * fconvert.t(0.0)))
ebx[1] = fconvert.s(x87_r7_3)
ebx[2] = fconvert.s(x87_r7_3)
return x87_r7
