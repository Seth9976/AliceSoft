// 函数: sub_48cd50
// 地址: 0x48cd50
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

float var_1c4 = fconvert.s(fconvert.t(*arg6))
float var_1c8 = fconvert.s(fconvert.t(arg6[1]))
float var_1ec = fconvert.s(fconvert.t(*arg8))
float var_1f0 = fconvert.s(fconvert.t(arg8[1]))
float var_1d4 = fconvert.s(fconvert.t(*arg10))
float var_1cc = fconvert.s(fconvert.t(arg10[1]))
float var_1fc = fconvert.s(fconvert.t(*arg11))
float var_200 = fconvert.s(fconvert.t(arg11[1]))
float var_1d0 = fconvert.s(fconvert.t(*arg7))
float var_1f4 = fconvert.s(fconvert.t(arg7[1]))
float var_1e8 = fconvert.s(fconvert.t(*arg9))
float var_1f8 = fconvert.s(fconvert.t(arg9[1]))
float var_1e4 = fconvert.s(fconvert.t(*arg3))
float var_204 = fconvert.s(fconvert.t(arg3[1]))
long double x87_r7_14 = fconvert.t(var_1f0)
long double x87_r5 = fconvert.t(var_1cc)
long double x87_r4_2 = fconvert.t(var_1d4)
long double x87_r2 = fconvert.t(var_1ec)
double var_188 = fconvert.d(x87_r2)
long double x87_r2_5 = fconvert.t(var_1c8)
long double x87_r1_5 = fconvert.t(var_1c4)
long double x87_r2_15 = fconvert.t(var_200)
long double x87_r2_17 = fconvert.t(var_1fc)
long double x87_r5_2 =
    fconvert.t(fconvert.s(fconvert.t(var_188) - fconvert.t(fconvert.d(x87_r1_5))))
long double x87_r2_21 =
    fconvert.t(fconvert.s(x87_r7_14 * fconvert.t(var_1c4) - x87_r2 * fconvert.t(var_1c8)))
double var_1a0
var_1a0.d = fconvert.s(x87_r5_2 * x87_r5
    + fconvert.t(fconvert.s(fconvert.t(fconvert.d(x87_r2_5)) - x87_r7_14)) * x87_r4_2 + x87_r2_21)
long double x87_r2_23 = fconvert.t(var_1a0.d)
long double x87_r1_13 = fconvert.t(9.9999997473787516e-05)
x87_r1_13 - x87_r2_23
float* result
result.w = (x87_r1_13 < x87_r2_23 ? 1 : 0) << 8
    | (is_unordered.t(x87_r1_13, x87_r2_23) ? 1 : 0) << 0xa
    | (x87_r1_13 == x87_r2_23 ? 1 : 0) << 0xe | 0x800

if ((result:1.b & 0x41) == 0)
    return result

var_1a0.d = fconvert.s(x87_r4_2 * fconvert.t(fconvert.s(x87_r7_14 - x87_r2_15))
    + x87_r5 * fconvert.t(fconvert.s(x87_r2_17 - fconvert.t(var_188)))
    + fconvert.t(fconvert.s(x87_r2 * x87_r2_15 - x87_r7_14 * x87_r2_17)))
long double x87_r2_25 = fconvert.t(var_1a0.d)
x87_r2_25 - x87_r1_13
result.w = (x87_r2_25 < x87_r1_13 ? 1 : 0) << 8
    | (is_unordered.t(x87_r2_25, x87_r1_13) ? 1 : 0) << 0xa
    | (x87_r2_25 == x87_r1_13 ? 1 : 0) << 0xe | 0x1800
bool p = unimplemented  {test ah, 0x5}

