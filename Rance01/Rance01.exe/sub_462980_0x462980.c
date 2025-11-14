// 函数: sub_462980
// 地址: 0x462980
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

float* eax = arg10
float* ebx = arg6
float* edi = arg9
arg9 = fconvert.s(fconvert.t(*ebx))
float* ebx_1 = arg8
float var_8 = fconvert.s(fconvert.t(ebx[1]))
arg10 = fconvert.s(fconvert.t(*ebx_1))
float var_14 = fconvert.s(fconvert.t(ebx_1[1]))
float var_18 = fconvert.s(fconvert.t(*edi))
float var_20 = fconvert.s(fconvert.t(edi[1]))
float var_c = fconvert.s(fconvert.t(*eax))
float* eax_1 = arg7
float var_1c = fconvert.s(fconvert.t(eax[1]))
float var_2c = fconvert.s(fconvert.t(*eax_1))
float var_54 = fconvert.s(fconvert.t(eax_1[1]))
float var_24 = fconvert.s(fconvert.t(*arg2))
float var_70 = fconvert.s(fconvert.t(arg2[1]))
float var_28 = fconvert.s(fconvert.t(*arg3))
float var_58 = fconvert.s(fconvert.t(arg3[1]))
long double x87_r7_14 = fconvert.t(var_14)
long double x87_r5 = fconvert.t(var_20)
long double x87_r3_2 = fconvert.t(var_18)
double var_6c = fconvert.d(x87_r3_2)
long double x87_r1 = fconvert.t(arg10)
double var_b4 = fconvert.d(x87_r1)
long double x87_r2_5 = fconvert.t(var_8)
long double x87_r1_6 = fconvert.t(arg9)
float var_34 = fconvert.s(x87_r1_6 - fconvert.t(var_6c))
long double x87_r2_15 = fconvert.t(var_1c)
long double x87_r2_17 = fconvert.t(var_c)
float var_e8 = fconvert.s(fconvert.t(var_6c) - x87_r2_17)
var_6c.d = fconvert.s(x87_r7_14 - fconvert.t(fconvert.d(x87_r2_15)))
var_6c:4.d = fconvert.s(fconvert.t(fconvert.d(x87_r2_17)) - fconvert.t(var_b4))
float var_64 = fconvert.s(x87_r2_15 * fconvert.t(arg10) - x87_r7_14 * fconvert.t(var_c))
long double x87_r5_2 = fconvert.t(fconvert.s(fconvert.t(var_b4) - fconvert.t(fconvert.d(x87_r1_6))))
long double x87_r3_8 = fconvert.t(fconvert.s(fconvert.t(fconvert.d(x87_r2_5)) - x87_r7_14))
long double x87_r2_22 =
    fconvert.t(fconvert.s(x87_r7_14 * fconvert.t(arg9) - fconvert.t(arg10) * fconvert.t(var_8)))
long double x87_r2_24 = fconvert.t(var_6c:4.d)
long double x87_r1_17 = fconvert.t(var_6c.d)
long double x87_r2_26 = fconvert.t(fconvert.s(x87_r5_2 * x87_r5 + x87_r3_8 * x87_r3_2 + x87_r2_22))
long double x87_r1_20 = fconvert.t(9.9999997473787516e-05)
x87_r1_20 - x87_r2_26
eax_1.w = (x87_r1_20 < x87_r2_26 ? 1 : 0) << 8
    | (is_unordered.t(x87_r1_20, x87_r2_26) ? 1 : 0) << 0xa
    | (x87_r1_20 == x87_r2_26 ? 1 : 0) << 0xe | 0x800

