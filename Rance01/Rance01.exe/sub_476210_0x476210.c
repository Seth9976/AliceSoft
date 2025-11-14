// 函数: sub_476210
// 地址: 0x476210
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

float var_1dc = fconvert.s(fconvert.t(*arg7))
float var_19c = fconvert.s(fconvert.t(arg7[1]))
float var_1d0 = fconvert.s(fconvert.t(*arg9))
float var_1f0 = fconvert.s(fconvert.t(arg9[1]))
float var_1c8 = fconvert.s(fconvert.t(*arg11))
float var_1e8 = fconvert.s(fconvert.t(arg11[1]))
float var_1f8 = fconvert.s(fconvert.t(*arg12))
float var_1fc = fconvert.s(fconvert.t(arg12[1]))
float var_1c4 = fconvert.s(fconvert.t(*arg8))
float var_1ec = fconvert.s(fconvert.t(arg8[1]))
float var_1cc = fconvert.s(fconvert.t(*arg10))
float var_1f4 = fconvert.s(fconvert.t(arg10[1]))
float var_1e0 = fconvert.s(fconvert.t(*arg3))
float var_200 = fconvert.s(fconvert.t(arg3[1]))
long double x87_r7_14 = fconvert.t(var_1f0)
long double x87_r5 = fconvert.t(var_1e8)
long double x87_r4_2 = fconvert.t(var_1c8)
long double x87_r2 = fconvert.t(var_1d0)
double var_150 = fconvert.d(x87_r2)
long double x87_r2_5 = fconvert.t(var_19c)
long double x87_r1_5 = fconvert.t(var_1dc)
long double x87_r2_15 = fconvert.t(var_1fc)
long double x87_r2_17 = fconvert.t(var_1f8)
long double x87_r5_2 =
    fconvert.t(fconvert.s(fconvert.t(var_150) - fconvert.t(fconvert.d(x87_r1_5))))
long double x87_r2_21 =
    fconvert.t(fconvert.s(x87_r7_14 * fconvert.t(var_1dc) - x87_r2 * fconvert.t(var_19c)))
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
    + x87_r5 * fconvert.t(fconvert.s(x87_r2_17 - fconvert.t(var_150)))
    + fconvert.t(fconvert.s(x87_r2 * x87_r2_15 - x87_r7_14 * x87_r2_17))))
x87_r2_25 - x87_r1_13
result.w = (x87_r2_25 < x87_r1_13 ? 1 : 0) << 8
    | (is_unordered.t(x87_r2_25, x87_r1_13) ? 1 : 0) << 0xa
    | (x87_r2_25 == x87_r1_13 ? 1 : 0) << 0xe | 0x1800
bool p = unimplemented  {test ah, 0x5}

