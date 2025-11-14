// 函数: sub_45fae0
// 地址: 0x45fae0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

float var_20c = fconvert.s(fconvert.t(*arg6))
float var_1bc = fconvert.s(fconvert.t(arg6[1]))
float var_218 = fconvert.s(fconvert.t(*arg8))
float var_224 = fconvert.s(fconvert.t(arg8[1]))
float var_204 = fconvert.s(fconvert.t(*arg9))
float var_214 = fconvert.s(fconvert.t(arg9[1]))
float var_22c = fconvert.s(fconvert.t(*arg10))
float var_228 = fconvert.s(fconvert.t(arg10[1]))
float var_200 = fconvert.s(fconvert.t(*arg7))
float var_21c = fconvert.s(fconvert.t(arg7[1]))
float var_208 = fconvert.s(fconvert.t(*arg2))
float var_220 = fconvert.s(fconvert.t(arg2[1]))
float var_1fc = fconvert.s(fconvert.t(*arg3))
float var_230 = fconvert.s(fconvert.t(arg3[1]))
long double x87_r7_14 = fconvert.t(var_224)
long double x87_r5 = fconvert.t(var_214)
long double x87_r4_2 = fconvert.t(var_204)
long double x87_r2 = fconvert.t(var_218)
double var_180 = fconvert.d(x87_r2)
long double x87_r2_5 = fconvert.t(var_1bc)
long double x87_r1_5 = fconvert.t(var_20c)
long double x87_r2_15 = fconvert.t(var_228)
long double x87_r2_17 = fconvert.t(var_22c)
long double x87_r5_2 =
    fconvert.t(fconvert.s(fconvert.t(var_180) - fconvert.t(fconvert.d(x87_r1_5))))
long double x87_r2_21 =
    fconvert.t(fconvert.s(x87_r7_14 * fconvert.t(var_20c) - x87_r2 * fconvert.t(var_1bc)))
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
    + x87_r5 * fconvert.t(fconvert.s(x87_r2_17 - fconvert.t(var_180)))
    + fconvert.t(fconvert.s(x87_r2 * x87_r2_15 - x87_r7_14 * x87_r2_17))))
x87_r2_25 - x87_r1_13
result.w = (x87_r2_25 < x87_r1_13 ? 1 : 0) << 8
    | (is_unordered.t(x87_r2_25, x87_r1_13) ? 1 : 0) << 0xa
    | (x87_r2_25 == x87_r1_13 ? 1 : 0) << 0xe | 0x1800
bool p = unimplemented  {test ah, 0x5}