if ((eax_1:1.b & 0x41) != 0)
    long double x87_r0_5 =
        fconvert.t(fconvert.s(x87_r3_2 * x87_r1_17 + x87_r5 * x87_r2_24 + fconvert.t(var_64)))
    x87_r0_5 - x87_r1_20
    eax_1.w = (x87_r0_5 < x87_r1_20 ? 1 : 0) << 8
        | (is_unordered.t(x87_r0_5, x87_r1_20) ? 1 : 0) << 0xa
        | (x87_r0_5 == x87_r1_20 ? 1 : 0) << 0xe | 0x1000
    bool p_1 = unimplemented  {test ah, 0x5}
    
    if (p_1)
        long double x87_r1_21 = float.t(1)
        long double x87_r1_22 = fconvert.t(fconvert.s(x87_r1_21 / x87_r1_21))
        float var_a8 = fconvert.s(fconvert.t(fconvert.s(x87_r7_14 - x87_r5)) * x87_r1_22)
        float var_a4 = fconvert.s(fconvert.t(fconvert.s(x87_r3_2 - x87_r1)) * x87_r1_22)
        float var_44_1 = fconvert.s(fconvert.t(fconvert.s(x87_r5 - x87_r2_5)) * x87_r1_22)
        float var_40_1 = fconvert.s(fconvert.t(var_34) * x87_r1_22)
        float var_50_1 = fconvert.s(x87_r3_8 * x87_r1_22)
        float var_4c_1 = fconvert.s(x87_r5_2 * x87_r1_22)
        long double x87_r4_9 = float.t(1)
        long double x87_r4_10 = fconvert.t(fconvert.s(x87_r4_9 / x87_r4_9))
        float var_90 = fconvert.s(fconvert.t(fconvert.s(x87_r2_15 - x87_r5)) * x87_r4_10)
        float var_8c = fconvert.s(fconvert.t(var_e8) * x87_r4_10)
        float var_38_1 = fconvert.s(x87_r1_17 * x87_r4_10)
        float var_34_1 = fconvert.s(x87_r2_24 * x87_r4_10)
        int32_t ebx_2 = (*(*arg11 + 8))(0, 0)
        var_b4:4.d = ebx_2
        int32_t eax_5 = (*(*arg11 + 0x1c))()
        int32_t eax_8 = (*(*arg11 + 0x10))() - 1
        int32_t eax_10 = (*(*arg11 + 0x14))()
        float var_c4 = fconvert.s(fconvert.t(var_2c) / fconvert.t(*(arg6 i+ 0xc)))
        float var_bc = fconvert.s(fconvert.t(var_24) / fconvert.t(*(arg8 i+ 0xc)))
        float var_cc = fconvert.s(fconvert.t(var_28) / fconvert.t(edi[3]))
        float var_dc = fconvert.s(fconvert.t(var_54) / fconvert.t(*(arg6 i+ 0xc)))
        float var_d4 = fconvert.s(fconvert.t(var_70) / fconvert.t(*(arg8 i+ 0xc)))
        float var_c0 = fconvert.s(fconvert.t(var_58) / fconvert.t(edi[3]))
        *(arg6 i+ 0xc)
        long double x87_r6_7 = float.t(1)
        float var_b8 = fconvert.s(x87_r6_7 / fconvert.t(*(arg8 i+ 0xc)))
        float var_d0 = fconvert.s(x87_r6_7 / fconvert.t(edi[3]))
        long double x87_r7_39 = fconvert.t(arg9)
        long double x87_r6_11 = fconvert.t(arg10)
        x87_r6_11 - x87_r7_39
        float eax_12
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
        
        long double x87_r5_13 = fconvert.t(var_18)
        long double x87_r4_17 = fconvert.t(var_c)
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
        
        float esi_1 = *arg5
        long double x87_r3_15 = fconvert.t(fconvert.s(float.t(esi_1)))
        long double x87_r2_34 = fconvert.t(fconvert.s(x87_r3_13))
        x87_r2_34 - x87_r3_15
        eax_12.w = (x87_r2_34 < x87_r3_15 ? 1 : 0) << 8
            | (is_unordered.t(x87_r2_34, x87_r3_15) ? 1 : 0) << 0xa
            | (x87_r2_34 == x87_r3_15 ? 1 : 0) << 0xe | 0x1000
        bool p_2 = unimplemented  {test ah, 0x5}
        
        if (p_2)
            x87_r4_18 = x87_r2_34
        else
            x87_r3_15 = x87_r2_34
        
        x87_r6_12 - x87_r7_40
        arg6 = sub_70c710(fconvert.t(fconvert.s(x87_r3_15)))
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
        
        long double x87_r7_44 = fconvert.t(fconvert.s(float.t(arg5[2] i+ esi_1)))
        long double x87_r6_15 = fconvert.t(fconvert.s(x87_r7_42))
        x87_r6_15 - x87_r7_44
        float eax_15
        eax_15.w = (x87_r6_15 < x87_r7_44 ? 1 : 0) << 8
            | (is_unordered.t(x87_r6_15, x87_r7_44) ? 1 : 0) << 0xa
            | (x87_r6_15 == x87_r7_44 ? 1 : 0) << 0xe | 0x3000
        
        if ((eax_15:1.b & 0x41) == 0)
            x87_r7_44 = x87_r6_15
        
        long double x87_r7_46 = fconvert.t(var_8)
        long double x87_r6_16 = fconvert.t(var_14)
        int32_t esi_2 = sub_70c710(fconvert.t(fconvert.s(x87_r7_44)))
        x87_r6_16 - x87_r7_46
        int32_t eax_16
        eax_16.w = (x87_r6_16 < x87_r7_46 ? 1 : 0) << 8
            | (is_unordered.t(x87_r6_16, x87_r7_46) ? 1 : 0) << 0xa
            | (x87_r6_16 == x87_r7_46 ? 1 : 0) << 0xe | 0x3000
        long double x87_r6_17
        long double x87_r7_47
        
        if ((eax_16:1.b & 0x41) != 0)
            arg8 = fconvert.s(x87_r6_16)
            x87_r6_17 = x87_r7_46
            x87_r7_47 = x87_r6_16
        else
            x87_r6_17 = x87_r7_46
            x87_r7_47 = x87_r6_16
            arg8 = fconvert.s(x87_r6_17)
        
        long double x87_r5_16 = fconvert.t(var_20)
        long double x87_r4_20 = fconvert.t(var_1c)
        x87_r4_20 - x87_r5_16
        eax_16.w = (x87_r4_20 < x87_r5_16 ? 1 : 0) << 8
            | (is_unordered.t(x87_r4_20, x87_r5_16) ? 1 : 0) << 0xa
            | (x87_r4_20 == x87_r5_16 ? 1 : 0) << 0xe | 0x2000
        long double x87_r4_21
        long double x87_r5_17
        
        if ((eax_16:1.b & 0x41) != 0)
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
        eax_16.w = (x87_r2_35 < x87_r3_17 ? 1 : 0) << 8
            | (is_unordered.t(x87_r2_35, x87_r3_17) ? 1 : 0) << 0xa
            | (x87_r2_35 == x87_r3_17 ? 1 : 0) << 0xe | 0x1000
        
        if ((eax_16:1.b & 0x41) != 0)
            x87_r4_21 = x87_r2_35
        else
            x87_r3_17 = x87_r2_35
        
        float ecx_5 = arg5[1]
        long double x87_r3_19 = fconvert.t(fconvert.s(float.t(ecx_5)))
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
        int32_t edi_2 = sub_70c710(fconvert.t(fconvert.s(x87_r3_19)))
        arg7 = edi_2
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
        
        long double x87_r7_51 = fconvert.t(fconvert.s(float.t(arg5[3] i+ ecx_5)))
        long double x87_r6_20 = fconvert.t(fconvert.s(x87_r7_49))
        x87_r6_20 - x87_r7_51
        float eax_19
        eax_19.w = (x87_r6_20 < x87_r7_51 ? 1 : 0) << 8
            | (is_unordered.t(x87_r6_20, x87_r7_51) ? 1 : 0) << 0xa
            | (x87_r6_20 == x87_r7_51 ? 1 : 0) << 0xe | 0x3000
        
        if ((eax_19:1.b & 0x41) == 0)
            x87_r7_51 = x87_r6_20
        
        int32_t j_3 = esi_2 i- arg6
        int32_t i_2 = sub_70c710(fconvert.t(fconvert.s(x87_r7_51))) - edi_2
        arg10 = (*(*arg4 + 8))(arg6, arg7)
        int32_t j_2 = j_3
        float eax_25 = (*(*arg4 + 0x1c))() - (j_2 << 2)
        long double x87_r7_54 = fconvert.t(fconvert.s(float.t(arg7)))
        float var_64_1 = eax_25
        float var_c_1 = fconvert.s(x87_r7_54 * fconvert.t(var_a4) + fconvert.t(fconvert.s(
            fconvert.t(fconvert.s(x87_r1 * x87_r5 - x87_r3_2 * x87_r7_14)) * x87_r1_22)))
        float var_1c_1 = fconvert.s(x87_r7_54 * fconvert.t(var_40_1) + fconvert.t(fconvert.s(
            fconvert.t(fconvert.s(x87_r2_5 * x87_r3_2 - x87_r1_6 * x87_r5)) * x87_r1_22)))
        float var_20_1 = fconvert.s(x87_r7_54 * fconvert.t(var_4c_1)
            + fconvert.t(fconvert.s(x87_r1_22 * x87_r2_22)))
        float var_14_1 = fconvert.s(fconvert.t(var_8c) * x87_r7_54 + fconvert.t(fconvert.s(
            fconvert.t(fconvert.s(x87_r2_17 * x87_r5 - x87_r2_15 * x87_r3_2)) * x87_r4_10)))
        float var_18_1 = fconvert.s(x87_r7_54 * fconvert.t(var_34_1)
            + fconvert.t(fconvert.s(x87_r4_10 * fconvert.t(var_64))))
        long double x87_r7_58 = fconvert.t(fconvert.s(float.t(arg6)))
        long double x87_r5_19 = fconvert.t(var_a8)
        long double x87_r6_35 = x87_r5_19
        long double x87_r4_24 = fconvert.t(var_44_1)
        long double x87_r5_23 = x87_r4_24
        long double x87_r3_22 = fconvert.t(var_50_1)
        long double x87_r7_60 = x87_r3_22
        
        if (i_2 s> 0)
            long double x87_r4_30 = float.t(0)
            int32_t i_1 = i_2
            int32_t i
            
            do
                arg6 =
                    fconvert.s(fconvert.t(fconvert.s(x87_r7_58 * x87_r5_19)) + fconvert.t(var_c_1))
                arg8 =
                    fconvert.s(fconvert.t(fconvert.s(x87_r7_58 * x87_r4_24)) + fconvert.t(var_1c_1))
                arg9 =
                    fconvert.s(fconvert.t(fconvert.s(x87_r7_58 * x87_r3_22)) + fconvert.t(var_20_1))
                float var_8_1 = fconvert.s(fconvert.t(fconvert.s(x87_r7_58 * fconvert.t(var_90)))
                    + fconvert.t(var_14_1))
                arg7 = fconvert.s(fconvert.t(fconvert.s(x87_r7_58 * fconvert.t(var_38_1)))
                    + fconvert.t(var_18_1))
                
                if (j_2 s> 0)
                    int32_t j_1 = j_2
                    int32_t j
                    
                    do
                        long double x87_r3_37 = fconvert.t(arg8)
                        x87_r3_37 - x87_r4_30
                        eax_25.w = (x87_r3_37 < x87_r4_30 ? 1 : 0) << 8
                            | (is_unordered.t(x87_r3_37, x87_r4_30) ? 1 : 0) << 0xa
                            | (x87_r3_37 == x87_r4_30 ? 1 : 0) << 0xe | 0x1800
                        long double x87_r2_38 = fconvert.t(arg9)
                        long double x87_r1_35 = fconvert.t(var_8_1)
                        bool p_6 = unimplemented  {test ah, 0x5}
                        long double x87_r4_42
                        long double x87_r6_38
                        long double x87_r7_63
                        
                        if (not(p_6))
                        label_46361c:
                            x87_r5_23 = x87_r1_35
                        label_463625:
                            arg10 += 4
                            arg6 = fconvert.s(fconvert.t(arg6) + x87_r6_35)
                            arg8 = fconvert.s(x87_r3_37 + x87_r5_23)
                            arg9 = fconvert.s(x87_r2_38 + x87_r7_60)
                            var_8_1 = fconvert.s(x87_r4_30 + fconvert.t(var_90))
                            arg7 = fconvert.s(fconvert.t(arg7) + fconvert.t(var_38_1))
                            x87_r7_63 = x87_r6_35
                            x87_r4_42 = float.t(0)
                            x87_r6_38 = x87_r7_60
                        else
                            x87_r2_38 - x87_r4_30
                            eax_25.w = (x87_r2_38 < x87_r4_30 ? 1 : 0) << 8
                                | (is_unordered.t(x87_r2_38, x87_r4_30) ? 1 : 0) << 0xa
                                | (x87_r2_38 == x87_r4_30 ? 1 : 0) << 0xe | 0x800
                            bool p_7 = unimplemented  {test ah, 0x5}
                            
                            if (not(p_7))
                                x87_r5_23 = x87_r2_38
                                x87_r2_38 = x87_r4_30
                                x87_r4_30 = x87_r1_35
                                goto label_463625
                            
                            x87_r1_35 - x87_r4_30
                            eax_25.w = (x87_r1_35 < x87_r4_30 ? 1 : 0) << 8
                                | (is_unordered.t(x87_r1_35, x87_r4_30) ? 1 : 0) << 0xa
                                | (x87_r1_35 == x87_r4_30 ? 1 : 0) << 0xe | 0x800
                            bool p_8 = unimplemented  {test ah, 0x5}
                            
                            if (not(p_8))
                                goto label_46361c
                            
                            long double x87_r1_37 = x87_r4_30
                            x87_r4_30 = x87_r1_35
                            long double temp3_1 = fconvert.t(arg7)
                            x87_r1_37 - temp3_1
                            eax_25.w = (x87_r1_37 < temp3_1 ? 1 : 0) << 8
                                | (is_unordered.t(x87_r1_37, temp3_1) ? 1 : 0) << 0xa
                                | (x87_r1_37 == temp3_1 ? 1 : 0) << 0xe | 0x1000
                            
                            if ((eax_25:1.b & 0x41) == 0)
                                goto label_463625
                            
                            long double x87_r3_38 = fconvert.t(arg6)
                            long double x87_r2_44 = float.t(1)
                            long double x87_r2_49 = fconvert.t(fconvert.s(x87_r2_44 / x87_r2_44))
                            int32_t eax_26 = sub_70c710(fconvert.t(fconvert.s((
                                x87_r5_23 * fconvert.t(var_bc) + x87_r3_38 * fconvert.t(var_c4)
                                + x87_r3_37 * fconvert.t(var_cc)) * x87_r2_49)) * fconvert.t(256.0))
                            int32_t eax_27 = sub_70c710(fconvert.t(fconvert.s(x87_r2_49 * (
                                x87_r5_23 * fconvert.t(var_d4) + x87_r3_38 * fconvert.t(var_dc)
                                + x87_r3_37 * fconvert.t(var_c0)))) * fconvert.t(256.0))
                            uint32_t ecx_10 = zx.d(eax_27.b)
                            int32_t esi_5 = eax_26 s>> 8
                            int32_t eax_28 = eax_27 s>> 8
                            float edx_10 = zx.d(eax_26.b)
                            arg6 = esi_5 + 1
                            int32_t ecx_12 = eax_28 + 1
                            arg9 = esi_5
                            
                            if (esi_5 s< 0)
                                arg9 = 0f
                                esi_5 = 0
                            else if (esi_5 s> eax_8)
                                arg9 = eax_8
                                esi_5 = eax_8
                            
                            if (eax_28 s< 0)
                                eax_28 = 0
                            else if (eax_28 s> eax_10 - 1)
                                eax_28 = eax_10 - 1
                            
                            if (arg6 s< 0)
                                arg6 = 0f
                            else if (arg6 s> eax_8)
                                arg6 = eax_8
                            
                            if (ecx_12 s< 0)
                                ecx_12 = 0
                            else if (ecx_12 s> eax_10 - 1)
                                ecx_12 = eax_10 - 1
                            
                            int32_t edi_8 = eax_28 * eax_5
                            int32_t eax_31 = ecx_12 * eax_5
                            char* edi_10 = edi_8 + (arg6 << 2) + ebx_2
                            char* ecx_16 = eax_31 + (arg9 << 2) + ebx_2
                            char* esi_7 = edi_8 + (esi_5 << 2) + ebx_2
                            uint32_t ecx_18 = zx.d(*esi_7)
                            float eax_33 = eax_31 + (arg6 << 2) + ebx_2
                            uint32_t ebx_3 = zx.d(esi_7[1])
                            int32_t eax_38 = (((zx.d(*edi_10) - ecx_18) i* edx_10) s>> 8) + ecx_18
                            int32_t ecx_23 = (((zx.d(edi_10[1]) - ebx_3) i* edx_10) s>> 8) + ebx_3
                            uint32_t ebx_4 = zx.d(esi_7[2])
                            arg9 = ebx_4
                            int32_t edx_15 = (((zx.d(edi_10[2]) - ebx_4) i* edx_10) s>> 8) + ebx_4
                            uint32_t ebx_5 = zx.d(esi_7[3])
                            int32_t esi_12 = (((zx.d(edi_10[3]) - ebx_5) i* edx_10) s>> 8) + ebx_5
                            uint32_t ebx_6 = zx.d(ecx_16[3])
                            arg9 = zx.d(ecx_16[1])
                            uint32_t ebx_8 = zx.d(ecx_16[2])
                            double var_7c_1
                            var_7c_1:4.d = zx.d(*ecx_16)
                            double var_84_1
                            var_84_1:4.d = ebx_8
                            int32_t edi_24 = (((((((zx.d(*(eax_33 i+ 2)) - ebx_8) i* edx_10) s>> 8)
                                - edx_15 + ebx_8) * ecx_10) s>> 8) + edx_15) << 0x10 | (((((((
                                zx.d(*(eax_33 i+ 1)) i- arg9) i* edx_10) s>> 8) - ecx_23 i+ arg9)
                                * ecx_10) s>> 8) + ecx_23) << 8
                            long double x87_r3_49 = fconvert.t(var_a8)
                            ebx_2 = var_b4:4.d
                            arg6 = fconvert.s(x87_r3_38 + x87_r3_49)
                            long double x87_r3_51 = fconvert.t(var_44_1)
                            int32_t ecx_36 = var_7c_1:4.d
                            long double x87_r5_24 = x87_r5_23 + x87_r3_51
                            x87_r5_23 = x87_r3_51
                            arg8 = fconvert.s(x87_r5_24)
                            long double x87_r3_53 = fconvert.t(var_50_1)
                            x87_r6_38 = x87_r3_53
                            arg9 = fconvert.s(x87_r3_37 + x87_r3_53)
                            x87_r7_63 = x87_r3_49
                            var_8_1 = fconvert.s(x87_r2_38 + fconvert.t(var_90))
                            arg7 = fconvert.s(fconvert.t(arg7) + fconvert.t(var_38_1))
                            x87_r4_42 = float.t(0)
                            int32_t edi_26 = edi_24 | (((((((zx.d(*(eax_33 i+ 3)) - ebx_6)
                                i* edx_10) s>> 8) - esi_12 + ebx_6) * ecx_10) s>> 8) + esi_12) << 0x18
                                | (((((((zx.d(*eax_33) - ecx_36) i* edx_10) s>> 8) - eax_38
                                + ecx_36) * ecx_10) s>> 8) + eax_38)
                            *arg10 = edi_26
                            arg10 += 4
                        
                        j = j_1
                        j_1 -= 1
                        x87_r7_60 = x87_r6_38
                        x87_r4_30 = x87_r4_42
                        x87_r6_35 = x87_r7_63
                    while (j != 1)
                    j_2 = j_3
                    eax_25 = var_64_1
                
                arg10 += eax_25
                i = i_1
                i_1 -= 1
                var_c_1 = fconvert.s(fconvert.t(var_c_1) + fconvert.t(var_a4))
                var_1c_1 = fconvert.s(fconvert.t(var_1c_1) + fconvert.t(var_40_1))
                var_20_1 = fconvert.s(fconvert.t(var_20_1) + fconvert.t(var_4c_1))
                var_14_1 = fconvert.s(fconvert.t(var_8c) + fconvert.t(var_14_1))
                var_18_1 = fconvert.s(fconvert.t(var_34_1) + fconvert.t(var_18_1))
            while (i != 1)
        
        return eax_25

return eax_1
