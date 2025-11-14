// 函数: sub_4548f0
// 地址: 0x4548f0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

float var_1e8 = fconvert.s(fconvert.t(*arg6))
float var_1b4 = fconvert.s(fconvert.t(arg6[1]))
float var_1ec = fconvert.s(fconvert.t(*arg8))
float var_1e4 = fconvert.s(fconvert.t(arg8[1]))
float var_1f0 = fconvert.s(fconvert.t(*arg2))
float var_1f4 = fconvert.s(fconvert.t(arg2[1]))
float var_200 = fconvert.s(fconvert.t(*arg10))
float var_1fc = fconvert.s(fconvert.t(arg10[1]))
float var_1b8 = fconvert.s(fconvert.t(*arg7))
float var_1d4 = fconvert.s(fconvert.t(arg7[1]))
float var_174 = fconvert.s(fconvert.t(*arg9))
float var_1d0 = fconvert.s(fconvert.t(arg9[1]))
float var_1cc = fconvert.s(fconvert.t(*arg3))
float var_1f8 = fconvert.s(fconvert.t(arg3[1]))
long double x87_r7_14 = fconvert.t(var_1e4)
long double x87_r5 = fconvert.t(var_1f4)
long double x87_r4_2 = fconvert.t(var_1f0)
long double x87_r2 = fconvert.t(var_1ec)
double var_1e0 = fconvert.d(x87_r2)
long double x87_r2_5 = fconvert.t(var_1b4)
long double x87_r1_5 = fconvert.t(var_1e8)
long double x87_r2_15 = fconvert.t(var_1fc)
long double x87_r2_17 = fconvert.t(var_200)
long double x87_r5_2 =
    fconvert.t(fconvert.s(fconvert.t(var_1e0) - fconvert.t(fconvert.d(x87_r1_5))))
long double x87_r2_21 =
    fconvert.t(fconvert.s(x87_r7_14 * fconvert.t(var_1e8) - x87_r2 * fconvert.t(var_1b4)))
double var_1c0
var_1c0.d = fconvert.s(x87_r5_2 * x87_r5
    + fconvert.t(fconvert.s(fconvert.t(fconvert.d(x87_r2_5)) - x87_r7_14)) * x87_r4_2 + x87_r2_21)
long double x87_r2_23 = fconvert.t(var_1c0.d)
long double x87_r1_13 = fconvert.t(9.9999997473787516e-05)
x87_r1_13 - x87_r2_23
float* result
result.w = (x87_r1_13 < x87_r2_23 ? 1 : 0) << 8
    | (is_unordered.t(x87_r1_13, x87_r2_23) ? 1 : 0) << 0xa
    | (x87_r1_13 == x87_r2_23 ? 1 : 0) << 0xe | 0x800

if ((result:1.b & 0x41) == 0)
    return result

var_1c0.d = fconvert.s(x87_r4_2 * fconvert.t(fconvert.s(x87_r7_14 - x87_r2_15))
    + x87_r5 * fconvert.t(fconvert.s(x87_r2_17 - fconvert.t(var_1e0)))
    + fconvert.t(fconvert.s(x87_r2 * x87_r2_15 - x87_r7_14 * x87_r2_17)))
long double x87_r2_25 = fconvert.t(var_1c0.d)
x87_r2_25 - x87_r1_13
result.w = (x87_r2_25 < x87_r1_13 ? 1 : 0) << 8
    | (is_unordered.t(x87_r2_25, x87_r1_13) ? 1 : 0) << 0xa
    | (x87_r2_25 == x87_r1_13 ? 1 : 0) << 0xe | 0x1800
bool p = unimplemented  {test ah, 0x5}

