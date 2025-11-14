// 函数: sub_493f20
// 地址: 0x493f20
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

float var_274 = fconvert.s(fconvert.t(*arg6))
float var_254 = fconvert.s(fconvert.t(arg6[1]))
float var_2c8 = fconvert.s(fconvert.t(*arg8))
float var_2d0 = fconvert.s(fconvert.t(arg8[1]))
float var_2e4 = fconvert.s(fconvert.t(*arg9))
float var_2c4 = fconvert.s(fconvert.t(arg9[1]))
float var_2b8 = fconvert.s(fconvert.t(*arg10))
float var_2e8 = fconvert.s(fconvert.t(arg10[1]))
float var_2a8 = fconvert.s(fconvert.t(*arg7))
float var_2cc = fconvert.s(fconvert.t(arg7[1]))
float var_2a4 = fconvert.s(fconvert.t(*arg2))
float var_2d4 = fconvert.s(fconvert.t(arg2[1]))
float var_2b4 = fconvert.s(fconvert.t(*arg3))
float var_2ec = fconvert.s(fconvert.t(arg3[1]))
long double x87_r7_14 = fconvert.t(var_2d0)
long double x87_r5 = fconvert.t(var_2c4)
long double x87_r3_2 = fconvert.t(var_2e4)
double var_250 = fconvert.d(x87_r3_2)
long double x87_r1 = fconvert.t(var_2c8)
double var_218 = fconvert.d(x87_r1)
long double x87_r2_5 = fconvert.t(var_254)
long double x87_r1_6 = fconvert.t(var_274)
float var_26c = fconvert.s(x87_r1_6 - fconvert.t(var_250))
long double x87_r2_15 = fconvert.t(var_2e8)
long double x87_r2_17 = fconvert.t(var_2b8)
float var_23c = fconvert.s(fconvert.t(var_250) - x87_r2_17)
var_250.d = fconvert.s(x87_r7_14 - fconvert.t(fconvert.d(x87_r2_15)))
var_250:4.d = fconvert.s(fconvert.t(fconvert.d(x87_r2_17)) - fconvert.t(var_218))
float var_248 = fconvert.s(x87_r2_15 * fconvert.t(var_2c8) - x87_r7_14 * fconvert.t(var_2b8))
long double x87_r5_2 =
    fconvert.t(fconvert.s(fconvert.t(var_218) - fconvert.t(fconvert.d(x87_r1_6))))
