// 函数: sub_48a920
// 地址: 0x48a920
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

float* eax = arg10
float* esi = arg9
float* edi = arg6
arg10 = fconvert.s(fconvert.t(*edi))
float* edi_1 = arg8
arg9 = fconvert.s(fconvert.t(edi[1]))
float var_10 = fconvert.s(fconvert.t(*edi_1))
float var_18 = fconvert.s(fconvert.t(edi_1[1]))
float var_8 = fconvert.s(fconvert.t(*esi))
float var_14 = fconvert.s(fconvert.t(esi[1]))
float var_c = fconvert.s(fconvert.t(*eax))
float* result = arg7
float var_20 = fconvert.s(fconvert.t(eax[1]))
float var_58 = fconvert.s(fconvert.t(*result))
float var_50 = fconvert.s(fconvert.t(result[1]))
float var_54 = fconvert.s(fconvert.t(*arg2))
float var_48 = fconvert.s(fconvert.t(arg2[1]))
float var_4c = fconvert.s(fconvert.t(*arg3))
float var_1c = fconvert.s(fconvert.t(arg3[1]))
long double x87_r7_14 = fconvert.t(var_18)
long double x87_r5 = fconvert.t(var_14)
long double x87_r4_2 = fconvert.t(var_8)
long double x87_r2 = fconvert.t(var_10)
double var_7c = fconvert.d(x87_r2)
long double x87_r2_5 = fconvert.t(arg9)
long double x87_r1_5 = fconvert.t(arg10)
long double x87_r2_15 = fconvert.t(var_20)
long double x87_r2_17 = fconvert.t(var_c)
long double x87_r5_2 = fconvert.t(fconvert.s(fconvert.t(var_7c) - fconvert.t(fconvert.d(x87_r1_5))))
long double x87_r2_21 =
    fconvert.t(fconvert.s(x87_r7_14 * fconvert.t(arg10) - x87_r2 * fconvert.t(arg9)))
long double x87_r2_23 = fconvert.t(fconvert.s(x87_r5_2 * x87_r5
    + fconvert.t(fconvert.s(fconvert.t(fconvert.d(x87_r2_5)) - x87_r7_14)) * x87_r4_2 + x87_r2_21))
long double x87_r1_13 = fconvert.t(9.9999997473787516e-05)
x87_r1_13 - x87_r2_23
result.w = (x87_r1_13 < x87_r2_23 ? 1 : 0) << 8
    | (is_unordered.t(x87_r1_13, x87_r2_23) ? 1 : 0) << 0xa
    | (x87_r1_13 == x87_r2_23 ? 1 : 0) << 0xe | 0x800

if ((result:1.b & 0x41) == 0)
    return result

long double x87_r2_25 = fconvert.t(fconvert.s(
    x87_r4_2 * fconvert.t(fconvert.s(x87_r7_14 - x87_r2_15))
    + x87_r5 * fconvert.t(fconvert.s(x87_r2_17 - fconvert.t(var_7c)))
    + fconvert.t(fconvert.s(x87_r2 * x87_r2_15 - x87_r7_14 * x87_r2_17))))
x87_r2_25 - x87_r1_13
result.w = (x87_r2_25 < x87_r1_13 ? 1 : 0) << 8
    | (is_unordered.t(x87_r2_25, x87_r1_13) ? 1 : 0) << 0xa
    | (x87_r2_25 == x87_r1_13 ? 1 : 0) << 0xe | 0x1800
bool p = unimplemented  {test ah, 0x5}

