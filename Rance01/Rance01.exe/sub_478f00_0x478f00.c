// 函数: sub_478f00
// 地址: 0x478f00
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

float* eax = arg10
float* edx = arg6
float var_8 = fconvert.s(fconvert.t(*edx))
float* edx_1 = arg8
float var_4 = fconvert.s(fconvert.t(edx[1]))
arg10 = fconvert.s(fconvert.t(*edx_1))
float var_10 = fconvert.s(fconvert.t(edx_1[1]))
float var_14 = fconvert.s(fconvert.t(*arg2))
float var_18 = fconvert.s(fconvert.t(arg2[1]))
float var_c = fconvert.s(fconvert.t(*eax))
float* eax_1 = arg7
float var_1c = fconvert.s(fconvert.t(eax[1]))
float var_20 = fconvert.s(fconvert.t(*eax_1))
float* eax_2 = arg9
float var_48 = fconvert.s(fconvert.t(eax_1[1]))
float var_64 = fconvert.s(fconvert.t(*eax_2))
float var_50 = fconvert.s(fconvert.t(eax_2[1]))
float var_68 = fconvert.s(fconvert.t(*arg3))
float var_4c = fconvert.s(fconvert.t(arg3[1]))
long double x87_r7_14 = fconvert.t(var_10)
long double x87_r5 = fconvert.t(var_18)
long double x87_r3_2 = fconvert.t(var_14)
double var_60 = fconvert.d(x87_r3_2)
long double x87_r1 = fconvert.t(arg10)
double var_98 = fconvert.d(x87_r1)
long double x87_r2_5 = fconvert.t(var_4)
long double x87_r1_6 = fconvert.t(var_8)
float var_28 = fconvert.s(x87_r1_6 - fconvert.t(var_60))
long double x87_r2_15 = fconvert.t(var_1c)
long double x87_r2_17 = fconvert.t(var_c)
float var_c8 = fconvert.s(fconvert.t(var_60) - x87_r2_17)
var_60.d = fconvert.s(x87_r7_14 - fconvert.t(fconvert.d(x87_r2_15)))
var_60:4.d = fconvert.s(fconvert.t(fconvert.d(x87_r2_17)) - fconvert.t(var_98))
float var_58 = fconvert.s(x87_r2_15 * fconvert.t(arg10) - x87_r7_14 * fconvert.t(var_c))
long double x87_r5_2 = fconvert.t(fconvert.s(fconvert.t(var_98) - fconvert.t(fconvert.d(x87_r1_6))))
long double x87_r3_8 = fconvert.t(fconvert.s(fconvert.t(fconvert.d(x87_r2_5)) - x87_r7_14))
long double x87_r2_22 =
    fconvert.t(fconvert.s(x87_r7_14 * fconvert.t(var_8) - fconvert.t(arg10) * fconvert.t(var_4)))
long double x87_r2_24 = fconvert.t(var_60:4.d)
long double x87_r1_17 = fconvert.t(var_60.d)
long double x87_r2_26 = fconvert.t(fconvert.s(x87_r5_2 * x87_r5 + x87_r3_8 * x87_r3_2 + x87_r2_22))
long double x87_r1_20 = fconvert.t(9.9999997473787516e-05)
x87_r1_20 - x87_r2_26
eax_2.w = (x87_r1_20 < x87_r2_26 ? 1 : 0) << 8
    | (is_unordered.t(x87_r1_20, x87_r2_26) ? 1 : 0) << 0xa
    | (x87_r1_20 == x87_r2_26 ? 1 : 0) << 0xe | 0x800

