// 函数: sub_4605f0
// 地址: 0x4605f0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

float var_224 = fconvert.s(fconvert.t(*arg6))
float var_1e4 = fconvert.s(fconvert.t(arg6[1]))
float var_22c = fconvert.s(fconvert.t(*arg8))
float var_238 = fconvert.s(fconvert.t(arg8[1]))
float var_214 = fconvert.s(fconvert.t(*arg9))
float var_228 = fconvert.s(fconvert.t(arg9[1]))
float var_240 = fconvert.s(fconvert.t(*arg10))
float var_23c = fconvert.s(fconvert.t(arg10[1]))
float var_218 = fconvert.s(fconvert.t(*arg7))
float var_230 = fconvert.s(fconvert.t(arg7[1]))
float var_210 = fconvert.s(fconvert.t(*arg2))
float var_234 = fconvert.s(fconvert.t(arg2[1]))
float var_20c = fconvert.s(fconvert.t(*arg3))
float var_244 = fconvert.s(fconvert.t(arg3[1]))
long double x87_r7_14 = fconvert.t(var_238)
long double x87_r5 = fconvert.t(var_228)
long double x87_r4_2 = fconvert.t(var_214)
long double x87_r2 = fconvert.t(var_22c)
double var_190 = fconvert.d(x87_r2)
long double x87_r2_5 = fconvert.t(var_1e4)
long double x87_r1_5 = fconvert.t(var_224)
long double x87_r2_15 = fconvert.t(var_23c)
long double x87_r2_17 = fconvert.t(var_240)
long double x87_r5_2 =
    fconvert.t(fconvert.s(fconvert.t(var_190) - fconvert.t(fconvert.d(x87_r1_5))))
long double x87_r2_21 =
    fconvert.t(fconvert.s(x87_r7_14 * fconvert.t(var_224) - x87_r2 * fconvert.t(var_1e4)))
double var_208
var_208.d = fconvert.s(x87_r5_2 * x87_r5
    + fconvert.t(fconvert.s(fconvert.t(fconvert.d(x87_r2_5)) - x87_r7_14)) * x87_r4_2 + x87_r2_21)
long double x87_r2_23 = fconvert.t(var_208.d)
long double x87_r1_13 = fconvert.t(9.9999997473787516e-05)
x87_r1_13 - x87_r2_23
float* result
result.w = (x87_r1_13 < x87_r2_23 ? 1 : 0) << 8
    | (is_unordered.t(x87_r1_13, x87_r2_23) ? 1 : 0) << 0xa
    | (x87_r1_13 == x87_r2_23 ? 1 : 0) << 0xe | 0x800

if ((result:1.b & 0x41) == 0)
    return result

var_208.d = fconvert.s(x87_r4_2 * fconvert.t(fconvert.s(x87_r7_14 - x87_r2_15))
    + x87_r5 * fconvert.t(fconvert.s(x87_r2_17 - fconvert.t(var_190)))
    + fconvert.t(fconvert.s(x87_r2 * x87_r2_15 - x87_r7_14 * x87_r2_17)))
long double x87_r2_25 = fconvert.t(var_208.d)
x87_r2_25 - x87_r1_13
result.w = (x87_r2_25 < x87_r1_13 ? 1 : 0) << 8
    | (is_unordered.t(x87_r2_25, x87_r1_13) ? 1 : 0) << 0xa
    | (x87_r2_25 == x87_r1_13 ? 1 : 0) << 0xe | 0x1800
bool p = unimplemented  {test ah, 0x5}

