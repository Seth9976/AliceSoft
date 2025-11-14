// 函数: sub_480fa0
// 地址: 0x480fa0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

float var_1d4 = fconvert.s(fconvert.t(*arg6))
float var_194 = fconvert.s(fconvert.t(arg6[1]))
float var_1c4 = fconvert.s(fconvert.t(*arg8))
float var_1e0 = fconvert.s(fconvert.t(arg8[1]))
float var_1c8 = fconvert.s(fconvert.t(*arg2))
float var_1dc = fconvert.s(fconvert.t(arg2[1]))
float var_1e8 = fconvert.s(fconvert.t(*arg10))
float var_1e4 = fconvert.s(fconvert.t(arg10[1]))
float var_160 = fconvert.s(fconvert.t(*arg7))
float var_1b4 = fconvert.s(fconvert.t(arg7[1]))
float var_164 = fconvert.s(fconvert.t(*arg9))
float var_174 = fconvert.s(fconvert.t(arg9[1]))
float var_15c = fconvert.s(fconvert.t(*arg3))
float var_1d8 = fconvert.s(fconvert.t(arg3[1]))
long double x87_r7_14 = fconvert.t(var_1e0)
long double x87_r5 = fconvert.t(var_1dc)
long double x87_r4_2 = fconvert.t(var_1c8)
long double x87_r2 = fconvert.t(var_1c4)
double var_158 = fconvert.d(x87_r2)
long double x87_r2_5 = fconvert.t(var_194)
long double x87_r1_5 = fconvert.t(var_1d4)
long double x87_r2_15 = fconvert.t(var_1e4)
long double x87_r2_17 = fconvert.t(var_1e8)
long double x87_r5_2 =
    fconvert.t(fconvert.s(fconvert.t(var_158) - fconvert.t(fconvert.d(x87_r1_5))))
