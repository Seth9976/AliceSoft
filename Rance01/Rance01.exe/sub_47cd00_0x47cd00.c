// 函数: sub_47cd00
// 地址: 0x47cd00
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

float var_274 = fconvert.s(fconvert.t(*arg7))
float var_254 = fconvert.s(fconvert.t(arg7[1]))
float var_2a4 = fconvert.s(fconvert.t(*arg9))
float var_2e0 = fconvert.s(fconvert.t(arg9[1]))
float var_2e8 = fconvert.s(fconvert.t(*arg11))
float var_2d8 = fconvert.s(fconvert.t(arg11[1]))
float var_2b4 = fconvert.s(fconvert.t(*arg12))
float var_2ec = fconvert.s(fconvert.t(arg12[1]))
float var_2ac = fconvert.s(fconvert.t(*arg8))
float var_2dc = fconvert.s(fconvert.t(arg8[1]))
float var_2a8 = fconvert.s(fconvert.t(*arg10))
float var_2e4 = fconvert.s(fconvert.t(arg10[1]))
float var_2b8 = fconvert.s(fconvert.t(*arg3))
float var_2f0 = fconvert.s(fconvert.t(arg3[1]))
long double x87_r7_14 = fconvert.t(var_2e0)
long double x87_r5 = fconvert.t(var_2d8)
long double x87_r3_2 = fconvert.t(var_2e8)
double var_288 = fconvert.d(x87_r3_2)
long double x87_r1 = fconvert.t(var_2a4)
double var_208 = fconvert.d(x87_r1)
long double x87_r2_5 = fconvert.t(var_254)
long double x87_r1_6 = fconvert.t(var_274)
float var_26c = fconvert.s(x87_r1_6 - fconvert.t(var_288))
long double x87_r2_15 = fconvert.t(var_2ec)
long double x87_r2_17 = fconvert.t(var_2b4)
float var_1fc = fconvert.s(fconvert.t(var_288) - x87_r2_17)
var_288.d = fconvert.s(x87_r7_14 - fconvert.t(fconvert.d(x87_r2_15)))
var_288:4.d = fconvert.s(fconvert.t(fconvert.d(x87_r2_17)) - fconvert.t(var_208))
float var_280 = fconvert.s(x87_r2_15 * fconvert.t(var_2a4) - x87_r7_14 * fconvert.t(var_2b4))
long double x87_r5_2 =
    fconvert.t(fconvert.s(fconvert.t(var_208) - fconvert.t(fconvert.d(x87_r1_6))))
long double x87_r3_8 = fconvert.t(fconvert.s(fconvert.t(fconvert.d(x87_r2_5)) - x87_r7_14))
long double x87_r2_22 = fconvert.t(fconvert.s(x87_r7_14 * fconvert.t(var_274)
    - fconvert.t(var_2a4) * fconvert.t(var_254)))
long double x87_r2_24 = fconvert.t(var_288:4.d)
long double x87_r1_17 = fconvert.t(var_288.d)
long double x87_r2_26 = fconvert.t(fconvert.s(x87_r5_2 * x87_r5 + x87_r3_8 * x87_r3_2 + x87_r2_22))
long double x87_r1_20 = fconvert.t(9.9999997473787516e-05)
x87_r1_20 - x87_r2_26
float* result
result.w = (x87_r1_20 < x87_r2_26 ? 1 : 0) << 8
    | (is_unordered.t(x87_r1_20, x87_r2_26) ? 1 : 0) << 0xa
    | (x87_r1_20 == x87_r2_26 ? 1 : 0) << 0xe | 0x800

