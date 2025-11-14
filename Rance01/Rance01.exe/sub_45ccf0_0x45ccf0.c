// 函数: sub_45ccf0
// 地址: 0x45ccf0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

float* eax = arg10
float* ebx = arg6
arg10 = fconvert.s(fconvert.t(*ebx))
float edi = arg9
arg9 = fconvert.s(fconvert.t(ebx[1]))
float* ebx_1 = arg8
float var_c = fconvert.s(fconvert.t(*ebx_1))
float var_18 = fconvert.s(fconvert.t(ebx_1[1]))
float var_10 = fconvert.s(fconvert.t(*edi))
float var_14 = fconvert.s(fconvert.t(*(edi i+ 4)))
float var_1c = fconvert.s(fconvert.t(*eax))
float* result = arg7
float var_8 = fconvert.s(fconvert.t(eax[1]))
float var_20 = fconvert.s(fconvert.t(*result))
float var_4c = fconvert.s(fconvert.t(result[1]))
float var_40 = fconvert.s(fconvert.t(*arg2))
float var_48 = fconvert.s(fconvert.t(arg2[1]))
float var_44 = fconvert.s(fconvert.t(*arg3))
float var_3c = fconvert.s(fconvert.t(arg3[1]))
long double x87_r7_14 = fconvert.t(var_18)
long double x87_r5 = fconvert.t(var_14)
long double x87_r4_2 = fconvert.t(var_10)
long double x87_r2 = fconvert.t(var_c)
double var_7c = fconvert.d(x87_r2)
long double x87_r2_5 = fconvert.t(arg9)
long double x87_r1_5 = fconvert.t(arg10)
long double x87_r2_15 = fconvert.t(var_8)
long double x87_r2_17 = fconvert.t(var_1c)
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
    float var_38_1 =
        fconvert.s(fconvert.t(fconvert.s(fconvert.t(fconvert.d(x87_r5)) - x87_r2_5)) * x87_r3_7)
    float var_34_1 =
        fconvert.s(fconvert.t(fconvert.s(x87_r1_5 - fconvert.t(fconvert.d(x87_r4_2)))) * x87_r3_7)
    float var_2c_1 = fconvert.s(x87_r1_13 * x87_r3_7)
    float var_28_1 = fconvert.s(x87_r5_2 * x87_r3_7)
    int32_t ebx_2 = (*(*arg11 + 8))(0, 0)
    int32_t var_60_1 = ebx_2
    int32_t eax_4 = (*(*arg11 + 0x1c))()
    int32_t eax_7 = (*(*arg11 + 0x10))() - 1
    int32_t eax_9 = (*(*arg11 + 0x14))()
    float var_b4_1 = fconvert.s(fconvert.t(var_20) / fconvert.t(*(arg6 i+ 0xc)))
    float var_94_1 = fconvert.s(fconvert.t(var_40) / fconvert.t(*(arg8 i+ 0xc)))
    float var_84_1 = fconvert.s(fconvert.t(var_44) / fconvert.t(*(edi i+ 0xc)))
    float var_98_1 = fconvert.s(fconvert.t(var_4c) / fconvert.t(*(arg6 i+ 0xc)))
    float var_80_1 = fconvert.s(fconvert.t(var_48) / fconvert.t(*(arg8 i+ 0xc)))
    double var_8c
    var_8c:4.d = fconvert.s(fconvert.t(var_3c) / fconvert.t(*(edi i+ 0xc)))
    *(arg6 i+ 0xc)
    long double x87_r6_12 = float.t(1)
    float var_44_1 = fconvert.s(x87_r6_12 / fconvert.t(*(arg8 i+ 0xc)))
    float var_90_1 = fconvert.s(x87_r6_12 / fconvert.t(*(edi i+ 0xc)))
    long double x87_r7_39 = fconvert.t(arg10)
    long double x87_r6_16 = fconvert.t(var_c)
    x87_r6_16 - x87_r7_39
    float eax_11
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
    
    long double x87_r5_5 = fconvert.t(var_10)
    long double x87_r4_14 = fconvert.t(var_1c)
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
    
    float esi_1 = *arg5
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
    
    long double x87_r7_44 = fconvert.t(fconvert.s(float.t(arg5[2] i+ esi_1)))
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
    long double x87_r4_17 = fconvert.t(var_8)
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
    int32_t edi_2 = sub_70c710(fconvert.t(fconvert.s(x87_r3_26)))
    arg7 = edi_2
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
    int32_t i_2 = sub_70c710(fconvert.t(fconvert.s(x87_r7_51))) - edi_2
    arg9 = (*(*arg4 + 8))(arg6, arg7)
    int32_t j_2 = j_3
    result = (*(*arg4 + 0x1c))() - (j_2 << 2)
    long double x87_r7_54 = fconvert.t(fconvert.s(float.t(arg7)))
    var_7c:4.d = result
    arg7 = fconvert.s(x87_r7_54 * fconvert.t(var_70_1) + fconvert.t(fconvert.s(
        fconvert.t(fconvert.s(x87_r5 * x87_r2 - x87_r4_2 * x87_r7_14)) * x87_r3_7)))
    float var_10_1 = fconvert.s(x87_r7_54 * fconvert.t(var_34_1) + fconvert.t(fconvert.s(
        fconvert.t(fconvert.s(x87_r2_5 * x87_r4_2 - x87_r1_5 * x87_r5)) * x87_r3_7)))
    float var_c_1 =
        fconvert.s(x87_r7_54 * fconvert.t(var_28_1) + fconvert.t(fconvert.s(x87_r3_7 * x87_r2_21)))
    long double x87_r7_58 = fconvert.t(fconvert.s(float.t(arg6)))
    
    if (i_2 s> 0)
        long double x87_r7_60 = fconvert.t(256.0)
        int32_t i_1 = i_2
        int32_t i
        
        do
            arg6 = fconvert.s(fconvert.t(fconvert.s(x87_r7_58 * fconvert.t(var_74_1)))
                + fconvert.t(arg7))
            arg8 = fconvert.s(fconvert.t(fconvert.s(x87_r7_58 * fconvert.t(var_38_1)))
                + fconvert.t(var_10_1))
            arg10 = fconvert.s(fconvert.t(fconvert.s(x87_r7_58 * fconvert.t(var_2c_1)))
                + fconvert.t(var_c_1))
            
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
                        x87_r6_42 * fconvert.t(var_94_1) + x87_r4_20 * fconvert.t(var_b4_1)
                        + x87_r3_30 * fconvert.t(var_84_1)) * x87_r2_38)) * x87_r7_60)
                    int32_t eax_25 = sub_70c710(fconvert.t(fconvert.s(x87_r2_38 * (
                        x87_r6_42 * fconvert.t(var_80_1) + x87_r4_20 * fconvert.t(var_98_1)
                        + x87_r3_30 * fconvert.t(var_8c:4.d)))) * x87_r7_60)
                    uint32_t ecx_10 = zx.d(eax_25.b)
                    int32_t esi_5 = eax_24 s>> 8
                    int32_t eax_26 = eax_25 s>> 8
                    float edx_10 = zx.d(eax_24.b)
                    arg6 = esi_5 + 1
                    int32_t ecx_12 = eax_26 + 1
                    arg10 = esi_5
                    
                    if (esi_5 s< 0)
                        arg10 = 0f
                        esi_5 = 0
                    else if (esi_5 s> eax_7)
                        arg10 = eax_7
                        esi_5 = eax_7
                    
                    if (eax_26 s< 0)
                        eax_26 = 0
                    else if (eax_26 s> eax_9 - 1)
                        eax_26 = eax_9 - 1
                    
                    if (arg6 s< 0)
                        arg6 = 0f
                    else if (arg6 s> eax_7)
                        arg6 = eax_7
                    
                    if (ecx_12 s< 0)
                        ecx_12 = 0
                    else if (ecx_12 s> eax_9 - 1)
                        ecx_12 = eax_9 - 1
                    
                    int32_t edi_8 = eax_26 * eax_4
                    int32_t eax_29 = ecx_12 * eax_4
                    char* edi_10 = edi_8 + (arg6 << 2) + ebx_2
                    char* ecx_16 = eax_29 + (arg10 << 2) + ebx_2
                    char* esi_7 = edi_8 + (esi_5 << 2) + ebx_2
                    uint32_t ecx_18 = zx.d(*esi_7)
                    float eax_31 = eax_29 + (arg6 << 2) + ebx_2
                    uint32_t ebx_3 = zx.d(esi_7[1])
                    int32_t eax_36 = (((zx.d(*edi_10) - ecx_18) i* edx_10) s>> 8) + ecx_18
                    int32_t ecx_23 = (((zx.d(edi_10[1]) - ebx_3) i* edx_10) s>> 8) + ebx_3
                    uint32_t ebx_4 = zx.d(esi_7[2])
                    arg10 = ebx_4
                    int32_t edx_15 = (((zx.d(edi_10[2]) - ebx_4) i* edx_10) s>> 8) + ebx_4
                    uint32_t ebx_5 = zx.d(esi_7[3])
                    int32_t esi_12 = (((zx.d(edi_10[3]) - ebx_5) i* edx_10) s>> 8) + ebx_5
                    uint32_t ebx_6 = zx.d(ecx_16[3])
                    arg10 = zx.d(ecx_16[1])
                    uint32_t ebx_8 = zx.d(ecx_16[2])
                    double var_5c_1
                    var_5c_1:4.d = zx.d(*ecx_16)
                    double var_a4
                    var_a4:4.d = ebx_8
                    int32_t edi_24 = (((((((zx.d(*(eax_31 i+ 2)) - ebx_8) i* edx_10) s>> 8) - edx_15
                        + ebx_8) * ecx_10) s>> 8) + edx_15) << 0x10 | (((((((zx.d(*(eax_31 i+ 1))
                        i- arg10) i* edx_10) s>> 8) - ecx_23 i+ arg10) * ecx_10) s>> 8) + ecx_23) << 8
                    ebx_2 = var_60_1
                    arg6 = fconvert.s(x87_r4_20 + fconvert.t(var_74_1))
                    int32_t ecx_36 = var_5c_1:4.d
                    arg8 = fconvert.s(x87_r6_42 + fconvert.t(var_38_1))
                    arg10 = fconvert.s(x87_r3_30 + fconvert.t(var_2c_1))
                    int32_t edi_26 = edi_24 | (((((((zx.d(*(eax_31 i+ 3)) - ebx_6) i* edx_10) s>> 8)
                        - esi_12 + ebx_6) * ecx_10) s>> 8) + esi_12) << 0x18 | (((((((zx.d(*eax_31)
                        - ecx_36) i* edx_10) s>> 8) - eax_36 + ecx_36) * ecx_10) s>> 8) + eax_36)
                    *arg9 = edi_26
                    j = j_1
                    j_1 -= 1
                    arg9 += 4
                while (j != 1)
                result = var_7c:4.d
                j_2 = j_3
            
            arg9 += result
            i = i_1
            i_1 -= 1
            arg7 = fconvert.s(fconvert.t(arg7) + fconvert.t(var_70_1))
            var_10_1 = fconvert.s(fconvert.t(var_10_1) + fconvert.t(var_34_1))
            var_c_1 = fconvert.s(fconvert.t(var_c_1) + fconvert.t(var_28_1))
        while (i != 1)

return result
