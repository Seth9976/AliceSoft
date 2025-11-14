// 函数: sub_489e30
// 地址: 0x489e30
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

float* eax = arg11
float* ebx = arg10
int32_t edi = *arg14
float* edx_1 = arg6
arg11 = fconvert.s(fconvert.t(*edx_1))
float* edx_2 = arg8
arg10 = fconvert.s(fconvert.t(edx_1[1]))
arg14 = fconvert.s(fconvert.t(*edx_2))
float var_18 = fconvert.s(fconvert.t(edx_2[1]))
float var_14 = fconvert.s(fconvert.t(*ebx))
float var_24 = fconvert.s(fconvert.t(ebx[1]))
float var_1c = fconvert.s(fconvert.t(*eax))
float* eax_1 = arg7
float var_20 = fconvert.s(fconvert.t(eax[1]))
float var_30 = fconvert.s(fconvert.t(*eax_1))
float* result = arg9
float var_2c = fconvert.s(fconvert.t(eax_1[1]))
arg9 = fconvert.s(fconvert.t(*result))
float var_4 = fconvert.s(fconvert.t(result[1]))
float var_28 = fconvert.s(fconvert.t(*arg3))
float var_8 = fconvert.s(fconvert.t(arg3[1]))
long double x87_r7_14 = fconvert.t(var_18)
long double x87_r5 = fconvert.t(var_24)
long double x87_r4_2 = fconvert.t(var_14)
long double x87_r2 = fconvert.t(arg14)
double var_68 = fconvert.d(x87_r2)
long double x87_r2_5 = fconvert.t(arg10)
long double x87_r1_5 = fconvert.t(arg11)
long double x87_r2_15 = fconvert.t(var_20)
long double x87_r2_17 = fconvert.t(var_1c)
long double x87_r5_2 = fconvert.t(fconvert.s(fconvert.t(var_68) - fconvert.t(fconvert.d(x87_r1_5))))
long double x87_r2_21 =
    fconvert.t(fconvert.s(x87_r7_14 * fconvert.t(arg11) - x87_r2 * fconvert.t(arg10)))
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
    float var_48_1 =
        fconvert.s(fconvert.t(fconvert.s(fconvert.t(fconvert.d(x87_r5)) - x87_r2_5)) * x87_r3_7)
    float var_44_1 =
        fconvert.s(fconvert.t(fconvert.s(x87_r1_5 - fconvert.t(fconvert.d(x87_r4_2)))) * x87_r3_7)
    float var_3c_1 = fconvert.s(x87_r1_13 * x87_r3_7)
    float var_38_1 = fconvert.s(x87_r5_2 * x87_r3_7)
    int32_t eax_3 = (*(*arg2 + 8))(0, 0)
    int32_t eax_5 = (*(*arg2 + 0x1c))()
    int32_t eax_8 = (*(*arg2 + 0x10))() - 1
    int32_t eax_10 = (*(*arg2 + 0x14))()
    float var_10_1 = fconvert.s(fconvert.t(var_30) / fconvert.t(*(arg6 i+ 0xc)))
    float var_c0_1 = fconvert.s(fconvert.t(arg9) / fconvert.t(*(arg8 i+ 0xc)))
    float var_bc_1 = fconvert.s(fconvert.t(var_28) / fconvert.t(ebx[3]))
    float var_ac_1 = fconvert.s(fconvert.t(var_2c) / fconvert.t(*(arg6 i+ 0xc)))
    float var_6c_1 = fconvert.s(fconvert.t(var_4) / fconvert.t(*(arg8 i+ 0xc)))
    float var_80_1 = fconvert.s(fconvert.t(var_8) / fconvert.t(ebx[3]))
    *(arg6 i+ 0xc)
    long double x87_r6_12 = float.t(1)
    float var_a8_1 = fconvert.s(x87_r6_12 / fconvert.t(*(arg8 i+ 0xc)))
    float var_b8_1 = fconvert.s(x87_r6_12 / fconvert.t(ebx[3]))
    long double x87_r7_39 = fconvert.t(arg11)
    long double x87_r6_16 = fconvert.t(arg14)
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
    long double x87_r4_14 = fconvert.t(var_1c)
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
    
    float ebx_1 = *arg5
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
    int32_t var_4_1 = sub_70c710(fconvert.t(fconvert.s(x87_r3_22)))
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
    
    long double x87_r7_44 = fconvert.t(fconvert.s(float.t(arg5[2] i+ ebx_1)))
    long double x87_r6_20 = fconvert.t(fconvert.s(x87_r7_42))
    x87_r6_20 - x87_r7_44
    float eax_15
    eax_15.w = (x87_r6_20 < x87_r7_44 ? 1 : 0) << 8
        | (is_unordered.t(x87_r6_20, x87_r7_44) ? 1 : 0) << 0xa
        | (x87_r6_20 == x87_r7_44 ? 1 : 0) << 0xe | 0x3000
    
    if ((eax_15:1.b & 0x41) == 0)
        x87_r7_44 = x87_r6_20
    
    long double x87_r7_46 = fconvert.t(arg10)
    long double x87_r6_21 = fconvert.t(var_18)
    int32_t ebx_2 = sub_70c710(fconvert.t(fconvert.s(x87_r7_44)))
    x87_r6_21 - x87_r7_46
    int32_t eax_16
    eax_16.w = (x87_r6_21 < x87_r7_46 ? 1 : 0) << 8
        | (is_unordered.t(x87_r6_21, x87_r7_46) ? 1 : 0) << 0xa
        | (x87_r6_21 == x87_r7_46 ? 1 : 0) << 0xe | 0x3000
    long double x87_r6_22
    long double x87_r7_47
    
    if ((eax_16:1.b & 0x41) != 0)
        arg6 = fconvert.s(x87_r6_21)
        x87_r6_22 = x87_r7_46
        x87_r7_47 = x87_r6_21
    else
        x87_r6_22 = x87_r7_46
        x87_r7_47 = x87_r6_21
        arg6 = fconvert.s(x87_r6_22)
    
    long double x87_r5_8 = fconvert.t(var_24)
    long double x87_r4_17 = fconvert.t(var_20)
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
    
    long double x87_r3_24 = fconvert.t(arg6)
    long double x87_r2_29 = fconvert.t(arg8)
    x87_r2_29 - x87_r3_24
    eax_16.w = (x87_r2_29 < x87_r3_24 ? 1 : 0) << 8
        | (is_unordered.t(x87_r2_29, x87_r3_24) ? 1 : 0) << 0xa
        | (x87_r2_29 == x87_r3_24 ? 1 : 0) << 0xe | 0x1000
    
    if ((eax_16:1.b & 0x41) != 0)
        x87_r4_18 = x87_r2_29
    else
        x87_r3_24 = x87_r2_29
    
    float ecx_5 = arg5[1]
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
    
    long double x87_r7_51 = fconvert.t(fconvert.s(float.t(arg5[3] i+ ecx_5)))
    long double x87_r6_25 = fconvert.t(fconvert.s(x87_r7_49))
    x87_r6_25 - x87_r7_51
    float eax_19
    eax_19.w = (x87_r6_25 < x87_r7_51 ? 1 : 0) << 8
        | (is_unordered.t(x87_r6_25, x87_r7_51) ? 1 : 0) << 0xa
        | (x87_r6_25 == x87_r7_51 ? 1 : 0) << 0xe | 0x3000
    
    if ((eax_19:1.b & 0x41) == 0)
        x87_r7_51 = x87_r6_25
    
    int32_t j_3 = ebx_2 - var_4_1
    int32_t eax_20 = sub_70c710(fconvert.t(fconvert.s(x87_r7_51)))
    arg6:3.b = arg13[8]
    arg11:3.b = arg13[4]
    arg14:3.b = *arg13
    arg9:3.b = arg13[0xc]
    arg8:3.b = arg12[8]
    arg10:3.b = arg12[4]
    char edx_11 = arg12[0xc]
    arg7:3.b = *arg12
    int32_t i_2 = eax_20 - esi_2
    void* esi_3 = (*(*arg4 + 8))(var_4_1, esi_2)
    int32_t j_2 = j_3
    result = (*(*arg4 + 0x1c))() - (j_2 << 2)
    var_68:4.d = result
    long double x87_r7_54 = fconvert.t(fconvert.s(float.t(esi_2)))
    float var_18_1 = fconvert.s(x87_r7_54 * fconvert.t(var_58_1) + fconvert.t(fconvert.s(
        fconvert.t(fconvert.s(x87_r5 * x87_r2 - x87_r4_2 * x87_r7_14)) * x87_r3_7)))
    float var_1c_1 = fconvert.s(x87_r7_54 * fconvert.t(var_44_1) + fconvert.t(fconvert.s(
        fconvert.t(fconvert.s(x87_r2_5 * x87_r4_2 - x87_r1_5 * x87_r5)) * x87_r3_7)))
    float var_14_1 =
        fconvert.s(x87_r7_54 * fconvert.t(var_38_1) + fconvert.t(fconvert.s(x87_r3_7 * x87_r2_21)))
    long double x87_r7_58 = fconvert.t(fconvert.s(float.t(var_4_1)))
    
    if (i_2 s> 0)
        int32_t i_1 = i_2
        int32_t i
        
        do
            float var_20_1 = fconvert.s(fconvert.t(fconvert.s(x87_r7_58 * fconvert.t(var_5c_1)))
                + fconvert.t(var_18_1))
            float var_24_1 = fconvert.s(fconvert.t(fconvert.s(x87_r7_58 * fconvert.t(var_48_1)))
                + fconvert.t(var_1c_1))
            float var_4_2 = fconvert.s(fconvert.t(fconvert.s(x87_r7_58 * fconvert.t(var_3c_1)))
                + fconvert.t(var_14_1))
            
            if (j_2 s> 0)
                double var_88
                var_88:4.d = zx.d(arg7:3.b)
                double var_98
                var_98:4.d = zx.d(arg9:3.b)
                double var_50_1
                var_50_1:4.d = zx.d(edx_11)
                int32_t j_1 = j_2
                int32_t j
                
                do
                    long double x87_r6_42 = fconvert.t(var_24_1)
                    long double x87_r4_20 = fconvert.t(var_20_1)
                    long double x87_r3_30 = fconvert.t(var_4_2)
                    long double x87_r2_33 = float.t(1)
                    long double x87_r2_38 = fconvert.t(fconvert.s(x87_r2_33 / x87_r2_33))
                    int32_t ebx_4 = sub_70c710(fconvert.t(fconvert.s((
                        x87_r6_42 * fconvert.t(var_c0_1) + x87_r4_20 * fconvert.t(var_10_1)
                        + x87_r3_30 * fconvert.t(var_bc_1)) * x87_r2_38)))
                    int32_t eax_33 = sub_70c710(fconvert.t(fconvert.s(x87_r2_38 * (
                        x87_r6_42 * fconvert.t(var_6c_1) + x87_r4_20 * fconvert.t(var_ac_1)
                        + x87_r3_30 * fconvert.t(var_80_1)))))
                    
                    if (ebx_4 s< 0)
                        ebx_4 = 0
                    else if (ebx_4 s> eax_8)
                        ebx_4 = eax_8
                    
                    if (eax_33 s< 0)
                        eax_33 = 0
                    else if (eax_33 s> eax_10 - 1)
                        eax_33 = eax_10 - 1
                    
                    var_20_1 = fconvert.s(x87_r4_20 + fconvert.t(var_5c_1))
                    var_24_1 = fconvert.s(x87_r6_42 + fconvert.t(var_48_1))
                    esi_3 += 4
                    int32_t eax_36 = *(eax_33 * eax_5 + eax_3 + (ebx_4 << 2))
                    int32_t var_4_3
                    var_4_3:1.b =
                        *(((zx.d(eax_36:1.b) * zx.d(arg11:3.b)) s>> 8) + zx.d(arg10:3.b) + edi)
                    int32_t eax_46 = zx.d(var_4_3:3.b) * var_98:4.d
                    var_4_3:2.b = (((zx.d(eax_36:2.b) * zx.d(arg14:3.b)) s>> 8) + var_88:4.d)[edi]
                    char ecx_19 = *(esi_3 - 4)
                    uint32_t eax_49 = zx.d(*((eax_46 s>> 8) + var_50_1:4.d + edi))
                    char edx_23 = (((
                        zx.d(*(((zx.d(eax_36.b) * zx.d(arg6:3.b)) s>> 8) + zx.d(arg8:3.b) + edi))
                        - zx.d(ecx_19)) * eax_49) s>> 8).b + ecx_19
                    ecx_19 = *(esi_3 - 3)
                    *(esi_3 - 4) = edx_23
                    char ebx_9 = (((zx.d(var_4_3:1.b) - zx.d(ecx_19)) * eax_49) s>> 8).b + ecx_19
                    ecx_19 = *(esi_3 - 2)
                    *(esi_3 - 3) = ebx_9
                    var_4_2 = fconvert.s(x87_r3_30 + fconvert.t(var_3c_1))
                    j = j_1
                    j_1 -= 1
                    *(esi_3 - 2) = (((zx.d(var_4_3:2.b) - zx.d(ecx_19)) * eax_49) s>> 8).b + ecx_19
                while (j != 1)
                result = var_68:4.d
                j_2 = j_3
            
            esi_3 += result
            i = i_1
            i_1 -= 1
            var_18_1 = fconvert.s(fconvert.t(var_18_1) + fconvert.t(var_58_1))
            var_1c_1 = fconvert.s(fconvert.t(var_1c_1) + fconvert.t(var_44_1))
            var_14_1 = fconvert.s(fconvert.t(var_14_1) + fconvert.t(var_38_1))
        while (i != 1)

return result
