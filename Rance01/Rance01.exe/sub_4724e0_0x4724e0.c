// 函数: sub_4724e0
// 地址: 0x4724e0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

float* edx = arg7
float* eax = arg12
arg12 = fconvert.s(fconvert.t(*edx))
float* ebx = arg11
arg11 = fconvert.s(fconvert.t(edx[1]))
float* edx_1 = arg9
float var_40 = fconvert.s(fconvert.t(*edx_1))
float var_4 = fconvert.s(fconvert.t(edx_1[1]))
float var_4c = fconvert.s(fconvert.t(*ebx))
float var_8 = fconvert.s(fconvert.t(ebx[1]))
float var_10 = fconvert.s(fconvert.t(*eax))
float* eax_1 = arg8
float var_c = fconvert.s(fconvert.t(eax[1]))
float var_38 = fconvert.s(fconvert.t(*eax_1))
float* result = arg10
float var_30 = fconvert.s(fconvert.t(eax_1[1]))
arg10 = fconvert.s(fconvert.t(*result))
float var_34 = fconvert.s(fconvert.t(result[1]))
float var_2c = fconvert.s(fconvert.t(*arg3))
float var_3c = fconvert.s(fconvert.t(arg3[1]))
long double x87_r7_14 = fconvert.t(var_4)
long double x87_r5 = fconvert.t(var_8)
long double x87_r4_2 = fconvert.t(var_4c)
long double x87_r2 = fconvert.t(var_40)
double var_60 = fconvert.d(x87_r2)
long double x87_r2_5 = fconvert.t(arg11)
long double x87_r1_5 = fconvert.t(arg12)
long double x87_r2_15 = fconvert.t(var_c)
long double x87_r2_17 = fconvert.t(var_10)
long double x87_r5_2 = fconvert.t(fconvert.s(fconvert.t(var_60) - fconvert.t(fconvert.d(x87_r1_5))))
long double x87_r2_21 =
    fconvert.t(fconvert.s(x87_r7_14 * fconvert.t(arg12) - x87_r2 * fconvert.t(arg11)))
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
    + x87_r5 * fconvert.t(fconvert.s(x87_r2_17 - fconvert.t(var_60)))
    + fconvert.t(fconvert.s(x87_r2 * x87_r2_15 - x87_r7_14 * x87_r2_17))))
x87_r2_25 - x87_r1_13
result.w = (x87_r2_25 < x87_r1_13 ? 1 : 0) << 8
    | (is_unordered.t(x87_r2_25, x87_r1_13) ? 1 : 0) << 0xa
    | (x87_r2_25 == x87_r1_13 ? 1 : 0) << 0xe | 0x1800
bool p = unimplemented  {test ah, 0x5}

