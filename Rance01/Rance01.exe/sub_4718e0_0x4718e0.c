// 函数: sub_4718e0
// 地址: 0x4718e0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

float var_264 = fconvert.s(fconvert.t(*arg2))
float var_268 = fconvert.s(fconvert.t(arg2[1]))
float var_26c = fconvert.s(fconvert.t(*arg8))
float var_294 = fconvert.s(fconvert.t(arg8[1]))
float var_2a8 = fconvert.s(fconvert.t(*arg10))
float var_298 = fconvert.s(fconvert.t(arg10[1]))
float var_288 = fconvert.s(fconvert.t(*arg11))
float var_2a4 = fconvert.s(fconvert.t(arg11[1]))
float var_214 = fconvert.s(fconvert.t(*arg7))
float var_28c = fconvert.s(fconvert.t(arg7[1]))
float var_218 = fconvert.s(fconvert.t(*arg9))
float var_274 = fconvert.s(fconvert.t(arg9[1]))
float var_270 = fconvert.s(fconvert.t(*arg3))
float var_284 = fconvert.s(fconvert.t(arg3[1]))
long double x87_r7_14 = fconvert.t(var_294)
long double x87_r5 = fconvert.t(var_298)
long double x87_r3_2 = fconvert.t(var_2a8)
double var_250 = fconvert.d(x87_r3_2)
long double x87_r1 = fconvert.t(var_26c)
double var_1f8 = fconvert.d(x87_r1)
long double x87_r2_5 = fconvert.t(var_268)
long double x87_r1_6 = fconvert.t(var_264)
float var_22c = fconvert.s(x87_r1_6 - fconvert.t(var_250))
long double x87_r2_15 = fconvert.t(var_2a4)
long double x87_r2_17 = fconvert.t(var_288)
float var_20c = fconvert.s(fconvert.t(var_250) - x87_r2_17)
var_250.d = fconvert.s(x87_r7_14 - fconvert.t(fconvert.d(x87_r2_15)))
var_250:4.d = fconvert.s(fconvert.t(fconvert.d(x87_r2_17)) - fconvert.t(var_1f8))
float var_248 = fconvert.s(x87_r2_15 * fconvert.t(var_26c) - x87_r7_14 * fconvert.t(var_288))
long double x87_r5_2 =
    fconvert.t(fconvert.s(fconvert.t(var_1f8) - fconvert.t(fconvert.d(x87_r1_6))))
long double x87_r3_8 = fconvert.t(fconvert.s(fconvert.t(fconvert.d(x87_r2_5)) - x87_r7_14))
long double x87_r2_22 = fconvert.t(fconvert.s(x87_r7_14 * fconvert.t(var_264)
    - fconvert.t(var_26c) * fconvert.t(var_268)))
long double x87_r2_24 = fconvert.t(var_250:4.d)
long double x87_r1_17 = fconvert.t(var_250.d)
long double x87_r2_26 = fconvert.t(fconvert.s(x87_r5_2 * x87_r5 + x87_r3_8 * x87_r3_2 + x87_r2_22))
long double x87_r1_20 = fconvert.t(9.9999997473787516e-05)
x87_r1_20 - x87_r2_26
float* result
result.w = (x87_r1_20 < x87_r2_26 ? 1 : 0) << 8
    | (is_unordered.t(x87_r1_20, x87_r2_26) ? 1 : 0) << 0xa
    | (x87_r1_20 == x87_r2_26 ? 1 : 0) << 0xe | 0x800

