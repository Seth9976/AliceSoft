// 函数: sub_479aa0
// 地址: 0x479aa0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

float* eax = arg11
int32_t edi = *arg16
float* edx_1 = arg6
arg16 = fconvert.s(fconvert.t(*edx_1))
float* edx_2 = arg8
float var_c = fconvert.s(fconvert.t(edx_1[1]))
arg11 = fconvert.s(fconvert.t(*edx_2))
float* edx_3 = arg10
float var_18 = fconvert.s(fconvert.t(edx_2[1]))
float var_8 = fconvert.s(fconvert.t(*edx_3))
float var_1c = fconvert.s(fconvert.t(edx_3[1]))
float var_4 = fconvert.s(fconvert.t(*eax))
float* eax_1 = arg7
float var_14 = fconvert.s(fconvert.t(eax[1]))
float var_20 = fconvert.s(fconvert.t(*eax_1))
float* eax_2 = arg9
float var_28 = fconvert.s(fconvert.t(eax_1[1]))
float var_30 = fconvert.s(fconvert.t(*eax_2))
float var_10 = fconvert.s(fconvert.t(eax_2[1]))
float var_24 = fconvert.s(fconvert.t(*arg3))
float var_2c = fconvert.s(fconvert.t(arg3[1]))
long double x87_r7_14 = fconvert.t(var_18)
long double x87_r5 = fconvert.t(var_1c)
long double x87_r3_2 = fconvert.t(var_8)
double var_68 = fconvert.d(x87_r3_2)
long double x87_r1 = fconvert.t(arg11)
double var_98 = fconvert.d(x87_r1)
long double x87_r2_5 = fconvert.t(var_c)
long double x87_r1_6 = fconvert.t(arg16)
float var_38 = fconvert.s(x87_r1_6 - fconvert.t(var_68))
long double x87_r2_15 = fconvert.t(var_14)
long double x87_r2_17 = fconvert.t(var_4)
float var_dc = fconvert.s(fconvert.t(var_68) - x87_r2_17)
var_68.d = fconvert.s(x87_r7_14 - fconvert.t(fconvert.d(x87_r2_15)))
var_68:4.d = fconvert.s(fconvert.t(fconvert.d(x87_r2_17)) - fconvert.t(var_98))
float var_60 = fconvert.s(x87_r2_15 * fconvert.t(arg11) - x87_r7_14 * fconvert.t(var_4))
long double x87_r5_2 = fconvert.t(fconvert.s(fconvert.t(var_98) - fconvert.t(fconvert.d(x87_r1_6))))
long double x87_r3_8 = fconvert.t(fconvert.s(fconvert.t(fconvert.d(x87_r2_5)) - x87_r7_14))
long double x87_r2_22 =
    fconvert.t(fconvert.s(x87_r7_14 * fconvert.t(arg16) - fconvert.t(arg11) * fconvert.t(var_c)))
long double x87_r2_24 = fconvert.t(var_68:4.d)
long double x87_r1_17 = fconvert.t(var_68.d)
long double x87_r2_26 = fconvert.t(fconvert.s(x87_r5_2 * x87_r5 + x87_r3_8 * x87_r3_2 + x87_r2_22))
long double x87_r1_20 = fconvert.t(9.9999997473787516e-05)
x87_r1_20 - x87_r2_26
eax_2.w = (x87_r1_20 < x87_r2_26 ? 1 : 0) << 8
    | (is_unordered.t(x87_r1_20, x87_r2_26) ? 1 : 0) << 0xa
    | (x87_r1_20 == x87_r2_26 ? 1 : 0) << 0xe | 0x800

