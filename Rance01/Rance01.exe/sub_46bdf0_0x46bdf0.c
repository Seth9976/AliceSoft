// 函数: sub_46bdf0
// 地址: 0x46bdf0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

float var_1f4 = fconvert.s(fconvert.t(*arg2))
float var_194 = fconvert.s(fconvert.t(arg2[1]))
float var_1dc = fconvert.s(fconvert.t(*arg8))
float var_1f8 = fconvert.s(fconvert.t(arg8[1]))
float var_1d8 = fconvert.s(fconvert.t(*arg10))
float var_1fc = fconvert.s(fconvert.t(arg10[1]))
float var_204 = fconvert.s(fconvert.t(*arg11))
float var_200 = fconvert.s(fconvert.t(arg11[1]))
float var_188 = fconvert.s(fconvert.t(*arg7))
float var_1f0 = fconvert.s(fconvert.t(arg7[1]))
float var_184 = fconvert.s(fconvert.t(*arg9))
float var_1d4 = fconvert.s(fconvert.t(arg9[1]))
float var_1c4 = fconvert.s(fconvert.t(*arg3))
float var_1ec = fconvert.s(fconvert.t(arg3[1]))
long double x87_r7_14 = fconvert.t(var_1f8)
long double x87_r5 = fconvert.t(var_1fc)
long double x87_r4_2 = fconvert.t(var_1d8)
long double x87_r2 = fconvert.t(var_1dc)
double var_168 = fconvert.d(x87_r2)
long double x87_r2_5 = fconvert.t(var_194)
long double x87_r1_5 = fconvert.t(var_1f4)
long double x87_r2_15 = fconvert.t(var_200)
long double x87_r2_17 = fconvert.t(var_204)
long double x87_r5_2 =
    fconvert.t(fconvert.s(fconvert.t(var_168) - fconvert.t(fconvert.d(x87_r1_5))))
long double x87_r2_21 =
    fconvert.t(fconvert.s(x87_r7_14 * fconvert.t(var_1f4) - x87_r2 * fconvert.t(var_194)))
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
    + x87_r5 * fconvert.t(fconvert.s(x87_r2_17 - fconvert.t(var_168)))
    + fconvert.t(fconvert.s(x87_r2 * x87_r2_15 - x87_r7_14 * x87_r2_17))))
x87_r2_25 - x87_r1_13
result.w = (x87_r2_25 < x87_r1_13 ? 1 : 0) << 8
    | (is_unordered.t(x87_r2_25, x87_r1_13) ? 1 : 0) << 0xa
    | (x87_r2_25 == x87_r1_13 ? 1 : 0) << 0xe | 0x1800
bool p = unimplemented  {test ah, 0x5}

