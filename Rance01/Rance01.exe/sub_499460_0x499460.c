// 函数: sub_499460
// 地址: 0x499460
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

float var_1ac = fconvert.s(fconvert.t(*arg6))
float var_14c = fconvert.s(fconvert.t(arg6[1]))
float var_194 = fconvert.s(fconvert.t(*arg8))
float var_1b0 = fconvert.s(fconvert.t(arg8[1]))
float var_190 = fconvert.s(fconvert.t(*arg2))
float var_1b4 = fconvert.s(fconvert.t(arg2[1]))
float var_1bc = fconvert.s(fconvert.t(*arg10))
float var_1b8 = fconvert.s(fconvert.t(arg10[1]))
float var_148 = fconvert.s(fconvert.t(*arg7))
float var_1a8 = fconvert.s(fconvert.t(arg7[1]))
float var_144 = fconvert.s(fconvert.t(*arg9))
float var_18c = fconvert.s(fconvert.t(arg9[1]))
float var_164 = fconvert.s(fconvert.t(*arg3))
float var_1a4 = fconvert.s(fconvert.t(arg3[1]))
long double x87_r7_14 = fconvert.t(var_1b0)
long double x87_r5 = fconvert.t(var_1b4)
long double x87_r4_2 = fconvert.t(var_190)
long double x87_r2 = fconvert.t(var_194)
double var_128 = fconvert.d(x87_r2)
long double x87_r2_5 = fconvert.t(var_14c)
long double x87_r1_5 = fconvert.t(var_1ac)
long double x87_r2_15 = fconvert.t(var_1b8)
long double x87_r2_17 = fconvert.t(var_1bc)
long double x87_r5_2 =
    fconvert.t(fconvert.s(fconvert.t(var_128) - fconvert.t(fconvert.d(x87_r1_5))))
long double x87_r2_21 =
    fconvert.t(fconvert.s(x87_r7_14 * fconvert.t(var_1ac) - x87_r2 * fconvert.t(var_14c)))
long double x87_r2_23 = fconvert.t(fconvert.s(x87_r5_2 * x87_r5
    + fconvert.t(fconvert.s(fconvert.t(fconvert.d(x87_r2_5)) - x87_r7_14)) * x87_r4_2 + x87_r2_21))
long double x87_r1_13 = fconvert.t(9.9999997473787516e-05)
x87_r1_13 - x87_r2_23
float* result
result.w = (x87_r1_13 < x87_r2_23 ? 1 : 0) << 8
    | (is_unordered.t(x87_r1_13, x87_r2_23) ? 1 : 0) << 0xa
    | (x87_r1_13 == x87_r2_23 ? 1 : 0) << 0xe | 0x800

if ((result:1.b & 0x41) == 0)
    return result

long double x87_r2_25 = fconvert.t(fconvert.s(
    x87_r4_2 * fconvert.t(fconvert.s(x87_r7_14 - x87_r2_15))
    + x87_r5 * fconvert.t(fconvert.s(x87_r2_17 - fconvert.t(var_128)))
    + fconvert.t(fconvert.s(x87_r2 * x87_r2_15 - x87_r7_14 * x87_r2_17))))
x87_r2_25 - x87_r1_13
result.w = (x87_r2_25 < x87_r1_13 ? 1 : 0) << 8
    | (is_unordered.t(x87_r2_25, x87_r1_13) ? 1 : 0) << 0xa
    | (x87_r2_25 == x87_r1_13 ? 1 : 0) << 0xe | 0x1800
bool p = unimplemented  {test ah, 0x5}

