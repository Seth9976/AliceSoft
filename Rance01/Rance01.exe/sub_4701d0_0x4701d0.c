// 函数: sub_4701d0
// 地址: 0x4701d0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

float var_24c = fconvert.s(fconvert.t(*arg2))
float var_234 = fconvert.s(fconvert.t(arg2[1]))
float var_258 = fconvert.s(fconvert.t(*arg7))
float var_274 = fconvert.s(fconvert.t(arg7[1]))
float var_288 = fconvert.s(fconvert.t(*arg9))
float var_278 = fconvert.s(fconvert.t(arg9[1]))
float var_268 = fconvert.s(fconvert.t(*arg10))
float var_284 = fconvert.s(fconvert.t(arg10[1]))
float var_1f8 = fconvert.s(fconvert.t(*arg6))
float var_26c = fconvert.s(fconvert.t(arg6[1]))
float var_1f4 = fconvert.s(fconvert.t(*arg8))
float var_250 = fconvert.s(fconvert.t(arg8[1]))
float var_254 = fconvert.s(fconvert.t(*arg3))
float var_264 = fconvert.s(fconvert.t(arg3[1]))
long double x87_r7_14 = fconvert.t(var_274)
long double x87_r5 = fconvert.t(var_278)
long double x87_r3_2 = fconvert.t(var_288)
double var_248 = fconvert.d(x87_r3_2)
long double x87_r1 = fconvert.t(var_258)
double var_1b8 = fconvert.d(x87_r1)
long double x87_r2_5 = fconvert.t(var_234)
long double x87_r1_6 = fconvert.t(var_24c)
float var_22c = fconvert.s(x87_r1_6 - fconvert.t(var_248))
long double x87_r2_15 = fconvert.t(var_284)
long double x87_r2_17 = fconvert.t(var_268)
float var_1ec = fconvert.s(fconvert.t(var_248) - x87_r2_17)
var_248.d = fconvert.s(x87_r7_14 - fconvert.t(fconvert.d(x87_r2_15)))
var_248:4.d = fconvert.s(fconvert.t(fconvert.d(x87_r2_17)) - fconvert.t(var_1b8))
float var_240 = fconvert.s(x87_r2_15 * fconvert.t(var_258) - x87_r7_14 * fconvert.t(var_268))
long double x87_r5_2 =
    fconvert.t(fconvert.s(fconvert.t(var_1b8) - fconvert.t(fconvert.d(x87_r1_6))))
long double x87_r3_8 = fconvert.t(fconvert.s(fconvert.t(fconvert.d(x87_r2_5)) - x87_r7_14))
long double x87_r2_22 = fconvert.t(fconvert.s(x87_r7_14 * fconvert.t(var_24c)
    - fconvert.t(var_258) * fconvert.t(var_234)))
long double x87_r2_24 = fconvert.t(var_248:4.d)
long double x87_r1_17 = fconvert.t(var_248.d)
long double x87_r2_26 = fconvert.t(fconvert.s(x87_r5_2 * x87_r5 + x87_r3_8 * x87_r3_2 + x87_r2_22))
long double x87_r1_20 = fconvert.t(9.9999997473787516e-05)
x87_r1_20 - x87_r2_26
float* result
result.w = (x87_r1_20 < x87_r2_26 ? 1 : 0) << 8
    | (is_unordered.t(x87_r1_20, x87_r2_26) ? 1 : 0) << 0xa
    | (x87_r1_20 == x87_r2_26 ? 1 : 0) << 0xe | 0x800

