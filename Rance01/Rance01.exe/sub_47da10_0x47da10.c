// 函数: sub_47da10
// 地址: 0x47da10
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

float* eax = arg10
float* edi = arg6
arg10 = fconvert.s(fconvert.t(*edi))
float* edi_1 = arg8
arg6 = fconvert.s(fconvert.t(edi[1]))
arg8 = fconvert.s(fconvert.t(*edi_1))
float var_10 = fconvert.s(fconvert.t(edi_1[1]))
float var_18 = fconvert.s(fconvert.t(*arg2))
float var_8 = fconvert.s(fconvert.t(arg2[1]))
float var_14 = fconvert.s(fconvert.t(*eax))
float* eax_1 = arg7
float var_c = fconvert.s(fconvert.t(eax[1]))
float var_4c = fconvert.s(fconvert.t(*eax_1))
float* result = arg9
float var_40 = fconvert.s(fconvert.t(eax_1[1]))
arg9 = fconvert.s(fconvert.t(*result))
float var_34 = fconvert.s(fconvert.t(result[1]))
float var_48 = fconvert.s(fconvert.t(*arg3))
float var_44 = fconvert.s(fconvert.t(arg3[1]))
long double x87_r7_14 = fconvert.t(var_10)
long double x87_r5 = fconvert.t(var_8)
long double x87_r4_2 = fconvert.t(var_18)
long double x87_r2 = fconvert.t(arg8)
double var_64 = fconvert.d(x87_r2)
long double x87_r2_5 = fconvert.t(arg6)
long double x87_r1_5 = fconvert.t(arg10)
long double x87_r2_15 = fconvert.t(var_c)
long double x87_r2_17 = fconvert.t(var_14)
long double x87_r5_2 = fconvert.t(fconvert.s(fconvert.t(var_64) - fconvert.t(fconvert.d(x87_r1_5))))
long double x87_r2_21 =
    fconvert.t(fconvert.s(x87_r7_14 * fconvert.t(arg10) - x87_r2 * fconvert.t(arg6)))
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
    + x87_r5 * fconvert.t(fconvert.s(x87_r2_17 - fconvert.t(var_64)))
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
    float var_24_1 =
        fconvert.s(fconvert.t(fconvert.s(fconvert.t(fconvert.d(x87_r5)) - x87_r2_5)) * x87_r3_7)
    float var_20_1 =
        fconvert.s(fconvert.t(fconvert.s(x87_r1_5 - fconvert.t(fconvert.d(x87_r4_2)))) * x87_r3_7)
    float var_30_1 = fconvert.s(x87_r1_13 * x87_r3_7)
    float var_2c_1 = fconvert.s(x87_r5_2 * x87_r3_7)
    double var_3c_1
    var_3c_1:4.d = (*(*arg11 + 8))(0, 0)
    double var_74
    var_74:4.d = (*(*arg11 + 0x1c))()
    int32_t eax_8 = (*(*arg11 + 0x10))() - 1
    long double x87_r7_23 = fconvert.t(arg10)
    long double x87_r6_12 = fconvert.t(arg8)
    x87_r6_12 - x87_r7_23
    double var_84
    var_84:4.d = (*(*arg11 + 0x14))() - 1
    int32_t eax_11
    eax_11.w = (x87_r6_12 < x87_r7_23 ? 1 : 0) << 8
        | (is_unordered.t(x87_r6_12, x87_r7_23) ? 1 : 0) << 0xa
        | (x87_r6_12 == x87_r7_23 ? 1 : 0) << 0xe | 0x3000
    long double x87_r6_13
    long double x87_r7_24
    
    if ((eax_11:1.b & 0x41) != 0)
        arg10 = fconvert.s(x87_r6_12)
        x87_r6_13 = x87_r7_23
        x87_r7_24 = x87_r6_12
    else
        x87_r6_13 = x87_r7_23
        x87_r7_24 = x87_r6_12
        arg10 = fconvert.s(x87_r6_13)
    
    long double x87_r5_4 = fconvert.t(var_18)
    long double x87_r4_14 = fconvert.t(var_14)
    x87_r4_14 - x87_r5_4
    eax_11.w = (x87_r4_14 < x87_r5_4 ? 1 : 0) << 8
        | (is_unordered.t(x87_r4_14, x87_r5_4) ? 1 : 0) << 0xa
        | (x87_r4_14 == x87_r5_4 ? 1 : 0) << 0xe | 0x2000
    long double x87_r4_15
    long double x87_r5_5
    
    if ((eax_11:1.b & 0x41) != 0)
        arg8 = fconvert.s(x87_r4_14)
        x87_r4_15 = x87_r5_4
        x87_r5_5 = x87_r4_14
    else
        x87_r4_15 = x87_r5_4
        x87_r5_5 = x87_r4_14
        arg8 = fconvert.s(x87_r4_15)
    
    long double x87_r3_20 = fconvert.t(arg10)
    long double x87_r2_27 = fconvert.t(arg8)
    x87_r2_27 - x87_r3_20
    eax_11.w = (x87_r2_27 < x87_r3_20 ? 1 : 0) << 8
        | (is_unordered.t(x87_r2_27, x87_r3_20) ? 1 : 0) << 0xa
        | (x87_r2_27 == x87_r3_20 ? 1 : 0) << 0xe | 0x1000
    
    if ((eax_11:1.b & 0x41) != 0)
        x87_r4_15 = x87_r2_27
    else
        x87_r3_20 = x87_r2_27
    
    float edi_2 = *arg5
    long double x87_r3_22 = fconvert.t(fconvert.s(float.t(edi_2)))
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
    
    x87_r6_13 - x87_r7_24
    arg10 = sub_70c710(fconvert.t(fconvert.s(x87_r3_22)))
    int32_t eax_12
    eax_12.w = (x87_r6_13 < x87_r7_24 ? 1 : 0) << 8
        | (is_unordered.t(x87_r6_13, x87_r7_24) ? 1 : 0) << 0xa
        | (x87_r6_13 == x87_r7_24 ? 1 : 0) << 0xe | 0x2000
    
    if ((eax_12:1.b & 0x41) != 0)
        x87_r5_5 = x87_r6_13
    
    long double x87_r7_25 = x87_r5_5
    x87_r4_15 - x87_r7_25
    eax_12.w = (x87_r4_15 < x87_r7_25 ? 1 : 0) << 8
        | (is_unordered.t(x87_r4_15, x87_r7_25) ? 1 : 0) << 0xa
        | (x87_r4_15 == x87_r7_25 ? 1 : 0) << 0xe | 0x3000
    
    if ((eax_12:1.b & 0x41) != 0)
        x87_r7_25 = x87_r4_15
    
    long double x87_r7_26 = fconvert.t(fconvert.s(x87_r7_24))
    long double x87_r6_15 = fconvert.t(fconvert.s(x87_r7_25))
    x87_r6_15 - x87_r7_26
    eax_12.w = (x87_r6_15 < x87_r7_26 ? 1 : 0) << 8
        | (is_unordered.t(x87_r6_15, x87_r7_26) ? 1 : 0) << 0xa
        | (x87_r6_15 == x87_r7_26 ? 1 : 0) << 0xe | 0x3000
    bool p_2 = unimplemented  {test ah, 0x5}
    
    if (not(p_2))
        x87_r7_26 = x87_r6_15
    
    long double x87_r7_28 = fconvert.t(fconvert.s(float.t(arg5[2] i+ edi_2)))
    long double x87_r6_16 = fconvert.t(fconvert.s(x87_r7_26))
    x87_r6_16 - x87_r7_28
    float eax_14
    eax_14.w = (x87_r6_16 < x87_r7_28 ? 1 : 0) << 8
        | (is_unordered.t(x87_r6_16, x87_r7_28) ? 1 : 0) << 0xa
        | (x87_r6_16 == x87_r7_28 ? 1 : 0) << 0xe | 0x3000
    
    if ((eax_14:1.b & 0x41) == 0)
        x87_r7_28 = x87_r6_16
    
    long double x87_r7_30 = fconvert.t(arg6)
    long double x87_r6_17 = fconvert.t(var_10)
    int32_t edi_3 = sub_70c710(fconvert.t(fconvert.s(x87_r7_28)))
    x87_r6_17 - x87_r7_30
    int32_t eax_15
    eax_15.w = (x87_r6_17 < x87_r7_30 ? 1 : 0) << 8
        | (is_unordered.t(x87_r6_17, x87_r7_30) ? 1 : 0) << 0xa
        | (x87_r6_17 == x87_r7_30 ? 1 : 0) << 0xe | 0x3000
    long double x87_r6_18
    long double x87_r7_31
    
    if ((eax_15:1.b & 0x41) != 0)
        arg6 = fconvert.s(x87_r6_17)
        x87_r6_18 = x87_r7_30
        x87_r7_31 = x87_r6_17
    else
        x87_r6_18 = x87_r7_30
        x87_r7_31 = x87_r6_17
        arg6 = fconvert.s(x87_r6_18)
    
    long double x87_r5_7 = fconvert.t(var_8)
    long double x87_r4_17 = fconvert.t(var_c)
    x87_r4_17 - x87_r5_7
    eax_15.w = (x87_r4_17 < x87_r5_7 ? 1 : 0) << 8
        | (is_unordered.t(x87_r4_17, x87_r5_7) ? 1 : 0) << 0xa
        | (x87_r4_17 == x87_r5_7 ? 1 : 0) << 0xe | 0x2000
    long double x87_r4_18
    long double x87_r5_8
    
    if ((eax_15:1.b & 0x41) != 0)
        arg8 = fconvert.s(x87_r4_17)
        x87_r4_18 = x87_r5_7
        x87_r5_8 = x87_r4_17
    else
        x87_r4_18 = x87_r5_7
        x87_r5_8 = x87_r4_17
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
    
    float ecx_4 = arg5[1]
    long double x87_r3_26 = fconvert.t(fconvert.s(float.t(ecx_4)))
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
    
    x87_r6_18 - x87_r7_31
    int32_t esi_2 = sub_70c710(fconvert.t(fconvert.s(x87_r3_26)))
    int32_t eax_16
    eax_16.w = (x87_r6_18 < x87_r7_31 ? 1 : 0) << 8
        | (is_unordered.t(x87_r6_18, x87_r7_31) ? 1 : 0) << 0xa
        | (x87_r6_18 == x87_r7_31 ? 1 : 0) << 0xe | 0x2000
    
    if ((eax_16:1.b & 0x41) != 0)
        x87_r5_8 = x87_r6_18
    
    long double x87_r7_32 = x87_r5_8
    x87_r4_18 - x87_r7_32
    eax_16.w = (x87_r4_18 < x87_r7_32 ? 1 : 0) << 8
        | (is_unordered.t(x87_r4_18, x87_r7_32) ? 1 : 0) << 0xa
        | (x87_r4_18 == x87_r7_32 ? 1 : 0) << 0xe | 0x3000
    
    if ((eax_16:1.b & 0x41) != 0)
        x87_r7_32 = x87_r4_18
    
    long double x87_r7_33 = fconvert.t(fconvert.s(x87_r7_31))
    long double x87_r6_20 = fconvert.t(fconvert.s(x87_r7_32))
    x87_r6_20 - x87_r7_33
    eax_16.w = (x87_r6_20 < x87_r7_33 ? 1 : 0) << 8
        | (is_unordered.t(x87_r6_20, x87_r7_33) ? 1 : 0) << 0xa
        | (x87_r6_20 == x87_r7_33 ? 1 : 0) << 0xe | 0x3000
    bool p_4 = unimplemented  {test ah, 0x5}
    
    if (not(p_4))
        x87_r7_33 = x87_r6_20
    
    long double x87_r7_35 = fconvert.t(fconvert.s(float.t(arg5[3] i+ ecx_4)))
    long double x87_r6_21 = fconvert.t(fconvert.s(x87_r7_33))
    x87_r6_21 - x87_r7_35
    float eax_18
    eax_18.w = (x87_r6_21 < x87_r7_35 ? 1 : 0) << 8
        | (is_unordered.t(x87_r6_21, x87_r7_35) ? 1 : 0) << 0xa
        | (x87_r6_21 == x87_r7_35 ? 1 : 0) << 0xe | 0x3000
    
    if ((eax_18:1.b & 0x41) == 0)
        x87_r7_35 = x87_r6_21
    
    float edi_4 = edi_3 i- arg10
    long double x87_r7_37 = fconvert.t(var_24_1)
    long double x87_r5_10 = fconvert.t(var_58_1)
    int32_t i_2 = sub_70c710(fconvert.t(fconvert.s(x87_r7_35))) - esi_2
    long double x87_r4_22 = fconvert.t(var_30_1)
    void* esi_3 = (*(*arg4 + 8))(arg10, esi_2)
    float ecx_7 = edi_4
    result = (*(*arg4 + 0x1c))() - (ecx_7 << 2)
    long double x87_r7_42 = fconvert.t(fconvert.s(float.t(esi_2)))
    var_64:4.d = result
    arg8 = fconvert.s(x87_r7_42 * fconvert.t(var_54_1) + fconvert.t(fconvert.s(
        fconvert.t(fconvert.s(x87_r5 * x87_r2 - x87_r4_2 * x87_r7_14)) * x87_r3_7)))
    arg7 = fconvert.s(x87_r7_42 * fconvert.t(var_20_1) + fconvert.t(fconvert.s(
        fconvert.t(fconvert.s(x87_r2_5 * x87_r4_2 - x87_r1_5 * x87_r5)) * x87_r3_7)))
    arg6 =
        fconvert.s(x87_r7_42 * fconvert.t(var_2c_1) + fconvert.t(fconvert.s(x87_r3_7 * x87_r2_21)))
    long double x87_r7_46 = fconvert.t(fconvert.s(float.t(arg10)))
    
    if (i_2 s> 0)
        int32_t i_1 = i_2
        int32_t i
        
        do
            long double x87_r6_38 = fconvert.t(arg8)
            long double x87_r5_13 = fconvert.t(arg7)
            long double x87_r6_42 = x87_r5_13
            long double x87_r5_17 = fconvert.t(fconvert.s(
                fconvert.t(fconvert.s(x87_r7_46 * fconvert.t(var_24_1))) + x87_r5_13))
            long double x87_r3_30 = fconvert.t(fconvert.s(
                fconvert.t(fconvert.s(x87_r7_46 * fconvert.t(var_58_1))) + x87_r6_38))
            long double x87_r2_33 = fconvert.t(fconvert.s(
                fconvert.t(fconvert.s(x87_r7_46 * fconvert.t(var_30_1))) + fconvert.t(arg6)))
            arg10 = fconvert.s(x87_r5_17 * fconvert.t(arg9) + x87_r3_30 * fconvert.t(var_4c)
                + x87_r2_33 * fconvert.t(var_48))
            arg8 = fconvert.s(x87_r5_17 * fconvert.t(var_34) + x87_r3_30 * fconvert.t(var_40)
                + x87_r2_33 * fconvert.t(var_44))
            
            if (ecx_7 s> 0)
                arg7 = ecx_7
                long double x87_r4_32 = fconvert.t(fconvert.s(x87_r7_37 * fconvert.t(arg9)
                    + x87_r5_10 * fconvert.t(var_4c) + x87_r4_22 * fconvert.t(var_48)))
                float j
                
                do
                    long double x87_r3_32 = fconvert.t(arg10)
                    long double x87_r2_37 = fconvert.t(arg8)
                    int32_t edi_6 = sub_70c710(x87_r3_32)
                    int32_t eax_25
                    int32_t ecx_8
                    eax_25, ecx_8 = sub_70c710(x87_r2_37)
                    
                    if (edi_6 s< 0)
                        edi_6 = 0
                    else if (edi_6 s> eax_8)
                        edi_6 = eax_8
                    
                    if (eax_25 s>= 0)
                        ecx_8 = var_84:4.d
                        
                        if (eax_25 s> ecx_8)
                            eax_25 = ecx_8
                    else
                        eax_25 = 0
                    
                    arg10 = fconvert.s(x87_r3_32 + x87_r4_32)
                    int32_t eax_27 = eax_25 * var_74:4.d + var_3c_1:4.d
                    arg8 = fconvert.s(x87_r2_37 + fconvert.t(fconvert.s(
                        x87_r7_37 * fconvert.t(var_34) + x87_r5_10 * fconvert.t(var_40)
                        + x87_r4_22 * fconvert.t(var_44))))
                    ecx_8.b = *esi_3
                    void* eax_28 = eax_27 + (edi_6 << 2)
                    uint32_t edi_7 = zx.d(*(eax_28 + 3))
                    char ebx_4 =
                        (((zx.d(*(eax_27 + (edi_6 << 2))) - zx.d(ecx_8.b)) * edi_7) s>> 8).b
                        + ecx_8.b
                    ecx_8.b = *(esi_3 + 1)
                    *esi_3 = ebx_4
                    char edx_13 =
                        (((zx.d(*(eax_28 + 1)) - zx.d(ecx_8.b)) * edi_7) s>> 8).b + ecx_8.b
                    ecx_8.b = *(esi_3 + 2)
                    *(esi_3 + 1) = edx_13
                    *(esi_3 + 2) =
                        (((zx.d(*(eax_28 + 2)) - zx.d(ecx_8.b)) * edi_7) s>> 8).b + ecx_8.b
                    esi_3 += 4
                    j = arg7
                    arg7 -= 1
                while (j != 1)
                result = var_64:4.d
                ecx_7 = edi_4
                x87_r6_42 = x87_r4_32
            
            esi_3 += result
            i = i_1
            i_1 -= 1
            arg8 = fconvert.s(x87_r6_38 + fconvert.t(var_54_1))
            arg7 = fconvert.s(x87_r6_42 + fconvert.t(var_20_1))
            arg6 = fconvert.s(fconvert.t(arg6) + fconvert.t(var_2c_1))
        while (i != 1)

return result