if (p)
    long double x87_r3_6 = float.t(1)
    var_1c0.d = fconvert.s(x87_r3_6 / x87_r3_6)
    long double x87_r3_7 = fconvert.t(var_1c0.d)
    double var_190
    var_190.d = fconvert.s(fconvert.t(fconvert.s(x87_r7_14 - x87_r5)) * x87_r3_7)
    var_190:4.d = fconvert.s(fconvert.t(fconvert.s(x87_r4_2 - x87_r2)) * x87_r3_7)
    float var_1a0_1 =
        fconvert.s(fconvert.t(fconvert.s(fconvert.t(fconvert.d(x87_r5)) - x87_r2_5)) * x87_r3_7)
    float var_19c_1 =
        fconvert.s(fconvert.t(fconvert.s(x87_r1_5 - fconvert.t(fconvert.d(x87_r4_2)))) * x87_r3_7)
    float var_1b0_1 = fconvert.s(x87_r1_13 * x87_r3_7)
    float var_1ac_1 = fconvert.s(x87_r5_2 * x87_r3_7)
    int32_t eax_3 = (*(*arg11 + 8))(0, 0)
    var_1c0.d = (*(*arg11 + 0x1c))()
    double var_1c8_1
    var_1c8_1.d = (*(*arg11 + 0x10))() - 1
    long double x87_r7_23 = fconvert.t(var_1e8)
    long double x87_r6_12 = fconvert.t(var_1ec)
    x87_r6_12 - x87_r7_23
    var_1e0.d = (*(*arg11 + 0x14))() - 1
    int32_t eax_11
    eax_11.w = (x87_r6_12 < x87_r7_23 ? 1 : 0) << 8
        | (is_unordered.t(x87_r6_12, x87_r7_23) ? 1 : 0) << 0xa
        | (x87_r6_12 == x87_r7_23 ? 1 : 0) << 0xe | 0x3000
    float var_1ec_1
    long double x87_r6_13
    long double x87_r7_24
    
    if ((eax_11:1.b & 0x41) != 0)
        var_1ec_1 = fconvert.s(x87_r6_12)
        x87_r6_13 = x87_r7_23
        x87_r7_24 = x87_r6_12
    else
        x87_r6_13 = x87_r7_23
        x87_r7_24 = x87_r6_12
        var_1ec_1 = fconvert.s(x87_r6_13)
    
    long double x87_r5_4 = fconvert.t(var_1f0)
    long double x87_r4_14 = fconvert.t(var_200)
    x87_r4_14 - x87_r5_4
    eax_11.w = (x87_r4_14 < x87_r5_4 ? 1 : 0) << 8
        | (is_unordered.t(x87_r4_14, x87_r5_4) ? 1 : 0) << 0xa
        | (x87_r4_14 == x87_r5_4 ? 1 : 0) << 0xe | 0x2000
    float var_200_1
    long double x87_r4_15
    long double x87_r5_5
    
    if ((eax_11:1.b & 0x41) != 0)
        var_200_1 = fconvert.s(x87_r4_14)
        x87_r4_15 = x87_r5_4
        x87_r5_5 = x87_r4_14
    else
        x87_r4_15 = x87_r5_4
        x87_r5_5 = x87_r4_14
        var_200_1 = fconvert.s(x87_r4_15)
    
    long double x87_r3_20 = fconvert.t(var_1ec_1)
    long double x87_r2_27 = fconvert.t(var_200_1)
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
    int32_t var_1ec_2 = sub_70c710(fconvert.t(fconvert.s(x87_r3_22)))
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
    
    long double x87_r7_28 = fconvert.t(fconvert.s(float.t(arg5[2] + esi_1)))
    long double x87_r6_16 = fconvert.t(fconvert.s(x87_r7_26))
    x87_r6_16 - x87_r7_28
    eax_13.w = (x87_r6_16 < x87_r7_28 ? 1 : 0) << 8
        | (is_unordered.t(x87_r6_16, x87_r7_28) ? 1 : 0) << 0xa
        | (x87_r6_16 == x87_r7_28 ? 1 : 0) << 0xe | 0x3000
    
    if ((eax_13:1.b & 0x41) == 0)
        x87_r7_28 = x87_r6_16
    
    long double x87_r7_30 = fconvert.t(var_1b4)
    long double x87_r6_17 = fconvert.t(var_1e4)
    int32_t esi_2 = sub_70c710(fconvert.t(fconvert.s(x87_r7_28)))
    x87_r6_17 - x87_r7_30
    int32_t eax_14
    eax_14.w = (x87_r6_17 < x87_r7_30 ? 1 : 0) << 8
        | (is_unordered.t(x87_r6_17, x87_r7_30) ? 1 : 0) << 0xa
        | (x87_r6_17 == x87_r7_30 ? 1 : 0) << 0xe | 0x3000
    float var_1e4_1
    long double x87_r6_18
    long double x87_r7_31
    
    if ((eax_14:1.b & 0x41) != 0)
        var_1e4_1 = fconvert.s(x87_r6_17)
        x87_r6_18 = x87_r7_30
        x87_r7_31 = x87_r6_17
    else
        x87_r6_18 = x87_r7_30
        x87_r7_31 = x87_r6_17
        var_1e4_1 = fconvert.s(x87_r6_18)
    
    long double x87_r5_7 = fconvert.t(var_1f4)
    long double x87_r4_17 = fconvert.t(var_1fc)
    x87_r4_17 - x87_r5_7
    eax_14.w = (x87_r4_17 < x87_r5_7 ? 1 : 0) << 8
        | (is_unordered.t(x87_r4_17, x87_r5_7) ? 1 : 0) << 0xa
        | (x87_r4_17 == x87_r5_7 ? 1 : 0) << 0xe | 0x2000
    float var_1fc_1
    long double x87_r4_18
    long double x87_r5_8
    
    if ((eax_14:1.b & 0x41) != 0)
        var_1fc_1 = fconvert.s(x87_r4_17)
        x87_r4_18 = x87_r5_7
        x87_r5_8 = x87_r4_17
    else
        x87_r4_18 = x87_r5_7
        x87_r5_8 = x87_r4_17
        var_1fc_1 = fconvert.s(x87_r4_18)
    
    long double x87_r3_24 = fconvert.t(var_1e4_1)
    long double x87_r2_29 = fconvert.t(var_1fc_1)
    x87_r2_29 - x87_r3_24
    eax_14.w = (x87_r2_29 < x87_r3_24 ? 1 : 0) << 8
        | (is_unordered.t(x87_r2_29, x87_r3_24) ? 1 : 0) << 0xa
        | (x87_r2_29 == x87_r3_24 ? 1 : 0) << 0xe | 0x1000
    
    if ((eax_14:1.b & 0x41) != 0)
        x87_r4_18 = x87_r2_29
    else
        x87_r3_24 = x87_r2_29
    
    int32_t ecx_5 = arg5[1]
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
    int32_t var_200_7 = sub_70c710(fconvert.t(fconvert.s(x87_r3_26)))
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
    
    long double x87_r7_35 = fconvert.t(fconvert.s(float.t(arg5[3] + ecx_5)))
    long double x87_r6_21 = fconvert.t(fconvert.s(x87_r7_33))
    x87_r6_21 - x87_r7_35
    int32_t eax_18
    eax_18.w = (x87_r6_21 < x87_r7_35 ? 1 : 0) << 8
        | (is_unordered.t(x87_r6_21, x87_r7_35) ? 1 : 0) << 0xa
        | (x87_r6_21 == x87_r7_35 ? 1 : 0) << 0xe | 0x3000
    
    if ((eax_18:1.b & 0x41) == 0)
        x87_r7_35 = x87_r6_21
    
    int32_t j_3 = esi_2 - var_1ec_2
    int32_t eax_19 = sub_70c710(fconvert.t(fconvert.s(x87_r7_35)))
    long double x87_r7_37 = fconvert.t(var_1a0_1)
    long double x87_r5_10 = fconvert.t(var_190.d)
    long double x87_r4_22 = fconvert.t(var_1b0_1)
    char edi_1 = (*arg12).b
    int32_t i_2 = eax_19 - var_200_7
    float var_1f8_3 = fconvert.s(fconvert.t(var_190:4.d))
    float var_170
    var_170.o = zx.o(0)
    float var_140_1 = (data_7581c0).d
    int32_t xmm0_12 = (data_7581b0).d
    int32_t edx_14 = arg12[3]
    int128_t var_150_1 = zx.o(0)
    float var_160
    var_160.o = _mm_unpacklo_epi8(
        zx.o(((arg13[3] << 8 | zx.d((*arg13).b)) << 8 | zx.d((arg13[1]).b)) << 8)
            | zx.o((arg13[2]).b), 
        0)
    var_1c8_1.d = fconvert.s(float.t(var_1c8_1.d))
    var_1e0.d = fconvert.s(float.t(var_1e0.d))
    uint128_t xmm0_15 =
        zx.o(((edx_14 << 8 | zx.d(edi_1)) << 8 | zx.d((arg12[1]).b)) << 8) | zx.o((arg12[2]).b)
    int32_t xmm0_16 = var_1c8_1.d
    int32_t xmm0_17 = var_1e0.d
    void* var_1e8_1 = (*(*arg4 + 8))(var_1ec_2, var_200_7)
    int32_t j_2 = j_3
    var_1e0.d = fconvert.s(float.t(var_200_7))
    result = (*(*arg4 + 0x1c))() - (j_2 << 2)
    long double x87_r7_48 = fconvert.t(var_1e0.d)
    float* result_1 = result
    var_1e0.d = fconvert.s(x87_r7_48 * fconvert.t(var_190:4.d) + fconvert.t(fconvert.s(
        fconvert.t(fconvert.s(x87_r5 * x87_r2 - x87_r4_2 * x87_r7_14)) * x87_r3_7)))
    float xmm1_3 = var_1e0.d
    float var_130_1 = xmm1_3
    var_1c8_1.d = fconvert.s(x87_r7_48 * fconvert.t(var_19c_1) + fconvert.t(fconvert.s(
        fconvert.t(fconvert.s(x87_r2_5 * x87_r4_2 - x87_r1_5 * x87_r5)) * x87_r3_7)))
    float xmm3_1 = var_1c8_1.d
    float var_110_1 = xmm3_1
    float xmm7_1 =
        fconvert.s(x87_r7_48 * fconvert.t(var_1ac_1) + fconvert.t(fconvert.s(x87_r3_7 * x87_r2_21)))
    float var_f0_1 = xmm7_1
    var_1e0.d = fconvert.s(float.t(var_1ec_2))
    long double x87_r7_52 = fconvert.t(var_1e0.d)
    var_1e0.d = fconvert.s(x87_r7_52 * fconvert.t(var_190.d))
    var_1c8_1.d = fconvert.s(x87_r7_52 * fconvert.t(var_1a0_1))
    long double x87_r7_53 = x87_r7_52 * fconvert.t(var_1b0_1)
    var_1b0_1.o = var_1e0.d
    var_1a0_1.o = var_1c8_1.d
    var_190.o = fconvert.s(x87_r7_53)
    
    if (i_2 s> 0)
        int32_t xmm6[0x4] = var_160.o
        int32_t i_1 = i_2
        int32_t i
        
        do
            float xmm4_2 = var_1b0_1 + xmm1_3
            float xmm2_2 = var_1a0_1 + xmm3_1
            float xmm3_3 = var_190.d + xmm7_1
            float xmm1_7 = xmm4_2 * var_1b8 + xmm2_2 * var_174 + xmm3_3 * var_1cc
            float xmm4_5 = xmm4_2 * var_1d4 + xmm2_2 * var_1d0 + xmm3_3 * var_1f8
            
            if (j_2 s> 0)
                int32_t j_1 = j_2
                int32_t j
                
                do
                    int32_t edi_6 =
                        int.d(__minss_xmmss_memss(_mm_max_ss(xmm1_7, 0), xmm0_16) f* xmm0_12)
                    int32_t edx_25 =
                        int.d(__minss_xmmss_memss(_mm_max_ss(xmm4_5, 0), xmm0_17) f* xmm0_12)
                    int32_t edx_27 = (edx_25 s>> 7) * var_1c0.d
                    var_1e0.d =
                        int.d(__minss_xmmss_memss(_mm_max_ss(xmm1_7 + var_140_1, 0), xmm0_16))
                    int32_t eax_37 = *(edx_27 + (edi_6 s>> 7 << 2) + eax_3)
                    int32_t ecx_10 =
                        int.d(__minss_xmmss_memss(_mm_max_ss(xmm4_5 + var_140_1, 0), xmm0_17))
                        * var_1c0.d
                    int32_t xmm3_26 = _mm_adds_epu8(
                        _mm_packus_epi16(
                            _mm_srli_epi16(
                                _mm_mullo_epi16(_mm_unpacklo_epi8(zx.o(eax_37), 0), xmm6), 8), 
                            zx.o(0)), 
                        xmm0_15)
                    int32_t eax_40 = var_1e0.d * 4
                    int32_t xmm3_32 = _mm_adds_epu8(
                        _mm_packus_epi16(
                            _mm_srli_epi16(
                                _mm_mullo_epi16(
                                    _mm_unpacklo_epi8(zx.o(*(edx_27 + eax_40 + eax_3)), 0), xmm6), 
                                8), 
                            zx.o(0)), 
                        xmm0_15)
                    int32_t xmm3_38 = _mm_adds_epu8(
                        _mm_packus_epi16(
                            _mm_srli_epi16(
                                _mm_mullo_epi16(
                                    _mm_unpacklo_epi8(zx.o(*(ecx_10 + eax_40 + eax_3)), 0), xmm6), 
                                8), 
                            zx.o(0)), 
                        xmm0_15)
                    int32_t xmm2_6[0x4] = _mm_unpacklo_epi8(zx.o(xmm3_26), 0)
                    uint128_t xmm5_1 = zx.o(sx.d(edi_6.w & 0x7f))
                    uint32_t xmm5_3[0x4] = _mm_shuffle_epi32(_mm_unpacklo_epi16(xmm5_1, xmm5_1), 0)
                    int32_t xmm6_4[0x4] = _mm_mullo_epi16(
                        _mm_subs_epi16(_mm_unpacklo_epi8(zx.o(xmm3_32), 0), xmm2_6), xmm5_3)
                    int32_t xmm3_40[0x4] = _mm_unpacklo_epi8(zx.o(xmm3_38), 0)
                    int16_t xmm6_5[0x8] = _mm_srai_epi16(xmm6_4, 7)
                    int32_t xmm7_7[0x4] = _mm_unpacklo_epi8(zx.o(xmm3_38), 0)
                    int32_t xmm2_7[0x4] = _mm_adds_epi16(xmm2_6, xmm6_5)
                    int32_t* eax_43 = var_1e8_1
                    xmm1_7 = xmm1_7 + fconvert.s(fconvert.t(fconvert.s(
                        x87_r7_37 * fconvert.t(var_174) + x87_r5_10 * fconvert.t(var_1b8)
                        + x87_r4_22 * fconvert.t(var_1cc))))
                    xmm4_5 = xmm4_5 + fconvert.s(fconvert.t(fconvert.s(
                        x87_r7_37 * fconvert.t(var_1d0) + x87_r5_10 * fconvert.t(var_1d4)
                        + x87_r4_22 * fconvert.t(var_1f8))))
                    uint128_t xmm2_8 = zx.o(sx.d(edx_25.w & 0x7f))
                    xmm6 = var_160.o
                    *eax_43 = _mm_packus_epi16(
                        _mm_adds_epi16(xmm2_7, 
                            _mm_srai_epi16(
                                _mm_mullo_epi16(
                                    _mm_subs_epi16(
                                        _mm_adds_epi16(xmm3_40, 
                                            _mm_srai_epi16(
                                                __pmullw_xmmdq_memdq(
                                                    _mm_subs_epi16(xmm7_7, xmm3_40), xmm5_3), 
                                                7)), 
                                        xmm2_7), 
                                    _mm_shuffle_epi32(_mm_unpacklo_epi16(xmm2_8, xmm2_8), 0)), 
                                7)), 
                        zx.o(0))
                    j = j_1
                    j_1 -= 1
                    var_1e8_1 = &eax_43[1]
                while (j != 1)
                result = result_1
                j_2 = j_3
            
            var_1e8_1 += result
            i = i_1
            i_1 -= 1
            xmm1_3 = var_130_1 + var_1f8_3
            xmm3_1 = var_110_1 + fconvert.s(fconvert.t(var_19c_1))
            xmm7_1 = var_f0_1 + fconvert.s(fconvert.t(var_1ac_1))
            var_130_1 = xmm1_3
            var_110_1 = xmm3_1
            var_f0_1 = xmm7_1
        while (i != 1)

return result
