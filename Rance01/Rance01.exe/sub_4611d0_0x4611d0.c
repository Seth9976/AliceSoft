// 函数: sub_4611d0
// 地址: 0x4611d0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

float* eax = arg11
float* ebx = arg8
float* edx = arg6
float* edi = arg10
arg10 = fconvert.s(fconvert.t(*edx))
float var_8 = fconvert.s(fconvert.t(edx[1]))
arg11 = fconvert.s(fconvert.t(*ebx))
float var_10 = fconvert.s(fconvert.t(ebx[1]))
float var_14 = fconvert.s(fconvert.t(*edi))
float var_c = fconvert.s(fconvert.t(edi[1]))
arg8 = fconvert.s(fconvert.t(*eax))
float* eax_1 = arg7
float var_18 = fconvert.s(fconvert.t(eax[1]))
float var_1c = fconvert.s(fconvert.t(*eax_1))
float* eax_2 = arg9
float var_60 = fconvert.s(fconvert.t(eax_1[1]))
float var_2c = fconvert.s(fconvert.t(*eax_2))
float var_48 = fconvert.s(fconvert.t(eax_2[1]))
float var_68 = fconvert.s(fconvert.t(*arg3))
float var_64 = fconvert.s(fconvert.t(arg3[1]))
long double x87_r7_14 = fconvert.t(var_10)
long double x87_r5 = fconvert.t(var_c)
long double x87_r3_2 = fconvert.t(var_14)
double var_5c = fconvert.d(x87_r3_2)
long double x87_r1 = fconvert.t(arg11)
double var_9c = fconvert.d(x87_r1)
long double x87_r2_5 = fconvert.t(var_8)
long double x87_r1_6 = fconvert.t(arg10)
float var_24 = fconvert.s(x87_r1_6 - fconvert.t(var_5c))
long double x87_r2_15 = fconvert.t(var_18)
long double x87_r2_17 = fconvert.t(arg8)
float var_cc = fconvert.s(fconvert.t(var_5c) - x87_r2_17)
var_5c.d = fconvert.s(x87_r7_14 - fconvert.t(fconvert.d(x87_r2_15)))
var_5c:4.d = fconvert.s(fconvert.t(fconvert.d(x87_r2_17)) - fconvert.t(var_9c))
float var_54 = fconvert.s(x87_r2_15 * fconvert.t(arg11) - x87_r7_14 * fconvert.t(arg8))
long double x87_r5_2 = fconvert.t(fconvert.s(fconvert.t(var_9c) - fconvert.t(fconvert.d(x87_r1_6))))
long double x87_r3_8 = fconvert.t(fconvert.s(fconvert.t(fconvert.d(x87_r2_5)) - x87_r7_14))
long double x87_r2_22 =
    fconvert.t(fconvert.s(x87_r7_14 * fconvert.t(arg10) - fconvert.t(arg11) * fconvert.t(var_8)))
long double x87_r2_24 = fconvert.t(var_5c:4.d)
long double x87_r1_17 = fconvert.t(var_5c.d)
long double x87_r2_26 = fconvert.t(fconvert.s(x87_r5_2 * x87_r5 + x87_r3_8 * x87_r3_2 + x87_r2_22))
long double x87_r1_20 = fconvert.t(9.9999997473787516e-05)
x87_r1_20 - x87_r2_26
eax_2.w = (x87_r1_20 < x87_r2_26 ? 1 : 0) << 8
    | (is_unordered.t(x87_r1_20, x87_r2_26) ? 1 : 0) << 0xa
    | (x87_r1_20 == x87_r2_26 ? 1 : 0) << 0xe | 0x800

