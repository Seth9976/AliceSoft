// 函数: sub_466e40
// 地址: 0x466e40
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

float var_274 = fconvert.s(fconvert.t(*arg6))
float var_278 = fconvert.s(fconvert.t(arg6[1]))
float var_2d0 = fconvert.s(fconvert.t(*arg8))
float var_2cc = fconvert.s(fconvert.t(arg8[1]))
float var_2e4 = fconvert.s(fconvert.t(*arg9))
float var_2c4 = fconvert.s(fconvert.t(arg9[1]))
float var_2bc = fconvert.s(fconvert.t(*arg10))
float var_2e8 = fconvert.s(fconvert.t(arg10[1]))
float var_2ac = fconvert.s(fconvert.t(*arg7))
float var_2c8 = fconvert.s(fconvert.t(arg7[1]))
float var_2a4 = fconvert.s(fconvert.t(*arg2))
float var_2d4 = fconvert.s(fconvert.t(arg2[1]))
float var_2a8 = fconvert.s(fconvert.t(*arg3))
float var_2ec = fconvert.s(fconvert.t(arg3[1]))
long double x87_r7_14 = fconvert.t(var_2cc)
long double x87_r5 = fconvert.t(var_2c4)
long double x87_r3_2 = fconvert.t(var_2e4)
double var_250 = fconvert.d(x87_r3_2)
long double x87_r1 = fconvert.t(var_2d0)
double var_2e0 = fconvert.d(x87_r1)
long double x87_r2_5 = fconvert.t(var_278)
long double x87_r1_6 = fconvert.t(var_274)
float var_26c = fconvert.s(x87_r1_6 - fconvert.t(var_250))
long double x87_r2_15 = fconvert.t(var_2e8)
long double x87_r2_17 = fconvert.t(var_2bc)
float var_23c = fconvert.s(fconvert.t(var_250) - x87_r2_17)
var_250.d = fconvert.s(x87_r7_14 - fconvert.t(fconvert.d(x87_r2_15)))
var_250:4.d = fconvert.s(fconvert.t(fconvert.d(x87_r2_17)) - fconvert.t(var_2e0))
float var_248 = fconvert.s(x87_r2_15 * fconvert.t(var_2d0) - x87_r7_14 * fconvert.t(var_2bc))
long double x87_r5_2 =
    fconvert.t(fconvert.s(fconvert.t(var_2e0) - fconvert.t(fconvert.d(x87_r1_6))))
long double x87_r3_8 = fconvert.t(fconvert.s(fconvert.t(fconvert.d(x87_r2_5)) - x87_r7_14))
long double x87_r2_22 = fconvert.t(fconvert.s(x87_r7_14 * fconvert.t(var_274)
    - fconvert.t(var_2d0) * fconvert.t(var_278)))