if (p)
    long double x87_r3_6 = float.t(1)
    long double x87_r3_7 = fconvert.t(fconvert.s(x87_r3_6 / x87_r3_6))
    float var_58_1 = fconvert.s(fconvert.t(fconvert.s(x87_r7_14 - x87_r5)) * x87_r3_7)
    float var_54_1 = fconvert.s(fconvert.t(fconvert.s(x87_r4_2 - x87_r2)) * x87_r3_7)
    float var_1c_1 =
        fconvert.s(fconvert.t(fconvert.s(fconvert.t(fconvert.d(x87_r5)) - x87_r2_5)) * x87_r3_7)
    float var_18_1 =
        fconvert.s(fconvert.t(fconvert.s(x87_r1_5 - fconvert.t(fconvert.d(x87_r4_2)))) * x87_r3_7)
    float var_28_1 = fconvert.s(x87_r1_13 * x87_r3_7)
    float var_24_1 = fconvert.s(x87_r5_2 * x87_r3_7)
    var_60:4.d = (*(*arg13 + 8))(0, 0)
    double var_48_1
    var_48_1:4.d = (*(*arg13 + 0x1c))()
    double var_78
    var_78:4.d = (*(*arg13 + 0x10))() - 1
    double var_90
    var_90:4.d = (*(*arg13 + 0x14))() - 1
    float var_38_1 = fconvert.s(fconvert.t(var_38) / fconvert.t(*(arg7 i+ 0xc)))
    float var_64_1 = fconvert.s(fconvert.t(arg10) / fconvert.t(*(arg9 i+ 0xc)))
    float var_6c_1 = fconvert.s(fconvert.t(var_2c) / fconvert.t(ebx[3]))
    float var_84_1 = fconvert.s(fconvert.t(var_30) / fconvert.t(*(arg7 i+ 0xc)))
    float var_7c_1 = fconvert.s(fconvert.t(var_34) / fconvert.t(*(arg9 i+ 0xc)))
    float var_a0_1 = fconvert.s(fconvert.t(var_3c) / fconvert.t(ebx[3]))
    *(arg7 i+ 0xc)
    long double x87_r6_12 = float.t(1)
    float var_2c_1 = fconvert.s(x87_r6_12 / fconvert.t(*(arg9 i+ 0xc)))
    float var_80_1 = fconvert.s(x87_r6_12 / fconvert.t(ebx[3]))
    long double x87_r7_39 = fconvert.t(arg12)
    long double x87_r6_16 = fconvert.t(var_40)
    x87_r6_16 - x87_r7_39
    float eax_12
    eax_12.w = (x87_r6_16 < x87_r7_39 ? 1 : 0) << 8
        | (is_unordered.t(x87_r6_16, x87_r7_39) ? 1 : 0) << 0xa
        | (x87_r6_16 == x87_r7_39 ? 1 : 0) << 0xe | 0x3000
    long double x87_r6_17
    long double x87_r7_40
    
    if ((eax_12:1.b & 0x41) != 0)
        arg7 = fconvert.s(x87_r6_16)
        x87_r6_17 = x87_r7_39
        x87_r7_40 = x87_r6_16
    else
        x87_r6_17 = x87_r7_39
        x87_r7_40 = x87_r6_16
        arg7 = fconvert.s(x87_r6_17)
    
    long double x87_r5_5 = fconvert.t(var_4c)
    long double x87_r4_14 = fconvert.t(var_10)
    x87_r4_14 - x87_r5_5
    eax_12.w = (x87_r4_14 < x87_r5_5 ? 1 : 0) << 8
        | (is_unordered.t(x87_r4_14, x87_r5_5) ? 1 : 0) << 0xa
        | (x87_r4_14 == x87_r5_5 ? 1 : 0) << 0xe | 0x2000
    long double x87_r4_15
    long double x87_r5_6
    
    if ((eax_12:1.b & 0x41) != 0)
        arg9 = fconvert.s(x87_r4_14)
        x87_r4_15 = x87_r5_5
        x87_r5_6 = x87_r4_14
    else
        x87_r4_15 = x87_r5_5
        x87_r5_6 = x87_r4_14
        arg9 = fconvert.s(x87_r4_15)
    
    long double x87_r3_20 = fconvert.t(arg7)
    long double x87_r2_27 = fconvert.t(arg9)
    x87_r2_27 - x87_r3_20
    eax_12.w = (x87_r2_27 < x87_r3_20 ? 1 : 0) << 8
        | (is_unordered.t(x87_r2_27, x87_r3_20) ? 1 : 0) << 0xa
        | (x87_r2_27 == x87_r3_20 ? 1 : 0) << 0xe | 0x1000
    
    if ((eax_12:1.b & 0x41) != 0)
        x87_r4_15 = x87_r2_27
    else
        x87_r3_20 = x87_r2_27
    
    float ebx_1 = *arg6
    long double x87_r3_22 = fconvert.t(fconvert.s(float.t(ebx_1)))
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
    arg7 = sub_70c710(fconvert.t(fconvert.s(x87_r3_22)))
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
    
    long double x87_r7_44 = fconvert.t(fconvert.s(float.t(arg6[2] i+ ebx_1)))
    long double x87_r6_20 = fconvert.t(fconvert.s(x87_r7_42))
    x87_r6_20 - x87_r7_44
    float eax_15
    eax_15.w = (x87_r6_20 < x87_r7_44 ? 1 : 0) << 8
        | (is_unordered.t(x87_r6_20, x87_r7_44) ? 1 : 0) << 0xa
        | (x87_r6_20 == x87_r7_44 ? 1 : 0) << 0xe | 0x3000
    
    if ((eax_15:1.b & 0x41) == 0)
        x87_r7_44 = x87_r6_20
    
    long double x87_r7_46 = fconvert.t(arg11)
    long double x87_r6_21 = fconvert.t(var_4)
    int32_t ebx_2 = sub_70c710(fconvert.t(fconvert.s(x87_r7_44)))
    x87_r6_21 - x87_r7_46
    int32_t eax_16
    eax_16.w = (x87_r6_21 < x87_r7_46 ? 1 : 0) << 8
        | (is_unordered.t(x87_r6_21, x87_r7_46) ? 1 : 0) << 0xa
        | (x87_r6_21 == x87_r7_46 ? 1 : 0) << 0xe | 0x3000
    long double x87_r6_22
    long double x87_r7_47
    
    if ((eax_16:1.b & 0x41) != 0)
        arg9 = fconvert.s(x87_r6_21)
        x87_r6_22 = x87_r7_46
        x87_r7_47 = x87_r6_21
    else
        x87_r6_22 = x87_r7_46
        x87_r7_47 = x87_r6_21
        arg9 = fconvert.s(x87_r6_22)
    
    long double x87_r5_8 = fconvert.t(var_8)
    long double x87_r4_17 = fconvert.t(var_c)
    x87_r4_17 - x87_r5_8
    eax_16.w = (x87_r4_17 < x87_r5_8 ? 1 : 0) << 8
        | (is_unordered.t(x87_r4_17, x87_r5_8) ? 1 : 0) << 0xa
        | (x87_r4_17 == x87_r5_8 ? 1 : 0) << 0xe | 0x2000
    long double x87_r4_18
    long double x87_r5_9
    
    if ((eax_16:1.b & 0x41) != 0)
        arg12 = fconvert.s(x87_r4_17)
        x87_r4_18 = x87_r5_8
        x87_r5_9 = x87_r4_17
    else
        x87_r4_18 = x87_r5_8
        x87_r5_9 = x87_r4_17
        arg12 = fconvert.s(x87_r4_18)
    
    long double x87_r3_24 = fconvert.t(arg9)
    long double x87_r2_29 = fconvert.t(arg12)
    x87_r2_29 - x87_r3_24
    eax_16.w = (x87_r2_29 < x87_r3_24 ? 1 : 0) << 8
        | (is_unordered.t(x87_r2_29, x87_r3_24) ? 1 : 0) << 0xa
        | (x87_r2_29 == x87_r3_24 ? 1 : 0) << 0xe | 0x1000
    
    if ((eax_16:1.b & 0x41) != 0)
        x87_r4_18 = x87_r2_29
    else
        x87_r3_24 = x87_r2_29
    
    float ecx_5 = arg6[1]
    long double x87_r3_26 = fconvert.t(fconvert.s(float.t(ecx_5)))
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
    
    long double x87_r7_51 = fconvert.t(fconvert.s(float.t(arg6[3] i+ ecx_5)))
    long double x87_r6_25 = fconvert.t(fconvert.s(x87_r7_49))
    x87_r6_25 - x87_r7_51
    float eax_19
    eax_19.w = (x87_r6_25 < x87_r7_51 ? 1 : 0) << 8
        | (is_unordered.t(x87_r6_25, x87_r7_51) ? 1 : 0) << 0xa
        | (x87_r6_25 == x87_r7_51 ? 1 : 0) << 0xe | 0x3000
    
    if ((eax_19:1.b & 0x41) == 0)
        x87_r7_51 = x87_r6_25
    
    int32_t j_3 = ebx_2 i- arg7
    int32_t i_2 = sub_70c710(fconvert.t(fconvert.s(x87_r7_51))) - esi_2
    void* esi_3 = (*(*arg5 + 8))(arg7, esi_2)
    int32_t j_2 = j_3
    result = (*(*arg5 + 0x1c))() - (j_2 << 2)
    long double x87_r7_54 = fconvert.t(fconvert.s(float.t(esi_2)))
    float* result_1 = result
    arg9 = fconvert.s(x87_r7_54 * fconvert.t(var_54_1) + fconvert.t(fconvert.s(
        fconvert.t(fconvert.s(x87_r5 * x87_r2 - x87_r4_2 * x87_r7_14)) * x87_r3_7)))
    arg12 = fconvert.s(x87_r7_54 * fconvert.t(var_18_1) + fconvert.t(fconvert.s(
        fconvert.t(fconvert.s(x87_r2_5 * x87_r4_2 - x87_r1_5 * x87_r5)) * x87_r3_7)))
    arg11 =
        fconvert.s(x87_r7_54 * fconvert.t(var_24_1) + fconvert.t(fconvert.s(x87_r3_7 * x87_r2_21)))
    long double x87_r7_58 = fconvert.t(fconvert.s(float.t(arg7)))
    
    if (i_2 s> 0)
        int32_t i_1 = i_2
        int32_t i
        
        do
            arg7 = fconvert.s(fconvert.t(fconvert.s(x87_r7_58 * fconvert.t(var_58_1)))
                + fconvert.t(arg9))
            arg8 = fconvert.s(fconvert.t(fconvert.s(x87_r7_58 * fconvert.t(var_1c_1)))
                + fconvert.t(arg12))
            arg10 = fconvert.s(fconvert.t(fconvert.s(x87_r7_58 * fconvert.t(var_28_1)))
                + fconvert.t(arg11))
            
            if (j_2 s> 0)
                int32_t j_1 = j_2
                int32_t j
                
                do
                    long double x87_r6_42 = fconvert.t(arg8)
                    long double x87_r4_20 = fconvert.t(arg7)
                    long double x87_r3_30 = fconvert.t(arg10)
                    long double x87_r2_33 = float.t(1)
                    long double x87_r2_38 = fconvert.t(fconvert.s(x87_r2_33 / x87_r2_33))
                    int32_t ebx_4 = sub_70c710(fconvert.t(fconvert.s((
                        x87_r6_42 * fconvert.t(var_64_1) + x87_r4_20 * fconvert.t(var_38_1)
                        + x87_r3_30 * fconvert.t(var_6c_1)) * x87_r2_38)))
                    int32_t eax_26
                    int32_t ecx_8
                    eax_26, ecx_8 = sub_70c710(fconvert.t(fconvert.s(x87_r2_38 * (
                        x87_r6_42 * fconvert.t(var_7c_1) + x87_r4_20 * fconvert.t(var_84_1)
                        + x87_r3_30 * fconvert.t(var_a0_1)))))
                    
                    if (ebx_4 s>= 0)
                        ecx_8 = var_78:4.d
                        
                        if (ebx_4 s> ecx_8)
                            ebx_4 = ecx_8
                    else
                        ebx_4 = 0
                    
                    if (eax_26 s>= 0)
                        ecx_8 = var_90:4.d
                        
                        if (eax_26 s> ecx_8)
                            eax_26 = ecx_8
                    else
                        eax_26 = 0
                    
                    arg7 = fconvert.s(x87_r4_20 + fconvert.t(var_58_1))
                    arg8 = fconvert.s(x87_r6_42 + fconvert.t(var_1c_1))
                    ecx_8.b = *esi_3
                    char* eax_29 = eax_26 * var_48_1:4.d + var_60:4.d + (ebx_4 << 2)
                    arg10 = fconvert.s(x87_r3_30 + fconvert.t(var_28_1))
                    char ebx_8 = (((zx.d(*eax_29) - zx.d(ecx_8.b)) * arg4) s>> 8).b + ecx_8.b
                    ecx_8.b = *(esi_3 + 1)
                    *esi_3 = ebx_8
                    char edx_15 = (((zx.d(eax_29[1]) - zx.d(ecx_8.b)) * arg4) s>> 8).b + ecx_8.b
                    ecx_8.b = *(esi_3 + 2)
                    *(esi_3 + 1) = edx_15
                    *(esi_3 + 2) = (((zx.d(eax_29[2]) - zx.d(ecx_8.b)) * arg4) s>> 8).b + ecx_8.b
                    esi_3 += 4
                    j = j_1
                    j_1 -= 1
                while (j != 1)
                result = result_1
                j_2 = j_3
            
            esi_3 += result
            i = i_1
            i_1 -= 1
            arg9 = fconvert.s(fconvert.t(arg9) + fconvert.t(var_54_1))
            arg12 = fconvert.s(fconvert.t(arg12) + fconvert.t(var_18_1))
            arg11 = fconvert.s(fconvert.t(arg11) + fconvert.t(var_24_1))
        while (i != 1)

return result
