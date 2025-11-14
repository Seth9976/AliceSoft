// 函数: sub_46ea70
// 地址: 0x46ea70
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

float* eax = arg10
int32_t* edi = arg15
arg15 = fconvert.s(fconvert.t(*arg2))
float* edx = arg7
float var_14 = fconvert.s(fconvert.t(arg2[1]))
arg10 = fconvert.s(fconvert.t(*edx))
int32_t edi_1 = *edi
float* edx_1 = arg9
float var_18 = fconvert.s(fconvert.t(edx[1]))
float var_c = fconvert.s(fconvert.t(*edx_1))
float var_1c = fconvert.s(fconvert.t(edx_1[1]))
arg7 = fconvert.s(fconvert.t(*eax))
float* eax_1 = arg6
float var_28 = fconvert.s(fconvert.t(eax[1]))
float var_a8 = fconvert.s(fconvert.t(*eax_1))
float var_a4 = fconvert.s(fconvert.t(eax_1[1]))
float var_bc = fconvert.s(fconvert.t(*arg8))
float var_b0 = fconvert.s(fconvert.t(arg8[1]))
float var_a0 = fconvert.s(fconvert.t(*arg3))
float var_ac = fconvert.s(fconvert.t(arg3[1]))
long double x87_r7_14 = fconvert.t(var_18)
long double x87_r5 = fconvert.t(var_1c)
long double x87_r3_2 = fconvert.t(var_c)
double var_6c = fconvert.d(x87_r3_2)
long double x87_r1 = fconvert.t(arg10)
double var_c4 = fconvert.d(x87_r1)
long double x87_r2_5 = fconvert.t(var_14)
long double x87_r1_6 = fconvert.t(arg15)
float var_38 = fconvert.s(x87_r1_6 - fconvert.t(var_6c))
long double x87_r2_15 = fconvert.t(var_28)
long double x87_r2_17 = fconvert.t(arg7)
float var_e4 = fconvert.s(fconvert.t(var_6c) - x87_r2_17)
var_6c.d = fconvert.s(x87_r7_14 - fconvert.t(fconvert.d(x87_r2_15)))
var_6c:4.d = fconvert.s(fconvert.t(fconvert.d(x87_r2_17)) - fconvert.t(var_c4))
float var_64 = fconvert.s(x87_r2_15 * fconvert.t(arg10) - x87_r7_14 * fconvert.t(arg7))
long double x87_r5_2 = fconvert.t(fconvert.s(fconvert.t(var_c4) - fconvert.t(fconvert.d(x87_r1_6))))
long double x87_r3_8 = fconvert.t(fconvert.s(fconvert.t(fconvert.d(x87_r2_5)) - x87_r7_14))
long double x87_r2_22 =
    fconvert.t(fconvert.s(x87_r7_14 * fconvert.t(arg15) - fconvert.t(arg10) * fconvert.t(var_14)))
long double x87_r2_24 = fconvert.t(var_6c:4.d)
long double x87_r1_17 = fconvert.t(var_6c.d)
long double x87_r2_26 = fconvert.t(fconvert.s(x87_r5_2 * x87_r5 + x87_r3_8 * x87_r3_2 + x87_r2_22))
long double x87_r1_20 = fconvert.t(9.9999997473787516e-05)
x87_r1_20 - x87_r2_26
float* result
result.w = (x87_r1_20 < x87_r2_26 ? 1 : 0) << 8
    | (is_unordered.t(x87_r1_20, x87_r2_26) ? 1 : 0) << 0xa
    | (x87_r1_20 == x87_r2_26 ? 1 : 0) << 0xe | 0x800