if ((result:1.b & 0x41) != 0)
    long double x87_r0_5 =
        fconvert.t(fconvert.s(x87_r3_2 * x87_r1_17 + x87_r5 * x87_r2_24 + fconvert.t(var_240)))
    x87_r0_5 - x87_r1_20
    result.w = (x87_r0_5 < x87_r1_20 ? 1 : 0) << 8
        | (is_unordered.t(x87_r0_5, x87_r1_20) ? 1 : 0) << 0xa
        | (x87_r0_5 == x87_r1_20 ? 1 : 0) << 0xe | 0x1000
    bool p_1 = unimplemented  {test ah, 0x5}
    
    if (p_1)
        long double x87_r1_21 = float.t(1)
        long double x87_r1_22 = fconvert.t(fconvert.s(x87_r1_21 / x87_r1_21))
        float var_1d0_1 = fconvert.s(fconvert.t(fconvert.s(x87_r7_14 - x87_r5)) * x87_r1_22)
        float var_1cc_1 = fconvert.s(fconvert.t(fconvert.s(x87_r3_2 - x87_r1)) * x87_r1_22)
        float var_1e0_1 = fconvert.s(fconvert.t(fconvert.s(x87_r5 - x87_r2_5)) * x87_r1_22)
        float var_1dc_1 = fconvert.s(fconvert.t(var_22c) * x87_r1_22)
        float var_230_1 = fconvert.s(x87_r3_8 * x87_r1_22)
        float var_22c_1 = fconvert.s(x87_r5_2 * x87_r1_22)
        long double x87_r4_9 = float.t(1)
        long double x87_r4_10 = fconvert.t(fconvert.s(x87_r4_9 / x87_r4_9))
        float var_210_1 = fconvert.s(fconvert.t(fconvert.s(x87_r2_15 - x87_r5)) * x87_r4_10)
        float var_20c_1 = fconvert.s(fconvert.t(var_1ec) * x87_r4_10)
        float var_220_1 = fconvert.s(x87_r1_17 * x87_r4_10)
        float var_21c_1 = fconvert.s(x87_r2_24 * x87_r4_10)
        var_248.d = (*(*arg12 + 8))(0, 0)
        var_1b8.d = (*(*arg12 + 0x1c))()
        double var_260_1
        var_260_1.d = (*(*arg12 + 0x10))() - 1
        long double x87_r7_23 = fconvert.t(var_24c)
        double var_280_1
        var_280_1.d = (*(*arg12 + 0x14))() - 1
        long double x87_r6_7 = fconvert.t(var_258)
        x87_r6_7 - x87_r7_23
        int32_t eax_11
        eax_11.w = (x87_r6_7 < x87_r7_23 ? 1 : 0) << 8
            | (is_unordered.t(x87_r6_7, x87_r7_23) ? 1 : 0) << 0xa
            | (x87_r6_7 == x87_r7_23 ? 1 : 0) << 0xe | 0x3000
        float var_270_1
        long double x87_r6_8
        long double x87_r7_24
        
        if ((eax_11:1.b & 0x41) != 0)
            var_270_1 = fconvert.s(x87_r6_7)
            x87_r6_8 = x87_r7_23
            x87_r7_24 = x87_r6_7
        else
            x87_r6_8 = x87_r7_23
            x87_r7_24 = x87_r6_7
            var_270_1 = fconvert.s(x87_r6_8)
        
        long double x87_r5_12 = fconvert.t(var_288)
        long double x87_r4_17 = fconvert.t(var_268)
        x87_r4_17 - x87_r5_12
        eax_11.w = (x87_r4_17 < x87_r5_12 ? 1 : 0) << 8
            | (is_unordered.t(x87_r4_17, x87_r5_12) ? 1 : 0) << 0xa
            | (x87_r4_17 == x87_r5_12 ? 1 : 0) << 0xe | 0x2000
        float var_288_1
        long double x87_r4_18
        long double x87_r5_13
        
        if ((eax_11:1.b & 0x41) != 0)
            var_288_1 = fconvert.s(x87_r4_17)
            x87_r4_18 = x87_r5_12
            x87_r5_13 = x87_r4_17
        else
            x87_r4_18 = x87_r5_12
            x87_r5_13 = x87_r4_17
            var_288_1 = fconvert.s(x87_r4_18)
        
        long double x87_r3_13 = fconvert.t(var_270_1)
        long double x87_r2_33 = fconvert.t(var_288_1)
        x87_r2_33 - x87_r3_13
        eax_11.w = (x87_r2_33 < x87_r3_13 ? 1 : 0) << 8
            | (is_unordered.t(x87_r2_33, x87_r3_13) ? 1 : 0) << 0xa
            | (x87_r2_33 == x87_r3_13 ? 1 : 0) << 0xe | 0x1000
        
        if ((eax_11:1.b & 0x41) != 0)
            x87_r4_18 = x87_r2_33
        else
            x87_r3_13 = x87_r2_33
        
        int32_t ebx_1 = *arg5
        long double x87_r3_15 = fconvert.t(fconvert.s(float.t(ebx_1)))
        long double x87_r2_34 = fconvert.t(fconvert.s(x87_r3_13))
        x87_r2_34 - x87_r3_15
        int32_t* eax_12
        eax_12.w = (x87_r2_34 < x87_r3_15 ? 1 : 0) << 8
            | (is_unordered.t(x87_r2_34, x87_r3_15) ? 1 : 0) << 0xa
            | (x87_r2_34 == x87_r3_15 ? 1 : 0) << 0xe | 0x1000
        bool p_2 = unimplemented  {test ah, 0x5}
        
        if (p_2)
            x87_r4_18 = x87_r2_34
        else
            x87_r3_15 = x87_r2_34
        
        x87_r6_8 - x87_r7_24
        int32_t var_268_1 = sub_70c710(fconvert.t(fconvert.s(x87_r3_15)))
        int32_t eax_13
        eax_13.w = (x87_r6_8 < x87_r7_24 ? 1 : 0) << 8
            | (is_unordered.t(x87_r6_8, x87_r7_24) ? 1 : 0) << 0xa
            | (x87_r6_8 == x87_r7_24 ? 1 : 0) << 0xe | 0x2000
        
        if ((eax_13:1.b & 0x41) != 0)
            x87_r5_13 = x87_r6_8
        
        long double x87_r7_25 = x87_r5_13
        x87_r4_18 - x87_r7_25
        eax_13.w = (x87_r4_18 < x87_r7_25 ? 1 : 0) << 8
            | (is_unordered.t(x87_r4_18, x87_r7_25) ? 1 : 0) << 0xa
            | (x87_r4_18 == x87_r7_25 ? 1 : 0) << 0xe | 0x3000
        
        if ((eax_13:1.b & 0x41) != 0)
            x87_r7_25 = x87_r4_18
        
        long double x87_r7_26 = fconvert.t(fconvert.s(x87_r7_24))
        long double x87_r6_10 = fconvert.t(fconvert.s(x87_r7_25))
        x87_r6_10 - x87_r7_26
        eax_13.w = (x87_r6_10 < x87_r7_26 ? 1 : 0) << 8
            | (is_unordered.t(x87_r6_10, x87_r7_26) ? 1 : 0) << 0xa
            | (x87_r6_10 == x87_r7_26 ? 1 : 0) << 0xe | 0x3000
        bool p_3 = unimplemented  {test ah, 0x5}
        
        if (not(p_3))
            x87_r7_26 = x87_r6_10
        
        long double x87_r7_28 = fconvert.t(fconvert.s(float.t(arg5[2] + ebx_1)))
        long double x87_r6_11 = fconvert.t(fconvert.s(x87_r7_26))
        x87_r6_11 - x87_r7_28
        eax_13.w = (x87_r6_11 < x87_r7_28 ? 1 : 0) << 8
            | (is_unordered.t(x87_r6_11, x87_r7_28) ? 1 : 0) << 0xa
            | (x87_r6_11 == x87_r7_28 ? 1 : 0) << 0xe | 0x3000
        
        if ((eax_13:1.b & 0x41) == 0)
            x87_r7_28 = x87_r6_11
        
        long double x87_r7_30 = fconvert.t(var_234)
        long double x87_r6_12 = fconvert.t(var_274)
        int32_t ebx_2 = sub_70c710(fconvert.t(fconvert.s(x87_r7_28)))
        x87_r6_12 - x87_r7_30
        int32_t eax_14
        eax_14.w = (x87_r6_12 < x87_r7_30 ? 1 : 0) << 8
            | (is_unordered.t(x87_r6_12, x87_r7_30) ? 1 : 0) << 0xa
            | (x87_r6_12 == x87_r7_30 ? 1 : 0) << 0xe | 0x3000
        float var_274_1
        long double x87_r6_13
        long double x87_r7_31
        
        if ((eax_14:1.b & 0x41) != 0)
            var_274_1 = fconvert.s(x87_r6_12)
            x87_r6_13 = x87_r7_30
            x87_r7_31 = x87_r6_12
        else
            x87_r6_13 = x87_r7_30
            x87_r7_31 = x87_r6_12
            var_274_1 = fconvert.s(x87_r6_13)
        
        long double x87_r5_15 = fconvert.t(var_278)
        long double x87_r4_20 = fconvert.t(var_284)
        x87_r4_20 - x87_r5_15
        eax_14.w = (x87_r4_20 < x87_r5_15 ? 1 : 0) << 8
            | (is_unordered.t(x87_r4_20, x87_r5_15) ? 1 : 0) << 0xa
            | (x87_r4_20 == x87_r5_15 ? 1 : 0) << 0xe | 0x2000
        float var_284_1
        long double x87_r4_21
        long double x87_r5_16
        
        if ((eax_14:1.b & 0x41) != 0)
            var_284_1 = fconvert.s(x87_r4_20)
            x87_r4_21 = x87_r5_15
            x87_r5_16 = x87_r4_20
        else
            x87_r4_21 = x87_r5_15
            x87_r5_16 = x87_r4_20
            var_284_1 = fconvert.s(x87_r4_21)
        
        long double x87_r3_17 = fconvert.t(var_274_1)
        long double x87_r2_35 = fconvert.t(var_284_1)
        x87_r2_35 - x87_r3_17
        eax_14.w = (x87_r2_35 < x87_r3_17 ? 1 : 0) << 8
            | (is_unordered.t(x87_r2_35, x87_r3_17) ? 1 : 0) << 0xa
            | (x87_r2_35 == x87_r3_17 ? 1 : 0) << 0xe | 0x1000
        
        if ((eax_14:1.b & 0x41) != 0)
            x87_r4_21 = x87_r2_35
        else
            x87_r3_17 = x87_r2_35
        
        int32_t ecx_5 = arg5[1]
        long double x87_r3_19 = fconvert.t(fconvert.s(float.t(ecx_5)))
        long double x87_r2_36 = fconvert.t(fconvert.s(x87_r3_17))
        x87_r2_36 - x87_r3_19
        int32_t* eax_15
        eax_15.w = (x87_r2_36 < x87_r3_19 ? 1 : 0) << 8
            | (is_unordered.t(x87_r2_36, x87_r3_19) ? 1 : 0) << 0xa
            | (x87_r2_36 == x87_r3_19 ? 1 : 0) << 0xe | 0x1000
        bool p_4 = unimplemented  {test ah, 0x5}
        
        if (p_4)
            x87_r4_21 = x87_r2_36
        else
            x87_r3_19 = x87_r2_36
        
        x87_r6_13 - x87_r7_31
        int32_t var_288_7 = sub_70c710(fconvert.t(fconvert.s(x87_r3_19)))
        int32_t eax_16
        eax_16.w = (x87_r6_13 < x87_r7_31 ? 1 : 0) << 8
            | (is_unordered.t(x87_r6_13, x87_r7_31) ? 1 : 0) << 0xa
            | (x87_r6_13 == x87_r7_31 ? 1 : 0) << 0xe | 0x2000
        
        if ((eax_16:1.b & 0x41) != 0)
            x87_r5_16 = x87_r6_13
        
        long double x87_r7_32 = x87_r5_16
        x87_r4_21 - x87_r7_32
        eax_16.w = (x87_r4_21 < x87_r7_32 ? 1 : 0) << 8
            | (is_unordered.t(x87_r4_21, x87_r7_32) ? 1 : 0) << 0xa
            | (x87_r4_21 == x87_r7_32 ? 1 : 0) << 0xe | 0x3000
        
        if ((eax_16:1.b & 0x41) != 0)
            x87_r7_32 = x87_r4_21
        
        long double x87_r7_33 = fconvert.t(fconvert.s(x87_r7_31))
        long double x87_r6_15 = fconvert.t(fconvert.s(x87_r7_32))
        x87_r6_15 - x87_r7_33
        eax_16.w = (x87_r6_15 < x87_r7_33 ? 1 : 0) << 8
            | (is_unordered.t(x87_r6_15, x87_r7_33) ? 1 : 0) << 0xa
            | (x87_r6_15 == x87_r7_33 ? 1 : 0) << 0xe | 0x3000
        bool p_5 = unimplemented  {test ah, 0x5}
        
        if (not(p_5))
            x87_r7_33 = x87_r6_15
        
        long double x87_r7_35 = fconvert.t(fconvert.s(float.t(arg5[3] + ecx_5)))
        long double x87_r6_16 = fconvert.t(fconvert.s(x87_r7_33))
        x87_r6_16 - x87_r7_35
        int32_t eax_18
        eax_18.w = (x87_r6_16 < x87_r7_35 ? 1 : 0) << 8
            | (is_unordered.t(x87_r6_16, x87_r7_35) ? 1 : 0) << 0xa
            | (x87_r6_16 == x87_r7_35 ? 1 : 0) << 0xe | 0x3000
        
        if ((eax_18:1.b & 0x41) == 0)
            x87_r7_35 = x87_r6_16
        
        int32_t j_3 = ebx_2 - var_268_1
        long double x87_r7_37 = fconvert.t(var_1e0_1)
        float var_28c_10 = fconvert.s(x87_r7_37)
        long double x87_r6_17 = fconvert.t(var_230_1)
        long double x87_r4_23 = fconvert.t(var_1d0_1)
        float var_170_1 = var_210_1
        float var_130_1 = var_220_1
        int32_t i_2 = sub_70c710(fconvert.t(fconvert.s(x87_r7_35))) - var_288_7
        float var_1f0
        var_1f0.o = zx.o(0)
        int128_t var_100_1 = zx.o(0)
        var_260_1.d = fconvert.s(float.t(var_260_1.d))
        int32_t edx_16 = *(*arg4 + 8)
        int32_t xmm0_18[0x4] = _mm_unpacklo_epi8(
            zx.o(((arg14[3] << 8 | zx.d((*arg14).b)) << 8 | zx.d((arg14[1]).b)) << 8)
                | zx.o((arg14[2]).b), 
            0)
        var_280_1.d = fconvert.s(float.t(var_280_1.d))
        int32_t xmm0_19 = var_260_1.d
        int32_t xmm0_20 = var_280_1.d
        char* esi_1 = edx_16(var_268_1, var_288_7)
        int32_t j_2 = j_3
        var_280_1.d = fconvert.s(float.t(var_288_7))
        long double x87_r7_48 = fconvert.t(var_280_1.d)
        result = (*(*arg4 + 0x1c))() - (j_2 << 2)
        float* result_1 = result
        var_280_1.d = fconvert.s(x87_r7_48 * fconvert.t(var_1cc_1) + fconvert.t(fconvert.s(
            fconvert.t(fconvert.s(x87_r1 * x87_r5 - x87_r3_2 * x87_r7_14)) * x87_r1_22)))
        float xmm0_21 = var_280_1.d
        float var_180_1 = xmm0_21
        var_260_1.d = fconvert.s(x87_r7_48 * fconvert.t(var_1dc_1) + fconvert.t(fconvert.s(
            fconvert.t(fconvert.s(x87_r2_5 * x87_r3_2 - x87_r1_6 * x87_r5)) * x87_r1_22)))
        float xmm2_1 = var_260_1.d
        float var_160_1 = xmm2_1
        float xmm4_1 = fconvert.s(x87_r7_48 * fconvert.t(var_22c_1)
            + fconvert.t(fconvert.s(x87_r1_22 * x87_r2_22)))
        float var_140_1 = xmm4_1
        var_280_1.d = fconvert.s(fconvert.t(var_20c_1) * x87_r7_48 + fconvert.t(fconvert.s(
            fconvert.t(fconvert.s(x87_r2_17 * x87_r5 - x87_r2_15 * x87_r3_2)) * x87_r4_10)))
        var_280_1.d = fconvert.s(fconvert.t(var_280_1.d))
        float xmm5_1 = var_280_1.d
        float var_120_1 = xmm5_1
        var_280_1.d = fconvert.s(x87_r7_48 * fconvert.t(var_21c_1)
            + fconvert.t(fconvert.s(x87_r4_10 * fconvert.t(var_240))))
        var_280_1.d = fconvert.s(fconvert.t(var_280_1.d))
        float xmm6_1 = var_280_1.d
        float var_1b0_1 = xmm6_1
        var_280_1.d = fconvert.s(float.t(var_268_1))
        long double x87_r7_53 = fconvert.t(var_280_1.d)
        var_280_1.d = fconvert.s(x87_r7_53 * fconvert.t(var_1d0_1))
        var_260_1.d = fconvert.s(x87_r7_53 * fconvert.t(var_1e0_1))
        float var_28c_17 = fconvert.s(x87_r7_53 * fconvert.t(var_230_1))
        var_230_1.o = var_280_1.d
        var_1e0_1.o = var_260_1.d
        var_280_1.d = fconvert.s(x87_r7_53 * fconvert.t(var_210_1))
        var_1d0_1.o = var_28c_17
        var_280_1.d = fconvert.s(fconvert.t(var_280_1.d))
        var_210_1.o = var_280_1.d
        var_280_1.d = fconvert.s(x87_r7_53 * fconvert.t(var_220_1))
        var_280_1.d = fconvert.s(fconvert.t(var_280_1.d))
        var_220_1.o = var_280_1.d
        
        if (i_2 s> 0)
            int32_t i_1 = i_2
            int32_t i
            
            do
                float xmm1_11 = var_1e0_1 + xmm2_1
                float xmm2_3 = var_1d0_1 + xmm4_1
                float xmm3_4 = var_230_1 + xmm0_21
                float xmm4_3 = var_210_1 + xmm5_1
                float xmm5_3 = var_220_1 + xmm6_1
                float xmm0_25 = xmm3_4 * var_1f8 + xmm1_11 * var_1f4 + xmm2_3 * var_254
                float xmm3_7 = xmm3_4 * var_26c + xmm1_11 * var_250 + xmm2_3 * var_264
                
                if (j_2 s> 0)
                    float xmm6_10 = var_28c_10
                    int32_t j_1 = j_2
                    int32_t j
                    
                    do
                        if (not(xmm1_11 f< 0) && not(xmm2_3 f< 0) && not(xmm4_3 f< 0)
                                && not(xmm5_3 f< 0))
                            int32_t edx_19 = *(
                                int.d(__minss_xmmss_memss(_mm_max_ss(xmm3_7, 0), xmm0_20))
                                * var_1b8.d + var_248.d + (
                                int.d(__minss_xmmss_memss(__maxss_xmmss_memss(xmm0_25, 0), xmm0_19))
                                << 2))
                            int32_t eax_30 = arg13[3] << 8 | zx.d((*arg13).b)
                            char ecx_18 = (arg13[2]).b
                            char edx_20 = (arg13[1]).b
                            int32_t xmm6_19[0x4] = __pmullw_xmmdq_memdq(
                                __punpcklbw_xmmdq_memdq(zx.o(edx_19), zx.o(0)), xmm0_18)
                            uint32_t edx_21
                            edx_21.b = *esi_1
                            int24_t xmm6_22 = _mm_adds_epu8(
                                __packuswb_xmmdq_memdq(_mm_srli_epi16(xmm6_19, 8), zx.o(0)), 
                                zx.o((eax_30 << 8 | zx.d(edx_20)) << 8) | zx.o(ecx_18))
                            char ebx_7 =
                                (((zx.d(xmm6_22.b) - zx.d(edx_21.b)) * arg11) s>> 8).b + edx_21.b
                            edx_21.b = esi_1[1]
                            *esi_1 = ebx_7
                            xmm6_10 = var_28c_10
                            esi_1[1] =
                                (((zx.d(xmm6_22:1.b) - zx.d(edx_21.b)) * arg11) s>> 8).b + edx_21.b
                            char ecx_24 = esi_1[2]
                            esi_1[2] =
                                (((zx.d(xmm6_22:2.b) - zx.d(ecx_24)) * arg11) s>> 8).b + ecx_24
                        
                        xmm3_7 = xmm3_7 + fconvert.s(fconvert.t(fconvert.s(
                            x87_r7_37 * fconvert.t(var_250) + x87_r4_23 * fconvert.t(var_26c)
                            + x87_r6_17 * fconvert.t(var_264))))
                        xmm0_25 = xmm0_25 + fconvert.s(fconvert.t(fconvert.s(
                            x87_r7_37 * fconvert.t(var_1f4) + x87_r4_23 * fconvert.t(var_1f8)
                            + x87_r6_17 * fconvert.t(var_254))))
                        xmm5_3 = xmm5_3 + var_130_1
                        xmm4_3 = xmm4_3 + var_170_1
                        xmm2_3 = xmm2_3 + fconvert.s(x87_r6_17)
                        esi_1 = &esi_1[4]
                        j = j_1
                        j_1 -= 1
                        xmm1_11 = xmm1_11 + xmm6_10
                    while (j != 1)
                    result = result_1
                    j_2 = j_3
                
                xmm0_21 = var_180_1 + fconvert.s(fconvert.t(var_1cc_1))
                xmm2_1 = var_160_1 + fconvert.s(fconvert.t(var_1dc_1))
                xmm4_1 = var_140_1 + fconvert.s(fconvert.t(var_22c_1))
                xmm5_1 = var_120_1 + var_20c_1
                xmm6_1 = var_1b0_1 + var_21c_1
                esi_1 += result
                i = i_1
                i_1 -= 1
                var_180_1 = xmm0_21
                var_160_1 = xmm2_1
                var_140_1 = xmm4_1
                var_120_1 = xmm5_1
                var_1b0_1 = xmm6_1
            while (i != 1)

return result
