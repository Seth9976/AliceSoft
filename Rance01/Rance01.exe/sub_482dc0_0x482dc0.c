// 函数: sub_482dc0
// 地址: 0x482dc0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

float* eax = arg10
float* edi = arg6
arg6 = fconvert.s(fconvert.t(*edi))
float* edi_1 = arg8
float var_8 = fconvert.s(fconvert.t(edi[1]))
arg10 = fconvert.s(fconvert.t(*edi_1))
float var_10 = fconvert.s(fconvert.t(edi_1[1]))
float var_c = fconvert.s(fconvert.t(*arg2))
float var_18 = fconvert.s(fconvert.t(arg2[1]))
arg8 = fconvert.s(fconvert.t(*eax))
float* eax_1 = arg7
float var_14 = fconvert.s(fconvert.t(eax[1]))
float var_90 = fconvert.s(fconvert.t(*eax_1))
float* result = arg9
float var_b0 = fconvert.s(fconvert.t(eax_1[1]))
float var_8c = fconvert.s(fconvert.t(*result))
float var_a8 = fconvert.s(fconvert.t(result[1]))
float var_a0 = fconvert.s(fconvert.t(*arg3))
float var_ac = fconvert.s(fconvert.t(arg3[1]))
long double x87_r7_14 = fconvert.t(var_10)
long double x87_r5 = fconvert.t(var_18)
long double x87_r3_2 = fconvert.t(var_c)
double var_54 = fconvert.d(x87_r3_2)
long double x87_r1 = fconvert.t(arg10)
double var_bc = fconvert.d(x87_r1)
long double x87_r2_5 = fconvert.t(var_8)
long double x87_r1_6 = fconvert.t(arg6)
float var_2c = fconvert.s(x87_r1_6 - fconvert.t(var_54))
long double x87_r2_15 = fconvert.t(var_14)
long double x87_r2_17 = fconvert.t(arg8)
float var_dc = fconvert.s(fconvert.t(var_54) - x87_r2_17)
var_54.d = fconvert.s(x87_r7_14 - fconvert.t(fconvert.d(x87_r2_15)))
var_54:4.d = fconvert.s(fconvert.t(fconvert.d(x87_r2_17)) - fconvert.t(var_bc))
float var_4c = fconvert.s(x87_r2_15 * fconvert.t(arg10) - x87_r7_14 * fconvert.t(arg8))
long double x87_r5_2 = fconvert.t(fconvert.s(fconvert.t(var_bc) - fconvert.t(fconvert.d(x87_r1_6))))
long double x87_r3_8 = fconvert.t(fconvert.s(fconvert.t(fconvert.d(x87_r2_5)) - x87_r7_14))
long double x87_r2_22 =
    fconvert.t(fconvert.s(x87_r7_14 * fconvert.t(arg6) - fconvert.t(arg10) * fconvert.t(var_8)))
long double x87_r2_24 = fconvert.t(var_54:4.d)
long double x87_r1_17 = fconvert.t(var_54.d)
long double x87_r2_26 = fconvert.t(fconvert.s(x87_r5_2 * x87_r5 + x87_r3_8 * x87_r3_2 + x87_r2_22))
long double x87_r1_20 = fconvert.t(9.9999997473787516e-05)
x87_r1_20 - x87_r2_26
result.w = (x87_r1_20 < x87_r2_26 ? 1 : 0) << 8
    | (is_unordered.t(x87_r1_20, x87_r2_26) ? 1 : 0) << 0xa
    | (x87_r1_20 == x87_r2_26 ? 1 : 0) << 0xe | 0x800