if (p)
    long double x87_r3_6 = float.t(1)
    var_208.d = fconvert.s(x87_r3_6 / x87_r3_6)
    long double x87_r3_7 = fconvert.t(var_208.d)
    float var_1b0_1 = fconvert.s(fconvert.t(fconvert.s(x87_r7_14 - x87_r5)) * x87_r3_7)
    float var_1ac_1 = fconvert.s(fconvert.t(fconvert.s(x87_r4_2 - x87_r2)) * x87_r3_7)
    float var_1e0_1 =
        fconvert.s(fconvert.t(fconvert.s(fconvert.t(fconvert.d(x87_r5)) - x87_r2_5)) * x87_r3_7)
    float var_1dc_1 =
        fconvert.s(fconvert.t(fconvert.s(x87_r1_5 - fconvert.t(fconvert.d(x87_r4_2)))) * x87_r3_7)
    float var_200_1 = fconvert.s(x87_r1_13 * x87_r3_7)
    float var_1fc_1 = fconvert.s(x87_r5_2 * x87_r3_7)
    int32_t eax_2 = (*(*arg11 + 8))(0, 0)
    var_208.d = (*(*arg11 + 0x1c))()
    double var_1d0
    var_1d0.d = (*(*arg11 + 0x10))() - 1
    double var_220_1
    var_220_1.d = (*(*arg11 + 0x14))() - 1
    float var_218_2 = fconvert.s(fconvert.t(fconvert.s(fconvert.t(var_218) / fconvert.t(arg6[3]))))
    float var_210_2 = fconvert.s(fconvert.t(fconvert.s(fconvert.t(var_210) / fconvert.t(arg8[3]))))
    float var_20c_2 = fconvert.s(fconvert.t(fconvert.s(fconvert.t(var_20c) / fconvert.t(arg9[3]))))
    float var_230_2 = fconvert.s(fconvert.t(fconvert.s(fconvert.t(var_230) / fconvert.t(arg6[3]))))
    float var_234_2 = fconvert.s(fconvert.t(fconvert.s(fconvert.t(var_234) / fconvert.t(arg8[3]))))
    float var_244_2 = fconvert.s(fconvert.t(fconvert.s(fconvert.t(var_244) / fconvert.t(arg9[3]))))
    arg6[3]
    long double x87_r6_12 = float.t(1)
    float var_244_6 = fconvert.s(fconvert.t(fconvert.s(x87_r6_12 / fconvert.t(arg8[3]))))
    float var_244_8 = fconvert.s(fconvert.t(fconvert.s(x87_r6_12 / fconvert.t(arg9[3]))))
    long double x87_r7_46 = fconvert.t(var_224)
    long double x87_r6_18 = fconvert.t(var_22c)
    x87_r6_18 - x87_r7_46
    float* eax_11
    eax_11.w = (x87_r6_18 < x87_r7_46 ? 1 : 0) << 8
        | (is_unordered.t(x87_r6_18, x87_r7_46) ? 1 : 0) << 0xa
        | (x87_r6_18 == x87_r7_46 ? 1 : 0) << 0xe | 0x3000
    float var_22c_1
    long double x87_r6_19
    long double x87_r7_47
    
    if ((eax_11:1.b & 0x41) != 0)
        var_22c_1 = fconvert.s(x87_r6_18)
        x87_r6_19 = x87_r7_46
        x87_r7_47 = x87_r6_18
    else
        x87_r6_19 = x87_r7_46
        x87_r7_47 = x87_r6_18
        var_22c_1 = fconvert.s(x87_r6_19)
    
    long double x87_r5_5 = fconvert.t(var_214)
    long double x87_r4_14 = fconvert.t(var_240)
    x87_r4_14 - x87_r5_5
    eax_11.w = (x87_r4_14 < x87_r5_5 ? 1 : 0) << 8
        | (is_unordered.t(x87_r4_14, x87_r5_5) ? 1 : 0) << 0xa
        | (x87_r4_14 == x87_r5_5 ? 1 : 0) << 0xe | 0x2000
    float var_240_1
    long double x87_r4_15
    long double x87_r5_6
    
    if ((eax_11:1.b & 0x41) != 0)
        var_240_1 = fconvert.s(x87_r4_14)
        x87_r4_15 = x87_r5_5
        x87_r5_6 = x87_r4_14
    else
        x87_r4_15 = x87_r5_5
        x87_r5_6 = x87_r4_14
        var_240_1 = fconvert.s(x87_r4_15)
    
    long double x87_r3_20 = fconvert.t(var_22c_1)
    long double x87_r2_27 = fconvert.t(var_240_1)
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
    int32_t var_22c_2 = sub_70c710(fconvert.t(fconvert.s(x87_r3_22)))
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
    
    long double x87_r7_53 = fconvert.t(var_1e4)
    long double x87_r6_23 = fconvert.t(var_238)
    int32_t esi_2 = sub_70c710(fconvert.t(fconvert.s(x87_r7_51)))
    x87_r6_23 - x87_r7_53
    int32_t eax_15
    eax_15.w = (x87_r6_23 < x87_r7_53 ? 1 : 0) << 8
        | (is_unordered.t(x87_r6_23, x87_r7_53) ? 1 : 0) << 0xa
        | (x87_r6_23 == x87_r7_53 ? 1 : 0) << 0xe | 0x3000
    float var_238_1
    long double x87_r6_24
    long double x87_r7_54
    
    if ((eax_15:1.b & 0x41) != 0)
        var_238_1 = fconvert.s(x87_r6_23)
        x87_r6_24 = x87_r7_53
        x87_r7_54 = x87_r6_23
    else
        x87_r6_24 = x87_r7_53
        x87_r7_54 = x87_r6_23
        var_238_1 = fconvert.s(x87_r6_24)
    
    long double x87_r5_8 = fconvert.t(var_228)
    long double x87_r4_17 = fconvert.t(var_23c)
    x87_r4_17 - x87_r5_8
    eax_15.w = (x87_r4_17 < x87_r5_8 ? 1 : 0) << 8
        | (is_unordered.t(x87_r4_17, x87_r5_8) ? 1 : 0) << 0xa
        | (x87_r4_17 == x87_r5_8 ? 1 : 0) << 0xe | 0x2000
    float var_23c_1
    long double x87_r4_18
    long double x87_r5_9
    
    if ((eax_15:1.b & 0x41) != 0)
        var_23c_1 = fconvert.s(x87_r4_17)
        x87_r4_18 = x87_r5_8
        x87_r5_9 = x87_r4_17
    else
        x87_r4_18 = x87_r5_8
        x87_r5_9 = x87_r4_17
        var_23c_1 = fconvert.s(x87_r4_18)
    
    long double x87_r3_24 = fconvert.t(var_238_1)
    long double x87_r2_29 = fconvert.t(var_23c_1)
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
    
    int32_t j_3 = esi_2 - var_22c_2
    int32_t eax_19 = sub_70c710(fconvert.t(fconvert.s(x87_r7_58)))
    float var_244_16 = fconvert.s(fconvert.t(var_1b0_1))
    float var_234_3 = fconvert.s(fconvert.t(var_1e0_1))
    float var_230_3 = fconvert.s(fconvert.t(var_200_1))
    var_1d0.d = fconvert.s(float.t(var_1d0.d))
    var_220_1.d = fconvert.s(float.t(var_220_1.d))
    float var_1c0
    var_1c0.o = zx.o(0)
    float var_120_1 = (data_7581c0).d
    float var_1a0
    var_1a0.o = data_7581b0
    char eax_24 = (arg12[2]).b
    int32_t ecx_17 = (arg12[3] << 8 | zx.d((*arg12).b)) << 8 | zx.d((arg12[1]).b)
    int32_t i_2 = eax_19 - edi_2
    int32_t xmm0_19[0x4] = _mm_unpacklo_epi8(
        zx.o(((arg13[3] << 8 | zx.d((*arg13).b)) << 8 | zx.d((arg13[1]).b)) << 8)
            | zx.o((arg13[2]).b), 
        0)
    int32_t xmm0_21 = var_1d0.d
    int32_t xmm0_22 = var_220_1.d
    var_190.o = zx.o(0)
    void* var_224_1 = (*(*arg4 + 8))(var_22c_2, edi_2)
    int32_t j_2 = j_3
    var_220_1.d = fconvert.s(float.t(edi_2))
    result = (*(*arg4 + 0x1c))() - (j_2 << 2)
    long double x87_r7_69 = fconvert.t(var_220_1.d)
    float* result_1 = result
    var_220_1.d = fconvert.s(x87_r7_69 * fconvert.t(var_1ac_1) + fconvert.t(fconvert.s(
        fconvert.t(fconvert.s(x87_r5 * x87_r2 - x87_r4_2 * x87_r7_14)) * x87_r3_7)))
    int128_t xmm0_23 = var_220_1.d
    int128_t var_170_1 = xmm0_23
    var_1d0.d = fconvert.s(x87_r7_69 * fconvert.t(var_1dc_1) + fconvert.t(fconvert.s(
        fconvert.t(fconvert.s(x87_r2_5 * x87_r4_2 - x87_r1_5 * x87_r5)) * x87_r3_7)))
    int128_t xmm1_10 = var_1d0.d
    int128_t var_160_1 = xmm1_10
    int128_t xmm6_1 =
        fconvert.s(x87_r7_69 * fconvert.t(var_1fc_1) + fconvert.t(fconvert.s(x87_r3_7 * x87_r2_21)))
    int128_t var_140_1 = xmm6_1
    var_220_1.d = fconvert.s(float.t(var_22c_2))
    long double x87_r7_73 = fconvert.t(var_220_1.d)
    var_220_1.d = fconvert.s(x87_r7_73 * fconvert.t(var_1b0_1))
    long double x87_r6_37 = x87_r7_73 * fconvert.t(var_1e0_1)
    var_1e0_1.o = var_220_1.d
    var_1d0.d = fconvert.s(x87_r6_37)
    var_1b0_1.o = var_1d0.d
    var_1d0.o = fconvert.s(x87_r7_73 * fconvert.t(var_200_1))
    
    if (i_2 s> 0)
        int32_t i_1 = i_2
        int32_t i
        
        do
            float xmm3_2 = var_1e0_1 f+ xmm0_23
            float xmm4_2 = var_1b0_1 f+ xmm1_10
            float xmm5_2 = var_1d0.d f+ xmm6_1
            
            if (j_2 s> 0)
                int32_t j_1 = j_2
                int32_t j
                
                do
                    float xmm1_14 =
                        xmm3_2 * fconvert.s(fconvert.t(fconvert.s(x87_r6_12 / x87_r6_12)))
                        + xmm4_2 * var_244_6 + xmm5_2 * var_244_8
                    float xmm1_15[0x4] = _mm_rcp_ss(xmm1_14, xmm1_14)
                    var_200_1.o = xmm1_15
                    float xmm0_32 =
                        (xmm3_2 * var_218_2 + xmm4_2 * var_210_2 + xmm5_2 * var_20c_2) f* xmm1_15
                    float xmm1_20 =
                        (xmm3_2 * var_230_2 + xmm4_2 * var_234_2 + xmm5_2 * var_244_2) * var_200_1
                    int32_t edi_4 = int.d(
                        __minss_xmmss_memss(__maxss_xmmss_memss(xmm0_32, 0), xmm0_21) * var_1a0)
                    int32_t edx_17 = int.d(
                        __minss_xmmss_memss(__maxss_xmmss_memss(xmm1_20, 0), xmm0_22) * var_1a0)
                    float xmm0_35 = __minss_xmmss_memss(_mm_max_ss(xmm0_32 + var_120_1, 0), xmm0_21)
                    int32_t edx_19 = (edx_17 s>> 7) * var_208.d
                    float xmm1_23 = __minss_xmmss_memss(_mm_max_ss(xmm1_20 + var_120_1, 0), xmm0_22)
                    var_220_1.d = int.d(xmm0_35)
                    int32_t xmm1_24[0x4] = zx.o(ecx_17 << 8) | zx.o(eax_24)
                    int32_t eax_37 = var_220_1.d * 4
                    var_190.d = _mm_adds_epu8(
                        _mm_packus_epi16(
                            _mm_srli_epi16(
                                _mm_mullo_epi16(
                                    _mm_unpacklo_epi8(zx.o(*(edx_19 + (edi_4 s>> 7 << 2) + eax_2)), 
                                        0), 
                                    xmm0_19), 
                                8), 
                            zx.o(0)), 
                        xmm1_24)
                    int32_t xmm6_28[0x4] = _mm_packus_epi16(
                        _mm_srli_epi16(
                            _mm_mullo_epi16(_mm_unpacklo_epi8(zx.o(*(edx_19 + eax_37 + eax_2)), 0), 
                                xmm0_19), 
                            8), 
                        zx.o(0))
                    int32_t eax_38 = *(int.d(xmm1_23) * var_208.d + eax_37 + eax_2)
                    int32_t xmm6_29 = _mm_adds_epu8(xmm6_28, xmm1_24)
                    int32_t xmm6_35 = _mm_adds_epu8(
                        _mm_packus_epi16(
                            _mm_srli_epi16(
                                _mm_mullo_epi16(_mm_unpacklo_epi8(zx.o(eax_38), 0), xmm0_19), 8), 
                            zx.o(0)), 
                        xmm1_24)
                    int32_t xmm0_38[0x4] = _mm_unpacklo_epi8(zx.o(var_190.d), 0)
                    xmm3_2 = xmm3_2 + var_244_16
                    xmm4_2 = xmm4_2 + var_234_3
                    xmm5_2 = xmm5_2 + var_230_3
                    uint128_t xmm6_36 = zx.o(sx.d(edi_4.w & 0x7f))
                    var_200_1.o = _mm_shuffle_epi32(_mm_unpacklo_epi16(xmm6_36, xmm6_36), 0)
                    int32_t xmm0_39[0x4] = _mm_adds_epi16(xmm0_38, 
                        _mm_srai_epi16(
                            __pmullw_xmmdq_memdq(
                                _mm_subs_epi16(_mm_unpacklo_epi8(zx.o(xmm6_29), 0), xmm0_38), 
                                var_200_1.o), 
                            7))
                    var_190.o = xmm0_39
                    int32_t* eax_40 = var_224_1
                    int32_t xmm0_41[0x4] = _mm_unpacklo_epi8(zx.o(xmm6_35), 0)
                    int32_t xmm1_26[0x4] = _mm_unpacklo_epi8(zx.o(xmm6_35), 0)
                    uint128_t xmm0_45 = zx.o(sx.d(edx_17.w & 0x7f))
                    *eax_40 = _mm_packus_epi16(
                        _mm_adds_epi16(xmm0_39, 
                            _mm_srai_epi16(
                                _mm_mullo_epi16(
                                    __psubsw_xmmdq_memdq(
                                        _mm_adds_epi16(xmm1_26, 
                                            _mm_srai_epi16(
                                                __pmullw_xmmdq_memdq(
                                                    _mm_subs_epi16(xmm0_41, xmm1_26), var_200_1.o), 
                                                7)), 
                                        var_190.o), 
                                    _mm_shuffle_epi32(_mm_unpacklo_epi16(xmm0_45, xmm0_45), 0)), 
                                7)), 
                        zx.o(0))
                    j = j_1
                    j_1 -= 1
                    var_224_1 = &eax_40[1]
                while (j != 1)
                xmm6_1 = var_140_1
                xmm1_10 = var_160_1
                xmm0_23 = var_170_1
                result = result_1
                j_2 = j_3
            
            var_224_1 += result
            i = i_1
            i_1 -= 1
            xmm0_23 = xmm0_23 f+ fconvert.s(fconvert.t(var_1ac_1))
            xmm1_10 = xmm1_10 f+ fconvert.s(fconvert.t(var_1dc_1))
            xmm6_1 = xmm6_1 f+ fconvert.s(fconvert.t(var_1fc_1))
            var_170_1 = xmm0_23
            var_160_1 = xmm1_10
            var_140_1 = xmm6_1
        while (i != 1)

return result
