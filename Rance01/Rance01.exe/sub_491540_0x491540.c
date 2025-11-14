// 函数: sub_491540
// 地址: 0x491540
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

float* eax = arg10
float* ebx = arg6
int32_t* esi = arg14
arg14 = fconvert.s(fconvert.t(*ebx))
float* ebx_1 = arg8
float var_2c = fconvert.s(fconvert.t(ebx[1]))
int32_t esi_1 = *esi
arg10 = fconvert.s(fconvert.t(*ebx_1))
float* ebx_2 = arg9
float var_40 = fconvert.s(fconvert.t(ebx_1[1]))
float var_24 = fconvert.s(fconvert.t(*ebx_2))
float var_3c = fconvert.s(fconvert.t(ebx_2[1]))
float var_10 = fconvert.s(fconvert.t(*eax))
float* eax_1 = arg7
float var_44 = fconvert.s(fconvert.t(eax[1]))
float var_54 = fconvert.s(fconvert.t(*eax_1))
float var_4 = fconvert.s(fconvert.t(eax_1[1]))
float var_38 = fconvert.s(fconvert.t(*arg2))
float var_14 = fconvert.s(fconvert.t(arg2[1]))
float var_4c = fconvert.s(fconvert.t(*arg3))
float var_28 = fconvert.s(fconvert.t(arg3[1]))
long double x87_r7_14 = fconvert.t(var_40)
long double x87_r5 = fconvert.t(var_3c)
long double x87_r3_2 = fconvert.t(var_24)
double var_90 = fconvert.d(x87_r3_2)
long double x87_r1 = fconvert.t(arg10)
double var_d0 = fconvert.d(x87_r1)
long double x87_r2_5 = fconvert.t(var_2c)
long double x87_r1_6 = fconvert.t(arg14)
float var_5c = fconvert.s(x87_r1_6 - fconvert.t(var_90))
long double x87_r2_15 = fconvert.t(var_44)
long double x87_r2_17 = fconvert.t(var_10)
float var_108 = fconvert.s(fconvert.t(var_90) - x87_r2_17)
var_90.d = fconvert.s(x87_r7_14 - fconvert.t(fconvert.d(x87_r2_15)))
var_90:4.d = fconvert.s(fconvert.t(fconvert.d(x87_r2_17)) - fconvert.t(var_d0))
float var_88 = fconvert.s(x87_r2_15 * fconvert.t(arg10) - x87_r7_14 * fconvert.t(var_10))
long double x87_r5_2 = fconvert.t(fconvert.s(fconvert.t(var_d0) - fconvert.t(fconvert.d(x87_r1_6))))
long double x87_r3_8 = fconvert.t(fconvert.s(fconvert.t(fconvert.d(x87_r2_5)) - x87_r7_14))
long double x87_r2_22 =
    fconvert.t(fconvert.s(x87_r7_14 * fconvert.t(arg14) - fconvert.t(arg10) * fconvert.t(var_2c)))
long double x87_r2_24 = fconvert.t(var_90:4.d)
long double x87_r1_17 = fconvert.t(var_90.d)
long double x87_r2_26 = fconvert.t(fconvert.s(x87_r5_2 * x87_r5 + x87_r3_8 * x87_r3_2 + x87_r2_22))
long double x87_r1_20 = fconvert.t(9.9999997473787516e-05)
x87_r1_20 - x87_r2_26
eax_1.w = (x87_r1_20 < x87_r2_26 ? 1 : 0) << 8
    | (is_unordered.t(x87_r1_20, x87_r2_26) ? 1 : 0) << 0xa
    | (x87_r1_20 == x87_r2_26 ? 1 : 0) << 0xe | 0x800

