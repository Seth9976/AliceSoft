// 函数: sub_459e80
// 地址: 0x459e80
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

float var_238 = fconvert.s(fconvert.t(*arg6))
float var_23c = fconvert.s(fconvert.t(arg6[1]))
float var_2c8 = fconvert.s(fconvert.t(*arg8))
float var_2c4 = fconvert.s(fconvert.t(arg8[1]))
float var_2dc = fconvert.s(fconvert.t(*arg2))
float var_2cc = fconvert.s(fconvert.t(arg2[1]))
float var_2a0 = fconvert.s(fconvert.t(*arg10))
float var_2d8 = fconvert.s(fconvert.t(arg10[1]))
float var_240 = fconvert.s(fconvert.t(*arg7))
float var_2a4 = fconvert.s(fconvert.t(arg7[1]))
float var_234 = fconvert.s(fconvert.t(*arg9))
float var_29c = fconvert.s(fconvert.t(arg9[1]))
float var_28c = fconvert.s(fconvert.t(*arg3))
float var_2d0 = fconvert.s(fconvert.t(arg3[1]))
long double x87_r7_14 = fconvert.t(var_2c4)
long double x87_r5 = fconvert.t(var_2cc)
long double x87_r3_2 = fconvert.t(var_2dc)
double var_260 = fconvert.d(x87_r3_2)
long double x87_r1 = fconvert.t(var_2c8)
double var_2c0 = fconvert.d(x87_r1)
long double x87_r2_5 = fconvert.t(var_23c)
long double x87_r1_6 = fconvert.t(var_238)
float var_24c = fconvert.s(x87_r1_6 - fconvert.t(var_260))
long double x87_r2_15 = fconvert.t(var_2d8)
long double x87_r2_17 = fconvert.t(var_2a0)
float var_22c = fconvert.s(fconvert.t(var_260) - x87_r2_17)
var_260.d = fconvert.s(x87_r7_14 - fconvert.t(fconvert.d(x87_r2_15)))
var_260:4.d = fconvert.s(fconvert.t(fconvert.d(x87_r2_17)) - fconvert.t(var_2c0))
float var_258 = fconvert.s(x87_r2_15 * fconvert.t(var_2c8) - x87_r7_14 * fconvert.t(var_2a0))
long double x87_r5_2 =
    fconvert.t(fconvert.s(fconvert.t(var_2c0) - fconvert.t(fconvert.d(x87_r1_6))))
long double x87_r3_8 = fconvert.t(fconvert.s(fconvert.t(fconvert.d(x87_r2_5)) - x87_r7_14))
long double x87_r2_22 = fconvert.t(fconvert.s(x87_r7_14 * fconvert.t(var_238)
    - fconvert.t(var_2c8) * fconvert.t(var_23c)))
double var_288_1
var_288_1.d = fconvert.s(x87_r5_2 * x87_r5 + x87_r3_8 * x87_r3_2 + x87_r2_22)
long double x87_r2_24 = fconvert.t(var_260:4.d)
long double x87_r1_17 = fconvert.t(var_260.d)
long double x87_r2_26 = fconvert.t(var_288_1.d)
long double x87_r1_20 = fconvert.t(9.9999997473787516e-05)
x87_r1_20 - x87_r2_26
float* result
result.w = (x87_r1_20 < x87_r2_26 ? 1 : 0) << 8
    | (is_unordered.t(x87_r1_20, x87_r2_26) ? 1 : 0) << 0xa
    | (x87_r1_20 == x87_r2_26 ? 1 : 0) << 0xe | 0x800

