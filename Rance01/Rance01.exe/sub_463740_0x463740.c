// 函数: sub_463740
// 地址: 0x463740
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

float* eax = arg10
float* ebx = arg6
float* edi = arg7
arg7 = fconvert.s(fconvert.t(*ebx))
float* ebx_1 = arg8
float var_14 = fconvert.s(fconvert.t(ebx[1]))
int32_t esi_1 = *arg14
arg10 = fconvert.s(fconvert.t(*ebx_1))
float* ebx_2 = arg9
float var_38 = fconvert.s(fconvert.t(ebx_1[1]))
float var_3c = fconvert.s(fconvert.t(*ebx_2))
float var_40 = fconvert.s(fconvert.t(ebx_2[1]))
arg14 = fconvert.s(fconvert.t(*eax))
float var_48 = fconvert.s(fconvert.t(eax[1]))
float var_58 = fconvert.s(fconvert.t(*edi))
float var_1c = fconvert.s(fconvert.t(edi[1]))
float var_4c = fconvert.s(fconvert.t(*arg2))
float var_24 = fconvert.s(fconvert.t(arg2[1]))
float var_10 = fconvert.s(fconvert.t(*arg3))
float var_30 = fconvert.s(fconvert.t(arg3[1]))
long double x87_r7_14 = fconvert.t(var_38)
long double x87_r5 = fconvert.t(var_40)
long double x87_r3_2 = fconvert.t(var_3c)
double var_90 = fconvert.d(x87_r3_2)
long double x87_r1 = fconvert.t(arg10)
double var_d0 = fconvert.d(x87_r1)
long double x87_r2_5 = fconvert.t(var_14)
long double x87_r1_6 = fconvert.t(arg7)
float var_60 = fconvert.s(x87_r1_6 - fconvert.t(var_90))
long double x87_r2_15 = fconvert.t(var_48)
long double x87_r2_17 = fconvert.t(arg14)
float var_10c = fconvert.s(fconvert.t(var_90) - x87_r2_17)
var_90.d = fconvert.s(x87_r7_14 - fconvert.t(fconvert.d(x87_r2_15)))
var_90:4.d = fconvert.s(fconvert.t(fconvert.d(x87_r2_17)) - fconvert.t(var_d0))
float var_88 = fconvert.s(x87_r2_15 * fconvert.t(arg10) - x87_r7_14 * fconvert.t(arg14))
long double x87_r5_2 = fconvert.t(fconvert.s(fconvert.t(var_d0) - fconvert.t(fconvert.d(x87_r1_6))))
long double x87_r3_8 = fconvert.t(fconvert.s(fconvert.t(fconvert.d(x87_r2_5)) - x87_r7_14))
long double x87_r2_22 =
    fconvert.t(fconvert.s(x87_r7_14 * fconvert.t(arg7) - fconvert.t(arg10) * fconvert.t(var_14)))
long double x87_r2_24 = fconvert.t(var_90:4.d)
long double x87_r1_17 = fconvert.t(var_90.d)
long double x87_r2_26 = fconvert.t(fconvert.s(x87_r5_2 * x87_r5 + x87_r3_8 * x87_r3_2 + x87_r2_22))
long double x87_r1_20 = fconvert.t(9.9999997473787516e-05)
x87_r1_20 - x87_r2_26
eax.w = (x87_r1_20 < x87_r2_26 ? 1 : 0) << 8 | (is_unordered.t(x87_r1_20, x87_r2_26) ? 1 : 0) << 0xa
    | (x87_r1_20 == x87_r2_26 ? 1 : 0) << 0xe | 0x800

