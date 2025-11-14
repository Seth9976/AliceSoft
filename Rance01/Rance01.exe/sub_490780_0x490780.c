// 函数: sub_490780
// 地址: 0x490780
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

float* eax = arg11
float* ebx = arg10
float* esi = arg8
float* edx = arg6
arg10 = fconvert.s(fconvert.t(*edx))
float var_8 = fconvert.s(fconvert.t(edx[1]))
arg11 = fconvert.s(fconvert.t(*esi))
float var_14 = fconvert.s(fconvert.t(esi[1]))
float var_18 = fconvert.s(fconvert.t(*ebx))
float var_10 = fconvert.s(fconvert.t(ebx[1]))
arg8 = fconvert.s(fconvert.t(*eax))
float* eax_1 = arg7
float var_c = fconvert.s(fconvert.t(eax[1]))
float var_20 = fconvert.s(fconvert.t(*eax_1))
float* eax_2 = arg9
float var_1c = fconvert.s(fconvert.t(eax_1[1]))
float var_24 = fconvert.s(fconvert.t(*eax_2))
float var_58 = fconvert.s(fconvert.t(eax_2[1]))
float var_34 = fconvert.s(fconvert.t(*arg3))
float var_54 = fconvert.s(fconvert.t(arg3[1]))
long double x87_r7_14 = fconvert.t(var_14)
long double x87_r5 = fconvert.t(var_10)
long double x87_r3_2 = fconvert.t(var_18)
double var_6c = fconvert.d(x87_r3_2)
long double x87_r1 = fconvert.t(arg11)
double var_ac = fconvert.d(x87_r1)
long double x87_r2_5 = fconvert.t(var_8)
long double x87_r1_6 = fconvert.t(arg10)
float var_2c = fconvert.s(x87_r1_6 - fconvert.t(var_6c))
long double x87_r2_15 = fconvert.t(var_c)
long double x87_r2_17 = fconvert.t(arg8)
float var_dc = fconvert.s(fconvert.t(var_6c) - x87_r2_17)
var_6c.d = fconvert.s(x87_r7_14 - fconvert.t(fconvert.d(x87_r2_15)))
var_6c:4.d = fconvert.s(fconvert.t(fconvert.d(x87_r2_17)) - fconvert.t(var_ac))
float var_64 = fconvert.s(x87_r2_15 * fconvert.t(arg11) - x87_r7_14 * fconvert.t(arg8))
long double x87_r5_2 = fconvert.t(fconvert.s(fconvert.t(var_ac) - fconvert.t(fconvert.d(x87_r1_6))))
long double x87_r3_8 = fconvert.t(fconvert.s(fconvert.t(fconvert.d(x87_r2_5)) - x87_r7_14))
long double x87_r2_22 =
    fconvert.t(fconvert.s(x87_r7_14 * fconvert.t(arg10) - fconvert.t(arg11) * fconvert.t(var_8)))
long double x87_r2_24 = fconvert.t(var_6c:4.d)
long double x87_r1_17 = fconvert.t(var_6c.d)
long double x87_r2_26 = fconvert.t(fconvert.s(x87_r5_2 * x87_r5 + x87_r3_8 * x87_r3_2 + x87_r2_22))
long double x87_r1_20 = fconvert.t(9.9999997473787516e-05)
x87_r1_20 - x87_r2_26
eax_2.w = (x87_r1_20 < x87_r2_26 ? 1 : 0) << 8
    | (is_unordered.t(x87_r1_20, x87_r2_26) ? 1 : 0) << 0xa
    | (x87_r1_20 == x87_r2_26 ? 1 : 0) << 0xe | 0x800

