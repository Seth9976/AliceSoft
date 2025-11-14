// 函数: sub_4a1900
// 地址: 0x4a1900
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

float* eax = arg10
float* ebx = arg8
float* edx = arg6
arg10 = fconvert.s(fconvert.t(*edx))
arg8 = fconvert.s(fconvert.t(edx[1]))
float var_44 = fconvert.s(fconvert.t(*ebx))
float var_4 = fconvert.s(fconvert.t(ebx[1]))
float var_14 = fconvert.s(fconvert.t(*arg2))
float var_c = fconvert.s(fconvert.t(arg2[1]))
float var_8 = fconvert.s(fconvert.t(*eax))
float* eax_1 = arg7
float var_10 = fconvert.s(fconvert.t(eax[1]))
float var_3c = fconvert.s(fconvert.t(*eax_1))
float* result = arg9
float var_40 = fconvert.s(fconvert.t(eax_1[1]))
arg9 = fconvert.s(fconvert.t(*result))
float var_34 = fconvert.s(fconvert.t(result[1]))
float var_30 = fconvert.s(fconvert.t(*arg3))
float var_38 = fconvert.s(fconvert.t(arg3[1]))
long double x87_r7_14 = fconvert.t(var_4)
long double x87_r5 = fconvert.t(var_c)
long double x87_r4_2 = fconvert.t(var_14)
long double x87_r2 = fconvert.t(var_44)
double var_68 = fconvert.d(x87_r2)
long double x87_r2_5 = fconvert.t(arg8)
long double x87_r1_5 = fconvert.t(arg10)
long double x87_r2_15 = fconvert.t(var_10)
long double x87_r2_17 = fconvert.t(var_8)
long double x87_r5_2 = fconvert.t(fconvert.s(fconvert.t(var_68) - fconvert.t(fconvert.d(x87_r1_5))))
long double x87_r2_21 =
    fconvert.t(fconvert.s(x87_r7_14 * fconvert.t(arg10) - x87_r2 * fconvert.t(arg8)))
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
    + x87_r5 * fconvert.t(fconvert.s(x87_r2_17 - fconvert.t(var_68)))
    + fconvert.t(fconvert.s(x87_r2 * x87_r2_15 - x87_r7_14 * x87_r2_17))))
x87_r2_25 - x87_r1_13
result.w = (x87_r2_25 < x87_r1_13 ? 1 : 0) << 8
    | (is_unordered.t(x87_r2_25, x87_r1_13) ? 1 : 0) << 0xa
    | (x87_r2_25 == x87_r1_13 ? 1 : 0) << 0xe | 0x1800
bool p = unimplemented  {test ah, 0x5}

