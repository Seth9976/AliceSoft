// 函数: sub_49c9c0
// 地址: 0x49c9c0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

float* eax = arg10
int32_t* edi = arg15
arg15 = fconvert.s(fconvert.t(*arg2))
float* edx = arg7
float var_14 = fconvert.s(fconvert.t(arg2[1]))
arg10 = fconvert.s(fconvert.t(*edx))
int32_t edi_1 = *edi
float* edx_1 = arg9
float var_24 = fconvert.s(fconvert.t(edx[1]))
float var_c = fconvert.s(fconvert.t(*edx_1))
float var_1c = fconvert.s(fconvert.t(edx_1[1]))
arg7 = fconvert.s(fconvert.t(*eax))
float* eax_1 = arg6
float var_20 = fconvert.s(fconvert.t(eax[1]))
float var_a8 = fconvert.s(fconvert.t(*eax_1))
float var_a4 = fconvert.s(fconvert.t(eax_1[1]))
float var_b4 = fconvert.s(fconvert.t(*arg8))
float var_b0 = fconvert.s(fconvert.t(arg8[1]))
float var_a0 = fconvert.s(fconvert.t(*arg3))
float var_ac = fconvert.s(fconvert.t(arg3[1]))
long double x87_r7_14 = fconvert.t(var_24)
long double x87_r5 = fconvert.t(var_1c)
long double x87_r3_2 = fconvert.t(var_c)
double var_6c = fconvert.d(x87_r3_2)
long double x87_r1 = fconvert.t(arg10)
double var_c4 = fconvert.d(x87_r1)
long double x87_r2_5 = fconvert.t(var_14)
long double x87_r1_6 = fconvert.t(arg15)
float var_48 = fconvert.s(x87_r1_6 - fconvert.t(var_6c))
long double x87_r2_15 = fconvert.t(var_20)
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
        float var_58_1 = fconvert.s(fconvert.t(fconvert.s(x87_r7_14 - x87_r5)) * x87_r1_22)
        float var_54_1 = fconvert.s(fconvert.t(fconvert.s(x87_r3_2 - x87_r1)) * x87_r1_22)
        float var_88_1 = fconvert.s(fconvert.t(fconvert.s(x87_r5 - x87_r2_5)) * x87_r1_22)
        float var_84_1 = fconvert.s(fconvert.t(var_48) * x87_r1_22)
        float var_7c_1 = fconvert.s(x87_r3_8 * x87_r1_22)
        float var_78_1 = fconvert.s(x87_r5_2 * x87_r1_22)
        long double x87_r4_9 = float.t(1)
        long double x87_r4_10 = fconvert.t(fconvert.s(x87_r4_9 / x87_r4_9))
        float var_4c_1 = fconvert.s(fconvert.t(fconvert.s(x87_r2_15 - x87_r5)) * x87_r4_10)
        float var_48_1 = fconvert.s(fconvert.t(var_e4) * x87_r4_10)
        float var_40_1 = fconvert.s(x87_r1_17 * x87_r4_10)
        float var_3c_1 = fconvert.s(x87_r2_24 * x87_r4_10)
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
        
        float ebx_1 = *arg5
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
        
        long double x87_r7_28 = fconvert.t(fconvert.s(float.t(arg5[2] i+ ebx_1)))
        long double x87_r6_11 = fconvert.t(fconvert.s(x87_r7_26))
        x87_r6_11 - x87_r7_28
        eax_13.w = (x87_r6_11 < x87_r7_28 ? 1 : 0) << 8
            | (is_unordered.t(x87_r6_11, x87_r7_28) ? 1 : 0) << 0xa
            | (x87_r6_11 == x87_r7_28 ? 1 : 0) << 0xe | 0x3000
        
        if ((eax_13:1.b & 0x41) == 0)
            x87_r7_28 = x87_r6_11
        
        long double x87_r7_30 = fconvert.t(var_14)
        long double x87_r6_12 = fconvert.t(var_24)
        int32_t ebx_2 = sub_70c710(fconvert.t(fconvert.s(x87_r7_28)))
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
        long double x87_r4_20 = fconvert.t(var_20)
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
        
        int32_t ebx_3 = ebx_2 - var_10_1
        int32_t eax_19 = sub_70c710(fconvert.t(fconvert.s(x87_r7_35)))
        long double x87_r7_37 = fconvert.t(var_88_1)
        long double x87_r5_18 = fconvert.t(var_58_1)
        arg7:3.b = arg14[4]
        char eax_21 = arg14[0xc]
        long double x87_r4_25 = fconvert.t(var_7c_1)
        arg10:3.b = arg14[8]
        float var_8c_1 = fconvert.s(x87_r7_37 * fconvert.t(var_b4) + x87_r5_18 * fconvert.t(var_a8)
            + x87_r4_25 * fconvert.t(var_a0))
        arg6:3.b = *arg14
        arg15:3.b = arg13[8]
        arg9:3.b = arg13[4]
        char eax_23 = arg13[0xc]
        arg8:3.b = *arg13
        int32_t i_2 = eax_19 - var_c_1
        char* esi_1 = (*(*arg4 + 8))(var_10_1, var_c_1)
        int32_t ecx_13 = ebx_3
        result = (*(*arg4 + 0x1c))() - (ecx_13 << 2)
        float* result_1 = result
        long double x87_r7_42 = fconvert.t(fconvert.s(float.t(var_c_1)))
        float var_70_1 = fconvert.s(x87_r7_42 * fconvert.t(var_54_1) + fconvert.t(fconvert.s(
            fconvert.t(fconvert.s(x87_r1 * x87_r5 - x87_r3_2 * x87_r7_14)) * x87_r1_22)))
        float var_20_1 = fconvert.s(x87_r7_42 * fconvert.t(var_84_1) + fconvert.t(fconvert.s(
            fconvert.t(fconvert.s(x87_r2_5 * x87_r3_2 - x87_r1_6 * x87_r5)) * x87_r1_22)))
        float var_1c_1 = fconvert.s(x87_r7_42 * fconvert.t(var_78_1)
            + fconvert.t(fconvert.s(x87_r1_22 * x87_r2_22)))
        float var_24_1 = fconvert.s(fconvert.t(var_48_1) * x87_r7_42 + fconvert.t(fconvert.s(
            fconvert.t(fconvert.s(x87_r2_17 * x87_r5 - x87_r2_15 * x87_r3_2)) * x87_r4_10)))
        float var_c_2 = fconvert.s(x87_r7_42 * fconvert.t(var_3c_1)
            + fconvert.t(fconvert.s(x87_r4_10 * fconvert.t(var_64))))
        long double x87_r7_46 = fconvert.t(fconvert.s(float.t(var_10_1)))
        
        if (i_2 s> 0)
            int32_t i_1 = i_2
            int32_t i
            
            do
                float var_5c_1 = fconvert.s(fconvert.t(fconvert.s(x87_r7_46 * fconvert.t(var_4c_1)))
                    + fconvert.t(var_24_1))
                float var_2c_1 = fconvert.s(fconvert.t(fconvert.s(x87_r7_46 * fconvert.t(var_40_1)))
                    + fconvert.t(var_c_2))
                long double x87_r7_58 = fconvert.t(fconvert.s(
                    fconvert.t(fconvert.s(x87_r7_46 * fconvert.t(var_88_1)))
                    + fconvert.t(var_20_1)))
                long double x87_r5_20 = fconvert.t(fconvert.s(
                    fconvert.t(fconvert.s(x87_r7_46 * fconvert.t(var_58_1)))
                    + fconvert.t(var_70_1)))
                long double x87_r4_30 = fconvert.t(fconvert.s(
                    fconvert.t(fconvert.s(x87_r7_46 * fconvert.t(var_7c_1)))
                    + fconvert.t(var_1c_1)))
                long double x87_r6_47 = x87_r4_30
                float var_10_2 = fconvert.s(x87_r7_58 * fconvert.t(var_b4)
                    + x87_r5_20 * fconvert.t(var_a8) + x87_r4_30 * fconvert.t(var_a0))
                float var_14_1 = fconvert.s(x87_r5_20 * fconvert.t(var_a4)
                    + x87_r7_58 * fconvert.t(var_b0) + x87_r6_47 * fconvert.t(var_ac))
                
                if (ecx_13 s> 0)
                    int32_t var_34_2 = ecx_13
                    
                    while (true)
                        long double x87_r5_24 = float.t(0)
                        x87_r5_24 - x87_r7_58
                        result.w = (x87_r5_24 < x87_r7_58 ? 1 : 0) << 8
                            | (is_unordered.t(x87_r5_24, x87_r7_58) ? 1 : 0) << 0xa
                            | (x87_r5_24 == x87_r7_58 ? 1 : 0) << 0xe | 0x2800
                        long double x87_r4_36 = fconvert.t(var_5c_1)
                        long double x87_r3_26 = fconvert.t(var_2c_1)
                        float var_30_2
                        float var_8_3
                        long double x87_r7_60
                        long double x87_r6_52
                        
                        if ((result:1.b & 0x41) == 0)
                            x87_r6_52 = x87_r3_26
                        label_49d502:
                            var_8_3 = fconvert.s(x87_r7_58 + fconvert.t(var_88_1))
                            var_30_2 = fconvert.s(x87_r6_52 + fconvert.t(var_7c_1))
                            var_5c_1 = fconvert.s(x87_r4_36 + fconvert.t(var_4c_1))
                            var_2c_1 = fconvert.s(x87_r5_24 + fconvert.t(var_40_1))
                            var_10_2 = fconvert.s(fconvert.t(var_10_2) + fconvert.t(var_8c_1))
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
                            label_49d4f6:
                                x87_r6_52 = x87_r4_37
                                x87_r4_36 = x87_r5_24
                                x87_r5_24 = x87_r6_48
                                goto label_49d502
                            
                            x87_r4_37 = x87_r6_47
                            x87_r4_36 - x87_r5_24
                            result.w = (x87_r4_36 < x87_r5_24 ? 1 : 0) << 8
                                | (is_unordered.t(x87_r4_36, x87_r5_24) ? 1 : 0) << 0xa
                                | (x87_r4_36 == x87_r5_24 ? 1 : 0) << 0xe | 0x1800
                            bool p_7 = unimplemented  {test ah, 0x5}
                            
                            if (not(p_7))
                                x87_r6_48 = x87_r4_36
                                goto label_49d4f6
                            
                            long double x87_r3_29 = x87_r5_24
                            x87_r5_24 = x87_r4_36
                            x87_r3_29 - x87_r6_48
                            result.w = (x87_r3_29 < x87_r6_48 ? 1 : 0) << 8
                                | (is_unordered.t(x87_r3_29, x87_r6_48) ? 1 : 0) << 0xa
                                | (x87_r3_29 == x87_r6_48 ? 1 : 0) << 0xe | 0x2000
                            
                            if ((result:1.b & 0x41) == 0)
                                goto label_49d4f6
                            
                            long double x87_r3_30 = fconvert.t(var_10_2)
                            long double x87_r2_39 = fconvert.t(var_14_1)
                            int32_t ebx_6 = sub_70c710(fconvert.t(256.0) * x87_r3_30) s>> 8
                            int32_t eax_31 = sub_70c710(fconvert.t(256.0) * x87_r2_39) s>> 8
                            
                            if (ebx_6 s< 0)
                                ebx_6 = 0
                            else if (ebx_6 s> eax_8)
                                ebx_6 = eax_8
                            
                            if (eax_31 s>= 0)
                                int32_t ecx_15 = var_94_1:4.d
                                
                                if (eax_31 s> ecx_15)
                                    eax_31 = ecx_15
                            else
                                eax_31 = 0
                            
                            x87_r7_60 = x87_r2_39
                            int32_t eax_34 = *(eax_31 * var_9c_1:4.d + var_c4:4.d + (ebx_6 << 2))
                            uint32_t edx_13
                            edx_13.b = *(zx.d(arg15:3.b)
                                + ((zx.d(eax_34.b) * zx.d(arg10:3.b)) s>> 8) + edi_1)
                            int32_t var_8_2
                            var_8_2:1.b = *(zx.d(arg9:3.b)
                                + ((zx.d(eax_34:1.b) * zx.d(arg7:3.b)) s>> 8) + edi_1)
                            int32_t eax_41
                            eax_41.b = *(zx.d(arg8:3.b)
                                + ((zx.d(eax_34:2.b) * zx.d(arg6:3.b)) s>> 8) + edi_1)
                            uint32_t ecx_27 = zx.d(var_8_2:3.b)
                            var_8_2:2.b = eax_41.b
                            int32_t ecx_30
                            ecx_30.b = *esi_1
                            result = (
                                zx.d(*(zx.d(eax_23) + ((ecx_27 * zx.d(eax_21)) s>> 8) + edi_1))
                                * arg11) s>> 8
                            char edx_17 =
                                (((zx.d(edx_13.b) - zx.d(ecx_30.b)) * result) s>> 8).b + ecx_30.b
                            ecx_30.b = esi_1[1]
                            *esi_1 = edx_17
                            char ebx_11 =
                                (((zx.d(var_8_2:1.b) - zx.d(ecx_30.b)) * result) s>> 8).b + ecx_30.b
                            ecx_30.b = esi_1[2]
                            esi_1[1] = ebx_11
                            var_8_3 = fconvert.s(x87_r7_58 + fconvert.t(var_88_1))
                            var_30_2 = fconvert.s(x87_r4_37 + fconvert.t(var_7c_1))
                            var_5c_1 = fconvert.s(x87_r5_24 + fconvert.t(var_4c_1))
                            var_2c_1 = fconvert.s(x87_r6_48 + fconvert.t(var_40_1))
                            esi_1[2] =
                                (((zx.d(var_8_2:2.b) - zx.d(ecx_30.b)) * result) s>> 8).b + ecx_30.b
                            var_10_2 = fconvert.s(x87_r3_30 + fconvert.t(var_8c_1))
                        esi_1 = &esi_1[4]
                        int32_t temp2_1 = var_34_2
                        var_34_2 -= 1
                        var_14_1 = fconvert.s(x87_r7_60 + fconvert.t(fconvert.s(
                            x87_r7_37 * fconvert.t(var_b0) + x87_r5_18 * fconvert.t(var_a4)
                            + x87_r4_25 * fconvert.t(var_ac))))
                        
                        if (temp2_1 == 1)
                            break
                        
                        x87_r7_58 = fconvert.t(var_8_3)
                        x87_r6_47 = fconvert.t(var_30_2)
                    
                    ecx_13 = ebx_3
                    result = result_1
                
                esi_1 += result
                i = i_1
                i_1 -= 1
                var_70_1 = fconvert.s(fconvert.t(var_70_1) + fconvert.t(var_54_1))
                var_20_1 = fconvert.s(fconvert.t(var_20_1) + fconvert.t(var_84_1))
                var_1c_1 = fconvert.s(fconvert.t(var_1c_1) + fconvert.t(var_78_1))
                var_24_1 = fconvert.s(fconvert.t(var_48_1) + fconvert.t(var_24_1))
                var_c_2 = fconvert.s(fconvert.t(var_3c_1) + fconvert.t(var_c_2))
            while (i != 1)

return result