if ((result:1.b & 0x41) != 0)
    long double x87_r0_5 =
        fconvert.t(fconvert.s(x87_r3_2 * x87_r1_17 + x87_r5 * x87_r2_24 + fconvert.t(var_280)))
    x87_r0_5 - x87_r1_20
    result.w = (x87_r0_5 < x87_r1_20 ? 1 : 0) << 8
        | (is_unordered.t(x87_r0_5, x87_r1_20) ? 1 : 0) << 0xa
        | (x87_r0_5 == x87_r1_20 ? 1 : 0) << 0xe | 0x1000
    bool p_1 = unimplemented  {test ah, 0x5}
    
    if (p_1)
        long double x87_r1_21 = float.t(1)
        long double x87_r1_22 = fconvert.t(fconvert.s(x87_r1_21 / x87_r1_21))
        float var_230_1 = fconvert.s(fconvert.t(fconvert.s(x87_r7_14 - x87_r5)) * x87_r1_22)
        float var_22c_1 = fconvert.s(fconvert.t(fconvert.s(x87_r3_2 - x87_r1)) * x87_r1_22)
        float var_220_1 = fconvert.s(fconvert.t(fconvert.s(x87_r5 - x87_r2_5)) * x87_r1_22)
        float var_21c_1 = fconvert.s(fconvert.t(var_26c) * x87_r1_22)
        float var_270_1 = fconvert.s(x87_r3_8 * x87_r1_22)
        float var_26c_1 = fconvert.s(x87_r5_2 * x87_r1_22)
        long double x87_r4_9 = float.t(1)
        long double x87_r4_10 = fconvert.t(fconvert.s(x87_r4_9 / x87_r4_9))
        float var_250_1 = fconvert.s(fconvert.t(fconvert.s(x87_r2_15 - x87_r5)) * x87_r4_10)
        float var_24c_1 = fconvert.s(fconvert.t(var_1fc) * x87_r4_10)
        float var_2a0_1 = fconvert.s(x87_r1_17 * x87_r4_10)
        float var_29c_1 = fconvert.s(x87_r2_24 * x87_r4_10)
        var_208.d = (*(*arg13 + 8))(0, 0)
        double var_238_1
        var_238_1.d = (*(*arg13 + 0x1c))()
        int32_t eax_8 = (*(*arg13 + 0x10))() - 1
        double var_2d0_1
        var_2d0_1.d = (*(*arg13 + 0x14))() - 1
        float var_2ac_2 =
            fconvert.s(fconvert.t(fconvert.s(fconvert.t(var_2ac) / fconvert.t(arg7[3]))))
        float var_2a8_2 =
            fconvert.s(fconvert.t(fconvert.s(fconvert.t(var_2a8) / fconvert.t(arg9[3]))))
        float var_2b8_2 =
            fconvert.s(fconvert.t(fconvert.s(fconvert.t(var_2b8) / fconvert.t(arg11[3]))))
        float var_2dc_2 =
            fconvert.s(fconvert.t(fconvert.s(fconvert.t(var_2dc) / fconvert.t(arg7[3]))))
        float var_2e4_2 =
            fconvert.s(fconvert.t(fconvert.s(fconvert.t(var_2e4) / fconvert.t(arg9[3]))))
        float var_2f0_2 =
            fconvert.s(fconvert.t(fconvert.s(fconvert.t(var_2f0) / fconvert.t(arg11[3]))))
        arg7[3]
        long double x87_r6_7 = float.t(1)
        float var_2f0_6 = fconvert.s(fconvert.t(fconvert.s(x87_r6_7 / fconvert.t(arg9[3]))))
        float var_2f0_8 = fconvert.s(fconvert.t(fconvert.s(x87_r6_7 / fconvert.t(arg11[3]))))
        long double x87_r7_46 = fconvert.t(var_274)
        long double x87_r6_13 = fconvert.t(var_2a4)
        x87_r6_13 - x87_r7_46
        float* eax_12
        eax_12.w = (x87_r6_13 < x87_r7_46 ? 1 : 0) << 8
            | (is_unordered.t(x87_r6_13, x87_r7_46) ? 1 : 0) << 0xa
            | (x87_r6_13 == x87_r7_46 ? 1 : 0) << 0xe | 0x3000
        float var_2d4_1
        long double x87_r6_14
        long double x87_r7_47
        
        if ((eax_12:1.b & 0x41) != 0)
            var_2d4_1 = fconvert.s(x87_r6_13)
            x87_r6_14 = x87_r7_46
            x87_r7_47 = x87_r6_13
        else
            x87_r6_14 = x87_r7_46
            x87_r7_47 = x87_r6_13
            var_2d4_1 = fconvert.s(x87_r6_14)
        
        long double x87_r5_13 = fconvert.t(var_2e8)
        long double x87_r4_17 = fconvert.t(var_2b4)
        x87_r4_17 - x87_r5_13
        eax_12.w = (x87_r4_17 < x87_r5_13 ? 1 : 0) << 8
            | (is_unordered.t(x87_r4_17, x87_r5_13) ? 1 : 0) << 0xa
            | (x87_r4_17 == x87_r5_13 ? 1 : 0) << 0xe | 0x2000
        float var_2e8_1
        long double x87_r4_18
        long double x87_r5_14
        
        if ((eax_12:1.b & 0x41) != 0)
            var_2e8_1 = fconvert.s(x87_r4_17)
            x87_r4_18 = x87_r5_13
            x87_r5_14 = x87_r4_17
        else
            x87_r4_18 = x87_r5_13
            x87_r5_14 = x87_r4_17
            var_2e8_1 = fconvert.s(x87_r4_18)
        
        long double x87_r3_13 = fconvert.t(var_2d4_1)
        long double x87_r2_33 = fconvert.t(var_2e8_1)
        x87_r2_33 - x87_r3_13
        eax_12.w = (x87_r2_33 < x87_r3_13 ? 1 : 0) << 8
            | (is_unordered.t(x87_r2_33, x87_r3_13) ? 1 : 0) << 0xa
            | (x87_r2_33 == x87_r3_13 ? 1 : 0) << 0xe | 0x1000
        
        if ((eax_12:1.b & 0x41) != 0)
            x87_r4_18 = x87_r2_33
        else
            x87_r3_13 = x87_r2_33
        
        int32_t ebx_1 = *arg6
        long double x87_r3_15 = fconvert.t(fconvert.s(float.t(ebx_1)))
        long double x87_r2_34 = fconvert.t(fconvert.s(x87_r3_13))
        x87_r2_34 - x87_r3_15
        eax_12.w = (x87_r2_34 < x87_r3_15 ? 1 : 0) << 8
            | (is_unordered.t(x87_r2_34, x87_r3_15) ? 1 : 0) << 0xa
            | (x87_r2_34 == x87_r3_15 ? 1 : 0) << 0xe | 0x1000
        bool p_2 = unimplemented  {test ah, 0x5}
        
        if (p_2)
            x87_r4_18 = x87_r2_34
        else
            x87_r3_15 = x87_r2_34
        
        x87_r6_14 - x87_r7_47
        int32_t var_2b4_1 = sub_70c710(fconvert.t(fconvert.s(x87_r3_15)))
        int32_t eax_13
        eax_13.w = (x87_r6_14 < x87_r7_47 ? 1 : 0) << 8
            | (is_unordered.t(x87_r6_14, x87_r7_47) ? 1 : 0) << 0xa
            | (x87_r6_14 == x87_r7_47 ? 1 : 0) << 0xe | 0x2000
        
        if ((eax_13:1.b & 0x41) != 0)
            x87_r5_14 = x87_r6_14
        
        long double x87_r7_48 = x87_r5_14
        x87_r4_18 - x87_r7_48
        eax_13.w = (x87_r4_18 < x87_r7_48 ? 1 : 0) << 8
            | (is_unordered.t(x87_r4_18, x87_r7_48) ? 1 : 0) << 0xa
            | (x87_r4_18 == x87_r7_48 ? 1 : 0) << 0xe | 0x3000
        
        if ((eax_13:1.b & 0x41) != 0)
            x87_r7_48 = x87_r4_18
        
        long double x87_r7_49 = fconvert.t(fconvert.s(x87_r7_47))
        long double x87_r6_16 = fconvert.t(fconvert.s(x87_r7_48))
        x87_r6_16 - x87_r7_49
        eax_13.w = (x87_r6_16 < x87_r7_49 ? 1 : 0) << 8
            | (is_unordered.t(x87_r6_16, x87_r7_49) ? 1 : 0) << 0xa
            | (x87_r6_16 == x87_r7_49 ? 1 : 0) << 0xe | 0x3000
        bool p_3 = unimplemented  {test ah, 0x5}
        
        if (not(p_3))
            x87_r7_49 = x87_r6_16
        
        long double x87_r7_51 = fconvert.t(fconvert.s(float.t(arg6[2] + ebx_1)))
        long double x87_r6_17 = fconvert.t(fconvert.s(x87_r7_49))
        x87_r6_17 - x87_r7_51
        int32_t eax_15
        eax_15.w = (x87_r6_17 < x87_r7_51 ? 1 : 0) << 8
            | (is_unordered.t(x87_r6_17, x87_r7_51) ? 1 : 0) << 0xa
            | (x87_r6_17 == x87_r7_51 ? 1 : 0) << 0xe | 0x3000
        
        if ((eax_15:1.b & 0x41) == 0)
            x87_r7_51 = x87_r6_17
        
        long double x87_r7_53 = fconvert.t(var_254)
        long double x87_r6_18 = fconvert.t(var_2e0)
        int32_t ebx_2 = sub_70c710(fconvert.t(fconvert.s(x87_r7_51)))
        x87_r6_18 - x87_r7_53
        int32_t eax_16
        eax_16.w = (x87_r6_18 < x87_r7_53 ? 1 : 0) << 8
            | (is_unordered.t(x87_r6_18, x87_r7_53) ? 1 : 0) << 0xa
            | (x87_r6_18 == x87_r7_53 ? 1 : 0) << 0xe | 0x3000
        float var_2e0_1
        long double x87_r6_19
        long double x87_r7_54
        
        if ((eax_16:1.b & 0x41) != 0)
            var_2e0_1 = fconvert.s(x87_r6_18)
            x87_r6_19 = x87_r7_53
            x87_r7_54 = x87_r6_18
        else
            x87_r6_19 = x87_r7_53
            x87_r7_54 = x87_r6_18
            var_2e0_1 = fconvert.s(x87_r6_19)
        
        long double x87_r5_16 = fconvert.t(var_2d8)
        long double x87_r4_20 = fconvert.t(var_2ec)
        x87_r4_20 - x87_r5_16
        eax_16.w = (x87_r4_20 < x87_r5_16 ? 1 : 0) << 8
            | (is_unordered.t(x87_r4_20, x87_r5_16) ? 1 : 0) << 0xa
            | (x87_r4_20 == x87_r5_16 ? 1 : 0) << 0xe | 0x2000
        float var_2ec_1
        long double x87_r4_21
        long double x87_r5_17
        
        if ((eax_16:1.b & 0x41) != 0)
            var_2ec_1 = fconvert.s(x87_r4_20)
            x87_r4_21 = x87_r5_16
            x87_r5_17 = x87_r4_20
        else
            x87_r4_21 = x87_r5_16
            x87_r5_17 = x87_r4_20
            var_2ec_1 = fconvert.s(x87_r4_21)
        
        long double x87_r3_17 = fconvert.t(var_2e0_1)
        long double x87_r2_35 = fconvert.t(var_2ec_1)
        x87_r2_35 - x87_r3_17
        eax_16.w = (x87_r2_35 < x87_r3_17 ? 1 : 0) << 8
            | (is_unordered.t(x87_r2_35, x87_r3_17) ? 1 : 0) << 0xa
            | (x87_r2_35 == x87_r3_17 ? 1 : 0) << 0xe | 0x1000
        
        if ((eax_16:1.b & 0x41) != 0)
            x87_r4_21 = x87_r2_35
        else
            x87_r3_17 = x87_r2_35
        
        int32_t ecx_5 = arg6[1]
        long double x87_r3_19 = fconvert.t(fconvert.s(float.t(ecx_5)))
        long double x87_r2_36 = fconvert.t(fconvert.s(x87_r3_17))
        x87_r2_36 - x87_r3_19
        eax_16.w = (x87_r2_36 < x87_r3_19 ? 1 : 0) << 8
            | (is_unordered.t(x87_r2_36, x87_r3_19) ? 1 : 0) << 0xa
            | (x87_r2_36 == x87_r3_19 ? 1 : 0) << 0xe | 0x1000
        bool p_4 = unimplemented  {test ah, 0x5}
        
        if (p_4)
            x87_r4_21 = x87_r2_36
        else
            x87_r3_19 = x87_r2_36
        
        x87_r6_19 - x87_r7_54
        int32_t esi_2 = sub_70c710(fconvert.t(fconvert.s(x87_r3_19)))
        int32_t eax_17
        eax_17.w = (x87_r6_19 < x87_r7_54 ? 1 : 0) << 8
            | (is_unordered.t(x87_r6_19, x87_r7_54) ? 1 : 0) << 0xa
            | (x87_r6_19 == x87_r7_54 ? 1 : 0) << 0xe | 0x2000
        
        if ((eax_17:1.b & 0x41) != 0)
            x87_r5_17 = x87_r6_19
        
        long double x87_r7_55 = x87_r5_17
        x87_r4_21 - x87_r7_55
        eax_17.w = (x87_r4_21 < x87_r7_55 ? 1 : 0) << 8
            | (is_unordered.t(x87_r4_21, x87_r7_55) ? 1 : 0) << 0xa
            | (x87_r4_21 == x87_r7_55 ? 1 : 0) << 0xe | 0x3000
        
        if ((eax_17:1.b & 0x41) != 0)
            x87_r7_55 = x87_r4_21
        
        long double x87_r7_56 = fconvert.t(fconvert.s(x87_r7_54))
        long double x87_r6_21 = fconvert.t(fconvert.s(x87_r7_55))
        x87_r6_21 - x87_r7_56
        eax_17.w = (x87_r6_21 < x87_r7_56 ? 1 : 0) << 8
            | (is_unordered.t(x87_r6_21, x87_r7_56) ? 1 : 0) << 0xa
            | (x87_r6_21 == x87_r7_56 ? 1 : 0) << 0xe | 0x3000
        bool p_5 = unimplemented  {test ah, 0x5}
        
        if (not(p_5))
            x87_r7_56 = x87_r6_21
        
        long double x87_r7_58 = fconvert.t(fconvert.s(float.t(arg6[3] + ecx_5)))
        long double x87_r6_22 = fconvert.t(fconvert.s(x87_r7_56))
        x87_r6_22 - x87_r7_58
        int32_t eax_19
        eax_19.w = (x87_r6_22 < x87_r7_58 ? 1 : 0) << 8
            | (is_unordered.t(x87_r6_22, x87_r7_58) ? 1 : 0) << 0xa
            | (x87_r6_22 == x87_r7_58 ? 1 : 0) << 0xe | 0x3000
        
        if ((eax_19:1.b & 0x41) == 0)
            x87_r7_58 = x87_r6_22
        
        int32_t j_3 = ebx_2 - var_2b4_1
        int32_t eax_20 = sub_70c710(fconvert.t(fconvert.s(x87_r7_58)))
        float var_2f0_16 = fconvert.s(fconvert.t(var_230_1))
        float var_2e4_3 = fconvert.s(fconvert.t(var_220_1))
        float var_2dc_3 = fconvert.s(fconvert.t(var_270_1))
        float var_1a0_1 = var_250_1
        float var_1e0_1 = var_2a0_1
        float var_200
        var_200.o = zx.o(0)
        int32_t xmm0_20 = (data_7581b0).d
        int32_t ecx_18 = ((arg14[3] << 8 | zx.d((*arg14).b)) << 8 | zx.d((arg14[1]).b)) << 8
        uint32_t eax_26 = zx.d((arg14[2]).b)
        int32_t i_2 = eax_20 - esi_2
        int32_t xmm0_22[0x4] = _mm_unpacklo_epi8(
            zx.o(((arg15[3] << 8 | zx.d((*arg15).b)) << 8 | zx.d((arg15[1]).b)) << 8)
                | zx.o((arg15[2]).b), 
            0)
        int128_t var_100_1 = zx.o(0)
        var_2d0_1.d = fconvert.s(float.t(var_2d0_1.d))
        int32_t xmm0_25 = var_2d0_1.d
        char* esi_3 = (*(*arg5 + 8))(var_2b4_1, esi_2)
        int32_t j_2 = j_3
        var_2d0_1.d = fconvert.s(float.t(esi_2))
        long double x87_r7_69 = fconvert.t(var_2d0_1.d)
        result = (*(*arg5 + 0x1c))() - (j_2 << 2)
        float* result_1 = result
        var_2d0_1.d = fconvert.s(x87_r7_69 * fconvert.t(var_22c_1) + fconvert.t(fconvert.s(
            fconvert.t(fconvert.s(x87_r1 * x87_r5 - x87_r3_2 * x87_r7_14)) * x87_r1_22)))
        float xmm0_26 = var_2d0_1.d
        float var_1d0_1 = xmm0_26
        float xmm1_10 = fconvert.s(x87_r7_69 * fconvert.t(var_21c_1) + fconvert.t(fconvert.s(
            fconvert.t(fconvert.s(x87_r2_5 * x87_r3_2 - x87_r1_6 * x87_r5)) * x87_r1_22)))
        float var_1b0_1 = xmm1_10
        float xmm3_1 = fconvert.s(x87_r7_69 * fconvert.t(var_26c_1)
            + fconvert.t(fconvert.s(x87_r1_22 * x87_r2_22)))
        float var_190_1 = xmm3_1
        var_2d0_1.d = fconvert.s(fconvert.t(var_24c_1) * x87_r7_69 + fconvert.t(fconvert.s(
            fconvert.t(fconvert.s(x87_r2_17 * x87_r5 - x87_r2_15 * x87_r3_2)) * x87_r4_10)))
        var_2d0_1.d = fconvert.s(fconvert.t(var_2d0_1.d))
        float xmm4_1 = var_2d0_1.d
        float var_170_1 = xmm4_1
        var_2d0_1.d = fconvert.s(x87_r7_69 * fconvert.t(var_29c_1)
            + fconvert.t(fconvert.s(x87_r4_10 * fconvert.t(var_280))))
        var_2d0_1.d = fconvert.s(fconvert.t(var_2d0_1.d))
        int128_t xmm7_1 = var_2d0_1.d
        int128_t var_150_1 = xmm7_1
        var_2d0_1.d = fconvert.s(float.t(var_2b4_1))
        long double x87_r7_74 = fconvert.t(var_2d0_1.d)
        var_2d0_1.d = fconvert.s(x87_r7_74 * fconvert.t(var_230_1))
        long double x87_r6_41 = x87_r7_74 * fconvert.t(var_270_1)
        var_270_1.o = var_2d0_1.d
        var_220_1.o = fconvert.s(x87_r7_74 * fconvert.t(var_220_1))
        var_230_1.o = fconvert.s(x87_r6_41)
        var_2d0_1.d = fconvert.s(x87_r7_74 * fconvert.t(var_250_1))
        var_2d0_1.d = fconvert.s(fconvert.t(var_2d0_1.d))
        var_250_1.o = var_2d0_1.d
        var_2d0_1.d = fconvert.s(x87_r7_74 * fconvert.t(var_2a0_1))
        var_2d0_1.d = fconvert.s(fconvert.t(var_2d0_1.d))
        var_2d0_1.o = var_2d0_1.d
        
        if (i_2 s> 0)
            float xmm5_3 = var_2f0_16
            float xmm6 = var_2e4_3
            int32_t i_1 = i_2
            int32_t i
            
            do
                float xmm2_9 = var_270_1 + xmm0_26
                float xmm0_28 = var_220_1 + xmm1_10
                float xmm1_12 = var_230_1 + xmm3_1
                float xmm3_3 = var_250_1 + xmm4_1
                float xmm4_3 = var_2d0_1.d f+ xmm7_1
                
                if (j_2 s> 0)
                    int32_t j_1 = j_2
                    int32_t j
                    
                    do
                        if (not(xmm0_28 f< 0) && not(xmm1_12 f< 0) && not(xmm3_3 f< 0)
                                && not(xmm4_3 f< 0))
                            float xmm6_4 =
                                xmm2_9 * fconvert.s(fconvert.t(fconvert.s(x87_r6_7 / x87_r6_7)))
                                + xmm0_28 * var_2f0_6 + xmm1_12 * var_2f0_8
                            var_2a0_1.o = _mm_rcp_ss(xmm6_4, xmm6_4)
                            int32_t xmm6_22[0x4] = zx.o(*((int.d(__minss_xmmss_memss(
                                __maxss_xmmss_memss(
                                    (xmm2_9 * var_2dc_2 + xmm0_28 * var_2e4_2 + xmm1_12 * var_2f0_2)
                                        * var_2a0_1, 
                                    0), 
                                xmm0_25) f* xmm0_20) s>> 7) * var_238_1.d + var_208.d + (int.d(
                                __minss_xmmss_memss(
                                __maxss_xmmss_memss(
                                    (xmm2_9 * var_2ac_2 + xmm0_28 * var_2a8_2 + xmm1_12 * var_2b8_2)
                                        * var_2a0_1, 
                                    0), 
                                fconvert.s(float.t(eax_8))) f* xmm0_20) s>> 7 << 2)))
                            int32_t edx_19
                            edx_19.b = *esi_3
                            int32_t xmm6_27 = __paddusb_xmmdq_memdq(
                                _mm_packus_epi16(
                                    _mm_srli_epi16(
                                        __pmullw_xmmdq_memdq(_mm_unpacklo_epi8(xmm6_22, 0), 
                                            xmm0_22), 
                                        8), 
                                    zx.o(0)), 
                                zx.o(ecx_18) | zx.o(eax_26))
                            var_288.d = xmm6_27
                            char ebx_7 =
                                (((zx.d(xmm6_27.b) - zx.d(edx_19.b)) * arg4) s>> 8).b + edx_19.b
                            edx_19.b = esi_3[1]
                            xmm5_3 = var_2f0_16
                            xmm6 = var_2e4_3
                            esi_3[1] =
                                (((zx.d(xmm6_27:1.b) - zx.d(edx_19.b)) * arg4) s>> 8).b + edx_19.b
                            char ecx_29 = esi_3[2]
                            *esi_3 = ebx_7
                            esi_3[2] =
                                (((zx.d(var_288:2.b) - zx.d(ecx_29)) * arg4) s>> 8).b + ecx_29
                        
                        xmm4_3 = xmm4_3 + var_1e0_1
                        xmm3_3 = xmm3_3 + var_1a0_1
                        xmm1_12 = xmm1_12 + var_2dc_3
                        esi_3 = &esi_3[4]
                        j = j_1
                        j_1 -= 1
                        xmm0_28 = xmm0_28 + xmm6
                        xmm2_9 = xmm2_9 + xmm5_3
                    while (j != 1)
                    xmm7_1 = var_150_1
                    j_2 = j_3
                    result = result_1
                
                xmm0_26 = var_1d0_1 + fconvert.s(fconvert.t(var_22c_1))
                xmm1_10 = var_1b0_1 + fconvert.s(fconvert.t(var_21c_1))
                xmm3_1 = var_190_1 + fconvert.s(fconvert.t(var_26c_1))
                xmm4_1 = var_170_1 + var_24c_1
                xmm7_1 = xmm7_1 f+ var_29c_1
                esi_3 += result
                i = i_1
                i_1 -= 1
                var_1d0_1 = xmm0_26
                var_1b0_1 = xmm1_10
                var_190_1 = xmm3_1
                var_170_1 = xmm4_1
                var_150_1 = xmm7_1
            while (i != 1)

return result