if (p)
    long double x87_r3_6 = float.t(1)
    long double x87_r3_7 = fconvert.t(fconvert.s(x87_r3_6 / x87_r3_6))
    float var_5c_1 = fconvert.s(fconvert.t(fconvert.s(x87_r7_14 - x87_r5)) * x87_r3_7)
    float var_58_1 = fconvert.s(fconvert.t(fconvert.s(x87_r4_2 - x87_r2)) * x87_r3_7)
    float var_20_1 =
        fconvert.s(fconvert.t(fconvert.s(fconvert.t(fconvert.d(x87_r5)) - x87_r2_5)) * x87_r3_7)
    float var_1c_1 =
        fconvert.s(fconvert.t(fconvert.s(x87_r1_5 - fconvert.t(fconvert.d(x87_r4_2)))) * x87_r3_7)
    float var_2c_1 = fconvert.s(x87_r1_13 * x87_r3_7)
    float var_28_1 = fconvert.s(x87_r5_2 * x87_r3_7)
    var_68:4.d = (*(*arg12 + 8))(0, 0)
    double var_50_1
    var_50_1:4.d = (*(*arg12 + 0x1c))()
    double var_80
    var_80:4.d = (*(*arg12 + 0x10))() - 1
    double var_98
    var_98:4.d = (*(*arg12 + 0x14))() - 1
    float var_6c_1 = fconvert.s(fconvert.t(var_3c) / fconvert.t(*(arg6 i+ 0xc)))
    float var_88_1 = fconvert.s(fconvert.t(arg9) / fconvert.t(ebx[3]))
    float var_74_1 = fconvert.s(fconvert.t(var_30) / fconvert.t(arg2[3]))
    float var_8c_1 = fconvert.s(fconvert.t(var_40) / fconvert.t(*(arg6 i+ 0xc)))
    float var_84_1 = fconvert.s(fconvert.t(var_34) / fconvert.t(ebx[3]))
    float var_a8_1 = fconvert.s(fconvert.t(var_38) / fconvert.t(arg2[3]))
    *(arg6 i+ 0xc)
    long double x87_r6_12 = float.t(1)
    float var_30_1 = fconvert.s(x87_r6_12 / fconvert.t(ebx[3]))
    float var_70_1 = fconvert.s(x87_r6_12 / fconvert.t(arg2[3]))
    long double x87_r7_39 = fconvert.t(arg10)
    long double x87_r6_16 = fconvert.t(var_44)
    x87_r6_16 - x87_r7_39
    float eax_12
    eax_12.w = (x87_r6_16 < x87_r7_39 ? 1 : 0) << 8
        | (is_unordered.t(x87_r6_16, x87_r7_39) ? 1 : 0) << 0xa
        | (x87_r6_16 == x87_r7_39 ? 1 : 0) << 0xe | 0x3000
    long double x87_r6_17
    long double x87_r7_40
    
    if ((eax_12:1.b & 0x41) != 0)
        arg6 = fconvert.s(x87_r6_16)
        x87_r6_17 = x87_r7_39
        x87_r7_40 = x87_r6_16
    else
        x87_r6_17 = x87_r7_39
        x87_r7_40 = x87_r6_16
        arg6 = fconvert.s(x87_r6_17)
    
    long double x87_r5_5 = fconvert.t(var_14)
    long double x87_r4_14 = fconvert.t(var_8)
    x87_r4_14 - x87_r5_5
    eax_12.w = (x87_r4_14 < x87_r5_5 ? 1 : 0) << 8
        | (is_unordered.t(x87_r4_14, x87_r5_5) ? 1 : 0) << 0xa
        | (x87_r4_14 == x87_r5_5 ? 1 : 0) << 0xe | 0x2000
    long double x87_r4_15
    long double x87_r5_6
    
    if ((eax_12:1.b & 0x41) != 0)
        arg10 = fconvert.s(x87_r4_14)
        x87_r4_15 = x87_r5_5
        x87_r5_6 = x87_r4_14
    else
        x87_r4_15 = x87_r5_5
        x87_r5_6 = x87_r4_14
        arg10 = fconvert.s(x87_r4_15)
    
    long double x87_r3_20 = fconvert.t(arg6)
    long double x87_r2_27 = fconvert.t(arg10)
    x87_r2_27 - x87_r3_20
    eax_12.w = (x87_r2_27 < x87_r3_20 ? 1 : 0) << 8
        | (is_unordered.t(x87_r2_27, x87_r3_20) ? 1 : 0) << 0xa
        | (x87_r2_27 == x87_r3_20 ? 1 : 0) << 0xe | 0x1000
    
    if ((eax_12:1.b & 0x41) != 0)
        x87_r4_15 = x87_r2_27
    else
        x87_r3_20 = x87_r2_27
    
    float esi_1 = *arg5
    long double x87_r3_22 = fconvert.t(fconvert.s(float.t(esi_1)))
    long double x87_r2_28 = fconvert.t(fconvert.s(x87_r3_20))
    x87_r2_28 - x87_r3_22
    eax_12.w = (x87_r2_28 < x87_r3_22 ? 1 : 0) << 8
        | (is_unordered.t(x87_r2_28, x87_r3_22) ? 1 : 0) << 0xa
        | (x87_r2_28 == x87_r3_22 ? 1 : 0) << 0xe | 0x1000
    bool p_1 = unimplemented  {test ah, 0x5}
    
    if (p_1)
        x87_r4_15 = x87_r2_28
    else
        x87_r3_22 = x87_r2_28
    
    x87_r6_17 - x87_r7_40
    arg6 = sub_70c710(fconvert.t(fconvert.s(x87_r3_22)))
    int32_t eax_13
    eax_13.w = (x87_r6_17 < x87_r7_40 ? 1 : 0) << 8
        | (is_unordered.t(x87_r6_17, x87_r7_40) ? 1 : 0) << 0xa
        | (x87_r6_17 == x87_r7_40 ? 1 : 0) << 0xe | 0x2000
    
    if ((eax_13:1.b & 0x41) != 0)
        x87_r5_6 = x87_r6_17
    
    long double x87_r7_41 = x87_r5_6
    x87_r4_15 - x87_r7_41
    eax_13.w = (x87_r4_15 < x87_r7_41 ? 1 : 0) << 8
        | (is_unordered.t(x87_r4_15, x87_r7_41) ? 1 : 0) << 0xa
        | (x87_r4_15 == x87_r7_41 ? 1 : 0) << 0xe | 0x3000
    
    if ((eax_13:1.b & 0x41) != 0)
        x87_r7_41 = x87_r4_15
    
    long double x87_r7_42 = fconvert.t(fconvert.s(x87_r7_40))
    long double x87_r6_19 = fconvert.t(fconvert.s(x87_r7_41))
    x87_r6_19 - x87_r7_42
    eax_13.w = (x87_r6_19 < x87_r7_42 ? 1 : 0) << 8
        | (is_unordered.t(x87_r6_19, x87_r7_42) ? 1 : 0) << 0xa
        | (x87_r6_19 == x87_r7_42 ? 1 : 0) << 0xe | 0x3000
    bool p_2 = unimplemented  {test ah, 0x5}
    
    if (not(p_2))
        x87_r7_42 = x87_r6_19
    
    long double x87_r7_44 = fconvert.t(fconvert.s(float.t(arg5[2] i+ esi_1)))
    long double x87_r6_20 = fconvert.t(fconvert.s(x87_r7_42))
    x87_r6_20 - x87_r7_44
    float eax_15
    eax_15.w = (x87_r6_20 < x87_r7_44 ? 1 : 0) << 8
        | (is_unordered.t(x87_r6_20, x87_r7_44) ? 1 : 0) << 0xa
        | (x87_r6_20 == x87_r7_44 ? 1 : 0) << 0xe | 0x3000
    
    if ((eax_15:1.b & 0x41) == 0)
        x87_r7_44 = x87_r6_20
    
    long double x87_r7_46 = fconvert.t(arg8)
    long double x87_r6_21 = fconvert.t(var_4)
    int32_t edi_1 = sub_70c710(fconvert.t(fconvert.s(x87_r7_44)))
    x87_r6_21 - x87_r7_46
    int32_t eax_16
    eax_16.w = (x87_r6_21 < x87_r7_46 ? 1 : 0) << 8
        | (is_unordered.t(x87_r6_21, x87_r7_46) ? 1 : 0) << 0xa
        | (x87_r6_21 == x87_r7_46 ? 1 : 0) << 0xe | 0x3000
    long double x87_r6_22
    long double x87_r7_47
    
    if ((eax_16:1.b & 0x41) != 0)
        arg10 = fconvert.s(x87_r6_21)
        x87_r6_22 = x87_r7_46
        x87_r7_47 = x87_r6_21
    else
        x87_r6_22 = x87_r7_46
        x87_r7_47 = x87_r6_21
        arg10 = fconvert.s(x87_r6_22)
    
    long double x87_r5_8 = fconvert.t(var_c)
    long double x87_r4_17 = fconvert.t(var_10)
    x87_r4_17 - x87_r5_8
    eax_16.w = (x87_r4_17 < x87_r5_8 ? 1 : 0) << 8
        | (is_unordered.t(x87_r4_17, x87_r5_8) ? 1 : 0) << 0xa
        | (x87_r4_17 == x87_r5_8 ? 1 : 0) << 0xe | 0x2000
    long double x87_r4_18
    long double x87_r5_9
    
    if ((eax_16:1.b & 0x41) != 0)
        arg8 = fconvert.s(x87_r4_17)
        x87_r4_18 = x87_r5_8
        x87_r5_9 = x87_r4_17
    else
        x87_r4_18 = x87_r5_8
        x87_r5_9 = x87_r4_17
        arg8 = fconvert.s(x87_r4_18)
    
    long double x87_r3_24 = fconvert.t(arg10)
    long double x87_r2_29 = fconvert.t(arg8)
    x87_r2_29 - x87_r3_24
    eax_16.w = (x87_r2_29 < x87_r3_24 ? 1 : 0) << 8
        | (is_unordered.t(x87_r2_29, x87_r3_24) ? 1 : 0) << 0xa
        | (x87_r2_29 == x87_r3_24 ? 1 : 0) << 0xe | 0x1000
    
    if ((eax_16:1.b & 0x41) != 0)
        x87_r4_18 = x87_r2_29
    else
        x87_r3_24 = x87_r2_29
    
    float ecx_4 = arg5[1]
    long double x87_r3_26 = fconvert.t(fconvert.s(float.t(ecx_4)))
    long double x87_r2_30 = fconvert.t(fconvert.s(x87_r3_24))
    x87_r2_30 - x87_r3_26
    eax_16.w = (x87_r2_30 < x87_r3_26 ? 1 : 0) << 8
        | (is_unordered.t(x87_r2_30, x87_r3_26) ? 1 : 0) << 0xa
        | (x87_r2_30 == x87_r3_26 ? 1 : 0) << 0xe | 0x1000
    bool p_3 = unimplemented  {test ah, 0x5}
    
    if (p_3)
        x87_r4_18 = x87_r2_30
    else
        x87_r3_26 = x87_r2_30
    
    x87_r6_22 - x87_r7_47
    int32_t esi_2 = sub_70c710(fconvert.t(fconvert.s(x87_r3_26)))
    int32_t eax_17
    eax_17.w = (x87_r6_22 < x87_r7_47 ? 1 : 0) << 8
        | (is_unordered.t(x87_r6_22, x87_r7_47) ? 1 : 0) << 0xa
        | (x87_r6_22 == x87_r7_47 ? 1 : 0) << 0xe | 0x2000
    
    if ((eax_17:1.b & 0x41) != 0)
        x87_r5_9 = x87_r6_22
    
    long double x87_r7_48 = x87_r5_9
    x87_r4_18 - x87_r7_48
    eax_17.w = (x87_r4_18 < x87_r7_48 ? 1 : 0) << 8
        | (is_unordered.t(x87_r4_18, x87_r7_48) ? 1 : 0) << 0xa
        | (x87_r4_18 == x87_r7_48 ? 1 : 0) << 0xe | 0x3000
    
    if ((eax_17:1.b & 0x41) != 0)
        x87_r7_48 = x87_r4_18
    
    long double x87_r7_49 = fconvert.t(fconvert.s(x87_r7_47))
    long double x87_r6_24 = fconvert.t(fconvert.s(x87_r7_48))
    x87_r6_24 - x87_r7_49
    eax_17.w = (x87_r6_24 < x87_r7_49 ? 1 : 0) << 8
        | (is_unordered.t(x87_r6_24, x87_r7_49) ? 1 : 0) << 0xa
        | (x87_r6_24 == x87_r7_49 ? 1 : 0) << 0xe | 0x3000
    bool p_4 = unimplemented  {test ah, 0x5}
    
    if (not(p_4))
        x87_r7_49 = x87_r6_24
    
    long double x87_r7_51 = fconvert.t(fconvert.s(float.t(arg5[3] i+ ecx_4)))
    long double x87_r6_25 = fconvert.t(fconvert.s(x87_r7_49))
    x87_r6_25 - x87_r7_51
    eax_17.w = (x87_r6_25 < x87_r7_51 ? 1 : 0) << 8
        | (is_unordered.t(x87_r6_25, x87_r7_51) ? 1 : 0) << 0xa
        | (x87_r6_25 == x87_r7_51 ? 1 : 0) << 0xe | 0x3000
    
    if ((eax_17:1.b & 0x41) == 0)
        x87_r7_51 = x87_r6_25
    
    int32_t j_3 = edi_1 i- arg6
    int32_t i_2 = sub_70c710(fconvert.t(fconvert.s(x87_r7_51))) - esi_2
    void* esi_3 = (*(*arg4 + 8))(arg6, esi_2)
    int32_t j_2 = j_3
    result = (*(*arg4 + 0x1c))() - (j_2 << 2)
    long double x87_r7_54 = fconvert.t(fconvert.s(float.t(esi_2)))
    float* result_1 = result
    arg10 = fconvert.s(x87_r7_54 * fconvert.t(var_58_1) + fconvert.t(fconvert.s(
        fconvert.t(fconvert.s(x87_r5 * x87_r2 - x87_r4_2 * x87_r7_14)) * x87_r3_7)))
    arg8 = fconvert.s(x87_r7_54 * fconvert.t(var_1c_1) + fconvert.t(fconvert.s(
        fconvert.t(fconvert.s(x87_r2_5 * x87_r4_2 - x87_r1_5 * x87_r5)) * x87_r3_7)))
    arg7 =
        fconvert.s(x87_r7_54 * fconvert.t(var_28_1) + fconvert.t(fconvert.s(x87_r3_7 * x87_r2_21)))
    long double x87_r7_58 = fconvert.t(fconvert.s(float.t(arg6)))
    
    if (i_2 s> 0)
        long double x87_r7_60 = fconvert.t(256.0)
        int32_t i_1 = i_2
        int32_t i
        
        do
            arg6 = fconvert.s(fconvert.t(fconvert.s(x87_r7_58 * fconvert.t(var_5c_1)))
                + fconvert.t(arg10))
            arg9 = fconvert.s(fconvert.t(fconvert.s(x87_r7_58 * fconvert.t(var_20_1)))
                + fconvert.t(arg8))
            float var_10_1 = fconvert.s(fconvert.t(fconvert.s(x87_r7_58 * fconvert.t(var_2c_1)))
                + fconvert.t(arg7))
            
            if (j_2 s> 0)
                int32_t j_1 = j_2
                int32_t j
                
                do
                    long double x87_r6_42 = fconvert.t(arg9)
                    long double x87_r4_20 = fconvert.t(arg6)
                    long double x87_r3_30 = fconvert.t(var_10_1)
                    long double x87_r2_33 = float.t(1)
                    long double x87_r2_38 = fconvert.t(fconvert.s(x87_r2_33 / x87_r2_33))
                    int32_t edi_4 = sub_70c710(fconvert.t(fconvert.s((
                        x87_r6_42 * fconvert.t(var_88_1) + x87_r4_20 * fconvert.t(var_6c_1)
                        + x87_r3_30 * fconvert.t(var_74_1)) * x87_r2_38)) * x87_r7_60) s>> 8
                    int32_t eax_24
                    int32_t ecx_8
                    eax_24, ecx_8 = sub_70c710(fconvert.t(fconvert.s(x87_r2_38 * (
                        x87_r6_42 * fconvert.t(var_84_1) + x87_r4_20 * fconvert.t(var_8c_1)
                        + x87_r3_30 * fconvert.t(var_a8_1)))) * x87_r7_60)
                    int32_t eax_25 = eax_24 s>> 8
                    
                    if (edi_4 s>= 0)
                        ecx_8 = var_80:4.d
                        
                        if (edi_4 s> ecx_8)
                            edi_4 = ecx_8
                    else
                        edi_4 = 0
                    
                    if (eax_25 s>= 0)
                        ecx_8 = var_98:4.d
                        
                        if (eax_25 s> ecx_8)
                            eax_25 = ecx_8
                    else
                        eax_25 = 0
                    
                    arg6 = fconvert.s(x87_r4_20 + fconvert.t(var_5c_1))
                    int32_t eax_27 = eax_25 * var_50_1:4.d + var_68:4.d
                    arg9 = fconvert.s(x87_r6_42 + fconvert.t(var_20_1))
                    ecx_8.b = *esi_3
                    void* edi_5 = eax_27 + (edi_4 << 2)
                    var_10_1 = fconvert.s(x87_r3_30 + fconvert.t(var_2c_1))
                    int32_t eax_30 = (zx.d(*(edi_5 + 3)) * arg11) s>> 8
                    char ebx_6 =
                        (((zx.d(*(eax_27 + (edi_4 << 2))) - zx.d(ecx_8.b)) * eax_30) s>> 8).b
                        + ecx_8.b
                    ecx_8.b = *(esi_3 + 1)
                    *esi_3 = ebx_6
                    char edx_14 =
                        (((zx.d(*(edi_5 + 1)) - zx.d(ecx_8.b)) * eax_30) s>> 8).b + ecx_8.b
                    ecx_8.b = *(esi_3 + 2)
                    *(esi_3 + 1) = edx_14
                    *(esi_3 + 2) =
                        (((zx.d(*(edi_5 + 2)) - zx.d(ecx_8.b)) * eax_30) s>> 8).b + ecx_8.b
                    esi_3 += 4
                    j = j_1
                    j_1 -= 1
                while (j != 1)
                result = result_1
                j_2 = j_3
            
            esi_3 += result
            i = i_1
            i_1 -= 1
            arg10 = fconvert.s(fconvert.t(arg10) + fconvert.t(var_58_1))
            arg8 = fconvert.s(fconvert.t(arg8) + fconvert.t(var_1c_1))
            arg7 = fconvert.s(fconvert.t(arg7) + fconvert.t(var_28_1))
        while (i != 1)

return result