if ((eax_2:1.b & 0x41) != 0)
    long double x87_r0_5 =
        fconvert.t(fconvert.s(x87_r3_2 * x87_r1_17 + x87_r5 * x87_r2_24 + fconvert.t(var_60)))
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
        float var_54_1 = fconvert.s(fconvert.t(fconvert.s(x87_r5 - x87_r2_5)) * x87_r1_22)
        float var_50_1 = fconvert.s(fconvert.t(var_38) * x87_r1_22)
        float var_48_1 = fconvert.s(x87_r3_8 * x87_r1_22)
        float var_44_1 = fconvert.s(x87_r5_2 * x87_r1_22)
        long double x87_r4_9 = float.t(1)
        long double x87_r4_10 = fconvert.t(fconvert.s(x87_r4_9 / x87_r4_9))
        float var_84 = fconvert.s(fconvert.t(fconvert.s(x87_r2_15 - x87_r5)) * x87_r4_10)
        float var_80 = fconvert.s(fconvert.t(var_dc) * x87_r4_10)
        float var_3c_1 = fconvert.s(x87_r1_17 * x87_r4_10)
        float var_38_1 = fconvert.s(x87_r2_24 * x87_r4_10)
        var_98:4.d = (*(*arg13 + 8))(0, 0)
        double var_70_1
        var_70_1:4.d = (*(*arg13 + 0x1c))()
        float eax_9 = (*(*arg13 + 0x10))() - 1
        double var_78_1
        var_78_1:4.d = (*(*arg13 + 0x14))() - 1
        float var_d0 = fconvert.s(fconvert.t(var_20) / fconvert.t(*(arg6 i+ 0xc)))
        float var_c8 = fconvert.s(fconvert.t(var_30) / fconvert.t(*(arg8 i+ 0xc)))
        float var_a4 = fconvert.s(fconvert.t(var_24) / fconvert.t(*(arg10 + 0xc)))
        float var_ac = fconvert.s(fconvert.t(var_28) / fconvert.t(*(arg6 i+ 0xc)))
        float var_cc = fconvert.s(fconvert.t(var_10) / fconvert.t(*(arg8 i+ 0xc)))
        float var_c4 = fconvert.s(fconvert.t(var_2c) / fconvert.t(*(arg10 + 0xc)))
        *(arg6 i+ 0xc)
        long double x87_r6_7 = float.t(1)
        float var_b0 = fconvert.s(x87_r6_7 / fconvert.t(*(arg8 i+ 0xc)))
        float var_c0 = fconvert.s(x87_r6_7 / fconvert.t(*(arg10 + 0xc)))
        long double x87_r7_39 = fconvert.t(arg16)
        long double x87_r6_11 = fconvert.t(arg11)
        x87_r6_11 - x87_r7_39
        int32_t eax_13
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
        
        long double x87_r5_13 = fconvert.t(var_8)
        long double x87_r4_17 = fconvert.t(var_4)
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
        
        float esi_1 = *arg5
        long double x87_r3_15 = fconvert.t(fconvert.s(float.t(esi_1)))
        long double x87_r2_34 = fconvert.t(fconvert.s(x87_r3_13))
        x87_r2_34 - x87_r3_15
        int32_t* eax_14
        eax_14.w = (x87_r2_34 < x87_r3_15 ? 1 : 0) << 8
            | (is_unordered.t(x87_r2_34, x87_r3_15) ? 1 : 0) << 0xa
            | (x87_r2_34 == x87_r3_15 ? 1 : 0) << 0xe | 0x1000
        bool p_2 = unimplemented  {test ah, 0x5}
        
        if (p_2)
            x87_r4_18 = x87_r2_34
        else
            x87_r3_15 = x87_r2_34
        
        x87_r6_12 - x87_r7_40
        arg9 = sub_70c710(fconvert.t(fconvert.s(x87_r3_15)))
        int32_t eax_15
        eax_15.w = (x87_r6_12 < x87_r7_40 ? 1 : 0) << 8
            | (is_unordered.t(x87_r6_12, x87_r7_40) ? 1 : 0) << 0xa
            | (x87_r6_12 == x87_r7_40 ? 1 : 0) << 0xe | 0x2000
        
        if ((eax_15:1.b & 0x41) != 0)
            x87_r5_14 = x87_r6_12
        
        long double x87_r7_41 = x87_r5_14
        x87_r4_18 - x87_r7_41
        eax_15.w = (x87_r4_18 < x87_r7_41 ? 1 : 0) << 8
            | (is_unordered.t(x87_r4_18, x87_r7_41) ? 1 : 0) << 0xa
            | (x87_r4_18 == x87_r7_41 ? 1 : 0) << 0xe | 0x3000
        
        if ((eax_15:1.b & 0x41) != 0)
            x87_r7_41 = x87_r4_18
        
        long double x87_r7_42 = fconvert.t(fconvert.s(x87_r7_40))
        long double x87_r6_14 = fconvert.t(fconvert.s(x87_r7_41))
        x87_r6_14 - x87_r7_42
        eax_15.w = (x87_r6_14 < x87_r7_42 ? 1 : 0) << 8
            | (is_unordered.t(x87_r6_14, x87_r7_42) ? 1 : 0) << 0xa
            | (x87_r6_14 == x87_r7_42 ? 1 : 0) << 0xe | 0x3000
        bool p_3 = unimplemented  {test ah, 0x5}
        
        if (not(p_3))
            x87_r7_42 = x87_r6_14
        
        long double x87_r7_44 = fconvert.t(fconvert.s(float.t(arg5[2] i+ esi_1)))
        long double x87_r6_15 = fconvert.t(fconvert.s(x87_r7_42))
        x87_r6_15 - x87_r7_44
        eax_15.w = (x87_r6_15 < x87_r7_44 ? 1 : 0) << 8
            | (is_unordered.t(x87_r6_15, x87_r7_44) ? 1 : 0) << 0xa
            | (x87_r6_15 == x87_r7_44 ? 1 : 0) << 0xe | 0x3000
        
        if ((eax_15:1.b & 0x41) == 0)
            x87_r7_44 = x87_r6_15
        
        long double x87_r7_46 = fconvert.t(var_c)
        long double x87_r6_16 = fconvert.t(var_18)
        int32_t esi_2 = sub_70c710(fconvert.t(fconvert.s(x87_r7_44)))
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
        
        long double x87_r5_16 = fconvert.t(var_1c)
        long double x87_r4_20 = fconvert.t(var_14)
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
        
        int32_t ecx_6 = arg5[1]
        long double x87_r3_19 = fconvert.t(fconvert.s(float.t(ecx_6)))
        long double x87_r2_36 = fconvert.t(fconvert.s(x87_r3_17))
        x87_r2_36 - x87_r3_19
        int32_t* eax_17
        eax_17.w = (x87_r2_36 < x87_r3_19 ? 1 : 0) << 8
            | (is_unordered.t(x87_r2_36, x87_r3_19) ? 1 : 0) << 0xa
            | (x87_r2_36 == x87_r3_19 ? 1 : 0) << 0xe | 0x1000
        bool p_4 = unimplemented  {test ah, 0x5}
        
        if (p_4)
            x87_r4_21 = x87_r2_36
        else
            x87_r3_19 = x87_r2_36
        
        x87_r6_17 - x87_r7_47
        int32_t var_8_1 = sub_70c710(fconvert.t(fconvert.s(x87_r3_19)))
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
        
        long double x87_r7_51 = fconvert.t(fconvert.s(float.t(arg5[3] + ecx_6)))
        long double x87_r6_20 = fconvert.t(fconvert.s(x87_r7_49))
        x87_r6_20 - x87_r7_51
        float eax_20
        eax_20.w = (x87_r6_20 < x87_r7_51 ? 1 : 0) << 8
            | (is_unordered.t(x87_r6_20, x87_r7_51) ? 1 : 0) << 0xa
            | (x87_r6_20 == x87_r7_51 ? 1 : 0) << 0xe | 0x3000
        
        if ((eax_20:1.b & 0x41) == 0)
            x87_r7_51 = x87_r6_20
        
        int32_t j_3 = esi_2 i- arg9
        int32_t i_3 = sub_70c710(fconvert.t(fconvert.s(x87_r7_51))) - var_8_1
        arg16:3.b = *arg15
        arg6:3.b = arg15[8]
        arg10:3.b = arg15[4]
        arg8:3.b = arg14[8]
        arg11:3.b = arg14[4]
        arg7:3.b = *arg14
        char* esi_4 = (*(*arg4 + 8))(arg9, var_8_1)
        int32_t j_2 = j_3
        int32_t ecx_12 = (*(*arg4 + 0x1c))() - (j_2 << 2)
        long double x87_r7_54 = fconvert.t(fconvert.s(float.t(var_8_1)))
        int32_t var_60_1 = ecx_12
        float var_28_1 = fconvert.s(x87_r7_54 * fconvert.t(var_8c) + fconvert.t(fconvert.s(
            fconvert.t(fconvert.s(x87_r1 * x87_r5 - x87_r3_2 * x87_r7_14)) * x87_r1_22)))
        float var_14_1 = fconvert.s(x87_r7_54 * fconvert.t(var_50_1) + fconvert.t(fconvert.s(
            fconvert.t(fconvert.s(x87_r2_5 * x87_r3_2 - x87_r1_6 * x87_r5)) * x87_r1_22)))
        float var_1c_1 = fconvert.s(x87_r7_54 * fconvert.t(var_44_1)
            + fconvert.t(fconvert.s(x87_r1_22 * x87_r2_22)))
        float var_18_1 = fconvert.s(fconvert.t(var_80) * x87_r7_54 + fconvert.t(fconvert.s(
            fconvert.t(fconvert.s(x87_r2_17 * x87_r5 - x87_r2_15 * x87_r3_2)) * x87_r4_10)))
        float var_8_2 = fconvert.s(x87_r7_54 * fconvert.t(var_38_1)
            + fconvert.t(fconvert.s(x87_r4_10 * fconvert.t(var_60))))
        long double x87_r7_58 = fconvert.t(fconvert.s(float.t(arg9)))
        long double x87_r5_19 = fconvert.t(var_90)
        long double x87_r6_35 = x87_r5_19
        long double x87_r4_24 = fconvert.t(var_54_1)
        long double x87_r5_23 = x87_r4_24
        long double x87_r3_22 = fconvert.t(var_48_1)
        uint32_t i_2 = i_3
        long double x87_r7_60 = x87_r3_22
        
        if (i_2 s> 0)
            long double x87_r4_30 = float.t(0)
            uint32_t i_1 = i_2
            uint32_t i
            
            do
                arg9 =
                    fconvert.s(fconvert.t(fconvert.s(x87_r7_58 * x87_r5_19)) + fconvert.t(var_28_1))
                float var_c_1 =
                    fconvert.s(fconvert.t(fconvert.s(x87_r7_58 * x87_r4_24)) + fconvert.t(var_14_1))
                float var_2c_1 =
                    fconvert.s(fconvert.t(fconvert.s(x87_r7_58 * x87_r3_22)) + fconvert.t(var_1c_1))
                float var_10_1 = fconvert.s(fconvert.t(fconvert.s(x87_r7_58 * fconvert.t(var_84)))
                    + fconvert.t(var_18_1))
                float var_4_1 = fconvert.s(fconvert.t(fconvert.s(x87_r7_58 * fconvert.t(var_3c_1)))
                    + fconvert.t(var_8_2))
                
                if (j_2 s> 0)
                    int32_t j_1 = j_2
                    int32_t j
                    
                    do
                        long double x87_r3_37 = fconvert.t(var_c_1)
                        x87_r3_37 - x87_r4_30
                        i_2.w = (x87_r3_37 < x87_r4_30 ? 1 : 0) << 8
                            | (is_unordered.t(x87_r3_37, x87_r4_30) ? 1 : 0) << 0xa
                            | (x87_r3_37 == x87_r4_30 ? 1 : 0) << 0xe | 0x1800
                        long double x87_r2_38 = fconvert.t(var_2c_1)
                        long double x87_r1_35 = fconvert.t(var_10_1)
                        bool p_6 = unimplemented  {test ah, 0x5}
                        long double x87_r4_42
                        long double x87_r6_38
                        long double x87_r7_63
                        
                        if (not(p_6))
                        label_47a663:
                            x87_r5_23 = x87_r1_35
                        label_47a66e:
                            arg9 = fconvert.s(fconvert.t(arg9) + x87_r6_35)
                            var_c_1 = fconvert.s(x87_r3_37 + x87_r5_23)
                            var_2c_1 = fconvert.s(x87_r2_38 + x87_r7_60)
                            var_10_1 = fconvert.s(x87_r4_30 + fconvert.t(var_84))
                            var_4_1 = fconvert.s(fconvert.t(var_4_1) + fconvert.t(var_3c_1))
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
                                goto label_47a66e
                            
                            x87_r1_35 - x87_r4_30
                            i_2.w = (x87_r1_35 < x87_r4_30 ? 1 : 0) << 8
                                | (is_unordered.t(x87_r1_35, x87_r4_30) ? 1 : 0) << 0xa
                                | (x87_r1_35 == x87_r4_30 ? 1 : 0) << 0xe | 0x800
                            bool p_8 = unimplemented  {test ah, 0x5}
                            
                            if (not(p_8))
                                goto label_47a663
                            
                            long double x87_r1_37 = x87_r4_30
                            x87_r4_30 = x87_r1_35
                            long double temp3_1 = fconvert.t(var_4_1)
                            x87_r1_37 - temp3_1
                            i_2.w = (x87_r1_37 < temp3_1 ? 1 : 0) << 8
                                | (is_unordered.t(x87_r1_37, temp3_1) ? 1 : 0) << 0xa
                                | (x87_r1_37 == temp3_1 ? 1 : 0) << 0xe | 0x1000
                            
                            if ((i_2:1.b & 0x41) == 0)
                                goto label_47a66e
                            
                            long double x87_r3_38 = fconvert.t(arg9)
                            long double x87_r2_44 = float.t(1)
                            long double x87_r2_49 = fconvert.t(fconvert.s(x87_r2_44 / x87_r2_44))
                            float ecx_13 = sub_70c710(fconvert.t(fconvert.s((
                                x87_r5_23 * fconvert.t(var_c8) + x87_r3_38 * fconvert.t(var_d0)
                                + x87_r3_37 * fconvert.t(var_a4)) * x87_r2_49)) * fconvert.t(256.0))
                                s>> 8
                            int32_t eax_34 = sub_70c710(fconvert.t(fconvert.s(x87_r2_49 * (
                                x87_r5_23 * fconvert.t(var_cc) + x87_r3_38 * fconvert.t(var_ac)
                                + x87_r3_37 * fconvert.t(var_c4)))) * fconvert.t(256.0)) s>> 8
                            
                            if (ecx_13 s< 0)
                                ecx_13 = 0f
                            else if (ecx_13 s> eax_9)
                                ecx_13 = eax_9
                            
                            if (eax_34 s>= 0)
                                int32_t edx_18 = var_78_1:4.d
                                
                                if (eax_34 s> edx_18)
                                    eax_34 = edx_18
                            else
                                eax_34 = 0
                            
                            long double x87_r3_49 = fconvert.t(var_90)
                            float eax_37 = *(eax_34 * var_70_1:4.d + var_98:4.d + (ecx_13 << 2))
                            int32_t ecx_17
                            ecx_17.b =
                                *(zx.d(arg8:3.b) + ((zx.d(eax_37.b) * zx.d(arg6:3.b)) s>> 8) + edi)
                            int32_t edx_23
                            edx_23.b = *(zx.d(arg11:3.b)
                                + ((zx.d(eax_37:1.b) * zx.d(arg10:3.b)) s>> 8) + edi)
                            arg9:1.b = edx_23.b
                            arg9:2.b = *(zx.d(arg7:3.b)
                                + ((zx.d(eax_37:2.b) * zx.d(arg16:3.b)) s>> 8) + edi)
                            i_2.b = *esi_4
                            char ecx_21 = (((zx.d(ecx_17.b) - zx.d(i_2.b)) * arg12) s>> 8).b + i_2.b
                            i_2.b = esi_4[1]
                            *esi_4 = ecx_21
                            char ecx_25 = (((zx.d(arg9:1.b) - zx.d(i_2.b)) * arg12) s>> 8).b + i_2.b
                            i_2.b = esi_4[2]
                            esi_4[1] = ecx_25
                            uint32_t ecx_26 = zx.d(arg9:2.b)
                            arg9 = fconvert.s(x87_r3_38 + x87_r3_49)
                            long double x87_r3_51 = fconvert.t(var_54_1)
                            long double x87_r5_24 = x87_r5_23 + x87_r3_51
                            x87_r5_23 = x87_r3_51
                            var_c_1 = fconvert.s(x87_r5_24)
                            long double x87_r3_53 = fconvert.t(var_48_1)
                            x87_r6_38 = x87_r3_53
                            var_2c_1 = fconvert.s(x87_r3_37 + x87_r3_53)
                            x87_r7_63 = x87_r3_49
                            var_10_1 = fconvert.s(x87_r2_38 + fconvert.t(var_84))
                            esi_4[2] = (((ecx_26 - zx.d(i_2.b)) * arg12) s>> 8).b + i_2.b
                            var_4_1 = fconvert.s(fconvert.t(var_4_1) + fconvert.t(var_3c_1))
                            x87_r4_42 = float.t(0)
                        
                        esi_4 = &esi_4[4]
                        j = j_1
                        j_1 -= 1
                        x87_r7_60 = x87_r6_38
                        x87_r4_30 = x87_r4_42
                        x87_r6_35 = x87_r7_63
                    while (j != 1)
                    j_2 = j_3
                    ecx_12 = var_60_1
                
                esi_4 = &esi_4[ecx_12]
                i = i_1
                i_1 -= 1
                var_28_1 = fconvert.s(fconvert.t(var_28_1) + fconvert.t(var_8c))
                var_14_1 = fconvert.s(fconvert.t(var_14_1) + fconvert.t(var_50_1))
                var_1c_1 = fconvert.s(fconvert.t(var_1c_1) + fconvert.t(var_44_1))
                var_18_1 = fconvert.s(fconvert.t(var_80) + fconvert.t(var_18_1))
                var_8_2 = fconvert.s(fconvert.t(var_38_1) + fconvert.t(var_8_2))
            while (i != 1)
        
        return i_2

return eax_2
