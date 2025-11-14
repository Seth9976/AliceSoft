// 函数: sub_4660d0
// 地址: 0x4660d0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

float var_264 = fconvert.s(fconvert.t(*arg6))
float var_284 = fconvert.s(fconvert.t(arg6[1]))
float var_2e8 = fconvert.s(fconvert.t(*arg8))
float var_2e0 = fconvert.s(fconvert.t(arg8[1]))
float var_2f4 = fconvert.s(fconvert.t(*arg9))
float var_2d8 = fconvert.s(fconvert.t(arg9[1]))
float var_2cc = fconvert.s(fconvert.t(*arg10))
float var_2f8 = fconvert.s(fconvert.t(arg10[1]))
float var_2b8 = fconvert.s(fconvert.t(*arg7))
float var_2dc = fconvert.s(fconvert.t(arg7[1]))
float var_2b4 = fconvert.s(fconvert.t(*arg2))
float var_2e4 = fconvert.s(fconvert.t(arg2[1]))
float var_2bc = fconvert.s(fconvert.t(*arg3))
float var_2fc = fconvert.s(fconvert.t(arg3[1]))
long double x87_r7_14 = fconvert.t(var_2e0)
long double x87_r5 = fconvert.t(var_2d8)
long double x87_r3_2 = fconvert.t(var_2f4)
double var_260 = fconvert.d(x87_r3_2)
long double x87_r1 = fconvert.t(var_2e8)
double var_248 = fconvert.d(x87_r1)
long double x87_r2_5 = fconvert.t(var_284)
long double x87_r1_6 = fconvert.t(var_264)
float var_27c = fconvert.s(x87_r1_6 - fconvert.t(var_260))
long double x87_r2_15 = fconvert.t(var_2f8)
long double x87_r2_17 = fconvert.t(var_2cc)
float var_23c = fconvert.s(fconvert.t(var_260) - x87_r2_17)
var_260.d = fconvert.s(x87_r7_14 - fconvert.t(fconvert.d(x87_r2_15)))
var_260:4.d = fconvert.s(fconvert.t(fconvert.d(x87_r2_17)) - fconvert.t(var_248))
float var_258 = fconvert.s(x87_r2_15 * fconvert.t(var_2e8) - x87_r7_14 * fconvert.t(var_2cc))
long double x87_r5_2 =
    fconvert.t(fconvert.s(fconvert.t(var_248) - fconvert.t(fconvert.d(x87_r1_6))))
long double x87_r3_8 = fconvert.t(fconvert.s(fconvert.t(fconvert.d(x87_r2_5)) - x87_r7_14))
long double x87_r2_22 = fconvert.t(fconvert.s(x87_r7_14 * fconvert.t(var_264)
    - fconvert.t(var_2e8) * fconvert.t(var_284)))
