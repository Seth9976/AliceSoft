// 函数: sub_45ab60
// 地址: 0x45ab60
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

float var_254 = fconvert.s(fconvert.t(*arg6))
float var_258 = fconvert.s(fconvert.t(arg6[1]))
float var_2d8 = fconvert.s(fconvert.t(*arg8))
float var_2d4 = fconvert.s(fconvert.t(arg8[1]))
float var_2e8 = fconvert.s(fconvert.t(*arg2))
float var_2dc = fconvert.s(fconvert.t(arg2[1]))
float var_2b4 = fconvert.s(fconvert.t(*arg10))
float var_2e4 = fconvert.s(fconvert.t(arg10[1]))
float var_274 = fconvert.s(fconvert.t(*arg7))
float var_2b8 = fconvert.s(fconvert.t(arg7[1]))
float var_214 = fconvert.s(fconvert.t(*arg9))
float var_2b0 = fconvert.s(fconvert.t(arg9[1]))
float var_2ac = fconvert.s(fconvert.t(*arg3))
float var_2e0 = fconvert.s(fconvert.t(arg3[1]))
long double x87_r7_14 = fconvert.t(var_2d4)
long double x87_r5 = fconvert.t(var_2dc)
long double x87_r3_2 = fconvert.t(var_2e8)
double var_2d0 = fconvert.d(x87_r3_2)
long double x87_r1 = fconvert.t(var_2d8)
double var_230 = fconvert.d(x87_r1)
long double x87_r2_5 = fconvert.t(var_258)
long double x87_r1_6 = fconvert.t(var_254)
float var_24c = fconvert.s(x87_r1_6 - fconvert.t(var_2d0))
long double x87_r2_15 = fconvert.t(var_2e4)
long double x87_r2_17 = fconvert.t(var_2b4)
float var_23c = fconvert.s(fconvert.t(var_2d0) - x87_r2_17)
var_2d0.d = fconvert.s(x87_r7_14 - fconvert.t(fconvert.d(x87_r2_15)))
var_2d0:4.d = fconvert.s(fconvert.t(fconvert.d(x87_r2_17)) - fconvert.t(var_230))
float var_2c8 = fconvert.s(x87_r2_15 * fconvert.t(var_2d8) - x87_r7_14 * fconvert.t(var_2b4))
long double x87_r5_2 =
    fconvert.t(fconvert.s(fconvert.t(var_230) - fconvert.t(fconvert.d(x87_r1_6))))
long double x87_r3_8 = fconvert.t(fconvert.s(fconvert.t(fconvert.d(x87_r2_5)) - x87_r7_14))
long double x87_r2_22 = fconvert.t(fconvert.s(x87_r7_14 * fconvert.t(var_254)
    - fconvert.t(var_2d8) * fconvert.t(var_258)))
double var_2a8_1
var_2a8_1.d = fconvert.s(x87_r5_2 * x87_r5 + x87_r3_8 * x87_r3_2 + x87_r2_22)
long double x87_r2_24 = fconvert.t(var_2d0:4.d)
long double x87_r1_17 = fconvert.t(var_2d0.d)
double var_2a0_1
var_2a0_1.d = fconvert.s(x87_r3_2 * x87_r1_17 + x87_r5 * x87_r2_24 + fconvert.t(var_2c8))
long double x87_r2_26 = fconvert.t(var_2a8_1.d)
long double x87_r1_20 = fconvert.t(9.9999997473787516e-05)
x87_r1_20 - x87_r2_26
float* result
result.w = (x87_r1_20 < x87_r2_26 ? 1 : 0) << 8
    | (is_unordered.t(x87_r1_20, x87_r2_26) ? 1 : 0) << 0xa
    | (x87_r1_20 == x87_r2_26 ? 1 : 0) << 0xe | 0x800

