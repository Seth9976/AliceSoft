// 函数: sub_4806e0
// 地址: 0x4806e0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

float var_1c0 = fconvert.s(fconvert.t(*arg6))
float var_16c = fconvert.s(fconvert.t(arg6[1]))
float var_1a8 = fconvert.s(fconvert.t(*arg8))
float var_1c8 = fconvert.s(fconvert.t(arg8[1]))
float var_1ac = fconvert.s(fconvert.t(*arg2))
float var_1c4 = fconvert.s(fconvert.t(arg2[1]))
float var_1d0 = fconvert.s(fconvert.t(*arg10))
float var_1cc = fconvert.s(fconvert.t(arg10[1]))
float var_168 = fconvert.s(fconvert.t(*arg7))
float var_1a4 = fconvert.s(fconvert.t(arg7[1]))
float var_154 = fconvert.s(fconvert.t(*arg9))
float var_164 = fconvert.s(fconvert.t(arg9[1]))
float var_194 = fconvert.s(fconvert.t(*arg3))
float var_1bc = fconvert.s(fconvert.t(arg3[1]))
long double x87_r7_14 = fconvert.t(var_1c8)
long double x87_r5 = fconvert.t(var_1c4)
long double x87_r4_2 = fconvert.t(var_1ac)
long double x87_r2 = fconvert.t(var_1a8)
double var_138 = fconvert.d(x87_r2)
long double x87_r2_5 = fconvert.t(var_16c)
long double x87_r1_5 = fconvert.t(var_1c0)
long double x87_r2_15 = fconvert.t(var_1cc)
long double x87_r2_17 = fconvert.t(var_1d0)
long double x87_r5_2 =
    fconvert.t(fconvert.s(fconvert.t(var_138) - fconvert.t(fconvert.d(x87_r1_5))))
long double x87_r2_21 =
    fconvert.t(fconvert.s(x87_r7_14 * fconvert.t(var_1c0) - x87_r2 * fconvert.t(var_16c)))
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
    + x87_r5 * fconvert.t(fconvert.s(x87_r2_17 - fconvert.t(var_138)))
    + fconvert.t(fconvert.s(x87_r2 * x87_r2_15 - x87_r7_14 * x87_r2_17))))
x87_r2_25 - x87_r1_13
result.w = (x87_r2_25 < x87_r1_13 ? 1 : 0) << 8
    | (is_unordered.t(x87_r2_25, x87_r1_13) ? 1 : 0) << 0xa
    | (x87_r2_25 == x87_r1_13 ? 1 : 0) << 0xe | 0x1800
bool p = unimplemented  {test ah, 0x5}