long double x87_r2_24 = fconvert.t(var_260:4.d)
long double x87_r1_17 = fconvert.t(var_260.d)
long double x87_r2_26 = fconvert.t(fconvert.s(x87_r5_2 * x87_r5 + x87_r3_8 * x87_r3_2 + x87_r2_22))
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
        long double x87_r1_22 = fconvert.t(fconvert.s(x87_r1_21 / x87_r1_21))
        float var_220_1 = fconvert.s(fconvert.t(fconvert.s(x87_r7_14 - x87_r5)) * x87_r1_22)
        float var_21c_1 = fconvert.s(fconvert.t(fconvert.s(x87_r3_2 - x87_r1)) * x87_r1_22)
        float var_230_1 = fconvert.s(fconvert.t(fconvert.s(x87_r5 - x87_r2_5)) * x87_r1_22)
        float var_22c_1 = fconvert.s(fconvert.t(var_27c) * x87_r1_22)
        float var_280_1 = fconvert.s(x87_r3_8 * x87_r1_22)
        float var_27c_1 = fconvert.s(x87_r5_2 * x87_r1_22)
        long double x87_r4_9 = float.t(1)
        long double x87_r4_10 = fconvert.t(fconvert.s(x87_r4_9 / x87_r4_9))
        float var_2a0_1 = fconvert.s(fconvert.t(fconvert.s(x87_r2_15 - x87_r5)) * x87_r4_10)
        float var_29c_1 = fconvert.s(fconvert.t(var_23c) * x87_r4_10)
        float var_2b0_1 = fconvert.s(x87_r1_17 * x87_r4_10)
        float var_2ac_1 = fconvert.s(x87_r2_24 * x87_r4_10)
        int32_t ebx_2 = (*(*arg11 + 8))(0, 0)
        var_248.d = ebx_2
        int32_t eax_4 = (*(*arg11 + 0x1c))()
        double var_2c8_1
        var_2c8_1.d = (*(*arg11 + 0x10))() - 1
        double var_2f0_1
        var_2f0_1.d = (*(*arg11 + 0x14))() - 1
        float var_2b8_2 =
            fconvert.s(fconvert.t(fconvert.s(fconvert.t(var_2b8) / fconvert.t(arg6[3]))))
        float var_2b4_2 =
            fconvert.s(fconvert.t(fconvert.s(fconvert.t(var_2b4) / fconvert.t(arg8[3]))))
        float var_2bc_2 =
            fconvert.s(fconvert.t(fconvert.s(fconvert.t(var_2bc) / fconvert.t(arg9[3]))))
        float var_2dc_2 =
            fconvert.s(fconvert.t(fconvert.s(fconvert.t(var_2dc) / fconvert.t(arg6[3]))))
        float var_2e4_2 =
            fconvert.s(fconvert.t(fconvert.s(fconvert.t(var_2e4) / fconvert.t(arg8[3]))))
        float var_2fc_2 =
            fconvert.s(fconvert.t(fconvert.s(fconvert.t(var_2fc) / fconvert.t(arg9[3]))))
        arg6[3]
        long double x87_r6_7 = float.t(1)
        float var_2fc_6 = fconvert.s(fconvert.t(fconvert.s(x87_r6_7 / fconvert.t(arg8[3]))))
        float var_2fc_8 = fconvert.s(fconvert.t(fconvert.s(x87_r6_7 / fconvert.t(arg9[3]))))
        long double x87_r7_46 = fconvert.t(var_264)
        long double x87_r6_13 = fconvert.t(var_2e8)
        x87_r6_13 - x87_r7_46
        float* eax_11
        eax_11.w = (x87_r6_13 < x87_r7_46 ? 1 : 0) << 8
            | (is_unordered.t(x87_r6_13, x87_r7_46) ? 1 : 0) << 0xa
            | (x87_r6_13 == x87_r7_46 ? 1 : 0) << 0xe | 0x3000
        float var_2d0_1
        long double x87_r6_14
        long double x87_r7_47
        
        if ((eax_11:1.b & 0x41) != 0)
            var_2d0_1 = fconvert.s(x87_r6_13)
            x87_r6_14 = x87_r7_46
            x87_r7_47 = x87_r6_13
        else
            x87_r6_14 = x87_r7_46
            x87_r7_47 = x87_r6_13
            var_2d0_1 = fconvert.s(x87_r6_14)
        
        long double x87_r5_13 = fconvert.t(var_2f4)
        long double x87_r4_17 = fconvert.t(var_2cc)
        x87_r4_17 - x87_r5_13
        eax_11.w = (x87_r4_17 < x87_r5_13 ? 1 : 0) << 8
            | (is_unordered.t(x87_r4_17, x87_r5_13) ? 1 : 0) << 0xa
            | (x87_r4_17 == x87_r5_13 ? 1 : 0) << 0xe | 0x2000
        float var_2f4_1
        long double x87_r4_18
        long double x87_r5_14
        
        if ((eax_11:1.b & 0x41) != 0)
            var_2f4_1 = fconvert.s(x87_r4_17)
            x87_r4_18 = x87_r5_13
            x87_r5_14 = x87_r4_17
        else
            x87_r4_18 = x87_r5_13
            x87_r5_14 = x87_r4_17
            var_2f4_1 = fconvert.s(x87_r4_18)
        
        long double x87_r3_13 = fconvert.t(var_2d0_1)
        long double x87_r2_33 = fconvert.t(var_2f4_1)
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
        eax_11.w = (x87_r2_34 < x87_r3_15 ? 1 : 0) << 8
            | (is_unordered.t(x87_r2_34, x87_r3_15) ? 1 : 0) << 0xa
            | (x87_r2_34 == x87_r3_15 ? 1 : 0) << 0xe | 0x1000
        bool p_2 = unimplemented  {test ah, 0x5}
        
        if (p_2)
            x87_r4_18 = x87_r2_34
        else
            x87_r3_15 = x87_r2_34
        
        x87_r6_14 - x87_r7_47
        int32_t var_2cc_1 = sub_70c710(fconvert.t(fconvert.s(x87_r3_15)))
        int32_t eax_12
        eax_12.w = (x87_r6_14 < x87_r7_47 ? 1 : 0) << 8
            | (is_unordered.t(x87_r6_14, x87_r7_47) ? 1 : 0) << 0xa
            | (x87_r6_14 == x87_r7_47 ? 1 : 0) << 0xe | 0x2000
        
        if ((eax_12:1.b & 0x41) != 0)
            x87_r5_14 = x87_r6_14
        
        long double x87_r7_48 = x87_r5_14
        x87_r4_18 - x87_r7_48
        eax_12.w = (x87_r4_18 < x87_r7_48 ? 1 : 0) << 8
            | (is_unordered.t(x87_r4_18, x87_r7_48) ? 1 : 0) << 0xa
            | (x87_r4_18 == x87_r7_48 ? 1 : 0) << 0xe | 0x3000
        
        if ((eax_12:1.b & 0x41) != 0)
            x87_r7_48 = x87_r4_18
        
        long double x87_r7_49 = fconvert.t(fconvert.s(x87_r7_47))
        long double x87_r6_16 = fconvert.t(fconvert.s(x87_r7_48))
        x87_r6_16 - x87_r7_49
        eax_12.w = (x87_r6_16 < x87_r7_49 ? 1 : 0) << 8
            | (is_unordered.t(x87_r6_16, x87_r7_49) ? 1 : 0) << 0xa
            | (x87_r6_16 == x87_r7_49 ? 1 : 0) << 0xe | 0x3000
        bool p_3 = unimplemented  {test ah, 0x5}
        
        if (not(p_3))
            x87_r7_49 = x87_r6_16
        
        long double x87_r7_51 = fconvert.t(fconvert.s(float.t(arg5[2] + esi_1)))
        long double x87_r6_17 = fconvert.t(fconvert.s(x87_r7_49))
        x87_r6_17 - x87_r7_51
        int32_t eax_14
        eax_14.w = (x87_r6_17 < x87_r7_51 ? 1 : 0) << 8
            | (is_unordered.t(x87_r6_17, x87_r7_51) ? 1 : 0) << 0xa
            | (x87_r6_17 == x87_r7_51 ? 1 : 0) << 0xe | 0x3000
        
        if ((eax_14:1.b & 0x41) == 0)
            x87_r7_51 = x87_r6_17
        
        long double x87_r7_53 = fconvert.t(var_284)
        long double x87_r6_18 = fconvert.t(var_2e0)
        int32_t esi_2 = sub_70c710(fconvert.t(fconvert.s(x87_r7_51)))
        x87_r6_18 - x87_r7_53
        int32_t eax_15
        eax_15.w = (x87_r6_18 < x87_r7_53 ? 1 : 0) << 8
            | (is_unordered.t(x87_r6_18, x87_r7_53) ? 1 : 0) << 0xa
            | (x87_r6_18 == x87_r7_53 ? 1 : 0) << 0xe | 0x3000
        float var_2e0_1
        long double x87_r6_19
        long double x87_r7_54
        
        if ((eax_15:1.b & 0x41) != 0)
            var_2e0_1 = fconvert.s(x87_r6_18)
            x87_r6_19 = x87_r7_53
            x87_r7_54 = x87_r6_18
        else
            x87_r6_19 = x87_r7_53
            x87_r7_54 = x87_r6_18
            var_2e0_1 = fconvert.s(x87_r6_19)
        
        long double x87_r5_16 = fconvert.t(var_2d8)
        long double x87_r4_20 = fconvert.t(var_2f8)
        x87_r4_20 - x87_r5_16
        eax_15.w = (x87_r4_20 < x87_r5_16 ? 1 : 0) << 8
            | (is_unordered.t(x87_r4_20, x87_r5_16) ? 1 : 0) << 0xa
            | (x87_r4_20 == x87_r5_16 ? 1 : 0) << 0xe | 0x2000
        float var_2f8_1
        long double x87_r4_21
        long double x87_r5_17
        
        if ((eax_15:1.b & 0x41) != 0)
            var_2f8_1 = fconvert.s(x87_r4_20)
            x87_r4_21 = x87_r5_16
            x87_r5_17 = x87_r4_20
        else
            x87_r4_21 = x87_r5_16
            x87_r5_17 = x87_r4_20
            var_2f8_1 = fconvert.s(x87_r4_21)
        
        long double x87_r3_17 = fconvert.t(var_2e0_1)
        long double x87_r2_35 = fconvert.t(var_2f8_1)
        x87_r2_35 - x87_r3_17
        eax_15.w = (x87_r2_35 < x87_r3_17 ? 1 : 0) << 8
            | (is_unordered.t(x87_r2_35, x87_r3_17) ? 1 : 0) << 0xa
            | (x87_r2_35 == x87_r3_17 ? 1 : 0) << 0xe | 0x1000
        
        if ((eax_15:1.b & 0x41) != 0)
            x87_r4_21 = x87_r2_35
        else
            x87_r3_17 = x87_r2_35
        
        int32_t ecx_5 = arg5[1]
        long double x87_r3_19 = fconvert.t(fconvert.s(float.t(ecx_5)))
        long double x87_r2_36 = fconvert.t(fconvert.s(x87_r3_17))
        x87_r2_36 - x87_r3_19
        eax_15.w = (x87_r2_36 < x87_r3_19 ? 1 : 0) << 8
            | (is_unordered.t(x87_r2_36, x87_r3_19) ? 1 : 0) << 0xa
            | (x87_r2_36 == x87_r3_19 ? 1 : 0) << 0xe | 0x1000
        bool p_4 = unimplemented  {test ah, 0x5}
        
        if (p_4)
            x87_r4_21 = x87_r2_36
        else
            x87_r3_19 = x87_r2_36
        
        x87_r6_19 - x87_r7_54
        int32_t edi_2 = sub_70c710(fconvert.t(fconvert.s(x87_r3_19)))
        int32_t eax_16
        eax_16.w = (x87_r6_19 < x87_r7_54 ? 1 : 0) << 8
            | (is_unordered.t(x87_r6_19, x87_r7_54) ? 1 : 0) << 0xa
            | (x87_r6_19 == x87_r7_54 ? 1 : 0) << 0xe | 0x2000
        
        if ((eax_16:1.b & 0x41) != 0)
            x87_r5_17 = x87_r6_19
        
        long double x87_r7_55 = x87_r5_17
        x87_r4_21 - x87_r7_55
        eax_16.w = (x87_r4_21 < x87_r7_55 ? 1 : 0) << 8
            | (is_unordered.t(x87_r4_21, x87_r7_55) ? 1 : 0) << 0xa
            | (x87_r4_21 == x87_r7_55 ? 1 : 0) << 0xe | 0x3000
        
        if ((eax_16:1.b & 0x41) != 0)
            x87_r7_55 = x87_r4_21
        
        long double x87_r7_56 = fconvert.t(fconvert.s(x87_r7_54))
        long double x87_r6_21 = fconvert.t(fconvert.s(x87_r7_55))
        x87_r6_21 - x87_r7_56
        eax_16.w = (x87_r6_21 < x87_r7_56 ? 1 : 0) << 8
            | (is_unordered.t(x87_r6_21, x87_r7_56) ? 1 : 0) << 0xa
            | (x87_r6_21 == x87_r7_56 ? 1 : 0) << 0xe | 0x3000
        bool p_5 = unimplemented  {test ah, 0x5}
        
        if (not(p_5))
            x87_r7_56 = x87_r6_21
        
        long double x87_r7_58 = fconvert.t(fconvert.s(float.t(arg5[3] + ecx_5)))
        long double x87_r6_22 = fconvert.t(fconvert.s(x87_r7_56))
        x87_r6_22 - x87_r7_58
        int32_t eax_18
        eax_18.w = (x87_r6_22 < x87_r7_58 ? 1 : 0) << 8
            | (is_unordered.t(x87_r6_22, x87_r7_58) ? 1 : 0) << 0xa
            | (x87_r6_22 == x87_r7_58 ? 1 : 0) << 0xe | 0x3000
        
        if ((eax_18:1.b & 0x41) == 0)
            x87_r7_58 = x87_r6_22
        
        int32_t j_3 = esi_2 - var_2cc_1
        int32_t eax_19 = sub_70c710(fconvert.t(fconvert.s(x87_r7_58)))
        float var_2fc_16 = fconvert.s(fconvert.t(var_220_1))
        float var_2e4_3 = fconvert.s(fconvert.t(var_230_1))
        float var_2dc_3 = fconvert.s(fconvert.t(var_280_1))
        float var_1c0_1 = var_2a0_1
        float var_1a0_1 = var_2b0_1
        var_2c8_1.d = fconvert.s(float.t(var_2c8_1.d))
        var_2f0_1.d = fconvert.s(float.t(var_2f0_1.d))
        int128_t var_170_1 = zx.o(0)
        float var_e0_1 = (data_7581c0).d
        int32_t xmm0_21 = (data_7581b0).d
        int32_t i_2 = eax_19 - edi_2
        int128_t var_c0_1 = zx.o(0)
        int32_t xmm0_22 = var_2c8_1.d
        int32_t xmm0_23 = var_2f0_1.d
        void* var_2e8_1 = (*(*arg4 + 8))(var_2cc_1, edi_2)
        int32_t j_2 = j_3
        var_2f0_1.d = fconvert.s(float.t(edi_2))
        result = (*(*arg4 + 0x1c))() - (j_2 << 2)
        long double x87_r7_69 = fconvert.t(var_2f0_1.d)
        float* result_1 = result
        var_2f0_1.d = fconvert.s(x87_r7_69 * fconvert.t(var_21c_1) + fconvert.t(fconvert.s(
            fconvert.t(fconvert.s(x87_r1 * x87_r5 - x87_r3_2 * x87_r7_14)) * x87_r1_22)))
        float xmm0_24 = var_2f0_1.d
        float var_180_1 = xmm0_24
        var_2c8_1.d = fconvert.s(x87_r7_69 * fconvert.t(var_22c_1) + fconvert.t(fconvert.s(
            fconvert.t(fconvert.s(x87_r2_5 * x87_r3_2 - x87_r1_6 * x87_r5)) * x87_r1_22)))
        float xmm1_10 = var_2c8_1.d
        float var_160_1 = xmm1_10
        float xmm7_1 = fconvert.s(x87_r7_69 * fconvert.t(var_27c_1)
            + fconvert.t(fconvert.s(x87_r1_22 * x87_r2_22)))
        float var_140_1 = xmm7_1
        var_2f0_1.d = fconvert.s(fconvert.t(var_29c_1) * x87_r7_69 + fconvert.t(fconvert.s(
            fconvert.t(fconvert.s(x87_r2_17 * x87_r5 - x87_r2_15 * x87_r3_2)) * x87_r4_10)))
        var_2f0_1.d = fconvert.s(fconvert.t(var_2f0_1.d))
        float var_210_1 = var_2f0_1.d
        var_2f0_1.d = fconvert.s(x87_r7_69 * fconvert.t(var_2ac_1)
            + fconvert.t(fconvert.s(x87_r4_10 * fconvert.t(var_258))))
        var_2f0_1.d = fconvert.s(fconvert.t(var_2f0_1.d))
        float var_200_1 = var_2f0_1.d
        var_2f0_1.d = fconvert.s(float.t(var_2cc_1))
        long double x87_r7_74 = fconvert.t(var_2f0_1.d)
        var_2f0_1.d = fconvert.s(x87_r7_74 * fconvert.t(var_220_1))
        var_2c8_1.d = fconvert.s(x87_r7_74 * fconvert.t(var_230_1))
        long double x87_r6_41 = x87_r7_74 * fconvert.t(var_280_1)
        var_280_1.o = var_2f0_1.d
        var_230_1.o = var_2c8_1.d
        var_220_1.o = fconvert.s(x87_r6_41)
        var_2f0_1.d = fconvert.s(x87_r7_74 * fconvert.t(var_2a0_1))
        var_2f0_1.d = fconvert.s(fconvert.t(var_2f0_1.d))
        float xmm3_3 = var_2f0_1.d
        var_2f0_1.d = fconvert.s(x87_r7_74 * fconvert.t(var_2b0_1))
        var_2f0_1.d = fconvert.s(fconvert.t(var_2f0_1.d))
        float xmm3_4 = var_2f0_1.d
        
        if (i_2 s> 0)
            float xmm6 = var_2fc_16
            int32_t i_1 = i_2
            int32_t i
            
            do
                float xmm4_2 = var_280_1 + xmm0_24
                int128_t xmm0_26 = xmm3_3 + var_210_1
                float xmm2_9 = var_230_1 + xmm1_10
                int128_t xmm1_12 = xmm3_4 + var_200_1
                float xmm3_6 = var_220_1 + xmm7_1
                float var_240
                var_240.o = xmm0_26
                var_2b0_1.o = xmm1_12
                
                if (j_2 s> 0)
                    int32_t j_1 = j_2
                    int32_t j
                    
                    do
                        if (xmm2_9 f< 0 || xmm3_6 f< 0 || xmm0_26 f< 0 || xmm1_12 f< 0)
                            var_2e8_1 += 4
                        else
                            float xmm1_16 =
                                xmm4_2 * fconvert.s(fconvert.t(fconvert.s(x87_r6_7 / x87_r6_7)))
                                + xmm2_9 * var_2fc_6 + xmm3_6 * var_2fc_8
                            float xmm1_17 = _mm_rcp_ss(xmm1_16, xmm1_16)
                            float xmm0_35 = (xmm4_2 * var_2b8_2 + xmm2_9 * var_2b4_2
                                + xmm3_6 * var_2bc_2) * xmm1_17
                            float xmm1_26 = (xmm4_2 * var_2dc_2 + xmm2_9 * var_2e4_2
                                + xmm3_6 * var_2fc_2) * xmm1_17
                            int32_t ecx_9 = int.d(
                                __minss_xmmss_memss(_mm_max_ss(xmm0_35, 0), xmm0_22) f* xmm0_21)
                            int32_t edx_9 = int.d(
                                __minss_xmmss_memss(_mm_max_ss(xmm1_26, 0), xmm0_23) f* xmm0_21)
                            int32_t edx_11 = (edx_9 s>> 7) * eax_4
                            int32_t ecx_10 = ecx_9 s>> 7
                            var_2c8_1.d = int.d(__minss_xmmss_memss(
                                _mm_max_ss(xmm0_35 + var_e0_1, 0), xmm0_22))
                            var_2f0_1.d = int.d(__minss_xmmss_memss(
                                _mm_max_ss(xmm1_26 + var_e0_1, 0), xmm0_23))
                            var_260.d = 0
                            int32_t esi_7 = *(edx_11 + (ecx_10 << 2) + ebx_2)
                            ebx_2 = var_248.d
                            int32_t esi_9 = var_2f0_1.d * eax_4
                            int32_t xmm1_30[0x4] = zx.o(*(esi_9 + (ecx_10 << 2) + ebx_2))
                            uint128_t xmm5_1 = zx.o(sx.d(ecx_9.w & 0x7f))
                            int32_t ecx_14 = var_2c8_1.d
                            int32_t edx_13 = *(edx_11 + (ecx_14 << 2) + ebx_2)
                            int32_t xmm5_2[0x4] = _mm_unpacklo_epi16(xmm5_1, xmm5_1)
                            int32_t xmm0_40[0x4] = _mm_unpacklo_epi8(zx.o(esi_7), 0)
                            var_2a0_1.o = _mm_shuffle_epi32(xmm5_2, 0)
                            int32_t xmm7_9[0x4] = __pmullw_xmmdq_memdq(
                                _mm_subs_epi16(_mm_unpacklo_epi8(zx.o(edx_13), 0), xmm0_40), 
                                var_2a0_1.o)
                            int32_t xmm1_31[0x4] = _mm_unpacklo_epi8(xmm1_30, 0)
                            int32_t edx_14 = *(esi_9 + (ecx_14 << 2) + ebx_2)
                            int32_t xmm5_5[0x4] = _mm_adds_epi16(xmm0_40, _mm_srai_epi16(xmm7_9, 7))
                            xmm1_12 = var_2b0_1.o
                            var_260.o = xmm5_5
                            int32_t xmm0_46[0x4] = zx.o(sx.d(edx_9.w & 0x7f))
                            int32_t* eax_27 = var_2e8_1
                            xmm0_26 = var_240.o
                            xmm6 = var_2fc_16
                            *eax_27 = _mm_packus_epi16(
                                _mm_adds_epi16(xmm5_5, 
                                    _mm_srai_epi16(
                                        _mm_mullo_epi16(
                                            __psubsw_xmmdq_memdq(
                                                _mm_adds_epi16(xmm1_31, 
                                                    _mm_srai_epi16(
                                                        __pmullw_xmmdq_memdq(
                                                            _mm_subs_epi16(
                                                                _mm_unpacklo_epi8(zx.o(edx_14), 0), 
                                                                xmm1_31), 
                                                            var_2a0_1.o), 
                                                        7)), 
                                                var_260.o), 
                                            _mm_shuffle_epi32(_mm_unpacklo_epi16(xmm0_46, xmm0_46), 
                                            0)), 
                                        7)), 
                                zx.o(0))
                            var_2e8_1 = &eax_27[1]
                        
                        j = j_1
                        j_1 -= 1
                        xmm1_12 = xmm1_12 f+ var_1a0_1
                        xmm0_26 = xmm0_26 f+ var_1c0_1
                        xmm3_6 = xmm3_6 + var_2dc_3
                        xmm2_9 = xmm2_9 + var_2e4_3
                        var_2b0_1.o = xmm1_12
                        var_240.o = xmm0_26
                        xmm4_2 = xmm4_2 + xmm6
                    while (j != 1)
                    j_2 = j_3
                    result = result_1
                
                var_2e8_1 += result
                i = i_1
                i_1 -= 1
                xmm0_24 = var_180_1 + fconvert.s(fconvert.t(var_21c_1))
                xmm1_10 = var_160_1 + fconvert.s(fconvert.t(var_22c_1))
                xmm7_1 = var_140_1 + fconvert.s(fconvert.t(var_27c_1))
                var_210_1 = var_210_1 + var_29c_1
                var_180_1 = xmm0_24
                var_160_1 = xmm1_10
                var_140_1 = xmm7_1
                var_200_1 = var_200_1 + var_2ac_1
            while (i != 1)

return result