long double x87_r2_21 =
    fconvert.t(fconvert.s(x87_r7_14 * fconvert.t(var_1d4) - x87_r2 * fconvert.t(var_194)))
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
    + x87_r5 * fconvert.t(fconvert.s(x87_r2_17 - fconvert.t(var_158)))
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
    float var_1b0_1 =
        fconvert.s(fconvert.t(fconvert.s(fconvert.t(fconvert.d(x87_r5)) - x87_r2_5)) * x87_r3_7)
    float var_1ac_1 =
        fconvert.s(fconvert.t(fconvert.s(x87_r1_5 - fconvert.t(fconvert.d(x87_r4_2)))) * x87_r3_7)
    float var_190_1 = fconvert.s(x87_r1_13 * x87_r3_7)
    float var_18c_1 = fconvert.s(x87_r5_2 * x87_r3_7)
    var_158.d = (*(*arg11 + 8))(0, 0)
    double var_170_1
    var_170_1.d = (*(*arg11 + 0x1c))()
    double var_1c0
    var_1c0.d = (*(*arg11 + 0x10))() - 1
    long double x87_r7_23 = fconvert.t(var_1d4)
    long double x87_r6_12 = fconvert.t(var_1c4)
    x87_r6_12 - x87_r7_23
    double var_1d0
    var_1d0.d = (*(*arg11 + 0x14))() - 1
    int32_t eax_11
    eax_11.w = (x87_r6_12 < x87_r7_23 ? 1 : 0) << 8
        | (is_unordered.t(x87_r6_12, x87_r7_23) ? 1 : 0) << 0xa
        | (x87_r6_12 == x87_r7_23 ? 1 : 0) << 0xe | 0x3000
    float var_1c4_1
    long double x87_r6_13
    long double x87_r7_24
    
    if ((eax_11:1.b & 0x41) != 0)
        var_1c4_1 = fconvert.s(x87_r6_12)
        x87_r6_13 = x87_r7_23
        x87_r7_24 = x87_r6_12
    else
        x87_r6_13 = x87_r7_23
        x87_r7_24 = x87_r6_12
        var_1c4_1 = fconvert.s(x87_r6_13)
    
    long double x87_r5_4 = fconvert.t(var_1c8)
    long double x87_r4_14 = fconvert.t(var_1e8)
    x87_r4_14 - x87_r5_4
    eax_11.w = (x87_r4_14 < x87_r5_4 ? 1 : 0) << 8
        | (is_unordered.t(x87_r4_14, x87_r5_4) ? 1 : 0) << 0xa
        | (x87_r4_14 == x87_r5_4 ? 1 : 0) << 0xe | 0x2000
    float var_1e8_1
    long double x87_r4_15
    long double x87_r5_5
    
    if ((eax_11:1.b & 0x41) != 0)
        var_1e8_1 = fconvert.s(x87_r4_14)
        x87_r4_15 = x87_r5_4
        x87_r5_5 = x87_r4_14
    else
        x87_r4_15 = x87_r5_4
        x87_r5_5 = x87_r4_14
        var_1e8_1 = fconvert.s(x87_r4_15)
    
    long double x87_r3_20 = fconvert.t(var_1c4_1)
    long double x87_r2_27 = fconvert.t(var_1e8_1)
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
    int32_t var_1d4_1 = sub_70c710(fconvert.t(fconvert.s(x87_r3_22)))
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
    
    long double x87_r7_30 = fconvert.t(var_194)
    long double x87_r6_17 = fconvert.t(var_1e0)
    int32_t edi_3 = sub_70c710(fconvert.t(fconvert.s(x87_r7_28)))
    x87_r6_17 - x87_r7_30
    int32_t eax_15
    eax_15.w = (x87_r6_17 < x87_r7_30 ? 1 : 0) << 8
        | (is_unordered.t(x87_r6_17, x87_r7_30) ? 1 : 0) << 0xa
        | (x87_r6_17 == x87_r7_30 ? 1 : 0) << 0xe | 0x3000
    float var_1e0_1
    long double x87_r6_18
    long double x87_r7_31
    
    if ((eax_15:1.b & 0x41) != 0)
        var_1e0_1 = fconvert.s(x87_r6_17)
        x87_r6_18 = x87_r7_30
        x87_r7_31 = x87_r6_17
    else
        x87_r6_18 = x87_r7_30
        x87_r7_31 = x87_r6_17
        var_1e0_1 = fconvert.s(x87_r6_18)
    
    long double x87_r5_7 = fconvert.t(var_1dc)
    long double x87_r4_17 = fconvert.t(var_1e4)
    x87_r4_17 - x87_r5_7
    eax_15.w = (x87_r4_17 < x87_r5_7 ? 1 : 0) << 8
        | (is_unordered.t(x87_r4_17, x87_r5_7) ? 1 : 0) << 0xa
        | (x87_r4_17 == x87_r5_7 ? 1 : 0) << 0xe | 0x2000
    float var_1e4_1
    long double x87_r4_18
    long double x87_r5_8
    
    if ((eax_15:1.b & 0x41) != 0)
        var_1e4_1 = fconvert.s(x87_r4_17)
        x87_r4_18 = x87_r5_7
        x87_r5_8 = x87_r4_17
    else
        x87_r4_18 = x87_r5_7
        x87_r5_8 = x87_r4_17
        var_1e4_1 = fconvert.s(x87_r4_18)
    
    long double x87_r3_24 = fconvert.t(var_1e0_1)
    long double x87_r2_29 = fconvert.t(var_1e4_1)
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
    
    int32_t j_2 = edi_3 - var_1d4_1
    long double x87_r7_37 = fconvert.t(var_1b0_1)
    long double x87_r5_10 = fconvert.t(var_150_1)
    long double x87_r4_22 = fconvert.t(var_190_1)
    int32_t i_2 = sub_70c710(fconvert.t(fconvert.s(x87_r7_35))) - esi_2
    void* eax_22 = *arg4
    var_1c0.d = fconvert.s(float.t(var_1c0.d))
    int128_t var_90_1 = zx.o(0)
    var_1d0.d = fconvert.s(float.t(var_1d0.d))
    int32_t xmm0_12[0x4] = _mm_unpacklo_epi8(
        zx.o(((arg13[3] << 8 | zx.d((*arg13).b)) << 8 | zx.d((arg13[1]).b)) << 8)
            | zx.o((arg13[2]).b), 
        0)
    int32_t xmm0_13 = var_1c0.d
    int32_t xmm0_14 = var_1d0.d
    int128_t var_120_1 = zx.o(0)
    void* esi_3 = (*(eax_22 + 8))(var_1d4_1, esi_2)
    var_1d0.d = fconvert.s(float.t(esi_2))
    result = (*(*arg4 + 0x1c))() - (j_2 << 2)
    long double x87_r7_48 = fconvert.t(var_1d0.d)
    var_1d0.d = fconvert.s(x87_r7_48 * fconvert.t(var_14c_1) + fconvert.t(fconvert.s(
        fconvert.t(fconvert.s(x87_r5 * x87_r2 - x87_r4_2 * x87_r7_14)) * x87_r3_7)))
    int128_t xmm0_15 = var_1d0.d
    float var_130
    var_130.o = xmm0_15
    var_1c0.d = fconvert.s(x87_r7_48 * fconvert.t(var_1ac_1) + fconvert.t(fconvert.s(
        fconvert.t(fconvert.s(x87_r2_5 * x87_r4_2 - x87_r1_5 * x87_r5)) * x87_r3_7)))
    int128_t xmm3_1 = var_1c0.d
    float var_140
    var_140.o = xmm3_1
    float xmm6_1 =
        fconvert.s(x87_r7_48 * fconvert.t(var_18c_1) + fconvert.t(fconvert.s(x87_r3_7 * x87_r2_21)))
    float var_110_1 = xmm6_1
    var_1d0.d = fconvert.s(float.t(var_1d4_1))
    long double x87_r7_52 = fconvert.t(var_1d0.d)
    var_1d0.d = fconvert.s(x87_r7_52 * fconvert.t(var_150_1))
    var_1c0.d = fconvert.s(x87_r7_52 * fconvert.t(var_1b0_1))
    long double x87_r7_53 = x87_r7_52 * fconvert.t(var_190_1)
    var_190_1.o = var_1d0.d
    var_1b0_1.o = var_1c0.d
    var_150_1.o = fconvert.s(x87_r7_53)
    
    if (i_2 s> 0)
        int32_t i_1 = i_2
        int32_t i
        
        do
            float xmm1_7 = var_190_1 f+ xmm0_15
            float xmm2_2 = var_1b0_1 f+ xmm3_1
            float xmm3_3 = var_150_1 + xmm6_1
            float xmm0_19 = xmm1_7 * var_160 + xmm2_2 * var_164 + xmm3_3 * var_15c
            float xmm1_10 = xmm1_7 * var_1b4 + xmm2_2 * var_174 + xmm3_3 * var_1d8
            
            if (j_2 s> 0)
                int32_t xmm2_4[0x4] =
                    zx.o(((arg12[3] << 8 | zx.d((*arg12).b)) << 8 | zx.d((arg12[1]).b)) << 8)
                    | zx.o((arg12[2]).b)
                int32_t j_1 = j_2
                int32_t j
                
                do
                    int32_t ecx_21 =
                        int.d(__minss_xmmss_memss(_mm_max_ss(xmm1_10, 0), xmm0_14)) * var_170_1.d
                        + var_158.d
                    xmm1_10 = xmm1_10 + fconvert.s(fconvert.t(fconvert.s(
                        x87_r7_37 * fconvert.t(var_174) + x87_r5_10 * fconvert.t(var_1b4)
                        + x87_r4_22 * fconvert.t(var_1d8))))
                    int32_t ecx_22 = *(ecx_21
                        + (int.d(__minss_xmmss_memss(_mm_max_ss(xmm0_19, 0), xmm0_13)) << 2))
                    xmm0_19 = xmm0_19 + fconvert.s(fconvert.t(fconvert.s(
                        x87_r7_37 * fconvert.t(var_164) + x87_r5_10 * fconvert.t(var_160)
                        + x87_r4_22 * fconvert.t(var_15c))))
                    uint128_t xmm2_17 = zx.o(__paddusb_xmmdq_memdq(
                        _mm_packus_epi16(
                            _mm_srli_epi16(
                                __pmullw_xmmdq_memdq(_mm_unpacklo_epi8(zx.o(ecx_22), 0), xmm0_12), 
                                8), 
                            zx.o(0)), 
                        xmm2_4))
                    int32_t ecx_24 = *esi_3
                    int32_t xmm2_18[0x4] = _mm_unpacklo_epi8(xmm2_17, 0)
                    int32_t xmm3_6[0x4] = _mm_unpacklo_epi8(zx.o(ecx_24), 0)
                    *esi_3 = _mm_packus_epi16(
                        _mm_adds_epi16(xmm3_6, 
                            _mm_srai_epi16(
                                _mm_mullo_epi16(_mm_subs_epi16(xmm2_18, xmm3_6), 
                                    _mm_srai_epi16(_mm_shufflelo_epi16(xmm2_18, 0xff), 1)), 
                                7)), 
                        zx.o(0))
                    esi_3 += 4
                    j = j_1
                    j_1 -= 1
                while (j != 1)
            
            xmm0_15 = var_130 + fconvert.s(fconvert.t(var_14c_1))
            xmm3_1 = var_140 + fconvert.s(fconvert.t(var_1ac_1))
            xmm6_1 = var_110_1 + fconvert.s(fconvert.t(var_18c_1))
            esi_3 += result
            i = i_1
            i_1 -= 1
            var_130.o = xmm0_15
            var_140.o = xmm3_1
            var_110_1 = xmm6_1
        while (i != 1)

return result
