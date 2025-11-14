// 函数: sub_46a360
// 地址: 0x46a360
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

float var_194 = fconvert.s(fconvert.t(*arg7))
float var_164 = fconvert.s(fconvert.t(arg7[1]))
float var_17c = fconvert.s(fconvert.t(*arg9))
float var_198 = fconvert.s(fconvert.t(arg9[1]))
float var_178 = fconvert.s(fconvert.t(*arg2))
float var_19c = fconvert.s(fconvert.t(arg2[1]))
float var_1a4 = fconvert.s(fconvert.t(*arg11))
float var_1a0 = fconvert.s(fconvert.t(arg11[1]))
float var_128 = fconvert.s(fconvert.t(*arg8))
float var_190 = fconvert.s(fconvert.t(arg8[1]))
float var_12c = fconvert.s(fconvert.t(*arg10))
float var_174 = fconvert.s(fconvert.t(arg10[1]))
float var_168 = fconvert.s(fconvert.t(*arg3))
float var_18c = fconvert.s(fconvert.t(arg3[1]))
long double x87_r7_14 = fconvert.t(var_198)
long double x87_r5 = fconvert.t(var_19c)
long double x87_r4_2 = fconvert.t(var_178)
long double x87_r2 = fconvert.t(var_17c)
double var_118 = fconvert.d(x87_r2)
long double x87_r2_5 = fconvert.t(var_164)
long double x87_r1_5 = fconvert.t(var_194)
long double x87_r2_15 = fconvert.t(var_1a0)
long double x87_r2_17 = fconvert.t(var_1a4)
long double x87_r5_2 =
    fconvert.t(fconvert.s(fconvert.t(var_118) - fconvert.t(fconvert.d(x87_r1_5))))
long double x87_r2_21 =
    fconvert.t(fconvert.s(x87_r7_14 * fconvert.t(var_194) - x87_r2 * fconvert.t(var_164)))
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
    + x87_r5 * fconvert.t(fconvert.s(x87_r2_17 - fconvert.t(var_118)))
    + fconvert.t(fconvert.s(x87_r2 * x87_r2_15 - x87_r7_14 * x87_r2_17))))
x87_r2_25 - x87_r1_13
result.w = (x87_r2_25 < x87_r1_13 ? 1 : 0) << 8
    | (is_unordered.t(x87_r2_25, x87_r1_13) ? 1 : 0) << 0xa
    | (x87_r2_25 == x87_r1_13 ? 1 : 0) << 0xe | 0x1800
bool p = unimplemented  {test ah, 0x5}