if ((eax_2:1.b & 0x41) != 0)
    long double x87_r0_5 =
        fconvert.t(fconvert.s(x87_r3_2 * x87_r1_17 + x87_r5 * x87_r2_24 + fconvert.t(var_64)))
    x87_r0_5 - x87_r1_20
    eax_2.w = (x87_r0_5 < x87_r1_20 ? 1 : 0) << 8
        | (is_unordered.t(x87_r0_5, x87_r1_20) ? 1 : 0) << 0xa
        | (x87_r0_5 == x87_r1_20 ? 1 : 0) << 0xe | 0x1000
    bool p_1 = unimplemented  {test ah, 0x5}
    
    if (p_1)
        long double x87_r1_21 = float.t(1)
        long double x87_r1_22 = fconvert.t(fconvert.s(x87_r1_21 / x87_r1_21))
        float var_a0 = fconvert.s(fconvert.t(fconvert.s(x87_r7_14 - x87_r5)) * x87_r1_22)
        float var_9c = fconvert.s(fconvert.t(fconvert.s(x87_r3_2 - x87_r1)) * x87_r1_22)
        float var_40_1 = fconvert.s(fconvert.t(fconvert.s(x87_r5 - x87_r2_5)) * x87_r1_22)
        float var_3c_1 = fconvert.s(fconvert.t(var_2c) * x87_r1_22)
        float var_4c_1 = fconvert.s(x87_r3_8 * x87_r1_22)
        float var_48_1 = fconvert.s(x87_r5_2 * x87_r1_22)
        long double x87_r4_9 = float.t(1)
        long double x87_r4_10 = fconvert.t(fconvert.s(x87_r4_9 / x87_r4_9))
        float var_80 = fconvert.s(fconvert.t(fconvert.s(x87_r2_15 - x87_r5)) * x87_r4_10)
        float var_7c = fconvert.s(fconvert.t(var_dc) * x87_r4_10)
        float var_30_1 = fconvert.s(x87_r1_17 * x87_r4_10)
        float var_2c_1 = fconvert.s(x87_r2_24 * x87_r4_10)
        int32_t eax_4 = (*(*arg2 + 8))(0, 0)
        int32_t eax_6 = (*(*arg2 + 0x1c))()
        int32_t eax_9 = (*(*arg2 + 0x10))() - 1
        float eax_12 = (*(*arg2 + 0x14))() - 1
        float var_c0 = fconvert.s(fconvert.t(var_20) / fconvert.t(*(arg6 i+ 0xc)))
        float var_b8 = fconvert.s(fconvert.t(var_24) / fconvert.t(esi[3]))
        float var_c8 = fconvert.s(fconvert.t(var_34) / fconvert.t(ebx[3]))
        double var_74_1
        var_74_1:4.d = fconvert.s(fconvert.t(var_1c) / fconvert.t(*(arg6 i+ 0xc)))
        float var_d0 = fconvert.s(fconvert.t(var_58) / fconvert.t(esi[3]))
        double var_94_1
        var_94_1:4.d = fconvert.s(fconvert.t(var_54) / fconvert.t(ebx[3]))
        *(arg6 i+ 0xc)
        long double x87_r6_7 = float.t(1)
        float var_cc = fconvert.s(x87_r6_7 / fconvert.t(esi[3]))
        float var_b4 = fconvert.s(x87_r6_7 / fconvert.t(ebx[3]))
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
        
        long double x87_r5_13 = fconvert.t(var_18)
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
        long double x87_r6_16 = fconvert.t(var_14)
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
        
        long double x87_r5_16 = fconvert.t(var_10)
        long double x87_r4_20 = fconvert.t(var_c)
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
        float ebx_2 = (*(*arg4 + 8))(arg6, ebx_1)
        arg10 = ebx_2
        int32_t j_2 = j_3
        int32_t eax_24 = (*(*arg4 + 0x1c))() - (j_2 << 2)
        long double x87_r7_54 = fconvert.t(fconvert.s(float.t(ebx_1)))
        int32_t var_64_1 = eax_24
        float var_1c_1 = fconvert.s(x87_r7_54 * fconvert.t(var_9c) + fconvert.t(fconvert.s(
            fconvert.t(fconvert.s(x87_r1 * x87_r5 - x87_r3_2 * x87_r7_14)) * x87_r1_22)))
        float var_c_1 = fconvert.s(x87_r7_54 * fconvert.t(var_3c_1) + fconvert.t(fconvert.s(
            fconvert.t(fconvert.s(x87_r2_5 * x87_r3_2 - x87_r1_6 * x87_r5)) * x87_r1_22)))
        float var_10_1 = fconvert.s(x87_r7_54 * fconvert.t(var_48_1)
            + fconvert.t(fconvert.s(x87_r1_22 * x87_r2_22)))
        float var_14_1 = fconvert.s(fconvert.t(var_7c) * x87_r7_54 + fconvert.t(fconvert.s(
            fconvert.t(fconvert.s(x87_r2_17 * x87_r5 - x87_r2_15 * x87_r3_2)) * x87_r4_10)))
        float var_18_1 = fconvert.s(x87_r7_54 * fconvert.t(var_2c_1)
            + fconvert.t(fconvert.s(x87_r4_10 * fconvert.t(var_64))))
        long double x87_r7_58 = fconvert.t(fconvert.s(float.t(arg6)))
        long double x87_r5_19 = fconvert.t(var_a0)
        long double x87_r6_35 = x87_r5_19
        long double x87_r4_24 = fconvert.t(var_40_1)
        long double x87_r5_23 = x87_r4_24
        long double x87_r3_22 = fconvert.t(var_4c_1)
        long double x87_r7_60 = x87_r3_22
        
        if (i_2 s> 0)
            long double x87_r4_30 = float.t(0)
            int32_t i_1 = i_2
            int32_t i
            
            do
                arg6 =
                    fconvert.s(fconvert.t(fconvert.s(x87_r7_58 * x87_r5_19)) + fconvert.t(var_1c_1))
                arg8 =
                    fconvert.s(fconvert.t(fconvert.s(x87_r7_58 * x87_r4_24)) + fconvert.t(var_c_1))
                arg7 =
                    fconvert.s(fconvert.t(fconvert.s(x87_r7_58 * x87_r3_22)) + fconvert.t(var_10_1))
                float var_8_1 = fconvert.s(fconvert.t(fconvert.s(x87_r7_58 * fconvert.t(var_80)))
                    + fconvert.t(var_14_1))
                arg11 = fconvert.s(fconvert.t(fconvert.s(x87_r7_58 * fconvert.t(var_30_1)))
                    + fconvert.t(var_18_1))
                
                if (j_2 s> 0)
                    int32_t j_1 = j_2
                    int32_t j
                    
                    do
                        long double x87_r3_37 = fconvert.t(arg8)
                        x87_r3_37 - x87_r4_30
                        eax_24.w = (x87_r3_37 < x87_r4_30 ? 1 : 0) << 8
                            | (is_unordered.t(x87_r3_37, x87_r4_30) ? 1 : 0) << 0xa
                            | (x87_r3_37 == x87_r4_30 ? 1 : 0) << 0xe | 0x1800
                        long double x87_r2_38 = fconvert.t(arg7)
                        long double x87_r1_35 = fconvert.t(var_8_1)
                        bool p_6 = unimplemented  {test ah, 0x5}
                        long double x87_r4_42
                        long double x87_r6_38
                        long double x87_r7_63
                        
                        if (not(p_6))
                        label_491418:
                            x87_r5_23 = x87_r1_35
                        label_491423:
                            arg6 = fconvert.s(fconvert.t(arg6) + x87_r6_35)
                            arg8 = fconvert.s(x87_r3_37 + x87_r5_23)
                            arg7 = fconvert.s(x87_r2_38 + x87_r7_60)
                            var_8_1 = fconvert.s(x87_r4_30 + fconvert.t(var_80))
                            arg11 = fconvert.s(fconvert.t(arg11) + fconvert.t(var_30_1))
                            x87_r7_63 = x87_r6_35
                            x87_r4_42 = float.t(0)
                            x87_r6_38 = x87_r7_60
                        else
                            x87_r2_38 - x87_r4_30
                            eax_24.w = (x87_r2_38 < x87_r4_30 ? 1 : 0) << 8
                                | (is_unordered.t(x87_r2_38, x87_r4_30) ? 1 : 0) << 0xa
                                | (x87_r2_38 == x87_r4_30 ? 1 : 0) << 0xe | 0x800
                            bool p_7 = unimplemented  {test ah, 0x5}
                            
                            if (not(p_7))
                                x87_r5_23 = x87_r2_38
                                x87_r2_38 = x87_r4_30
                                x87_r4_30 = x87_r1_35
                                goto label_491423
                            
                            x87_r1_35 - x87_r4_30
                            eax_24.w = (x87_r1_35 < x87_r4_30 ? 1 : 0) << 8
                                | (is_unordered.t(x87_r1_35, x87_r4_30) ? 1 : 0) << 0xa
                                | (x87_r1_35 == x87_r4_30 ? 1 : 0) << 0xe | 0x800
                            bool p_8 = unimplemented  {test ah, 0x5}
                            
                            if (not(p_8))
                                goto label_491418
                            
                            long double x87_r1_37 = x87_r4_30
                            x87_r4_30 = x87_r1_35
                            long double temp3_1 = fconvert.t(arg11)
                            x87_r1_37 - temp3_1
                            eax_24.w = (x87_r1_37 < temp3_1 ? 1 : 0) << 8
                                | (is_unordered.t(x87_r1_37, temp3_1) ? 1 : 0) << 0xa
                                | (x87_r1_37 == temp3_1 ? 1 : 0) << 0xe | 0x1000
                            
                            if ((eax_24:1.b & 0x41) == 0)
                                goto label_491423
                            
                            long double x87_r3_38 = fconvert.t(arg6)
                            long double x87_r2_44 = float.t(1)
                            long double x87_r2_49 = fconvert.t(fconvert.s(x87_r2_44 / x87_r2_44))
                            int32_t eax_25 = sub_70c710(fconvert.t(fconvert.s((
                                x87_r5_23 * fconvert.t(var_b8) + x87_r3_38 * fconvert.t(var_c0)
                                + x87_r3_37 * fconvert.t(var_c8)) * x87_r2_49)) * fconvert.t(256.0))
                            int32_t eax_26 = sub_70c710(fconvert.t(fconvert.s(x87_r2_49 * (
                                x87_r5_23 * fconvert.t(var_d0)
                                + x87_r3_38 * fconvert.t(var_74_1:4.d)
                                + x87_r3_37 * fconvert.t(var_94_1:4.d)))) * fconvert.t(256.0))
                            int32_t edi_4 = eax_25 s>> 8
                            float eax_27 = eax_26 s>> 8
                            uint32_t edx_11 = zx.d(eax_25.b)
                            float ebx_3 = edi_4 + 1
                            float esi_4 = eax_27 i+ 1
                            arg7 = zx.d(eax_26.b)
                            var_ac:4.d = edx_11
                            arg6 = ebx_3
                            arg8 = esi_4
                            
                            if (edi_4 s< 0)
                                edi_4 = 0
                            else if (edi_4 s> eax_9)
                                edi_4 = eax_9
                            
                            if (eax_27 s< 0)
                                eax_27 = 0f
                            else if (eax_27 s> eax_12)
                                eax_27 = eax_12
                            
                            if (ebx_3 s< 0)
                                arg6 = 0f
                                ebx_3 = arg6
                            else if (ebx_3 s> eax_9)
                                arg6 = eax_9
                                ebx_3 = arg6
                            
                            if (esi_4 s< 0)
                                arg8 = 0f
                            else if (esi_4 s> eax_12)
                                arg8 = eax_12
                            
                            int32_t eax_28 = eax_27 i* eax_6
                            int32_t eax_30 = arg8 i* eax_6
                            char* esi_6 = eax_28 + (edi_4 << 2) + eax_4
                            char* ebx_5 = eax_28 + (ebx_3 << 2) + eax_4
                            float ecx_14 = eax_30 + (edi_4 << 2) + eax_4
                            uint32_t edi_5 = zx.d(esi_6[1])
                            float eax_32 = eax_30 + (arg6 << 2) + eax_4
                            uint32_t eax_33 = zx.d(*esi_6)
                            int32_t ecx_20 = (((zx.d(*ebx_5) - eax_33) * edx_11) s>> 8) + eax_33
                            int32_t eax_38 = (((zx.d(ebx_5[1]) - edi_5) * edx_11) s>> 8) + edi_5
                            uint32_t edi_6 = zx.d(esi_6[2])
                            int32_t ebx_10 = (((zx.d(ebx_5[2]) - edi_6) * edx_11) s>> 8) + edi_6
                            uint32_t edi_7 = zx.d(esi_6[3])
                            int32_t esi_12 = (((zx.d(ebx_5[3]) - edi_7) * edx_11) s>> 8) + edi_7
                            uint32_t edi_8 = zx.d(*(ecx_14 i+ 1))
                            int32_t esi_23 = ((((((zx.d(*(eax_32 i+ 1)) - edi_8) * edx_11) s>> 8)
                                - eax_38 + edi_8) i* arg7) s>> 8) + eax_38
                            uint32_t eax_40 = zx.d(*(ecx_14 i+ 2))
                            int32_t edi_18 = ((((((zx.d(*(eax_32 i+ 2)) - eax_40) * edx_11) s>> 8)
                                - ebx_10 + eax_40) i* arg7) s>> 8) + ebx_10
                            uint32_t ebx_11 = zx.d(*(ecx_14 i+ 3))
                            eax_24 = ((((((zx.d(*(eax_32 i+ 3)) - ebx_11) * edx_11) s>> 8) - esi_12
                                + ebx_11) i* arg7) s>> 8) + esi_12
                            uint32_t edx_14 = zx.d(*ecx_14)
                            long double x87_r3_49 = fconvert.t(var_a0)
                            arg8 = edx_14
                            *arg10 += (((((((((zx.d(*eax_32) - edx_14) * var_ac:4.d) s>> 8) - ecx_20
                                + edx_14) i* arg7) s>> 8) - zx.d(*arg10) + ecx_20) * eax_24) s>> 8).b
                            char ecx_21 = *(arg10 i+ 1)
                            char ebx_29 = (((esi_23 - zx.d(ecx_21)) * eax_24) s>> 8).b + ecx_21
                            ecx_21 = *(arg10 i+ 2)
                            *(arg10 i+ 1) = ebx_29
                            arg6 = fconvert.s(x87_r3_38 + x87_r3_49)
                            long double x87_r3_51 = fconvert.t(var_40_1)
                            ebx_2 = arg10
                            *(ebx_2 i+ 2) = (((edi_18 - zx.d(ecx_21)) * eax_24) s>> 8).b + ecx_21
                            long double x87_r5_24 = x87_r5_23 + x87_r3_51
                            x87_r5_23 = x87_r3_51
                            arg8 = fconvert.s(x87_r5_24)
                            long double x87_r3_53 = fconvert.t(var_4c_1)
                            x87_r6_38 = x87_r3_53
                            arg7 = fconvert.s(x87_r3_37 + x87_r3_53)
                            x87_r7_63 = x87_r3_49
                            var_8_1 = fconvert.s(x87_r2_38 + fconvert.t(var_80))
                            arg11 = fconvert.s(fconvert.t(arg11) + fconvert.t(var_30_1))
                            x87_r4_42 = float.t(0)
                        
                        ebx_2 += 4
                        j = j_1
                        j_1 -= 1
                        x87_r7_60 = x87_r6_38
                        arg10 = ebx_2
                        x87_r4_30 = x87_r4_42
                        x87_r6_35 = x87_r7_63
                    while (j != 1)
                    j_2 = j_3
                    eax_24 = var_64_1
                
                ebx_2 += eax_24
                i = i_1
                i_1 -= 1
                arg10 = ebx_2
                var_1c_1 = fconvert.s(fconvert.t(var_1c_1) + fconvert.t(var_9c))
                var_c_1 = fconvert.s(fconvert.t(var_c_1) + fconvert.t(var_3c_1))
                var_10_1 = fconvert.s(fconvert.t(var_10_1) + fconvert.t(var_48_1))
                var_14_1 = fconvert.s(fconvert.t(var_7c) + fconvert.t(var_14_1))
                var_18_1 = fconvert.s(fconvert.t(var_2c_1) + fconvert.t(var_18_1))
            while (i != 1)
        
        return eax_24

return eax_2