if ((eax_2:1.b & 0x41) != 0)
    long double x87_r0_5 =
        fconvert.t(fconvert.s(x87_r3_2 * x87_r1_17 + x87_r5 * x87_r2_24 + fconvert.t(var_58)))
    x87_r0_5 - x87_r1_20
    eax_2.w = (x87_r0_5 < x87_r1_20 ? 1 : 0) << 8
        | (is_unordered.t(x87_r0_5, x87_r1_20) ? 1 : 0) << 0xa
        | (x87_r0_5 == x87_r1_20 ? 1 : 0) << 0xe | 0x1000
    bool p_1 = unimplemented  {test ah, 0x5}
    
    if (p_1)
        long double x87_r1_21 = float.t(1)
        long double x87_r1_22 = fconvert.t(fconvert.s(x87_r1_21 / x87_r1_21))
        float var_90 = fconvert.s(fconvert.t(fconvert.s(x87_r7_14 - x87_r5)) * x87_r1_22)
        float var_8c = fconvert.s(fconvert.t(fconvert.s(x87_r3_2 - x87_r1)) * x87_r1_22)
        float var_44_1 = fconvert.s(fconvert.t(fconvert.s(x87_r5 - x87_r2_5)) * x87_r1_22)
        float var_40_1 = fconvert.s(fconvert.t(var_28) * x87_r1_22)
        float var_38_1 = fconvert.s(x87_r3_8 * x87_r1_22)
        float var_34_1 = fconvert.s(x87_r5_2 * x87_r1_22)
        long double x87_r4_9 = float.t(1)
        long double x87_r4_10 = fconvert.t(fconvert.s(x87_r4_9 / x87_r4_9))
        float var_84 = fconvert.s(fconvert.t(fconvert.s(x87_r2_15 - x87_r5)) * x87_r4_10)
        float var_80 = fconvert.s(fconvert.t(var_c8) * x87_r4_10)
        float var_2c_1 = fconvert.s(x87_r1_17 * x87_r4_10)
        float var_28_1 = fconvert.s(x87_r2_24 * x87_r4_10)
        var_98:4.d = (*(*arg12 + 8))(0, 0)
        double var_78_1
        var_78_1:4.d = (*(*arg12 + 0x1c))()
        int32_t eax_9 = (*(*arg12 + 0x10))() - 1
        double var_70_1
        var_70_1:4.d = (*(*arg12 + 0x14))() - 1
        float var_b0 = fconvert.s(fconvert.t(var_20) / fconvert.t(*(arg6 i+ 0xc)))
        float var_9c = fconvert.s(fconvert.t(var_64) / fconvert.t(*(arg8 i+ 0xc)))
        float var_a0 = fconvert.s(fconvert.t(var_68) / fconvert.t(arg2[3]))
        float var_ac = fconvert.s(fconvert.t(var_48) / fconvert.t(*(arg6 i+ 0xc)))
        float var_a4 = fconvert.s(fconvert.t(var_50) / fconvert.t(*(arg8 i+ 0xc)))
        float var_b4 = fconvert.s(fconvert.t(var_4c) / fconvert.t(arg2[3]))
        *(arg6 i+ 0xc)
        long double x87_r6_7 = float.t(1)
        float var_b8 = fconvert.s(x87_r6_7 / fconvert.t(*(arg8 i+ 0xc)))
        float var_a8 = fconvert.s(x87_r6_7 / fconvert.t(arg2[3]))
        long double x87_r7_39 = fconvert.t(var_8)
        long double x87_r6_11 = fconvert.t(arg10)
        x87_r6_11 - x87_r7_39
        float eax_13
        eax_13.w = (x87_r6_11 < x87_r7_39 ? 1 : 0) << 8
            | (is_unordered.t(x87_r6_11, x87_r7_39) ? 1 : 0) << 0xa
            | (x87_r6_11 == x87_r7_39 ? 1 : 0) << 0xe | 0x3000
        long double x87_r6_12
        long double x87_r7_40
        
        if ((eax_13:1.b & 0x41) != 0)
            arg6 = fconvert.s(x87_r6_11)
            x87_r6_12 = x87_r7_39
            x87_r7_40 = x87_r6_11
        else
            x87_r6_12 = x87_r7_39
            x87_r7_40 = x87_r6_11
            arg6 = fconvert.s(x87_r6_12)
        
        long double x87_r5_13 = fconvert.t(var_14)
        long double x87_r4_17 = fconvert.t(var_c)
        x87_r4_17 - x87_r5_13
        eax_13.w = (x87_r4_17 < x87_r5_13 ? 1 : 0) << 8
            | (is_unordered.t(x87_r4_17, x87_r5_13) ? 1 : 0) << 0xa
            | (x87_r4_17 == x87_r5_13 ? 1 : 0) << 0xe | 0x2000
        long double x87_r4_18
        long double x87_r5_14
        
        if ((eax_13:1.b & 0x41) != 0)
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
        eax_13.w = (x87_r2_33 < x87_r3_13 ? 1 : 0) << 8
            | (is_unordered.t(x87_r2_33, x87_r3_13) ? 1 : 0) << 0xa
            | (x87_r2_33 == x87_r3_13 ? 1 : 0) << 0xe | 0x1000
        
        if ((eax_13:1.b & 0x41) != 0)
            x87_r4_18 = x87_r2_33
        else
            x87_r3_13 = x87_r2_33
        
        float edi_1 = *arg5
        long double x87_r3_15 = fconvert.t(fconvert.s(float.t(edi_1)))
        long double x87_r2_34 = fconvert.t(fconvert.s(x87_r3_13))
        x87_r2_34 - x87_r3_15
        eax_13.w = (x87_r2_34 < x87_r3_15 ? 1 : 0) << 8
            | (is_unordered.t(x87_r2_34, x87_r3_15) ? 1 : 0) << 0xa
            | (x87_r2_34 == x87_r3_15 ? 1 : 0) << 0xe | 0x1000
        bool p_2 = unimplemented  {test ah, 0x5}
        
        if (p_2)
            x87_r4_18 = x87_r2_34
        else
            x87_r3_15 = x87_r2_34
        
        x87_r6_12 - x87_r7_40
        arg6 = sub_70c710(fconvert.t(fconvert.s(x87_r3_15)))
        int32_t eax_14
        eax_14.w = (x87_r6_12 < x87_r7_40 ? 1 : 0) << 8
            | (is_unordered.t(x87_r6_12, x87_r7_40) ? 1 : 0) << 0xa
            | (x87_r6_12 == x87_r7_40 ? 1 : 0) << 0xe | 0x2000
        
        if ((eax_14:1.b & 0x41) != 0)
            x87_r5_14 = x87_r6_12
        
        long double x87_r7_41 = x87_r5_14
        x87_r4_18 - x87_r7_41
        eax_14.w = (x87_r4_18 < x87_r7_41 ? 1 : 0) << 8
            | (is_unordered.t(x87_r4_18, x87_r7_41) ? 1 : 0) << 0xa
            | (x87_r4_18 == x87_r7_41 ? 1 : 0) << 0xe | 0x3000
        
        if ((eax_14:1.b & 0x41) != 0)
            x87_r7_41 = x87_r4_18
        
        long double x87_r7_42 = fconvert.t(fconvert.s(x87_r7_40))
        long double x87_r6_14 = fconvert.t(fconvert.s(x87_r7_41))
        x87_r6_14 - x87_r7_42
        eax_14.w = (x87_r6_14 < x87_r7_42 ? 1 : 0) << 8
            | (is_unordered.t(x87_r6_14, x87_r7_42) ? 1 : 0) << 0xa
            | (x87_r6_14 == x87_r7_42 ? 1 : 0) << 0xe | 0x3000
        bool p_3 = unimplemented  {test ah, 0x5}
        
        if (not(p_3))
            x87_r7_42 = x87_r6_14
        
        long double x87_r7_44 = fconvert.t(fconvert.s(float.t(arg5[2] i+ edi_1)))
        long double x87_r6_15 = fconvert.t(fconvert.s(x87_r7_42))
        x87_r6_15 - x87_r7_44
        float eax_16
        eax_16.w = (x87_r6_15 < x87_r7_44 ? 1 : 0) << 8
            | (is_unordered.t(x87_r6_15, x87_r7_44) ? 1 : 0) << 0xa
            | (x87_r6_15 == x87_r7_44 ? 1 : 0) << 0xe | 0x3000
        
        if ((eax_16:1.b & 0x41) == 0)
            x87_r7_44 = x87_r6_15
        
        long double x87_r7_46 = fconvert.t(var_4)
        long double x87_r6_16 = fconvert.t(var_10)
        int32_t edi_2 = sub_70c710(fconvert.t(fconvert.s(x87_r7_44)))
        x87_r6_16 - x87_r7_46
        int32_t eax_17
        eax_17.w = (x87_r6_16 < x87_r7_46 ? 1 : 0) << 8
            | (is_unordered.t(x87_r6_16, x87_r7_46) ? 1 : 0) << 0xa
            | (x87_r6_16 == x87_r7_46 ? 1 : 0) << 0xe | 0x3000
        long double x87_r6_17
        long double x87_r7_47
        
        if ((eax_17:1.b & 0x41) != 0)
            arg8 = fconvert.s(x87_r6_16)
            x87_r6_17 = x87_r7_46
            x87_r7_47 = x87_r6_16
        else
            x87_r6_17 = x87_r7_46
            x87_r7_47 = x87_r6_16
            arg8 = fconvert.s(x87_r6_17)
        
        long double x87_r5_16 = fconvert.t(var_18)
        long double x87_r4_20 = fconvert.t(var_1c)
        x87_r4_20 - x87_r5_16
        eax_17.w = (x87_r4_20 < x87_r5_16 ? 1 : 0) << 8
            | (is_unordered.t(x87_r4_20, x87_r5_16) ? 1 : 0) << 0xa
            | (x87_r4_20 == x87_r5_16 ? 1 : 0) << 0xe | 0x2000
        long double x87_r4_21
        long double x87_r5_17
        
        if ((eax_17:1.b & 0x41) != 0)
            arg10 = fconvert.s(x87_r4_20)
            x87_r4_21 = x87_r5_16
            x87_r5_17 = x87_r4_20
        else
            x87_r4_21 = x87_r5_16
            x87_r5_17 = x87_r4_20
            arg10 = fconvert.s(x87_r4_21)
        
        long double x87_r3_17 = fconvert.t(arg8)
        long double x87_r2_35 = fconvert.t(arg10)
        x87_r2_35 - x87_r3_17
        eax_17.w = (x87_r2_35 < x87_r3_17 ? 1 : 0) << 8
            | (is_unordered.t(x87_r2_35, x87_r3_17) ? 1 : 0) << 0xa
            | (x87_r2_35 == x87_r3_17 ? 1 : 0) << 0xe | 0x1000
        
        if ((eax_17:1.b & 0x41) != 0)
            x87_r4_21 = x87_r2_35
        else
            x87_r3_17 = x87_r2_35
        
        float ecx_5 = arg5[1]
        long double x87_r3_19 = fconvert.t(fconvert.s(float.t(ecx_5)))
        long double x87_r2_36 = fconvert.t(fconvert.s(x87_r3_17))
        x87_r2_36 - x87_r3_19
        eax_17.w = (x87_r2_36 < x87_r3_19 ? 1 : 0) << 8
            | (is_unordered.t(x87_r2_36, x87_r3_19) ? 1 : 0) << 0xa
            | (x87_r2_36 == x87_r3_19 ? 1 : 0) << 0xe | 0x1000
        bool p_4 = unimplemented  {test ah, 0x5}
        
        if (p_4)
            x87_r4_21 = x87_r2_36
        else
            x87_r3_19 = x87_r2_36
        
        x87_r6_17 - x87_r7_47
        int32_t esi_2 = sub_70c710(fconvert.t(fconvert.s(x87_r3_19)))
        int32_t eax_18
        eax_18.w = (x87_r6_17 < x87_r7_47 ? 1 : 0) << 8
            | (is_unordered.t(x87_r6_17, x87_r7_47) ? 1 : 0) << 0xa
            | (x87_r6_17 == x87_r7_47 ? 1 : 0) << 0xe | 0x2000
        
        if ((eax_18:1.b & 0x41) != 0)
            x87_r5_17 = x87_r6_17
        
        long double x87_r7_48 = x87_r5_17
        x87_r4_21 - x87_r7_48
        eax_18.w = (x87_r4_21 < x87_r7_48 ? 1 : 0) << 8
            | (is_unordered.t(x87_r4_21, x87_r7_48) ? 1 : 0) << 0xa
            | (x87_r4_21 == x87_r7_48 ? 1 : 0) << 0xe | 0x3000
        
        if ((eax_18:1.b & 0x41) != 0)
            x87_r7_48 = x87_r4_21
        
        long double x87_r7_49 = fconvert.t(fconvert.s(x87_r7_47))
        long double x87_r6_19 = fconvert.t(fconvert.s(x87_r7_48))
        x87_r6_19 - x87_r7_49
        eax_18.w = (x87_r6_19 < x87_r7_49 ? 1 : 0) << 8
            | (is_unordered.t(x87_r6_19, x87_r7_49) ? 1 : 0) << 0xa
            | (x87_r6_19 == x87_r7_49 ? 1 : 0) << 0xe | 0x3000
        bool p_5 = unimplemented  {test ah, 0x5}
        
        if (not(p_5))
            x87_r7_49 = x87_r6_19
        
        long double x87_r7_51 = fconvert.t(fconvert.s(float.t(arg5[3] i+ ecx_5)))
        long double x87_r6_20 = fconvert.t(fconvert.s(x87_r7_49))
        x87_r6_20 - x87_r7_51
        float eax_20
        eax_20.w = (x87_r6_20 < x87_r7_51 ? 1 : 0) << 8
            | (is_unordered.t(x87_r6_20, x87_r7_51) ? 1 : 0) << 0xa
            | (x87_r6_20 == x87_r7_51 ? 1 : 0) << 0xe | 0x3000
        
        if ((eax_20:1.b & 0x41) == 0)
            x87_r7_51 = x87_r6_20
        
        int32_t j_3 = edi_2 i- arg6
        int32_t i_2 = sub_70c710(fconvert.t(fconvert.s(x87_r7_51))) - esi_2
        char* esi_3 = (*(*arg4 + 8))(arg6, esi_2)
        int32_t j_2 = j_3
        int32_t eax_26 = (*(*arg4 + 0x1c))() - (j_2 << 2)
        long double x87_r7_54 = fconvert.t(fconvert.s(float.t(esi_2)))
        int32_t var_58_1 = eax_26
        float var_4_1 = fconvert.s(x87_r7_54 * fconvert.t(var_8c) + fconvert.t(fconvert.s(
            fconvert.t(fconvert.s(x87_r1 * x87_r5 - x87_r3_2 * x87_r7_14)) * x87_r1_22)))
        float var_c_1 = fconvert.s(x87_r7_54 * fconvert.t(var_40_1) + fconvert.t(fconvert.s(
            fconvert.t(fconvert.s(x87_r2_5 * x87_r3_2 - x87_r1_6 * x87_r5)) * x87_r1_22)))
        float var_8_1 = fconvert.s(x87_r7_54 * fconvert.t(var_34_1)
            + fconvert.t(fconvert.s(x87_r1_22 * x87_r2_22)))
        float var_10_1 = fconvert.s(fconvert.t(var_80) * x87_r7_54 + fconvert.t(fconvert.s(
            fconvert.t(fconvert.s(x87_r2_17 * x87_r5 - x87_r2_15 * x87_r3_2)) * x87_r4_10)))
        float var_14_1 = fconvert.s(x87_r7_54 * fconvert.t(var_28_1)
            + fconvert.t(fconvert.s(x87_r4_10 * fconvert.t(var_58))))
        long double x87_r7_58 = fconvert.t(fconvert.s(float.t(arg6)))
        long double x87_r5_19 = fconvert.t(var_90)
        long double x87_r6_35 = x87_r5_19
        long double x87_r4_24 = fconvert.t(var_44_1)
        long double x87_r5_23 = x87_r4_24
        long double x87_r3_22 = fconvert.t(var_38_1)
        long double x87_r7_60 = x87_r3_22
        
        if (i_2 s> 0)
            long double x87_r4_30 = float.t(0)
            int32_t i_1 = i_2
            int32_t i
            
            do
                arg8 =
                    fconvert.s(fconvert.t(fconvert.s(x87_r7_58 * x87_r5_19)) + fconvert.t(var_4_1))
                arg10 =
                    fconvert.s(fconvert.t(fconvert.s(x87_r7_58 * x87_r4_24)) + fconvert.t(var_c_1))
                arg7 =
                    fconvert.s(fconvert.t(fconvert.s(x87_r7_58 * x87_r3_22)) + fconvert.t(var_8_1))
                arg9 = fconvert.s(fconvert.t(fconvert.s(x87_r7_58 * fconvert.t(var_84)))
                    + fconvert.t(var_10_1))
                arg6 = fconvert.s(fconvert.t(fconvert.s(x87_r7_58 * fconvert.t(var_2c_1)))
                    + fconvert.t(var_14_1))
                
                if (j_2 s> 0)
                    int32_t j_1 = j_2
                    int32_t j
                    
                    do
                        long double x87_r3_37 = fconvert.t(arg10)
                        x87_r3_37 - x87_r4_30
                        eax_26.w = (x87_r3_37 < x87_r4_30 ? 1 : 0) << 8
                            | (is_unordered.t(x87_r3_37, x87_r4_30) ? 1 : 0) << 0xa
                            | (x87_r3_37 == x87_r4_30 ? 1 : 0) << 0xe | 0x1800
                        long double x87_r2_38 = fconvert.t(arg7)
                        long double x87_r1_35 = fconvert.t(arg9)
                        bool p_6 = unimplemented  {test ah, 0x5}
                        long double x87_r4_42
                        long double x87_r6_38
                        long double x87_r7_63
                        
                        if (not(p_6))
                        label_47998e:
                            x87_r5_23 = x87_r1_35
                        label_479999:
                            arg8 = fconvert.s(fconvert.t(arg8) + x87_r6_35)
                            arg10 = fconvert.s(x87_r3_37 + x87_r5_23)
                            arg7 = fconvert.s(x87_r2_38 + x87_r7_60)
                            arg9 = fconvert.s(x87_r4_30 + fconvert.t(var_84))
                            arg6 = fconvert.s(fconvert.t(arg6) + fconvert.t(var_2c_1))
                            x87_r7_63 = x87_r6_35
                            x87_r4_42 = float.t(0)
                            x87_r6_38 = x87_r7_60
                        else
                            x87_r2_38 - x87_r4_30
                            eax_26.w = (x87_r2_38 < x87_r4_30 ? 1 : 0) << 8
                                | (is_unordered.t(x87_r2_38, x87_r4_30) ? 1 : 0) << 0xa
                                | (x87_r2_38 == x87_r4_30 ? 1 : 0) << 0xe | 0x800
                            bool p_7 = unimplemented  {test ah, 0x5}
                            
                            if (not(p_7))
                                x87_r5_23 = x87_r2_38
                                x87_r2_38 = x87_r4_30
                                x87_r4_30 = x87_r1_35
                                goto label_479999
                            
                            x87_r1_35 - x87_r4_30
                            eax_26.w = (x87_r1_35 < x87_r4_30 ? 1 : 0) << 8
                                | (is_unordered.t(x87_r1_35, x87_r4_30) ? 1 : 0) << 0xa
                                | (x87_r1_35 == x87_r4_30 ? 1 : 0) << 0xe | 0x800
                            bool p_8 = unimplemented  {test ah, 0x5}
                            
                            if (not(p_8))
                                goto label_47998e
                            
                            long double x87_r1_37 = x87_r4_30
                            x87_r4_30 = x87_r1_35
                            long double temp3_1 = fconvert.t(arg6)
                            x87_r1_37 - temp3_1
                            eax_26.w = (x87_r1_37 < temp3_1 ? 1 : 0) << 8
                                | (is_unordered.t(x87_r1_37, temp3_1) ? 1 : 0) << 0xa
                                | (x87_r1_37 == temp3_1 ? 1 : 0) << 0xe | 0x1000
                            
                            if ((eax_26:1.b & 0x41) == 0)
                                goto label_479999
                            
                            long double x87_r3_38 = fconvert.t(arg8)
                            long double x87_r2_44 = float.t(1)
                            long double x87_r2_49 = fconvert.t(fconvert.s(x87_r2_44 / x87_r2_44))
                            int32_t edi_5 = sub_70c710(fconvert.t(fconvert.s((
                                x87_r5_23 * fconvert.t(var_9c) + x87_r3_38 * fconvert.t(var_b0)
                                + x87_r3_37 * fconvert.t(var_a0)) * x87_r2_49)) * fconvert.t(256.0))
                                s>> 8
                            int32_t eax_28
                            int32_t ecx_8
                            eax_28, ecx_8 = sub_70c710(fconvert.t(fconvert.s(x87_r2_49 * (
                                x87_r5_23 * fconvert.t(var_a4) + x87_r3_38 * fconvert.t(var_ac)
                                + x87_r3_37 * fconvert.t(var_b4)))) * fconvert.t(256.0))
                            int32_t eax_29 = eax_28 s>> 8
                            
                            if (edi_5 s< 0)
                                edi_5 = 0
                            else if (edi_5 s> eax_9)
                                edi_5 = eax_9
                            
                            if (eax_29 s>= 0)
                                ecx_8 = var_70_1:4.d
                                
                                if (eax_29 s> ecx_8)
                                    eax_29 = ecx_8
                            else
                                eax_29 = 0
                            
                            long double x87_r3_49 = fconvert.t(var_90)
                            ecx_8.b = *esi_3
                            float eax_32 = eax_29 * var_78_1:4.d + var_98:4.d + (edi_5 << 2)
                            char eax_36 =
                                (((zx.d(*eax_32) - zx.d(ecx_8.b)) * arg11) s>> 8).b + ecx_8.b
                            ecx_8.b = esi_3[1]
                            *esi_3 = eax_36
                            arg8 = fconvert.s(x87_r3_38 + x87_r3_49)
                            long double x87_r3_51 = fconvert.t(var_44_1)
                            long double x87_r5_24 = x87_r5_23 + x87_r3_51
                            x87_r5_23 = x87_r3_51
                            arg10 = fconvert.s(x87_r5_24)
                            long double x87_r3_53 = fconvert.t(var_38_1)
                            x87_r6_38 = x87_r3_53
                            arg7 = fconvert.s(x87_r3_37 + x87_r3_53)
                            x87_r7_63 = x87_r3_49
                            char edx_15 =
                                (((zx.d(*(eax_32 i+ 1)) - zx.d(ecx_8.b)) * arg11) s>> 8).b + ecx_8.b
                            arg9 = fconvert.s(x87_r2_38 + fconvert.t(var_84))
                            ecx_8.b = esi_3[2]
                            esi_3[1] = edx_15
                            arg6 = fconvert.s(fconvert.t(arg6) + fconvert.t(var_2c_1))
                            x87_r4_42 = float.t(0)
                            eax_26.b =
                                (((zx.d(*(eax_32 i+ 2)) - zx.d(ecx_8.b)) * arg11) s>> 8).b + ecx_8.b
                            esi_3[2] = eax_26.b
                        
                        esi_3 = &esi_3[4]
                        j = j_1
                        j_1 -= 1
                        x87_r7_60 = x87_r6_38
                        x87_r4_30 = x87_r4_42
                        x87_r6_35 = x87_r7_63
                    while (j != 1)
                    j_2 = j_3
                    eax_26 = var_58_1
                
                esi_3 = &esi_3[eax_26]
                i = i_1
                i_1 -= 1
                var_4_1 = fconvert.s(fconvert.t(var_4_1) + fconvert.t(var_8c))
                var_c_1 = fconvert.s(fconvert.t(var_c_1) + fconvert.t(var_40_1))
                var_8_1 = fconvert.s(fconvert.t(var_8_1) + fconvert.t(var_34_1))
                var_10_1 = fconvert.s(fconvert.t(var_80) + fconvert.t(var_10_1))
                var_14_1 = fconvert.s(fconvert.t(var_28_1) + fconvert.t(var_14_1))
            while (i != 1)
        
        return eax_26

return eax_2
