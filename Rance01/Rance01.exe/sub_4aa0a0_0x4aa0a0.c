// 函数: sub_4aa0a0
// 地址: 0x4aa0a0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

float var_244 = fconvert.s(fconvert.t(*arg6))
float var_248 = fconvert.s(fconvert.t(arg6[1]))
float var_264 = fconvert.s(fconvert.t(*arg8))
float var_2a0 = fconvert.s(fconvert.t(arg8[1]))
float var_2a8 = fconvert.s(fconvert.t(*arg2))
float var_298 = fconvert.s(fconvert.t(arg2[1]))
float var_274 = fconvert.s(fconvert.t(*arg10))
float var_2ac = fconvert.s(fconvert.t(arg10[1]))
float var_26c = fconvert.s(fconvert.t(*arg7))
float var_29c = fconvert.s(fconvert.t(arg7[1]))
float var_268 = fconvert.s(fconvert.t(*arg9))
float var_2a4 = fconvert.s(fconvert.t(arg9[1]))
float var_278 = fconvert.s(fconvert.t(*arg3))
float var_2b0 = fconvert.s(fconvert.t(arg3[1]))
long double x87_r7_14 = fconvert.t(var_2a0)
long double x87_r5 = fconvert.t(var_298)
long double x87_r3_2 = fconvert.t(var_2a8)
double var_218 = fconvert.d(x87_r3_2)
long double x87_r1 = fconvert.t(var_264)
double var_1d8 = fconvert.d(x87_r1)
long double x87_r2_5 = fconvert.t(var_248)
long double x87_r1_6 = fconvert.t(var_244)
float var_22c = fconvert.s(x87_r1_6 - fconvert.t(var_218))
long double x87_r2_15 = fconvert.t(var_2ac)
long double x87_r2_17 = fconvert.t(var_274)
float var_1cc = fconvert.s(fconvert.t(var_218) - x87_r2_17)
var_218.d = fconvert.s(x87_r7_14 - fconvert.t(fconvert.d(x87_r2_15)))
var_218:4.d = fconvert.s(fconvert.t(fconvert.d(x87_r2_17)) - fconvert.t(var_1d8))
float var_210 = fconvert.s(x87_r2_15 * fconvert.t(var_264) - x87_r7_14 * fconvert.t(var_274))
long double x87_r5_2 =
    fconvert.t(fconvert.s(fconvert.t(var_1d8) - fconvert.t(fconvert.d(x87_r1_6))))
long double x87_r3_8 = fconvert.t(fconvert.s(fconvert.t(fconvert.d(x87_r2_5)) - x87_r7_14))
long double x87_r2_22 = fconvert.t(fconvert.s(x87_r7_14 * fconvert.t(var_244)
    - fconvert.t(var_264) * fconvert.t(var_248)))
long double x87_r2_24 = fconvert.t(var_218:4.d)
long double x87_r1_17 = fconvert.t(var_218.d)
long double x87_r2_26 = fconvert.t(fconvert.s(x87_r5_2 * x87_r5 + x87_r3_8 * x87_r3_2 + x87_r2_22))
long double x87_r1_20 = fconvert.t(9.9999997473787516e-05)
x87_r1_20 - x87_r2_26
float* result
result.w = (x87_r1_20 < x87_r2_26 ? 1 : 0) << 8
    | (is_unordered.t(x87_r1_20, x87_r2_26) ? 1 : 0) << 0xa
    | (x87_r1_20 == x87_r2_26 ? 1 : 0) << 0xe | 0x800