if (p)
    long double x87_r3_6 = float.t(1)
    long double x87_r3_7 = fconvert.t(fconvert.s(x87_r3_6 / x87_r3_6))
    float var_134_1 = fconvert.s(fconvert.t(fconvert.s(x87_r7_14 - x87_r5)) * x87_r3_7)
    float var_130_1 = fconvert.s(fconvert.t(fconvert.s(x87_r4_2 - x87_r2)) * x87_r3_7)
    float var_160_1 =
        fconvert.s(fconvert.t(fconvert.s(fconvert.t(fconvert.d(x87_r5)) - x87_r2_5)) * x87_r3_7)
    float var_15c_1 =
        fconvert.s(fconvert.t(fconvert.s(x87_r1_5 - fconvert.t(fconvert.d(x87_r4_2)))) * x87_r3_7)
    float var_180_1 = fconvert.s(x87_r1_13 * x87_r3_7)
    float var_17c_1 = fconvert.s(x87_r5_2 * x87_r3_7)
    var_128.d = (*(*arg12 + 8))(0, 0)
    double var_140_1
    var_140_1.d = (*(*arg12 + 0x1c))()
    double var_188
    var_188.d = (*(*arg12 + 0x10))() - 1
    long double x87_r7_23 = fconvert.t(var_1ac)
    long double x87_r6_12 = fconvert.t(var_194)
    x87_r6_12 - x87_r7_23
    double var_1a0
    var_1a0.d = (*(*arg12 + 0x14))() - 1
    int32_t eax_11
    eax_11.w = (x87_r6_12 < x87_r7_23 ? 1 : 0) << 8
        | (is_unordered.t(x87_r6_12, x87_r7_23) ? 1 : 0) << 0xa
        | (x87_r6_12 == x87_r7_23 ? 1 : 0) << 0xe | 0x3000
    float var_194_1
    long double x87_r6_13
    long double x87_r7_24
    
    if ((eax_11:1.b & 0x41) != 0)
        var_194_1 = fconvert.s(x87_r6_12)
        x87_r6_13 = x87_r7_23
        x87_r7_24 = x87_r6_12
    else
        x87_r6_13 = x87_r7_23
        x87_r7_24 = x87_r6_12
        var_194_1 = fconvert.s(x87_r6_13)
    
    long double x87_r5_4 = fconvert.t(var_190)
    long double x87_r4_14 = fconvert.t(var_1bc)
    x87_r4_14 - x87_r5_4
    eax_11.w = (x87_r4_14 < x87_r5_4 ? 1 : 0) << 8
        | (is_unordered.t(x87_r4_14, x87_r5_4) ? 1 : 0) << 0xa
        | (x87_r4_14 == x87_r5_4 ? 1 : 0) << 0xe | 0x2000
    float var_1bc_1
    long double x87_r4_15
    long double x87_r5_5
    
    if ((eax_11:1.b & 0x41) != 0)
        var_1bc_1 = fconvert.s(x87_r4_14)
        x87_r4_15 = x87_r5_4
        x87_r5_5 = x87_r4_14
    else
        x87_r4_15 = x87_r5_4
        x87_r5_5 = x87_r4_14
        var_1bc_1 = fconvert.s(x87_r4_15)
    
    long double x87_r3_20 = fconvert.t(var_194_1)
    long double x87_r2_27 = fconvert.t(var_1bc_1)
    x87_r2_27 - x87_r3_20
    eax_11.w = (x87_r2_27 < x87_r3_20 ? 1 : 0) << 8
        | (is_unordered.t(x87_r2_27, x87_r3_20) ? 1 : 0) << 0xa
        | (x87_r2_27 == x87_r3_20 ? 1 : 0) << 0xe | 0x1000
    
    if ((eax_11:1.b & 0x41) != 0)
        x87_r4_15 = x87_r2_27
    else
        x87_r3_20 = x87_r2_27
    
    int32_t edi_2 = *arg5
    long double x87_r3_22 = fconvert.t(fconvert.s(float.t(edi_2)))
    long double x87_r2_28 = fconvert.t(fconvert.s(x87_r3_20))
    x87_r2_28 - x87_r3_22
    eax_11.w = (x87_r2_28 < x87_r3_22 ? 1 : 0) << 8
        | (is_unordered.t(x87_r2_28, x87_r3_22) ? 1 : 0) << 0xa
        | (x87_r2_28 == x87_r3_22 ? 1 : 0) << 0xe | 0x1000
    bool p_1 = unimplemented  {test ah, 0x5}
    
    if (p_1)
        x87_r4_15 = x87_r2_28
    else
        x87_r3_22 = x87_r2_28
    
    x87_r6_13 - x87_r7_24
    int32_t var_1ac_1 = sub_70c710(fconvert.t(fconvert.s(x87_r3_22)))
    int32_t eax_12
    eax_12.w = (x87_r6_13 < x87_r7_24 ? 1 : 0) << 8
        | (is_unordered.t(x87_r6_13, x87_r7_24) ? 1 : 0) << 0xa
        | (x87_r6_13 == x87_r7_24 ? 1 : 0) << 0xe | 0x2000
    
    if ((eax_12:1.b & 0x41) != 0)
        x87_r5_5 = x87_r6_13
    
    long double x87_r7_25 = x87_r5_5
    x87_r4_15 - x87_r7_25
    eax_12.w = (x87_r4_15 < x87_r7_25 ? 1 : 0) << 8
        | (is_unordered.t(x87_r4_15, x87_r7_25) ? 1 : 0) << 0xa
        | (x87_r4_15 == x87_r7_25 ? 1 : 0) << 0xe | 0x3000
    
    if ((eax_12:1.b & 0x41) != 0)
        x87_r7_25 = x87_r4_15
    
    long double x87_r7_26 = fconvert.t(fconvert.s(x87_r7_24))
    long double x87_r6_15 = fconvert.t(fconvert.s(x87_r7_25))
    x87_r6_15 - x87_r7_26
    eax_12.w = (x87_r6_15 < x87_r7_26 ? 1 : 0) << 8
        | (is_unordered.t(x87_r6_15, x87_r7_26) ? 1 : 0) << 0xa
        | (x87_r6_15 == x87_r7_26 ? 1 : 0) << 0xe | 0x3000
    bool p_2 = unimplemented  {test ah, 0x5}
    
    if (not(p_2))
        x87_r7_26 = x87_r6_15
    
    long double x87_r7_28 = fconvert.t(fconvert.s(float.t(arg5[2] + edi_2)))
    long double x87_r6_16 = fconvert.t(fconvert.s(x87_r7_26))
    x87_r6_16 - x87_r7_28
    int32_t eax_14
    eax_14.w = (x87_r6_16 < x87_r7_28 ? 1 : 0) << 8
        | (is_unordered.t(x87_r6_16, x87_r7_28) ? 1 : 0) << 0xa
        | (x87_r6_16 == x87_r7_28 ? 1 : 0) << 0xe | 0x3000
    
    if ((eax_14:1.b & 0x41) == 0)
        x87_r7_28 = x87_r6_16
    
    long double x87_r7_30 = fconvert.t(var_14c)
    long double x87_r6_17 = fconvert.t(var_1b0)
    int32_t edi_3 = sub_70c710(fconvert.t(fconvert.s(x87_r7_28)))
    x87_r6_17 - x87_r7_30
    int32_t eax_15
    eax_15.w = (x87_r6_17 < x87_r7_30 ? 1 : 0) << 8
        | (is_unordered.t(x87_r6_17, x87_r7_30) ? 1 : 0) << 0xa
        | (x87_r6_17 == x87_r7_30 ? 1 : 0) << 0xe | 0x3000
    float var_1b0_1
    long double x87_r6_18
    long double x87_r7_31
    
    if ((eax_15:1.b & 0x41) != 0)
        var_1b0_1 = fconvert.s(x87_r6_17)
        x87_r6_18 = x87_r7_30
        x87_r7_31 = x87_r6_17
    else
        x87_r6_18 = x87_r7_30
        x87_r7_31 = x87_r6_17
        var_1b0_1 = fconvert.s(x87_r6_18)
    
    long double x87_r5_7 = fconvert.t(var_1b4)
    long double x87_r4_17 = fconvert.t(var_1b8)
    x87_r4_17 - x87_r5_7
    eax_15.w = (x87_r4_17 < x87_r5_7 ? 1 : 0) << 8
        | (is_unordered.t(x87_r4_17, x87_r5_7) ? 1 : 0) << 0xa
        | (x87_r4_17 == x87_r5_7 ? 1 : 0) << 0xe | 0x2000
    float var_1b8_1
    long double x87_r4_18
    long double x87_r5_8
    
    if ((eax_15:1.b & 0x41) != 0)
        var_1b8_1 = fconvert.s(x87_r4_17)
        x87_r4_18 = x87_r5_7
        x87_r5_8 = x87_r4_17
    else
        x87_r4_18 = x87_r5_7
        x87_r5_8 = x87_r4_17
        var_1b8_1 = fconvert.s(x87_r4_18)
    
    long double x87_r3_24 = fconvert.t(var_1b0_1)
    long double x87_r2_29 = fconvert.t(var_1b8_1)
    x87_r2_29 - x87_r3_24
    eax_15.w = (x87_r2_29 < x87_r3_24 ? 1 : 0) << 8
        | (is_unordered.t(x87_r2_29, x87_r3_24) ? 1 : 0) << 0xa
        | (x87_r2_29 == x87_r3_24 ? 1 : 0) << 0xe | 0x1000
    
    if ((eax_15:1.b & 0x41) != 0)
        x87_r4_18 = x87_r2_29
    else
        x87_r3_24 = x87_r2_29
    
    int32_t ecx_4 = arg5[1]
    long double x87_r3_26 = fconvert.t(fconvert.s(float.t(ecx_4)))
    long double x87_r2_30 = fconvert.t(fconvert.s(x87_r3_24))
    x87_r2_30 - x87_r3_26
    eax_15.w = (x87_r2_30 < x87_r3_26 ? 1 : 0) << 8
        | (is_unordered.t(x87_r2_30, x87_r3_26) ? 1 : 0) << 0xa
        | (x87_r2_30 == x87_r3_26 ? 1 : 0) << 0xe | 0x1000
    bool p_3 = unimplemented  {test ah, 0x5}
    
    if (p_3)
        x87_r4_18 = x87_r2_30
    else
        x87_r3_26 = x87_r2_30
    
    x87_r6_18 - x87_r7_31
    int32_t esi_2 = sub_70c710(fconvert.t(fconvert.s(x87_r3_26)))
    int32_t eax_16
    eax_16.w = (x87_r6_18 < x87_r7_31 ? 1 : 0) << 8
        | (is_unordered.t(x87_r6_18, x87_r7_31) ? 1 : 0) << 0xa
        | (x87_r6_18 == x87_r7_31 ? 1 : 0) << 0xe | 0x2000
    
    if ((eax_16:1.b & 0x41) != 0)
        x87_r5_8 = x87_r6_18
    
    long double x87_r7_32 = x87_r5_8
    x87_r4_18 - x87_r7_32
    eax_16.w = (x87_r4_18 < x87_r7_32 ? 1 : 0) << 8
        | (is_unordered.t(x87_r4_18, x87_r7_32) ? 1 : 0) << 0xa
        | (x87_r4_18 == x87_r7_32 ? 1 : 0) << 0xe | 0x3000
    
    if ((eax_16:1.b & 0x41) != 0)
        x87_r7_32 = x87_r4_18
    
    long double x87_r7_33 = fconvert.t(fconvert.s(x87_r7_31))
    long double x87_r6_20 = fconvert.t(fconvert.s(x87_r7_32))
    x87_r6_20 - x87_r7_33
    eax_16.w = (x87_r6_20 < x87_r7_33 ? 1 : 0) << 8
        | (is_unordered.t(x87_r6_20, x87_r7_33) ? 1 : 0) << 0xa
        | (x87_r6_20 == x87_r7_33 ? 1 : 0) << 0xe | 0x3000
    bool p_4 = unimplemented  {test ah, 0x5}
    
    if (not(p_4))
        x87_r7_33 = x87_r6_20
    
    long double x87_r7_35 = fconvert.t(fconvert.s(float.t(arg5[3] + ecx_4)))
    long double x87_r6_21 = fconvert.t(fconvert.s(x87_r7_33))
    x87_r6_21 - x87_r7_35
    int32_t eax_18
    eax_18.w = (x87_r6_21 < x87_r7_35 ? 1 : 0) << 8
        | (is_unordered.t(x87_r6_21, x87_r7_35) ? 1 : 0) << 0xa
        | (x87_r6_21 == x87_r7_35 ? 1 : 0) << 0xe | 0x3000
    
    if ((eax_18:1.b & 0x41) == 0)
        x87_r7_35 = x87_r6_21
    
    int32_t j_3 = edi_3 - var_1ac_1
    long double x87_r7_37 = fconvert.t(var_160_1)
    long double x87_r5_10 = fconvert.t(var_134_1)
    int32_t i_2 = sub_70c710(fconvert.t(fconvert.s(x87_r7_35))) - esi_2
    long double x87_r4_22 = fconvert.t(var_180_1)
    var_188.d = fconvert.s(float.t(var_188.d))
    int128_t var_f0_1 = zx.o(0)
    int32_t xmm0_11 = (data_7581b0).d
    var_1a0.d = fconvert.s(float.t(var_1a0.d))
    int32_t xmm0_12 = var_188.d
    int32_t xmm0_13 = var_1a0.d
    void* esi_3 = (*(*arg4 + 8))(var_1ac_1, esi_2)
    int32_t j_2 = j_3
    result = (*(*arg4 + 0x1c))() - (j_2 << 2)
    var_1a0.d = fconvert.s(float.t(esi_2))
    float* result_1 = result
    long double x87_r7_48 = fconvert.t(var_1a0.d)
    var_1a0.d = fconvert.s(x87_r7_48 * fconvert.t(var_130_1) + fconvert.t(fconvert.s(
        fconvert.t(fconvert.s(x87_r5 * x87_r2 - x87_r4_2 * x87_r7_14)) * x87_r3_7)))
    float xmm4_1 = var_1a0.d
    var_188.d = fconvert.s(x87_r7_48 * fconvert.t(var_15c_1) + fconvert.t(fconvert.s(
        fconvert.t(fconvert.s(x87_r2_5 * x87_r4_2 - x87_r1_5 * x87_r5)) * x87_r3_7)))
    float xmm5_1 = var_188.d
    int128_t xmm1_3 =
        fconvert.s(x87_r7_48 * fconvert.t(var_17c_1) + fconvert.t(fconvert.s(x87_r3_7 * x87_r2_21)))
    float var_120
    var_120.o = xmm1_3
    var_1a0.d = fconvert.s(float.t(var_1ac_1))
    long double x87_r7_52 = fconvert.t(var_1a0.d)
    var_1a0.d = fconvert.s(x87_r7_52 * fconvert.t(var_134_1))
    float var_110
    var_110.o = var_1a0.d
    var_188.d = fconvert.s(x87_r7_52 * fconvert.t(var_160_1))
    long double x87_r7_53 = x87_r7_52 * fconvert.t(var_180_1)
    var_180_1.o = var_188.d
    var_160_1.o = fconvert.s(x87_r7_53)
    
    if (i_2 s> 0)
        int32_t i_1 = i_2
        int32_t i
        
        do
            float xmm3_2 = var_160_1 f+ xmm1_3
            float xmm0_18 = var_110 + xmm4_1
            float xmm2_2 = var_180_1 + xmm5_1
            float xmm1_7 = xmm0_18 * var_148 + xmm2_2 * var_144 + xmm3_2 * var_164
            float xmm0_21 = xmm0_18 * var_1a8 + xmm2_2 * var_18c + xmm3_2 * var_1a4
            
            if (j_2 s> 0)
                int32_t var_164_1 = 0
                int32_t j_1 = j_2
                int32_t j
                
                do
                    int32_t edx_8
                    edx_8.b = *esi_3
                    int32_t eax_27 = (
                        int.d(__minss_xmmss_memss(_mm_max_ss(xmm0_21, 0), xmm0_13) f* xmm0_11)
                        s>> 7) * var_140_1.d + var_128.d
                    int32_t ecx_8 =
                        int.d(__minss_xmmss_memss(_mm_max_ss(xmm1_7, 0), xmm0_12) f* xmm0_11) s>> 7
                    void* edi_5 = eax_27 + (ecx_8 << 2)
                    uint32_t eax_28
                    eax_28.b = *(esi_3 + 1)
                    int32_t ecx_11 = (zx.d(*(edi_5 + 3)) * arg11) s>> 8
                    *esi_3 = (((zx.d(*(eax_27 + (ecx_8 << 2))) - zx.d(edx_8.b)) * ecx_11) s>> 8).b
                        + edx_8.b
                    char edx_12 =
                        (((zx.d(*(edi_5 + 1)) - zx.d(eax_28.b)) * ecx_11) s>> 8).b + eax_28.b
                    eax_28.b = *(esi_3 + 2)
                    xmm1_7 = xmm1_7 + fconvert.s(fconvert.t(fconvert.s(
                        x87_r7_37 * fconvert.t(var_144) + x87_r5_10 * fconvert.t(var_148)
                        + x87_r4_22 * fconvert.t(var_164))))
                    xmm0_21 = xmm0_21 + fconvert.s(fconvert.t(fconvert.s(
                        x87_r7_37 * fconvert.t(var_18c) + x87_r5_10 * fconvert.t(var_1a8)
                        + x87_r4_22 * fconvert.t(var_1a4))))
                    *(esi_3 + 1) = edx_12
                    edx_8.b = (((zx.d(*(edi_5 + 2)) - zx.d(eax_28.b)) * ecx_11) s>> 8).b + eax_28.b
                    *(esi_3 + 2) = edx_8.b
                    esi_3 += 4
                    j = j_1
                    j_1 -= 1
                while (j != 1)
                result = result_1
                j_2 = j_3
            
            xmm1_3 = var_120 + fconvert.s(fconvert.t(var_17c_1))
            xmm4_1 = xmm4_1 + fconvert.s(fconvert.t(var_130_1))
            xmm5_1 = xmm5_1 + fconvert.s(fconvert.t(var_15c_1))
            esi_3 += result
            i = i_1
            i_1 -= 1
            var_120.o = xmm1_3
        while (i != 1)

return result