if ((result:1.b & 0x41) != 0)
    long double x87_r0_5 =
        fconvert.t(fconvert.s(x87_r3_2 * x87_r1_17 + x87_r5 * x87_r2_24 + fconvert.t(var_248)))
    x87_r0_5 - x87_r1_20
    result.w = (x87_r0_5 < x87_r1_20 ? 1 : 0) << 8
        | (is_unordered.t(x87_r0_5, x87_r1_20) ? 1 : 0) << 0xa
        | (x87_r0_5 == x87_r1_20 ? 1 : 0) << 0xe | 0x1000
    bool p_1 = unimplemented  {test ah, 0x5}
    
    if (p_1)
        long double x87_r1_21 = float.t(1)
        long double x87_r1_22 = fconvert.t(fconvert.s(x87_r1_21 / x87_r1_21))
        float var_1f0_1 = fconvert.s(fconvert.t(fconvert.s(x87_r7_14 - x87_r5)) * x87_r1_22)
        float var_1ec_1 = fconvert.s(fconvert.t(fconvert.s(x87_r3_2 - x87_r1)) * x87_r1_22)
        float var_1e0_1 = fconvert.s(fconvert.t(fconvert.s(x87_r5 - x87_r2_5)) * x87_r1_22)
        float var_1dc_1 = fconvert.s(fconvert.t(var_22c) * x87_r1_22)
        float var_230_1 = fconvert.s(x87_r3_8 * x87_r1_22)
        float var_22c_1 = fconvert.s(x87_r5_2 * x87_r1_22)
        long double x87_r4_9 = float.t(1)
        long double x87_r4_10 = fconvert.t(fconvert.s(x87_r4_9 / x87_r4_9))
        float var_240_1 = fconvert.s(fconvert.t(fconvert.s(x87_r2_15 - x87_r5)) * x87_r4_10)
        float var_23c_1 = fconvert.s(fconvert.t(var_20c) * x87_r4_10)
        float var_260_1 = fconvert.s(x87_r1_17 * x87_r4_10)
        float var_25c_1 = fconvert.s(x87_r2_24 * x87_r4_10)
        var_250.d = (*(*arg12 + 8))(0, 0)
        var_1f8.d = (*(*arg12 + 0x1c))()
        double var_280_1
        var_280_1.d = (*(*arg12 + 0x10))() - 1
        long double x87_r7_23 = fconvert.t(var_264)
        double var_2a0_1
        var_2a0_1.d = (*(*arg12 + 0x14))() - 1
        long double x87_r6_7 = fconvert.t(var_26c)
        x87_r6_7 - x87_r7_23
        int32_t eax_11
        eax_11.w = (x87_r6_7 < x87_r7_23 ? 1 : 0) << 8
            | (is_unordered.t(x87_r6_7, x87_r7_23) ? 1 : 0) << 0xa
            | (x87_r6_7 == x87_r7_23 ? 1 : 0) << 0xe | 0x3000
        float var_290_1
        long double x87_r6_8
        long double x87_r7_24
        
        if ((eax_11:1.b & 0x41) != 0)
            var_290_1 = fconvert.s(x87_r6_7)
            x87_r6_8 = x87_r7_23
            x87_r7_24 = x87_r6_7
        else
            x87_r6_8 = x87_r7_23
            x87_r7_24 = x87_r6_7
            var_290_1 = fconvert.s(x87_r6_8)
        
        long double x87_r5_12 = fconvert.t(var_2a8)
        long double x87_r4_17 = fconvert.t(var_288)
        x87_r4_17 - x87_r5_12
        eax_11.w = (x87_r4_17 < x87_r5_12 ? 1 : 0) << 8
            | (is_unordered.t(x87_r4_17, x87_r5_12) ? 1 : 0) << 0xa
            | (x87_r4_17 == x87_r5_12 ? 1 : 0) << 0xe | 0x2000
        float var_2a8_1
        long double x87_r4_18
        long double x87_r5_13
        
        if ((eax_11:1.b & 0x41) != 0)
            var_2a8_1 = fconvert.s(x87_r4_17)
            x87_r4_18 = x87_r5_12
            x87_r5_13 = x87_r4_17
        else
            x87_r4_18 = x87_r5_12
            x87_r5_13 = x87_r4_17
            var_2a8_1 = fconvert.s(x87_r4_18)
        
        long double x87_r3_13 = fconvert.t(var_290_1)
        long double x87_r2_33 = fconvert.t(var_2a8_1)
        x87_r2_33 - x87_r3_13
        eax_11.w = (x87_r2_33 < x87_r3_13 ? 1 : 0) << 8
            | (is_unordered.t(x87_r2_33, x87_r3_13) ? 1 : 0) << 0xa
            | (x87_r2_33 == x87_r3_13 ? 1 : 0) << 0xe | 0x1000
        
        if ((eax_11:1.b & 0x41) != 0)
            x87_r4_18 = x87_r2_33
        else
            x87_r3_13 = x87_r2_33
        
        int32_t ebx_1 = *arg6
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
        int32_t var_288_1 = sub_70c710(fconvert.t(fconvert.s(x87_r3_15)))
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
        
        long double x87_r7_28 = fconvert.t(fconvert.s(float.t(arg6[2] + ebx_1)))
        long double x87_r6_11 = fconvert.t(fconvert.s(x87_r7_26))
        x87_r6_11 - x87_r7_28
        eax_13.w = (x87_r6_11 < x87_r7_28 ? 1 : 0) << 8
            | (is_unordered.t(x87_r6_11, x87_r7_28) ? 1 : 0) << 0xa
            | (x87_r6_11 == x87_r7_28 ? 1 : 0) << 0xe | 0x3000
        
        if ((eax_13:1.b & 0x41) == 0)
            x87_r7_28 = x87_r6_11
        
        long double x87_r7_30 = fconvert.t(var_268)
        long double x87_r6_12 = fconvert.t(var_294)
        int32_t ebx_2 = sub_70c710(fconvert.t(fconvert.s(x87_r7_28)))
        x87_r6_12 - x87_r7_30
        int32_t eax_14
        eax_14.w = (x87_r6_12 < x87_r7_30 ? 1 : 0) << 8
            | (is_unordered.t(x87_r6_12, x87_r7_30) ? 1 : 0) << 0xa
            | (x87_r6_12 == x87_r7_30 ? 1 : 0) << 0xe | 0x3000
        float var_294_1
        long double x87_r6_13
        long double x87_r7_31
        
        if ((eax_14:1.b & 0x41) != 0)
            var_294_1 = fconvert.s(x87_r6_12)
            x87_r6_13 = x87_r7_30
            x87_r7_31 = x87_r6_12
        else
            x87_r6_13 = x87_r7_30
            x87_r7_31 = x87_r6_12
            var_294_1 = fconvert.s(x87_r6_13)
        
        long double x87_r5_15 = fconvert.t(var_298)
        long double x87_r4_20 = fconvert.t(var_2a4)
        x87_r4_20 - x87_r5_15
        eax_14.w = (x87_r4_20 < x87_r5_15 ? 1 : 0) << 8
            | (is_unordered.t(x87_r4_20, x87_r5_15) ? 1 : 0) << 0xa
            | (x87_r4_20 == x87_r5_15 ? 1 : 0) << 0xe | 0x2000
        float var_2a4_1
        long double x87_r4_21
        long double x87_r5_16
        
        if ((eax_14:1.b & 0x41) != 0)
            var_2a4_1 = fconvert.s(x87_r4_20)
            x87_r4_21 = x87_r5_15
            x87_r5_16 = x87_r4_20
        else
            x87_r4_21 = x87_r5_15
            x87_r5_16 = x87_r4_20
            var_2a4_1 = fconvert.s(x87_r4_21)
        
        long double x87_r3_17 = fconvert.t(var_294_1)
        long double x87_r2_35 = fconvert.t(var_2a4_1)
        x87_r2_35 - x87_r3_17
        eax_14.w = (x87_r2_35 < x87_r3_17 ? 1 : 0) << 8
            | (is_unordered.t(x87_r2_35, x87_r3_17) ? 1 : 0) << 0xa
            | (x87_r2_35 == x87_r3_17 ? 1 : 0) << 0xe | 0x1000
        
        if ((eax_14:1.b & 0x41) != 0)
            x87_r4_21 = x87_r2_35
        else
            x87_r3_17 = x87_r2_35
        
        int32_t ecx_5 = arg6[1]
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
        int32_t var_2a8_7 = sub_70c710(fconvert.t(fconvert.s(x87_r3_19)))
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
        
        long double x87_r7_35 = fconvert.t(fconvert.s(float.t(arg6[3] + ecx_5)))
        long double x87_r6_16 = fconvert.t(fconvert.s(x87_r7_33))
        x87_r6_16 - x87_r7_35
        int32_t eax_18
        eax_18.w = (x87_r6_16 < x87_r7_35 ? 1 : 0) << 8
            | (is_unordered.t(x87_r6_16, x87_r7_35) ? 1 : 0) << 0xa
            | (x87_r6_16 == x87_r7_35 ? 1 : 0) << 0xe | 0x3000
        
        if ((eax_18:1.b & 0x41) == 0)
            x87_r7_35 = x87_r6_16
        
        int32_t j_3 = ebx_2 - var_288_1
        long double x87_r7_37 = fconvert.t(var_1e0_1)
        float var_2ac_10 = fconvert.s(x87_r7_37)
        long double x87_r6_17 = fconvert.t(var_230_1)
        long double x87_r4_23 = fconvert.t(var_1f0_1)
        float var_180_1 = var_240_1
        float var_140_1 = var_260_1
        int32_t i_2 = sub_70c710(fconvert.t(fconvert.s(x87_r7_35))) - var_2a8_7
        float var_210
        var_210.o = zx.o(0)
        int32_t xmm0_17 = (data_7581b0).d
        int128_t var_160_1 = zx.o(0)
        var_280_1.d = fconvert.s(float.t(var_280_1.d))
        var_2a0_1.d = fconvert.s(float.t(var_2a0_1.d))
        int32_t ecx_17 = (arg13[3] << 8 | zx.d((*arg13).b)) << 8 | zx.d((arg13[1]).b)
        uint32_t eax_28 = zx.d((arg13[2]).b)
        int32_t xmm0_19[0x4] = _mm_unpacklo_epi8(
            zx.o(((arg14[3] << 8 | zx.d((*arg14).b)) << 8 | zx.d((arg14[1]).b)) << 8)
                | zx.o((arg14[2]).b), 
            0)
        int32_t xmm0_21 = var_280_1.d
        int32_t xmm0_22 = var_2a0_1.d
        char* esi_5 = (*(*arg5 + 8))(var_288_1, var_2a8_7)
        int32_t j_2 = j_3
        var_2a0_1.d = fconvert.s(float.t(var_2a8_7))
        result = (*(*arg5 + 0x1c))() - (j_2 << 2)
        long double x87_r7_48 = fconvert.t(var_2a0_1.d)
        float* result_1 = result
        var_2a0_1.d = fconvert.s(x87_r7_48 * fconvert.t(var_1ec_1) + fconvert.t(fconvert.s(
            fconvert.t(fconvert.s(x87_r1 * x87_r5 - x87_r3_2 * x87_r7_14)) * x87_r1_22)))
        float xmm0_23 = var_2a0_1.d
        float var_190_1 = xmm0_23
        var_280_1.d = fconvert.s(x87_r7_48 * fconvert.t(var_1dc_1) + fconvert.t(fconvert.s(
            fconvert.t(fconvert.s(x87_r2_5 * x87_r3_2 - x87_r1_6 * x87_r5)) * x87_r1_22)))
        float xmm2_1 = var_280_1.d
        float var_170_1 = xmm2_1
        float xmm4_1 = fconvert.s(x87_r7_48 * fconvert.t(var_22c_1)
            + fconvert.t(fconvert.s(x87_r1_22 * x87_r2_22)))
        float var_150_1 = xmm4_1
        var_2a0_1.d = fconvert.s(fconvert.t(var_23c_1) * x87_r7_48 + fconvert.t(fconvert.s(
            fconvert.t(fconvert.s(x87_r2_17 * x87_r5 - x87_r2_15 * x87_r3_2)) * x87_r4_10)))
        var_2a0_1.d = fconvert.s(fconvert.t(var_2a0_1.d))
        float xmm5_1 = var_2a0_1.d
        float var_130_1 = xmm5_1
        var_2a0_1.d = fconvert.s(x87_r7_48 * fconvert.t(var_25c_1)
            + fconvert.t(fconvert.s(x87_r4_10 * fconvert.t(var_248))))
        var_2a0_1.d = fconvert.s(fconvert.t(var_2a0_1.d))
        float xmm6_1 = var_2a0_1.d
        float var_110_1 = xmm6_1
        var_2a0_1.d = fconvert.s(float.t(var_288_1))
        long double x87_r7_53 = fconvert.t(var_2a0_1.d)
        var_2a0_1.d = fconvert.s(x87_r7_53 * fconvert.t(var_1f0_1))
        var_280_1.d = fconvert.s(x87_r7_53 * fconvert.t(var_1e0_1))
        long double x87_r6_37 = x87_r7_53 * fconvert.t(var_230_1)
        var_230_1.o = var_2a0_1.d
        var_1e0_1.o = var_280_1.d
        var_1f0_1.o = fconvert.s(x87_r6_37)
        var_2a0_1.d = fconvert.s(x87_r7_53 * fconvert.t(var_240_1))
        var_2a0_1.d = fconvert.s(fconvert.t(var_2a0_1.d))
        var_240_1.o = var_2a0_1.d
        var_2a0_1.d = fconvert.s(x87_r7_53 * fconvert.t(var_260_1))
        var_2a0_1.d = fconvert.s(fconvert.t(var_2a0_1.d))
        var_260_1.o = var_2a0_1.d
        
        if (i_2 s> 0)
            int32_t i_1 = i_2
            int32_t i
            
            do
                float xmm1_11 = var_1e0_1 + xmm2_1
                float xmm2_3 = var_1f0_1 + xmm4_1
                float xmm3_4 = var_230_1 + xmm0_23
                float xmm4_3 = var_240_1 + xmm5_1
                float xmm5_3 = var_260_1 + xmm6_1
                float xmm0_27 = xmm3_4 * var_214 + xmm1_11 * var_218 + xmm2_3 * var_270
                float xmm3_7 = xmm3_4 * var_28c + xmm1_11 * var_274 + xmm2_3 * var_284
                
                if (j_2 s> 0)
                    float xmm6_10 = var_2ac_10
                    int32_t j_1 = j_2
                    int32_t j
                    
                    do
                        if (not(xmm1_11 f< 0) && not(xmm2_3 f< 0) && not(xmm4_3 f< 0)
                                && not(xmm5_3 f< 0))
                            uint16_t xmm6_21[0x8] = __pmullw_xmmdq_memdq(
                                __punpcklbw_xmmdq_memdq(
                                    zx.o(*((int.d(
                                        __minss_xmmss_memss(_mm_max_ss(xmm3_7, 0), xmm0_22)
                                        f* xmm0_17) s>> 7) * var_1f8.d + var_250.d + (int.d(
                                        __minss_xmmss_memss(__maxss_xmmss_memss(xmm0_27, 0), 
                                        xmm0_21) f* xmm0_17) s>> 7 << 2))), 
                                    zx.o(0)), 
                                xmm0_19)
                            int32_t edx_13
                            edx_13.b = *esi_5
                            int24_t xmm6_24 = __paddusb_xmmdq_memdq(
                                __packuswb_xmmdq_memdq(_mm_srli_epi16(xmm6_21, 8), zx.o(0)), 
                                zx.o(ecx_17 << 8) | zx.o(eax_28))
                            char ebx_7 =
                                (((zx.d(xmm6_24.b) - zx.d(edx_13.b)) * arg4) s>> 8).b + edx_13.b
                            edx_13.b = esi_5[1]
                            xmm6_10 = var_2ac_10
                            esi_5[1] =
                                (((zx.d(xmm6_24:1.b) - zx.d(edx_13.b)) * arg4) s>> 8).b + edx_13.b
                            char ecx_28 = esi_5[2]
                            *esi_5 = ebx_7
                            esi_5[2] =
                                (((zx.d(xmm6_24:2.b) - zx.d(ecx_28)) * arg4) s>> 8).b + ecx_28
                        
                        xmm3_7 = xmm3_7 + fconvert.s(fconvert.t(fconvert.s(
                            x87_r7_37 * fconvert.t(var_274) + x87_r4_23 * fconvert.t(var_28c)
                            + x87_r6_17 * fconvert.t(var_284))))
                        xmm0_27 = xmm0_27 + fconvert.s(fconvert.t(fconvert.s(
                            x87_r7_37 * fconvert.t(var_218) + x87_r4_23 * fconvert.t(var_214)
                            + x87_r6_17 * fconvert.t(var_270))))
                        xmm5_3 = xmm5_3 + var_140_1
                        xmm4_3 = xmm4_3 + var_180_1
                        xmm2_3 = xmm2_3 + fconvert.s(x87_r6_17)
                        esi_5 = &esi_5[4]
                        j = j_1
                        j_1 -= 1
                        xmm1_11 = xmm1_11 + xmm6_10
                    while (j != 1)
                    result = result_1
                    j_2 = j_3
                
                xmm0_23 = var_190_1 + fconvert.s(fconvert.t(var_1ec_1))
                xmm2_1 = var_170_1 + fconvert.s(fconvert.t(var_1dc_1))
                xmm4_1 = var_150_1 + fconvert.s(fconvert.t(var_22c_1))
                xmm5_1 = var_130_1 + var_23c_1
                xmm6_1 = var_110_1 + var_25c_1
                esi_5 += result
                i = i_1
                i_1 -= 1
                var_190_1 = xmm0_23
                var_170_1 = xmm2_1
                var_150_1 = xmm4_1
                var_130_1 = xmm5_1
                var_110_1 = xmm6_1
            while (i != 1)

return result