if (p)
    long double x87_r3_6 = float.t(1)
    long double x87_r3_7 = fconvert.t(fconvert.s(x87_r3_6 / x87_r3_6))
    float var_124_1 = fconvert.s(fconvert.t(fconvert.s(x87_r7_14 - x87_r5)) * x87_r3_7)
    float var_120_1 = fconvert.s(fconvert.t(fconvert.s(x87_r4_2 - x87_r2)) * x87_r3_7)
    float var_160_1 =
        fconvert.s(fconvert.t(fconvert.s(fconvert.t(fconvert.d(x87_r5)) - x87_r2_5)) * x87_r3_7)
    float var_15c_1 =
        fconvert.s(fconvert.t(fconvert.s(x87_r1_5 - fconvert.t(fconvert.d(x87_r4_2)))) * x87_r3_7)
    float var_150_1 = fconvert.s(x87_r1_13 * x87_r3_7)
    float var_14c_1 = fconvert.s(x87_r5_2 * x87_r3_7)
    var_118.d = (*(*arg12 + 8))(0, 0)
    double var_138_1
    var_138_1.d = (*(*arg12 + 0x1c))()
    double var_170
    var_170.d = (*(*arg12 + 0x10))() - 1
    long double x87_r7_23 = fconvert.t(var_194)
    long double x87_r6_12 = fconvert.t(var_17c)
    x87_r6_12 - x87_r7_23
    double var_188
    var_188.d = (*(*arg12 + 0x14))() - 1
    int32_t eax_11
    eax_11.w = (x87_r6_12 < x87_r7_23 ? 1 : 0) << 8
        | (is_unordered.t(x87_r6_12, x87_r7_23) ? 1 : 0) << 0xa
        | (x87_r6_12 == x87_r7_23 ? 1 : 0) << 0xe | 0x3000
    float var_17c_1
    long double x87_r6_13
    long double x87_r7_24
    
    if ((eax_11:1.b & 0x41) != 0)
        var_17c_1 = fconvert.s(x87_r6_12)
        x87_r6_13 = x87_r7_23
        x87_r7_24 = x87_r6_12
    else
        x87_r6_13 = x87_r7_23
        x87_r7_24 = x87_r6_12
        var_17c_1 = fconvert.s(x87_r6_13)
    
    long double x87_r5_4 = fconvert.t(var_178)
    long double x87_r4_14 = fconvert.t(var_1a4)
    x87_r4_14 - x87_r5_4
    eax_11.w = (x87_r4_14 < x87_r5_4 ? 1 : 0) << 8
        | (is_unordered.t(x87_r4_14, x87_r5_4) ? 1 : 0) << 0xa
        | (x87_r4_14 == x87_r5_4 ? 1 : 0) << 0xe | 0x2000
    float var_1a4_1
    long double x87_r4_15
    long double x87_r5_5
    
    if ((eax_11:1.b & 0x41) != 0)
        var_1a4_1 = fconvert.s(x87_r4_14)
        x87_r4_15 = x87_r5_4
        x87_r5_5 = x87_r4_14
    else
        x87_r4_15 = x87_r5_4
        x87_r5_5 = x87_r4_14
        var_1a4_1 = fconvert.s(x87_r4_15)
    
    long double x87_r3_20 = fconvert.t(var_17c_1)
    long double x87_r2_27 = fconvert.t(var_1a4_1)
    x87_r2_27 - x87_r3_20
    eax_11.w = (x87_r2_27 < x87_r3_20 ? 1 : 0) << 8
        | (is_unordered.t(x87_r2_27, x87_r3_20) ? 1 : 0) << 0xa
        | (x87_r2_27 == x87_r3_20 ? 1 : 0) << 0xe | 0x1000
    
    if ((eax_11:1.b & 0x41) != 0)
        x87_r4_15 = x87_r2_27
    else
        x87_r3_20 = x87_r2_27
    
    int32_t ebx_2 = *arg6
    long double x87_r3_22 = fconvert.t(fconvert.s(float.t(ebx_2)))
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
    int32_t var_194_1 = sub_70c710(fconvert.t(fconvert.s(x87_r3_22)))
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
    
    long double x87_r7_28 = fconvert.t(fconvert.s(float.t(arg6[2] + ebx_2)))
    long double x87_r6_16 = fconvert.t(fconvert.s(x87_r7_26))
    x87_r6_16 - x87_r7_28
    int32_t eax_14
    eax_14.w = (x87_r6_16 < x87_r7_28 ? 1 : 0) << 8
        | (is_unordered.t(x87_r6_16, x87_r7_28) ? 1 : 0) << 0xa
        | (x87_r6_16 == x87_r7_28 ? 1 : 0) << 0xe | 0x3000
    
    if ((eax_14:1.b & 0x41) == 0)
        x87_r7_28 = x87_r6_16
    
    long double x87_r7_30 = fconvert.t(var_164)
    long double x87_r6_17 = fconvert.t(var_198)
    int32_t ebx_3 = sub_70c710(fconvert.t(fconvert.s(x87_r7_28)))
    x87_r6_17 - x87_r7_30
    int32_t eax_15
    eax_15.w = (x87_r6_17 < x87_r7_30 ? 1 : 0) << 8
        | (is_unordered.t(x87_r6_17, x87_r7_30) ? 1 : 0) << 0xa
        | (x87_r6_17 == x87_r7_30 ? 1 : 0) << 0xe | 0x3000
    float var_198_1
    long double x87_r6_18
    long double x87_r7_31
    
    if ((eax_15:1.b & 0x41) != 0)
        var_198_1 = fconvert.s(x87_r6_17)
        x87_r6_18 = x87_r7_30
        x87_r7_31 = x87_r6_17
    else
        x87_r6_18 = x87_r7_30
        x87_r7_31 = x87_r6_17
        var_198_1 = fconvert.s(x87_r6_18)
    
    long double x87_r5_7 = fconvert.t(var_19c)
    long double x87_r4_17 = fconvert.t(var_1a0)
    x87_r4_17 - x87_r5_7
    eax_15.w = (x87_r4_17 < x87_r5_7 ? 1 : 0) << 8
        | (is_unordered.t(x87_r4_17, x87_r5_7) ? 1 : 0) << 0xa
        | (x87_r4_17 == x87_r5_7 ? 1 : 0) << 0xe | 0x2000
    float var_1a0_1
    long double x87_r4_18
    long double x87_r5_8
    
    if ((eax_15:1.b & 0x41) != 0)
        var_1a0_1 = fconvert.s(x87_r4_17)
        x87_r4_18 = x87_r5_7
        x87_r5_8 = x87_r4_17
    else
        x87_r4_18 = x87_r5_7
        x87_r5_8 = x87_r4_17
        var_1a0_1 = fconvert.s(x87_r4_18)
    
    long double x87_r3_24 = fconvert.t(var_198_1)
    long double x87_r2_29 = fconvert.t(var_1a0_1)
    x87_r2_29 - x87_r3_24
    eax_15.w = (x87_r2_29 < x87_r3_24 ? 1 : 0) << 8
        | (is_unordered.t(x87_r2_29, x87_r3_24) ? 1 : 0) << 0xa
        | (x87_r2_29 == x87_r3_24 ? 1 : 0) << 0xe | 0x1000
    
    if ((eax_15:1.b & 0x41) != 0)
        x87_r4_18 = x87_r2_29
    else
        x87_r3_24 = x87_r2_29
    
    int32_t ecx_4 = arg6[1]
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
    
    long double x87_r7_35 = fconvert.t(fconvert.s(float.t(arg6[3] + ecx_4)))
    long double x87_r6_21 = fconvert.t(fconvert.s(x87_r7_33))
    x87_r6_21 - x87_r7_35
    int32_t eax_18
    eax_18.w = (x87_r6_21 < x87_r7_35 ? 1 : 0) << 8
        | (is_unordered.t(x87_r6_21, x87_r7_35) ? 1 : 0) << 0xa
        | (x87_r6_21 == x87_r7_35 ? 1 : 0) << 0xe | 0x3000
    
    if ((eax_18:1.b & 0x41) == 0)
        x87_r7_35 = x87_r6_21
    
    int32_t j_3 = ebx_3 - var_194_1
    long double x87_r7_37 = fconvert.t(var_160_1)
    long double x87_r5_10 = fconvert.t(var_124_1)
    int32_t i_2 = sub_70c710(fconvert.t(fconvert.s(x87_r7_35))) - esi_2
    long double x87_r4_22 = fconvert.t(var_150_1)
    var_170.d = fconvert.s(float.t(var_170.d))
    int128_t var_50_1 = zx.o(0)
    int32_t xmm0_11 = var_170.d
    var_188.d = fconvert.s(float.t(var_188.d))
    int32_t xmm0_12 = var_188.d
    void* esi_3 = (*(*arg5 + 8))(var_194_1, esi_2)
    int32_t j_2 = j_3
    var_188.d = fconvert.s(float.t(esi_2))
    result = (*(*arg5 + 0x1c))() - (j_2 << 2)
    long double x87_r7_48 = fconvert.t(var_188.d)
    float* result_1 = result
    var_188.d = fconvert.s(x87_r7_48 * fconvert.t(var_120_1) + fconvert.t(fconvert.s(
        fconvert.t(fconvert.s(x87_r5 * x87_r2 - x87_r4_2 * x87_r7_14)) * x87_r3_7)))
    float xmm4_1 = var_188.d
    var_170.d = fconvert.s(x87_r7_48 * fconvert.t(var_15c_1) + fconvert.t(fconvert.s(
        fconvert.t(fconvert.s(x87_r2_5 * x87_r4_2 - x87_r1_5 * x87_r5)) * x87_r3_7)))
    float xmm5_1 = var_170.d
    int128_t xmm1_3 =
        fconvert.s(x87_r7_48 * fconvert.t(var_14c_1) + fconvert.t(fconvert.s(x87_r3_7 * x87_r2_21)))
    float var_110
    var_110.o = xmm1_3
    var_188.d = fconvert.s(float.t(var_194_1))
    long double x87_r7_52 = fconvert.t(var_188.d)
    var_188.d = fconvert.s(x87_r7_52 * fconvert.t(var_124_1))
    float var_100
    var_100.o = var_188.d
    var_170.d = fconvert.s(x87_r7_52 * fconvert.t(var_160_1))
    long double x87_r7_53 = x87_r7_52 * fconvert.t(var_150_1)
    var_150_1.o = var_170.d
    var_160_1.o = fconvert.s(x87_r7_53)
    
    if (i_2 s> 0)
        int32_t i_1 = i_2
        int32_t i
        
        do
            float xmm3_2 = var_160_1 f+ xmm1_3
            float xmm0_17 = var_100 + xmm4_1
            float xmm2_2 = var_150_1 + xmm5_1
            float xmm1_7 = xmm0_17 * var_128 + xmm2_2 * var_12c + xmm3_2 * var_168
            float xmm0_20 = xmm0_17 * var_190 + xmm2_2 * var_174 + xmm3_2 * var_18c
            
            if (j_2 s> 0)
                int32_t var_168_1 = 0
                int32_t j_1 = j_2
                int32_t j
                
                do
                    int32_t edx_8
                    edx_8.b = *esi_3
                    int32_t eax_26 =
                        int.d(__minss_xmmss_memss(_mm_max_ss(xmm0_20, 0), xmm0_12)) * var_138_1.d
                        + var_118.d
                    int32_t ecx_7 = int.d(__minss_xmmss_memss(_mm_max_ss(xmm1_7, 0), xmm0_11))
                    void* ecx_8 = eax_26 + (ecx_7 << 2)
                    char ebx_8 = (((zx.d(*(eax_26 + (ecx_7 << 2))) - zx.d(edx_8.b)) * arg4) s>> 8).b
                        + edx_8.b
                    edx_8.b = *(esi_3 + 1)
                    *esi_3 = ebx_8
                    xmm0_20 = xmm0_20 + fconvert.s(fconvert.t(fconvert.s(
                        x87_r7_37 * fconvert.t(var_174) + x87_r5_10 * fconvert.t(var_190)
                        + x87_r4_22 * fconvert.t(var_18c))))
                    char eax_31 = (((zx.d(*(ecx_8 + 1)) - zx.d(edx_8.b)) * arg4) s>> 8).b + edx_8.b
                    edx_8.b = *(esi_3 + 2)
                    *(esi_3 + 1) = eax_31
                    *(esi_3 + 2) = (((zx.d(*(ecx_8 + 2)) - zx.d(edx_8.b)) * arg4) s>> 8).b + edx_8.b
                    esi_3 += 4
                    j = j_1
                    j_1 -= 1
                    xmm1_7 = xmm1_7 + fconvert.s(fconvert.t(fconvert.s(
                        x87_r7_37 * fconvert.t(var_12c) + x87_r5_10 * fconvert.t(var_128)
                        + x87_r4_22 * fconvert.t(var_168))))
                while (j != 1)
                result = result_1
                j_2 = j_3
            
            xmm1_3 = var_110 + fconvert.s(fconvert.t(var_14c_1))
            xmm4_1 = xmm4_1 + fconvert.s(fconvert.t(var_120_1))
            xmm5_1 = xmm5_1 + fconvert.s(fconvert.t(var_15c_1))
            esi_3 += result
            i = i_1
            i_1 -= 1
            var_110.o = xmm1_3
        while (i != 1)

return result