if ((eax_1:1.b & 0x41) != 0)
    long double x87_r0_5 =
        fconvert.t(fconvert.s(x87_r3_2 * x87_r1_17 + x87_r5 * x87_r2_24 + fconvert.t(var_88)))
    x87_r0_5 - x87_r1_20
    eax_1.w = (x87_r0_5 < x87_r1_20 ? 1 : 0) << 8
        | (is_unordered.t(x87_r0_5, x87_r1_20) ? 1 : 0) << 0xa
        | (x87_r0_5 == x87_r1_20 ? 1 : 0) << 0xe | 0x1000
    bool p_1 = unimplemented  {test ah, 0x5}
    
    if (p_1)
        long double x87_r1_21 = float.t(1)
        long double x87_r1_22 = fconvert.t(fconvert.s(x87_r1_21 / x87_r1_21))
        float var_c4 = fconvert.s(fconvert.t(fconvert.s(x87_r7_14 - x87_r5)) * x87_r1_22)
        float var_c0 = fconvert.s(fconvert.t(fconvert.s(x87_r3_2 - x87_r1)) * x87_r1_22)
        float var_78_1 = fconvert.s(fconvert.t(fconvert.s(x87_r5 - x87_r2_5)) * x87_r1_22)
        float var_74_1 = fconvert.s(fconvert.t(var_5c) * x87_r1_22)
        float var_6c_1 = fconvert.s(x87_r3_8 * x87_r1_22)
        float var_68_1 = fconvert.s(x87_r5_2 * x87_r1_22)
        long double x87_r4_9 = float.t(1)
        long double x87_r4_10 = fconvert.t(fconvert.s(x87_r4_9 / x87_r4_9))
        float var_a4 = fconvert.s(fconvert.t(fconvert.s(x87_r2_15 - x87_r5)) * x87_r4_10)
        float var_a0 = fconvert.s(fconvert.t(var_108) * x87_r4_10)
        float var_60_1 = fconvert.s(x87_r1_17 * x87_r4_10)
        float var_5c_1 = fconvert.s(x87_r2_24 * x87_r4_10)
        int32_t ebx_3 = (*(*arg11 + 8))(0, 0)
        var_d0:4.d = ebx_3
        int32_t eax_5 = (*(*arg11 + 0x1c))()
        int32_t eax_8 = (*(*arg11 + 0x10))() - 1
        int32_t eax_10 = (*(*arg11 + 0x14))()
        float var_fc = fconvert.s(fconvert.t(var_54) / fconvert.t(*(arg6 i+ 0xc)))
        float var_f4 = fconvert.s(fconvert.t(var_38) / fconvert.t(*(arg8 i+ 0xc)))
        float var_f0 = fconvert.s(fconvert.t(var_4c) / fconvert.t(*(arg9 + 0xc)))
        double var_b8_1
        var_b8_1:4.d = fconvert.s(fconvert.t(var_4) / fconvert.t(*(arg6 i+ 0xc)))
        float var_e0 = fconvert.s(fconvert.t(var_14) / fconvert.t(*(arg8 i+ 0xc)))
        double var_98_1
        var_98_1:4.d = fconvert.s(fconvert.t(var_28) / fconvert.t(*(arg9 + 0xc)))
        *(arg6 i+ 0xc)
        long double x87_r6_7 = float.t(1)
        float var_d4 = fconvert.s(x87_r6_7 / fconvert.t(*(arg8 i+ 0xc)))
        float var_ec = fconvert.s(x87_r6_7 / fconvert.t(*(arg9 + 0xc)))
        long double x87_r7_39 = fconvert.t(arg14)
        long double x87_r6_11 = fconvert.t(arg10)
        x87_r6_11 - x87_r7_39
        int32_t eax_12
        eax_12.w = (x87_r6_11 < x87_r7_39 ? 1 : 0) << 8
            | (is_unordered.t(x87_r6_11, x87_r7_39) ? 1 : 0) << 0xa
            | (x87_r6_11 == x87_r7_39 ? 1 : 0) << 0xe | 0x3000
        long double x87_r6_12
        long double x87_r7_40
        
        if ((eax_12:1.b & 0x41) != 0)
            arg6 = fconvert.s(x87_r6_11)
            x87_r6_12 = x87_r7_39
            x87_r7_40 = x87_r6_11
        else
            x87_r6_12 = x87_r7_39
            x87_r7_40 = x87_r6_11
            arg6 = fconvert.s(x87_r6_12)
        
        long double x87_r5_13 = fconvert.t(var_24)
        long double x87_r4_17 = fconvert.t(var_10)
        x87_r4_17 - x87_r5_13
        eax_12.w = (x87_r4_17 < x87_r5_13 ? 1 : 0) << 8
            | (is_unordered.t(x87_r4_17, x87_r5_13) ? 1 : 0) << 0xa
            | (x87_r4_17 == x87_r5_13 ? 1 : 0) << 0xe | 0x2000
        long double x87_r4_18
        long double x87_r5_14
        
        if ((eax_12:1.b & 0x41) != 0)
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
        eax_12.w = (x87_r2_33 < x87_r3_13 ? 1 : 0) << 8
            | (is_unordered.t(x87_r2_33, x87_r3_13) ? 1 : 0) << 0xa
            | (x87_r2_33 == x87_r3_13 ? 1 : 0) << 0xe | 0x1000
        
        if ((eax_12:1.b & 0x41) != 0)
            x87_r4_18 = x87_r2_33
        else
            x87_r3_13 = x87_r2_33
        
        float edi_1 = *arg5
        long double x87_r3_15 = fconvert.t(fconvert.s(float.t(edi_1)))
        long double x87_r2_34 = fconvert.t(fconvert.s(x87_r3_13))
        x87_r2_34 - x87_r3_15
        int32_t* eax_13
        eax_13.w = (x87_r2_34 < x87_r3_15 ? 1 : 0) << 8
            | (is_unordered.t(x87_r2_34, x87_r3_15) ? 1 : 0) << 0xa
            | (x87_r2_34 == x87_r3_15 ? 1 : 0) << 0xe | 0x1000
        bool p_2 = unimplemented  {test ah, 0x5}
        
        if (p_2)
            x87_r4_18 = x87_r2_34
        else
            x87_r3_15 = x87_r2_34
        
        x87_r6_12 - x87_r7_40
        int32_t var_10_1 = sub_70c710(fconvert.t(fconvert.s(x87_r3_15)))
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
        eax_14.w = (x87_r6_15 < x87_r7_44 ? 1 : 0) << 8
            | (is_unordered.t(x87_r6_15, x87_r7_44) ? 1 : 0) << 0xa
            | (x87_r6_15 == x87_r7_44 ? 1 : 0) << 0xe | 0x3000
        
        if ((eax_14:1.b & 0x41) == 0)
            x87_r7_44 = x87_r6_15
        
        long double x87_r7_46 = fconvert.t(var_2c)
        long double x87_r6_16 = fconvert.t(var_40)
        int32_t edi_2 = sub_70c710(fconvert.t(fconvert.s(x87_r7_44)))
        x87_r6_16 - x87_r7_46
        int32_t eax_15
        eax_15.w = (x87_r6_16 < x87_r7_46 ? 1 : 0) << 8
            | (is_unordered.t(x87_r6_16, x87_r7_46) ? 1 : 0) << 0xa
            | (x87_r6_16 == x87_r7_46 ? 1 : 0) << 0xe | 0x3000
        long double x87_r6_17
        long double x87_r7_47
        
        if ((eax_15:1.b & 0x41) != 0)
            arg6 = fconvert.s(x87_r6_16)
            x87_r6_17 = x87_r7_46
            x87_r7_47 = x87_r6_16
        else
            x87_r6_17 = x87_r7_46
            x87_r7_47 = x87_r6_16
            arg6 = fconvert.s(x87_r6_17)
        
        long double x87_r5_16 = fconvert.t(var_3c)
        long double x87_r4_20 = fconvert.t(var_44)
        x87_r4_20 - x87_r5_16
        eax_15.w = (x87_r4_20 < x87_r5_16 ? 1 : 0) << 8
            | (is_unordered.t(x87_r4_20, x87_r5_16) ? 1 : 0) << 0xa
            | (x87_r4_20 == x87_r5_16 ? 1 : 0) << 0xe | 0x2000
        long double x87_r4_21
        long double x87_r5_17
        
        if ((eax_15:1.b & 0x41) != 0)
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
        eax_15.w = (x87_r2_35 < x87_r3_17 ? 1 : 0) << 8
            | (is_unordered.t(x87_r2_35, x87_r3_17) ? 1 : 0) << 0xa
            | (x87_r2_35 == x87_r3_17 ? 1 : 0) << 0xe | 0x1000
        
        if ((eax_15:1.b & 0x41) != 0)
            x87_r4_21 = x87_r2_35
        else
            x87_r3_17 = x87_r2_35
        
        int32_t ecx_6 = arg5[1]
        long double x87_r3_19 = fconvert.t(fconvert.s(float.t(ecx_6)))
        long double x87_r2_36 = fconvert.t(fconvert.s(x87_r3_17))
        x87_r2_36 - x87_r3_19
        int32_t* eax_16
        eax_16.w = (x87_r2_36 < x87_r3_19 ? 1 : 0) << 8
            | (is_unordered.t(x87_r2_36, x87_r3_19) ? 1 : 0) << 0xa
            | (x87_r2_36 == x87_r3_19 ? 1 : 0) << 0xe | 0x1000
        bool p_4 = unimplemented  {test ah, 0x5}
        
        if (p_4)
            x87_r4_21 = x87_r2_36
        else
            x87_r3_19 = x87_r2_36
        
        x87_r6_17 - x87_r7_47
        int32_t var_24_1 = sub_70c710(fconvert.t(fconvert.s(x87_r3_19)))
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
        
        long double x87_r7_51 = fconvert.t(fconvert.s(float.t(arg5[3] + ecx_6)))
        long double x87_r6_20 = fconvert.t(fconvert.s(x87_r7_49))
        x87_r6_20 - x87_r7_51
        float eax_19
        eax_19.w = (x87_r6_20 < x87_r7_51 ? 1 : 0) << 8
            | (is_unordered.t(x87_r6_20, x87_r7_51) ? 1 : 0) << 0xa
            | (x87_r6_20 == x87_r7_51 ? 1 : 0) << 0xe | 0x3000
        
        if ((eax_19:1.b & 0x41) == 0)
            x87_r7_51 = x87_r6_20
        
        int32_t j_3 = edi_2 - var_10_1
        int32_t i_3 = sub_70c710(fconvert.t(fconvert.s(x87_r7_51))) - var_24_1
        arg6:3.b = arg13[8]
        arg9:3.b = arg13[4]
        char edx_9 = arg13[0xc]
        arg14:3.b = *arg13
        arg8:3.b = arg12[8]
        arg10:3.b = arg12[4]
        char edx_11 = arg12[0xc]
        arg7:3.b = *arg12
        char* edi_4 = (*(*arg4 + 8))(var_10_1, var_24_1)
        char* var_30 = edi_4
        int32_t j_2 = j_3
        int32_t ecx_14 = (*(*arg4 + 0x1c))() - (j_2 << 2)
        long double x87_r7_54 = fconvert.t(fconvert.s(float.t(var_24_1)))
        int32_t var_88_1 = ecx_14
        float var_4c_1 = fconvert.s(x87_r7_54 * fconvert.t(var_c0) + fconvert.t(fconvert.s(
            fconvert.t(fconvert.s(x87_r1 * x87_r5 - x87_r3_2 * x87_r7_14)) * x87_r1_22)))
        float var_44_1 = fconvert.s(x87_r7_54 * fconvert.t(var_74_1) + fconvert.t(fconvert.s(
            fconvert.t(fconvert.s(x87_r2_5 * x87_r3_2 - x87_r1_6 * x87_r5)) * x87_r1_22)))
        float var_3c_1 = fconvert.s(x87_r7_54 * fconvert.t(var_68_1)
            + fconvert.t(fconvert.s(x87_r1_22 * x87_r2_22)))
        float var_40_1 = fconvert.s(fconvert.t(var_a0) * x87_r7_54 + fconvert.t(fconvert.s(
            fconvert.t(fconvert.s(x87_r2_17 * x87_r5 - x87_r2_15 * x87_r3_2)) * x87_r4_10)))
        float var_24_2 = fconvert.s(x87_r7_54 * fconvert.t(var_5c_1)
            + fconvert.t(fconvert.s(x87_r4_10 * fconvert.t(var_88))))
        long double x87_r7_58 = fconvert.t(fconvert.s(float.t(var_10_1)))
        long double x87_r5_19 = fconvert.t(var_c4)
        long double x87_r6_35 = x87_r5_19
        long double x87_r4_24 = fconvert.t(var_78_1)
        long double x87_r5_23 = x87_r4_24
        int32_t i_2 = i_3
        long double x87_r3_22 = fconvert.t(var_6c_1)
        long double x87_r7_60 = x87_r3_22
        
        if (i_2 s> 0)
            long double x87_r4_30 = float.t(0)
            int32_t i_1 = i_2
            int32_t i
            
            do
                float var_10_2 =
                    fconvert.s(fconvert.t(fconvert.s(x87_r7_58 * x87_r5_19)) + fconvert.t(var_4c_1))
                float var_4_1 =
                    fconvert.s(fconvert.t(fconvert.s(x87_r7_58 * x87_r4_24)) + fconvert.t(var_44_1))
                float var_14_1 =
                    fconvert.s(fconvert.t(fconvert.s(x87_r7_58 * x87_r3_22)) + fconvert.t(var_3c_1))
                float var_28_1 = fconvert.s(fconvert.t(fconvert.s(x87_r7_58 * fconvert.t(var_a4)))
                    + fconvert.t(var_40_1))
                float var_50_1 = fconvert.s(fconvert.t(fconvert.s(x87_r7_58 * fconvert.t(var_60_1)))
                    + fconvert.t(var_24_2))
                
                if (j_2 s> 0)
                    int32_t j_1 = j_2
                    int32_t j
                    
                    do
                        long double x87_r3_37 = fconvert.t(var_4_1)
                        x87_r3_37 - x87_r4_30
                        i_2.w = (x87_r3_37 < x87_r4_30 ? 1 : 0) << 8
                            | (is_unordered.t(x87_r3_37, x87_r4_30) ? 1 : 0) << 0xa
                            | (x87_r3_37 == x87_r4_30 ? 1 : 0) << 0xe | 0x1800
                        long double x87_r2_38 = fconvert.t(var_14_1)
                        long double x87_r1_35 = fconvert.t(var_28_1)
                        bool p_6 = unimplemented  {test ah, 0x5}
                        long double x87_r4_42
                        long double x87_r6_38
                        long double x87_r7_63
                        
                        if (not(p_6))
                        label_4924d9:
                            x87_r5_23 = x87_r1_35
                        label_4924e4:
                            var_10_2 = fconvert.s(fconvert.t(var_10_2) + x87_r6_35)
                            var_4_1 = fconvert.s(x87_r3_37 + x87_r5_23)
                            var_14_1 = fconvert.s(x87_r2_38 + x87_r7_60)
                            var_28_1 = fconvert.s(x87_r4_30 + fconvert.t(var_a4))
                            var_50_1 = fconvert.s(fconvert.t(var_50_1) + fconvert.t(var_60_1))
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
                                goto label_4924e4
                            
                            x87_r1_35 - x87_r4_30
                            i_2.w = (x87_r1_35 < x87_r4_30 ? 1 : 0) << 8
                                | (is_unordered.t(x87_r1_35, x87_r4_30) ? 1 : 0) << 0xa
                                | (x87_r1_35 == x87_r4_30 ? 1 : 0) << 0xe | 0x800
                            bool p_8 = unimplemented  {test ah, 0x5}
                            
                            if (not(p_8))
                                goto label_4924d9
                            
                            long double x87_r1_37 = x87_r4_30
                            x87_r4_30 = x87_r1_35
                            long double temp3_1 = fconvert.t(var_50_1)
                            x87_r1_37 - temp3_1
                            i_2.w = (x87_r1_37 < temp3_1 ? 1 : 0) << 8
                                | (is_unordered.t(x87_r1_37, temp3_1) ? 1 : 0) << 0xa
                                | (x87_r1_37 == temp3_1 ? 1 : 0) << 0xe | 0x1000
                            
                            if ((i_2:1.b & 0x41) == 0)
                                goto label_4924e4
                            
                            long double x87_r3_38 = fconvert.t(var_10_2)
                            long double x87_r2_44 = float.t(1)
                            long double x87_r2_49 = fconvert.t(fconvert.s(x87_r2_44 / x87_r2_44))
                            int32_t eax_29 = sub_70c710(fconvert.t(fconvert.s((
                                x87_r5_23 * fconvert.t(var_f4) + x87_r3_38 * fconvert.t(var_fc)
                                + x87_r3_37 * fconvert.t(var_f0)) * x87_r2_49)) * fconvert.t(256.0))
                            int32_t eax_30 = sub_70c710(fconvert.t(fconvert.s(x87_r2_49 * (
                                x87_r5_23 * fconvert.t(var_e0)
                                + x87_r3_38 * fconvert.t(var_b8_1:4.d)
                                + x87_r3_37 * fconvert.t(var_98_1:4.d)))) * fconvert.t(256.0))
                            uint32_t ecx_16 = zx.d(eax_29.b)
                            uint32_t ecx_18 = zx.d(eax_30.b)
                            int32_t edi_6 = eax_29 s>> 8
                            int32_t eax_31 = eax_30 s>> 8
                            int32_t var_8_1 = edi_6 + 1
                            int32_t var_c_1 = eax_31
                            int32_t ecx_20 = eax_31 + 1
                            
                            if (edi_6 s< 0)
                                edi_6 = 0
                            else if (edi_6 s> eax_8)
                                edi_6 = eax_8
                            
                            if (eax_31 s< 0)
                                eax_31 = 0
                                var_c_1 = 0
                            else if (eax_31 s> eax_10 - 1)
                                eax_31 = eax_10 - 1
                                var_c_1 = eax_10 - 1
                            
                            if (var_8_1 s>= 0)
                                if (var_8_1 s> eax_8)
                                    var_8_1 = eax_8
                                
                                eax_31 = var_c_1
                            else
                                var_8_1 = 0
                            
                            if (ecx_20 s< 0)
                                ecx_20 = 0
                            else if (ecx_20 s> eax_10 - 1)
                                ecx_20 = eax_10 - 1
                            
                            void* eax_33 = eax_31 * eax_5
                            int32_t edx_19 = *(eax_33 + (edi_6 << 2) + ebx_3)
                            int32_t edx_22 = var_8_1 * 4
                            int32_t ecx_23 = *(ecx_20 * eax_5 + edx_22 + ebx_3)
                            uint32_t edi_7 = zx.d(arg9:3.b)
                            uint32_t eax_36 = zx.d(arg6:3.b)
                            uint32_t ecx_24 = zx.d(arg8:3.b)
                            int32_t var_1c_1
                            var_1c_1.b = *(((zx.d(edx_19.b) * eax_36) s>> 8) + ecx_24 + esi_1)
                            uint32_t edx_28 = zx.d(arg10:3.b)
                            uint32_t ebx_8 = zx.d(arg7:3.b)
                            var_1c_1:1.b = *(((zx.d(edx_19:1.b) * edi_7) s>> 8) + edx_28 + esi_1)
                            uint32_t edx_30 = zx.d(arg14:3.b)
                            uint32_t ebx_13 = zx.d(edx_11)
                            var_1c_1:2.b = *(((zx.d(var_1c_1:2.b) * edx_30) s>> 8) + ebx_8 + esi_1)
                            uint32_t edx_32 = zx.d(edx_9)
                            var_1c_1:3.b = *(((zx.d(var_1c_1:3.b) * edx_32) s>> 8) + ebx_13 + esi_1)
                            int32_t var_18_1
                            var_18_1.b = *(((zx.d((*(eax_33 + edx_22 + ebx_3)).b) * eax_36) s>> 8)
                                + ecx_24 + esi_1)
                            var_18_1:1.b = *(((zx.d(var_18_1:1.b) * edi_7) s>> 8) + edx_28 + esi_1)
                            var_18_1:2.b = *(((zx.d(var_18_1:2.b) * edx_30) s>> 8) + ebx_8 + esi_1)
                            var_18_1:3.b = *(((zx.d(var_18_1:3.b) * edx_32) s>> 8) + ebx_13 + esi_1)
                            int32_t var_8_2
                            var_8_2.b = *(((zx.d(ecx_23.b) * eax_36) s>> 8) + ecx_24 + esi_1)
                            int32_t ebx_19 = zx.d(var_8_2:3.b) * edx_32
                            var_8_2:1.b = *(((zx.d(var_8_2:1.b) * edi_7) s>> 8) + edx_28 + esi_1)
                            var_8_2:2.b = *(((zx.d(var_8_2:2.b) * edx_30) s>> 8) + ebx_8 + esi_1)
                            int32_t ebx_21
                            ebx_21.b = *((ebx_19 s>> 8) + ebx_13 + esi_1)
                            var_8_2:3.b = ebx_21.b
                            int32_t var_c_2
                            var_c_2.b = *(((zx.d(ecx_23.b) * eax_36) s>> 8) + ecx_24 + esi_1)
                            int32_t ecx_30 = zx.d(var_c_2:2.b) * edx_30
                            var_c_2:1.b = *(((zx.d(ecx_23:1.b) * edi_7) s>> 8) + edx_28 + esi_1)
                            int32_t ecx_34 = zx.d(var_c_2:3.b) * edx_32
                            var_c_2:2.b = *((ecx_30 s>> 8) + ebx_8 + esi_1)
                            uint32_t eax_40 = zx.d(var_1c_1.b)
                            int32_t edi_12 = (((zx.d(var_18_1.b) - eax_40) * ecx_16) s>> 8) + eax_40
                            uint32_t eax_41 = zx.d(var_1c_1:1.b)
                            var_c_2:3.b = *((ecx_34 s>> 8) + ebx_13 + esi_1)
                            uint32_t edx_71 = zx.d(var_1c_1:2.b)
                            int32_t ecx_41 =
                                (((zx.d(var_18_1:1.b) - eax_41) * ecx_16) s>> 8) + eax_41
                            int32_t eax_46 =
                                (((zx.d(var_18_1:2.b) - edx_71) * ecx_16) s>> 8) + edx_71
                            uint32_t eax_47 = zx.d(var_1c_1:3.b)
                            uint32_t ebx_27 = zx.d(var_8_2:3.b)
                            int32_t edx_76 =
                                (((zx.d(var_18_1:3.b) - eax_47) * ecx_16) s>> 8) + eax_47
                            i_2 = ((((((zx.d(var_c_2:3.b) - ebx_27) * ecx_16) s>> 8) - edx_76
                                + ebx_27) * ecx_18) s>> 8) + edx_76
                            uint32_t edx_77 = zx.d(var_8_2.b)
                            long double x87_r3_49 = fconvert.t(var_c4)
                            uint32_t edi_13 = zx.d(var_8_2:1.b)
                            *var_30 += (((((((((zx.d(var_c_2.b) - edx_77) * ecx_16) s>> 8) - edi_12
                                + edx_77) * ecx_18) s>> 8) - zx.d(*var_30) + edi_12) * i_2) s>> 8).b
                            char* edx_80
                            edx_80.b = var_30[1]
                            edi_4 = var_30
                            uint32_t ecx_42 = zx.d(var_8_2:2.b)
                            edi_4[1] = (((((((((zx.d(var_c_2:1.b) - edi_13) * ecx_16) s>> 8)
                                - ecx_41 + edi_13) * ecx_18) s>> 8) - zx.d(edx_80.b) + ecx_41) * i_2)
                                s>> 8).b + edx_80.b
                            edx_80.b = edi_4[2]
                            var_10_2 = fconvert.s(x87_r3_38 + x87_r3_49)
                            long double x87_r3_51 = fconvert.t(var_78_1)
                            long double x87_r5_24 = x87_r5_23 + x87_r3_51
                            x87_r5_23 = x87_r3_51
                            var_4_1 = fconvert.s(x87_r5_24)
                            long double x87_r3_53 = fconvert.t(var_6c_1)
                            x87_r6_38 = x87_r3_53
                            var_14_1 = fconvert.s(x87_r3_37 + x87_r3_53)
                            x87_r7_63 = x87_r3_49
                            var_28_1 = fconvert.s(x87_r2_38 + fconvert.t(var_a4))
                            edi_4[2] = (((((((((zx.d(var_c_2:2.b) - ecx_42) * ecx_16) s>> 8)
                                - eax_46 + ecx_42) * ecx_18) s>> 8) - zx.d(edx_80.b) + eax_46) * i_2)
                                s>> 8).b + edx_80.b
                            ebx_3 = var_d0:4.d
                            var_50_1 = fconvert.s(fconvert.t(var_50_1) + fconvert.t(var_60_1))
                            x87_r4_42 = float.t(0)
                        
                        edi_4 = &edi_4[4]
                        j = j_1
                        j_1 -= 1
                        x87_r7_60 = x87_r6_38
                        var_30 = edi_4
                        x87_r4_30 = x87_r4_42
                        x87_r6_35 = x87_r7_63
                    while (j != 1)
                    j_2 = j_3
                    ecx_14 = var_88_1
                
                edi_4 = &edi_4[ecx_14]
                i = i_1
                i_1 -= 1
                var_30 = edi_4
                var_4c_1 = fconvert.s(fconvert.t(var_4c_1) + fconvert.t(var_c0))
                var_44_1 = fconvert.s(fconvert.t(var_44_1) + fconvert.t(var_74_1))
                var_3c_1 = fconvert.s(fconvert.t(var_3c_1) + fconvert.t(var_68_1))
                var_40_1 = fconvert.s(fconvert.t(var_a0) + fconvert.t(var_40_1))
                var_24_2 = fconvert.s(fconvert.t(var_5c_1) + fconvert.t(var_24_2))
            while (i != 1)
        
        return i_2

return eax_1