if ((result:1.b & 0x41) != 0)
    long double x87_r0_5 = fconvert.t(var_2a0_1.d)
    x87_r0_5 - x87_r1_20
    result.w = (x87_r0_5 < x87_r1_20 ? 1 : 0) << 8
        | (is_unordered.t(x87_r0_5, x87_r1_20) ? 1 : 0) << 0xa
        | (x87_r0_5 == x87_r1_20 ? 1 : 0) << 0xe | 0x1000
    bool p_1 = unimplemented  {test ah, 0x5}
    
    if (p_1)
        long double x87_r1_21 = float.t(1)
        var_2a8_1.d = fconvert.s(x87_r1_21 / x87_r1_21)
        long double x87_r1_22 = fconvert.t(var_2a8_1.d)
        float var_200_1 = fconvert.s(fconvert.t(fconvert.s(x87_r7_14 - x87_r5)) * x87_r1_22)
        float var_1fc_1 = fconvert.s(fconvert.t(fconvert.s(x87_r3_2 - x87_r1)) * x87_r1_22)
        float var_210_1 = fconvert.s(fconvert.t(fconvert.s(x87_r5 - x87_r2_5)) * x87_r1_22)
        float var_20c_1 = fconvert.s(fconvert.t(var_24c) * x87_r1_22)
        float var_250_1 = fconvert.s(x87_r3_8 * x87_r1_22)
        float var_24c_1 = fconvert.s(x87_r5_2 * x87_r1_22)
        long double x87_r4_9 = float.t(1)
        var_2a8_1.d = fconvert.s(x87_r4_9 / x87_r4_9)
        long double x87_r4_10 = fconvert.t(var_2a8_1.d)
        float var_270_1 = fconvert.s(fconvert.t(fconvert.s(x87_r2_15 - x87_r5)) * x87_r4_10)
        float var_26c_1 = fconvert.s(fconvert.t(var_23c) * x87_r4_10)
        float var_290_1 = fconvert.s(x87_r1_17 * x87_r4_10)
        float var_28c_1 = fconvert.s(x87_r2_24 * x87_r4_10)
        int32_t eax_3 = (*(*arg11 + 8))(0, 0)
        var_2a8_1.d = (*(*arg11 + 0x1c))()
        var_230.d = (*(*arg11 + 0x10))() - 1
        long double x87_r7_23 = fconvert.t(var_254)
        var_2d0.d = (*(*arg11 + 0x14))() - 1
        long double x87_r6_7 = fconvert.t(var_2d8)
        x87_r6_7 - x87_r7_23
        int32_t eax_11
        eax_11.w = (x87_r6_7 < x87_r7_23 ? 1 : 0) << 8
            | (is_unordered.t(x87_r6_7, x87_r7_23) ? 1 : 0) << 0xa
            | (x87_r6_7 == x87_r7_23 ? 1 : 0) << 0xe | 0x3000
        long double x87_r6_8
        long double x87_r7_24
        
        if ((eax_11:1.b & 0x41) != 0)
            var_2a0_1.d = fconvert.s(x87_r6_7)
            x87_r6_8 = x87_r7_23
            x87_r7_24 = x87_r6_7
        else
            x87_r6_8 = x87_r7_23
            x87_r7_24 = x87_r6_7
            var_2a0_1.d = fconvert.s(x87_r6_8)
        
        long double x87_r5_12 = fconvert.t(var_2e8)
        long double x87_r4_17 = fconvert.t(var_2b4)
        x87_r4_17 - x87_r5_12
        eax_11.w = (x87_r4_17 < x87_r5_12 ? 1 : 0) << 8
            | (is_unordered.t(x87_r4_17, x87_r5_12) ? 1 : 0) << 0xa
            | (x87_r4_17 == x87_r5_12 ? 1 : 0) << 0xe | 0x2000
        float var_2e8_1
        long double x87_r4_18
        long double x87_r5_13
        
        if ((eax_11:1.b & 0x41) != 0)
            var_2e8_1 = fconvert.s(x87_r4_17)
            x87_r4_18 = x87_r5_12
            x87_r5_13 = x87_r4_17
        else
            x87_r4_18 = x87_r5_12
            x87_r5_13 = x87_r4_17
            var_2e8_1 = fconvert.s(x87_r4_18)
        
        long double x87_r3_13 = fconvert.t(var_2a0_1.d)
        long double x87_r2_33 = fconvert.t(var_2e8_1)
        x87_r2_33 - x87_r3_13
        eax_11.w = (x87_r2_33 < x87_r3_13 ? 1 : 0) << 8
            | (is_unordered.t(x87_r2_33, x87_r3_13) ? 1 : 0) << 0xa
            | (x87_r2_33 == x87_r3_13 ? 1 : 0) << 0xe | 0x1000
        
        if ((eax_11:1.b & 0x41) != 0)
            x87_r4_18 = x87_r2_33
        else
            x87_r3_13 = x87_r2_33
        
        int32_t esi_1 = *arg5
        var_2a0_1.d = esi_1
        var_2a0_1.d = fconvert.s(float.t(var_2a0_1.d))
        long double x87_r3_15 = fconvert.t(var_2a0_1.d)
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
        int32_t var_2b4_1 = sub_70c710(fconvert.t(fconvert.s(x87_r3_15)))
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
        
        var_2a0_1.d = fconvert.s(x87_r7_25)
        long double x87_r7_26 = fconvert.t(fconvert.s(x87_r7_24))
        long double x87_r6_10 = fconvert.t(var_2a0_1.d)
        x87_r6_10 - x87_r7_26
        eax_13.w = (x87_r6_10 < x87_r7_26 ? 1 : 0) << 8
            | (is_unordered.t(x87_r6_10, x87_r7_26) ? 1 : 0) << 0xa
            | (x87_r6_10 == x87_r7_26 ? 1 : 0) << 0xe | 0x3000
        bool p_3 = unimplemented  {test ah, 0x5}
        
        if (not(p_3))
            x87_r7_26 = x87_r6_10
        
        var_2a0_1.d = arg5[2] + esi_1
        var_2a0_1.d = fconvert.s(float.t(var_2a0_1.d))
        long double x87_r7_28 = fconvert.t(var_2a0_1.d)
        long double x87_r6_11 = fconvert.t(fconvert.s(x87_r7_26))
        x87_r6_11 - x87_r7_28
        eax_13.w = (x87_r6_11 < x87_r7_28 ? 1 : 0) << 8
            | (is_unordered.t(x87_r6_11, x87_r7_28) ? 1 : 0) << 0xa
            | (x87_r6_11 == x87_r7_28 ? 1 : 0) << 0xe | 0x3000
        
        if ((eax_13:1.b & 0x41) == 0)
            x87_r7_28 = x87_r6_11
        
        long double x87_r7_30 = fconvert.t(var_258)
        long double x87_r6_12 = fconvert.t(var_2d4)
        int32_t esi_2 = sub_70c710(fconvert.t(fconvert.s(x87_r7_28)))
        x87_r6_12 - x87_r7_30
        int32_t eax_14
        eax_14.w = (x87_r6_12 < x87_r7_30 ? 1 : 0) << 8
            | (is_unordered.t(x87_r6_12, x87_r7_30) ? 1 : 0) << 0xa
            | (x87_r6_12 == x87_r7_30 ? 1 : 0) << 0xe | 0x3000
        float var_2d4_1
        long double x87_r6_13
        long double x87_r7_31
        
        if ((eax_14:1.b & 0x41) != 0)
            var_2d4_1 = fconvert.s(x87_r6_12)
            x87_r6_13 = x87_r7_30
            x87_r7_31 = x87_r6_12
        else
            x87_r6_13 = x87_r7_30
            x87_r7_31 = x87_r6_12
            var_2d4_1 = fconvert.s(x87_r6_13)
        
        long double x87_r5_15 = fconvert.t(var_2dc)
        long double x87_r4_20 = fconvert.t(var_2e4)
        x87_r4_20 - x87_r5_15
        eax_14.w = (x87_r4_20 < x87_r5_15 ? 1 : 0) << 8
            | (is_unordered.t(x87_r4_20, x87_r5_15) ? 1 : 0) << 0xa
            | (x87_r4_20 == x87_r5_15 ? 1 : 0) << 0xe | 0x2000
        float var_2e4_1
        long double x87_r4_21
        long double x87_r5_16
        
        if ((eax_14:1.b & 0x41) != 0)
            var_2e4_1 = fconvert.s(x87_r4_20)
            x87_r4_21 = x87_r5_15
            x87_r5_16 = x87_r4_20
        else
            x87_r4_21 = x87_r5_15
            x87_r5_16 = x87_r4_20
            var_2e4_1 = fconvert.s(x87_r4_21)
        
        long double x87_r3_17 = fconvert.t(var_2d4_1)
        long double x87_r2_35 = fconvert.t(var_2e4_1)
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
        int32_t var_2e8_7 = sub_70c710(fconvert.t(fconvert.s(x87_r3_19)))
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
        
        int32_t j_3 = esi_2 - var_2b4_1
        long double x87_r7_37 = fconvert.t(var_210_1)
        long double x87_r6_17 = fconvert.t(var_250_1)
        long double x87_r4_23 = fconvert.t(var_200_1)
        float var_1c0_1 = var_270_1
        float var_1a0_1 = var_290_1
        int32_t i_2 = sub_70c710(fconvert.t(fconvert.s(x87_r7_35))) - var_2e8_7
        int128_t var_110_1 = zx.o(0)
        float xmm0_17 = (data_7581c0).d
        int32_t xmm0_18 = (data_7581b0).d
        float var_240
        var_240.o = zx.o(0)
        var_230.d = fconvert.s(float.t(var_230.d))
        var_2d0.d = fconvert.s(float.t(var_2d0.d))
        char eax_27 = (arg12[2]).b
        int32_t edx_19 = ((arg12[3] << 8 | zx.d((*arg12).b)) << 8 | zx.d((arg12[1]).b)) << 8
        var_2a0_1.o = _mm_unpacklo_epi8(
            zx.o(((arg13[3] << 8 | zx.d((*arg13).b)) << 8 | zx.d((arg13[1]).b)) << 8)
                | zx.o((arg13[2]).b), 
            0)
        uint128_t xmm0_21 = zx.o(edx_19) | zx.o(eax_27)
        int32_t xmm0_22 = var_230.d
        int32_t xmm0_23 = var_2d0.d
        void* var_2d8_1 = (*(*arg4 + 8))(var_2b4_1, var_2e8_7)
        int32_t j_2 = j_3
        var_2d0.d = fconvert.s(float.t(var_2e8_7))
        result = (*(*arg4 + 0x1c))() - (j_2 << 2)
        long double x87_r7_48 = fconvert.t(var_2d0.d)
        float* result_1 = result
        var_2d0.d = fconvert.s(x87_r7_48 * fconvert.t(var_1fc_1) + fconvert.t(fconvert.s(
            fconvert.t(fconvert.s(x87_r1 * x87_r5 - x87_r3_2 * x87_r7_14)) * x87_r1_22)))
        float xmm1_3 = var_2d0.d
        float var_140_1 = xmm1_3
        var_230.d = fconvert.s(x87_r7_48 * fconvert.t(var_20c_1) + fconvert.t(fconvert.s(
            fconvert.t(fconvert.s(x87_r2_5 * x87_r3_2 - x87_r1_6 * x87_r5)) * x87_r1_22)))
        float xmm5_1 = var_230.d
        float var_120_1 = xmm5_1
        float xmm7_1 = fconvert.s(x87_r7_48 * fconvert.t(var_24c_1)
            + fconvert.t(fconvert.s(x87_r1_22 * x87_r2_22)))
        float var_100_1 = xmm7_1
        var_2d0.d = fconvert.s(fconvert.t(var_26c_1) * x87_r7_48 + fconvert.t(fconvert.s(
            fconvert.t(fconvert.s(x87_r2_17 * x87_r5 - x87_r2_15 * x87_r3_2)) * x87_r4_10)))
        var_2d0.d = fconvert.s(fconvert.t(var_2d0.d))
        float var_1f0_1 = var_2d0.d
        var_2d0.d = fconvert.s(x87_r7_48 * fconvert.t(var_28c_1)
            + fconvert.t(fconvert.s(x87_r4_10 * fconvert.t(var_2c8))))
        var_2d0.d = fconvert.s(fconvert.t(var_2d0.d))
        float var_1e0_1 = var_2d0.d
        var_2d0.d = fconvert.s(float.t(var_2b4_1))
        long double x87_r7_53 = fconvert.t(var_2d0.d)
        var_2d0.d = fconvert.s(x87_r7_53 * fconvert.t(var_200_1))
        var_230.d = fconvert.s(x87_r7_53 * fconvert.t(var_210_1))
        long double x87_r6_37 = x87_r7_53 * fconvert.t(var_250_1)
        var_250_1.o = var_2d0.d
        var_210_1.o = var_230.d
        var_200_1.o = fconvert.s(x87_r6_37)
        var_2d0.d = fconvert.s(x87_r7_53 * fconvert.t(var_270_1))
        var_2d0.d = fconvert.s(fconvert.t(var_2d0.d))
        var_230.o = var_2d0.d
        var_2d0.d = fconvert.s(x87_r7_53 * fconvert.t(var_290_1))
        var_2d0.d = fconvert.s(fconvert.t(var_2d0.d))
        float xmm2_4 = var_2d0.d
        
        if (i_2 s> 0)
            int32_t xmm6[0x4] = var_2a0_1.o
            int32_t i_1 = i_2
            int32_t i
            
            do
                float xmm2_6 = var_250_1 + xmm1_3
                var_240.o = var_230.d + var_1f0_1
                float xmm3_2 = var_210_1 + xmm5_1
                int128_t xmm5_3 = var_200_1 + xmm7_1
                var_290_1.o = xmm2_4 + var_1e0_1
                float xmm1_11 = xmm2_6 * var_274 + xmm3_2 * var_214 + xmm5_3.d * var_2ac
                var_270_1.o = xmm5_3
                float xmm2_9 = xmm2_6 * var_2b8 + xmm3_2 * var_2b0 + xmm5_3.d * var_2e0
                
                if (j_2 s> 0)
                    int32_t j_1 = j_2
                    int32_t j
                    
                    do
                        if (xmm3_2 f< 0 || xmm5_3 f< 0 || var_240 f< 0 || var_290_1 f< 0)
                            var_2d8_1 += 4
                            var_240.o = var_240 + var_1c0_1
                            var_290_1.o = var_290_1 + var_1a0_1
                        else
                            int32_t edi_6 = int.d(
                                __minss_xmmss_memss(_mm_max_ss(xmm1_11, 0), xmm0_22) f* xmm0_18)
                            int32_t edx_25 = int.d(
                                __minss_xmmss_memss(_mm_max_ss(xmm2_9, 0), xmm0_23) f* xmm0_18)
                            int32_t edx_27 = (edx_25 s>> 7) * var_2a8_1.d
                            var_2d0.d = int.d(__minss_xmmss_memss(_mm_max_ss(xmm1_11 + xmm0_17, 0), 
                                xmm0_22))
                            int32_t eax_37 = *(edx_27 + (edi_6 s>> 7 << 2) + eax_3)
                            int32_t ecx_10 =
                                int.d(__minss_xmmss_memss(_mm_max_ss(xmm2_9 + xmm0_17, 0), xmm0_23))
                                * var_2a8_1.d
                            int32_t xmm5_25 = _mm_adds_epu8(
                                _mm_packus_epi16(
                                    _mm_srli_epi16(
                                        _mm_mullo_epi16(_mm_unpacklo_epi8(zx.o(eax_37), 0), xmm6), 
                                        8), 
                                    zx.o(0)), 
                                xmm0_21)
                            int32_t eax_40 = var_2d0.d * 4
                            int32_t xmm5_31 = _mm_adds_epu8(
                                _mm_packus_epi16(
                                    _mm_srli_epi16(
                                        _mm_mullo_epi16(
                                            _mm_unpacklo_epi8(zx.o(*(edx_27 + eax_40 + eax_3)), 0), 
                                            xmm6), 
                                        8), 
                                    zx.o(0)), 
                                xmm0_21)
                            int32_t xmm5_37 = _mm_adds_epu8(
                                _mm_packus_epi16(
                                    _mm_srli_epi16(
                                        _mm_mullo_epi16(
                                            _mm_unpacklo_epi8(zx.o(*(ecx_10 + eax_40 + eax_3)), 0), 
                                            xmm6), 
                                        8), 
                                    zx.o(0)), 
                                xmm0_21)
                            int32_t xmm4_3[0x4] = _mm_unpacklo_epi8(zx.o(xmm5_25), 0)
                            uint128_t xmm6_1 = zx.o(sx.d(edi_6.w & 0x7f))
                            uint32_t xmm6_3[0x4] =
                                _mm_shuffle_epi32(_mm_unpacklo_epi16(xmm6_1, xmm6_1), 0)
                            int32_t xmm4_4[0x4] = _mm_adds_epi16(xmm4_3, 
                                _mm_srai_epi16(
                                    _mm_mullo_epi16(
                                        _mm_subs_epi16(_mm_unpacklo_epi8(zx.o(xmm5_31), 0), 
                                            xmm4_3), 
                                        xmm6_3), 
                                    7))
                            var_2d0.o = xmm6_3
                            int32_t xmm5_39[0x4] = _mm_unpacklo_epi8(zx.o(xmm5_37), 0)
                            int32_t* eax_43 = var_2d8_1
                            xmm5_3 = var_270_1.o
                            uint128_t xmm4_10 = zx.o(sx.d(edx_25.w & 0x7f))
                            var_240.o = var_240 + var_1c0_1
                            *eax_43 = _mm_packus_epi16(
                                _mm_adds_epi16(xmm4_4, 
                                    _mm_srai_epi16(
                                        _mm_mullo_epi16(
                                            __psubsw_xmmdq_memdq(
                                                _mm_adds_epi16(xmm5_39, 
                                                    _mm_srai_epi16(
                                                        __pmullw_xmmdq_memdq(
                                                            _mm_subs_epi16(
                                                                _mm_unpacklo_epi8(zx.o(xmm5_37), 0), 
                                                                xmm5_39), 
                                                            var_2d0.o), 
                                                        7)), 
                                                xmm4_4), 
                                            _mm_shuffle_epi32(_mm_unpacklo_epi16(xmm4_10, xmm4_10), 
                                            0)), 
                                        7)), 
                                zx.o(0))
                            var_290_1.o = var_290_1 + var_1a0_1
                            var_2d8_1 = &eax_43[1]
                        
                        j = j_1
                        j_1 -= 1
                        xmm5_3 = xmm5_3 f+ fconvert.s(x87_r6_17)
                        xmm6 = var_2a0_1.o
                        xmm2_9 = xmm2_9 + fconvert.s(fconvert.t(fconvert.s(
                            x87_r7_37 * fconvert.t(var_2b0) + x87_r4_23 * fconvert.t(var_2b8)
                            + x87_r6_17 * fconvert.t(var_2e0))))
                        xmm1_11 = xmm1_11 + fconvert.s(fconvert.t(fconvert.s(
                            x87_r7_37 * fconvert.t(var_214) + x87_r4_23 * fconvert.t(var_274)
                            + x87_r6_17 * fconvert.t(var_2ac))))
                        xmm3_2 = xmm3_2 + fconvert.s(x87_r7_37)
                        var_270_1.o = xmm5_3
                    while (j != 1)
                    j_2 = j_3
                    result = result_1
                
                var_2d8_1 += result
                i = i_1
                i_1 -= 1
                xmm1_3 = var_140_1 + fconvert.s(fconvert.t(var_1fc_1))
                xmm5_1 = var_120_1 + fconvert.s(fconvert.t(var_20c_1))
                xmm7_1 = var_100_1 + fconvert.s(fconvert.t(var_24c_1))
                var_1f0_1 = var_1f0_1 + var_26c_1
                var_140_1 = xmm1_3
                var_120_1 = xmm5_1
                var_100_1 = xmm7_1
                var_1e0_1 = var_1e0_1 + var_28c_1
            while (i != 1)

return result