if (p)
    long double x87_r3_6 = float.t(1)
    long double x87_r3_7 = fconvert.t(fconvert.s(x87_r3_6 / x87_r3_6))
    float var_190_1 = fconvert.s(fconvert.t(fconvert.s(x87_r7_14 - x87_r5)) * x87_r3_7)
    float var_18c_1 = fconvert.s(fconvert.t(fconvert.s(x87_r4_2 - x87_r2)) * x87_r3_7)
    float var_1b0_1 =
        fconvert.s(fconvert.t(fconvert.s(fconvert.t(fconvert.d(x87_r5)) - x87_r2_5)) * x87_r3_7)
    float var_1ac_1 =
        fconvert.s(fconvert.t(fconvert.s(x87_r1_5 - fconvert.t(fconvert.d(x87_r4_2)))) * x87_r3_7)
    float var_1c0_1 = fconvert.s(x87_r1_13 * x87_r3_7)
    float var_1bc_1 = fconvert.s(x87_r5_2 * x87_r3_7)
    double var_198_1
    var_198_1.d = (*(*arg13 + 8))(0, 0)
    double var_158
    var_158.d = (*(*arg13 + 0x1c))()
    int32_t eax_8 = (*(*arg13 + 0x10))() - 1
    double var_1d8
    var_1d8.d = (*(*arg13 + 0x14))() - 1
    float var_1c4_2 = fconvert.s(fconvert.t(fconvert.s(fconvert.t(var_1c4) / fconvert.t(arg7[3]))))
    float var_1cc_2 = fconvert.s(fconvert.t(fconvert.s(fconvert.t(var_1cc) / fconvert.t(arg9[3]))))
    float var_1e0_2 = fconvert.s(fconvert.t(fconvert.s(fconvert.t(var_1e0) / fconvert.t(arg11[3]))))
    float var_1ec_2 = fconvert.s(fconvert.t(fconvert.s(fconvert.t(var_1ec) / fconvert.t(arg7[3]))))
    float var_1f4_2 = fconvert.s(fconvert.t(fconvert.s(fconvert.t(var_1f4) / fconvert.t(arg9[3]))))
    float var_200_2 = fconvert.s(fconvert.t(fconvert.s(fconvert.t(var_200) / fconvert.t(arg11[3]))))
    arg7[3]
    long double x87_r6_12 = float.t(1)
    float var_200_6 = fconvert.s(fconvert.t(fconvert.s(x87_r6_12 / fconvert.t(arg9[3]))))
    float var_200_8 = fconvert.s(fconvert.t(fconvert.s(x87_r6_12 / fconvert.t(arg11[3]))))
    long double x87_r7_46 = fconvert.t(var_1dc)
    long double x87_r6_18 = fconvert.t(var_1d0)
    x87_r6_18 - x87_r7_46
    float* eax_12
    eax_12.w = (x87_r6_18 < x87_r7_46 ? 1 : 0) << 8
        | (is_unordered.t(x87_r6_18, x87_r7_46) ? 1 : 0) << 0xa
        | (x87_r6_18 == x87_r7_46 ? 1 : 0) << 0xe | 0x3000
    float var_1d0_1
    long double x87_r6_19
    long double x87_r7_47
    
    if ((eax_12:1.b & 0x41) != 0)
        var_1d0_1 = fconvert.s(x87_r6_18)
        x87_r6_19 = x87_r7_46
        x87_r7_47 = x87_r6_18
    else
        x87_r6_19 = x87_r7_46
        x87_r7_47 = x87_r6_18
        var_1d0_1 = fconvert.s(x87_r6_19)
    
    long double x87_r5_5 = fconvert.t(var_1c8)
    long double x87_r4_14 = fconvert.t(var_1f8)
    x87_r4_14 - x87_r5_5
    eax_12.w = (x87_r4_14 < x87_r5_5 ? 1 : 0) << 8
        | (is_unordered.t(x87_r4_14, x87_r5_5) ? 1 : 0) << 0xa
        | (x87_r4_14 == x87_r5_5 ? 1 : 0) << 0xe | 0x2000
    float var_1f8_1
    long double x87_r4_15
    long double x87_r5_6
    
    if ((eax_12:1.b & 0x41) != 0)
        var_1f8_1 = fconvert.s(x87_r4_14)
        x87_r4_15 = x87_r5_5
        x87_r5_6 = x87_r4_14
    else
        x87_r4_15 = x87_r5_5
        x87_r5_6 = x87_r4_14
        var_1f8_1 = fconvert.s(x87_r4_15)
    
    long double x87_r3_20 = fconvert.t(var_1d0_1)
    long double x87_r2_27 = fconvert.t(var_1f8_1)
    x87_r2_27 - x87_r3_20
    eax_12.w = (x87_r2_27 < x87_r3_20 ? 1 : 0) << 8
        | (is_unordered.t(x87_r2_27, x87_r3_20) ? 1 : 0) << 0xa
        | (x87_r2_27 == x87_r3_20 ? 1 : 0) << 0xe | 0x1000
    
    if ((eax_12:1.b & 0x41) != 0)
        x87_r4_15 = x87_r2_27
    else
        x87_r3_20 = x87_r2_27
    
    int32_t ebx_1 = *arg6
    long double x87_r3_22 = fconvert.t(fconvert.s(float.t(ebx_1)))
    long double x87_r2_28 = fconvert.t(fconvert.s(x87_r3_20))
    x87_r2_28 - x87_r3_22
    eax_12.w = (x87_r2_28 < x87_r3_22 ? 1 : 0) << 8
        | (is_unordered.t(x87_r2_28, x87_r3_22) ? 1 : 0) << 0xa
        | (x87_r2_28 == x87_r3_22 ? 1 : 0) << 0xe | 0x1000
    bool p_1 = unimplemented  {test ah, 0x5}
    
    if (p_1)
        x87_r4_15 = x87_r2_28
    else
        x87_r3_22 = x87_r2_28
    
    x87_r6_19 - x87_r7_47
    int32_t var_1dc_1 = sub_70c710(fconvert.t(fconvert.s(x87_r3_22)))
    int32_t eax_13
    eax_13.w = (x87_r6_19 < x87_r7_47 ? 1 : 0) << 8
        | (is_unordered.t(x87_r6_19, x87_r7_47) ? 1 : 0) << 0xa
        | (x87_r6_19 == x87_r7_47 ? 1 : 0) << 0xe | 0x2000
    
    if ((eax_13:1.b & 0x41) != 0)
        x87_r5_6 = x87_r6_19
    
    long double x87_r7_48 = x87_r5_6
    x87_r4_15 - x87_r7_48
    eax_13.w = (x87_r4_15 < x87_r7_48 ? 1 : 0) << 8
        | (is_unordered.t(x87_r4_15, x87_r7_48) ? 1 : 0) << 0xa
        | (x87_r4_15 == x87_r7_48 ? 1 : 0) << 0xe | 0x3000
    
    if ((eax_13:1.b & 0x41) != 0)
        x87_r7_48 = x87_r4_15
    
    long double x87_r7_49 = fconvert.t(fconvert.s(x87_r7_47))
    long double x87_r6_21 = fconvert.t(fconvert.s(x87_r7_48))
    x87_r6_21 - x87_r7_49
    eax_13.w = (x87_r6_21 < x87_r7_49 ? 1 : 0) << 8
        | (is_unordered.t(x87_r6_21, x87_r7_49) ? 1 : 0) << 0xa
        | (x87_r6_21 == x87_r7_49 ? 1 : 0) << 0xe | 0x3000
    bool p_2 = unimplemented  {test ah, 0x5}
    
    if (not(p_2))
        x87_r7_49 = x87_r6_21
    
    long double x87_r7_51 = fconvert.t(fconvert.s(float.t(arg6[2] + ebx_1)))
    long double x87_r6_22 = fconvert.t(fconvert.s(x87_r7_49))
    x87_r6_22 - x87_r7_51
    int32_t eax_15
    eax_15.w = (x87_r6_22 < x87_r7_51 ? 1 : 0) << 8
        | (is_unordered.t(x87_r6_22, x87_r7_51) ? 1 : 0) << 0xa
        | (x87_r6_22 == x87_r7_51 ? 1 : 0) << 0xe | 0x3000
    
    if ((eax_15:1.b & 0x41) == 0)
        x87_r7_51 = x87_r6_22
    
    long double x87_r7_53 = fconvert.t(var_19c)
    long double x87_r6_23 = fconvert.t(var_1f0)
    int32_t ebx_2 = sub_70c710(fconvert.t(fconvert.s(x87_r7_51)))
    x87_r6_23 - x87_r7_53
    int32_t eax_16
    eax_16.w = (x87_r6_23 < x87_r7_53 ? 1 : 0) << 8
        | (is_unordered.t(x87_r6_23, x87_r7_53) ? 1 : 0) << 0xa
        | (x87_r6_23 == x87_r7_53 ? 1 : 0) << 0xe | 0x3000
    float var_1f0_1
    long double x87_r6_24
    long double x87_r7_54
    
    if ((eax_16:1.b & 0x41) != 0)
        var_1f0_1 = fconvert.s(x87_r6_23)
        x87_r6_24 = x87_r7_53
        x87_r7_54 = x87_r6_23
    else
        x87_r6_24 = x87_r7_53
        x87_r7_54 = x87_r6_23
        var_1f0_1 = fconvert.s(x87_r6_24)
    
    long double x87_r5_8 = fconvert.t(var_1e8)
    long double x87_r4_17 = fconvert.t(var_1fc)
    x87_r4_17 - x87_r5_8
    eax_16.w = (x87_r4_17 < x87_r5_8 ? 1 : 0) << 8
        | (is_unordered.t(x87_r4_17, x87_r5_8) ? 1 : 0) << 0xa
        | (x87_r4_17 == x87_r5_8 ? 1 : 0) << 0xe | 0x2000
    float var_1fc_1
    long double x87_r4_18
    long double x87_r5_9
    
    if ((eax_16:1.b & 0x41) != 0)
        var_1fc_1 = fconvert.s(x87_r4_17)
        x87_r4_18 = x87_r5_8
        x87_r5_9 = x87_r4_17
    else
        x87_r4_18 = x87_r5_8
        x87_r5_9 = x87_r4_17
        var_1fc_1 = fconvert.s(x87_r4_18)
    
    long double x87_r3_24 = fconvert.t(var_1f0_1)
    long double x87_r2_29 = fconvert.t(var_1fc_1)
    x87_r2_29 - x87_r3_24
    eax_16.w = (x87_r2_29 < x87_r3_24 ? 1 : 0) << 8
        | (is_unordered.t(x87_r2_29, x87_r3_24) ? 1 : 0) << 0xa
        | (x87_r2_29 == x87_r3_24 ? 1 : 0) << 0xe | 0x1000
    
    if ((eax_16:1.b & 0x41) != 0)
        x87_r4_18 = x87_r2_29
    else
        x87_r3_24 = x87_r2_29
    
    int32_t ecx_5 = arg6[1]
    long double x87_r3_26 = fconvert.t(fconvert.s(float.t(ecx_5)))
    long double x87_r2_30 = fconvert.t(fconvert.s(x87_r3_24))
    x87_r2_30 - x87_r3_26
    eax_16.w = (x87_r2_30 < x87_r3_26 ? 1 : 0) << 8
        | (is_unordered.t(x87_r2_30, x87_r3_26) ? 1 : 0) << 0xa
        | (x87_r2_30 == x87_r3_26 ? 1 : 0) << 0xe | 0x1000
    bool p_3 = unimplemented  {test ah, 0x5}
    
    if (p_3)
        x87_r4_18 = x87_r2_30
    else
        x87_r3_26 = x87_r2_30
    
    x87_r6_24 - x87_r7_54
    int32_t esi_2 = sub_70c710(fconvert.t(fconvert.s(x87_r3_26)))
    int32_t eax_17
    eax_17.w = (x87_r6_24 < x87_r7_54 ? 1 : 0) << 8
        | (is_unordered.t(x87_r6_24, x87_r7_54) ? 1 : 0) << 0xa
        | (x87_r6_24 == x87_r7_54 ? 1 : 0) << 0xe | 0x2000
    
    if ((eax_17:1.b & 0x41) != 0)
        x87_r5_9 = x87_r6_24
    
    long double x87_r7_55 = x87_r5_9
    x87_r4_18 - x87_r7_55
    eax_17.w = (x87_r4_18 < x87_r7_55 ? 1 : 0) << 8
        | (is_unordered.t(x87_r4_18, x87_r7_55) ? 1 : 0) << 0xa
        | (x87_r4_18 == x87_r7_55 ? 1 : 0) << 0xe | 0x3000
    
    if ((eax_17:1.b & 0x41) != 0)
        x87_r7_55 = x87_r4_18
    
    long double x87_r7_56 = fconvert.t(fconvert.s(x87_r7_54))
    long double x87_r6_26 = fconvert.t(fconvert.s(x87_r7_55))
    x87_r6_26 - x87_r7_56
    eax_17.w = (x87_r6_26 < x87_r7_56 ? 1 : 0) << 8
        | (is_unordered.t(x87_r6_26, x87_r7_56) ? 1 : 0) << 0xa
        | (x87_r6_26 == x87_r7_56 ? 1 : 0) << 0xe | 0x3000
    bool p_4 = unimplemented  {test ah, 0x5}
    
    if (not(p_4))
        x87_r7_56 = x87_r6_26
    
    long double x87_r7_58 = fconvert.t(fconvert.s(float.t(arg6[3] + ecx_5)))
    long double x87_r6_27 = fconvert.t(fconvert.s(x87_r7_56))
    x87_r6_27 - x87_r7_58
    int32_t eax_19
    eax_19.w = (x87_r6_27 < x87_r7_58 ? 1 : 0) << 8
        | (is_unordered.t(x87_r6_27, x87_r7_58) ? 1 : 0) << 0xa
        | (x87_r6_27 == x87_r7_58 ? 1 : 0) << 0xe | 0x3000
    
    if ((eax_19:1.b & 0x41) == 0)
        x87_r7_58 = x87_r6_27
    
    int32_t j_3 = ebx_2 - var_1dc_1
    int32_t eax_20 = sub_70c710(fconvert.t(fconvert.s(x87_r7_58)))
    float var_200_16 = fconvert.s(fconvert.t(var_190_1))
    float var_1f4_3 = fconvert.s(fconvert.t(var_1b0_1))
    float var_1ec_3 = fconvert.s(fconvert.t(var_1c0_1))
    var_150.o = zx.o(0)
    var_1d8.d = fconvert.s(float.t(var_1d8.d))
    float var_170
    var_170.o = data_7581b0
    int32_t xmm0_18 = var_1d8.d
    int32_t i_2 = eax_20 - esi_2
    void* esi_3 = (*(*arg5 + 8))(var_1dc_1, esi_2)
    int32_t j_2 = j_3
    var_1d8.d = fconvert.s(float.t(esi_2))
    result = (*(*arg5 + 0x1c))() - (j_2 << 2)
    long double x87_r7_69 = fconvert.t(var_1d8.d)
    float* result_1 = result
    var_1d8.d = fconvert.s(x87_r7_69 * fconvert.t(var_18c_1) + fconvert.t(fconvert.s(
        fconvert.t(fconvert.s(x87_r5 * x87_r2 - x87_r4_2 * x87_r7_14)) * x87_r3_7)))
    int128_t xmm3_1 = var_1d8.d
    float var_180
    var_180.o = xmm3_1
    int128_t xmm5_1 = fconvert.s(x87_r7_69 * fconvert.t(var_1ac_1) + fconvert.t(fconvert.s(
        fconvert.t(fconvert.s(x87_r2_5 * x87_r4_2 - x87_r1_5 * x87_r5)) * x87_r3_7)))
    int128_t var_140_1 = xmm5_1
    int128_t xmm6_1 =
        fconvert.s(x87_r7_69 * fconvert.t(var_1bc_1) + fconvert.t(fconvert.s(x87_r3_7 * x87_r2_21)))
    int128_t var_130_1 = xmm6_1
    var_1d8.d = fconvert.s(float.t(var_1dc_1))
    long double x87_r7_73 = fconvert.t(var_1d8.d)
    var_1d8.d = fconvert.s(x87_r7_73 * fconvert.t(var_190_1))
    long double x87_r7_74 = x87_r7_73 * fconvert.t(var_1c0_1)
    var_1c0_1.o = var_1d8.d
    var_1b0_1.o = fconvert.s(x87_r7_73 * fconvert.t(var_1b0_1))
    var_190_1.o = fconvert.s(x87_r7_74)
    
    if (i_2 s> 0)
        int32_t i_1 = i_2
        int32_t i
        
        do
            float xmm0_23 = var_1c0_1 f+ xmm3_1
            float xmm1_11 = var_1b0_1 f+ xmm5_1
            float xmm2_2 = var_190_1 f+ xmm6_1
            
            if (j_2 s> 0)
                var_150.d = 0
                int32_t j_1 = j_2
                int32_t j
                
                do
                    int32_t edx_10
                    edx_10.b = *esi_3
                    float xmm5_5 =
                        xmm0_23 * fconvert.s(fconvert.t(fconvert.s(x87_r6_12 / x87_r6_12)))
                        + xmm1_11 * var_200_6 + xmm2_2 * var_200_8
                    float xmm5_6 = _mm_rcp_ss(xmm5_5, xmm5_5)
                    int32_t eax_28 = (int.d(__minss_xmmss_memss(
                        _mm_max_ss(
                            (xmm0_23 * var_1ec_2 + xmm1_11 * var_1f4_2 + xmm2_2 * var_200_2)
                                * xmm5_6, 
                            0), 
                        xmm0_18) * var_170) s>> 7) * var_158.d + var_198_1.d
                    int32_t ecx_9 = int.d(__minss_xmmss_memss(
                        _mm_max_ss(
                            (xmm0_23 * var_1c4_2 + xmm1_11 * var_1cc_2 + xmm2_2 * var_1e0_2)
                                * xmm5_6, 
                            0), 
                        fconvert.s(float.t(eax_8))) * var_170) s>> 7
                    void* ecx_10 = eax_28 + (ecx_9 << 2)
                    char ebx_7 =
                        (((zx.d(*(eax_28 + (ecx_9 << 2))) - zx.d(edx_10.b)) * arg4) s>> 8).b
                        + edx_10.b
                    edx_10.b = *(esi_3 + 1)
                    *esi_3 = ebx_7
                    xmm0_23 = xmm0_23 + var_200_16
                    xmm1_11 = xmm1_11 + var_1f4_3
                    xmm2_2 = xmm2_2 + var_1ec_3
                    char eax_33 =
                        (((zx.d(*(ecx_10 + 1)) - zx.d(edx_10.b)) * arg4) s>> 8).b + edx_10.b
                    edx_10.b = *(esi_3 + 2)
                    *(esi_3 + 1) = eax_33
                    *(esi_3 + 2) =
                        (((zx.d(*(ecx_10 + 2)) - zx.d(edx_10.b)) * arg4) s>> 8).b + edx_10.b
                    esi_3 += 4
                    j = j_1
                    j_1 -= 1
                while (j != 1)
                xmm6_1 = var_130_1
                xmm5_1 = var_140_1
                xmm3_1 = var_180.o
                result = result_1
                j_2 = j_3
            
            xmm3_1 = xmm3_1 f+ fconvert.s(fconvert.t(var_18c_1))
            xmm5_1 = xmm5_1 f+ fconvert.s(fconvert.t(var_1ac_1))
            xmm6_1 = xmm6_1 f+ fconvert.s(fconvert.t(var_1bc_1))
            esi_3 += result
            i = i_1
            i_1 -= 1
            var_180.o = xmm3_1
            var_140_1 = xmm5_1
            var_130_1 = xmm6_1
        while (i != 1)

return result
