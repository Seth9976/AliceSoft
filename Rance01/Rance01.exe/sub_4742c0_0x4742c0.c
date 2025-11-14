// 函数: sub_4742c0
// 地址: 0x4742c0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

float* eax = arg11
int32_t edi = *arg16
float* edx_1 = arg6
arg11 = fconvert.s(fconvert.t(*edx_1))
float* edx_2 = arg8
arg16 = fconvert.s(fconvert.t(edx_1[1]))
float var_c = fconvert.s(fconvert.t(*edx_2))
float* edx_3 = arg10
float var_14 = fconvert.s(fconvert.t(edx_2[1]))
float var_8 = fconvert.s(fconvert.t(*edx_3))
float var_1c = fconvert.s(fconvert.t(edx_3[1]))
float var_10 = fconvert.s(fconvert.t(*eax))
float* eax_1 = arg7
float var_4 = fconvert.s(fconvert.t(eax[1]))
float var_24 = fconvert.s(fconvert.t(*eax_1))
float* result = arg9
float var_44 = fconvert.s(fconvert.t(eax_1[1]))
arg9 = fconvert.s(fconvert.t(*result))
float var_18 = fconvert.s(fconvert.t(result[1]))
float var_28 = fconvert.s(fconvert.t(*arg3))
float var_20 = fconvert.s(fconvert.t(arg3[1]))
long double x87_r7_14 = fconvert.t(var_14)
long double x87_r5 = fconvert.t(var_1c)
long double x87_r4_2 = fconvert.t(var_8)
long double x87_r2 = fconvert.t(var_c)
double var_68 = fconvert.d(x87_r2)
long double x87_r2_5 = fconvert.t(arg16)
long double x87_r1_5 = fconvert.t(arg11)
long double x87_r2_15 = fconvert.t(var_4)
long double x87_r2_17 = fconvert.t(var_10)
long double x87_r5_2 = fconvert.t(fconvert.s(fconvert.t(var_68) - fconvert.t(fconvert.d(x87_r1_5))))
long double x87_r2_21 =
    fconvert.t(fconvert.s(x87_r7_14 * fconvert.t(arg11) - x87_r2 * fconvert.t(arg16)))
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
    float var_40_1 =
        fconvert.s(fconvert.t(fconvert.s(fconvert.t(fconvert.d(x87_r5)) - x87_r2_5)) * x87_r3_7)
    float var_3c_1 =
        fconvert.s(fconvert.t(fconvert.s(x87_r1_5 - fconvert.t(fconvert.d(x87_r4_2)))) * x87_r3_7)
    float var_34_1 = fconvert.s(x87_r1_13 * x87_r3_7)
    float var_30_1 = fconvert.s(x87_r5_2 * x87_r3_7)
    int32_t eax_3 = (*(*arg13 + 8))(0, 0)
    int32_t eax_5 = (*(*arg13 + 0x1c))()
    float eax_8 = (*(*arg13 + 0x10))() - 1
    int32_t eax_10 = (*(*arg13 + 0x14))()
    float var_b8_1 = fconvert.s(fconvert.t(var_24) / fconvert.t(*(arg6 i+ 0xc)))
    float var_b0_1 = fconvert.s(fconvert.t(arg9) / fconvert.t(*(arg8 i+ 0xc)))
    float var_a4_1 = fconvert.s(fconvert.t(var_28) / fconvert.t(*(arg10 + 0xc)))
    float var_cc_1 = fconvert.s(fconvert.t(var_44) / fconvert.t(*(arg6 i+ 0xc)))
    float var_6c_1 = fconvert.s(fconvert.t(var_18) / fconvert.t(*(arg8 i+ 0xc)))
    float var_84_1 = fconvert.s(fconvert.t(var_20) / fconvert.t(*(arg10 + 0xc)))
    *(arg6 i+ 0xc)
    long double x87_r6_12 = float.t(1)
    float var_98_1 = fconvert.s(x87_r6_12 / fconvert.t(*(arg8 i+ 0xc)))
    float var_a8_1 = fconvert.s(x87_r6_12 / fconvert.t(*(arg10 + 0xc)))
    long double x87_r7_39 = fconvert.t(arg11)
    long double x87_r6_16 = fconvert.t(var_c)
    x87_r6_16 - x87_r7_39
    int32_t eax_12
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
    
    long double x87_r5_5 = fconvert.t(var_8)
    long double x87_r4_14 = fconvert.t(var_10)
    x87_r4_14 - x87_r5_5
    eax_12.w = (x87_r4_14 < x87_r5_5 ? 1 : 0) << 8
        | (is_unordered.t(x87_r4_14, x87_r5_5) ? 1 : 0) << 0xa
        | (x87_r4_14 == x87_r5_5 ? 1 : 0) << 0xe | 0x2000
    long double x87_r4_15
    long double x87_r5_6
    
    if ((eax_12:1.b & 0x41) != 0)
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
    int32_t* eax_13
    eax_13.w = (x87_r2_28 < x87_r3_22 ? 1 : 0) << 8
        | (is_unordered.t(x87_r2_28, x87_r3_22) ? 1 : 0) << 0xa
        | (x87_r2_28 == x87_r3_22 ? 1 : 0) << 0xe | 0x1000
    bool p_1 = unimplemented  {test ah, 0x5}
    
    if (p_1)
        x87_r4_15 = x87_r2_28
    else
        x87_r3_22 = x87_r2_28
    
    x87_r6_17 - x87_r7_40
    arg9 = sub_70c710(fconvert.t(fconvert.s(x87_r3_22)))
    int32_t eax_14
    eax_14.w = (x87_r6_17 < x87_r7_40 ? 1 : 0) << 8
        | (is_unordered.t(x87_r6_17, x87_r7_40) ? 1 : 0) << 0xa
        | (x87_r6_17 == x87_r7_40 ? 1 : 0) << 0xe | 0x2000
    
    if ((eax_14:1.b & 0x41) != 0)
        x87_r5_6 = x87_r6_17
    
    long double x87_r7_41 = x87_r5_6
    x87_r4_15 - x87_r7_41
    eax_14.w = (x87_r4_15 < x87_r7_41 ? 1 : 0) << 8
        | (is_unordered.t(x87_r4_15, x87_r7_41) ? 1 : 0) << 0xa
        | (x87_r4_15 == x87_r7_41 ? 1 : 0) << 0xe | 0x3000
    
    if ((eax_14:1.b & 0x41) != 0)
        x87_r7_41 = x87_r4_15
    
    long double x87_r7_42 = fconvert.t(fconvert.s(x87_r7_40))
    long double x87_r6_19 = fconvert.t(fconvert.s(x87_r7_41))
    x87_r6_19 - x87_r7_42
    eax_14.w = (x87_r6_19 < x87_r7_42 ? 1 : 0) << 8
        | (is_unordered.t(x87_r6_19, x87_r7_42) ? 1 : 0) << 0xa
        | (x87_r6_19 == x87_r7_42 ? 1 : 0) << 0xe | 0x3000
    bool p_2 = unimplemented  {test ah, 0x5}
    
    if (not(p_2))
        x87_r7_42 = x87_r6_19
    
    long double x87_r7_44 = fconvert.t(fconvert.s(float.t(arg5[2] i+ esi_1)))
    long double x87_r6_20 = fconvert.t(fconvert.s(x87_r7_42))
    x87_r6_20 - x87_r7_44
    eax_14.w = (x87_r6_20 < x87_r7_44 ? 1 : 0) << 8
        | (is_unordered.t(x87_r6_20, x87_r7_44) ? 1 : 0) << 0xa
        | (x87_r6_20 == x87_r7_44 ? 1 : 0) << 0xe | 0x3000
    
    if ((eax_14:1.b & 0x41) == 0)
        x87_r7_44 = x87_r6_20
    
    long double x87_r7_46 = fconvert.t(arg16)
    long double x87_r6_21 = fconvert.t(var_14)
    int32_t esi_2 = sub_70c710(fconvert.t(fconvert.s(x87_r7_44)))
    x87_r6_21 - x87_r7_46
    int32_t eax_15
    eax_15.w = (x87_r6_21 < x87_r7_46 ? 1 : 0) << 8
        | (is_unordered.t(x87_r6_21, x87_r7_46) ? 1 : 0) << 0xa
        | (x87_r6_21 == x87_r7_46 ? 1 : 0) << 0xe | 0x3000
    long double x87_r6_22
    long double x87_r7_47
    
    if ((eax_15:1.b & 0x41) != 0)
        arg6 = fconvert.s(x87_r6_21)
        x87_r6_22 = x87_r7_46
        x87_r7_47 = x87_r6_21
    else
        x87_r6_22 = x87_r7_46
        x87_r7_47 = x87_r6_21
        arg6 = fconvert.s(x87_r6_22)
    
    long double x87_r5_8 = fconvert.t(var_1c)
    long double x87_r4_17 = fconvert.t(var_4)
    x87_r4_17 - x87_r5_8
    eax_15.w = (x87_r4_17 < x87_r5_8 ? 1 : 0) << 8
        | (is_unordered.t(x87_r4_17, x87_r5_8) ? 1 : 0) << 0xa
        | (x87_r4_17 == x87_r5_8 ? 1 : 0) << 0xe | 0x2000
    long double x87_r4_18
    long double x87_r5_9
    
    if ((eax_15:1.b & 0x41) != 0)
        arg8 = fconvert.s(x87_r4_17)
        x87_r4_18 = x87_r5_8
        x87_r5_9 = x87_r4_17
    else
        x87_r4_18 = x87_r5_8
        x87_r5_9 = x87_r4_17
        arg8 = fconvert.s(x87_r4_18)
    
    long double x87_r3_24 = fconvert.t(arg6)
    long double x87_r2_29 = fconvert.t(arg8)
    x87_r2_29 - x87_r3_24
    eax_15.w = (x87_r2_29 < x87_r3_24 ? 1 : 0) << 8
        | (is_unordered.t(x87_r2_29, x87_r3_24) ? 1 : 0) << 0xa
        | (x87_r2_29 == x87_r3_24 ? 1 : 0) << 0xe | 0x1000
    
    if ((eax_15:1.b & 0x41) != 0)
        x87_r4_18 = x87_r2_29
    else
        x87_r3_24 = x87_r2_29
    
    int32_t ecx_6 = arg5[1]
    long double x87_r3_26 = fconvert.t(fconvert.s(float.t(ecx_6)))
    long double x87_r2_30 = fconvert.t(fconvert.s(x87_r3_24))
    x87_r2_30 - x87_r3_26
    int32_t* eax_16
    eax_16.w = (x87_r2_30 < x87_r3_26 ? 1 : 0) << 8
        | (is_unordered.t(x87_r2_30, x87_r3_26) ? 1 : 0) << 0xa
        | (x87_r2_30 == x87_r3_26 ? 1 : 0) << 0xe | 0x1000
    bool p_3 = unimplemented  {test ah, 0x5}
    
    if (p_3)
        x87_r4_18 = x87_r2_30
    else
        x87_r3_26 = x87_r2_30
    
    x87_r6_22 - x87_r7_47
    int32_t var_4_1 = sub_70c710(fconvert.t(fconvert.s(x87_r3_26)))
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
    
    long double x87_r7_51 = fconvert.t(fconvert.s(float.t(arg5[3] + ecx_6)))
    long double x87_r6_25 = fconvert.t(fconvert.s(x87_r7_49))
    x87_r6_25 - x87_r7_51
    float eax_19
    eax_19.w = (x87_r6_25 < x87_r7_51 ? 1 : 0) << 8
        | (is_unordered.t(x87_r6_25, x87_r7_51) ? 1 : 0) << 0xa
        | (x87_r6_25 == x87_r7_51 ? 1 : 0) << 0xe | 0x3000
    
    if ((eax_19:1.b & 0x41) == 0)
        x87_r7_51 = x87_r6_25
    
    int32_t j_3 = esi_2 i- arg9
    int32_t i_2 = sub_70c710(fconvert.t(fconvert.s(x87_r7_51))) - var_4_1
    arg16:3.b = *arg15
    arg6:3.b = arg15[8]
    arg10:3.b = arg15[4]
    arg8:3.b = arg14[8]
    arg11:3.b = arg14[4]
    arg7:3.b = *arg14
    void* esi_4 = (*(*arg4 + 8))(arg9, var_4_1)
    int32_t j_2 = j_3
    result = (*(*arg4 + 0x1c))() - (j_2 << 2)
    long double x87_r7_54 = fconvert.t(fconvert.s(float.t(var_4_1)))
    var_68:4.d = result
    float var_10_1 = fconvert.s(x87_r7_54 * fconvert.t(var_58_1) + fconvert.t(fconvert.s(
        fconvert.t(fconvert.s(x87_r5 * x87_r2 - x87_r4_2 * x87_r7_14)) * x87_r3_7)))
    float var_8_1 = fconvert.s(x87_r7_54 * fconvert.t(var_3c_1) + fconvert.t(fconvert.s(
        fconvert.t(fconvert.s(x87_r2_5 * x87_r4_2 - x87_r1_5 * x87_r5)) * x87_r3_7)))
    float var_c_1 =
        fconvert.s(x87_r7_54 * fconvert.t(var_30_1) + fconvert.t(fconvert.s(x87_r3_7 * x87_r2_21)))
    long double x87_r7_58 = fconvert.t(fconvert.s(float.t(arg9)))
    
    if (i_2 s> 0)
        long double x87_r7_60 = fconvert.t(256.0)
        int32_t i_1 = i_2
        int32_t i
        
        do
            arg9 = fconvert.s(fconvert.t(fconvert.s(x87_r7_58 * fconvert.t(var_5c_1)))
                + fconvert.t(var_10_1))
            float var_4_2 = fconvert.s(fconvert.t(fconvert.s(x87_r7_58 * fconvert.t(var_40_1)))
                + fconvert.t(var_8_1))
            float var_1c_1 = fconvert.s(fconvert.t(fconvert.s(x87_r7_58 * fconvert.t(var_34_1)))
                + fconvert.t(var_c_1))
            
            if (j_2 s> 0)
                double var_80
                var_80:4.d = zx.d(arg11:3.b)
                double var_90
                var_90:4.d = zx.d(arg16:3.b)
                double var_50_1
                var_50_1:4.d = zx.d(arg7:3.b)
                int32_t j_1 = j_2
                int32_t j
                
                do
                    long double x87_r6_42 = fconvert.t(var_4_2)
                    long double x87_r4_20 = fconvert.t(arg9)
                    long double x87_r3_30 = fconvert.t(var_1c_1)
                    long double x87_r2_33 = float.t(1)
                    long double x87_r2_38 = fconvert.t(fconvert.s(x87_r2_33 / x87_r2_33))
                    float ecx_11 = sub_70c710(fconvert.t(fconvert.s((
                        x87_r6_42 * fconvert.t(var_b0_1) + x87_r4_20 * fconvert.t(var_b8_1)
                        + x87_r3_30 * fconvert.t(var_a4_1)) * x87_r2_38)) * x87_r7_60) s>> 8
                    int32_t eax_35 = sub_70c710(fconvert.t(fconvert.s(x87_r2_38 * (
                        x87_r6_42 * fconvert.t(var_6c_1) + x87_r4_20 * fconvert.t(var_cc_1)
                        + x87_r3_30 * fconvert.t(var_84_1)))) * x87_r7_60) s>> 8
                    
                    if (ecx_11 s< 0)
                        ecx_11 = 0f
                    else if (ecx_11 s> eax_8)
                        ecx_11 = eax_8
                    
                    if (eax_35 s< 0)
                        eax_35 = 0
                    else if (eax_35 s> eax_10 - 1)
                        eax_35 = eax_10 - 1
                    
                    esi_4 += 4
                    float eax_38 = *(eax_35 * eax_5 + eax_3 + (ecx_11 << 2))
                    int32_t ecx_15
                    ecx_15.b = *(((zx.d(eax_38.b) * zx.d(arg6:3.b)) s>> 8) + zx.d(arg8:3.b) + edi)
                    arg9:1.b = (((zx.d(eax_38:1.b) * zx.d(arg10:3.b)) s>> 8) + var_80:4.d)[edi]
                    arg9:2.b = (((zx.d(eax_38:2.b) * var_90:4.d) s>> 8) + var_50_1:4.d)[edi]
                    char eax_40 = *(esi_4 - 4)
                    char ecx_19 = (((zx.d(ecx_15.b) - zx.d(eax_40)) * arg12) s>> 8).b + eax_40
                    eax_40 = *(esi_4 - 3)
                    *(esi_4 - 4) = ecx_19
                    char ecx_23 = (((zx.d(arg9:1.b) - zx.d(eax_40)) * arg12) s>> 8).b + eax_40
                    eax_40 = *(esi_4 - 2)
                    *(esi_4 - 3) = ecx_23
                    uint32_t ecx_24 = zx.d(arg9:2.b)
                    arg9 = fconvert.s(x87_r4_20 + fconvert.t(var_5c_1))
                    var_4_2 = fconvert.s(x87_r6_42 + fconvert.t(var_40_1))
                    var_1c_1 = fconvert.s(x87_r3_30 + fconvert.t(var_34_1))
                    j = j_1
                    j_1 -= 1
                    *(esi_4 - 2) = (((ecx_24 - zx.d(eax_40)) * arg12) s>> 8).b + eax_40
                while (j != 1)
                result = var_68:4.d
                j_2 = j_3
            
            esi_4 += result
            i = i_1
            i_1 -= 1
            var_10_1 = fconvert.s(fconvert.t(var_10_1) + fconvert.t(var_58_1))
            var_8_1 = fconvert.s(fconvert.t(var_8_1) + fconvert.t(var_3c_1))
            var_c_1 = fconvert.s(fconvert.t(var_c_1) + fconvert.t(var_30_1))
        while (i != 1)

return result