if ((result:1.b & 0x41) != 0)
    long double x87_r0_5 =
        fconvert.t(fconvert.s(x87_r3_2 * x87_r1_17 + x87_r5 * x87_r2_24 + fconvert.t(var_4c)))
    x87_r0_5 - x87_r1_20
    result.w = (x87_r0_5 < x87_r1_20 ? 1 : 0) << 8
        | (is_unordered.t(x87_r0_5, x87_r1_20) ? 1 : 0) << 0xa
        | (x87_r0_5 == x87_r1_20 ? 1 : 0) << 0xe | 0x1000
    bool p_1 = unimplemented  {test ah, 0x5}
    
    if (p_1)
        long double x87_r1_21 = float.t(1)
        long double x87_r1_22 = fconvert.t(fconvert.s(x87_r1_21 / x87_r1_21))
        float var_3c_1 = fconvert.s(fconvert.t(fconvert.s(x87_r7_14 - x87_r5)) * x87_r1_22)
        float var_38_1 = fconvert.s(fconvert.t(fconvert.s(x87_r3_2 - x87_r1)) * x87_r1_22)
        float var_6c_1 = fconvert.s(fconvert.t(fconvert.s(x87_r5 - x87_r2_5)) * x87_r1_22)
        float var_68_1 = fconvert.s(fconvert.t(var_2c) * x87_r1_22)
        float var_60_1 = fconvert.s(x87_r3_8 * x87_r1_22)
        float var_5c_1 = fconvert.s(x87_r5_2 * x87_r1_22)
        long double x87_r4_9 = float.t(1)
        long double x87_r4_10 = fconvert.t(fconvert.s(x87_r4_9 / x87_r4_9))
        float var_30_1 = fconvert.s(fconvert.t(fconvert.s(x87_r2_15 - x87_r5)) * x87_r4_10)
        float var_2c_1 = fconvert.s(fconvert.t(var_dc) * x87_r4_10)
        float var_24_1 = fconvert.s(x87_r1_17 * x87_r4_10)
        float var_20_1 = fconvert.s(x87_r2_24 * x87_r4_10)
        var_bc:4.d = (*(*arg11 + 8))(0, 0)
        double var_7c_1
        var_7c_1:4.d = (*(*arg11 + 0x1c))()
        int32_t eax_8 = (*(*arg11 + 0x10))() - 1
        long double x87_r7_23 = fconvert.t(arg6)
        double var_9c_1
        var_9c_1:4.d = (*(*arg11 + 0x14))() - 1
        long double x87_r6_7 = fconvert.t(arg10)
        x87_r6_7 - x87_r7_23
        int32_t eax_11
        eax_11.w = (x87_r6_7 < x87_r7_23 ? 1 : 0) << 8
            | (is_unordered.t(x87_r6_7, x87_r7_23) ? 1 : 0) << 0xa
            | (x87_r6_7 == x87_r7_23 ? 1 : 0) << 0xe | 0x3000
        long double x87_r6_8
        long double x87_r7_24
        
        if ((eax_11:1.b & 0x41) != 0)
            arg10 = fconvert.s(x87_r6_7)
            x87_r6_8 = x87_r7_23
            x87_r7_24 = x87_r6_7
        else
            x87_r6_8 = x87_r7_23
            x87_r7_24 = x87_r6_7
            arg10 = fconvert.s(x87_r6_8)
        
        long double x87_r5_12 = fconvert.t(var_c)
        long double x87_r4_17 = fconvert.t(arg8)
        x87_r4_17 - x87_r5_12
        eax_11.w = (x87_r4_17 < x87_r5_12 ? 1 : 0) << 8
            | (is_unordered.t(x87_r4_17, x87_r5_12) ? 1 : 0) << 0xa
            | (x87_r4_17 == x87_r5_12 ? 1 : 0) << 0xe | 0x2000
        long double x87_r4_18
        long double x87_r5_13
        
        if ((eax_11:1.b & 0x41) != 0)
            arg6 = fconvert.s(x87_r4_17)
            x87_r4_18 = x87_r5_12
            x87_r5_13 = x87_r4_17
        else
            x87_r4_18 = x87_r5_12
            x87_r5_13 = x87_r4_17
            arg6 = fconvert.s(x87_r4_18)
        
        long double x87_r3_13 = fconvert.t(arg10)
        long double x87_r2_33 = fconvert.t(arg6)
        x87_r2_33 - x87_r3_13
        eax_11.w = (x87_r2_33 < x87_r3_13 ? 1 : 0) << 8
            | (is_unordered.t(x87_r2_33, x87_r3_13) ? 1 : 0) << 0xa
            | (x87_r2_33 == x87_r3_13 ? 1 : 0) << 0xe | 0x1000
        
        if ((eax_11:1.b & 0x41) != 0)
            x87_r4_18 = x87_r2_33
        else
            x87_r3_13 = x87_r2_33
        
        float edi_2 = *arg5
        long double x87_r3_15 = fconvert.t(fconvert.s(float.t(edi_2)))
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
        
        x87_r6_8 - x87_r7_24
        arg10 = sub_70c710(fconvert.t(fconvert.s(x87_r3_15)))
        int32_t eax_12
        eax_12.w = (x87_r6_8 < x87_r7_24 ? 1 : 0) << 8
            | (is_unordered.t(x87_r6_8, x87_r7_24) ? 1 : 0) << 0xa
            | (x87_r6_8 == x87_r7_24 ? 1 : 0) << 0xe | 0x2000
        
        if ((eax_12:1.b & 0x41) != 0)
            x87_r5_13 = x87_r6_8
        
        long double x87_r7_25 = x87_r5_13
        x87_r4_18 - x87_r7_25
        eax_12.w = (x87_r4_18 < x87_r7_25 ? 1 : 0) << 8
            | (is_unordered.t(x87_r4_18, x87_r7_25) ? 1 : 0) << 0xa
            | (x87_r4_18 == x87_r7_25 ? 1 : 0) << 0xe | 0x3000
        
        if ((eax_12:1.b & 0x41) != 0)
            x87_r7_25 = x87_r4_18
        
        long double x87_r7_26 = fconvert.t(fconvert.s(x87_r7_24))
        long double x87_r6_10 = fconvert.t(fconvert.s(x87_r7_25))
        x87_r6_10 - x87_r7_26
        eax_12.w = (x87_r6_10 < x87_r7_26 ? 1 : 0) << 8
            | (is_unordered.t(x87_r6_10, x87_r7_26) ? 1 : 0) << 0xa
            | (x87_r6_10 == x87_r7_26 ? 1 : 0) << 0xe | 0x3000
        bool p_3 = unimplemented  {test ah, 0x5}
        
        if (not(p_3))
            x87_r7_26 = x87_r6_10
        
        long double x87_r7_28 = fconvert.t(fconvert.s(float.t(arg5[2] i+ edi_2)))
        long double x87_r6_11 = fconvert.t(fconvert.s(x87_r7_26))
        x87_r6_11 - x87_r7_28
        float eax_14
        eax_14.w = (x87_r6_11 < x87_r7_28 ? 1 : 0) << 8
            | (is_unordered.t(x87_r6_11, x87_r7_28) ? 1 : 0) << 0xa
            | (x87_r6_11 == x87_r7_28 ? 1 : 0) << 0xe | 0x3000
        
        if ((eax_14:1.b & 0x41) == 0)
            x87_r7_28 = x87_r6_11
        
        long double x87_r7_30 = fconvert.t(var_8)
        long double x87_r6_12 = fconvert.t(var_10)
        int32_t edi_3 = sub_70c710(fconvert.t(fconvert.s(x87_r7_28)))
        x87_r6_12 - x87_r7_30
        int32_t eax_15
        eax_15.w = (x87_r6_12 < x87_r7_30 ? 1 : 0) << 8
            | (is_unordered.t(x87_r6_12, x87_r7_30) ? 1 : 0) << 0xa
            | (x87_r6_12 == x87_r7_30 ? 1 : 0) << 0xe | 0x3000
        long double x87_r6_13
        long double x87_r7_31
        
        if ((eax_15:1.b & 0x41) != 0)
            arg6 = fconvert.s(x87_r6_12)
            x87_r6_13 = x87_r7_30
            x87_r7_31 = x87_r6_12
        else
            x87_r6_13 = x87_r7_30
            x87_r7_31 = x87_r6_12
            arg6 = fconvert.s(x87_r6_13)
        
        long double x87_r5_15 = fconvert.t(var_18)
        long double x87_r4_20 = fconvert.t(var_14)
        x87_r4_20 - x87_r5_15
        eax_15.w = (x87_r4_20 < x87_r5_15 ? 1 : 0) << 8
            | (is_unordered.t(x87_r4_20, x87_r5_15) ? 1 : 0) << 0xa
            | (x87_r4_20 == x87_r5_15 ? 1 : 0) << 0xe | 0x2000
        long double x87_r4_21
        long double x87_r5_16
        
        if ((eax_15:1.b & 0x41) != 0)
            arg8 = fconvert.s(x87_r4_20)
            x87_r4_21 = x87_r5_15
            x87_r5_16 = x87_r4_20
        else
            x87_r4_21 = x87_r5_15
            x87_r5_16 = x87_r4_20
            arg8 = fconvert.s(x87_r4_21)
        
        long double x87_r3_17 = fconvert.t(arg6)
        long double x87_r2_35 = fconvert.t(arg8)
        x87_r2_35 - x87_r3_17
        eax_15.w = (x87_r2_35 < x87_r3_17 ? 1 : 0) << 8
            | (is_unordered.t(x87_r2_35, x87_r3_17) ? 1 : 0) << 0xa
            | (x87_r2_35 == x87_r3_17 ? 1 : 0) << 0xe | 0x1000
        
        if ((eax_15:1.b & 0x41) != 0)
            x87_r4_21 = x87_r2_35
        else
            x87_r3_17 = x87_r2_35
        
        float ecx_4 = arg5[1]
        long double x87_r3_19 = fconvert.t(fconvert.s(float.t(ecx_4)))
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
        
        x87_r6_13 - x87_r7_31
        int32_t esi_2 = sub_70c710(fconvert.t(fconvert.s(x87_r3_19)))
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
        
        long double x87_r7_35 = fconvert.t(fconvert.s(float.t(arg5[3] i+ ecx_4)))
        long double x87_r6_16 = fconvert.t(fconvert.s(x87_r7_33))
        x87_r6_16 - x87_r7_35
        float eax_18
        eax_18.w = (x87_r6_16 < x87_r7_35 ? 1 : 0) << 8
            | (is_unordered.t(x87_r6_16, x87_r7_35) ? 1 : 0) << 0xa
            | (x87_r6_16 == x87_r7_35 ? 1 : 0) << 0xe | 0x3000
        
        if ((eax_18:1.b & 0x41) == 0)
            x87_r7_35 = x87_r6_16
        
        int32_t edi_4 = edi_3 i- arg10
        long double x87_r7_37 = fconvert.t(var_6c_1)
        long double x87_r5_18 = fconvert.t(var_3c_1)
        int32_t i_2 = sub_70c710(fconvert.t(fconvert.s(x87_r7_35))) - esi_2
        long double x87_r4_25 = fconvert.t(var_60_1)
        float var_80_1 = fconvert.s(x87_r7_37 * fconvert.t(var_8c) + x87_r5_18 * fconvert.t(var_90)
            + x87_r4_25 * fconvert.t(var_a0))
        char* esi_3 = (*(*arg4 + 8))(arg10, esi_2)
        int32_t ecx_7 = edi_4
        result = (*(*arg4 + 0x1c))() - (ecx_7 << 2)
        long double x87_r7_42 = fconvert.t(fconvert.s(float.t(esi_2)))
        float* result_1 = result
        float var_40_1 = fconvert.s(x87_r7_42 * fconvert.t(var_38_1) + fconvert.t(fconvert.s(
            fconvert.t(fconvert.s(x87_r1 * x87_r5 - x87_r3_2 * x87_r7_14)) * x87_r1_22)))
        float var_14_1 = fconvert.s(x87_r7_42 * fconvert.t(var_68_1) + fconvert.t(fconvert.s(
            fconvert.t(fconvert.s(x87_r2_5 * x87_r3_2 - x87_r1_6 * x87_r5)) * x87_r1_22)))
        float var_18_1 = fconvert.s(x87_r7_42 * fconvert.t(var_5c_1)
            + fconvert.t(fconvert.s(x87_r1_22 * x87_r2_22)))
        float var_10_1 = fconvert.s(fconvert.t(var_2c_1) * x87_r7_42 + fconvert.t(fconvert.s(
            fconvert.t(fconvert.s(x87_r2_17 * x87_r5 - x87_r2_15 * x87_r3_2)) * x87_r4_10)))
        float var_c_1 = fconvert.s(x87_r7_42 * fconvert.t(var_20_1)
            + fconvert.t(fconvert.s(x87_r4_10 * fconvert.t(var_4c))))
        long double x87_r7_46 = fconvert.t(fconvert.s(float.t(arg10)))
        
        if (i_2 s> 0)
            int32_t i_1 = i_2
            int32_t i
            
            do
                arg9 = fconvert.s(fconvert.t(fconvert.s(x87_r7_46 * fconvert.t(var_30_1)))
                    + fconvert.t(var_10_1))
                float var_8_1 = fconvert.s(fconvert.t(fconvert.s(x87_r7_46 * fconvert.t(var_24_1)))
                    + fconvert.t(var_c_1))
                long double x87_r7_58 = fconvert.t(fconvert.s(
                    fconvert.t(fconvert.s(x87_r7_46 * fconvert.t(var_6c_1)))
                    + fconvert.t(var_14_1)))
                long double x87_r5_20 = fconvert.t(fconvert.s(
                    fconvert.t(fconvert.s(x87_r7_46 * fconvert.t(var_3c_1)))
                    + fconvert.t(var_40_1)))
                long double x87_r4_30 = fconvert.t(fconvert.s(
                    fconvert.t(fconvert.s(x87_r7_46 * fconvert.t(var_60_1)))
                    + fconvert.t(var_18_1)))
                long double x87_r6_47 = x87_r4_30
                arg8 = fconvert.s(x87_r7_58 * fconvert.t(var_8c) + x87_r5_20 * fconvert.t(var_90)
                    + x87_r4_30 * fconvert.t(var_a0))
                arg7 = fconvert.s(x87_r5_20 * fconvert.t(var_b0) + x87_r7_58 * fconvert.t(var_a8)
                    + x87_r6_47 * fconvert.t(var_ac))
                
                if (ecx_7 s> 0)
                    int32_t var_84_1 = ecx_7
                    
                    while (true)
                        long double x87_r5_24 = float.t(0)
                        x87_r5_24 - x87_r7_58
                        result.w = (x87_r5_24 < x87_r7_58 ? 1 : 0) << 8
                            | (is_unordered.t(x87_r5_24, x87_r7_58) ? 1 : 0) << 0xa
                            | (x87_r5_24 == x87_r7_58 ? 1 : 0) << 0xe | 0x2800
                        long double x87_r4_36 = fconvert.t(arg9)
                        long double x87_r3_26 = fconvert.t(var_8_1)
                        long double x87_r7_60
                        long double x87_r6_52
                        
                        if ((result:1.b & 0x41) == 0)
                            x87_r6_52 = x87_r3_26
                        label_4837dd:
                            arg10 = fconvert.s(x87_r7_58 + fconvert.t(var_6c_1))
                            arg6 = fconvert.s(x87_r6_52 + fconvert.t(var_60_1))
                            arg9 = fconvert.s(x87_r4_36 + fconvert.t(var_30_1))
                            var_8_1 = fconvert.s(x87_r5_24 + fconvert.t(var_24_1))
                            arg8 = fconvert.s(fconvert.t(arg8) + fconvert.t(var_80_1))
                            x87_r7_60 = fconvert.t(arg7)
                        else
                            long double x87_r6_48 = x87_r3_26
                            x87_r6_47 - x87_r5_24
                            result.w = (x87_r6_47 < x87_r5_24 ? 1 : 0) << 8
                                | (is_unordered.t(x87_r6_47, x87_r5_24) ? 1 : 0) << 0xa
                                | (x87_r6_47 == x87_r5_24 ? 1 : 0) << 0xe | 0x1800
                            bool p_6 = unimplemented  {test ah, 0x5}
                            long double x87_r4_37
                            
                            if (not(p_6))
                                x87_r6_48 = x87_r6_47
                                x87_r4_37 = x87_r5_24
                                x87_r5_24 = x87_r4_36
                            label_4837ce:
                                x87_r6_52 = x87_r4_37
                                x87_r4_36 = x87_r5_24
                                x87_r5_24 = x87_r6_48
                                goto label_4837dd
                            
                            x87_r4_37 = x87_r6_47
                            x87_r4_36 - x87_r5_24
                            result.w = (x87_r4_36 < x87_r5_24 ? 1 : 0) << 8
                                | (is_unordered.t(x87_r4_36, x87_r5_24) ? 1 : 0) << 0xa
                                | (x87_r4_36 == x87_r5_24 ? 1 : 0) << 0xe | 0x1800
                            bool p_7 = unimplemented  {test ah, 0x5}
                            
                            if (not(p_7))
                                x87_r6_48 = x87_r4_36
                                goto label_4837ce
                            
                            long double x87_r3_29 = x87_r5_24
                            x87_r5_24 = x87_r4_36
                            x87_r3_29 - x87_r6_48
                            result.w = (x87_r3_29 < x87_r6_48 ? 1 : 0) << 8
                                | (is_unordered.t(x87_r3_29, x87_r6_48) ? 1 : 0) << 0xa
                                | (x87_r3_29 == x87_r6_48 ? 1 : 0) << 0xe | 0x2000
                            
                            if ((result:1.b & 0x41) == 0)
                                goto label_4837ce
                            
                            long double x87_r3_30 = fconvert.t(arg8)
                            long double x87_r2_38 = fconvert.t(arg7)
                            int32_t edi_6 = sub_70c710(x87_r3_30)
                            int32_t eax_25
                            int32_t ecx_8
                            eax_25, ecx_8 = sub_70c710(x87_r2_38)
                            
                            if (edi_6 s< 0)
                                edi_6 = 0
                            else if (edi_6 s> eax_8)
                                edi_6 = eax_8
                            
                            if (eax_25 s>= 0)
                                ecx_8 = var_9c_1:4.d
                                
                                if (eax_25 s> ecx_8)
                                    eax_25 = ecx_8
                            else
                                eax_25 = 0
                            
                            x87_r7_60 = x87_r2_38
                            arg10 = fconvert.s(x87_r7_58 + fconvert.t(var_6c_1))
                            int32_t eax_27 = eax_25 * var_7c_1:4.d + var_bc:4.d
                            arg6 = fconvert.s(x87_r4_37 + fconvert.t(var_60_1))
                            ecx_8.b = *esi_3
                            void* eax_28 = eax_27 + (edi_6 << 2)
                            uint32_t edi_7 = zx.d(*(eax_28 + 3))
                            arg9 = fconvert.s(x87_r5_24 + fconvert.t(var_30_1))
                            var_8_1 = fconvert.s(x87_r6_48 + fconvert.t(var_24_1))
                            arg8 = fconvert.s(x87_r3_30 + fconvert.t(var_80_1))
                            char ebx_4 =
                                (((zx.d(*(eax_27 + (edi_6 << 2))) - zx.d(ecx_8.b)) * edi_7) s>> 8).b
                                + ecx_8.b
                            ecx_8.b = esi_3[1]
                            *esi_3 = ebx_4
                            char edx_13 =
                                (((zx.d(*(eax_28 + 1)) - zx.d(ecx_8.b)) * edi_7) s>> 8).b + ecx_8.b
                            ecx_8.b = esi_3[2]
                            esi_3[1] = edx_13
                            result.b =
                                (((zx.d(*(eax_28 + 2)) - zx.d(ecx_8.b)) * edi_7) s>> 8).b + ecx_8.b
                            esi_3[2] = result.b
                        esi_3 = &esi_3[4]
                        int32_t temp2_1 = var_84_1
                        var_84_1 -= 1
                        arg7 = fconvert.s(x87_r7_60 + fconvert.t(fconvert.s(
                            x87_r7_37 * fconvert.t(var_a8) + x87_r5_18 * fconvert.t(var_b0)
                            + x87_r4_25 * fconvert.t(var_ac))))
                        
                        if (temp2_1 == 1)
                            break
                        
                        x87_r7_58 = fconvert.t(arg10)
                        x87_r6_47 = fconvert.t(arg6)
                    
                    ecx_7 = edi_4
                    result = result_1
                
                esi_3 += result
                i = i_1
                i_1 -= 1
                var_40_1 = fconvert.s(fconvert.t(var_40_1) + fconvert.t(var_38_1))
                var_14_1 = fconvert.s(fconvert.t(var_14_1) + fconvert.t(var_68_1))
                var_18_1 = fconvert.s(fconvert.t(var_18_1) + fconvert.t(var_5c_1))
                var_10_1 = fconvert.s(fconvert.t(var_2c_1) + fconvert.t(var_10_1))
                var_c_1 = fconvert.s(fconvert.t(var_20_1) + fconvert.t(var_c_1))
            while (i != 1)

return result
