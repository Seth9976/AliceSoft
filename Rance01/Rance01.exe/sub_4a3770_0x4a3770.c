// 函数: sub_4a3770
// 地址: 0x4a3770
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

float var_1c4 = fconvert.s(fconvert.t(*arg6))
float var_1c8 = fconvert.s(fconvert.t(arg6[1]))
float var_1f0 = fconvert.s(fconvert.t(*arg8))
float var_204 = fconvert.s(fconvert.t(arg8[1]))
float var_1d8 = fconvert.s(fconvert.t(*arg2))
float var_1f4 = fconvert.s(fconvert.t(arg2[1]))
float var_208 = fconvert.s(fconvert.t(*arg10))
float var_20c = fconvert.s(fconvert.t(arg10[1]))
float var_1d4 = fconvert.s(fconvert.t(*arg7))
float var_1fc = fconvert.s(fconvert.t(arg7[1]))
float var_1dc = fconvert.s(fconvert.t(*arg9))
float var_200 = fconvert.s(fconvert.t(arg9[1]))
float var_1ec = fconvert.s(fconvert.t(*arg3))
float var_210 = fconvert.s(fconvert.t(arg3[1]))
long double x87_r7_14 = fconvert.t(var_204)
long double x87_r5 = fconvert.t(var_1f4)
long double x87_r4_2 = fconvert.t(var_1d8)
long double x87_r2 = fconvert.t(var_1f0)
double var_198 = fconvert.d(x87_r2)
long double x87_r2_5 = fconvert.t(var_1c8)
long double x87_r1_5 = fconvert.t(var_1c4)
long double x87_r2_15 = fconvert.t(var_20c)
long double x87_r2_17 = fconvert.t(var_208)
long double x87_r5_2 =
    fconvert.t(fconvert.s(fconvert.t(var_198) - fconvert.t(fconvert.d(x87_r1_5))))