if (p)
    long double x87_r3_6 = float.t(1)
    long double x87_r3_7 = fconvert.t(fconvert.s(x87_r3_6 / x87_r3_6))
    float var_1b0_1 = fconvert.s(fconvert.t(fconvert.s(x87_r7_14 - x87_r5)) * x87_r3_7)
    float var_1ac_1 = fconvert.s(fconvert.t(fconvert.s(x87_r4_2 - x87_r2)) * x87_r3_7)
    float var_1d0_1 =
        fconvert.s(fconvert.t(fconvert.s(fconvert.t(fconvert.d(x87_r5)) - x87_r2_5)) * x87_r3_7)
    float var_1cc_1 =
        fconvert.s(fconvert.t(fconvert.s(x87_r1_5 - fconvert.t(fconvert.d(x87_r4_2)))) * x87_r3_7)
    float var_1e0_1 = fconvert.s(x87_r1_13 * x87_r3_7)
    float var_1dc_1 = fconvert.s(x87_r5_2 * x87_r3_7)
    int32_t ebx_2 = (*(*arg11 + 8))(0, 0)
    double var_1b8_1
    var_1b8_1.d = ebx_2
    int32_t eax_4 = (*(*arg11 + 0x1c))()
    double var_1f8
    var_1f8.d = (*(*arg11 + 0x10))() - 1
    double var_1f0
    var_1f0.d = (*(*arg11 + 0x14))() - 1
    float var_200_2 = fconvert.s(fconvert.t(fconvert.s(fconvert.t(var_200) / fconvert.t(arg6[3]))))
    float var_208_2 = fconvert.s(fconvert.t(fconvert.s(fconvert.t(var_208) / fconvert.t(arg8[3]))))
    float var_1fc_2 = fconvert.s(fconvert.t(fconvert.s(fconvert.t(var_1fc) / fconvert.t(arg9[3]))))
    float var_21c_2 = fconvert.s(fconvert.t(fconvert.s(fconvert.t(var_21c) / fconvert.t(arg6[3]))))
    float var_220_2 = fconvert.s(fconvert.t(fconvert.s(fconvert.t(var_220) / fconvert.t(arg8[3]))))
    float var_230_2 = fconvert.s(fconvert.t(fconvert.s(fconvert.t(var_230) / fconvert.t(arg9[3]))))
    arg6[3]
    long double x87_r6_12 = float.t(1)
    float var_230_6 = fconvert.s(fconvert.t(fconvert.s(x87_r6_12 / fconvert.t(arg8[3]))))
    float var_230_8 = fconvert.s(fconvert.t(fconvert.s(x87_r6_12 / fconvert.t(arg9[3]))))
    long double x87_r7_46 = fconvert.t(var_20c)
    long double x87_r6_18 = fconvert.t(var_218)
    x87_r6_18 - x87_r7_46
    float* eax_11
    eax_11.w = (x87_r6_18 < x87_r7_46 ? 1 : 0) << 8
        | (is_unordered.t(x87_r6_18, x87_r7_46) ? 1 : 0) << 0xa
        | (x87_r6_18 == x87_r7_46 ? 1 : 0) << 0xe | 0x3000
    float var_218_1
    long double x87_r6_19
    long double x87_r7_47
    
    if ((eax_11:1.b & 0x41) != 0)
        var_218_1 = fconvert.s(x87_r6_18)
        x87_r6_19 = x87_r7_46
        x87_r7_47 = x87_r6_18
    else
        x87_r6_19 = x87_r7_46
        x87_r7_47 = x87_r6_18
        var_218_1 = fconvert.s(x87_r6_19)
    
    long double x87_r5_5 = fconvert.t(var_204)
    long double x87_r4_14 = fconvert.t(var_22c)
    x87_r4_14 - x87_r5_5
    eax_11.w = (x87_r4_14 < x87_r5_5 ? 1 : 0) << 8
        | (is_unordered.t(x87_r4_14, x87_r5_5) ? 1 : 0) << 0xa
        | (x87_r4_14 == x87_r5_5 ? 1 : 0) << 0xe | 0x2000
    float var_22c_1
    long double x87_r4_15
    long double x87_r5_6
    
    if ((eax_11:1.b & 0x41) != 0)
        var_22c_1 = fconvert.s(x87_r4_14)
        x87_r4_15 = x87_r5_5
        x87_r5_6 = x87_r4_14
    else
        x87_r4_15 = x87_r5_5
        x87_r5_6 = x87_r4_14
        var_22c_1 = fconvert.s(x87_r4_15)
    
    long double x87_r3_20 = fconvert.t(var_218_1)
    long double x87_r2_27 = fconvert.t(var_22c_1)
    x87_r2_27 - x87_r3_20
    eax_11.w = (x87_r2_27 < x87_r3_20 ? 1 : 0) << 8
        | (is_unordered.t(x87_r2_27, x87_r3_20) ? 1 : 0) << 0xa
        | (x87_r2_27 == x87_r3_20 ? 1 : 0) << 0xe | 0x1000
    
    if ((eax_11:1.b & 0x41) != 0)
        x87_r4_15 = x87_r2_27
    else
        x87_r3_20 = x87_r2_27
    
    int32_t esi_1 = *arg5
    long double x87_r3_22 = fconvert.t(fconvert.s(float.t(esi_1)))
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
    
    x87_r6_19 - x87_r7_47
    int32_t var_218_2 = sub_70c710(fconvert.t(fconvert.s(x87_r3_22)))
    int32_t eax_12
    eax_12.w = (x87_r6_19 < x87_r7_47 ? 1 : 0) << 8
        | (is_unordered.t(x87_r6_19, x87_r7_47) ? 1 : 0) << 0xa
        | (x87_r6_19 == x87_r7_47 ? 1 : 0) << 0xe | 0x2000
    
    if ((eax_12:1.b & 0x41) != 0)
        x87_r5_6 = x87_r6_19
    
    long double x87_r7_48 = x87_r5_6
    x87_r4_15 - x87_r7_48
    eax_12.w = (x87_r4_15 < x87_r7_48 ? 1 : 0) << 8
        | (is_unordered.t(x87_r4_15, x87_r7_48) ? 1 : 0) << 0xa
        | (x87_r4_15 == x87_r7_48 ? 1 : 0) << 0xe | 0x3000
    
    if ((eax_12:1.b & 0x41) != 0)
        x87_r7_48 = x87_r4_15
    
    long double x87_r7_49 = fconvert.t(fconvert.s(x87_r7_47))
    long double x87_r6_21 = fconvert.t(fconvert.s(x87_r7_48))
    x87_r6_21 - x87_r7_49
    eax_12.w = (x87_r6_21 < x87_r7_49 ? 1 : 0) << 8
        | (is_unordered.t(x87_r6_21, x87_r7_49) ? 1 : 0) << 0xa
        | (x87_r6_21 == x87_r7_49 ? 1 : 0) << 0xe | 0x3000
    bool p_2 = unimplemented  {test ah, 0x5}
    
    if (not(p_2))
        x87_r7_49 = x87_r6_21
    
    long double x87_r7_51 = fconvert.t(fconvert.s(float.t(arg5[2] + esi_1)))
    long double x87_r6_22 = fconvert.t(fconvert.s(x87_r7_49))
    x87_r6_22 - x87_r7_51
    int32_t eax_14
    eax_14.w = (x87_r6_22 < x87_r7_51 ? 1 : 0) << 8
        | (is_unordered.t(x87_r6_22, x87_r7_51) ? 1 : 0) << 0xa
        | (x87_r6_22 == x87_r7_51 ? 1 : 0) << 0xe | 0x3000
    
    if ((eax_14:1.b & 0x41) == 0)
        x87_r7_51 = x87_r6_22
    
    long double x87_r7_53 = fconvert.t(var_1bc)
    long double x87_r6_23 = fconvert.t(var_224)
    int32_t esi_2 = sub_70c710(fconvert.t(fconvert.s(x87_r7_51)))
    x87_r6_23 - x87_r7_53
    int32_t eax_15
    eax_15.w = (x87_r6_23 < x87_r7_53 ? 1 : 0) << 8
        | (is_unordered.t(x87_r6_23, x87_r7_53) ? 1 : 0) << 0xa
        | (x87_r6_23 == x87_r7_53 ? 1 : 0) << 0xe | 0x3000
    float var_224_1
    long double x87_r6_24
    long double x87_r7_54
    
    if ((eax_15:1.b & 0x41) != 0)
        var_224_1 = fconvert.s(x87_r6_23)
        x87_r6_24 = x87_r7_53
        x87_r7_54 = x87_r6_23
    else
        x87_r6_24 = x87_r7_53
        x87_r7_54 = x87_r6_23
        var_224_1 = fconvert.s(x87_r6_24)
    
    long double x87_r5_8 = fconvert.t(var_214)
    long double x87_r4_17 = fconvert.t(var_228)
    x87_r4_17 - x87_r5_8
    eax_15.w = (x87_r4_17 < x87_r5_8 ? 1 : 0) << 8
        | (is_unordered.t(x87_r4_17, x87_r5_8) ? 1 : 0) << 0xa
        | (x87_r4_17 == x87_r5_8 ? 1 : 0) << 0xe | 0x2000
    float var_228_1
    long double x87_r4_18
    long double x87_r5_9
    
    if ((eax_15:1.b & 0x41) != 0)
        var_228_1 = fconvert.s(x87_r4_17)
        x87_r4_18 = x87_r5_8
        x87_r5_9 = x87_r4_17
    else
        x87_r4_18 = x87_r5_8
        x87_r5_9 = x87_r4_17
        var_228_1 = fconvert.s(x87_r4_18)
    
    long double x87_r3_24 = fconvert.t(var_224_1)
    long double x87_r2_29 = fconvert.t(var_228_1)
    x87_r2_29 - x87_r3_24
    eax_15.w = (x87_r2_29 < x87_r3_24 ? 1 : 0) << 8
        | (is_unordered.t(x87_r2_29, x87_r3_24) ? 1 : 0) << 0xa
        | (x87_r2_29 == x87_r3_24 ? 1 : 0) << 0xe | 0x1000
    
    if ((eax_15:1.b & 0x41) != 0)
        x87_r4_18 = x87_r2_29
    else
        x87_r3_24 = x87_r2_29
    
    int32_t ecx_5 = arg5[1]
    long double x87_r3_26 = fconvert.t(fconvert.s(float.t(ecx_5)))
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
    
    x87_r6_24 - x87_r7_54
    int32_t edi_2 = sub_70c710(fconvert.t(fconvert.s(x87_r3_26)))
    int32_t eax_16
    eax_16.w = (x87_r6_24 < x87_r7_54 ? 1 : 0) << 8
        | (is_unordered.t(x87_r6_24, x87_r7_54) ? 1 : 0) << 0xa
        | (x87_r6_24 == x87_r7_54 ? 1 : 0) << 0xe | 0x2000
    
    if ((eax_16:1.b & 0x41) != 0)
        x87_r5_9 = x87_r6_24
    
    long double x87_r7_55 = x87_r5_9
    x87_r4_18 - x87_r7_55
    eax_16.w = (x87_r4_18 < x87_r7_55 ? 1 : 0) << 8
        | (is_unordered.t(x87_r4_18, x87_r7_55) ? 1 : 0) << 0xa
        | (x87_r4_18 == x87_r7_55 ? 1 : 0) << 0xe | 0x3000
    
    if ((eax_16:1.b & 0x41) != 0)
        x87_r7_55 = x87_r4_18
    
    long double x87_r7_56 = fconvert.t(fconvert.s(x87_r7_54))
    long double x87_r6_26 = fconvert.t(fconvert.s(x87_r7_55))
    x87_r6_26 - x87_r7_56
    eax_16.w = (x87_r6_26 < x87_r7_56 ? 1 : 0) << 8
        | (is_unordered.t(x87_r6_26, x87_r7_56) ? 1 : 0) << 0xa
        | (x87_r6_26 == x87_r7_56 ? 1 : 0) << 0xe | 0x3000
    bool p_4 = unimplemented  {test ah, 0x5}
    
    if (not(p_4))
        x87_r7_56 = x87_r6_26
    
    long double x87_r7_58 = fconvert.t(fconvert.s(float.t(arg5[3] + ecx_5)))
    long double x87_r6_27 = fconvert.t(fconvert.s(x87_r7_56))
    x87_r6_27 - x87_r7_58
    int32_t eax_18
    eax_18.w = (x87_r6_27 < x87_r7_58 ? 1 : 0) << 8
        | (is_unordered.t(x87_r6_27, x87_r7_58) ? 1 : 0) << 0xa
        | (x87_r6_27 == x87_r7_58 ? 1 : 0) << 0xe | 0x3000
    
    if ((eax_18:1.b & 0x41) == 0)
        x87_r7_58 = x87_r6_27
    
    int32_t j_3 = esi_2 - var_218_2
    int32_t eax_19 = sub_70c710(fconvert.t(fconvert.s(x87_r7_58)))
    float var_230_16 = fconvert.s(fconvert.t(var_1b0_1))
    float var_220_3 = fconvert.s(fconvert.t(var_1d0_1))
    float var_21c_3 = fconvert.s(fconvert.t(var_1e0_1))
    float var_1a0
    var_1a0.o = zx.o(0)
    var_1f8.d = fconvert.s(float.t(var_1f8.d))
    float var_e0_1 = (data_7581c0).d
    var_1f0.d = fconvert.s(float.t(var_1f0.d))
    float var_190
    var_190.o = data_7581b0
    int32_t i_2 = eax_19 - edi_2
    var_180.o = zx.o(0)
    int32_t xmm0_18 = var_1f8.d
    int32_t xmm0_19 = var_1f0.d
    void* var_20c_1 = (*(*arg4 + 8))(var_218_2, edi_2)
    int32_t j_2 = j_3
    var_1f0.d = fconvert.s(float.t(edi_2))
    result = (*(*arg4 + 0x1c))() - (j_2 << 2)
    long double x87_r7_69 = fconvert.t(var_1f0.d)
    float* result_1 = result
    var_1f0.d = fconvert.s(x87_r7_69 * fconvert.t(var_1ac_1) + fconvert.t(fconvert.s(
        fconvert.t(fconvert.s(x87_r5 * x87_r2 - x87_r4_2 * x87_r7_14)) * x87_r3_7)))
    int128_t xmm0_20 = var_1f0.d
    int128_t var_160_1 = xmm0_20
    var_1f8.d = fconvert.s(x87_r7_69 * fconvert.t(var_1cc_1) + fconvert.t(fconvert.s(
        fconvert.t(fconvert.s(x87_r2_5 * x87_r4_2 - x87_r1_5 * x87_r5)) * x87_r3_7)))
    int128_t xmm1_10 = var_1f8.d
    int128_t xmm6_1 =
        fconvert.s(x87_r7_69 * fconvert.t(var_1dc_1) + fconvert.t(fconvert.s(x87_r3_7 * x87_r2_21)))
    int128_t var_150_1 = xmm1_10
    var_1f0.d = fconvert.s(float.t(var_218_2))
    int128_t var_130_1 = xmm6_1
    long double x87_r7_73 = fconvert.t(var_1f0.d)
    var_1f0.d = fconvert.s(x87_r7_73 * fconvert.t(var_1b0_1))
    long double x87_r6_37 = x87_r7_73 * fconvert.t(var_1d0_1)
    var_1d0_1.o = var_1f0.d
    var_1f8.d = fconvert.s(x87_r6_37)
    var_1b0_1.o = var_1f8.d
    float var_230_19 = fconvert.s(x87_r7_73 * fconvert.t(var_1e0_1))
    
    if (i_2 s> 0)
        int32_t i_1 = i_2
        int32_t i
        
        do
            float xmm2_5 = var_1d0_1 f+ xmm0_20
            float xmm3_2 = var_1b0_1 f+ xmm1_10
            float xmm4_2 = var_230_19 f+ xmm6_1
            
            if (j_2 s> 0)
                var_180.d = 0
                int32_t j_1 = j_2
                int32_t j
                
                do
                    float xmm1_14 =
                        xmm2_5 * fconvert.s(fconvert.t(fconvert.s(x87_r6_12 / x87_r6_12)))
                        + xmm3_2 * var_230_6 + xmm4_2 * var_230_8
                    float xmm1_15 = _mm_rcp_ss(xmm1_14, xmm1_14)
                    float xmm0_29 =
                        (xmm2_5 * var_200_2 + xmm3_2 * var_208_2 + xmm4_2 * var_1fc_2) * xmm1_15
                    float xmm1_24 =
                        (xmm2_5 * var_21c_2 + xmm3_2 * var_220_2 + xmm4_2 * var_230_2) * xmm1_15
                    int32_t ecx_9 = int.d(
                        __minss_xmmss_memss(__maxss_xmmss_memss(xmm0_29, 0), xmm0_18) * var_190)
                    int32_t edx_9 = int.d(
                        __minss_xmmss_memss(__maxss_xmmss_memss(xmm1_24, 0), xmm0_19) * var_190)
                    int32_t edx_11 = (edx_9 s>> 7) * eax_4
                    int32_t ecx_10 = ecx_9 s>> 7
                    var_1f8.d =
                        int.d(__minss_xmmss_memss(_mm_max_ss(xmm0_29 + var_e0_1, 0), xmm0_18))
                    var_1f0.d =
                        int.d(__minss_xmmss_memss(_mm_max_ss(xmm1_24 + var_e0_1, 0), xmm0_19))
                    int32_t esi_7 = *(edx_11 + (ecx_10 << 2) + ebx_2)
                    ebx_2 = var_1b8_1.d
                    int32_t esi_9 = var_1f0.d * eax_4
                    int32_t xmm1_28[0x4] = zx.o(*(esi_9 + (ecx_10 << 2) + ebx_2))
                    uint128_t xmm6_11 = zx.o(sx.d(ecx_9.w & 0x7f))
                    int32_t ecx_14 = var_1f8.d
                    int32_t edx_13 = *(edx_11 + (ecx_14 << 2) + ebx_2)
                    uint32_t xmm6_13[0x4] =
                        _mm_shuffle_epi32(_mm_unpacklo_epi16(xmm6_11, xmm6_11), 0)
                    int32_t xmm0_34[0x4] = _mm_unpacklo_epi8(zx.o(esi_7), 0)
                    var_1e0_1.o = xmm6_13
                    int32_t xmm7_8[0x4] = __pmullw_xmmdq_memdq(
                        _mm_subs_epi16(_mm_unpacklo_epi8(zx.o(edx_13), 0), xmm0_34), var_1e0_1.o)
                    int32_t xmm1_29[0x4] = _mm_unpacklo_epi8(xmm1_28, 0)
                    int32_t xmm7_9[0x4] = _mm_srai_epi16(xmm7_8, 7)
                    xmm2_5 = xmm2_5 + var_230_16
                    xmm3_2 = xmm3_2 + var_220_3
                    xmm4_2 = xmm4_2 + var_21c_3
                    int32_t edx_14 = *(esi_9 + (ecx_14 << 2) + ebx_2)
                    int32_t xmm6_15[0x4] = _mm_adds_epi16(xmm0_34, xmm7_9)
                    var_1f0.o = xmm6_15
                    uint128_t xmm0_40 = zx.o(sx.d(edx_9.w & 0x7f))
                    int32_t* eax_27 = var_20c_1
                    *eax_27 = _mm_packus_epi16(
                        _mm_adds_epi16(xmm6_15, 
                            _mm_srai_epi16(
                                _mm_mullo_epi16(
                                    __psubsw_xmmdq_memdq(
                                        _mm_adds_epi16(xmm1_29, 
                                            _mm_srai_epi16(
                                                __pmullw_xmmdq_memdq(
                                                    _mm_subs_epi16(
                                                        _mm_unpacklo_epi8(zx.o(edx_14), 0), 
                                                        xmm1_29), 
                                                    var_1e0_1.o), 
                                                7)), 
                                        var_1f0.o), 
                                    _mm_shuffle_epi32(_mm_unpacklo_epi16(xmm0_40, xmm0_40), 0)), 
                                7)), 
                        zx.o(0))
                    j = j_1
                    j_1 -= 1
                    var_20c_1 = &eax_27[1]
                while (j != 1)
                xmm6_1 = var_130_1
                xmm1_10 = var_150_1
                xmm0_20 = var_160_1
                result = result_1
                j_2 = j_3
            
            var_20c_1 += result
            i = i_1
            i_1 -= 1
            xmm0_20 = xmm0_20 f+ fconvert.s(fconvert.t(var_1ac_1))
            xmm1_10 = xmm1_10 f+ fconvert.s(fconvert.t(var_1cc_1))
            xmm6_1 = xmm6_1 f+ fconvert.s(fconvert.t(var_1dc_1))
            var_160_1 = xmm0_20
            var_150_1 = xmm1_10
            var_130_1 = xmm6_1
        while (i != 1)

return result