if ((result:1.b & 0x41) != 0)
    long double x87_r0_5 =
        fconvert.t(fconvert.s(x87_r3_2 * x87_r1_17 + x87_r5 * x87_r2_24 + fconvert.t(var_210)))
    x87_r0_5 - x87_r1_20
    result.w = (x87_r0_5 < x87_r1_20 ? 1 : 0) << 8
        | (is_unordered.t(x87_r0_5, x87_r1_20) ? 1 : 0) << 0xa
        | (x87_r0_5 == x87_r1_20 ? 1 : 0) << 0xe | 0x1000
    bool p_1 = unimplemented  {test ah, 0x5}
    
    if (p_1)
        long double x87_r1_21 = float.t(1)
        long double x87_r1_22 = fconvert.t(fconvert.s(x87_r1_21 / x87_r1_21))
        float var_200_1 = fconvert.s(fconvert.t(fconvert.s(x87_r7_14 - x87_r5)) * x87_r1_22)
        float var_1fc_1 = fconvert.s(fconvert.t(fconvert.s(x87_r3_2 - x87_r1)) * x87_r1_22)
        float var_1f0_1 = fconvert.s(fconvert.t(fconvert.s(x87_r5 - x87_r2_5)) * x87_r1_22)
        float var_1ec_1 = fconvert.s(fconvert.t(var_22c) * x87_r1_22)
        float var_230_1 = fconvert.s(x87_r3_8 * x87_r1_22)
        float var_22c_1 = fconvert.s(x87_r5_2 * x87_r1_22)
        long double x87_r4_9 = float.t(1)
        long double x87_r4_10 = fconvert.t(fconvert.s(x87_r4_9 / x87_r4_9))
        float var_240_1 = fconvert.s(fconvert.t(fconvert.s(x87_r2_15 - x87_r5)) * x87_r4_10)
        float var_23c_1 = fconvert.s(fconvert.t(var_1cc) * x87_r4_10)
        float var_260_1 = fconvert.s(x87_r1_17 * x87_r4_10)
        float var_25c_1 = fconvert.s(x87_r2_24 * x87_r4_10)
        var_1d8.d = (*(*arg12 + 8))(0, 0)
        double var_208_1
        var_208_1.d = (*(*arg12 + 0x1c))()
        int32_t eax_8 = (*(*arg12 + 0x10))() - 1
        double var_290_1
        var_290_1.d = (*(*arg12 + 0x14))() - 1
        float var_26c_2 =
            fconvert.s(fconvert.t(fconvert.s(fconvert.t(var_26c) / fconvert.t(arg6[3]))))
        float var_268_2 =
            fconvert.s(fconvert.t(fconvert.s(fconvert.t(var_268) / fconvert.t(arg8[3]))))
        float var_278_2 =
            fconvert.s(fconvert.t(fconvert.s(fconvert.t(var_278) / fconvert.t(arg2[3]))))
        float var_29c_2 =
            fconvert.s(fconvert.t(fconvert.s(fconvert.t(var_29c) / fconvert.t(arg6[3]))))
        float var_2a4_2 =
            fconvert.s(fconvert.t(fconvert.s(fconvert.t(var_2a4) / fconvert.t(arg8[3]))))
        float var_2b0_2 =
            fconvert.s(fconvert.t(fconvert.s(fconvert.t(var_2b0) / fconvert.t(arg2[3]))))
        arg6[3]
        long double x87_r6_7 = float.t(1)
        float var_2b0_6 = fconvert.s(fconvert.t(fconvert.s(x87_r6_7 / fconvert.t(arg8[3]))))
        float var_2b0_8 = fconvert.s(fconvert.t(fconvert.s(x87_r6_7 / fconvert.t(arg2[3]))))
        long double x87_r7_46 = fconvert.t(var_244)
        long double x87_r6_13 = fconvert.t(var_264)
        x87_r6_13 - x87_r7_46
        float* eax_12
        eax_12.w = (x87_r6_13 < x87_r7_46 ? 1 : 0) << 8
            | (is_unordered.t(x87_r6_13, x87_r7_46) ? 1 : 0) << 0xa
            | (x87_r6_13 == x87_r7_46 ? 1 : 0) << 0xe | 0x3000
        float var_294_1
        long double x87_r6_14
        long double x87_r7_47
        
        if ((eax_12:1.b & 0x41) != 0)
            var_294_1 = fconvert.s(x87_r6_13)
            x87_r6_14 = x87_r7_46
            x87_r7_47 = x87_r6_13
        else
            x87_r6_14 = x87_r7_46
            x87_r7_47 = x87_r6_13
            var_294_1 = fconvert.s(x87_r6_14)
        
        long double x87_r5_13 = fconvert.t(var_2a8)
        long double x87_r4_17 = fconvert.t(var_274)
        x87_r4_17 - x87_r5_13
        eax_12.w = (x87_r4_17 < x87_r5_13 ? 1 : 0) << 8
            | (is_unordered.t(x87_r4_17, x87_r5_13) ? 1 : 0) << 0xa
            | (x87_r4_17 == x87_r5_13 ? 1 : 0) << 0xe | 0x2000
        float var_2a8_1
        long double x87_r4_18
        long double x87_r5_14
        
        if ((eax_12:1.b & 0x41) != 0)
            var_2a8_1 = fconvert.s(x87_r4_17)
            x87_r4_18 = x87_r5_13
            x87_r5_14 = x87_r4_17
        else
            x87_r4_18 = x87_r5_13
            x87_r5_14 = x87_r4_17
            var_2a8_1 = fconvert.s(x87_r4_18)
        
        long double x87_r3_13 = fconvert.t(var_294_1)
        long double x87_r2_33 = fconvert.t(var_2a8_1)
        x87_r2_33 - x87_r3_13
        eax_12.w = (x87_r2_33 < x87_r3_13 ? 1 : 0) << 8
            | (is_unordered.t(x87_r2_33, x87_r3_13) ? 1 : 0) << 0xa
            | (x87_r2_33 == x87_r3_13 ? 1 : 0) << 0xe | 0x1000
        
        if ((eax_12:1.b & 0x41) != 0)
            x87_r4_18 = x87_r2_33
        else
            x87_r3_13 = x87_r2_33
        
        int32_t esi_1 = *arg5
        long double x87_r3_15 = fconvert.t(fconvert.s(float.t(esi_1)))
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
        int32_t var_274_1 = sub_70c710(fconvert.t(fconvert.s(x87_r3_15)))
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
        
        long double x87_r7_51 = fconvert.t(fconvert.s(float.t(arg5[2] + esi_1)))
        long double x87_r6_17 = fconvert.t(fconvert.s(x87_r7_49))
        x87_r6_17 - x87_r7_51
        int32_t eax_15
        eax_15.w = (x87_r6_17 < x87_r7_51 ? 1 : 0) << 8
            | (is_unordered.t(x87_r6_17, x87_r7_51) ? 1 : 0) << 0xa
            | (x87_r6_17 == x87_r7_51 ? 1 : 0) << 0xe | 0x3000
        
        if ((eax_15:1.b & 0x41) == 0)
            x87_r7_51 = x87_r6_17
        
        long double x87_r7_53 = fconvert.t(var_248)
        long double x87_r6_18 = fconvert.t(var_2a0)
        int32_t edi_1 = sub_70c710(fconvert.t(fconvert.s(x87_r7_51)))
        x87_r6_18 - x87_r7_53
        int32_t eax_16
        eax_16.w = (x87_r6_18 < x87_r7_53 ? 1 : 0) << 8
            | (is_unordered.t(x87_r6_18, x87_r7_53) ? 1 : 0) << 0xa
            | (x87_r6_18 == x87_r7_53 ? 1 : 0) << 0xe | 0x3000
        float var_2a0_1
        long double x87_r6_19
        long double x87_r7_54
        
        if ((eax_16:1.b & 0x41) != 0)
            var_2a0_1 = fconvert.s(x87_r6_18)
            x87_r6_19 = x87_r7_53
            x87_r7_54 = x87_r6_18
        else
            x87_r6_19 = x87_r7_53
            x87_r7_54 = x87_r6_18
            var_2a0_1 = fconvert.s(x87_r6_19)
        
        long double x87_r5_16 = fconvert.t(var_298)
        long double x87_r4_20 = fconvert.t(var_2ac)
        x87_r4_20 - x87_r5_16
        eax_16.w = (x87_r4_20 < x87_r5_16 ? 1 : 0) << 8
            | (is_unordered.t(x87_r4_20, x87_r5_16) ? 1 : 0) << 0xa
            | (x87_r4_20 == x87_r5_16 ? 1 : 0) << 0xe | 0x2000
        float var_2ac_1
        long double x87_r4_21
        long double x87_r5_17
        
        if ((eax_16:1.b & 0x41) != 0)
            var_2ac_1 = fconvert.s(x87_r4_20)
            x87_r4_21 = x87_r5_16
            x87_r5_17 = x87_r4_20
        else
            x87_r4_21 = x87_r5_16
            x87_r5_17 = x87_r4_20
            var_2ac_1 = fconvert.s(x87_r4_21)
        
        long double x87_r3_17 = fconvert.t(var_2a0_1)
        long double x87_r2_35 = fconvert.t(var_2ac_1)
        x87_r2_35 - x87_r3_17
        eax_16.w = (x87_r2_35 < x87_r3_17 ? 1 : 0) << 8
            | (is_unordered.t(x87_r2_35, x87_r3_17) ? 1 : 0) << 0xa
            | (x87_r2_35 == x87_r3_17 ? 1 : 0) << 0xe | 0x1000
        
        if ((eax_16:1.b & 0x41) != 0)
            x87_r4_21 = x87_r2_35
        else
            x87_r3_17 = x87_r2_35
        
        int32_t ecx_4 = arg5[1]
        long double x87_r3_19 = fconvert.t(fconvert.s(float.t(ecx_4)))
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
        
        long double x87_r7_58 = fconvert.t(fconvert.s(float.t(arg5[3] + ecx_4)))
        long double x87_r6_22 = fconvert.t(fconvert.s(x87_r7_56))
        x87_r6_22 - x87_r7_58
        eax_17.w = (x87_r6_22 < x87_r7_58 ? 1 : 0) << 8
            | (is_unordered.t(x87_r6_22, x87_r7_58) ? 1 : 0) << 0xa
            | (x87_r6_22 == x87_r7_58 ? 1 : 0) << 0xe | 0x3000
        
        if ((eax_17:1.b & 0x41) == 0)
            x87_r7_58 = x87_r6_22
        
        int32_t j_3 = edi_1 - var_274_1
        int32_t eax_18 = sub_70c710(fconvert.t(fconvert.s(x87_r7_58)))
        float var_2b0_16 = fconvert.s(fconvert.t(var_200_1))
        float var_2a4_3 = fconvert.s(fconvert.t(var_1f0_1))
        float var_29c_3 = fconvert.s(fconvert.t(var_230_1))
        float var_170_1 = var_240_1
        float var_1b0_1 = var_260_1
        var_290_1.d = fconvert.s(float.t(var_290_1.d))
        float var_1d0
        var_1d0.o = zx.o(0)
        int32_t xmm0_20 = (data_7581b0).d
        int32_t xmm0_22 = var_290_1.d
        int32_t i_2 = eax_18 - esi_2
        char* esi_3 = (*(*arg4 + 8))(var_274_1, esi_2)
        int32_t j_2 = j_3
        var_290_1.d = fconvert.s(float.t(esi_2))
        result = (*(*arg4 + 0x1c))() - (j_2 << 2)
        long double x87_r7_69 = fconvert.t(var_290_1.d)
        float* result_1 = result
        var_290_1.d = fconvert.s(x87_r7_69 * fconvert.t(var_1fc_1) + fconvert.t(fconvert.s(
            fconvert.t(fconvert.s(x87_r1 * x87_r5 - x87_r3_2 * x87_r7_14)) * x87_r1_22)))
        float xmm0_23 = var_290_1.d
        float xmm1_10 = fconvert.s(x87_r7_69 * fconvert.t(var_1ec_1) + fconvert.t(fconvert.s(
            fconvert.t(fconvert.s(x87_r2_5 * x87_r3_2 - x87_r1_6 * x87_r5)) * x87_r1_22)))
        float xmm3_1 = fconvert.s(x87_r7_69 * fconvert.t(var_22c_1)
            + fconvert.t(fconvert.s(x87_r1_22 * x87_r2_22)))
        float var_1a0_1 = xmm0_23
        float var_180_1 = xmm1_10
        float var_160_1 = xmm3_1
        var_290_1.d = fconvert.s(fconvert.t(var_23c_1) * x87_r7_69 + fconvert.t(fconvert.s(
            fconvert.t(fconvert.s(x87_r2_17 * x87_r5 - x87_r2_15 * x87_r3_2)) * x87_r4_10)))
        var_290_1.d = fconvert.s(fconvert.t(var_290_1.d))
        float xmm4_1 = var_290_1.d
        float var_140_1 = xmm4_1
        var_290_1.d = fconvert.s(x87_r7_69 * fconvert.t(var_25c_1)
            + fconvert.t(fconvert.s(x87_r4_10 * fconvert.t(var_210))))
        var_290_1.d = fconvert.s(fconvert.t(var_290_1.d))
        int128_t xmm7_1 = var_290_1.d
        int128_t var_120_1 = xmm7_1
        var_290_1.d = fconvert.s(float.t(var_274_1))
        long double x87_r7_74 = fconvert.t(var_290_1.d)
        var_290_1.d = fconvert.s(x87_r7_74 * fconvert.t(var_200_1))
        long double x87_r6_41 = x87_r7_74 * fconvert.t(var_230_1)
        var_230_1.o = var_290_1.d
        var_1f0_1.o = fconvert.s(x87_r7_74 * fconvert.t(var_1f0_1))
        var_200_1.o = fconvert.s(x87_r6_41)
        var_290_1.d = fconvert.s(x87_r7_74 * fconvert.t(var_240_1))
        var_290_1.d = fconvert.s(fconvert.t(var_290_1.d))
        var_240_1.o = var_290_1.d
        var_290_1.d = fconvert.s(x87_r7_74 * fconvert.t(var_260_1))
        var_290_1.d = fconvert.s(fconvert.t(var_290_1.d))
        var_290_1.o = var_290_1.d
        
        if (i_2 s> 0)
            float xmm5_3 = var_2b0_16
            float xmm6 = var_2a4_3
            int32_t i_1 = i_2
            int32_t i
            
            do
                float xmm2_9 = var_230_1 + xmm0_23
                float xmm0_25 = var_1f0_1 + xmm1_10
                float xmm1_12 = var_200_1 + xmm3_1
                float xmm3_3 = var_240_1 + xmm4_1
                float xmm4_3 = var_290_1.d f+ xmm7_1
                
                if (j_2 s> 0)
                    int32_t j_1 = j_2
                    int32_t j
                    
                    do
                        if (not(xmm0_25 f< 0) && not(xmm1_12 f< 0) && not(xmm3_3 f< 0)
                                && not(xmm4_3 f< 0))
                            float xmm6_4 =
                                xmm2_9 * fconvert.s(fconvert.t(fconvert.s(x87_r6_7 / x87_r6_7)))
                                + xmm0_25 * var_2b0_6 + xmm1_12 * var_2b0_8
                            var_260_1.o = _mm_rcp_ss(xmm6_4, xmm6_4)
                            int32_t eax_23 = int.d(__minss_xmmss_memss(
                                __maxss_xmmss_memss(
                                    (xmm2_9 * var_29c_2 + xmm0_25 * var_2a4_2 + xmm1_12 * var_2b0_2)
                                        * var_260_1, 
                                    0), 
                                xmm0_22) f* xmm0_20)
                            int32_t edx_9
                            edx_9.b = *esi_3
                            char* edi_3 = (eax_23 s>> 7) * var_208_1.d + var_1d8.d + (int.d(
                                __minss_xmmss_memss(
                                __maxss_xmmss_memss(
                                    (xmm2_9 * var_26c_2 + xmm0_25 * var_268_2 + xmm1_12 * var_278_2)
                                        * var_260_1, 
                                    0), 
                                fconvert.s(float.t(eax_8))) f* xmm0_20) s>> 7 << 2)
                            var_218.d = 0
                            uint32_t eax_27
                            eax_27.b = esi_3[1]
                            int32_t ecx_12 = (zx.d(edi_3[3]) * arg11) s>> 8
                            *esi_3 = (((zx.d(*edi_3) - zx.d(edx_9.b)) * ecx_12) s>> 8).b + edx_9.b
                            xmm5_3 = var_2b0_16
                            xmm6 = var_2a4_3
                            char edx_13 =
                                (((zx.d(edi_3[1]) - zx.d(eax_27.b)) * ecx_12) s>> 8).b + eax_27.b
                            eax_27.b = esi_3[2]
                            esi_3[1] = edx_13
                            edx_9.b =
                                (((zx.d(edi_3[2]) - zx.d(eax_27.b)) * ecx_12) s>> 8).b + eax_27.b
                            esi_3[2] = edx_9.b
                        
                        xmm4_3 = xmm4_3 + var_1b0_1
                        xmm3_3 = xmm3_3 + var_170_1
                        xmm1_12 = xmm1_12 + var_29c_3
                        esi_3 = &esi_3[4]
                        j = j_1
                        j_1 -= 1
                        xmm0_25 = xmm0_25 + xmm6
                        xmm2_9 = xmm2_9 + xmm5_3
                    while (j != 1)
                    xmm7_1 = var_120_1
                    j_2 = j_3
                    result = result_1
                
                xmm0_23 = var_1a0_1 + fconvert.s(fconvert.t(var_1fc_1))
                xmm1_10 = var_180_1 + fconvert.s(fconvert.t(var_1ec_1))
                xmm3_1 = var_160_1 + fconvert.s(fconvert.t(var_22c_1))
                xmm4_1 = var_140_1 + var_23c_1
                xmm7_1 = xmm7_1 f+ var_25c_1
                esi_3 += result
                i = i_1
                i_1 -= 1
                var_1a0_1 = xmm0_23
                var_180_1 = xmm1_10
                var_160_1 = xmm3_1
                var_140_1 = xmm4_1
                var_120_1 = xmm7_1
            while (i != 1)

return result