if (p)
    long double x87_r3_6 = float.t(1)
    long double x87_r3_7 = fconvert.t(fconvert.s(x87_r3_6 / x87_r3_6))
    float var_74_1 = fconvert.s(fconvert.t(fconvert.s(x87_r7_14 - x87_r5)) * x87_r3_7)
    float var_70_1 = fconvert.s(fconvert.t(fconvert.s(x87_r4_2 - x87_r2)) * x87_r3_7)
    float var_44_1 =
        fconvert.s(fconvert.t(fconvert.s(fconvert.t(fconvert.d(x87_r5)) - x87_r2_5)) * x87_r3_7)
    float var_40_1 =
        fconvert.s(fconvert.t(fconvert.s(x87_r1_5 - fconvert.t(fconvert.d(x87_r4_2)))) * x87_r3_7)
    float var_38_1 = fconvert.s(x87_r1_13 * x87_r3_7)
    float var_34_1 = fconvert.s(x87_r5_2 * x87_r3_7)
    int32_t edi_2 = (*(*arg11 + 8))(0, 0)
    int32_t var_68_1 = edi_2
    int32_t eax_4 = (*(*arg11 + 0x1c))()
    int32_t eax_7 = (*(*arg11 + 0x10))() - 1
    int32_t eax_9 = (*(*arg11 + 0x14))()
    float var_90_1 = fconvert.s(fconvert.t(var_58) / fconvert.t(*(arg6 i+ 0xc)))
    float var_a0_1 = fconvert.s(fconvert.t(var_54) / fconvert.t(*(arg8 + 0xc)))
    float var_b0_1 = fconvert.s(fconvert.t(var_4c) / fconvert.t(esi[3]))
    double var_8c
    var_8c:4.d = fconvert.s(fconvert.t(var_50) / fconvert.t(*(arg6 i+ 0xc)))
    float var_80_1 = fconvert.s(fconvert.t(var_48) / fconvert.t(*(arg8 + 0xc)))
    double var_9c
    var_9c:4.d = fconvert.s(fconvert.t(var_1c) / fconvert.t(esi[3]))
    *(arg6 i+ 0xc)
    long double x87_r6_12 = float.t(1)
    float var_4c_1 = fconvert.s(x87_r6_12 / fconvert.t(*(arg8 + 0xc)))
    float var_58_1 = fconvert.s(x87_r6_12 / fconvert.t(esi[3]))
    long double x87_r7_39 = fconvert.t(arg10)
    long double x87_r6_16 = fconvert.t(var_10)
    x87_r6_16 - x87_r7_39
    int32_t eax_11
    eax_11.w = (x87_r6_16 < x87_r7_39 ? 1 : 0) << 8
        | (is_unordered.t(x87_r6_16, x87_r7_39) ? 1 : 0) << 0xa
        | (x87_r6_16 == x87_r7_39 ? 1 : 0) << 0xe | 0x3000
    long double x87_r6_17
    long double x87_r7_40
    
    if ((eax_11:1.b & 0x41) != 0)
        arg6 = fconvert.s(x87_r6_16)
        x87_r6_17 = x87_r7_39
        x87_r7_40 = x87_r6_16
    else
        x87_r6_17 = x87_r7_39
        x87_r7_40 = x87_r6_16
        arg6 = fconvert.s(x87_r6_17)
    
    long double x87_r5_5 = fconvert.t(var_8)
    long double x87_r4_14 = fconvert.t(var_c)
    x87_r4_14 - x87_r5_5
    eax_11.w = (x87_r4_14 < x87_r5_5 ? 1 : 0) << 8
        | (is_unordered.t(x87_r4_14, x87_r5_5) ? 1 : 0) << 0xa
        | (x87_r4_14 == x87_r5_5 ? 1 : 0) << 0xe | 0x2000
    long double x87_r4_15
    long double x87_r5_6
    
    if ((eax_11:1.b & 0x41) != 0)
        arg8 = fconvert.s(x87_r4_14)
        x87_r4_15 = x87_r5_5
        x87_r5_6 = x87_r4_14
    else
        x87_r4_15 = x87_r5_5
        x87_r5_6 = x87_r4_14
        arg8 = fconvert.s(x87_r4_15)
    
    long double x87_r3_20 = fconvert.t(arg6)
    long double x87_r2_27 = fconvert.t(arg8)
    x87_r2_27 - x87_r3_20
    eax_11.w = (x87_r2_27 < x87_r3_20 ? 1 : 0) << 8
        | (is_unordered.t(x87_r2_27, x87_r3_20) ? 1 : 0) << 0xa
        | (x87_r2_27 == x87_r3_20 ? 1 : 0) << 0xe | 0x1000
    
    if ((eax_11:1.b & 0x41) != 0)
        x87_r4_15 = x87_r2_27
    else
        x87_r3_20 = x87_r2_27
    
    int32_t esi_1 = *arg5
    long double x87_r3_22 = fconvert.t(fconvert.s(float.t(esi_1)))
    long double x87_r2_28 = fconvert.t(fconvert.s(x87_r3_20))
    x87_r2_28 - x87_r3_22
    eax_11.w = (x87_r2_28 < x87_r3_22 ? 1 : 0) << 8
        | (is_unordered.t(x87_r2_28, x87_r3_22) ? 1 : 0) << 0xa
        | (x87_r2_28 == x87_r3_22 ? 1 : 0) << 0xe | 0x1000
    bool p_1 = unimplemented  {test ah, 0x5}
    
    if (p_1)
        x87_r4_15 = x87_r2_28
    else
        x87_r3_22 = x87_r2_28
    
    x87_r6_17 - x87_r7_40
    arg6 = sub_70c710(fconvert.t(fconvert.s(x87_r3_22)))
    int32_t eax_12
    eax_12.w = (x87_r6_17 < x87_r7_40 ? 1 : 0) << 8
        | (is_unordered.t(x87_r6_17, x87_r7_40) ? 1 : 0) << 0xa
        | (x87_r6_17 == x87_r7_40 ? 1 : 0) << 0xe | 0x2000
    
    if ((eax_12:1.b & 0x41) != 0)
        x87_r5_6 = x87_r6_17
    
    long double x87_r7_41 = x87_r5_6
    x87_r4_15 - x87_r7_41
    eax_12.w = (x87_r4_15 < x87_r7_41 ? 1 : 0) << 8
        | (is_unordered.t(x87_r4_15, x87_r7_41) ? 1 : 0) << 0xa
        | (x87_r4_15 == x87_r7_41 ? 1 : 0) << 0xe | 0x3000
    
    if ((eax_12:1.b & 0x41) != 0)
        x87_r7_41 = x87_r4_15
    
    long double x87_r7_42 = fconvert.t(fconvert.s(x87_r7_40))
    long double x87_r6_19 = fconvert.t(fconvert.s(x87_r7_41))
    x87_r6_19 - x87_r7_42
    eax_12.w = (x87_r6_19 < x87_r7_42 ? 1 : 0) << 8
        | (is_unordered.t(x87_r6_19, x87_r7_42) ? 1 : 0) << 0xa
        | (x87_r6_19 == x87_r7_42 ? 1 : 0) << 0xe | 0x3000
    bool p_2 = unimplemented  {test ah, 0x5}
    
    if (not(p_2))
        x87_r7_42 = x87_r6_19
    
    long double x87_r7_44 = fconvert.t(fconvert.s(float.t(arg5[2] + esi_1)))
    long double x87_r6_20 = fconvert.t(fconvert.s(x87_r7_42))
    x87_r6_20 - x87_r7_44
    float eax_14
    eax_14.w = (x87_r6_20 < x87_r7_44 ? 1 : 0) << 8
        | (is_unordered.t(x87_r6_20, x87_r7_44) ? 1 : 0) << 0xa
        | (x87_r6_20 == x87_r7_44 ? 1 : 0) << 0xe | 0x3000
    
    if ((eax_14:1.b & 0x41) == 0)
        x87_r7_44 = x87_r6_20
    
    long double x87_r7_46 = fconvert.t(arg9)
    long double x87_r6_21 = fconvert.t(var_18)
    int32_t esi_2 = sub_70c710(fconvert.t(fconvert.s(x87_r7_44)))
    x87_r6_21 - x87_r7_46
    int32_t eax_15
    eax_15.w = (x87_r6_21 < x87_r7_46 ? 1 : 0) << 8
        | (is_unordered.t(x87_r6_21, x87_r7_46) ? 1 : 0) << 0xa
        | (x87_r6_21 == x87_r7_46 ? 1 : 0) << 0xe | 0x3000
    long double x87_r6_22
    long double x87_r7_47
    
    if ((eax_15:1.b & 0x41) != 0)
        arg8 = fconvert.s(x87_r6_21)
        x87_r6_22 = x87_r7_46
        x87_r7_47 = x87_r6_21
    else
        x87_r6_22 = x87_r7_46
        x87_r7_47 = x87_r6_21
        arg8 = fconvert.s(x87_r6_22)
    
    long double x87_r5_8 = fconvert.t(var_14)
    long double x87_r4_17 = fconvert.t(var_20)
    x87_r4_17 - x87_r5_8
    eax_15.w = (x87_r4_17 < x87_r5_8 ? 1 : 0) << 8
        | (is_unordered.t(x87_r4_17, x87_r5_8) ? 1 : 0) << 0xa
        | (x87_r4_17 == x87_r5_8 ? 1 : 0) << 0xe | 0x2000
    long double x87_r4_18
    long double x87_r5_9
    
    if ((eax_15:1.b & 0x41) != 0)
        arg10 = fconvert.s(x87_r4_17)
        x87_r4_18 = x87_r5_8
        x87_r5_9 = x87_r4_17
    else
        x87_r4_18 = x87_r5_8
        x87_r5_9 = x87_r4_17
        arg10 = fconvert.s(x87_r4_18)
    
    long double x87_r3_24 = fconvert.t(arg8)
    long double x87_r2_29 = fconvert.t(arg10)
    x87_r2_29 - x87_r3_24
    eax_15.w = (x87_r2_29 < x87_r3_24 ? 1 : 0) << 8
        | (is_unordered.t(x87_r2_29, x87_r3_24) ? 1 : 0) << 0xa
        | (x87_r2_29 == x87_r3_24 ? 1 : 0) << 0xe | 0x1000
    
    if ((eax_15:1.b & 0x41) != 0)
        x87_r4_18 = x87_r2_29
    else
        x87_r3_24 = x87_r2_29
    
    float ecx_5 = arg5[1]
    long double x87_r3_26 = fconvert.t(fconvert.s(float.t(ecx_5)))
    long double x87_r2_30 = fconvert.t(fconvert.s(x87_r3_24))
    x87_r2_30 - x87_r3_26
    eax_15.w = (x87_r2_30 < x87_r3_26 ? 1 : 0) << 8
        | (is_unordered.t(x87_r2_30, x87_r3_26) ? 1 : 0) << 0xa
        | (x87_r2_30 == x87_r3_26 ? 1 : 0) << 0xe | 0x1000
    bool p_3 = unimplemented  {test ah, 0x5}
    
    if (p_3)
        x87_r4_18 = x87_r2_30
    else
        x87_r3_26 = x87_r2_30
    
    x87_r6_22 - x87_r7_47
    int32_t ebx_2 = sub_70c710(fconvert.t(fconvert.s(x87_r3_26)))
    int32_t eax_16
    eax_16.w = (x87_r6_22 < x87_r7_47 ? 1 : 0) << 8
        | (is_unordered.t(x87_r6_22, x87_r7_47) ? 1 : 0) << 0xa
        | (x87_r6_22 == x87_r7_47 ? 1 : 0) << 0xe | 0x2000
    
    if ((eax_16:1.b & 0x41) != 0)
        x87_r5_9 = x87_r6_22
    
    long double x87_r7_48 = x87_r5_9
    x87_r4_18 - x87_r7_48
    eax_16.w = (x87_r4_18 < x87_r7_48 ? 1 : 0) << 8
        | (is_unordered.t(x87_r4_18, x87_r7_48) ? 1 : 0) << 0xa
        | (x87_r4_18 == x87_r7_48 ? 1 : 0) << 0xe | 0x3000
    
    if ((eax_16:1.b & 0x41) != 0)
        x87_r7_48 = x87_r4_18
    
    long double x87_r7_49 = fconvert.t(fconvert.s(x87_r7_47))
    long double x87_r6_24 = fconvert.t(fconvert.s(x87_r7_48))
    x87_r6_24 - x87_r7_49
    eax_16.w = (x87_r6_24 < x87_r7_49 ? 1 : 0) << 8
        | (is_unordered.t(x87_r6_24, x87_r7_49) ? 1 : 0) << 0xa
        | (x87_r6_24 == x87_r7_49 ? 1 : 0) << 0xe | 0x3000
    bool p_4 = unimplemented  {test ah, 0x5}
    
    if (not(p_4))
        x87_r7_49 = x87_r6_24
    
    long double x87_r7_51 = fconvert.t(fconvert.s(float.t(arg5[3] i+ ecx_5)))
    long double x87_r6_25 = fconvert.t(fconvert.s(x87_r7_49))
    x87_r6_25 - x87_r7_51
    float eax_18
    eax_18.w = (x87_r6_25 < x87_r7_51 ? 1 : 0) << 8
        | (is_unordered.t(x87_r6_25, x87_r7_51) ? 1 : 0) << 0xa
        | (x87_r6_25 == x87_r7_51 ? 1 : 0) << 0xe | 0x3000
    
    if ((eax_18:1.b & 0x41) == 0)
        x87_r7_51 = x87_r6_25
    
    int32_t j_3 = esi_2 i- arg6
    int32_t i_2 = sub_70c710(fconvert.t(fconvert.s(x87_r7_51))) - ebx_2
    float ebx_3 = (*(*arg4 + 8))(arg6, ebx_2)
    arg7 = ebx_3
    int32_t j_2 = j_3
    result = (*(*arg4 + 0x1c))() - (j_2 << 2)
    long double x87_r7_54 = fconvert.t(fconvert.s(float.t(ebx_2)))
    var_7c:4.d = result
    float var_c_1 = fconvert.s(x87_r7_54 * fconvert.t(var_70_1) + fconvert.t(fconvert.s(
        fconvert.t(fconvert.s(x87_r5 * x87_r2 - x87_r4_2 * x87_r7_14)) * x87_r3_7)))
    float var_8_1 = fconvert.s(x87_r7_54 * fconvert.t(var_40_1) + fconvert.t(fconvert.s(
        fconvert.t(fconvert.s(x87_r2_5 * x87_r4_2 - x87_r1_5 * x87_r5)) * x87_r3_7)))
    float var_10_1 =
        fconvert.s(x87_r7_54 * fconvert.t(var_34_1) + fconvert.t(fconvert.s(x87_r3_7 * x87_r2_21)))
    long double x87_r7_58 = fconvert.t(fconvert.s(float.t(arg6)))
    
    if (i_2 s> 0)
        long double x87_r7_60 = fconvert.t(256.0)
        int32_t i_1 = i_2
        int32_t i
        
        do
            arg6 = fconvert.s(fconvert.t(fconvert.s(x87_r7_58 * fconvert.t(var_74_1)))
                + fconvert.t(var_c_1))
            arg8 = fconvert.s(fconvert.t(fconvert.s(x87_r7_58 * fconvert.t(var_44_1)))
                + fconvert.t(var_8_1))
            arg10 = fconvert.s(fconvert.t(fconvert.s(x87_r7_58 * fconvert.t(var_38_1)))
                + fconvert.t(var_10_1))
            
            if (j_2 s> 0)
                int32_t j_1 = j_2
                int32_t j
                
                do
                    long double x87_r6_42 = fconvert.t(arg8)
                    long double x87_r4_20 = fconvert.t(arg6)
                    long double x87_r3_30 = fconvert.t(arg10)
                    long double x87_r2_33 = float.t(1)
                    long double x87_r2_38 = fconvert.t(fconvert.s(x87_r2_33 / x87_r2_33))
                    int32_t eax_24 = sub_70c710(fconvert.t(fconvert.s((
                        x87_r6_42 * fconvert.t(var_a0_1) + x87_r4_20 * fconvert.t(var_90_1)
                        + x87_r3_30 * fconvert.t(var_b0_1)) * x87_r2_38)) * x87_r7_60)
                    int32_t eax_25 = sub_70c710(fconvert.t(fconvert.s(x87_r2_38 * (
                        x87_r6_42 * fconvert.t(var_80_1) + x87_r4_20 * fconvert.t(var_8c:4.d)
                        + x87_r3_30 * fconvert.t(var_9c:4.d)))) * x87_r7_60)
                    arg6 = zx.d(eax_24.b)
                    int32_t esi_5 = eax_24 s>> 8
                    int32_t eax_26 = eax_25 s>> 8
                    arg9 = zx.d(eax_25.b)
                    arg8 = esi_5
                    int32_t edx_9 = esi_5 + 1
                    int32_t ecx_12 = eax_26 + 1
                    
                    if (esi_5 s< 0)
                        arg8 = 0
                        esi_5 = 0
                    else if (esi_5 s> eax_7)
                        arg8 = eax_7
                        esi_5 = eax_7
                    
                    if (eax_26 s< 0)
                        eax_26 = 0
                    else if (eax_26 s> eax_9 - 1)
                        eax_26 = eax_9 - 1
                    
                    if (edx_9 s< 0)
                        edx_9 = 0
                    else if (edx_9 s> eax_7)
                        edx_9 = eax_7
                    
                    if (ecx_12 s< 0)
                        ecx_12 = 0
                    else if (ecx_12 s> eax_9 - 1)
                        ecx_12 = eax_9 - 1
                    
                    int32_t eax_27 = eax_26 * eax_4
                    char* esi_7 = eax_27 + (esi_5 << 2) + edi_2
                    int32_t eax_29 = ecx_12 * eax_4
                    float eax_31 = eax_29 + (edx_9 << 2) + edi_2
                    char* ebx_9 = eax_27 + (edx_9 << 2) + edi_2
                    int32_t ecx_15 = eax_29 + (arg8 << 2) + edi_2
                    uint32_t edi_3 = zx.d(esi_7[1])
                    uint32_t eax_32 = zx.d(*esi_7)
                    int32_t ecx_20 = (((zx.d(*ebx_9) - eax_32) i* arg6) s>> 8) + eax_32
                    int32_t eax_37 = (((zx.d(ebx_9[1]) - edi_3) i* arg6) s>> 8) + edi_3
                    uint32_t edi_4 = zx.d(esi_7[2])
                    uint32_t esi_8 = zx.d(esi_7[3])
                    double var_2c_1
                    var_2c_1:4.d = edi_4
                    int32_t edx_15 = (((zx.d(ebx_9[2]) - edi_4) i* arg6) s>> 8) + edi_4
                    int32_t ebx_14 = (((zx.d(ebx_9[3]) - esi_8) i* arg6) s>> 8) + esi_8
                    uint32_t edi_5 = zx.d(*(ecx_15 + 1))
                    var_2c_1:4.d = edi_5
                    int32_t esi_19 = ((((((zx.d(*(eax_31 i+ 1)) - edi_5) i* arg6) s>> 8) - eax_37
                        + edi_5) i* arg9) s>> 8) + eax_37
                    uint32_t eax_39 = zx.d(*(ecx_15 + 2))
                    var_2c_1:4.d = eax_39
                    int32_t edi_15 = ((((((zx.d(*(eax_31 i+ 2)) - eax_39) i* arg6) s>> 8) - edx_15
                        + eax_39) i* arg9) s>> 8) + edx_15
                    uint32_t edx_17 = zx.d(*(ecx_15 + 3))
                    var_2c_1:4.d = edx_17
                    uint32_t edx_19 = zx.d(*ecx_15)
                    int32_t eax_49 = ((((((zx.d(*(eax_31 i+ 3)) - edx_17) i* arg6) s>> 8) - ebx_14
                        + edx_17) i* arg9) s>> 8) + ebx_14
                    arg8 = edx_19
                    *arg7 += (((((((((zx.d(*eax_31) - edx_19) i* arg6) s>> 8) - ecx_20 + edx_19)
                        i* arg9) s>> 8) - zx.d(*arg7) + ecx_20) * eax_49) s>> 8).b
                    char ecx_21 = *(arg7 i+ 1)
                    char ebx_32 = (((esi_19 - zx.d(ecx_21)) * eax_49) s>> 8).b + ecx_21
                    ecx_21 = *(arg7 i+ 2)
                    *(arg7 i+ 1) = ebx_32
                    edi_2 = var_68_1
                    arg6 = fconvert.s(x87_r4_20 + fconvert.t(var_74_1))
                    *(arg7 i+ 2) = (((edi_15 - zx.d(ecx_21)) * eax_49) s>> 8).b + ecx_21
                    ebx_3 = arg7 i+ 4
                    j = j_1
                    j_1 -= 1
                    arg8 = fconvert.s(x87_r6_42 + fconvert.t(var_44_1))
                    arg7 = ebx_3
                    arg10 = fconvert.s(x87_r3_30 + fconvert.t(var_38_1))
                while (j != 1)
                result = var_7c:4.d
                j_2 = j_3
            
            ebx_3 += result
            i = i_1
            i_1 -= 1
            arg7 = ebx_3
            var_c_1 = fconvert.s(fconvert.t(var_c_1) + fconvert.t(var_70_1))
            var_8_1 = fconvert.s(fconvert.t(var_8_1) + fconvert.t(var_40_1))
            var_10_1 = fconvert.s(fconvert.t(var_10_1) + fconvert.t(var_34_1))
        while (i != 1)

return result
