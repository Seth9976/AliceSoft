// 函数: sub_4b49a0
// 地址: 0x4b49a0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if (*(arg1 + 8) == 0 && *(arg3 + 8) == 0)
    struct sealengine::CDualQuaternion::VTable* var_cc
    struct sealengine::CDualQuaternion::VTable** eax_1
    int32_t edx
    int32_t edx_1
    eax_1, edx_1 = sub_4b5c50(*(arg1 + 0x28), edx, &var_cc, arg2)
    float var_84[0x10]
    float* eax_2 = &var_84
    sub_4b9aa0(eax_2, edx_1, eax_1)
    float var_10c
    float* edx_2 = &var_10c
    sub_51e1c0(arg1 + 0xc, edx_2, eax_2, arg1 + 0xc)
    int32_t eax_3 = *(arg3 + 0x28)
    var_cc = &sealengine::CDualQuaternion::`vftable'
    struct sealengine::CDualQuaternion::VTable* var_a8
    struct sealengine::CDualQuaternion::VTable** eax_4
    int32_t edx_3
    eax_4, edx_3 = sub_4b5c50(eax_3, edx_2, &var_a8, arg2)
    float var_44[0x11]
    float* eax_5 = &var_44
    sub_4b9aa0(eax_5, edx_3, eax_4)
    float var_108
    float var_f4
    long double x87_r7_2 = fconvert.t(var_108) - fconvert.t(var_f4)
    float var_f8
    int32_t var_128_3 = sub_51e1c0(eax_4, &var_f8, eax_5, arg3 + 0xc)
    var_a8 = &sealengine::CDualQuaternion::`vftable'
    double var_ec_1 = fconvert.d(x87_r7_2)
    long double x87_r6_2 = fconvert.t(var_10c) - fconvert.t(var_f8)
    double var_e4_1 = fconvert.d(x87_r6_2)
    float var_104
    float var_f0
    long double x87_r5_2 = fconvert.t(var_104) - fconvert.t(var_f0)
    var_10c.q = fconvert.d(x87_r5_2)
    long double st0_1
    st0_1, arg2 = sub_4d9250(fconvert.s(fconvert.t(fconvert.s(x87_r5_2 * x87_r5_2
        + x87_r6_2 * x87_r6_2 + x87_r7_2 * x87_r7_2))))
    long double x87_r7_11 = fconvert.t(fconvert.s(st0_1))
    long double x87_r6_5 =
        fconvert.t(fconvert.s(fconvert.t(*(arg3 + 0x24)) + fconvert.t(*(arg1 + 0x24))))
    x87_r6_5 - x87_r7_11
    arg2.w = (x87_r6_5 < x87_r7_11 ? 1 : 0) << 8
        | (is_unordered.t(x87_r6_5, x87_r7_11) ? 1 : 0) << 0xa
        | (x87_r6_5 == x87_r7_11 ? 1 : 0) << 0xe | 0x3000
    bool p_1 = unimplemented  {test ah, 0x5}
    
    if (p_1)
        var_f8 = fconvert.s(fconvert.t(var_e4_1))
        float var_f4_1 = fconvert.s(fconvert.t(var_ec_1))
        float var_f0_1 = fconvert.s(fconvert.t(var_10c.q))
        float var_d8
        float* eax_6 = sub_51e2a0(&var_f8, &var_d8)
        long double x87_r6_6 = fconvert.t(fconvert.s(x87_r6_5 - x87_r7_11))
        var_10c = fconvert.s(fconvert.t(*eax_6) * x87_r6_6)
        float var_108_1 = fconvert.s(fconvert.t(eax_6[1]) * x87_r6_6)
        long double x87_r7_16 = x87_r6_6 * fconvert.t(eax_6[2])
        *arg4 = var_10c
        arg4[1] = var_108_1
        arg4[2] = fconvert.s(x87_r7_16)
        int32_t* eax_7
        eax_7.b = 1
        return 

arg2.b = 0