if ((result:1.b & 0x41) != 0)
    long double x87_r0_5 =
        fconvert.t(fconvert.s(x87_r3_2 * x87_r1_17 + x87_r5 * x87_r2_24 + fconvert.t(var_258)))
    x87_r0_5 - x87_r1_20
    result.w = (x87_r0_5 < x87_r1_20 ? 1 : 0) << 8
        | (is_unordered.t(x87_r0_5, x87_r1_20) ? 1 : 0) << 0xa
        | (x87_r0_5 == x87_r1_20 ? 1 : 0) << 0xe | 0x1000
    bool p_1 = unimplemented  {test ah, 0x5}
    
    if (p_1)
        long double x87_r1_21 = float.t(1)
        var_288_1.d = fconvert.s(x87_r1_21 / x87_r1_21)
        long double x87_r1_22 = fconvert.t(var_288_1.d)
        float var_220_1 = fconvert.s(fconvert.t(fconvert.s(x87_r7_14 - x87_r5)) * x87_r1_22)
        float var_21c_1 = fconvert.s(fconvert.t(fconvert.s(x87_r3_2 - x87_r1)) * x87_r1_22)
        float var_210_1 = fconvert.s(fconvert.t(fconvert.s(x87_r5 - x87_r2_5)) * x87_r1_22)
        float var_20c_1 = fconvert.s(fconvert.t(var_24c) * x87_r1_22)
        float var_250_1 = fconvert.s(x87_r3_8 * x87_r1_22)
        float var_24c_1 = fconvert.s(x87_r5_2 * x87_r1_22)
        long double x87_r4_9 = float.t(1)
        var_288_1.d = fconvert.s(x87_r4_9 / x87_r4_9)
        long double x87_r4_10 = fconvert.t(var_288_1.d)
        float var_270_1 = fconvert.s(fconvert.t(fconvert.s(x87_r2_15 - x87_r5)) * x87_r4_10)
        float var_26c_1 = fconvert.s(fconvert.t(var_22c) * x87_r4_10)
        float var_280_1 = fconvert.s(x87_r1_17 * x87_r4_10)
        float var_27c_1 = fconvert.s(x87_r2_24 * x87_r4_10)
        int32_t ebx_2 = (*(*arg11 + 8))(0, 0)
        var_260.d = ebx_2
        var_288_1.d = (*(*arg11 + 0x1c))()
        double var_298_1
        var_298_1.d = (*(*arg11 + 0x10))() - 1
        long double x87_r7_23 = fconvert.t(var_238)
        long double x87_r6_7 = fconvert.t(var_2c8)
        var_2c0.d = (*(*arg11 + 0x14))() - 1
        x87_r6_7 - x87_r7_23
        int32_t eax_11
        eax_11.w = (x87_r6_7 < x87_r7_23 ? 1 : 0) << 8
            | (is_unordered.t(x87_r6_7, x87_r7_23) ? 1 : 0) << 0xa
            | (x87_r6_7 == x87_r7_23 ? 1 : 0) << 0xe | 0x3000
        float var_2d4_1
        long double x87_r6_8
        long double x87_r7_24
        
        if ((eax_11:1.b & 0x41) != 0)
            var_2d4_1 = fconvert.s(x87_r6_7)
            x87_r6_8 = x87_r7_23
            x87_r7_24 = x87_r6_7
        else
            x87_r6_8 = x87_r7_23
            x87_r7_24 = x87_r6_7
            var_2d4_1 = fconvert.s(x87_r6_8)
        
        long double x87_r5_12 = fconvert.t(var_2dc)
        long double x87_r4_17 = fconvert.t(var_2a0)
        x87_r4_17 - x87_r5_12
        eax_11.w = (x87_r4_17 < x87_r5_12 ? 1 : 0) << 8
            | (is_unordered.t(x87_r4_17, x87_r5_12) ? 1 : 0) << 0xa
            | (x87_r4_17 == x87_r5_12 ? 1 : 0) << 0xe | 0x2000
        float var_2dc_1
        long double x87_r4_18
        long double x87_r5_13
        
        if ((eax_11:1.b & 0x41) != 0)
            var_2dc_1 = fconvert.s(x87_r4_17)
            x87_r4_18 = x87_r5_12
            x87_r5_13 = x87_r4_17
        else
            x87_r4_18 = x87_r5_12
            x87_r5_13 = x87_r4_17
            var_2dc_1 = fconvert.s(x87_r4_18)
        
        long double x87_r3_13 = fconvert.t(var_2d4_1)
        long double x87_r2_33 = fconvert.t(var_2dc_1)
        x87_r2_33 - x87_r3_13
        eax_11.w = (x87_r2_33 < x87_r3_13 ? 1 : 0) << 8
            | (is_unordered.t(x87_r2_33, x87_r3_13) ? 1 : 0) << 0xa
            | (x87_r2_33 == x87_r3_13 ? 1 : 0) << 0xe | 0x1000
        
        if ((eax_11:1.b & 0x41) != 0)
            x87_r4_18 = x87_r2_33
        else
            x87_r3_13 = x87_r2_33
        
        int32_t esi_1 = *arg5
        long double x87_r3_15 = fconvert.t(fconvert.s(float.t(esi_1)))
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
        int32_t var_2a0_1 = sub_70c710(fconvert.t(fconvert.s(x87_r3_15)))
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
        
        long double x87_r7_28 = fconvert.t(fconvert.s(float.t(arg5[2] + esi_1)))
        long double x87_r6_11 = fconvert.t(fconvert.s(x87_r7_26))
        x87_r6_11 - x87_r7_28
        eax_13.w = (x87_r6_11 < x87_r7_28 ? 1 : 0) << 8
            | (is_unordered.t(x87_r6_11, x87_r7_28) ? 1 : 0) << 0xa
            | (x87_r6_11 == x87_r7_28 ? 1 : 0) << 0xe | 0x3000
        
        if ((eax_13:1.b & 0x41) == 0)
            x87_r7_28 = x87_r6_11
        
        long double x87_r7_30 = fconvert.t(var_23c)
        long double x87_r6_12 = fconvert.t(var_2c4)
        int32_t esi_2 = sub_70c710(fconvert.t(fconvert.s(x87_r7_28)))
        x87_r6_12 - x87_r7_30
        int32_t eax_14
        eax_14.w = (x87_r6_12 < x87_r7_30 ? 1 : 0) << 8
            | (is_unordered.t(x87_r6_12, x87_r7_30) ? 1 : 0) << 0xa
            | (x87_r6_12 == x87_r7_30 ? 1 : 0) << 0xe | 0x3000
        float var_2c4_1
        long double x87_r6_13
        long double x87_r7_31
        
        if ((eax_14:1.b & 0x41) != 0)
            var_2c4_1 = fconvert.s(x87_r6_12)
            x87_r6_13 = x87_r7_30
            x87_r7_31 = x87_r6_12
        else
            x87_r6_13 = x87_r7_30
            x87_r7_31 = x87_r6_12
            var_2c4_1 = fconvert.s(x87_r6_13)
        
        long double x87_r5_15 = fconvert.t(var_2cc)
        long double x87_r4_20 = fconvert.t(var_2d8)
        x87_r4_20 - x87_r5_15
        eax_14.w = (x87_r4_20 < x87_r5_15 ? 1 : 0) << 8
            | (is_unordered.t(x87_r4_20, x87_r5_15) ? 1 : 0) << 0xa
            | (x87_r4_20 == x87_r5_15 ? 1 : 0) << 0xe | 0x2000
        float var_2d8_1
        long double x87_r4_21
        long double x87_r5_16
        
        if ((eax_14:1.b & 0x41) != 0)
            var_2d8_1 = fconvert.s(x87_r4_20)
            x87_r4_21 = x87_r5_15
            x87_r5_16 = x87_r4_20
        else
            x87_r4_21 = x87_r5_15
            x87_r5_16 = x87_r4_20
            var_2d8_1 = fconvert.s(x87_r4_21)
        
        long double x87_r3_17 = fconvert.t(var_2c4_1)
        long double x87_r2_35 = fconvert.t(var_2d8_1)
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
        int32_t var_2dc_7 = sub_70c710(fconvert.t(fconvert.s(x87_r3_19)))
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
        
        int32_t j_3 = esi_2 - var_2a0_1
        long double x87_r7_37 = fconvert.t(var_210_1)
        long double x87_r6_17 = fconvert.t(var_250_1)
        long double x87_r4_23 = fconvert.t(var_220_1)
        float var_130_1 = var_270_1
        float var_1c0_1 = var_280_1
        int32_t i_2 = sub_70c710(fconvert.t(fconvert.s(x87_r7_35))) - var_2dc_7
        var_298_1.d = fconvert.s(float.t(var_298_1.d))
        var_2c0.d = fconvert.s(float.t(var_2c0.d))
        int128_t var_190_1 = zx.o(0)
        float var_100_1 = (data_7581c0).d
        int32_t xmm0_18 = (data_7581b0).d
        int128_t var_150_1 = zx.o(0)
        int32_t xmm0_19 = var_298_1.d
        int32_t xmm0_20 = var_2c0.d
        void* var_2c8_1 = (*(*arg4 + 8))(var_2a0_1, var_2dc_7)
        int32_t j_2 = j_3
        var_2c0.d = fconvert.s(float.t(var_2dc_7))
        long double x87_r7_48 = fconvert.t(var_2c0.d)
        result = (*(*arg4 + 0x1c))() - (j_2 << 2)
        float* result_1 = result
        var_2c0.d = fconvert.s(x87_r7_48 * fconvert.t(var_21c_1) + fconvert.t(fconvert.s(
            fconvert.t(fconvert.s(x87_r1 * x87_r5 - x87_r3_2 * x87_r7_14)) * x87_r1_22)))
        float xmm0_21 = var_2c0.d
        float var_160_1 = xmm0_21
        var_298_1.d = fconvert.s(x87_r7_48 * fconvert.t(var_20c_1) + fconvert.t(fconvert.s(
            fconvert.t(fconvert.s(x87_r2_5 * x87_r3_2 - x87_r1_6 * x87_r5)) * x87_r1_22)))
        float xmm2_1 = var_298_1.d
        float var_140_1 = xmm2_1
        float xmm6_1 = fconvert.s(x87_r7_48 * fconvert.t(var_24c_1)
            + fconvert.t(fconvert.s(x87_r1_22 * x87_r2_22)))
        float var_120_1 = xmm6_1
        var_2c0.d = fconvert.s(fconvert.t(var_26c_1) * x87_r7_48 + fconvert.t(fconvert.s(
            fconvert.t(fconvert.s(x87_r2_17 * x87_r5 - x87_r2_15 * x87_r3_2)) * x87_r4_10)))
        var_2c0.d = fconvert.s(fconvert.t(var_2c0.d))
        float xmm7_1 = var_2c0.d
        float var_1e0_1 = xmm7_1
        var_2c0.d = fconvert.s(x87_r7_48 * fconvert.t(var_27c_1)
            + fconvert.t(fconvert.s(x87_r4_10 * fconvert.t(var_258))))
        var_2c0.d = fconvert.s(fconvert.t(var_2c0.d))
        float var_200_1 = var_2c0.d
        var_2c0.d = fconvert.s(float.t(var_2a0_1))
        long double x87_r7_53 = fconvert.t(var_2c0.d)
        var_2c0.d = fconvert.s(x87_r7_53 * fconvert.t(var_220_1))
        var_298_1.d = fconvert.s(x87_r7_53 * fconvert.t(var_210_1))
        long double x87_r6_37 = x87_r7_53 * fconvert.t(var_250_1)
        var_250_1.o = var_2c0.d
        var_210_1.o = var_298_1.d
        var_220_1.o = fconvert.s(x87_r6_37)
        var_2c0.d = fconvert.s(x87_r7_53 * fconvert.t(var_270_1))
        var_2c0.d = fconvert.s(fconvert.t(var_2c0.d))
        float xmm3_2 = var_2c0.d
        var_2c0.d = fconvert.s(x87_r7_53 * fconvert.t(var_280_1))
        var_2c0.d = fconvert.s(fconvert.t(var_2c0.d))
        float xmm3_3 = var_2c0.d
        
        if (i_2 s> 0)
            int32_t i_1 = i_2
            int32_t i
            
            do
                float xmm3_5 = var_250_1 + xmm0_21
                float xmm1_11 = var_210_1 + xmm2_1
                float xmm2_3 = var_220_1 + xmm6_1
                int128_t xmm6_3 = xmm3_2 + xmm7_1
                float var_230
                var_230.o = xmm3_3 + var_200_1
                float xmm0_27 = xmm3_5 * var_240 + xmm1_11 * var_234 + xmm2_3 * var_28c
                var_280_1.o = xmm6_3
                float xmm3_8 = xmm3_5 * var_2a4 + xmm1_11 * var_29c + xmm2_3 * var_2d0
                
                if (j_2 s> 0)
                    int128_t xmm7_10 = var_230.o
                    int32_t j_1 = j_2
                    int32_t j
                    
                    do
                        if (xmm1_11 f< 0 || xmm2_3 f< 0 || xmm6_3 f< 0 || xmm7_10 f< 0)
                            var_2c8_1 += 4
                            var_280_1.o = xmm6_3 f+ var_130_1
                            xmm6_3 = var_280_1.o
                        else
                            int32_t ecx_8 = int.d(
                                __minss_xmmss_memss(_mm_max_ss(xmm0_27, 0), xmm0_19) f* xmm0_18)
                            int32_t edx_11 = int.d(
                                __minss_xmmss_memss(_mm_max_ss(xmm3_8, 0), xmm0_20) f* xmm0_18)
                            int32_t edx_13 = (edx_11 s>> 7) * var_288_1.d
                            int32_t ecx_9 = ecx_8 s>> 7
                            var_298_1.d = int.d(__minss_xmmss_memss(
                                _mm_max_ss(xmm0_27 + var_100_1, 0), xmm0_19))
                            var_2c0.d = int.d(__minss_xmmss_memss(
                                _mm_max_ss(xmm3_8 + var_100_1, 0), xmm0_20))
                            int32_t var_240_1 = 0
                            int32_t esi_7 = *(edx_13 + (ecx_9 << 2) + ebx_2)
                            ebx_2 = var_260.d
                            int32_t esi_9 = var_2c0.d * var_288_1.d
                            uint128_t xmm5_1 = zx.o(*(esi_9 + (ecx_9 << 2) + ebx_2))
                            uint128_t xmm7_11 = zx.o(sx.d(ecx_8.w & 0x7f))
                            int32_t ecx_13 = var_298_1.d
                            var_270_1.o = _mm_shuffle_epi32(_mm_unpacklo_epi16(xmm7_11, xmm7_11), 0)
                            int32_t xmm6_21[0x4] = _mm_unpacklo_epi8(zx.o(esi_7), 0)
                            int32_t edx_15 = *(edx_13 + (ecx_13 << 2) + ebx_2)
                            int32_t xmm5_2[0x4] = _mm_unpacklo_epi8(xmm5_1, 0)
                            var_2c0.o = xmm6_21
                            int32_t xmm6_23[0x4] = _mm_adds_epi16(var_2c0.o, 
                                _mm_srai_epi16(
                                    __pmullw_xmmdq_memdq(
                                        _mm_subs_epi16(_mm_unpacklo_epi8(zx.o(edx_15), 0), 
                                            xmm6_21), 
                                        var_270_1.o), 
                                    7))
                            var_2c0.o = xmm6_23
                            int32_t xmm4_1[0x4] = zx.o(sx.d(edx_11.w & 0x7f))
                            int32_t* eax_28 = var_2c8_1
                            *eax_28 = _mm_packus_epi16(
                                _mm_adds_epi16(xmm6_23, 
                                    _mm_srai_epi16(
                                        _mm_mullo_epi16(
                                            __psubsw_xmmdq_memdq(
                                                _mm_adds_epi16(xmm5_2, 
                                                    _mm_srai_epi16(
                                                        __pmullw_xmmdq_memdq(
                                                            __psubsw_xmmdq_memdq(
                                                                _mm_unpacklo_epi8(
                                                                    zx.o(*(esi_9 + (ecx_13 << 2) + ebx_2)), 
                                                                    0), 
                                                                xmm5_2), 
                                                            var_270_1.o), 
                                                        7)), 
                                                var_2c0.o), 
                                            _mm_shuffle_epi32(_mm_unpacklo_epi16(xmm4_1, xmm4_1), 
                                            0)), 
                                        7)), 
                                zx.o(0))
                            xmm6_3 = var_280_1 + var_130_1
                            var_2c8_1 = &eax_28[1]
                            var_280_1.o = xmm6_3
                        
                        j = j_1
                        j_1 -= 1
                        xmm7_10 = var_230 + var_1c0_1
                        xmm3_8 = xmm3_8 + fconvert.s(fconvert.t(fconvert.s(
                            x87_r7_37 * fconvert.t(var_29c) + x87_r4_23 * fconvert.t(var_2a4)
                            + x87_r6_17 * fconvert.t(var_2d0))))
                        xmm0_27 = xmm0_27 + fconvert.s(fconvert.t(fconvert.s(
                            x87_r7_37 * fconvert.t(var_234) + x87_r4_23 * fconvert.t(var_240)
                            + x87_r6_17 * fconvert.t(var_28c))))
                        xmm2_3 = xmm2_3 + fconvert.s(x87_r6_17)
                        xmm1_11 = xmm1_11 + fconvert.s(x87_r7_37)
                        var_230.o = xmm7_10
                    while (j != 1)
                    j_2 = j_3
                    result = result_1
                
                var_2c8_1 += result
                i = i_1
                i_1 -= 1
                xmm0_21 = var_160_1 + fconvert.s(fconvert.t(var_21c_1))
                xmm2_1 = var_140_1 + fconvert.s(fconvert.t(var_20c_1))
                xmm6_1 = var_120_1 + fconvert.s(fconvert.t(var_24c_1))
                xmm7_1 = var_1e0_1 + var_26c_1
                var_160_1 = xmm0_21
                var_140_1 = xmm2_1
                var_120_1 = xmm6_1
                var_1e0_1 = xmm7_1
                var_200_1 = var_200_1 + var_27c_1
            while (i != 1)

return result