if (p)
    long double x87_r3_6 = float.t(1)
    long double x87_r3_7 = fconvert.t(fconvert.s(x87_r3_6 / x87_r3_6))
    float var_180_1 = fconvert.s(fconvert.t(fconvert.s(x87_r7_14 - x87_r5)) * x87_r3_7)
    float var_17c_1 = fconvert.s(fconvert.t(fconvert.s(x87_r4_2 - x87_r2)) * x87_r3_7)
    float var_1b0_1 =
        fconvert.s(fconvert.t(fconvert.s(fconvert.t(fconvert.d(x87_r5)) - x87_r2_5)) * x87_r3_7)
    float var_1ac_1 =
        fconvert.s(fconvert.t(fconvert.s(x87_r1_5 - fconvert.t(fconvert.d(x87_r4_2)))) * x87_r3_7)
    float var_1c0_1 = fconvert.s(x87_r1_13 * x87_r3_7)
    float var_1bc_1 = fconvert.s(x87_r5_2 * x87_r3_7)
    var_168.d = (*(*arg12 + 8))(0, 0)
    double var_190_1
    var_190_1.d = (*(*arg12 + 0x1c))()
    double var_1d0
    var_1d0.d = (*(*arg12 + 0x10))() - 1
    long double x87_r7_23 = fconvert.t(var_1f4)
    long double x87_r6_12 = fconvert.t(var_1dc)
    x87_r6_12 - x87_r7_23
    double var_1e8
    var_1e8.d = (*(*arg12 + 0x14))() - 1
    int32_t eax_11
    eax_11.w = (x87_r6_12 < x87_r7_23 ? 1 : 0) << 8
        | (is_unordered.t(x87_r6_12, x87_r7_23) ? 1 : 0) << 0xa
        | (x87_r6_12 == x87_r7_23 ? 1 : 0) << 0xe | 0x3000
    float var_1dc_1
    long double x87_r6_13
    long double x87_r7_24
    
    if ((eax_11:1.b & 0x41) != 0)
        var_1dc_1 = fconvert.s(x87_r6_12)
        x87_r6_13 = x87_r7_23
        x87_r7_24 = x87_r6_12
    else
        x87_r6_13 = x87_r7_23
        x87_r7_24 = x87_r6_12
        var_1dc_1 = fconvert.s(x87_r6_13)
    
    long double x87_r5_4 = fconvert.t(var_1d8)
    long double x87_r4_14 = fconvert.t(var_204)
    x87_r4_14 - x87_r5_4
    eax_11.w = (x87_r4_14 < x87_r5_4 ? 1 : 0) << 8
        | (is_unordered.t(x87_r4_14, x87_r5_4) ? 1 : 0) << 0xa
        | (x87_r4_14 == x87_r5_4 ? 1 : 0) << 0xe | 0x2000
    float var_204_1
    long double x87_r4_15
    long double x87_r5_5
    
    if ((eax_11:1.b & 0x41) != 0)
        var_204_1 = fconvert.s(x87_r4_14)
        x87_r4_15 = x87_r5_4
        x87_r5_5 = x87_r4_14
    else
        x87_r4_15 = x87_r5_4
        x87_r5_5 = x87_r4_14
        var_204_1 = fconvert.s(x87_r4_15)
    
    long double x87_r3_20 = fconvert.t(var_1dc_1)
    long double x87_r2_27 = fconvert.t(var_204_1)
    x87_r2_27 - x87_r3_20
    eax_11.w = (x87_r2_27 < x87_r3_20 ? 1 : 0) << 8
        | (is_unordered.t(x87_r2_27, x87_r3_20) ? 1 : 0) << 0xa
        | (x87_r2_27 == x87_r3_20 ? 1 : 0) << 0xe | 0x1000
    
    if ((eax_11:1.b & 0x41) != 0)
        x87_r4_15 = x87_r2_27
    else
        x87_r3_20 = x87_r2_27
    
    int32_t ebx_1 = *arg6
    long double x87_r3_22 = fconvert.t(fconvert.s(float.t(ebx_1)))
    long double x87_r2_28 = fconvert.t(fconvert.s(x87_r3_20))
    x87_r2_28 - x87_r3_22
    int32_t* eax_12
    eax_12.w = (x87_r2_28 < x87_r3_22 ? 1 : 0) << 8
        | (is_unordered.t(x87_r2_28, x87_r3_22) ? 1 : 0) << 0xa
        | (x87_r2_28 == x87_r3_22 ? 1 : 0) << 0xe | 0x1000
    bool p_1 = unimplemented  {test ah, 0x5}
    
    if (p_1)
        x87_r4_15 = x87_r2_28
    else
        x87_r3_22 = x87_r2_28
    
    x87_r6_13 - x87_r7_24
    int32_t var_1f4_1 = sub_70c710(fconvert.t(fconvert.s(x87_r3_22)))
    int32_t eax_13
    eax_13.w = (x87_r6_13 < x87_r7_24 ? 1 : 0) << 8
        | (is_unordered.t(x87_r6_13, x87_r7_24) ? 1 : 0) << 0xa
        | (x87_r6_13 == x87_r7_24 ? 1 : 0) << 0xe | 0x2000
    
    if ((eax_13:1.b & 0x41) != 0)
        x87_r5_5 = x87_r6_13
    
    long double x87_r7_25 = x87_r5_5
    x87_r4_15 - x87_r7_25
    eax_13.w = (x87_r4_15 < x87_r7_25 ? 1 : 0) << 8
        | (is_unordered.t(x87_r4_15, x87_r7_25) ? 1 : 0) << 0xa
        | (x87_r4_15 == x87_r7_25 ? 1 : 0) << 0xe | 0x3000
    
    if ((eax_13:1.b & 0x41) != 0)
        x87_r7_25 = x87_r4_15
    
    long double x87_r7_26 = fconvert.t(fconvert.s(x87_r7_24))
    long double x87_r6_15 = fconvert.t(fconvert.s(x87_r7_25))
    x87_r6_15 - x87_r7_26
    eax_13.w = (x87_r6_15 < x87_r7_26 ? 1 : 0) << 8
        | (is_unordered.t(x87_r6_15, x87_r7_26) ? 1 : 0) << 0xa
        | (x87_r6_15 == x87_r7_26 ? 1 : 0) << 0xe | 0x3000
    bool p_2 = unimplemented  {test ah, 0x5}
    
    if (not(p_2))
        x87_r7_26 = x87_r6_15
    
    long double x87_r7_28 = fconvert.t(fconvert.s(float.t(arg6[2] + ebx_1)))
    long double x87_r6_16 = fconvert.t(fconvert.s(x87_r7_26))
    x87_r6_16 - x87_r7_28
    eax_13.w = (x87_r6_16 < x87_r7_28 ? 1 : 0) << 8
        | (is_unordered.t(x87_r6_16, x87_r7_28) ? 1 : 0) << 0xa
        | (x87_r6_16 == x87_r7_28 ? 1 : 0) << 0xe | 0x3000
    
    if ((eax_13:1.b & 0x41) == 0)
        x87_r7_28 = x87_r6_16
    
    long double x87_r7_30 = fconvert.t(var_194)
    long double x87_r6_17 = fconvert.t(var_1f8)
    int32_t ebx_2 = sub_70c710(fconvert.t(fconvert.s(x87_r7_28)))
    x87_r6_17 - x87_r7_30
    int32_t eax_14
    eax_14.w = (x87_r6_17 < x87_r7_30 ? 1 : 0) << 8
        | (is_unordered.t(x87_r6_17, x87_r7_30) ? 1 : 0) << 0xa
        | (x87_r6_17 == x87_r7_30 ? 1 : 0) << 0xe | 0x3000
    float var_1f8_1
    long double x87_r6_18
    long double x87_r7_31
    
    if ((eax_14:1.b & 0x41) != 0)
        var_1f8_1 = fconvert.s(x87_r6_17)
        x87_r6_18 = x87_r7_30
        x87_r7_31 = x87_r6_17
    else
        x87_r6_18 = x87_r7_30
        x87_r7_31 = x87_r6_17
        var_1f8_1 = fconvert.s(x87_r6_18)
    
    long double x87_r5_7 = fconvert.t(var_1fc)
    long double x87_r4_17 = fconvert.t(var_200)
    x87_r4_17 - x87_r5_7
    eax_14.w = (x87_r4_17 < x87_r5_7 ? 1 : 0) << 8
        | (is_unordered.t(x87_r4_17, x87_r5_7) ? 1 : 0) << 0xa
        | (x87_r4_17 == x87_r5_7 ? 1 : 0) << 0xe | 0x2000
    float var_200_1
    long double x87_r4_18
    long double x87_r5_8
    
    if ((eax_14:1.b & 0x41) != 0)
        var_200_1 = fconvert.s(x87_r4_17)
        x87_r4_18 = x87_r5_7
        x87_r5_8 = x87_r4_17
    else
        x87_r4_18 = x87_r5_7
        x87_r5_8 = x87_r4_17
        var_200_1 = fconvert.s(x87_r4_18)
    
    long double x87_r3_24 = fconvert.t(var_1f8_1)
    long double x87_r2_29 = fconvert.t(var_200_1)
    x87_r2_29 - x87_r3_24
    eax_14.w = (x87_r2_29 < x87_r3_24 ? 1 : 0) << 8
        | (is_unordered.t(x87_r2_29, x87_r3_24) ? 1 : 0) << 0xa
        | (x87_r2_29 == x87_r3_24 ? 1 : 0) << 0xe | 0x1000
    
    if ((eax_14:1.b & 0x41) != 0)
        x87_r4_18 = x87_r2_29
    else
        x87_r3_24 = x87_r2_29
    
    int32_t ecx_5 = arg6[1]
    long double x87_r3_26 = fconvert.t(fconvert.s(float.t(ecx_5)))
    long double x87_r2_30 = fconvert.t(fconvert.s(x87_r3_24))
    x87_r2_30 - x87_r3_26
    int32_t* eax_15
    eax_15.w = (x87_r2_30 < x87_r3_26 ? 1 : 0) << 8
        | (is_unordered.t(x87_r2_30, x87_r3_26) ? 1 : 0) << 0xa
        | (x87_r2_30 == x87_r3_26 ? 1 : 0) << 0xe | 0x1000
    bool p_3 = unimplemented  {test ah, 0x5}
    
    if (p_3)
        x87_r4_18 = x87_r2_30
    else
        x87_r3_26 = x87_r2_30
    
    x87_r6_18 - x87_r7_31
    int32_t var_204_7 = sub_70c710(fconvert.t(fconvert.s(x87_r3_26)))
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
    
    long double x87_r7_35 = fconvert.t(fconvert.s(float.t(arg6[3] + ecx_5)))
    long double x87_r6_21 = fconvert.t(fconvert.s(x87_r7_33))
    x87_r6_21 - x87_r7_35
    int32_t eax_18
    eax_18.w = (x87_r6_21 < x87_r7_35 ? 1 : 0) << 8
        | (is_unordered.t(x87_r6_21, x87_r7_35) ? 1 : 0) << 0xa
        | (x87_r6_21 == x87_r7_35 ? 1 : 0) << 0xe | 0x3000
    
    if ((eax_18:1.b & 0x41) == 0)
        x87_r7_35 = x87_r6_21
    
    int32_t j_3 = ebx_2 - var_1f4_1
    long double x87_r7_37 = fconvert.t(var_1b0_1)
    long double x87_r5_10 = fconvert.t(var_180_1)
    long double x87_r4_22 = fconvert.t(var_1c0_1)
    int32_t i_2 = sub_70c710(fconvert.t(fconvert.s(x87_r7_35))) - var_204_7
    int128_t var_f0_1 = zx.o(0)
    int32_t xmm0_11 = (data_7581b0).d
    int32_t ecx_15 = arg13[3] << 8 | zx.d((*arg13).b)
    int32_t xmm0_13[0x4] = _mm_unpacklo_epi8(
        zx.o(((arg14[3] << 8 | zx.d((*arg14).b)) << 8 | zx.d((arg14[1]).b)) << 8)
            | zx.o((arg14[2]).b), 
        0)
    int128_t var_30_1 = zx.o(0)
    var_1d0.d = fconvert.s(float.t(var_1d0.d))
    int32_t xmm0_14[0x4] = zx.o((ecx_15 << 8 | zx.d((arg13[1]).b)) << 8) | zx.o((arg13[2]).b)
    var_1e8.d = fconvert.s(float.t(var_1e8.d))
    int32_t xmm0_15 = var_1d0.d
    int32_t xmm0_16 = var_1e8.d
    char* esi_5 = (*(*arg5 + 8))(var_1f4_1, var_204_7)
    int32_t j_2 = j_3
    var_1e8.d = fconvert.s(float.t(var_204_7))
    result = (*(*arg5 + 0x1c))() - (j_2 << 2)
    long double x87_r7_48 = fconvert.t(var_1e8.d)
    float* result_1 = result
    var_1e8.d = fconvert.s(x87_r7_48 * fconvert.t(var_17c_1) + fconvert.t(fconvert.s(
        fconvert.t(fconvert.s(x87_r5 * x87_r2 - x87_r4_2 * x87_r7_14)) * x87_r3_7)))
    int128_t xmm1_3 = var_1e8.d
    float var_150
    var_150.o = xmm1_3
    var_1d0.d = fconvert.s(x87_r7_48 * fconvert.t(var_1ac_1) + fconvert.t(fconvert.s(
        fconvert.t(fconvert.s(x87_r2_5 * x87_r4_2 - x87_r1_5 * x87_r5)) * x87_r3_7)))
    int128_t xmm3_1 = var_1d0.d
    float var_160
    var_160.o = xmm3_1
    float xmm6_1 =
        fconvert.s(x87_r7_48 * fconvert.t(var_1bc_1) + fconvert.t(fconvert.s(x87_r3_7 * x87_r2_21)))
    float var_140_1 = xmm6_1
    var_1e8.d = fconvert.s(float.t(var_1f4_1))
    long double x87_r7_52 = fconvert.t(var_1e8.d)
    var_1e8.d = fconvert.s(x87_r7_52 * fconvert.t(var_180_1))
    var_1d0.d = fconvert.s(x87_r7_52 * fconvert.t(var_1b0_1))
    long double x87_r7_53 = x87_r7_52 * fconvert.t(var_1c0_1)
    var_1c0_1.o = var_1e8.d
    var_1b0_1.o = var_1d0.d
    var_180_1.o = fconvert.s(x87_r7_53)
    
    if (i_2 s> 0)
        int32_t i_1 = i_2
        int32_t i
        
        do
            float xmm0_21 = var_1c0_1 f+ xmm1_3
            float xmm2_2 = var_1b0_1 f+ xmm3_1
            float xmm3_3 = var_180_1 + xmm6_1
            float xmm1_7 = xmm0_21 * var_188 + xmm2_2 * var_184 + xmm3_3 * var_1c4
            float xmm0_24 = xmm0_21 * var_1f0 + xmm2_2 * var_1d4 + xmm3_3 * var_1ec
            
            if (j_2 s> 0)
                int32_t j_1 = j_2
                int32_t j
                
                do
                    int32_t xmm6_14[0x4] = zx.o(*((
                        int.d(__minss_xmmss_memss(_mm_max_ss(xmm0_24, 0), xmm0_16) f* xmm0_11)
                        s>> 7) * var_190_1.d + var_168.d + (
                        int.d(__minss_xmmss_memss(_mm_max_ss(xmm1_7, 0), xmm0_15) f* xmm0_11) s>> 7
                        << 2)))
                    int32_t edx_13
                    edx_13.b = *esi_5
                    int24_t xmm6_19 = __paddusb_xmmdq_memdq(
                        _mm_packus_epi16(
                            _mm_srli_epi16(
                                __pmullw_xmmdq_memdq(_mm_unpacklo_epi8(xmm6_14, 0), xmm0_13), 8), 
                            zx.o(0)), 
                        xmm0_14)
                    char ebx_7 = (((zx.d(xmm6_19.b) - zx.d(edx_13.b)) * arg4) s>> 8).b + edx_13.b
                    edx_13.b = esi_5[1]
                    xmm0_24 = xmm0_24 + fconvert.s(fconvert.t(fconvert.s(
                        x87_r7_37 * fconvert.t(var_1d4) + x87_r5_10 * fconvert.t(var_1f0)
                        + x87_r4_22 * fconvert.t(var_1ec))))
                    esi_5[1] = (((zx.d(xmm6_19:1.b) - zx.d(edx_13.b)) * arg4) s>> 8).b + edx_13.b
                    char ecx_28 = esi_5[2]
                    *esi_5 = ebx_7
                    esi_5[2] = (((zx.d(xmm6_19:2.b) - zx.d(ecx_28)) * arg4) s>> 8).b + ecx_28
                    esi_5 = &esi_5[4]
                    j = j_1
                    j_1 -= 1
                    xmm1_7 = xmm1_7 + fconvert.s(fconvert.t(fconvert.s(
                        x87_r7_37 * fconvert.t(var_184) + x87_r5_10 * fconvert.t(var_188)
                        + x87_r4_22 * fconvert.t(var_1c4))))
                while (j != 1)
                result = result_1
                j_2 = j_3
            
            xmm1_3 = var_150 + fconvert.s(fconvert.t(var_17c_1))
            xmm3_1 = var_160 + fconvert.s(fconvert.t(var_1ac_1))
            xmm6_1 = var_140_1 + fconvert.s(fconvert.t(var_1bc_1))
            esi_5 += result
            i = i_1
            i_1 -= 1
            var_150.o = xmm1_3
            var_160.o = xmm3_1
            var_140_1 = xmm6_1
        while (i != 1)

return result