long double x87_r3_8 = fconvert.t(fconvert.s(fconvert.t(fconvert.d(x87_r2_5)) - x87_r7_14))
long double x87_r2_22 = fconvert.t(fconvert.s(x87_r7_14 * fconvert.t(var_274)
    - fconvert.t(var_2c8) * fconvert.t(var_254)))
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
        float var_210_1 = fconvert.s(fconvert.t(fconvert.s(x87_r7_14 - x87_r5)) * x87_r1_22)
        float var_20c_1 = fconvert.s(fconvert.t(fconvert.s(x87_r3_2 - x87_r1)) * x87_r1_22)
        float var_230_1 = fconvert.s(fconvert.t(fconvert.s(x87_r5 - x87_r2_5)) * x87_r1_22)
        float var_22c_1 = fconvert.s(fconvert.t(var_26c) * x87_r1_22)
        float var_270_1 = fconvert.s(x87_r3_8 * x87_r1_22)
        float var_26c_1 = fconvert.s(x87_r5_2 * x87_r1_22)
        long double x87_r4_9 = float.t(1)
        long double x87_r4_10 = fconvert.t(fconvert.s(x87_r4_9 / x87_r4_9))
        float var_290_1 = fconvert.s(fconvert.t(fconvert.s(x87_r2_15 - x87_r5)) * x87_r4_10)
        float var_28c_1 = fconvert.s(fconvert.t(var_23c) * x87_r4_10)
        float var_2a0_1 = fconvert.s(x87_r1_17 * x87_r4_10)
        float var_29c_1 = fconvert.s(x87_r2_24 * x87_r4_10)
        int32_t ebx_2 = (*(*arg11 + 8))(0, 0)
        var_218.d = ebx_2
        int32_t eax_4 = (*(*arg11 + 0x1c))()
        double var_2b0_1
        var_2b0_1.d = (*(*arg11 + 0x10))() - 1
        double var_2e0_1
        var_2e0_1.d = (*(*arg11 + 0x14))() - 1
        float var_2a8_2 =
            fconvert.s(fconvert.t(fconvert.s(fconvert.t(var_2a8) / fconvert.t(arg6[3]))))
        float var_2a4_2 =
            fconvert.s(fconvert.t(fconvert.s(fconvert.t(var_2a4) / fconvert.t(arg8[3]))))
        float var_2b4_2 =
            fconvert.s(fconvert.t(fconvert.s(fconvert.t(var_2b4) / fconvert.t(arg9[3]))))
        float var_2cc_2 =
            fconvert.s(fconvert.t(fconvert.s(fconvert.t(var_2cc) / fconvert.t(arg6[3]))))
        float var_2d4_2 =
            fconvert.s(fconvert.t(fconvert.s(fconvert.t(var_2d4) / fconvert.t(arg8[3]))))
        float var_2ec_2 =
            fconvert.s(fconvert.t(fconvert.s(fconvert.t(var_2ec) / fconvert.t(arg9[3]))))
        arg6[3]
        long double x87_r6_7 = float.t(1)
        float var_2ec_6 = fconvert.s(fconvert.t(fconvert.s(x87_r6_7 / fconvert.t(arg8[3]))))
        float var_2ec_8 = fconvert.s(fconvert.t(fconvert.s(x87_r6_7 / fconvert.t(arg9[3]))))
        long double x87_r7_46 = fconvert.t(var_274)
        long double x87_r6_13 = fconvert.t(var_2c8)
        x87_r6_13 - x87_r7_46
        float* eax_11
        eax_11.w = (x87_r6_13 < x87_r7_46 ? 1 : 0) << 8
            | (is_unordered.t(x87_r6_13, x87_r7_46) ? 1 : 0) << 0xa
            | (x87_r6_13 == x87_r7_46 ? 1 : 0) << 0xe | 0x3000
        float var_2bc_1
        long double x87_r6_14
        long double x87_r7_47
        
        if ((eax_11:1.b & 0x41) != 0)
            var_2bc_1 = fconvert.s(x87_r6_13)
            x87_r6_14 = x87_r7_46
            x87_r7_47 = x87_r6_13
        else
            x87_r6_14 = x87_r7_46
            x87_r7_47 = x87_r6_13
            var_2bc_1 = fconvert.s(x87_r6_14)
        
        long double x87_r5_13 = fconvert.t(var_2e4)
        long double x87_r4_17 = fconvert.t(var_2b8)
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
        
        long double x87_r3_13 = fconvert.t(var_2bc_1)
        long double x87_r2_33 = fconvert.t(var_2e4_1)
        x87_r2_33 - x87_r3_13
        eax_11.w = (x87_r2_33 < x87_r3_13 ? 1 : 0) << 8
            | (is_unordered.t(x87_r2_33, x87_r3_13) ? 1 : 0) << 0xa
            | (x87_r2_33 == x87_r3_13 ? 1 : 0) << 0xe | 0x1000
        
        if ((eax_11:1.b & 0x41) != 0)
            x87_r4_18 = x87_r2_33
        else
            x87_r3_13 = x87_r2_33
        
        int32_t edi_1 = *arg5
        long double x87_r3_15 = fconvert.t(fconvert.s(float.t(edi_1)))
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
        int32_t var_2b8_1 = sub_70c710(fconvert.t(fconvert.s(x87_r3_15)))
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
        
        long double x87_r7_51 = fconvert.t(fconvert.s(float.t(arg5[2] + edi_1)))
        long double x87_r6_17 = fconvert.t(fconvert.s(x87_r7_49))
        x87_r6_17 - x87_r7_51
        int32_t eax_14
        eax_14.w = (x87_r6_17 < x87_r7_51 ? 1 : 0) << 8
            | (is_unordered.t(x87_r6_17, x87_r7_51) ? 1 : 0) << 0xa
            | (x87_r6_17 == x87_r7_51 ? 1 : 0) << 0xe | 0x3000
        
        if ((eax_14:1.b & 0x41) == 0)
            x87_r7_51 = x87_r6_17
        
        long double x87_r7_53 = fconvert.t(var_254)
        long double x87_r6_18 = fconvert.t(var_2d0)
        int32_t edi_2 = sub_70c710(fconvert.t(fconvert.s(x87_r7_51)))
        x87_r6_18 - x87_r7_53
        int32_t eax_15
        eax_15.w = (x87_r6_18 < x87_r7_53 ? 1 : 0) << 8
            | (is_unordered.t(x87_r6_18, x87_r7_53) ? 1 : 0) << 0xa
            | (x87_r6_18 == x87_r7_53 ? 1 : 0) << 0xe | 0x3000
        float var_2d0_1
        long double x87_r6_19
        long double x87_r7_54
        
        if ((eax_15:1.b & 0x41) != 0)
            var_2d0_1 = fconvert.s(x87_r6_18)
            x87_r6_19 = x87_r7_53
            x87_r7_54 = x87_r6_18
        else
            x87_r6_19 = x87_r7_53
            x87_r7_54 = x87_r6_18
            var_2d0_1 = fconvert.s(x87_r6_19)
        
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
        
        long double x87_r3_17 = fconvert.t(var_2d0_1)
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
        int32_t esi_2 = sub_70c710(fconvert.t(fconvert.s(x87_r3_19)))
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
        
        int32_t j_3 = edi_2 - var_2b8_1
        int32_t eax_19 = sub_70c710(fconvert.t(fconvert.s(x87_r7_58)))
        float var_2ec_16 = fconvert.s(fconvert.t(var_210_1))
        float var_2d4_3 = fconvert.s(fconvert.t(var_230_1))
        float var_2cc_3 = fconvert.s(fconvert.t(var_270_1))
        float var_1c0_1 = var_290_1
        float var_1b0_1 = var_2a0_1
        var_2b0_1.d = fconvert.s(float.t(var_2b0_1.d))
        var_2e0_1.d = fconvert.s(float.t(var_2e0_1.d))
        float var_240
        var_240.o = zx.o(0)
        float var_c0_1 = (data_7581c0).d
        int32_t xmm0_21 = (data_7581b0).d
        int128_t var_200_1 = zx.o(0)
        int32_t xmm0_22 = var_2b0_1.d
        int32_t xmm0_23 = var_2e0_1.d
        int32_t i_2 = eax_19 - esi_2
        int32_t* esi_3 = (*(*arg4 + 8))(var_2b8_1, esi_2)
        int32_t* var_2c8_1 = esi_3
        int32_t j_2 = j_3
        var_2e0_1.d = fconvert.s(float.t(esi_2))
        result = (*(*arg4 + 0x1c))() - (j_2 << 2)
        long double x87_r7_69 = fconvert.t(var_2e0_1.d)
        float* result_1 = result
        var_2e0_1.d = fconvert.s(x87_r7_69 * fconvert.t(var_20c_1) + fconvert.t(fconvert.s(
            fconvert.t(fconvert.s(x87_r1 * x87_r5 - x87_r3_2 * x87_r7_14)) * x87_r1_22)))
        float xmm0_24 = var_2e0_1.d
        float var_190_1 = xmm0_24
        var_2b0_1.d = fconvert.s(x87_r7_69 * fconvert.t(var_22c_1) + fconvert.t(fconvert.s(
            fconvert.t(fconvert.s(x87_r2_5 * x87_r3_2 - x87_r1_6 * x87_r5)) * x87_r1_22)))
        float xmm1_10 = var_2b0_1.d
        float var_170_1 = xmm1_10
        float xmm7_1 = fconvert.s(x87_r7_69 * fconvert.t(var_26c_1)
            + fconvert.t(fconvert.s(x87_r1_22 * x87_r2_22)))
        float var_150_1 = xmm7_1
        var_2e0_1.d = fconvert.s(fconvert.t(var_28c_1) * x87_r7_69 + fconvert.t(fconvert.s(
            fconvert.t(fconvert.s(x87_r2_17 * x87_r5 - x87_r2_15 * x87_r3_2)) * x87_r4_10)))
        var_2e0_1.d = fconvert.s(fconvert.t(var_2e0_1.d))
        float var_1f0_1 = var_2e0_1.d
        var_2e0_1.d = fconvert.s(x87_r7_69 * fconvert.t(var_29c_1)
            + fconvert.t(fconvert.s(x87_r4_10 * fconvert.t(var_248))))
        var_2e0_1.d = fconvert.s(fconvert.t(var_2e0_1.d))
        float var_1e0_1 = var_2e0_1.d
        var_2e0_1.d = fconvert.s(float.t(var_2b8_1))
        long double x87_r7_74 = fconvert.t(var_2e0_1.d)
        var_2e0_1.d = fconvert.s(x87_r7_74 * fconvert.t(var_210_1))
        var_2b0_1.d = fconvert.s(x87_r7_74 * fconvert.t(var_230_1))
        long double x87_r6_41 = x87_r7_74 * fconvert.t(var_270_1)
        var_270_1.o = var_2e0_1.d
        var_230_1.o = var_2b0_1.d
        var_210_1.o = fconvert.s(x87_r6_41)
        var_2e0_1.d = fconvert.s(x87_r7_74 * fconvert.t(var_290_1))
        var_2e0_1.d = fconvert.s(fconvert.t(var_2e0_1.d))
        float xmm3_3 = var_2e0_1.d
        var_2e0_1.d = fconvert.s(x87_r7_74 * fconvert.t(var_2a0_1))
        var_2e0_1.d = fconvert.s(fconvert.t(var_2e0_1.d))
        float xmm3_4 = var_2e0_1.d
        
        if (i_2 s> 0)
            float xmm6 = var_2ec_16
            int32_t i_1 = i_2
            int32_t i
            
            do
                float xmm5_2 = var_270_1 + xmm0_24
                int128_t xmm0_26 = xmm3_3 + var_1f0_1
                float xmm3_6 = var_230_1 + xmm1_10
                int128_t xmm1_12 = xmm3_4 + var_1e0_1
                float xmm4_2 = var_210_1 + xmm7_1
                var_2a0_1.o = xmm0_26
                var_290_1.o = xmm1_12
                
                if (j_2 s> 0)
                    int32_t j_1 = j_2
                    int32_t j
                    
                    do
                        if (not(xmm3_6 f< 0) && not(xmm4_2 f< 0) && not(xmm0_26 f< 0)
                                && not(xmm1_12 f< 0))
                            float xmm1_16 =
                                xmm5_2 * fconvert.s(fconvert.t(fconvert.s(x87_r6_7 / x87_r6_7)))
                                + xmm3_6 * var_2ec_6 + xmm4_2 * var_2ec_8
                            float xmm1_17 = _mm_rcp_ss(xmm1_16, xmm1_16)
                            float xmm0_35 = (xmm5_2 * var_2a8_2 + xmm3_6 * var_2a4_2
                                + xmm4_2 * var_2b4_2) * xmm1_17
                            float xmm1_22 = (xmm5_2 * var_2cc_2 + xmm3_6 * var_2d4_2
                                + xmm4_2 * var_2ec_2) * xmm1_17
                            int32_t ecx_8 = int.d(
                                __minss_xmmss_memss(__maxss_xmmss_memss(xmm0_35, 0), xmm0_22)
                                f* xmm0_21)
                            int32_t edx_9 = int.d(
                                __minss_xmmss_memss(__maxss_xmmss_memss(xmm1_22, 0), xmm0_23)
                                f* xmm0_21)
                            int32_t edx_11 = (edx_9 s>> 7) * eax_4
                            int32_t ecx_9 = ecx_8 s>> 7
                            var_2b0_1.d = int.d(__minss_xmmss_memss(
                                _mm_max_ss(xmm0_35 + var_c0_1, 0), xmm0_22))
                            var_2e0_1.d = int.d(__minss_xmmss_memss(
                                _mm_max_ss(xmm1_22 + var_c0_1, 0), xmm0_23))
                            var_250.d = 0
                            int32_t esi_7 = *(edx_11 + (ecx_9 << 2) + ebx_2)
                            ebx_2 = var_218.d
                            int32_t esi_9 = var_2e0_1.d * eax_4
                            uint128_t xmm1_26 = zx.o(*(esi_9 + (ecx_9 << 2) + ebx_2))
                            uint128_t xmm6_17 = zx.o(sx.d(ecx_8.w & 0x7f))
                            int32_t ecx_13 = var_2b0_1.d
                            int32_t xmm7_3[0x4] =
                                _mm_unpacklo_epi8(zx.o(*(edx_11 + (ecx_13 << 2) + ebx_2)), 0)
                            int32_t xmm0_40[0x4] = _mm_unpacklo_epi8(zx.o(esi_7), 0)
                            int32_t xmm6_19[0x4] =
                                _mm_shuffle_epi32(_mm_unpacklo_epi16(xmm6_17, xmm6_17), 0)
                            int16_t xmm7_5[0x8] =
                                _mm_mullo_epi16(_mm_subs_epi16(xmm7_3, xmm0_40), xmm6_19)
                            int32_t xmm1_27[0x4] = _mm_unpacklo_epi8(xmm1_26, 0)
                            int32_t xmm0_41[0x4] =
                                _mm_adds_epi16(xmm0_40, _mm_srai_epi16(xmm7_5, 7))
                            esi_3 = var_2c8_1
                            int32_t ecx_15 = *esi_3
                            var_250.o = xmm0_41
                            uint128_t xmm1_28 = zx.o(sx.d(edx_9.w & 0x7f))
                            int32_t xmm0_44[0x4] = _mm_unpacklo_epi8(
                                _mm_packus_epi16(
                                    _mm_adds_epi16(xmm0_41, 
                                        _mm_srai_epi16(
                                            _mm_mullo_epi16(
                                                __psubsw_xmmdq_memdq(
                                                    _mm_adds_epi16(xmm1_27, 
                                                        _mm_srai_epi16(
                                                            __pmullw_xmmdq_memdq(
                                                                _mm_subs_epi16(
                                                                    _mm_unpacklo_epi8(
                                                                        zx.o(*(esi_9 + (ecx_13 << 2) + ebx_2)), 
                                                                        0), 
                                                                    xmm1_27), 
                                                                xmm6_19), 
                                                            7)), 
                                                    var_250.o), 
                                                _mm_shuffle_epi32(
                                                _mm_unpacklo_epi16(xmm1_28, xmm1_28), 0)), 
                                            7)), 
                                    zx.o(0)), 
                                0)
                            int32_t xmm1_32[0x4] = _mm_unpacklo_epi8(zx.o(ecx_15), 0)
                            xmm0_26 = var_2a0_1.o
                            xmm1_12 = var_290_1.o
                            xmm6 = var_2ec_16
                            *esi_3 = _mm_packus_epi16(
                                _mm_adds_epi16(xmm1_32, 
                                    _mm_srai_epi16(
                                        _mm_mullo_epi16(_mm_subs_epi16(xmm0_44, xmm1_32), 
                                            _mm_srai_epi16(_mm_shufflelo_epi16(xmm0_44, 0xff), 1)), 
                                        7)), 
                                zx.o(0))
                        
                        xmm1_12 = xmm1_12 f+ var_1b0_1
                        xmm0_26 = xmm0_26 f+ var_1c0_1
                        xmm4_2 = xmm4_2 + var_2cc_3
                        xmm3_6 = xmm3_6 + var_2d4_3
                        esi_3 = &esi_3[1]
                        j = j_1
                        j_1 -= 1
                        var_290_1.o = xmm1_12
                        var_2a0_1.o = xmm0_26
                        xmm5_2 = xmm5_2 + xmm6
                        var_2c8_1 = esi_3
                    while (j != 1)
                    result = result_1
                    j_2 = j_3
                
                xmm0_24 = var_190_1 + fconvert.s(fconvert.t(var_20c_1))
                xmm1_10 = var_170_1 + fconvert.s(fconvert.t(var_22c_1))
                xmm7_1 = var_150_1 + fconvert.s(fconvert.t(var_26c_1))
                var_1f0_1 = var_1f0_1 + var_28c_1
                esi_3 += result
                i = i_1
                i_1 -= 1
                var_2c8_1 = esi_3
                var_190_1 = xmm0_24
                var_170_1 = xmm1_10
                var_150_1 = xmm7_1
                var_1e0_1 = var_1e0_1 + var_29c_1
            while (i != 1)

return result