double var_2b8_1
var_2b8_1.d = fconvert.s(x87_r5_2 * x87_r5 + x87_r3_8 * x87_r3_2 + x87_r2_22)
long double x87_r2_24 = fconvert.t(var_250:4.d)
long double x87_r1_17 = fconvert.t(var_250.d)
long double x87_r2_26 = fconvert.t(var_2b8_1.d)
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
        var_2b8_1.d = fconvert.s(x87_r1_21 / x87_r1_21)
        long double x87_r1_22 = fconvert.t(var_2b8_1.d)
        float var_230_1 = fconvert.s(fconvert.t(fconvert.s(x87_r7_14 - x87_r5)) * x87_r1_22)
        float var_22c_1 = fconvert.s(fconvert.t(fconvert.s(x87_r3_2 - x87_r1)) * x87_r1_22)
        float var_220_1 = fconvert.s(fconvert.t(fconvert.s(x87_r5 - x87_r2_5)) * x87_r1_22)
        float var_21c_1 = fconvert.s(fconvert.t(var_26c) * x87_r1_22)
        float var_270_1 = fconvert.s(x87_r3_8 * x87_r1_22)
        float var_26c_1 = fconvert.s(x87_r5_2 * x87_r1_22)
        long double x87_r4_9 = float.t(1)
        var_2b8_1.d = fconvert.s(x87_r4_9 / x87_r4_9)
        long double x87_r4_10 = fconvert.t(var_2b8_1.d)
        float var_290_1 = fconvert.s(fconvert.t(fconvert.s(x87_r2_15 - x87_r5)) * x87_r4_10)
        float var_28c_1 = fconvert.s(fconvert.t(var_23c) * x87_r4_10)
        float var_2a0_1 = fconvert.s(x87_r1_17 * x87_r4_10)
        float var_29c_1 = fconvert.s(x87_r2_24 * x87_r4_10)
        int32_t eax_2 = (*(*arg11 + 8))(0, 0)
        var_2b8_1.d = (*(*arg11 + 0x1c))()
        double var_260_1
        var_260_1.d = (*(*arg11 + 0x10))() - 1
        var_2e0.d = (*(*arg11 + 0x14))() - 1
        float var_2ac_2 =
            fconvert.s(fconvert.t(fconvert.s(fconvert.t(var_2ac) / fconvert.t(arg6[3]))))
        float var_2a4_2 =
            fconvert.s(fconvert.t(fconvert.s(fconvert.t(var_2a4) / fconvert.t(arg8[3]))))
        float var_2a8_2 =
            fconvert.s(fconvert.t(fconvert.s(fconvert.t(var_2a8) / fconvert.t(arg9[3]))))
        float var_2c8_2 =
            fconvert.s(fconvert.t(fconvert.s(fconvert.t(var_2c8) / fconvert.t(arg6[3]))))
        float var_2d4_2 =
            fconvert.s(fconvert.t(fconvert.s(fconvert.t(var_2d4) / fconvert.t(arg8[3]))))
        float var_2ec_2 =
            fconvert.s(fconvert.t(fconvert.s(fconvert.t(var_2ec) / fconvert.t(arg9[3]))))
        arg6[3]
        long double x87_r6_7 = float.t(1)
        float var_2ec_6 = fconvert.s(fconvert.t(fconvert.s(x87_r6_7 / fconvert.t(arg8[3]))))
        float var_2ec_8 = fconvert.s(fconvert.t(fconvert.s(x87_r6_7 / fconvert.t(arg9[3]))))
        long double x87_r7_46 = fconvert.t(var_274)
        long double x87_r6_13 = fconvert.t(var_2d0)
        x87_r6_13 - x87_r7_46
        float* eax_11
        eax_11.w = (x87_r6_13 < x87_r7_46 ? 1 : 0) << 8
            | (is_unordered.t(x87_r6_13, x87_r7_46) ? 1 : 0) << 0xa
            | (x87_r6_13 == x87_r7_46 ? 1 : 0) << 0xe | 0x3000
        float var_2c0_1
        long double x87_r6_14
        long double x87_r7_47
        
        if ((eax_11:1.b & 0x41) != 0)
            var_2c0_1 = fconvert.s(x87_r6_13)
            x87_r6_14 = x87_r7_46
            x87_r7_47 = x87_r6_13
        else
            x87_r6_14 = x87_r7_46
            x87_r7_47 = x87_r6_13
            var_2c0_1 = fconvert.s(x87_r6_14)
        
        long double x87_r5_13 = fconvert.t(var_2e4)
        long double x87_r4_17 = fconvert.t(var_2bc)
        x87_r4_17 - x87_r5_13
        eax_11.w = (x87_r4_17 < x87_r5_13 ? 1 : 0) << 8
            | (is_unordered.t(x87_r4_17, x87_r5_13) ? 1 : 0) << 0xa
            | (x87_r4_17 == x87_r5_13 ? 1 : 0) << 0xe | 0x2000
        float var_2e4_1
        long double x87_r4_18
        long double x87_r5_14
        
        if ((eax_11:1.b & 0x41) != 0)
            var_2e4_1 = fconvert.s(x87_r4_17)
            x87_r4_18 = x87_r5_13
            x87_r5_14 = x87_r4_17
        else
            x87_r4_18 = x87_r5_13
            x87_r5_14 = x87_r4_17
            var_2e4_1 = fconvert.s(x87_r4_18)
        
        long double x87_r3_13 = fconvert.t(var_2c0_1)
        long double x87_r2_33 = fconvert.t(var_2e4_1)
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
        int32_t var_2bc_1 = sub_70c710(fconvert.t(fconvert.s(x87_r3_15)))
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
        
        long double x87_r7_53 = fconvert.t(var_278)
        long double x87_r6_18 = fconvert.t(var_2cc)
        int32_t esi_2 = sub_70c710(fconvert.t(fconvert.s(x87_r7_51)))
        x87_r6_18 - x87_r7_53
        int32_t eax_15
        eax_15.w = (x87_r6_18 < x87_r7_53 ? 1 : 0) << 8
            | (is_unordered.t(x87_r6_18, x87_r7_53) ? 1 : 0) << 0xa
            | (x87_r6_18 == x87_r7_53 ? 1 : 0) << 0xe | 0x3000
        float var_2cc_1
        long double x87_r6_19
        long double x87_r7_54
        
        if ((eax_15:1.b & 0x41) != 0)
            var_2cc_1 = fconvert.s(x87_r6_18)
            x87_r6_19 = x87_r7_53
            x87_r7_54 = x87_r6_18
        else
            x87_r6_19 = x87_r7_53
            x87_r7_54 = x87_r6_18
            var_2cc_1 = fconvert.s(x87_r6_19)
        
        long double x87_r5_16 = fconvert.t(var_2c4)
        long double x87_r4_20 = fconvert.t(var_2e8)
        x87_r4_20 - x87_r5_16
        eax_15.w = (x87_r4_20 < x87_r5_16 ? 1 : 0) << 8
            | (is_unordered.t(x87_r4_20, x87_r5_16) ? 1 : 0) << 0xa
            | (x87_r4_20 == x87_r5_16 ? 1 : 0) << 0xe | 0x2000
        float var_2e8_1
        long double x87_r4_21
        long double x87_r5_17
        
        if ((eax_15:1.b & 0x41) != 0)
            var_2e8_1 = fconvert.s(x87_r4_20)
            x87_r4_21 = x87_r5_16
            x87_r5_17 = x87_r4_20
        else
            x87_r4_21 = x87_r5_16
            x87_r5_17 = x87_r4_20
            var_2e8_1 = fconvert.s(x87_r4_21)
        
        long double x87_r3_17 = fconvert.t(var_2cc_1)
        long double x87_r2_35 = fconvert.t(var_2e8_1)
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
        
        int32_t j_3 = esi_2 - var_2bc_1
        int32_t eax_19 = sub_70c710(fconvert.t(fconvert.s(x87_r7_58)))
        float var_2ec_16 = fconvert.s(fconvert.t(var_230_1))
        float var_2d4_3 = fconvert.s(fconvert.t(var_220_1))
        float var_2c8_3 = fconvert.s(fconvert.t(var_270_1))
        float var_1d0_1 = var_290_1
        float var_1c0_1 = var_2a0_1
        float var_240
        var_240.o = zx.o(0)
        float var_100_1 = (data_7581c0).d
        int32_t xmm0_21 = (data_7581b0).d
        int32_t ecx_18 = ((arg12[3] << 8 | zx.d((*arg12).b)) << 8 | zx.d((arg12[1]).b)) << 8
        uint32_t eax_25 = zx.d((arg12[2]).b)
        int32_t i_2 = eax_19 - edi_2
        int32_t xmm0_23[0x4] = _mm_unpacklo_epi8(
            zx.o(((arg13[3] << 8 | zx.d((*arg13).b)) << 8 | zx.d((arg13[1]).b)) << 8)
                | zx.o((arg13[2]).b), 
            0)
        uint128_t xmm0_24 = zx.o(ecx_18) | zx.o(eax_25)
        int128_t var_210_1 = zx.o(0)
        var_260_1.d = fconvert.s(float.t(var_260_1.d))
        int32_t xmm0_25 = var_260_1.d
        var_2e0.d = fconvert.s(float.t(var_2e0.d))
        int32_t xmm0_26 = var_2e0.d
        void* var_2d0_1 = (*(*arg4 + 8))(var_2bc_1, edi_2)
        int32_t j_2 = j_3
        var_2e0.d = fconvert.s(float.t(edi_2))
        long double x87_r7_69 = fconvert.t(var_2e0.d)
        result = (*(*arg4 + 0x1c))() - (j_2 << 2)
        float* result_1 = result
        var_2e0.d = fconvert.s(x87_r7_69 * fconvert.t(var_22c_1) + fconvert.t(fconvert.s(
            fconvert.t(fconvert.s(x87_r1 * x87_r5 - x87_r3_2 * x87_r7_14)) * x87_r1_22)))
        float xmm0_27 = var_2e0.d
        float var_1a0_1 = xmm0_27
        var_260_1.d = fconvert.s(x87_r7_69 * fconvert.t(var_21c_1) + fconvert.t(fconvert.s(
            fconvert.t(fconvert.s(x87_r2_5 * x87_r3_2 - x87_r1_6 * x87_r5)) * x87_r1_22)))
        float xmm1_10 = var_260_1.d
        float var_180_1 = xmm1_10
        float xmm7_1 = fconvert.s(x87_r7_69 * fconvert.t(var_26c_1)
            + fconvert.t(fconvert.s(x87_r1_22 * x87_r2_22)))
        float var_160_1 = xmm7_1
        var_2e0.d = fconvert.s(fconvert.t(var_28c_1) * x87_r7_69 + fconvert.t(fconvert.s(
            fconvert.t(fconvert.s(x87_r2_17 * x87_r5 - x87_r2_15 * x87_r3_2)) * x87_r4_10)))
        var_2e0.d = fconvert.s(fconvert.t(var_2e0.d))
        float var_200_1 = var_2e0.d
        var_2e0.d = fconvert.s(x87_r7_69 * fconvert.t(var_29c_1)
            + fconvert.t(fconvert.s(x87_r4_10 * fconvert.t(var_248))))
        var_2e0.d = fconvert.s(fconvert.t(var_2e0.d))
        float var_1f0_1 = var_2e0.d
        var_2e0.d = fconvert.s(float.t(var_2bc_1))
        long double x87_r7_74 = fconvert.t(var_2e0.d)
        var_2e0.d = fconvert.s(x87_r7_74 * fconvert.t(var_230_1))
        var_260_1.d = fconvert.s(x87_r7_74 * fconvert.t(var_220_1))
        long double x87_r6_41 = x87_r7_74 * fconvert.t(var_270_1)
        var_270_1.o = var_2e0.d
        var_220_1.o = var_260_1.d
        var_230_1.o = fconvert.s(x87_r6_41)
        var_2e0.d = fconvert.s(x87_r7_74 * fconvert.t(var_290_1))
        var_2e0.d = fconvert.s(fconvert.t(var_2e0.d))
        var_260_1.o = var_2e0.d
        var_2e0.d = fconvert.s(x87_r7_74 * fconvert.t(var_2a0_1))
        var_2e0.d = fconvert.s(fconvert.t(var_2e0.d))
        float xmm3_4 = var_2e0.d
        
        if (i_2 s> 0)
            float xmm6 = var_2ec_16
            int32_t i_1 = i_2
            int32_t i
            
            do
                float xmm5_2 = var_270_1 + xmm0_27
                int128_t xmm0_29 = var_260_1.d + var_200_1
                float xmm3_6 = var_220_1 + xmm1_10
                int128_t xmm1_12 = xmm3_4 + var_1f0_1
                float xmm4_2 = var_230_1 + xmm7_1
                var_2a0_1.o = xmm0_29
                var_290_1.o = xmm1_12
                
                if (j_2 s> 0)
                    int32_t j_1 = j_2
                    int32_t j
                    
                    do
                        if (xmm3_6 f< 0 || xmm4_2 f< 0 || xmm0_29 f< 0 || xmm1_12 f< 0)
                            var_2d0_1 += 4
                        else
                            float xmm1_16 =
                                xmm5_2 * fconvert.s(fconvert.t(fconvert.s(x87_r6_7 / x87_r6_7)))
                                + xmm3_6 * var_2ec_6 + xmm4_2 * var_2ec_8
                            float xmm1_17 = _mm_rcp_ss(xmm1_16, xmm1_16)
                            float xmm0_38 = (xmm5_2 * var_2ac_2 + xmm3_6 * var_2a4_2
                                + xmm4_2 * var_2a8_2) * xmm1_17
                            float xmm1_22 = (xmm5_2 * var_2c8_2 + xmm3_6 * var_2d4_2
                                + xmm4_2 * var_2ec_2) * xmm1_17
                            int32_t edi_4 = int.d(
                                __minss_xmmss_memss(__maxss_xmmss_memss(xmm0_38, 0), xmm0_25)
                                f* xmm0_21)
                            int32_t edx_17 = int.d(
                                __minss_xmmss_memss(__maxss_xmmss_memss(xmm1_22, 0), xmm0_26)
                                f* xmm0_21)
                            float xmm0_41 =
                                __minss_xmmss_memss(_mm_max_ss(xmm0_38 + var_100_1, 0), xmm0_25)
                            int32_t edx_19 = (edx_17 s>> 7) * var_2b8_1.d
                            float xmm1_25 =
                                __minss_xmmss_memss(_mm_max_ss(xmm1_22 + var_100_1, 0), xmm0_26)
                            var_2e0.d = int.d(xmm0_41)
                            int32_t eax_37 = var_2e0.d * 4
                            var_250.d = _mm_adds_epu8(
                                _mm_packus_epi16(
                                    _mm_srli_epi16(
                                        _mm_mullo_epi16(
                                            _mm_unpacklo_epi8(
                                                zx.o(*(edx_19 + (edi_4 s>> 7 << 2) + eax_2)), 0), 
                                            xmm0_23), 
                                        8), 
                                    zx.o(0)), 
                                xmm0_24)
                            int16_t xmm6_27[0x8] = _mm_packus_epi16(
                                _mm_srli_epi16(
                                    _mm_mullo_epi16(
                                        _mm_unpacklo_epi8(zx.o(*(edx_19 + eax_37 + eax_2)), 0), 
                                        xmm0_23), 
                                    8), 
                                zx.o(0))
                            int32_t eax_38 = *(int.d(xmm1_25) * var_2b8_1.d + eax_37 + eax_2)
                            int32_t xmm6_28 = _mm_adds_epu8(xmm6_27, xmm0_24)
                            int32_t xmm6_34 = _mm_adds_epu8(
                                _mm_packus_epi16(
                                    _mm_srli_epi16(
                                        _mm_mullo_epi16(_mm_unpacklo_epi8(zx.o(eax_38), 0), 
                                            xmm0_23), 
                                        8), 
                                    zx.o(0)), 
                                xmm0_24)
                            int32_t xmm0_44[0x4] = _mm_unpacklo_epi8(zx.o(var_250.d), 0)
                            uint128_t xmm6_35 = zx.o(sx.d(edi_4.w & 0x7f))
                            int32_t xmm6_37[0x4] =
                                _mm_shuffle_epi32(_mm_unpacklo_epi16(xmm6_35, xmm6_35), 0)
                            int32_t xmm0_45[0x4] = _mm_adds_epi16(xmm0_44, 
                                _mm_srai_epi16(
                                    _mm_mullo_epi16(
                                        _mm_subs_epi16(_mm_unpacklo_epi8(zx.o(xmm6_28), 0), 
                                            xmm0_44), 
                                        xmm6_37), 
                                    7))
                            var_250.o = xmm0_45
                            int32_t* eax_40 = var_2d0_1
                            int32_t xmm0_47[0x4] = _mm_unpacklo_epi8(zx.o(xmm6_34), 0)
                            int32_t xmm1_28[0x4] = _mm_unpacklo_epi8(zx.o(xmm6_34), 0)
                            xmm1_12 = var_290_1.o
                            uint128_t xmm0_51 = zx.o(sx.d(edx_17.w & 0x7f))
                            xmm0_29 = var_2a0_1.o
                            xmm6 = var_2ec_16
                            *eax_40 = _mm_packus_epi16(
                                _mm_adds_epi16(xmm0_45, 
                                    _mm_srai_epi16(
                                        _mm_mullo_epi16(
                                            __psubsw_xmmdq_memdq(
                                                _mm_adds_epi16(xmm1_28, 
                                                    _mm_srai_epi16(
                                                        __pmullw_xmmdq_memdq(
                                                            _mm_subs_epi16(xmm0_47, xmm1_28), 
                                                            xmm6_37), 
                                                        7)), 
                                                var_250.o), 
                                            _mm_shuffle_epi32(_mm_unpacklo_epi16(xmm0_51, xmm0_51), 
                                            0)), 
                                        7)), 
                                zx.o(0))
                            var_2d0_1 = &eax_40[1]
                        
                        j = j_1
                        j_1 -= 1
                        xmm1_12 = xmm1_12 f+ var_1c0_1
                        xmm0_29 = xmm0_29 f+ var_1d0_1
                        xmm4_2 = xmm4_2 + var_2c8_3
                        xmm3_6 = xmm3_6 + var_2d4_3
                        var_290_1.o = xmm1_12
                        var_2a0_1.o = xmm0_29
                        xmm5_2 = xmm5_2 + xmm6
                    while (j != 1)
                    j_2 = j_3
                    result = result_1
                
                var_2d0_1 += result
                i = i_1
                i_1 -= 1
                xmm0_27 = var_1a0_1 + fconvert.s(fconvert.t(var_22c_1))
                xmm1_10 = var_180_1 + fconvert.s(fconvert.t(var_21c_1))
                xmm7_1 = var_160_1 + fconvert.s(fconvert.t(var_26c_1))
                var_200_1 = var_200_1 + var_28c_1
                var_1a0_1 = xmm0_27
                var_180_1 = xmm1_10
                var_160_1 = xmm7_1
                var_1f0_1 = var_1f0_1 + var_29c_1
            while (i != 1)

return result