if (p)
    long double x87_r3_6 = float.t(1)
    long double x87_r3_7 = fconvert.t(fconvert.s(x87_r3_6 / x87_r3_6))
    float var_150_1 = fconvert.s(fconvert.t(fconvert.s(x87_r7_14 - x87_r5)) * x87_r3_7)
    float var_14c_1 = fconvert.s(fconvert.t(fconvert.s(x87_r4_2 - x87_r2)) * x87_r3_7)
    float var_180_1 =
        fconvert.s(fconvert.t(fconvert.s(fconvert.t(fconvert.d(x87_r5)) - x87_r2_5)) * x87_r3_7)
    float var_17c_1 =
        fconvert.s(fconvert.t(fconvert.s(x87_r1_5 - fconvert.t(fconvert.d(x87_r4_2)))) * x87_r3_7)
    float var_190_1 = fconvert.s(x87_r1_13 * x87_r3_7)
    float var_18c_1 = fconvert.s(x87_r5_2 * x87_r3_7)
    var_138.d = (*(*arg11 + 8))(0, 0)
    double var_160_1
    var_160_1.d = (*(*arg11 + 0x1c))()
    double var_1a0
    var_1a0.d = (*(*arg11 + 0x10))() - 1
    long double x87_r7_23 = fconvert.t(var_1c0)
    long double x87_r6_12 = fconvert.t(var_1a8)
    x87_r6_12 - x87_r7_23
    double var_1b8
    var_1b8.d = (*(*arg11 + 0x14))() - 1
    int32_t eax_11
    eax_11.w = (x87_r6_12 < x87_r7_23 ? 1 : 0) << 8
        | (is_unordered.t(x87_r6_12, x87_r7_23) ? 1 : 0) << 0xa
        | (x87_r6_12 == x87_r7_23 ? 1 : 0) << 0xe | 0x3000
    float var_1a8_1
    long double x87_r6_13
    long double x87_r7_24
    
    if ((eax_11:1.b & 0x41) != 0)
        var_1a8_1 = fconvert.s(x87_r6_12)
        x87_r6_13 = x87_r7_23
        x87_r7_24 = x87_r6_12
    else
        x87_r6_13 = x87_r7_23
        x87_r7_24 = x87_r6_12
        var_1a8_1 = fconvert.s(x87_r6_13)
    
    long double x87_r5_4 = fconvert.t(var_1ac)
    long double x87_r4_14 = fconvert.t(var_1d0)
    x87_r4_14 - x87_r5_4
    eax_11.w = (x87_r4_14 < x87_r5_4 ? 1 : 0) << 8
        | (is_unordered.t(x87_r4_14, x87_r5_4) ? 1 : 0) << 0xa
        | (x87_r4_14 == x87_r5_4 ? 1 : 0) << 0xe | 0x2000
    float var_1d0_1
    long double x87_r4_15
    long double x87_r5_5
    
    if ((eax_11:1.b & 0x41) != 0)
        var_1d0_1 = fconvert.s(x87_r4_14)
        x87_r4_15 = x87_r5_4
        x87_r5_5 = x87_r4_14
    else
        x87_r4_15 = x87_r5_4
        x87_r5_5 = x87_r4_14
        var_1d0_1 = fconvert.s(x87_r4_15)
    
    long double x87_r3_20 = fconvert.t(var_1a8_1)
    long double x87_r2_27 = fconvert.t(var_1d0_1)
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
    int32_t var_1c0_1 = sub_70c710(fconvert.t(fconvert.s(x87_r3_22)))
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
    
    long double x87_r7_30 = fconvert.t(var_16c)
    long double x87_r6_17 = fconvert.t(var_1c8)
    int32_t edi_3 = sub_70c710(fconvert.t(fconvert.s(x87_r7_28)))
    x87_r6_17 - x87_r7_30
    int32_t eax_15
    eax_15.w = (x87_r6_17 < x87_r7_30 ? 1 : 0) << 8
        | (is_unordered.t(x87_r6_17, x87_r7_30) ? 1 : 0) << 0xa
        | (x87_r6_17 == x87_r7_30 ? 1 : 0) << 0xe | 0x3000
    float var_1c8_1
    long double x87_r6_18
    long double x87_r7_31
    
    if ((eax_15:1.b & 0x41) != 0)
        var_1c8_1 = fconvert.s(x87_r6_17)
        x87_r6_18 = x87_r7_30
        x87_r7_31 = x87_r6_17
    else
        x87_r6_18 = x87_r7_30
        x87_r7_31 = x87_r6_17
        var_1c8_1 = fconvert.s(x87_r6_18)
    
    long double x87_r5_7 = fconvert.t(var_1c4)
    long double x87_r4_17 = fconvert.t(var_1cc)
    x87_r4_17 - x87_r5_7
    eax_15.w = (x87_r4_17 < x87_r5_7 ? 1 : 0) << 8
        | (is_unordered.t(x87_r4_17, x87_r5_7) ? 1 : 0) << 0xa
        | (x87_r4_17 == x87_r5_7 ? 1 : 0) << 0xe | 0x2000
    float var_1cc_1
    long double x87_r4_18
    long double x87_r5_8
    
    if ((eax_15:1.b & 0x41) != 0)
        var_1cc_1 = fconvert.s(x87_r4_17)
        x87_r4_18 = x87_r5_7
        x87_r5_8 = x87_r4_17
    else
        x87_r4_18 = x87_r5_7
        x87_r5_8 = x87_r4_17
        var_1cc_1 = fconvert.s(x87_r4_18)
    
    long double x87_r3_24 = fconvert.t(var_1c8_1)
    long double x87_r2_29 = fconvert.t(var_1cc_1)
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
    
    int32_t j_2 = edi_3 - var_1c0_1
    long double x87_r7_37 = fconvert.t(var_180_1)
    long double x87_r5_10 = fconvert.t(var_150_1)
    int32_t i_2 = sub_70c710(fconvert.t(fconvert.s(x87_r7_35))) - esi_2
    long double x87_r4_22 = fconvert.t(var_190_1)
    var_1a0.d = fconvert.s(float.t(var_1a0.d))
    int128_t var_30_1 = zx.o(0)
    var_1b8.d = fconvert.s(float.t(var_1b8.d))
    int128_t var_50_1 = zx.o(0)
    int32_t xmm0_11 = var_1a0.d
    int32_t xmm0_12 = var_1b8.d
    void* esi_3 = (*(*arg4 + 8))(var_1c0_1, esi_2)
    var_1b8.d = fconvert.s(float.t(esi_2))
    result = (*(*arg4 + 0x1c))() - (j_2 << 2)
    long double x87_r7_48 = fconvert.t(var_1b8.d)
    var_1b8.d = fconvert.s(x87_r7_48 * fconvert.t(var_14c_1) + fconvert.t(fconvert.s(
        fconvert.t(fconvert.s(x87_r5 * x87_r2 - x87_r4_2 * x87_r7_14)) * x87_r3_7)))
    int128_t xmm1_3 = var_1b8.d
    float var_120
    var_120.o = xmm1_3
    var_1a0.d = fconvert.s(x87_r7_48 * fconvert.t(var_17c_1) + fconvert.t(fconvert.s(
        fconvert.t(fconvert.s(x87_r2_5 * x87_r4_2 - x87_r1_5 * x87_r5)) * x87_r3_7)))
    int128_t xmm3_1 = var_1a0.d
    float var_130
    var_130.o = xmm3_1
    float xmm6_1 =
        fconvert.s(x87_r7_48 * fconvert.t(var_18c_1) + fconvert.t(fconvert.s(x87_r3_7 * x87_r2_21)))
    float var_110_1 = xmm6_1
    var_1b8.d = fconvert.s(float.t(var_1c0_1))
    long double x87_r7_52 = fconvert.t(var_1b8.d)
    var_1b8.d = fconvert.s(x87_r7_52 * fconvert.t(var_150_1))
    var_1a0.d = fconvert.s(x87_r7_52 * fconvert.t(var_180_1))
    long double x87_r7_53 = x87_r7_52 * fconvert.t(var_190_1)
    var_190_1.o = var_1b8.d
    var_180_1.o = var_1a0.d
    var_150_1.o = fconvert.s(x87_r7_53)
    
    if (i_2 s> 0)
        int32_t i_1 = i_2
        int32_t i
        
        do
            float xmm0_17 = var_190_1 f+ xmm1_3
            float xmm2_2 = var_180_1 f+ xmm3_1
            float xmm3_3 = var_150_1 + xmm6_1
            float xmm1_7 = xmm0_17 * var_168 + xmm2_2 * var_154 + xmm3_3 * var_194
            float xmm0_20 = xmm0_17 * var_1a4 + xmm2_2 * var_164 + xmm3_3 * var_1bc
            
            if (j_2 s> 0)
                int32_t var_194_1 = 0
                int32_t j_1 = j_2
                int32_t j
                
                do
                    int32_t edi_7 =
                        int.d(__minss_xmmss_memss(_mm_max_ss(xmm0_20, 0), xmm0_12)) * var_160_1.d
                        + var_138.d
                    xmm0_20 = xmm0_20 + fconvert.s(fconvert.t(fconvert.s(
                        x87_r7_37 * fconvert.t(var_164) + x87_r5_10 * fconvert.t(var_1a4)
                        + x87_r4_22 * fconvert.t(var_1bc))))
                    float xmm2_7 = xmm1_7
                    xmm1_7 = xmm1_7 + fconvert.s(fconvert.t(fconvert.s(
                        x87_r7_37 * fconvert.t(var_154) + x87_r5_10 * fconvert.t(var_168)
                        + x87_r4_22 * fconvert.t(var_194))))
                    uint128_t xmm2_10 = zx.o(*
                        (edi_7 + (int.d(__minss_xmmss_memss(_mm_max_ss(xmm2_7, 0), xmm0_11)) << 2)))
                    int32_t edi_9 = *esi_3
                    int32_t xmm2_11[0x4] = _mm_unpacklo_epi8(xmm2_10, 0)
                    int32_t xmm3_6[0x4] = _mm_unpacklo_epi8(zx.o(edi_9), 0)
                    *esi_3 = _mm_packus_epi16(
                        _mm_adds_epi16(xmm3_6, 
                            _mm_srai_epi16(
                                _mm_mullo_epi16(_mm_subs_epi16(xmm2_11, xmm3_6), 
                                    _mm_srai_epi16(_mm_shufflelo_epi16(xmm2_11, 0xff), 1)), 
                                7)), 
                        zx.o(0))
                    esi_3 += 4
                    j = j_1
                    j_1 -= 1
                while (j != 1)
            
            xmm1_3 = var_120 + fconvert.s(fconvert.t(var_14c_1))
            xmm3_1 = var_130 + fconvert.s(fconvert.t(var_17c_1))
            xmm6_1 = var_110_1 + fconvert.s(fconvert.t(var_18c_1))
            esi_3 += result
            i = i_1
            i_1 -= 1
            var_120.o = xmm1_3
            var_130.o = xmm3_1
            var_110_1 = xmm6_1
        while (i != 1)

return result