if ((eax_2:1.b & 0x41) != 0)
    long double x87_r0_5 =
        fconvert.t(fconvert.s(x87_r3_2 * x87_r1_17 + x87_r5 * x87_r2_24 + fconvert.t(var_54)))
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
        float var_40_1 = fconvert.s(fconvert.t(var_24) * x87_r1_22)
        float var_38_1 = fconvert.s(x87_r3_8 * x87_r1_22)
        float var_34_1 = fconvert.s(x87_r5_2 * x87_r1_22)
        long double x87_r4_9 = float.t(1)
        long double x87_r4_10 = fconvert.t(fconvert.s(x87_r4_9 / x87_r4_9))
        float var_74 = fconvert.s(fconvert.t(fconvert.s(x87_r2_15 - x87_r5)) * x87_r4_10)
        float var_70 = fconvert.s(fconvert.t(var_cc) * x87_r4_10)
        float var_28_1 = fconvert.s(x87_r1_17 * x87_r4_10)
        float var_24_1 = fconvert.s(x87_r2_24 * x87_r4_10)
        int32_t eax_4 = (*(*arg2 + 8))(0, 0)
        var_9c:4.d = (*(*arg2 + 0x1c))()
        double var_84_1
        var_84_1:4.d = (*(*arg2 + 0x10))() - 1
        double var_7c_1
        var_7c_1:4.d = (*(*arg2 + 0x14))() - 1
        float var_a4 = fconvert.s(fconvert.t(var_1c) / fconvert.t(*(arg6 i+ 0xc)))
        float var_a0 = fconvert.s(fconvert.t(var_2c) / fconvert.t(ebx[3]))
        float var_a8 = fconvert.s(fconvert.t(var_68) / fconvert.t(edi[3]))
        float var_b8 = fconvert.s(fconvert.t(var_60) / fconvert.t(*(arg6 i+ 0xc)))
        float var_b0 = fconvert.s(fconvert.t(var_48) / fconvert.t(ebx[3]))
        float var_c0 = fconvert.s(fconvert.t(var_64) / fconvert.t(edi[3]))
        *(arg6 i+ 0xc)
        long double x87_r6_7 = float.t(1)
        float var_c4 = fconvert.s(x87_r6_7 / fconvert.t(ebx[3]))
        float var_bc = fconvert.s(x87_r6_7 / fconvert.t(edi[3]))
        long double x87_r7_39 = fconvert.t(arg10)
        long double x87_r6_11 = fconvert.t(arg11)
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
        long double x87_r4_17 = fconvert.t(arg8)
        x87_r4_17 - x87_r5_13
        eax_13.w = (x87_r4_17 < x87_r5_13 ? 1 : 0) << 8
            | (is_unordered.t(x87_r4_17, x87_r5_13) ? 1 : 0) << 0xa
            | (x87_r4_17 == x87_r5_13 ? 1 : 0) << 0xe | 0x2000
        long double x87_r4_18
        long double x87_r5_14
        
        if ((eax_13:1.b & 0x41) != 0)
            arg11 = fconvert.s(x87_r4_17)
            x87_r4_18 = x87_r5_13
            x87_r5_14 = x87_r4_17
        else
            x87_r4_18 = x87_r5_13
            x87_r5_14 = x87_r4_17
            arg11 = fconvert.s(x87_r4_18)
        
        long double x87_r3_13 = fconvert.t(arg6)
        long double x87_r2_33 = fconvert.t(arg11)
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
        
        long double x87_r7_44 = fconvert.t(fconvert.s(float.t(arg5[2] i+ esi_1)))
        long double x87_r6_15 = fconvert.t(fconvert.s(x87_r7_42))
        x87_r6_15 - x87_r7_44
        float eax_16
        eax_16.w = (x87_r6_15 < x87_r7_44 ? 1 : 0) << 8
            | (is_unordered.t(x87_r6_15, x87_r7_44) ? 1 : 0) << 0xa
            | (x87_r6_15 == x87_r7_44 ? 1 : 0) << 0xe | 0x3000
        
        if ((eax_16:1.b & 0x41) == 0)
            x87_r7_44 = x87_r6_15
        
        long double x87_r7_46 = fconvert.t(var_8)
        long double x87_r6_16 = fconvert.t(var_10)
        int32_t esi_2 = sub_70c710(fconvert.t(fconvert.s(x87_r7_44)))
        x87_r6_16 - x87_r7_46
        int32_t eax_17
        eax_17.w = (x87_r6_16 < x87_r7_46 ? 1 : 0) << 8
            | (is_unordered.t(x87_r6_16, x87_r7_46) ? 1 : 0) << 0xa
            | (x87_r6_16 == x87_r7_46 ? 1 : 0) << 0xe | 0x3000
        long double x87_r6_17
        long double x87_r7_47
        
        if ((eax_17:1.b & 0x41) != 0)
            arg11 = fconvert.s(x87_r6_16)
            x87_r6_17 = x87_r7_46
            x87_r7_47 = x87_r6_16
        else
            x87_r6_17 = x87_r7_46
            x87_r7_47 = x87_r6_16
            arg11 = fconvert.s(x87_r6_17)
        
        long double x87_r5_16 = fconvert.t(var_c)
        long double x87_r4_20 = fconvert.t(var_18)
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
        
        long double x87_r3_17 = fconvert.t(arg11)
        long double x87_r2_35 = fconvert.t(arg10)
        x87_r2_35 - x87_r3_17
        eax_17.w = (x87_r2_35 < x87_r3_17 ? 1 : 0) << 8
            | (is_unordered.t(x87_r2_35, x87_r3_17) ? 1 : 0) << 0xa
            | (x87_r2_35 == x87_r3_17 ? 1 : 0) << 0xe | 0x1000
        
        if ((eax_17:1.b & 0x41) != 0)
            x87_r4_21 = x87_r2_35
        else
            x87_r3_17 = x87_r2_35
        
        float ecx_4 = arg5[1]
        long double x87_r3_19 = fconvert.t(fconvert.s(float.t(ecx_4)))
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
        int32_t ebx_1 = sub_70c710(fconvert.t(fconvert.s(x87_r3_19)))
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
        
        long double x87_r7_51 = fconvert.t(fconvert.s(float.t(arg5[3] i+ ecx_4)))
        long double x87_r6_20 = fconvert.t(fconvert.s(x87_r7_49))
        x87_r6_20 - x87_r7_51
        eax_18.w = (x87_r6_20 < x87_r7_51 ? 1 : 0) << 8
            | (is_unordered.t(x87_r6_20, x87_r7_51) ? 1 : 0) << 0xa
            | (x87_r6_20 == x87_r7_51 ? 1 : 0) << 0xe | 0x3000
        
        if ((eax_18:1.b & 0x41) == 0)
            x87_r7_51 = x87_r6_20
        
        int32_t j_3 = esi_2 i- arg6
        int32_t i_2 = sub_70c710(fconvert.t(fconvert.s(x87_r7_51))) - ebx_1
        int32_t* ebx_2 = (*(*arg4 + 8))(arg6, ebx_1)
        int32_t j_2 = j_3
        long double x87_r7_54 = fconvert.t(fconvert.s(float.t(ebx_1)))
        int32_t edi_4 = (*(*arg4 + 0x1c))() - (j_2 << 2)
        arg9 = fconvert.s(x87_r7_54 * fconvert.t(var_8c) + fconvert.t(fconvert.s(
            fconvert.t(fconvert.s(x87_r1 * x87_r5 - x87_r3_2 * x87_r7_14)) * x87_r1_22)))
        float var_8_1 = fconvert.s(x87_r7_54 * fconvert.t(var_40_1) + fconvert.t(fconvert.s(
            fconvert.t(fconvert.s(x87_r2_5 * x87_r3_2 - x87_r1_6 * x87_r5)) * x87_r1_22)))
        float var_c_1 = fconvert.s(x87_r7_54 * fconvert.t(var_34_1)
            + fconvert.t(fconvert.s(x87_r1_22 * x87_r2_22)))
        float var_10_1 = fconvert.s(fconvert.t(var_70) * x87_r7_54 + fconvert.t(fconvert.s(
            fconvert.t(fconvert.s(x87_r2_17 * x87_r5 - x87_r2_15 * x87_r3_2)) * x87_r4_10)))
        float var_14_1 = fconvert.s(x87_r7_54 * fconvert.t(var_24_1)
            + fconvert.t(fconvert.s(x87_r4_10 * fconvert.t(var_54))))
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
                arg11 = fconvert.s(fconvert.t(fconvert.s(x87_r7_58 * x87_r5_19)) + fconvert.t(arg9))
                arg10 =
                    fconvert.s(fconvert.t(fconvert.s(x87_r7_58 * x87_r4_24)) + fconvert.t(var_8_1))
                arg8 =
                    fconvert.s(fconvert.t(fconvert.s(x87_r7_58 * x87_r3_22)) + fconvert.t(var_c_1))
                arg7 = fconvert.s(fconvert.t(fconvert.s(x87_r7_58 * fconvert.t(var_74)))
                    + fconvert.t(var_10_1))
                arg6 = fconvert.s(fconvert.t(fconvert.s(x87_r7_58 * fconvert.t(var_28_1)))
                    + fconvert.t(var_14_1))
                
                if (j_2 s> 0)
                    int32_t j_1 = j_2
                    int32_t j
                    
                    do
                        long double x87_r3_37 = fconvert.t(arg10)
                        x87_r3_37 - x87_r4_30
                        j_2.w = (x87_r3_37 < x87_r4_30 ? 1 : 0) << 8
                            | (is_unordered.t(x87_r3_37, x87_r4_30) ? 1 : 0) << 0xa
                            | (x87_r3_37 == x87_r4_30 ? 1 : 0) << 0xe | 0x1800
                        long double x87_r2_38 = fconvert.t(arg8)
                        long double x87_r1_35 = fconvert.t(arg7)
                        bool p_6 = unimplemented  {test ah, 0x5}
                        long double x87_r4_42
                        long double x87_r6_38
                        long double x87_r7_63
                        
                        if (not(p_6))
                        label_461bea:
                            x87_r5_23 = x87_r1_35
                        label_461bf5:
                            arg11 = fconvert.s(fconvert.t(arg11) + x87_r6_35)
                            arg10 = fconvert.s(x87_r3_37 + x87_r5_23)
                            arg8 = fconvert.s(x87_r2_38 + x87_r7_60)
                            arg7 = fconvert.s(x87_r4_30 + fconvert.t(var_74))
                            arg6 = fconvert.s(fconvert.t(arg6) + fconvert.t(var_28_1))
                            x87_r7_63 = x87_r6_35
                            x87_r4_42 = float.t(0)
                            x87_r6_38 = x87_r7_60
                        else
                            x87_r2_38 - x87_r4_30
                            j_2.w = (x87_r2_38 < x87_r4_30 ? 1 : 0) << 8
                                | (is_unordered.t(x87_r2_38, x87_r4_30) ? 1 : 0) << 0xa
                                | (x87_r2_38 == x87_r4_30 ? 1 : 0) << 0xe | 0x800
                            bool p_7 = unimplemented  {test ah, 0x5}
                            
                            if (not(p_7))
                                x87_r5_23 = x87_r2_38
                                x87_r2_38 = x87_r4_30
                                x87_r4_30 = x87_r1_35
                                goto label_461bf5
                            
                            x87_r1_35 - x87_r4_30
                            j_2.w = (x87_r1_35 < x87_r4_30 ? 1 : 0) << 8
                                | (is_unordered.t(x87_r1_35, x87_r4_30) ? 1 : 0) << 0xa
                                | (x87_r1_35 == x87_r4_30 ? 1 : 0) << 0xe | 0x800
                            bool p_8 = unimplemented  {test ah, 0x5}
                            
                            if (not(p_8))
                                goto label_461bea
                            
                            long double x87_r1_37 = x87_r4_30
                            x87_r4_30 = x87_r1_35
                            long double temp3_1 = fconvert.t(arg6)
                            x87_r1_37 - temp3_1
                            j_2.w = (x87_r1_37 < temp3_1 ? 1 : 0) << 8
                                | (is_unordered.t(x87_r1_37, temp3_1) ? 1 : 0) << 0xa
                                | (x87_r1_37 == temp3_1 ? 1 : 0) << 0xe | 0x1000
                            
                            if ((j_2:1.b & 0x41) == 0)
                                goto label_461bf5
                            
                            long double x87_r3_38 = fconvert.t(arg11)
                            long double x87_r2_44 = float.t(1)
                            long double x87_r2_49 = fconvert.t(fconvert.s(x87_r2_44 / x87_r2_44))
                            int32_t esi_4 = sub_70c710(fconvert.t(fconvert.s((
                                x87_r5_23 * fconvert.t(var_a0) + x87_r3_38 * fconvert.t(var_a4)
                                + x87_r3_37 * fconvert.t(var_a8)) * x87_r2_49)))
                            int32_t eax_25 = sub_70c710(fconvert.t(fconvert.s(x87_r2_49 * (
                                x87_r5_23 * fconvert.t(var_b0) + x87_r3_38 * fconvert.t(var_b8)
                                + x87_r3_37 * fconvert.t(var_c0)))))
                            
                            if (esi_4 s>= 0)
                                int32_t ecx_9 = var_84_1:4.d
                                
                                if (esi_4 s> ecx_9)
                                    esi_4 = ecx_9
                            else
                                esi_4 = 0
                            
                            if (eax_25 s>= 0)
                                int32_t ecx_10 = var_7c_1:4.d
                                
                                if (eax_25 s> ecx_10)
                                    eax_25 = ecx_10
                            else
                                eax_25 = 0
                            
                            long double x87_r3_48 = fconvert.t(var_90)
                            arg11 = fconvert.s(x87_r3_38 + x87_r3_48)
                            long double x87_r3_50 = fconvert.t(var_44_1)
                            long double x87_r5_24 = x87_r5_23 + x87_r3_50
                            x87_r5_23 = x87_r3_50
                            arg10 = fconvert.s(x87_r5_24)
                            long double x87_r3_52 = fconvert.t(var_38_1)
                            *ebx_2 = *(eax_25 * var_9c:4.d + eax_4 + (esi_4 << 2))
                            x87_r6_38 = x87_r3_52
                            arg8 = fconvert.s(x87_r3_37 + x87_r3_52)
                            x87_r7_63 = x87_r3_48
                            arg7 = fconvert.s(x87_r2_38 + fconvert.t(var_74))
                            arg6 = fconvert.s(fconvert.t(arg6) + fconvert.t(var_28_1))
                            x87_r4_42 = float.t(0)
                        
                        ebx_2 = &ebx_2[1]
                        j = j_1
                        j_1 -= 1
                        x87_r7_60 = x87_r6_38
                        x87_r4_30 = x87_r4_42
                        x87_r6_35 = x87_r7_63
                    while (j != 1)
                    j_2 = j_3
                
                ebx_2 += edi_4
                i = i_1
                i_1 -= 1
                arg9 = fconvert.s(fconvert.t(arg9) + fconvert.t(var_8c))
                var_8_1 = fconvert.s(fconvert.t(var_8_1) + fconvert.t(var_40_1))
                var_c_1 = fconvert.s(fconvert.t(var_c_1) + fconvert.t(var_34_1))
                var_10_1 = fconvert.s(fconvert.t(var_70) + fconvert.t(var_10_1))
                var_14_1 = fconvert.s(fconvert.t(var_24_1) + fconvert.t(var_14_1))
            while (i != 1)
        
        return j_2

return eax_2