if ((result:1.b & 0x41) != 0)
    long double x87_r0_5 =
        fconvert.t(fconvert.s(x87_r3_2 * x87_r1_17 + x87_r5 * x87_r2_24 + fconvert.t(var_64)))
    x87_r0_5 - x87_r1_20
    result.w = (x87_r0_5 < x87_r1_20 ? 1 : 0) << 8
        | (is_unordered.t(x87_r0_5, x87_r1_20) ? 1 : 0) << 0xa
        | (x87_r0_5 == x87_r1_20 ? 1 : 0) << 0xe | 0x1000
    bool p_1 = unimplemented  {test ah, 0x5}
    
    if (p_1)
        long double x87_r1_21 = float.t(1)
        long double x87_r1_22 = fconvert.t(fconvert.s(x87_r1_21 / x87_r1_21))
        float var_54_1 = fconvert.s(fconvert.t(fconvert.s(x87_r7_14 - x87_r5)) * x87_r1_22)
        float var_50_1 = fconvert.s(fconvert.t(fconvert.s(x87_r3_2 - x87_r1)) * x87_r1_22)
        float var_88_1 = fconvert.s(fconvert.t(fconvert.s(x87_r5 - x87_r2_5)) * x87_r1_22)
        float var_84_1 = fconvert.s(fconvert.t(var_38) * x87_r1_22)
        float var_7c_1 = fconvert.s(x87_r3_8 * x87_r1_22)
        float var_78_1 = fconvert.s(x87_r5_2 * x87_r1_22)
        long double x87_r4_9 = float.t(1)
        long double x87_r4_10 = fconvert.t(fconvert.s(x87_r4_9 / x87_r4_9))
        float var_3c_1 = fconvert.s(fconvert.t(fconvert.s(x87_r2_15 - x87_r5)) * x87_r4_10)
        float var_38_1 = fconvert.s(fconvert.t(var_e4) * x87_r4_10)
        float var_48_1 = fconvert.s(x87_r1_17 * x87_r4_10)
        float var_44_1 = fconvert.s(x87_r2_24 * x87_r4_10)
        var_c4:4.d = (*(*arg12 + 8))(0, 0)
        double var_9c_1
        var_9c_1:4.d = (*(*arg12 + 0x1c))()
        int32_t eax_8 = (*(*arg12 + 0x10))() - 1
        long double x87_r7_23 = fconvert.t(arg15)
        double var_94_1
        var_94_1:4.d = (*(*arg12 + 0x14))() - 1
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
        long double x87_r4_17 = fconvert.t(arg7)
        x87_r4_17 - x87_r5_12
        eax_11.w = (x87_r4_17 < x87_r5_12 ? 1 : 0) << 8
            | (is_unordered.t(x87_r4_17, x87_r5_12) ? 1 : 0) << 0xa
            | (x87_r4_17 == x87_r5_12 ? 1 : 0) << 0xe | 0x2000
        long double x87_r4_18
        long double x87_r5_13
        
        if ((eax_11:1.b & 0x41) != 0)
            arg15 = fconvert.s(x87_r4_17)
            x87_r4_18 = x87_r5_12
            x87_r5_13 = x87_r4_17
        else
            x87_r4_18 = x87_r5_12
            x87_r5_13 = x87_r4_17
            arg15 = fconvert.s(x87_r4_18)
        
        long double x87_r3_13 = fconvert.t(arg10)
        long double x87_r2_33 = fconvert.t(arg15)
        x87_r2_33 - x87_r3_13
        eax_11.w = (x87_r2_33 < x87_r3_13 ? 1 : 0) << 8
            | (is_unordered.t(x87_r2_33, x87_r3_13) ? 1 : 0) << 0xa
            | (x87_r2_33 == x87_r3_13 ? 1 : 0) << 0xe | 0x1000
        
        if ((eax_11:1.b & 0x41) != 0)
            x87_r4_18 = x87_r2_33
        else
            x87_r3_13 = x87_r2_33
        
        float esi_1 = *arg5
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
        
        long double x87_r7_28 = fconvert.t(fconvert.s(float.t(arg5[2] i+ esi_1)))
        long double x87_r6_11 = fconvert.t(fconvert.s(x87_r7_26))
        x87_r6_11 - x87_r7_28
        eax_13.w = (x87_r6_11 < x87_r7_28 ? 1 : 0) << 8
            | (is_unordered.t(x87_r6_11, x87_r7_28) ? 1 : 0) << 0xa
            | (x87_r6_11 == x87_r7_28 ? 1 : 0) << 0xe | 0x3000
        
        if ((eax_13:1.b & 0x41) == 0)
            x87_r7_28 = x87_r6_11
        
        long double x87_r7_30 = fconvert.t(var_14)
        long double x87_r6_12 = fconvert.t(var_18)
        int32_t esi_2 = sub_70c710(fconvert.t(fconvert.s(x87_r7_28)))
        x87_r6_12 - x87_r7_30
        int32_t eax_14
        eax_14.w = (x87_r6_12 < x87_r7_30 ? 1 : 0) << 8
            | (is_unordered.t(x87_r6_12, x87_r7_30) ? 1 : 0) << 0xa
            | (x87_r6_12 == x87_r7_30 ? 1 : 0) << 0xe | 0x3000
        long double x87_r6_13
        long double x87_r7_31
        
        if ((eax_14:1.b & 0x41) != 0)
            arg10 = fconvert.s(x87_r6_12)
            x87_r6_13 = x87_r7_30
            x87_r7_31 = x87_r6_12
        else
            x87_r6_13 = x87_r7_30
            x87_r7_31 = x87_r6_12
            arg10 = fconvert.s(x87_r6_13)
        
        long double x87_r5_15 = fconvert.t(var_1c)
        long double x87_r4_20 = fconvert.t(var_28)
        x87_r4_20 - x87_r5_15
        eax_14.w = (x87_r4_20 < x87_r5_15 ? 1 : 0) << 8
            | (is_unordered.t(x87_r4_20, x87_r5_15) ? 1 : 0) << 0xa
            | (x87_r4_20 == x87_r5_15 ? 1 : 0) << 0xe | 0x2000
        long double x87_r4_21
        long double x87_r5_16
        
        if ((eax_14:1.b & 0x41) != 0)
            arg15 = fconvert.s(x87_r4_20)
            x87_r4_21 = x87_r5_15
            x87_r5_16 = x87_r4_20
        else
            x87_r4_21 = x87_r5_15
            x87_r5_16 = x87_r4_20
            arg15 = fconvert.s(x87_r4_21)
        
        long double x87_r3_17 = fconvert.t(arg10)
        long double x87_r2_35 = fconvert.t(arg15)
        x87_r2_35 - x87_r3_17
        eax_14.w = (x87_r2_35 < x87_r3_17 ? 1 : 0) << 8
            | (is_unordered.t(x87_r2_35, x87_r3_17) ? 1 : 0) << 0xa
            | (x87_r2_35 == x87_r3_17 ? 1 : 0) << 0xe | 0x1000
        
        if ((eax_14:1.b & 0x41) != 0)
            x87_r4_21 = x87_r2_35
        else
            x87_r3_17 = x87_r2_35
        
        float ecx_5 = arg5[1]
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
        int32_t var_c_1 = sub_70c710(fconvert.t(fconvert.s(x87_r3_19)))
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
        
        long double x87_r7_35 = fconvert.t(fconvert.s(float.t(arg5[3] i+ ecx_5)))
        long double x87_r6_16 = fconvert.t(fconvert.s(x87_r7_33))
        x87_r6_16 - x87_r7_35
        float eax_18
        eax_18.w = (x87_r6_16 < x87_r7_35 ? 1 : 0) << 8
            | (is_unordered.t(x87_r6_16, x87_r7_35) ? 1 : 0) << 0xa
            | (x87_r6_16 == x87_r7_35 ? 1 : 0) << 0xe | 0x3000
        
        if ((eax_18:1.b & 0x41) == 0)
            x87_r7_35 = x87_r6_16
        
        int32_t esi_3 = esi_2 - var_10_1
        long double x87_r7_37 = fconvert.t(var_88_1)
        int32_t result_1 = sub_70c710(fconvert.t(fconvert.s(x87_r7_35))) - var_c_1
        long double x87_r5_18 = fconvert.t(var_54_1)
        long double x87_r4_25 = fconvert.t(var_7c_1)
        arg6:3.b = *arg14
        arg10:3.b = arg14[8]
        float var_b4_1 = fconvert.s(x87_r7_37 * fconvert.t(var_bc) + x87_r5_18 * fconvert.t(var_a8)
            + x87_r4_25 * fconvert.t(var_a0))
        arg7:3.b = arg14[4]
        arg15:3.b = arg13[8]
        arg9:3.b = arg13[4]
        arg8:3.b = *arg13
        char* esi_5 = (*(*arg4 + 8))(var_10_1, var_c_1)
        int32_t edx_14 = esi_3
        int32_t ecx_11 = (*(*arg4 + 0x1c))() - (edx_14 << 2)
        long double x87_r7_42 = fconvert.t(fconvert.s(float.t(var_c_1)))
        int32_t var_64_1 = ecx_11
        float var_70_1 = fconvert.s(x87_r7_42 * fconvert.t(var_50_1) + fconvert.t(fconvert.s(
            fconvert.t(fconvert.s(x87_r1 * x87_r5 - x87_r3_2 * x87_r7_14)) * x87_r1_22)))
        float var_28_1 = fconvert.s(x87_r7_42 * fconvert.t(var_84_1) + fconvert.t(fconvert.s(
            fconvert.t(fconvert.s(x87_r2_5 * x87_r3_2 - x87_r1_6 * x87_r5)) * x87_r1_22)))
        float var_1c_1 = fconvert.s(x87_r7_42 * fconvert.t(var_78_1)
            + fconvert.t(fconvert.s(x87_r1_22 * x87_r2_22)))
        float var_18_1 = fconvert.s(fconvert.t(var_38_1) * x87_r7_42 + fconvert.t(fconvert.s(
            fconvert.t(fconvert.s(x87_r2_17 * x87_r5 - x87_r2_15 * x87_r3_2)) * x87_r4_10)))
        float var_c_2 = fconvert.s(x87_r7_42 * fconvert.t(var_44_1)
            + fconvert.t(fconvert.s(x87_r4_10 * fconvert.t(var_64))))
        result = result_1
        long double x87_r7_46 = fconvert.t(fconvert.s(float.t(var_10_1)))
        
        if (result s> 0)
            float* var_20_3 = result
            float* i
            
            do
                float var_58_1 = fconvert.s(fconvert.t(fconvert.s(x87_r7_46 * fconvert.t(var_3c_1)))
                    + fconvert.t(var_18_1))
                float var_2c_1 = fconvert.s(fconvert.t(fconvert.s(x87_r7_46 * fconvert.t(var_48_1)))
                    + fconvert.t(var_c_2))
                long double x87_r7_58 = fconvert.t(fconvert.s(
                    fconvert.t(fconvert.s(x87_r7_46 * fconvert.t(var_88_1)))
                    + fconvert.t(var_28_1)))
                long double x87_r5_20 = fconvert.t(fconvert.s(
                    fconvert.t(fconvert.s(x87_r7_46 * fconvert.t(var_54_1)))
                    + fconvert.t(var_70_1)))
                long double x87_r4_30 = fconvert.t(fconvert.s(
                    fconvert.t(fconvert.s(x87_r7_46 * fconvert.t(var_7c_1)))
                    + fconvert.t(var_1c_1)))
                long double x87_r6_47 = x87_r4_30
                float var_10_2 = fconvert.s(x87_r7_58 * fconvert.t(var_bc)
                    + x87_r5_20 * fconvert.t(var_a8) + x87_r4_30 * fconvert.t(var_a0))
                float var_14_1 = fconvert.s(x87_r5_20 * fconvert.t(var_a4)
                    + x87_r7_58 * fconvert.t(var_b0) + x87_r6_47 * fconvert.t(var_ac))
                
                if (edx_14 s> 0)
                    int32_t var_24_3 = edx_14
                    
                    while (true)
                        long double x87_r5_24 = float.t(0)
                        x87_r5_24 - x87_r7_58
                        result.w = (x87_r5_24 < x87_r7_58 ? 1 : 0) << 8
                            | (is_unordered.t(x87_r5_24, x87_r7_58) ? 1 : 0) << 0xa
                            | (x87_r5_24 == x87_r7_58 ? 1 : 0) << 0xe | 0x2800
                        long double x87_r4_36 = fconvert.t(var_58_1)
                        long double x87_r3_26 = fconvert.t(var_2c_1)
                        float var_30_2
                        float var_8_4
                        long double x87_r7_60
                        long double x87_r6_52
                        
                        if ((result:1.b & 0x41) == 0)
                            x87_r6_52 = x87_r3_26
                        label_46f59f:
                            var_8_4 = fconvert.s(x87_r7_58 + fconvert.t(var_88_1))
                            var_30_2 = fconvert.s(x87_r6_52 + fconvert.t(var_7c_1))
                            var_58_1 = fconvert.s(x87_r4_36 + fconvert.t(var_3c_1))
                            var_2c_1 = fconvert.s(x87_r5_24 + fconvert.t(var_48_1))
                            var_10_2 = fconvert.s(fconvert.t(var_10_2) + fconvert.t(var_b4_1))
                            x87_r7_60 = fconvert.t(var_14_1)
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
                            label_46f593:
                                x87_r6_52 = x87_r4_37
                                x87_r4_36 = x87_r5_24
                                x87_r5_24 = x87_r6_48
                                goto label_46f59f
                            
                            x87_r4_37 = x87_r6_47
                            x87_r4_36 - x87_r5_24
                            result.w = (x87_r4_36 < x87_r5_24 ? 1 : 0) << 8
                                | (is_unordered.t(x87_r4_36, x87_r5_24) ? 1 : 0) << 0xa
                                | (x87_r4_36 == x87_r5_24 ? 1 : 0) << 0xe | 0x1800
                            bool p_7 = unimplemented  {test ah, 0x5}
                            
                            if (not(p_7))
                                x87_r6_48 = x87_r4_36
                                goto label_46f593
                            
                            long double x87_r3_29 = x87_r5_24
                            x87_r5_24 = x87_r4_36
                            x87_r3_29 - x87_r6_48
                            result.w = (x87_r3_29 < x87_r6_48 ? 1 : 0) << 8
                                | (is_unordered.t(x87_r3_29, x87_r6_48) ? 1 : 0) << 0xa
                                | (x87_r3_29 == x87_r6_48 ? 1 : 0) << 0xe | 0x2000
                            
                            if ((result:1.b & 0x41) == 0)
                                goto label_46f593
                            
                            long double x87_r3_30 = fconvert.t(var_10_2)
                            long double x87_r2_39 = fconvert.t(var_14_1)
                            int32_t ecx_12 = sub_70c710(fconvert.t(256.0) * x87_r3_30) s>> 8
                            int32_t eax_32 = sub_70c710(fconvert.t(256.0) * x87_r2_39) s>> 8
                            
                            if (ecx_12 s< 0)
                                ecx_12 = 0
                            else if (ecx_12 s> eax_8)
                                ecx_12 = eax_8
                            
                            if (eax_32 s>= 0)
                                int32_t edx_16 = var_94_1:4.d
                                
                                if (eax_32 s> edx_16)
                                    eax_32 = edx_16
                            else
                                eax_32 = 0
                            
                            x87_r7_60 = x87_r2_39
                            int24_t eax_35 =
                                (*(eax_32 * var_9c_1:4.d + var_c4:4.d + (ecx_12 << 2))).3
                            int32_t ecx_16
                            ecx_16.b = *(zx.d(arg15:3.b)
                                + ((zx.d(eax_35.b) * zx.d(arg10:3.b)) s>> 8) + edi_1)
                            int32_t edx_21
                            edx_21.b = *(zx.d(arg9:3.b)
                                + ((zx.d(eax_35:1.b) * zx.d(arg7:3.b)) s>> 8) + edi_1)
                            int24_t var_8_3
                            var_8_3:1.b = edx_21.b
                            var_8_3:2.b = *(zx.d(arg8:3.b)
                                + ((zx.d(eax_35:2.b) * zx.d(arg6:3.b)) s>> 8) + edi_1)
                            result.b = *esi_5
                            char ecx_20 =
                                (((zx.d(ecx_16.b) - zx.d(result.b)) * arg11) s>> 8).b + result.b
                            result.b = esi_5[1]
                            *esi_5 = ecx_20
                            char ecx_24 =
                                (((zx.d(var_8_3:1.b) - zx.d(result.b)) * arg11) s>> 8).b + result.b
                            result.b = esi_5[2]
                            esi_5[1] = ecx_24
                            var_8_4 = fconvert.s(x87_r7_58 + fconvert.t(var_88_1))
                            var_30_2 = fconvert.s(x87_r4_37 + fconvert.t(var_7c_1))
                            var_58_1 = fconvert.s(x87_r5_24 + fconvert.t(var_3c_1))
                            var_2c_1 = fconvert.s(x87_r6_48 + fconvert.t(var_48_1))
                            esi_5[2] =
                                (((zx.d(var_8_3:2.b) - zx.d(result.b)) * arg11) s>> 8).b + result.b
                            var_10_2 = fconvert.s(x87_r3_30 + fconvert.t(var_b4_1))
                        esi_5 = &esi_5[4]
                        int32_t temp2_1 = var_24_3
                        var_24_3 -= 1
                        var_14_1 = fconvert.s(x87_r7_60 + fconvert.t(fconvert.s(
                            x87_r7_37 * fconvert.t(var_b0) + x87_r5_18 * fconvert.t(var_a4)
                            + x87_r4_25 * fconvert.t(var_ac))))
                        
                        if (temp2_1 == 1)
                            break
                        
                        x87_r7_58 = fconvert.t(var_8_4)
                        x87_r6_47 = fconvert.t(var_30_2)
                    
                    edx_14 = esi_3
                    ecx_11 = var_64_1
                
                esi_5 = &esi_5[ecx_11]
                i = var_20_3
                var_20_3 -= 1
                var_70_1 = fconvert.s(fconvert.t(var_70_1) + fconvert.t(var_50_1))
                var_28_1 = fconvert.s(fconvert.t(var_28_1) + fconvert.t(var_84_1))
                var_1c_1 = fconvert.s(fconvert.t(var_1c_1) + fconvert.t(var_78_1))
                var_18_1 = fconvert.s(fconvert.t(var_38_1) + fconvert.t(var_18_1))
                var_c_2 = fconvert.s(fconvert.t(var_44_1) + fconvert.t(var_c_2))
            while (i != 1)

return result
