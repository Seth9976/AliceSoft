// 函数: sub_485270
// 地址: 0x485270
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

float* eax = arg10
float* ebx = arg6
arg6 = fconvert.s(fconvert.t(*ebx))
float* ebx_1 = arg8
float var_c = fconvert.s(fconvert.t(ebx[1]))
int32_t esi_1 = *arg14
arg10 = fconvert.s(fconvert.t(*ebx_1))
float var_34 = fconvert.s(fconvert.t(ebx_1[1]))
float var_28 = fconvert.s(fconvert.t(*arg2))
float var_3c = fconvert.s(fconvert.t(arg2[1]))
arg14 = fconvert.s(fconvert.t(*eax))
float* eax_1 = arg7
float var_44 = fconvert.s(fconvert.t(eax[1]))
float var_d0 = fconvert.s(fconvert.t(*eax_1))
float var_cc = fconvert.s(fconvert.t(eax_1[1]))
float var_c4 = fconvert.s(fconvert.t(*arg9))
float var_a4 = fconvert.s(fconvert.t(arg9[1]))
float var_c8 = fconvert.s(fconvert.t(*arg3))
float var_d4 = fconvert.s(fconvert.t(arg3[1]))
long double x87_r7_14 = fconvert.t(var_34)
long double x87_r5 = fconvert.t(var_3c)
long double x87_r3_2 = fconvert.t(var_28)
double var_80 = fconvert.d(x87_r3_2)
long double x87_r1 = fconvert.t(arg10)
double var_f0 = fconvert.d(x87_r1)
long double x87_r2_5 = fconvert.t(var_c)
long double x87_r1_6 = fconvert.t(arg6)
float var_58 = fconvert.s(x87_r1_6 - fconvert.t(var_80))
long double x87_r2_15 = fconvert.t(var_44)
long double x87_r2_17 = fconvert.t(arg14)
float var_104 = fconvert.s(fconvert.t(var_80) - x87_r2_17)
var_80.d = fconvert.s(x87_r7_14 - fconvert.t(fconvert.d(x87_r2_15)))
var_80:4.d = fconvert.s(fconvert.t(fconvert.d(x87_r2_17)) - fconvert.t(var_f0))
float var_78 = fconvert.s(x87_r2_15 * fconvert.t(arg10) - x87_r7_14 * fconvert.t(arg14))
long double x87_r5_2 = fconvert.t(fconvert.s(fconvert.t(var_f0) - fconvert.t(fconvert.d(x87_r1_6))))
long double x87_r3_8 = fconvert.t(fconvert.s(fconvert.t(fconvert.d(x87_r2_5)) - x87_r7_14))
long double x87_r2_22 =
    fconvert.t(fconvert.s(x87_r7_14 * fconvert.t(arg6) - fconvert.t(arg10) * fconvert.t(var_c)))
long double x87_r2_24 = fconvert.t(var_80:4.d)
long double x87_r1_17 = fconvert.t(var_80.d)
long double x87_r2_26 = fconvert.t(fconvert.s(x87_r5_2 * x87_r5 + x87_r3_8 * x87_r3_2 + x87_r2_22))
long double x87_r1_20 = fconvert.t(9.9999997473787516e-05)
x87_r1_20 - x87_r2_26
float* result
result.w = (x87_r1_20 < x87_r2_26 ? 1 : 0) << 8
    | (is_unordered.t(x87_r1_20, x87_r2_26) ? 1 : 0) << 0xa
    | (x87_r1_20 == x87_r2_26 ? 1 : 0) << 0xe | 0x800