if ((eax:1.b & 0x41) != 0)
    long double x87_r0_5 =
        fconvert.t(fconvert.s(x87_r3_2 * x87_r1_17 + x87_r5 * x87_r2_24 + fconvert.t(var_88)))
    x87_r0_5 - x87_r1_20
    eax.w = (x87_r0_5 < x87_r1_20 ? 1 : 0) << 8
        | (is_unordered.t(x87_r0_5, x87_r1_20) ? 1 : 0) << 0xa
        | (x87_r0_5 == x87_r1_20 ? 1 : 0) << 0xe | 0x1000
    bool p_1 = unimplemented  {test ah, 0x5}
    
    if (p_1)
        long double x87_r1_21 = float.t(1)
        long double x87_r1_22 = fconvert.t(fconvert.s(x87_r1_21 / x87_r1_21))
        float var_c4 = fconvert.s(fconvert.t(fconvert.s(x87_r7_14 - x87_r5)) * x87_r1_22)
        float var_c0 = fconvert.s(fconvert.t(fconvert.s(x87_r3_2 - x87_r1)) * x87_r1_22)
        float var_70_1 = fconvert.s(fconvert.t(fconvert.s(x87_r5 - x87_r2_5)) * x87_r1_22)
        float var_6c_1 = fconvert.s(fconvert.t(var_60) * x87_r1_22)
        float var_7c_1 = fconvert.s(x87_r3_8 * x87_r1_22)
        float var_78_1 = fconvert.s(x87_r5_2 * x87_r1_22)
        long double x87_r4_9 = float.t(1)
        long double x87_r4_10 = fconvert.t(fconvert.s(x87_r4_9 / x87_r4_9))
        float var_a4 = fconvert.s(fconvert.t(fconvert.s(x87_r2_15 - x87_r5)) * x87_r4_10)
        float var_a0 = fconvert.s(fconvert.t(var_10c) * x87_r4_10)
        float var_64_1 = fconvert.s(x87_r1_17 * x87_r4_10)
        float var_60_1 = fconvert.s(x87_r2_24 * x87_r4_10)
        int32_t edi_1 = (*(*arg11 + 8))(0, 0)
        var_d0:4.d = edi_1
        int32_t ebx_4 = (*(*arg11 + 0x1c))()
        double var_98_1
        var_98_1:4.d = ebx_4
        int32_t eax_7 = (*(*arg11 + 0x10))() - 1
        int32_t eax_9 = (*(*arg11 + 0x14))()
        float var_100 = fconvert.s(fconvert.t(var_58) / fconvert.t(*(arg6 i+ 0xc)))
        float var_f8 = fconvert.s(fconvert.t(var_4c) / fconvert.t(*(arg8 i+ 0xc)))
        float var_d4 = fconvert.s(fconvert.t(var_10) / fconvert.t(*(arg9 + 0xc)))
        float var_e4 = fconvert.s(fconvert.t(var_1c) / fconvert.t(*(arg6 i+ 0xc)))
        float var_f4 = fconvert.s(fconvert.t(var_24) / fconvert.t(*(arg8 i+ 0xc)))
        double var_b8_1
        var_b8_1:4.d = fconvert.s(fconvert.t(var_30) / fconvert.t(*(arg9 + 0xc)))
        *(arg6 i+ 0xc)
        long double x87_r6_7 = float.t(1)
        float var_e0 = fconvert.s(x87_r6_7 / fconvert.t(*(arg8 i+ 0xc)))
        float var_f0 = fconvert.s(x87_r6_7 / fconvert.t(*(arg9 + 0xc)))
        long double x87_r7_39 = fconvert.t(arg7)
        long double x87_r6_11 = fconvert.t(arg10)
        x87_r6_11 - x87_r7_39
        int32_t eax_11
        eax_11.w = (x87_r6_11 < x87_r7_39 ? 1 : 0) << 8
            | (is_unordered.t(x87_r6_11, x87_r7_39) ? 1 : 0) << 0xa
            | (x87_r6_11 == x87_r7_39 ? 1 : 0) << 0xe | 0x3000
        long double x87_r6_12
        long double x87_r7_40
        
        if ((eax_11:1.b & 0x41) != 0)
            arg6 = fconvert.s(x87_r6_11)
            x87_r6_12 = x87_r7_39
            x87_r7_40 = x87_r6_11
        else
            x87_r6_12 = x87_r7_39
            x87_r7_40 = x87_r6_11
            arg6 = fconvert.s(x87_r6_12)
        
        long double x87_r5_13 = fconvert.t(var_3c)
        long double x87_r4_17 = fconvert.t(arg14)
        x87_r4_17 - x87_r5_13
        eax_11.w = (x87_r4_17 < x87_r5_13 ? 1 : 0) << 8
            | (is_unordered.t(x87_r4_17, x87_r5_13) ? 1 : 0) << 0xa
            | (x87_r4_17 == x87_r5_13 ? 1 : 0) << 0xe | 0x2000
        long double x87_r4_18
        long double x87_r5_14
        
        if ((eax_11:1.b & 0x41) != 0)
            arg8 = fconvert.s(x87_r4_17)
            x87_r4_18 = x87_r5_13
            x87_r5_14 = x87_r4_17
        else
            x87_r4_18 = x87_r5_13
            x87_r5_14 = x87_r4_17
            arg8 = fconvert.s(x87_r4_18)
        
        long double x87_r3_13 = fconvert.t(arg6)
        long double x87_r2_33 = fconvert.t(arg8)
        x87_r2_33 - x87_r3_13
        eax_11.w = (x87_r2_33 < x87_r3_13 ? 1 : 0) << 8
            | (is_unordered.t(x87_r2_33, x87_r3_13) ? 1 : 0) << 0xa
            | (x87_r2_33 == x87_r3_13 ? 1 : 0) << 0xe | 0x1000
        
        if ((eax_11:1.b & 0x41) != 0)
            x87_r4_18 = x87_r2_33
        else
            x87_r3_13 = x87_r2_33
        
        int32_t ecx_5 = *arg5
        long double x87_r3_15 = fconvert.t(fconvert.s(float.t(ecx_5)))
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
        
        x87_r6_12 - x87_r7_40
        int32_t var_2c = sub_70c710(fconvert.t(fconvert.s(x87_r3_15)))
        int32_t eax_13
        eax_13.w = (x87_r6_12 < x87_r7_40 ? 1 : 0) << 8
            | (is_unordered.t(x87_r6_12, x87_r7_40) ? 1 : 0) << 0xa
            | (x87_r6_12 == x87_r7_40 ? 1 : 0) << 0xe | 0x2000
        
        if ((eax_13:1.b & 0x41) != 0)
            x87_r5_14 = x87_r6_12
        
        long double x87_r7_41 = x87_r5_14
        x87_r4_18 - x87_r7_41
        eax_13.w = (x87_r4_18 < x87_r7_41 ? 1 : 0) << 8
            | (is_unordered.t(x87_r4_18, x87_r7_41) ? 1 : 0) << 0xa
            | (x87_r4_18 == x87_r7_41 ? 1 : 0) << 0xe | 0x3000
        
        if ((eax_13:1.b & 0x41) != 0)
            x87_r7_41 = x87_r4_18
        
        long double x87_r7_42 = fconvert.t(fconvert.s(x87_r7_40))
        long double x87_r6_14 = fconvert.t(fconvert.s(x87_r7_41))
        x87_r6_14 - x87_r7_42
        eax_13.w = (x87_r6_14 < x87_r7_42 ? 1 : 0) << 8
            | (is_unordered.t(x87_r6_14, x87_r7_42) ? 1 : 0) << 0xa
            | (x87_r6_14 == x87_r7_42 ? 1 : 0) << 0xe | 0x3000
        bool p_3 = unimplemented  {test ah, 0x5}
        
        if (not(p_3))
            x87_r7_42 = x87_r6_14
        
        long double x87_r7_44 = fconvert.t(fconvert.s(float.t(arg5[2] + ecx_5)))
        long double x87_r6_15 = fconvert.t(fconvert.s(x87_r7_42))
        x87_r6_15 - x87_r7_44
        float eax_15
        eax_15.w = (x87_r6_15 < x87_r7_44 ? 1 : 0) << 8
            | (is_unordered.t(x87_r6_15, x87_r7_44) ? 1 : 0) << 0xa
            | (x87_r6_15 == x87_r7_44 ? 1 : 0) << 0xe | 0x3000
        
        if ((eax_15:1.b & 0x41) == 0)
            x87_r7_44 = x87_r6_15
        
        long double x87_r7_46 = fconvert.t(var_14)
        long double x87_r6_16 = fconvert.t(var_38)
        arg10 = sub_70c710(fconvert.t(fconvert.s(x87_r7_44)))
        x87_r6_16 - x87_r7_46
        int32_t eax_16
        eax_16.w = (x87_r6_16 < x87_r7_46 ? 1 : 0) << 8
            | (is_unordered.t(x87_r6_16, x87_r7_46) ? 1 : 0) << 0xa
            | (x87_r6_16 == x87_r7_46 ? 1 : 0) << 0xe | 0x3000
        long double x87_r6_17
        long double x87_r7_47
        
        if ((eax_16:1.b & 0x41) != 0)
            arg6 = fconvert.s(x87_r6_16)
            x87_r6_17 = x87_r7_46
            x87_r7_47 = x87_r6_16
        else
            x87_r6_17 = x87_r7_46
            x87_r7_47 = x87_r6_16
            arg6 = fconvert.s(x87_r6_17)
        
        long double x87_r5_16 = fconvert.t(var_40)
        long double x87_r4_20 = fconvert.t(var_48)
        x87_r4_20 - x87_r5_16
        eax_16.w = (x87_r4_20 < x87_r5_16 ? 1 : 0) << 8
            | (is_unordered.t(x87_r4_20, x87_r5_16) ? 1 : 0) << 0xa
            | (x87_r4_20 == x87_r5_16 ? 1 : 0) << 0xe | 0x2000
        long double x87_r4_21
        long double x87_r5_17
        
        if ((eax_16:1.b & 0x41) != 0)
            arg8 = fconvert.s(x87_r4_20)
            x87_r4_21 = x87_r5_16
            x87_r5_17 = x87_r4_20
        else
            x87_r4_21 = x87_r5_16
            x87_r5_17 = x87_r4_20
            arg8 = fconvert.s(x87_r4_21)
        
        long double x87_r3_17 = fconvert.t(arg6)
        long double x87_r2_35 = fconvert.t(arg8)
        x87_r2_35 - x87_r3_17
        eax_16.w = (x87_r2_35 < x87_r3_17 ? 1 : 0) << 8
            | (is_unordered.t(x87_r2_35, x87_r3_17) ? 1 : 0) << 0xa
            | (x87_r2_35 == x87_r3_17 ? 1 : 0) << 0xe | 0x1000
        
        if ((eax_16:1.b & 0x41) != 0)
            x87_r4_21 = x87_r2_35
        else
            x87_r3_17 = x87_r2_35
        
        int32_t edx_6 = arg5[1]
        long double x87_r3_19 = fconvert.t(fconvert.s(float.t(edx_6)))
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
        
        x87_r6_17 - x87_r7_47
        int32_t var_28_1 = sub_70c710(fconvert.t(fconvert.s(x87_r3_19)))
        int32_t eax_17
        eax_17.w = (x87_r6_17 < x87_r7_47 ? 1 : 0) << 8
            | (is_unordered.t(x87_r6_17, x87_r7_47) ? 1 : 0) << 0xa
            | (x87_r6_17 == x87_r7_47 ? 1 : 0) << 0xe | 0x2000
        
        if ((eax_17:1.b & 0x41) != 0)
            x87_r5_17 = x87_r6_17
        
        long double x87_r7_48 = x87_r5_17
        x87_r4_21 - x87_r7_48
        eax_17.w = (x87_r4_21 < x87_r7_48 ? 1 : 0) << 8
            | (is_unordered.t(x87_r4_21, x87_r7_48) ? 1 : 0) << 0xa
            | (x87_r4_21 == x87_r7_48 ? 1 : 0) << 0xe | 0x3000
        
        if ((eax_17:1.b & 0x41) != 0)
            x87_r7_48 = x87_r4_21
        
        long double x87_r7_49 = fconvert.t(fconvert.s(x87_r7_47))
        long double x87_r6_19 = fconvert.t(fconvert.s(x87_r7_48))
        x87_r6_19 - x87_r7_49
        eax_17.w = (x87_r6_19 < x87_r7_49 ? 1 : 0) << 8
            | (is_unordered.t(x87_r6_19, x87_r7_49) ? 1 : 0) << 0xa
            | (x87_r6_19 == x87_r7_49 ? 1 : 0) << 0xe | 0x3000
        bool p_5 = unimplemented  {test ah, 0x5}
        
        if (not(p_5))
            x87_r7_49 = x87_r6_19
        
        long double x87_r7_51 = fconvert.t(fconvert.s(float.t(arg5[3] + edx_6)))
        long double x87_r6_20 = fconvert.t(fconvert.s(x87_r7_49))
        x87_r6_20 - x87_r7_51
        int32_t* eax_18
        eax_18.w = (x87_r6_20 < x87_r7_51 ? 1 : 0) << 8
            | (is_unordered.t(x87_r6_20, x87_r7_51) ? 1 : 0) << 0xa
            | (x87_r6_20 == x87_r7_51 ? 1 : 0) << 0xe | 0x3000
        
        if ((eax_18:1.b & 0x41) == 0)
            x87_r7_51 = x87_r6_20
        
        int32_t j_3 = arg10 i- var_2c
        int32_t i_4 = sub_70c710(fconvert.t(fconvert.s(x87_r7_51))) - var_28_1
        arg6:3.b = arg13[8]
        arg9:3.b = arg13[4]
        char eax_22 = arg13[0xc]
        arg7:3.b = *arg13
        arg8:3.b = arg12[8]
        arg10:3.b = arg12[4]
        char eax_24 = arg12[0xc]
        arg14:3.b = *arg12
        int32_t i_3 = (*(*arg4 + 8))(var_2c, var_28_1)
        int32_t j_2 = j_3
        int32_t ecx_18 = (*(*arg4 + 0x1c))() - (j_2 << 2)
        long double x87_r7_54 = fconvert.t(fconvert.s(float.t(var_28_1)))
        int32_t var_88_1 = ecx_18
        float var_48_1 = fconvert.s(x87_r7_54 * fconvert.t(var_c0) + fconvert.t(fconvert.s(
            fconvert.t(fconvert.s(x87_r1 * x87_r5 - x87_r3_2 * x87_r7_14)) * x87_r1_22)))
        float var_40_1 = fconvert.s(x87_r7_54 * fconvert.t(var_6c_1) + fconvert.t(fconvert.s(
            fconvert.t(fconvert.s(x87_r2_5 * x87_r3_2 - x87_r1_6 * x87_r5)) * x87_r1_22)))
        float var_38_1 = fconvert.s(x87_r7_54 * fconvert.t(var_78_1)
            + fconvert.t(fconvert.s(x87_r1_22 * x87_r2_22)))
        float var_3c_1 = fconvert.s(fconvert.t(var_a0) * x87_r7_54 + fconvert.t(fconvert.s(
            fconvert.t(fconvert.s(x87_r2_17 * x87_r5 - x87_r2_15 * x87_r3_2)) * x87_r4_10)))
        float var_28_2 = fconvert.s(x87_r7_54 * fconvert.t(var_60_1)
            + fconvert.t(fconvert.s(x87_r4_10 * fconvert.t(var_88))))
        long double x87_r7_58 = fconvert.t(fconvert.s(float.t(var_2c)))
        long double x87_r5_19 = fconvert.t(var_c4)
        long double x87_r6_35 = x87_r5_19
        long double x87_r4_24 = fconvert.t(var_70_1)
        long double x87_r5_23 = x87_r4_24
        int32_t i_2 = i_4
        long double x87_r3_22 = fconvert.t(var_7c_1)
        long double x87_r7_60 = x87_r3_22
        
        if (i_2 s> 0)
            long double x87_r4_30 = float.t(0)
            int32_t i_1 = i_2
            int32_t i
            
            do
                float var_14_1 =
                    fconvert.s(fconvert.t(fconvert.s(x87_r7_58 * x87_r5_19)) + fconvert.t(var_48_1))
                float var_10_1 =
                    fconvert.s(fconvert.t(fconvert.s(x87_r7_58 * x87_r4_24)) + fconvert.t(var_40_1))
                float var_1c_1 =
                    fconvert.s(fconvert.t(fconvert.s(x87_r7_58 * x87_r3_22)) + fconvert.t(var_38_1))
                float var_24_1 = fconvert.s(fconvert.t(fconvert.s(x87_r7_58 * fconvert.t(var_a4)))
                    + fconvert.t(var_3c_1))
                float var_2c_1 = fconvert.s(fconvert.t(fconvert.s(x87_r7_58 * fconvert.t(var_64_1)))
                    + fconvert.t(var_28_2))
                
                if (j_2 s> 0)
                    int32_t j_1 = j_2
                    int32_t j
                    
                    do
                        long double x87_r3_37 = fconvert.t(var_10_1)
                        x87_r3_37 - x87_r4_30
                        i_2.w = (x87_r3_37 < x87_r4_30 ? 1 : 0) << 8
                            | (is_unordered.t(x87_r3_37, x87_r4_30) ? 1 : 0) << 0xa
                            | (x87_r3_37 == x87_r4_30 ? 1 : 0) << 0xe | 0x1800
                        long double x87_r2_38 = fconvert.t(var_1c_1)
                        long double x87_r1_35 = fconvert.t(var_24_1)
                        bool p_6 = unimplemented  {test ah, 0x5}
                        long double x87_r4_42
                        long double x87_r6_38
                        long double x87_r7_63
                        
                        if (not(p_6))
                        label_464731:
                            x87_r5_23 = x87_r1_35
                        label_46473a:
                            i_3 += 4
                            var_14_1 = fconvert.s(fconvert.t(var_14_1) + x87_r6_35)
                            var_10_1 = fconvert.s(x87_r3_37 + x87_r5_23)
                            var_1c_1 = fconvert.s(x87_r2_38 + x87_r7_60)
                            var_24_1 = fconvert.s(x87_r4_30 + fconvert.t(var_a4))
                            var_2c_1 = fconvert.s(fconvert.t(var_2c_1) + fconvert.t(var_64_1))
                            x87_r7_63 = x87_r6_35
                            x87_r4_42 = float.t(0)
                            x87_r6_38 = x87_r7_60
                        else
                            x87_r2_38 - x87_r4_30
                            i_2.w = (x87_r2_38 < x87_r4_30 ? 1 : 0) << 8
                                | (is_unordered.t(x87_r2_38, x87_r4_30) ? 1 : 0) << 0xa
                                | (x87_r2_38 == x87_r4_30 ? 1 : 0) << 0xe | 0x800
                            bool p_7 = unimplemented  {test ah, 0x5}
                            
                            if (not(p_7))
                                x87_r5_23 = x87_r2_38
                                x87_r2_38 = x87_r4_30
                                x87_r4_30 = x87_r1_35
                                goto label_46473a
                            
                            x87_r1_35 - x87_r4_30
                            i_2.w = (x87_r1_35 < x87_r4_30 ? 1 : 0) << 8
                                | (is_unordered.t(x87_r1_35, x87_r4_30) ? 1 : 0) << 0xa
                                | (x87_r1_35 == x87_r4_30 ? 1 : 0) << 0xe | 0x800
                            bool p_8 = unimplemented  {test ah, 0x5}
                            
                            if (not(p_8))
                                goto label_464731
                            
                            long double x87_r1_37 = x87_r4_30
                            x87_r4_30 = x87_r1_35
                            long double temp3_1 = fconvert.t(var_2c_1)
                            x87_r1_37 - temp3_1
                            i_2.w = (x87_r1_37 < temp3_1 ? 1 : 0) << 8
                                | (is_unordered.t(x87_r1_37, temp3_1) ? 1 : 0) << 0xa
                                | (x87_r1_37 == temp3_1 ? 1 : 0) << 0xe | 0x1000
                            
                            if ((i_2:1.b & 0x41) == 0)
                                goto label_46473a
                            
                            long double x87_r3_38 = fconvert.t(var_14_1)
                            long double x87_r2_44 = float.t(1)
                            long double x87_r2_49 = fconvert.t(fconvert.s(x87_r2_44 / x87_r2_44))
                            int32_t eax_31 = sub_70c710(fconvert.t(fconvert.s((
                                x87_r5_23 * fconvert.t(var_f8) + x87_r3_38 * fconvert.t(var_100)
                                + x87_r3_37 * fconvert.t(var_d4)) * x87_r2_49)) * fconvert.t(256.0))
                            int32_t eax_32 = sub_70c710(fconvert.t(fconvert.s(x87_r2_49 * (
                                x87_r5_23 * fconvert.t(var_f4) + x87_r3_38 * fconvert.t(var_e4)
                                + x87_r3_37 * fconvert.t(var_b8_1:4.d)))) * fconvert.t(256.0))
                            uint32_t ecx_20 = zx.d(eax_31.b)
                            uint32_t ecx_22 = zx.d(eax_32.b)
                            int32_t edx_11 = eax_31 s>> 8
                            int32_t eax_33 = eax_32 s>> 8
                            int32_t var_c_1 = edx_11 + 1
                            int32_t var_8_2 = edx_11
                            int32_t var_4_1 = eax_33
                            int32_t ecx_24 = eax_33 + 1
                            
                            if (edx_11 s>= 0)
                                if (edx_11 s> eax_7)
                                    var_8_2 = eax_7
                                
                                eax_33 = var_4_1
                            else
                                var_8_2 = 0
                            
                            if (eax_33 s< 0)
                                eax_33 = 0
                                var_4_1 = 0
                            else if (eax_33 s> eax_9 - 1)
                                eax_33 = eax_9 - 1
                                var_4_1 = eax_9 - 1
                            
                            if (var_c_1 s>= 0)
                                if (var_c_1 s> eax_7)
                                    var_c_1 = eax_7
                                
                                eax_33 = var_4_1
                            else
                                var_c_1 = 0
                            
                            if (ecx_24 s< 0)
                                ecx_24 = 0
                            else if (ecx_24 s> eax_9 - 1)
                                ecx_24 = eax_9 - 1
                            
                            void* eax_36 = eax_33 * ebx_4
                            int32_t edx_17 = *(eax_36 + (var_8_2 << 2) + edi_1)
                            int32_t edx_20 = var_c_1 * 4
                            int32_t ecx_27 = *(ecx_24 * ebx_4 + edx_20 + edi_1)
                            uint32_t edi_2 = zx.d(arg9:3.b)
                            uint32_t eax_39 = zx.d(arg6:3.b)
                            uint32_t ecx_28 = zx.d(arg8:3.b)
                            int32_t var_20_1
                            var_20_1.b = *(((zx.d(edx_17.b) * eax_39) s>> 8) + ecx_28 + esi_1)
                            uint32_t edx_26 = zx.d(arg10:3.b)
                            uint32_t ebx_9 = zx.d(arg14:3.b)
                            var_20_1:1.b = *(((zx.d(edx_17:1.b) * edi_2) s>> 8) + edx_26 + esi_1)
                            uint32_t edx_28 = zx.d(arg7:3.b)
                            uint32_t ebx_14 = zx.d(eax_24)
                            var_20_1:2.b = *(((zx.d(var_20_1:2.b) * edx_28) s>> 8) + ebx_9 + esi_1)
                            uint32_t edx_30 = zx.d(eax_22)
                            var_20_1:3.b = *(((zx.d(var_20_1:3.b) * edx_30) s>> 8) + ebx_14 + esi_1)
                            int32_t var_c_2
                            var_c_2.b = *(((zx.d((*(eax_36 + edx_20 + edi_1)).b) * eax_39) s>> 8)
                                + ecx_28 + esi_1)
                            var_c_2:1.b = *(((zx.d(var_c_2:1.b) * edi_2) s>> 8) + edx_26 + esi_1)
                            var_c_2:2.b = *(((zx.d(var_c_2:2.b) * edx_28) s>> 8) + ebx_9 + esi_1)
                            var_c_2:3.b = *(((zx.d(var_c_2:3.b) * edx_30) s>> 8) + ebx_14 + esi_1)
                            int32_t var_8_3
                            var_8_3.b = *(((zx.d(ecx_27.b) * eax_39) s>> 8) + ecx_28 + esi_1)
                            int32_t ebx_20 = zx.d(var_8_3:3.b) * edx_30
                            var_8_3:1.b = *(((zx.d(var_8_3:1.b) * edi_2) s>> 8) + edx_26 + esi_1)
                            var_8_3:2.b = *(((zx.d(var_8_3:2.b) * edx_28) s>> 8) + ebx_9 + esi_1)
                            int32_t ebx_22
                            ebx_22.b = *((ebx_20 s>> 8) + ebx_14 + esi_1)
                            var_8_3:3.b = ebx_22.b
                            int32_t var_4_2
                            var_4_2.b = *(((zx.d(ecx_27.b) * eax_39) s>> 8) + ecx_28 + esi_1)
                            int32_t ecx_36 = ((zx.d(var_4_2:2.b) * edx_28) s>> 8) + ebx_9
                            var_4_2:1.b = *(((zx.d(ecx_27:1.b) * edi_2) s>> 8) + edx_26 + esi_1)
                            char edx_68 = *(((zx.d(var_4_2:3.b) * edx_30) s>> 8) + ebx_14 + esi_1)
                            uint32_t ecx_41 = zx.d(var_20_1.b)
                            var_4_2:2.b = *(ecx_36 + esi_1)
                            uint32_t edi_3 = zx.d(var_20_1:2.b)
                            var_4_2:3.b = edx_68
                            uint32_t edx_69 = zx.d(var_20_1:1.b)
                            int32_t eax_47 = (((zx.d(var_c_2.b) - ecx_41) * ecx_20) s>> 8) + ecx_41
                            int32_t ecx_46 =
                                (((zx.d(var_c_2:1.b) - edx_69) * ecx_20) s>> 8) + edx_69
                            int32_t edx_74 = (((zx.d(var_c_2:2.b) - edi_3) * ecx_20) s>> 8) + edi_3
                            uint32_t edx_75 = zx.d(var_20_1:3.b)
                            uint32_t ebx_28 = zx.d(var_8_3:1.b)
                            uint32_t ebx_29 = zx.d(var_8_3:2.b)
                            uint32_t ebx_30 = zx.d(var_8_3.b)
                            int32_t edi_8 = (((zx.d(var_c_2:3.b) - edx_75) * ecx_20) s>> 8) + edx_75
                            uint32_t edx_76 = zx.d(var_8_3:3.b)
                            long double x87_r3_49 = fconvert.t(var_c4)
                            int32_t ebx_41 = (((((((zx.d(var_4_2:3.b) - edx_76) * ecx_20) s>> 8)
                                - edi_8 + edx_76) * ecx_22) s>> 8) + edi_8) << 0x18 | (((((((
                                zx.d(var_4_2:2.b) - ebx_29) * ecx_20) s>> 8) - edx_74 + ebx_29)
                                * ecx_22) s>> 8) + edx_74) << 0x10
                            var_14_1 = fconvert.s(x87_r3_38 + x87_r3_49)
                            long double x87_r3_51 = fconvert.t(var_70_1)
                            long double x87_r5_24 = x87_r5_23 + x87_r3_51
                            x87_r5_23 = x87_r3_51
                            var_10_1 = fconvert.s(x87_r5_24)
                            long double x87_r3_53 = fconvert.t(var_7c_1)
                            x87_r6_38 = x87_r3_53
                            var_1c_1 = fconvert.s(x87_r3_37 + x87_r3_53)
                            x87_r7_63 = x87_r3_49
                            var_24_1 = fconvert.s(x87_r2_38 + fconvert.t(var_a4))
                            var_2c_1 = fconvert.s(fconvert.t(var_2c_1) + fconvert.t(var_64_1))
                            x87_r4_42 = float.t(0)
                            int32_t ebx_43 = ebx_41 | (((((((zx.d(var_4_2:1.b) - ebx_28) * ecx_20)
                                s>> 8) - ecx_46 + ebx_28) * ecx_22) s>> 8) + ecx_46) << 8 | (((((((
                                zx.d(var_4_2.b) - ebx_30) * ecx_20) s>> 8) - eax_47 + ebx_30) * ecx_22)
                                s>> 8) + eax_47)
                            edi_1 = var_d0:4.d
                            *i_3 = ebx_43
                            ebx_4 = var_98_1:4.d
                            i_2 = i_3 + 4
                            i_3 = i_2
                        
                        j = j_1
                        j_1 -= 1
                        x87_r7_60 = x87_r6_38
                        x87_r4_30 = x87_r4_42
                        x87_r6_35 = x87_r7_63
                    while (j != 1)
                    ecx_18 = var_88_1
                    j_2 = j_3
                
                i_3 += ecx_18
                i = i_1
                i_1 -= 1
                var_48_1 = fconvert.s(fconvert.t(var_48_1) + fconvert.t(var_c0))
                var_40_1 = fconvert.s(fconvert.t(var_40_1) + fconvert.t(var_6c_1))
                var_38_1 = fconvert.s(fconvert.t(var_38_1) + fconvert.t(var_78_1))
                var_3c_1 = fconvert.s(fconvert.t(var_a0) + fconvert.t(var_3c_1))
                var_28_2 = fconvert.s(fconvert.t(var_60_1) + fconvert.t(var_28_2))
            while (i != 1)
        
        return i_2

return eax