if (p)
    long double x87_r3_6 = float.t(1)
    var_1a0.d = fconvert.s(x87_r3_6 / x87_r3_6)
    long double x87_r3_7 = fconvert.t(var_1a0.d)
    float var_180_1 = fconvert.s(fconvert.t(fconvert.s(x87_r7_14 - x87_r5)) * x87_r3_7)
    float var_17c_1 = fconvert.s(fconvert.t(fconvert.s(x87_r4_2 - x87_r2)) * x87_r3_7)
    float var_1b0_1 =
        fconvert.s(fconvert.t(fconvert.s(fconvert.t(fconvert.d(x87_r5)) - x87_r2_5)) * x87_r3_7)
    float var_1ac_1 =
        fconvert.s(fconvert.t(fconvert.s(x87_r1_5 - fconvert.t(fconvert.d(x87_r4_2)))) * x87_r3_7)
    float var_1c0_1 = fconvert.s(x87_r1_13 * x87_r3_7)
    float var_1bc_1 = fconvert.s(x87_r5_2 * x87_r3_7)
    var_188.d = (*(*arg2 + 8))(0, 0)
    double var_190_1
    var_190_1.d = (*(*arg2 + 0x1c))()
    var_1a0.d = (*(*arg2 + 0x10))() - 1
    double var_1e0
    var_1e0.d = (*(*arg2 + 0x14))() - 1
    float var_1d0_2 = fconvert.s(fconvert.t(fconvert.s(fconvert.t(var_1d0) / fconvert.t(arg6[3]))))
    float var_1e8_2 = fconvert.s(fconvert.t(fconvert.s(fconvert.t(var_1e8) / fconvert.t(arg8[3]))))
    float var_1e4_2 = fconvert.s(fconvert.t(fconvert.s(fconvert.t(var_1e4) / fconvert.t(arg10[3]))))
    float var_1f4_2 = fconvert.s(fconvert.t(fconvert.s(fconvert.t(var_1f4) / fconvert.t(arg6[3]))))
    float var_1f8_2 = fconvert.s(fconvert.t(fconvert.s(fconvert.t(var_1f8) / fconvert.t(arg8[3]))))
    float var_204_2 = fconvert.s(fconvert.t(fconvert.s(fconvert.t(var_204) / fconvert.t(arg10[3]))))
    arg6[3]
    long double x87_r6_12 = float.t(1)
    float var_204_6 = fconvert.s(fconvert.t(fconvert.s(x87_r6_12 / fconvert.t(arg8[3]))))
    float var_204_8 = fconvert.s(fconvert.t(fconvert.s(x87_r6_12 / fconvert.t(arg10[3]))))
    long double x87_r7_46 = fconvert.t(var_1c4)
    long double x87_r6_18 = fconvert.t(var_1ec)
    x87_r6_18 - x87_r7_46
    float* eax_12
    eax_12.w = (x87_r6_18 < x87_r7_46 ? 1 : 0) << 8
        | (is_unordered.t(x87_r6_18, x87_r7_46) ? 1 : 0) << 0xa
        | (x87_r6_18 == x87_r7_46 ? 1 : 0) << 0xe | 0x3000
    float var_1ec_1
    long double x87_r6_19
    long double x87_r7_47
    
    if ((eax_12:1.b & 0x41) != 0)
        var_1ec_1 = fconvert.s(x87_r6_18)
        x87_r6_19 = x87_r7_46
        x87_r7_47 = x87_r6_18
    else
        x87_r6_19 = x87_r7_46
        x87_r7_47 = x87_r6_18
        var_1ec_1 = fconvert.s(x87_r6_19)
    
    long double x87_r5_5 = fconvert.t(var_1d4)
    long double x87_r4_14 = fconvert.t(var_1fc)
    x87_r4_14 - x87_r5_5
    eax_12.w = (x87_r4_14 < x87_r5_5 ? 1 : 0) << 8
        | (is_unordered.t(x87_r4_14, x87_r5_5) ? 1 : 0) << 0xa
        | (x87_r4_14 == x87_r5_5 ? 1 : 0) << 0xe | 0x2000
    float var_1fc_1
    long double x87_r4_15
    long double x87_r5_6
    
    if ((eax_12:1.b & 0x41) != 0)
        var_1fc_1 = fconvert.s(x87_r4_14)
        x87_r4_15 = x87_r5_5
        x87_r5_6 = x87_r4_14
    else
        x87_r4_15 = x87_r5_5
        x87_r5_6 = x87_r4_14
        var_1fc_1 = fconvert.s(x87_r4_15)
    
    long double x87_r3_20 = fconvert.t(var_1ec_1)
    long double x87_r2_27 = fconvert.t(var_1fc_1)
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
    long double x87_r6_23 = fconvert.t(var_1f0)
    int32_t edi_2 = sub_70c710(fconvert.t(fconvert.s(x87_r7_51)))
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
    
    long double x87_r5_8 = fconvert.t(var_1cc)
    long double x87_r4_17 = fconvert.t(var_200)
    x87_r4_17 - x87_r5_8
    eax_16.w = (x87_r4_17 < x87_r5_8 ? 1 : 0) << 8
        | (is_unordered.t(x87_r4_17, x87_r5_8) ? 1 : 0) << 0xa
        | (x87_r4_17 == x87_r5_8 ? 1 : 0) << 0xe | 0x2000
    float var_200_1
    long double x87_r4_18
    long double x87_r5_9
    
    if ((eax_16:1.b & 0x41) != 0)
        var_200_1 = fconvert.s(x87_r4_17)
        x87_r4_18 = x87_r5_8
        x87_r5_9 = x87_r4_17
    else
        x87_r4_18 = x87_r5_8
        x87_r5_9 = x87_r4_17
        var_200_1 = fconvert.s(x87_r4_18)
    
    long double x87_r3_24 = fconvert.t(var_1f0_1)
    long double x87_r2_29 = fconvert.t(var_200_1)
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
    
    int32_t j_2 = edi_2 - ebx_1
    int32_t eax_20 = sub_70c710(fconvert.t(fconvert.s(x87_r7_58)))
    float var_204_16 = fconvert.s(fconvert.t(var_180_1))
    float var_1f8_3 = fconvert.s(fconvert.t(var_1b0_1))
    float var_1f4_3 = fconvert.s(fconvert.t(var_1c0_1))
    float var_204_18 = fconvert.s(float.t(var_1a0.d))
    var_1e0.d = fconvert.s(float.t(var_1e0.d))
    int32_t edx_11 = *(*arg4 + 8)
    float var_170
    var_170.o = zx.o(0)
    int32_t xmm0_17[0x4] = _mm_unpacklo_epi8(
        zx.o(((arg13[3] << 8 | zx.d((*arg13).b)) << 8 | zx.d((arg13[1]).b)) << 8)
            | zx.o((arg13[2]).b), 
        0)
    int32_t xmm0_19 = var_1e0.d
    int32_t i_2 = eax_20 - esi_2
    int128_t var_150_1 = zx.o(0)
    int32_t* esi_3 = edx_11(ebx_1, esi_2)
    var_1e0.d = fconvert.s(float.t(esi_2))
    result = (*(*arg4 + 0x1c))() - (j_2 << 2)
    long double x87_r7_69 = fconvert.t(var_1e0.d)
    var_1e0.d = fconvert.s(x87_r7_69 * fconvert.t(var_17c_1) + fconvert.t(fconvert.s(
        fconvert.t(fconvert.s(x87_r5 * x87_r2 - x87_r4_2 * x87_r7_14)) * x87_r3_7)))
    int128_t xmm3_1 = var_1e0.d
    float var_160
    var_160.o = xmm3_1
    int128_t xmm6_1 = fconvert.s(x87_r7_69 * fconvert.t(var_1ac_1) + fconvert.t(fconvert.s(
        fconvert.t(fconvert.s(x87_r2_5 * x87_r4_2 - x87_r1_5 * x87_r5)) * x87_r3_7)))
    var_1a0.o = xmm6_1
    int128_t xmm7_1 =
        fconvert.s(x87_r7_69 * fconvert.t(var_1bc_1) + fconvert.t(fconvert.s(x87_r3_7 * x87_r2_21)))
    int128_t var_140_1 = xmm7_1
    var_1e0.d = fconvert.s(float.t(ebx_1))
    long double x87_r7_73 = fconvert.t(var_1e0.d)
    var_1e0.d = fconvert.s(x87_r7_73 * fconvert.t(var_180_1))
    long double x87_r7_74 = x87_r7_73 * fconvert.t(var_1c0_1)
    var_1c0_1.o = var_1e0.d
    var_1b0_1.o = fconvert.s(x87_r7_73 * fconvert.t(var_1b0_1))
    var_180_1.o = fconvert.s(x87_r7_74)
    
    if (i_2 s> 0)
        int32_t i_1 = i_2
        int32_t i
        
        do
            float xmm0_24 = var_1c0_1 f+ xmm3_1
            float xmm1_11 = var_1b0_1 f+ xmm6_1
            float xmm2_2 = var_180_1 f+ xmm7_1
            
            if (j_2 s> 0)
                int32_t xmm3_2[0x4] =
                    zx.o(((arg12[3] << 8 | zx.d((*arg12).b)) << 8 | zx.d((arg12[1]).b)) << 8)
                    | zx.o((arg12[2]).b)
                int32_t j_1 = j_2
                int32_t j
                
                do
                    float xmm6_5 =
                        xmm0_24 * fconvert.s(fconvert.t(fconvert.s(x87_r6_12 / x87_r6_12)))
                        + xmm1_11 * var_204_6 + xmm2_2 * var_204_8
                    float xmm6_6 = _mm_rcp_ss(xmm6_5, xmm6_5)
                    int32_t ecx_20 = int.d(__minss_xmmss_memss(
                        _mm_max_ss(
                            (xmm0_24 * var_1f4_2 + xmm1_11 * var_1f8_2 + xmm2_2 * var_204_2)
                                * xmm6_6, 
                            0), 
                        xmm0_19)) * var_190_1.d + var_188.d
                    float xmm7_11 = xmm0_24 * var_1d0_2 + xmm1_11 * var_1e8_2
                    xmm0_24 = xmm0_24 + var_204_16
                    xmm1_11 = xmm1_11 + var_1f8_3
                    float xmm7_15 = __minss_xmmss_memss(
                        _mm_max_ss((xmm7_11 + xmm2_2 * var_1e4_2) * xmm6_6, 0), var_204_18)
                    xmm2_2 = xmm2_2 + var_1f4_3
                    uint128_t xmm3_14 = zx.o(__paddusb_xmmdq_memdq(
                        _mm_packus_epi16(
                            _mm_srli_epi16(
                                __pmullw_xmmdq_memdq(
                                    _mm_unpacklo_epi8(zx.o(*(ecx_20 + (int.d(xmm7_15) << 2))), 0), 
                                    xmm0_17), 
                                8), 
                            zx.o(0)), 
                        xmm3_2))
                    int32_t ecx_23 = *esi_3
                    int32_t xmm3_15[0x4] = _mm_unpacklo_epi8(xmm3_14, 0)
                    int32_t xmm4_2[0x4] = _mm_unpacklo_epi8(zx.o(ecx_23), 0)
                    *esi_3 = _mm_packus_epi16(
                        _mm_adds_epi16(xmm4_2, 
                            _mm_srai_epi16(
                                _mm_mullo_epi16(_mm_subs_epi16(xmm3_15, xmm4_2), 
                                    _mm_srai_epi16(_mm_shufflelo_epi16(xmm3_15, 0xff), 1)), 
                                7)), 
                        zx.o(0))
                    esi_3 = &esi_3[1]
                    j = j_1
                    j_1 -= 1
                while (j != 1)
                xmm7_1 = var_140_1
                xmm6_1 = var_1a0.o
                xmm3_1 = var_160.o
            
            xmm3_1 = xmm3_1 f+ fconvert.s(fconvert.t(var_17c_1))
            xmm6_1 = xmm6_1 f+ fconvert.s(fconvert.t(var_1ac_1))
            xmm7_1 = xmm7_1 f+ fconvert.s(fconvert.t(var_1bc_1))
            esi_3 += result
            i = i_1
            i_1 -= 1
            var_160.o = xmm3_1
            var_1a0.o = xmm6_1
            var_140_1 = xmm7_1
        while (i != 1)

return result