if ((result:1.b & 0x41) != 0)
    long double x87_r0_5 =
        fconvert.t(fconvert.s(x87_r3_2 * x87_r1_17 + x87_r5 * x87_r2_24 + fconvert.t(var_78)))
    x87_r0_5 - x87_r1_20
    result.w = (x87_r0_5 < x87_r1_20 ? 1 : 0) << 8
        | (is_unordered.t(x87_r0_5, x87_r1_20) ? 1 : 0) << 0xa
        | (x87_r0_5 == x87_r1_20 ? 1 : 0) << 0xe | 0x1000
    bool p_1 = unimplemented  {test ah, 0x5}
    
    if (p_1)
        long double x87_r1_21 = float.t(1)
        long double x87_r1_22 = fconvert.t(fconvert.s(x87_r1_21 / x87_r1_21))
        float var_68_1 = fconvert.s(fconvert.t(fconvert.s(x87_r7_14 - x87_r5)) * x87_r1_22)
        float var_64_1 = fconvert.s(fconvert.t(fconvert.s(x87_r3_2 - x87_r1)) * x87_r1_22)
        float var_a0_1 = fconvert.s(fconvert.t(fconvert.s(x87_r5 - x87_r2_5)) * x87_r1_22)
        float var_9c_1 = fconvert.s(fconvert.t(var_58) * x87_r1_22)
        float var_94_1 = fconvert.s(x87_r3_8 * x87_r1_22)
        float var_90_1 = fconvert.s(x87_r5_2 * x87_r1_22)
        long double x87_r4_9 = float.t(1)
        long double x87_r4_10 = fconvert.t(fconvert.s(x87_r4_9 / x87_r4_9))
        float var_5c_1 = fconvert.s(fconvert.t(fconvert.s(x87_r2_15 - x87_r5)) * x87_r4_10)
        float var_58_1 = fconvert.s(fconvert.t(var_104) * x87_r4_10)
        float var_50_1 = fconvert.s(x87_r1_17 * x87_r4_10)
        float var_4c_1 = fconvert.s(x87_r2_24 * x87_r4_10)
        int32_t ebx_2 = (*(*arg11 + 8))(0, 0)
        var_f0:4.d = ebx_2
        int32_t eax_5 = (*(*arg11 + 0x1c))()
        int32_t eax_8 = (*(*arg11 + 0x10))() - 1
        long double x87_r7_23 = fconvert.t(arg6)
        long double x87_r6_7 = fconvert.t(arg10)
        int32_t var_e4_1 = (*(*arg11 + 0x14))() - 1
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
        
        long double x87_r5_12 = fconvert.t(var_28)
        long double x87_r4_17 = fconvert.t(arg14)
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
        
        int32_t* ecx_4 = *arg5
        long double x87_r3_15 = fconvert.t(fconvert.s(float.t(ecx_4)))
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
        int32_t var_10_1 = sub_70c710(fconvert.t(fconvert.s(x87_r3_15)))
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
        
        long double x87_r7_28 = fconvert.t(fconvert.s(float.t(arg5[2] + ecx_4)))
        long double x87_r6_11 = fconvert.t(fconvert.s(x87_r7_26))
        x87_r6_11 - x87_r7_28
        void* eax_15
        eax_15.w = (x87_r6_11 < x87_r7_28 ? 1 : 0) << 8
            | (is_unordered.t(x87_r6_11, x87_r7_28) ? 1 : 0) << 0xa
            | (x87_r6_11 == x87_r7_28 ? 1 : 0) << 0xe | 0x3000
        
        if ((eax_15:1.b & 0x41) == 0)
            x87_r7_28 = x87_r6_11
        
        long double x87_r7_30 = fconvert.t(var_c)
        long double x87_r6_12 = fconvert.t(var_34)
        arg8 = sub_70c710(fconvert.t(fconvert.s(x87_r7_28)))
        x87_r6_12 - x87_r7_30
        int32_t eax_16
        eax_16.w = (x87_r6_12 < x87_r7_30 ? 1 : 0) << 8
            | (is_unordered.t(x87_r6_12, x87_r7_30) ? 1 : 0) << 0xa
            | (x87_r6_12 == x87_r7_30 ? 1 : 0) << 0xe | 0x3000
        long double x87_r6_13
        long double x87_r7_31
        
        if ((eax_16:1.b & 0x41) != 0)
            arg10 = fconvert.s(x87_r6_12)
            x87_r6_13 = x87_r7_30
            x87_r7_31 = x87_r6_12
        else
            x87_r6_13 = x87_r7_30
            x87_r7_31 = x87_r6_12
            arg10 = fconvert.s(x87_r6_13)
        
        long double x87_r5_15 = fconvert.t(var_3c)
        long double x87_r4_20 = fconvert.t(var_44)
        x87_r4_20 - x87_r5_15
        eax_16.w = (x87_r4_20 < x87_r5_15 ? 1 : 0) << 8
            | (is_unordered.t(x87_r4_20, x87_r5_15) ? 1 : 0) << 0xa
            | (x87_r4_20 == x87_r5_15 ? 1 : 0) << 0xe | 0x2000
        long double x87_r4_21
        long double x87_r5_16
        
        if ((eax_16:1.b & 0x41) != 0)
            arg6 = fconvert.s(x87_r4_20)
            x87_r4_21 = x87_r5_15
            x87_r5_16 = x87_r4_20
        else
            x87_r4_21 = x87_r5_15
            x87_r5_16 = x87_r4_20
            arg6 = fconvert.s(x87_r4_21)
        
        long double x87_r3_17 = fconvert.t(arg10)
        long double x87_r2_35 = fconvert.t(arg6)
        x87_r2_35 - x87_r3_17
        eax_16.w = (x87_r2_35 < x87_r3_17 ? 1 : 0) << 8
            | (is_unordered.t(x87_r2_35, x87_r3_17) ? 1 : 0) << 0xa
            | (x87_r2_35 == x87_r3_17 ? 1 : 0) << 0xe | 0x1000
        
        if ((eax_16:1.b & 0x41) != 0)
            x87_r4_21 = x87_r2_35
        else
            x87_r3_17 = x87_r2_35
        
        int32_t* edx_5 = arg5[1]
        long double x87_r3_19 = fconvert.t(fconvert.s(float.t(edx_5)))
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
        
        x87_r6_13 - x87_r7_31
        int32_t var_28_1 = sub_70c710(fconvert.t(fconvert.s(x87_r3_19)))
        int32_t eax_17
        eax_17.w = (x87_r6_13 < x87_r7_31 ? 1 : 0) << 8
            | (is_unordered.t(x87_r6_13, x87_r7_31) ? 1 : 0) << 0xa
            | (x87_r6_13 == x87_r7_31 ? 1 : 0) << 0xe | 0x2000
        
        if ((eax_17:1.b & 0x41) != 0)
            x87_r5_16 = x87_r6_13
        
        long double x87_r7_32 = x87_r5_16
        x87_r4_21 - x87_r7_32
        eax_17.w = (x87_r4_21 < x87_r7_32 ? 1 : 0) << 8
            | (is_unordered.t(x87_r4_21, x87_r7_32) ? 1 : 0) << 0xa
            | (x87_r4_21 == x87_r7_32 ? 1 : 0) << 0xe | 0x3000
        
        if ((eax_17:1.b & 0x41) != 0)
            x87_r7_32 = x87_r4_21
        
        long double x87_r7_33 = fconvert.t(fconvert.s(x87_r7_31))
        long double x87_r6_15 = fconvert.t(fconvert.s(x87_r7_32))
        x87_r6_15 - x87_r7_33
        eax_17.w = (x87_r6_15 < x87_r7_33 ? 1 : 0) << 8
            | (is_unordered.t(x87_r6_15, x87_r7_33) ? 1 : 0) << 0xa
            | (x87_r6_15 == x87_r7_33 ? 1 : 0) << 0xe | 0x3000
        bool p_5 = unimplemented  {test ah, 0x5}
        
        if (not(p_5))
            x87_r7_33 = x87_r6_15
        
        long double x87_r7_35 = fconvert.t(fconvert.s(float.t(arg5[3] + edx_5)))
        long double x87_r6_16 = fconvert.t(fconvert.s(x87_r7_33))
        x87_r6_16 - x87_r7_35
        int32_t* eax_18
        eax_18.w = (x87_r6_16 < x87_r7_35 ? 1 : 0) << 8
            | (is_unordered.t(x87_r6_16, x87_r7_35) ? 1 : 0) << 0xa
            | (x87_r6_16 == x87_r7_35 ? 1 : 0) << 0xe | 0x3000
        
        if ((eax_18:1.b & 0x41) == 0)
            x87_r7_35 = x87_r6_16
        
        int32_t eax_20 = arg8 i- var_10_1
        int32_t eax_21 = sub_70c710(fconvert.t(fconvert.s(x87_r7_35)))
        long double x87_r7_37 = fconvert.t(var_a0_1)
        long double x87_r5_18 = fconvert.t(var_68_1)
        arg10:3.b = arg13[8]
        long double x87_r4_25 = fconvert.t(var_94_1)
        arg14:3.b = arg13[4]
        char ecx_9 = arg13[0xc]
        arg7:3.b = *arg13
        float var_d8_1 = fconvert.s(x87_r7_37 * fconvert.t(var_c4) + x87_r5_18 * fconvert.t(var_d0)
            + x87_r4_25 * fconvert.t(var_c8))
        arg6:3.b = arg12[8]
        arg8:3.b = arg12[4]
        char eax_26 = arg12[0xc]
        arg9:3.b = *arg12
        char* edi_1 = (*(*arg4 + 8))(var_10_1, var_28_1)
        char* var_30_1 = edi_1
        int32_t edx_9 = eax_20
        int32_t ecx_16 = (*(*arg4 + 0x1c))() - (edx_9 << 2)
        long double x87_r7_42 = fconvert.t(fconvert.s(float.t(var_28_1)))
        int32_t var_78_1 = ecx_16
        float var_6c_1 = fconvert.s(x87_r7_42 * fconvert.t(var_64_1) + fconvert.t(fconvert.s(
            fconvert.t(fconvert.s(x87_r1 * x87_r5 - x87_r3_2 * x87_r7_14)) * x87_r1_22)))
        float var_44_1 = fconvert.s(x87_r7_42 * fconvert.t(var_9c_1) + fconvert.t(fconvert.s(
            fconvert.t(fconvert.s(x87_r2_5 * x87_r3_2 - x87_r1_6 * x87_r5)) * x87_r1_22)))
        float var_3c_1 = fconvert.s(x87_r7_42 * fconvert.t(var_90_1)
            + fconvert.t(fconvert.s(x87_r1_22 * x87_r2_22)))
        result = eax_21 - var_28_1
        float var_34_1 = fconvert.s(fconvert.t(var_58_1) * x87_r7_42 + fconvert.t(fconvert.s(
            fconvert.t(fconvert.s(x87_r2_17 * x87_r5 - x87_r2_15 * x87_r3_2)) * x87_r4_10)))
        float var_28_2 = fconvert.s(x87_r7_42 * fconvert.t(var_4c_1)
            + fconvert.t(fconvert.s(x87_r4_10 * fconvert.t(var_78))))
        long double x87_r7_46 = fconvert.t(fconvert.s(float.t(var_10_1)))
        double var_b0_1
        var_b0_1:4.d = fconvert.s(x87_r7_46 * fconvert.t(var_5c_1))
        double var_b8_1
        var_b8_1:4.d = fconvert.s(x87_r7_46 * fconvert.t(var_50_1))
        
        if (result s> 0)
            float* var_40_3 = result
            float* i
            
            do
                float var_20_1 = fconvert.s(fconvert.t(var_b0_1:4.d) + fconvert.t(var_34_1))
                float var_1c_1 = fconvert.s(fconvert.t(var_b8_1:4.d) + fconvert.t(var_28_2))
                long double x87_r7_58 = fconvert.t(fconvert.s(
                    fconvert.t(fconvert.s(x87_r7_46 * fconvert.t(var_a0_1)))
                    + fconvert.t(var_44_1)))
                long double x87_r5_20 = fconvert.t(fconvert.s(
                    fconvert.t(fconvert.s(x87_r7_46 * fconvert.t(var_68_1)))
                    + fconvert.t(var_6c_1)))
                long double x87_r4_30 = fconvert.t(fconvert.s(
                    fconvert.t(fconvert.s(x87_r7_46 * fconvert.t(var_94_1)))
                    + fconvert.t(var_3c_1)))
                long double x87_r6_47 = x87_r4_30
                float var_24_1 = fconvert.s(x87_r7_58 * fconvert.t(var_c4)
                    + x87_r5_20 * fconvert.t(var_d0) + x87_r4_30 * fconvert.t(var_c8))
                float var_4_1 = fconvert.s(x87_r5_20 * fconvert.t(var_cc)
                    + x87_r7_58 * fconvert.t(var_a4) + x87_r6_47 * fconvert.t(var_d4))
                
                if (edx_9 s> 0)
                    int32_t var_38_3 = edx_9
                    
                    while (true)
                        long double x87_r5_24 = float.t(0)
                        x87_r5_24 - x87_r7_58
                        result.w = (x87_r5_24 < x87_r7_58 ? 1 : 0) << 8
                            | (is_unordered.t(x87_r5_24, x87_r7_58) ? 1 : 0) << 0xa
                            | (x87_r5_24 == x87_r7_58 ? 1 : 0) << 0xe | 0x2800
                        long double x87_r4_36 = fconvert.t(var_20_1)
                        long double x87_r3_26 = fconvert.t(var_1c_1)
                        float var_10_4
                        float var_c_3
                        long double x87_r7_60
                        long double x87_r6_52
                        
                        if ((result:1.b & 0x41) == 0)
                            x87_r6_52 = x87_r3_26
                        label_4861a1:
                            var_c_3 = fconvert.s(x87_r7_58 + fconvert.t(var_a0_1))
                            var_10_4 = fconvert.s(x87_r6_52 + fconvert.t(var_94_1))
                            var_20_1 = fconvert.s(x87_r4_36 + fconvert.t(var_5c_1))
                            var_1c_1 = fconvert.s(x87_r5_24 + fconvert.t(var_50_1))
                            var_24_1 = fconvert.s(fconvert.t(var_24_1) + fconvert.t(var_d8_1))
                            x87_r7_60 = fconvert.t(var_4_1)
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
                            label_486195:
                                x87_r6_52 = x87_r4_37
                                x87_r4_36 = x87_r5_24
                                x87_r5_24 = x87_r6_48
                                goto label_4861a1
                            
                            x87_r4_37 = x87_r6_47
                            x87_r4_36 - x87_r5_24
                            result.w = (x87_r4_36 < x87_r5_24 ? 1 : 0) << 8
                                | (is_unordered.t(x87_r4_36, x87_r5_24) ? 1 : 0) << 0xa
                                | (x87_r4_36 == x87_r5_24 ? 1 : 0) << 0xe | 0x1800
                            bool p_7 = unimplemented  {test ah, 0x5}
                            
                            if (not(p_7))
                                x87_r6_48 = x87_r4_36
                                goto label_486195
                            
                            long double x87_r3_29 = x87_r5_24
                            x87_r5_24 = x87_r4_36
                            x87_r3_29 - x87_r6_48
                            result.w = (x87_r3_29 < x87_r6_48 ? 1 : 0) << 8
                                | (is_unordered.t(x87_r3_29, x87_r6_48) ? 1 : 0) << 0xa
                                | (x87_r3_29 == x87_r6_48 ? 1 : 0) << 0xe | 0x2000
                            
                            if ((result:1.b & 0x41) == 0)
                                goto label_486195
                            
                            long double x87_r3_30 = fconvert.t(var_24_1)
                            int32_t eax_33 = sub_70c710(fconvert.t(256.0) * x87_r3_30)
                            long double x87_r2_39 = fconvert.t(var_4_1)
                            int32_t eax_34 = sub_70c710(fconvert.t(256.0) * x87_r2_39)
                            uint32_t ecx_18 = zx.d(eax_33.b)
                            uint32_t ecx_20 = zx.d(eax_34.b)
                            int32_t edi_3 = eax_33 s>> 8
                            int32_t eax_35 = eax_34 s>> 8
                            int32_t var_8_1 = edi_3 + 1
                            int32_t var_4_2 = eax_35
                            int32_t ecx_22 = eax_35 + 1
                            
                            if (edi_3 s< 0)
                                edi_3 = 0
                            else if (edi_3 s> eax_8)
                                edi_3 = eax_8
                            
                            if (eax_35 s< 0)
                                eax_35 = 0
                                var_4_2 = 0
                            else if (eax_35 s> var_e4_1)
                                eax_35 = var_e4_1
                                var_4_2 = var_e4_1
                            
                            if (var_8_1 s>= 0)
                                if (var_8_1 s> eax_8)
                                    var_8_1 = eax_8
                                
                                eax_35 = var_4_2
                            else
                                var_8_1 = 0
                            
                            if (ecx_22 s< 0)
                                ecx_22 = 0
                            else if (ecx_22 s> var_e4_1)
                                ecx_22 = var_e4_1
                            
                            void* eax_37 = eax_35 * eax_5
                            int32_t edx_15 = *(eax_37 + (edi_3 << 2) + ebx_2)
                            int32_t edx_18 = var_8_1 * 4
                            int32_t ecx_25 = *(ecx_22 * eax_5 + edx_18 + ebx_2)
                            uint32_t edi_4 = zx.d(arg14:3.b)
                            uint32_t eax_40 = zx.d(arg10:3.b)
                            uint32_t ecx_26 = zx.d(arg6:3.b)
                            int32_t var_14_1
                            var_14_1.b = *(((zx.d(edx_15.b) * eax_40) s>> 8) + ecx_26 + esi_1)
                            uint32_t edx_24 = zx.d(arg8:3.b)
                            uint32_t ebx_7 = zx.d(arg9:3.b)
                            var_14_1:1.b = *(((zx.d(edx_15:1.b) * edi_4) s>> 8) + edx_24 + esi_1)
                            uint32_t edx_26 = zx.d(arg7:3.b)
                            uint32_t ebx_12 = zx.d(eax_26)
                            var_14_1:2.b = *(((zx.d(var_14_1:2.b) * edx_26) s>> 8) + ebx_7 + esi_1)
                            uint32_t edx_28 = zx.d(ecx_9)
                            var_14_1:3.b = *(((zx.d(var_14_1:3.b) * edx_28) s>> 8) + ebx_12 + esi_1)
                            int32_t var_18_1
                            var_18_1.b = *(((zx.d((*(eax_37 + edx_18 + ebx_2)).b) * eax_40) s>> 8)
                                + ecx_26 + esi_1)
                            var_18_1:1.b = *(((zx.d(var_18_1:1.b) * edi_4) s>> 8) + edx_24 + esi_1)
                            var_18_1:2.b = *(((zx.d(var_18_1:2.b) * edx_26) s>> 8) + ebx_7 + esi_1)
                            var_18_1:3.b = *(((zx.d(var_18_1:3.b) * edx_28) s>> 8) + ebx_12 + esi_1)
                            int32_t var_8_2
                            var_8_2.b = *(((zx.d(ecx_25.b) * eax_40) s>> 8) + ecx_26 + esi_1)
                            int32_t ebx_18 = zx.d(var_8_2:3.b) * edx_28
                            var_8_2:1.b = *(((zx.d(var_8_2:1.b) * edi_4) s>> 8) + edx_24 + esi_1)
                            var_8_2:2.b = *(((zx.d(var_8_2:2.b) * edx_26) s>> 8) + ebx_7 + esi_1)
                            int32_t ebx_20
                            ebx_20.b = *((ebx_18 s>> 8) + ebx_12 + esi_1)
                            var_8_2:3.b = ebx_20.b
                            int32_t var_4_3
                            var_4_3.b = *(((zx.d(ecx_25.b) * eax_40) s>> 8) + ecx_26 + esi_1)
                            int32_t ecx_32 = zx.d(var_4_3:2.b) * edx_26
                            var_4_3:1.b = *(((zx.d(ecx_25:1.b) * edi_4) s>> 8) + edx_24 + esi_1)
                            int32_t ecx_36 = zx.d(var_4_3:3.b) * edx_28
                            var_4_3:2.b = *((ecx_32 s>> 8) + ebx_7 + esi_1)
                            uint32_t eax_44 = zx.d(var_14_1.b)
                            int32_t edi_9 = (((zx.d(var_18_1.b) - eax_44) * ecx_18) s>> 8) + eax_44
                            uint32_t eax_45 = zx.d(var_14_1:1.b)
                            var_4_3:3.b = *((ecx_36 s>> 8) + ebx_12 + esi_1)
                            uint32_t edx_67 = zx.d(var_14_1:2.b)
                            int32_t ecx_43 =
                                (((zx.d(var_18_1:1.b) - eax_45) * ecx_18) s>> 8) + eax_45
                            int32_t eax_50 =
                                (((zx.d(var_18_1:2.b) - edx_67) * ecx_18) s>> 8) + edx_67
                            uint32_t eax_51 = zx.d(var_14_1:3.b)
                            uint32_t ebx_26 = zx.d(var_8_2:3.b)
                            int32_t edx_72 =
                                (((zx.d(var_18_1:3.b) - eax_51) * ecx_18) s>> 8) + eax_51
                            result = ((((((zx.d(var_4_3:3.b) - ebx_26) * ecx_18) s>> 8) - edx_72
                                + ebx_26) * ecx_20) s>> 8) + edx_72
                            uint32_t edx_73 = zx.d(var_8_2.b)
                            x87_r7_60 = x87_r2_39
                            uint32_t edi_10 = zx.d(var_8_2:1.b)
                            *var_30_1 += (((((((((zx.d(var_4_3.b) - edx_73) * ecx_18) s>> 8) - edi_9
                                + edx_73) * ecx_20) s>> 8) - zx.d(*var_30_1) + edi_9) * result) s>> 8)
                                .b
                            char* edx_76
                            edx_76.b = var_30_1[1]
                            edi_1 = var_30_1
                            uint32_t ecx_44 = zx.d(var_8_2:2.b)
                            edi_1[1] = (((((((((zx.d(var_4_3:1.b) - edi_10) * ecx_18) s>> 8)
                                - ecx_43 + edi_10) * ecx_20) s>> 8) - zx.d(edx_76.b) + ecx_43)
                                * result) s>> 8).b + edx_76.b
                            edx_76.b = edi_1[2]
                            var_c_3 = fconvert.s(x87_r7_58 + fconvert.t(var_a0_1))
                            var_10_4 = fconvert.s(x87_r4_37 + fconvert.t(var_94_1))
                            var_20_1 = fconvert.s(x87_r5_24 + fconvert.t(var_5c_1))
                            var_1c_1 = fconvert.s(x87_r6_48 + fconvert.t(var_50_1))
                            var_24_1 = fconvert.s(x87_r3_30 + fconvert.t(var_d8_1))
                            edi_1[2] = (((((((((zx.d(var_4_3:2.b) - ecx_44) * ecx_18) s>> 8)
                                - eax_50 + ecx_44) * ecx_20) s>> 8) - zx.d(edx_76.b) + eax_50)
                                * result) s>> 8).b + edx_76.b
                            ebx_2 = var_f0:4.d
                        edi_1 = &edi_1[4]
                        int32_t temp2_1 = var_38_3
                        var_38_3 -= 1
                        var_30_1 = edi_1
                        var_4_1 = fconvert.s(x87_r7_60 + fconvert.t(fconvert.s(
                            x87_r7_37 * fconvert.t(var_a4) + x87_r5_18 * fconvert.t(var_cc)
                            + x87_r4_25 * fconvert.t(var_d4))))
                        
                        if (temp2_1 == 1)
                            break
                        
                        x87_r7_58 = fconvert.t(var_c_3)
                        x87_r6_47 = fconvert.t(var_10_4)
                    
                    ecx_16 = var_78_1
                    edx_9 = eax_20
                
                edi_1 = &edi_1[ecx_16]
                i = var_40_3
                var_40_3 -= 1
                var_30_1 = edi_1
                var_6c_1 = fconvert.s(fconvert.t(var_6c_1) + fconvert.t(var_64_1))
                var_44_1 = fconvert.s(fconvert.t(var_44_1) + fconvert.t(var_9c_1))
                var_3c_1 = fconvert.s(fconvert.t(var_3c_1) + fconvert.t(var_90_1))
                var_34_1 = fconvert.s(fconvert.t(var_58_1) + fconvert.t(var_34_1))
                var_28_2 = fconvert.s(fconvert.t(var_4c_1) + fconvert.t(var_28_2))
            while (i != 1)

return result