long double x87_r2_21 =
    fconvert.t(fconvert.s(x87_r7_14 * fconvert.t(var_1c4) - x87_r2 * fconvert.t(var_1c8)))
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
    + x87_r5 * fconvert.t(fconvert.s(x87_r2_17 - fconvert.t(var_198)))
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
    var_198.d = (*(*arg12 + 8))(0, 0)
    double var_1a0_1
    var_1a0_1.d = (*(*arg12 + 0x1c))()
    double var_1d0
    var_1d0.d = (*(*arg12 + 0x10))() - 1
    double var_1e8
    var_1e8.d = (*(*arg12 + 0x14))() - 1
    float var_1d4_2 = fconvert.s(fconvert.t(fconvert.s(fconvert.t(var_1d4) / fconvert.t(arg6[3]))))
    float var_1dc_2 = fconvert.s(fconvert.t(fconvert.s(fconvert.t(var_1dc) / fconvert.t(arg8[3]))))
    float var_1ec_2 = fconvert.s(fconvert.t(fconvert.s(fconvert.t(var_1ec) / fconvert.t(arg2[3]))))
    float var_1fc_2 = fconvert.s(fconvert.t(fconvert.s(fconvert.t(var_1fc) / fconvert.t(arg6[3]))))
    float var_200_2 = fconvert.s(fconvert.t(fconvert.s(fconvert.t(var_200) / fconvert.t(arg8[3]))))
    float var_210_2 = fconvert.s(fconvert.t(fconvert.s(fconvert.t(var_210) / fconvert.t(arg2[3]))))
    arg6[3]
    long double x87_r6_12 = float.t(1)
    float var_210_6 = fconvert.s(fconvert.t(fconvert.s(x87_r6_12 / fconvert.t(arg8[3]))))
    float var_210_8 = fconvert.s(fconvert.t(fconvert.s(x87_r6_12 / fconvert.t(arg2[3]))))
    long double x87_r7_46 = fconvert.t(var_1c4)
    long double x87_r6_18 = fconvert.t(var_1f0)
    x87_r6_18 - x87_r7_46
    float* eax_12
    eax_12.w = (x87_r6_18 < x87_r7_46 ? 1 : 0) << 8
        | (is_unordered.t(x87_r6_18, x87_r7_46) ? 1 : 0) << 0xa
        | (x87_r6_18 == x87_r7_46 ? 1 : 0) << 0xe | 0x3000
    float var_1f0_1
    long double x87_r6_19
    long double x87_r7_47
    
    if ((eax_12:1.b & 0x41) != 0)
        var_1f0_1 = fconvert.s(x87_r6_18)
        x87_r6_19 = x87_r7_46
        x87_r7_47 = x87_r6_18
    else
        x87_r6_19 = x87_r7_46
        x87_r7_47 = x87_r6_18
        var_1f0_1 = fconvert.s(x87_r6_19)
    
    long double x87_r5_5 = fconvert.t(var_1d8)
    long double x87_r4_14 = fconvert.t(var_208)
    x87_r4_14 - x87_r5_5
    eax_12.w = (x87_r4_14 < x87_r5_5 ? 1 : 0) << 8
        | (is_unordered.t(x87_r4_14, x87_r5_5) ? 1 : 0) << 0xa
        | (x87_r4_14 == x87_r5_5 ? 1 : 0) << 0xe | 0x2000
    float var_208_1
    long double x87_r4_15
    long double x87_r5_6
    
    if ((eax_12:1.b & 0x41) != 0)
        var_208_1 = fconvert.s(x87_r4_14)
        x87_r4_15 = x87_r5_5
        x87_r5_6 = x87_r4_14
    else
        x87_r4_15 = x87_r5_5
        x87_r5_6 = x87_r4_14
        var_208_1 = fconvert.s(x87_r4_15)
    
    long double x87_r3_20 = fconvert.t(var_1f0_1)
    long double x87_r2_27 = fconvert.t(var_208_1)
    x87_r2_27 - x87_r3_20
    eax_12.w = (x87_r2_27 < x87_r3_20 ? 1 : 0) << 8
        | (is_unordered.t(x87_r2_27, x87_r3_20) ? 1 : 0) << 0xa
        | (x87_r2_27 == x87_r3_20 ? 1 : 0) << 0xe | 0x1000
    
    if ((eax_12:1.b & 0x41) != 0)
        x87_r4_15 = x87_r2_27
    else
        x87_r3_20 = x87_r2_27
    
    int32_t edi_1 = *arg5
    long double x87_r3_22 = fconvert.t(fconvert.s(float.t(edi_1)))
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
    int32_t ebx_1 = sub_70c710(fconvert.t(fconvert.s(x87_r3_22)))
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
    
    long double x87_r7_51 = fconvert.t(fconvert.s(float.t(arg5[2] + edi_1)))
    long double x87_r6_22 = fconvert.t(fconvert.s(x87_r7_49))
    x87_r6_22 - x87_r7_51
    int32_t eax_15
    eax_15.w = (x87_r6_22 < x87_r7_51 ? 1 : 0) << 8
        | (is_unordered.t(x87_r6_22, x87_r7_51) ? 1 : 0) << 0xa
        | (x87_r6_22 == x87_r7_51 ? 1 : 0) << 0xe | 0x3000
    
    if ((eax_15:1.b & 0x41) == 0)
        x87_r7_51 = x87_r6_22
    
    long double x87_r7_53 = fconvert.t(var_1c8)
    long double x87_r6_23 = fconvert.t(var_204)
    int32_t edi_2 = sub_70c710(fconvert.t(fconvert.s(x87_r7_51)))
    x87_r6_23 - x87_r7_53
    int32_t eax_16
    eax_16.w = (x87_r6_23 < x87_r7_53 ? 1 : 0) << 8
        | (is_unordered.t(x87_r6_23, x87_r7_53) ? 1 : 0) << 0xa
        | (x87_r6_23 == x87_r7_53 ? 1 : 0) << 0xe | 0x3000
    float var_204_1
    long double x87_r6_24
    long double x87_r7_54
    
    if ((eax_16:1.b & 0x41) != 0)
        var_204_1 = fconvert.s(x87_r6_23)
        x87_r6_24 = x87_r7_53
        x87_r7_54 = x87_r6_23
    else
        x87_r6_24 = x87_r7_53
        x87_r7_54 = x87_r6_23
        var_204_1 = fconvert.s(x87_r6_24)
    
    long double x87_r5_8 = fconvert.t(var_1f4)
    long double x87_r4_17 = fconvert.t(var_20c)
    x87_r4_17 - x87_r5_8
    eax_16.w = (x87_r4_17 < x87_r5_8 ? 1 : 0) << 8
        | (is_unordered.t(x87_r4_17, x87_r5_8) ? 1 : 0) << 0xa
        | (x87_r4_17 == x87_r5_8 ? 1 : 0) << 0xe | 0x2000
    float var_20c_1
    long double x87_r4_18
    long double x87_r5_9
    
    if ((eax_16:1.b & 0x41) != 0)
        var_20c_1 = fconvert.s(x87_r4_17)
        x87_r4_18 = x87_r5_8
        x87_r5_9 = x87_r4_17
    else
        x87_r4_18 = x87_r5_8
        x87_r5_9 = x87_r4_17
        var_20c_1 = fconvert.s(x87_r4_18)
    
    long double x87_r3_24 = fconvert.t(var_204_1)
    long double x87_r2_29 = fconvert.t(var_20c_1)
    x87_r2_29 - x87_r3_24
    eax_16.w = (x87_r2_29 < x87_r3_24 ? 1 : 0) << 8
        | (is_unordered.t(x87_r2_29, x87_r3_24) ? 1 : 0) << 0xa
        | (x87_r2_29 == x87_r3_24 ? 1 : 0) << 0xe | 0x1000
    
    if ((eax_16:1.b & 0x41) != 0)
        x87_r4_18 = x87_r2_29
    else
        x87_r3_24 = x87_r2_29
    
    int32_t ecx_4 = arg5[1]
    long double x87_r3_26 = fconvert.t(fconvert.s(float.t(ecx_4)))
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
    
    long double x87_r7_58 = fconvert.t(fconvert.s(float.t(arg5[3] + ecx_4)))
    long double x87_r6_27 = fconvert.t(fconvert.s(x87_r7_56))
    x87_r6_27 - x87_r7_58
    int32_t eax_19
    eax_19.w = (x87_r6_27 < x87_r7_58 ? 1 : 0) << 8
        | (is_unordered.t(x87_r6_27, x87_r7_58) ? 1 : 0) << 0xa
        | (x87_r6_27 == x87_r7_58 ? 1 : 0) << 0xe | 0x3000
    
    if ((eax_19:1.b & 0x41) == 0)
        x87_r7_58 = x87_r6_27
    
    int32_t j_3 = edi_2 - ebx_1
    int32_t eax_20 = sub_70c710(fconvert.t(fconvert.s(x87_r7_58)))
    float var_210_16 = fconvert.s(fconvert.t(var_190_1))
    float var_200_3 = fconvert.s(fconvert.t(var_1b0_1))
    float var_1fc_3 = fconvert.s(fconvert.t(var_1c0_1))
    var_1d0.d = fconvert.s(float.t(var_1d0.d))
    var_1e8.d = fconvert.s(float.t(var_1e8.d))
    int32_t edx_11 = *(*arg4 + 8)
    int128_t var_160_1 = zx.o(0)
    int32_t xmm0_17[0x4] = _mm_unpacklo_epi8(
        zx.o(((arg14[3] << 8 | zx.d((*arg14).b)) << 8 | zx.d((arg14[1]).b)) << 8)
            | zx.o((arg14[2]).b), 
        0)
    int32_t xmm0_18 = var_1d0.d
    int32_t xmm0_19 = var_1e8.d
    int32_t i_2 = eax_20 - esi_2
    int128_t var_100_1 = zx.o(0)
    char* esi_3 = edx_11(ebx_1, esi_2)
    int32_t j_2 = j_3
    var_1e8.d = fconvert.s(float.t(esi_2))
    result = (*(*arg4 + 0x1c))() - (j_2 << 2)
    long double x87_r7_69 = fconvert.t(var_1e8.d)
    float* result_1 = result
    var_1e8.d = fconvert.s(x87_r7_69 * fconvert.t(var_18c_1) + fconvert.t(fconvert.s(
        fconvert.t(fconvert.s(x87_r5 * x87_r2 - x87_r4_2 * x87_r7_14)) * x87_r3_7)))
    int128_t xmm3_1 = var_1e8.d
    float var_170
    var_170.o = xmm3_1
    var_1d0.d = fconvert.s(x87_r7_69 * fconvert.t(var_1ac_1) + fconvert.t(fconvert.s(
        fconvert.t(fconvert.s(x87_r2_5 * x87_r4_2 - x87_r1_5 * x87_r5)) * x87_r3_7)))
    int128_t xmm5_1 = var_1d0.d
    float var_180
    var_180.o = xmm5_1
    int128_t xmm6_1 =
        fconvert.s(x87_r7_69 * fconvert.t(var_1bc_1) + fconvert.t(fconvert.s(x87_r3_7 * x87_r2_21)))
    int128_t var_150_1 = xmm6_1
    var_1e8.d = fconvert.s(float.t(ebx_1))
    long double x87_r7_73 = fconvert.t(var_1e8.d)
    var_1e8.d = fconvert.s(x87_r7_73 * fconvert.t(var_190_1))
    var_1d0.d = fconvert.s(x87_r7_73 * fconvert.t(var_1b0_1))
    long double x87_r7_74 = x87_r7_73 * fconvert.t(var_1c0_1)
    var_1c0_1.o = var_1e8.d
    var_1b0_1.o = var_1d0.d
    var_190_1.o = fconvert.s(x87_r7_74)
    
    if (i_2 s> 0)
        int32_t i_1 = i_2
        int32_t i
        
        do
            float xmm0_24 = var_1c0_1 f+ xmm3_1
            float xmm1_11 = var_1b0_1 f+ xmm5_1
            float xmm2_2 = var_190_1 f+ xmm6_1
            
            if (j_2 s> 0)
                int32_t xmm3_2[0x4] =
                    zx.o(((arg13[3] << 8 | zx.d((*arg13).b)) << 8 | zx.d((arg13[1]).b)) << 8)
                    | zx.o((arg13[2]).b)
                int32_t j_1 = j_2
                int32_t j
                
                do
                    float xmm5_5 =
                        xmm0_24 * fconvert.s(fconvert.t(fconvert.s(x87_r6_12 / x87_r6_12)))
                        + xmm1_11 * var_210_6 + xmm2_2 * var_210_8
                    float xmm5_6 = _mm_rcp_ss(xmm5_5, xmm5_5)
                    int32_t eax_31 = *(int.d(__minss_xmmss_memss(
                        _mm_max_ss(
                            (xmm0_24 * var_1fc_2 + xmm1_11 * var_200_2 + xmm2_2 * var_210_2)
                                * xmm5_6, 
                            0), 
                        xmm0_19)) * var_1a0_1.d + var_198.d + (int.d(__minss_xmmss_memss(
                        _mm_max_ss(
                            (xmm0_24 * var_1d4_2 + xmm1_11 * var_1dc_2 + xmm2_2 * var_1ec_2)
                                * xmm5_6, 
                            0), 
                        xmm0_18)) << 2))
                    int32_t edx_21
                    edx_21.b = *esi_3
                    int32_t xmm5_20 = __paddusb_xmmdq_memdq(
                        _mm_packus_epi16(
                            _mm_srli_epi16(
                                __pmullw_xmmdq_memdq(_mm_unpacklo_epi8(zx.o(eax_31), 0), xmm0_17), 
                                8), 
                            zx.o(0)), 
                        xmm3_2)
                    int32_t ecx_19 = (zx.d(xmm5_20:3.b) * arg11) s>> 8
                    char ebx_6 = (((zx.d(xmm5_20.b) - zx.d(edx_21.b)) * ecx_19) s>> 8).b + edx_21.b
                    edx_21.b = esi_3[1]
                    xmm0_24 = xmm0_24 + var_210_16
                    xmm1_11 = xmm1_11 + var_200_3
                    xmm2_2 = xmm2_2 + var_1fc_3
                    *esi_3 = ebx_6
                    esi_3[1] = (((zx.d(xmm5_20:1.b) - zx.d(edx_21.b)) * ecx_19) s>> 8).b + edx_21.b
                    char eax_36 = esi_3[2]
                    esi_3[2] = (((zx.d(xmm5_20:2.b) - zx.d(eax_36)) * ecx_19) s>> 8).b + eax_36
                    esi_3 = &esi_3[4]
                    j = j_1
                    j_1 -= 1
                while (j != 1)
                xmm6_1 = var_150_1
                xmm5_1 = var_180.o
                xmm3_1 = var_170.o
                result = result_1
                j_2 = j_3
            
            xmm3_1 = xmm3_1 f+ fconvert.s(fconvert.t(var_18c_1))
            xmm5_1 = xmm5_1 f+ fconvert.s(fconvert.t(var_1ac_1))
            xmm6_1 = xmm6_1 f+ fconvert.s(fconvert.t(var_1bc_1))
            esi_3 += result
            i = i_1
            i_1 -= 1
            var_170.o = xmm3_1
            var_180.o = xmm5_1
            var_150_1 = xmm6_1
        while (i != 1)

return result
