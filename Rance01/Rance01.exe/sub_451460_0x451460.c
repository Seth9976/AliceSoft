// 函数: sub_451460
// 地址: 0x451460
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

float* eax = arg10
float* ebx = arg6
arg10 = fconvert.s(fconvert.t(*ebx))
float* ebx_1 = arg8
arg6 = fconvert.s(fconvert.t(ebx[1]))
arg8 = fconvert.s(fconvert.t(*ebx_1))
float var_14 = fconvert.s(fconvert.t(ebx_1[1]))
float var_18 = fconvert.s(fconvert.t(*arg2))
float var_c = fconvert.s(fconvert.t(arg2[1]))
float var_10 = fconvert.s(fconvert.t(*eax))
float* eax_1 = arg7
float var_8 = fconvert.s(fconvert.t(eax[1]))
float var_64 = fconvert.s(fconvert.t(*eax_1))
float* result = arg9
float var_40 = fconvert.s(fconvert.t(eax_1[1]))
float var_38 = fconvert.s(fconvert.t(*result))
float var_44 = fconvert.s(fconvert.t(result[1]))
float var_58 = fconvert.s(fconvert.t(*arg3))
float var_5c = fconvert.s(fconvert.t(arg3[1]))
long double x87_r7_14 = fconvert.t(var_14)
long double x87_r5 = fconvert.t(var_c)
long double x87_r4_2 = fconvert.t(var_18)
long double x87_r2 = fconvert.t(arg8)
double var_7c = fconvert.d(x87_r2)
long double x87_r2_5 = fconvert.t(arg6)
long double x87_r1_5 = fconvert.t(arg10)
long double x87_r2_15 = fconvert.t(var_8)
long double x87_r2_17 = fconvert.t(var_10)
long double x87_r5_2 = fconvert.t(fconvert.s(fconvert.t(var_7c) - fconvert.t(fconvert.d(x87_r1_5))))
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
    float var_70_1 = fconvert.s(fconvert.t(fconvert.s(x87_r7_14 - x87_r5)) * x87_r3_7)
    float var_6c_1 = fconvert.s(fconvert.t(fconvert.s(x87_r4_2 - x87_r2)) * x87_r3_7)
    float var_30_1 =
        fconvert.s(fconvert.t(fconvert.s(fconvert.t(fconvert.d(x87_r5)) - x87_r2_5)) * x87_r3_7)
    float var_2c_1 =
        fconvert.s(fconvert.t(fconvert.s(x87_r1_5 - fconvert.t(fconvert.d(x87_r4_2)))) * x87_r3_7)
    float var_24_1 = fconvert.s(x87_r1_13 * x87_r3_7)
    float var_20_1 = fconvert.s(x87_r5_2 * x87_r3_7)
    int32_t ebx_2 = (*(*arg11 + 8))(0, 0)
    int32_t var_3c_1 = ebx_2
    int32_t eax_5 = (*(*arg11 + 0x1c))()
    int32_t eax_8 = (*(*arg11 + 0x10))() - 1
    long double x87_r7_23 = fconvert.t(arg10)
    long double x87_r6_12 = fconvert.t(arg8)
    x87_r6_12 - x87_r7_23
    int32_t var_60_1 = (*(*arg11 + 0x14))() - 1
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
    long double x87_r4_14 = fconvert.t(var_10)
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
    
    float esi_1 = *arg5
    long double x87_r3_22 = fconvert.t(fconvert.s(float.t(esi_1)))
    long double x87_r2_28 = fconvert.t(fconvert.s(x87_r3_20))
    x87_r2_28 - x87_r3_22
    int32_t* eax_12
    eax_12.w = (x87_r2_28 < x87_r3_22 ? 1 : 0) << 8
        | (is_unordered.t(x87_r2_28, x87_r3_22) ? 1 : 0) << 0xa
        | (x87_r2_28 == x87_r3_22 ? 1 : 0) << 0xe | 0x1000
    bool p_1 = unimplemented  {test ah, 0x5}
    
    if (p_1)
        x87_r4_15 = x87_r2_28
    else
        x87_r3_22 = x87_r2_28
    
    x87_r6_13 - x87_r7_24
    arg10 = sub_70c710(fconvert.t(fconvert.s(x87_r3_22)))
    int32_t eax_13
    eax_13.w = (x87_r6_13 < x87_r7_24 ? 1 : 0) << 8
        | (is_unordered.t(x87_r6_13, x87_r7_24) ? 1 : 0) << 0xa
        | (x87_r6_13 == x87_r7_24 ? 1 : 0) << 0xe | 0x2000
    
    if ((eax_13:1.b & 0x41) != 0)
        x87_r5_5 = x87_r6_13
    
    long double x87_r7_25 = x87_r5_5
    x87_r4_15 - x87_r7_25
    eax_13.w = (x87_r4_15 < x87_r7_25 ? 1 : 0) << 8
        | (is_unordered.t(x87_r4_15, x87_r7_25) ? 1 : 0) << 0xa
        | (x87_r4_15 == x87_r7_25 ? 1 : 0) << 0xe | 0x3000
    
    if ((eax_13:1.b & 0x41) != 0)
        x87_r7_25 = x87_r4_15
    
    long double x87_r7_26 = fconvert.t(fconvert.s(x87_r7_24))
    long double x87_r6_15 = fconvert.t(fconvert.s(x87_r7_25))
    x87_r6_15 - x87_r7_26
    eax_13.w = (x87_r6_15 < x87_r7_26 ? 1 : 0) << 8
        | (is_unordered.t(x87_r6_15, x87_r7_26) ? 1 : 0) << 0xa
        | (x87_r6_15 == x87_r7_26 ? 1 : 0) << 0xe | 0x3000
    bool p_2 = unimplemented  {test ah, 0x5}
    
    if (not(p_2))
        x87_r7_26 = x87_r6_15
    
    long double x87_r7_28 = fconvert.t(fconvert.s(float.t(arg5[2] i+ esi_1)))
    long double x87_r6_16 = fconvert.t(fconvert.s(x87_r7_26))
    x87_r6_16 - x87_r7_28
    eax_13.w = (x87_r6_16 < x87_r7_28 ? 1 : 0) << 8
        | (is_unordered.t(x87_r6_16, x87_r7_28) ? 1 : 0) << 0xa
        | (x87_r6_16 == x87_r7_28 ? 1 : 0) << 0xe | 0x3000
    
    if ((eax_13:1.b & 0x41) == 0)
        x87_r7_28 = x87_r6_16
    
    long double x87_r7_30 = fconvert.t(arg6)
    long double x87_r6_17 = fconvert.t(var_14)
    int32_t esi_2 = sub_70c710(fconvert.t(fconvert.s(x87_r7_28)))
    x87_r6_17 - x87_r7_30
    int32_t eax_14
    eax_14.w = (x87_r6_17 < x87_r7_30 ? 1 : 0) << 8
        | (is_unordered.t(x87_r6_17, x87_r7_30) ? 1 : 0) << 0xa
        | (x87_r6_17 == x87_r7_30 ? 1 : 0) << 0xe | 0x3000
    long double x87_r6_18
    long double x87_r7_31
    
    if ((eax_14:1.b & 0x41) != 0)
        arg6 = fconvert.s(x87_r6_17)
        x87_r6_18 = x87_r7_30
        x87_r7_31 = x87_r6_17
    else
        x87_r6_18 = x87_r7_30
        x87_r7_31 = x87_r6_17
        arg6 = fconvert.s(x87_r6_18)
    
    long double x87_r5_7 = fconvert.t(var_c)
    long double x87_r4_17 = fconvert.t(var_8)
    x87_r4_17 - x87_r5_7
    eax_14.w = (x87_r4_17 < x87_r5_7 ? 1 : 0) << 8
        | (is_unordered.t(x87_r4_17, x87_r5_7) ? 1 : 0) << 0xa
        | (x87_r4_17 == x87_r5_7 ? 1 : 0) << 0xe | 0x2000
    long double x87_r4_18
    long double x87_r5_8
    
    if ((eax_14:1.b & 0x41) != 0)
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
    eax_14.w = (x87_r2_29 < x87_r3_24 ? 1 : 0) << 8
        | (is_unordered.t(x87_r2_29, x87_r3_24) ? 1 : 0) << 0xa
        | (x87_r2_29 == x87_r3_24 ? 1 : 0) << 0xe | 0x1000
    
    if ((eax_14:1.b & 0x41) != 0)
        x87_r4_18 = x87_r2_29
    else
        x87_r3_24 = x87_r2_29
    
    float ecx_5 = arg5[1]
    long double x87_r3_26 = fconvert.t(fconvert.s(float.t(ecx_5)))
    long double x87_r2_30 = fconvert.t(fconvert.s(x87_r3_24))
    x87_r2_30 - x87_r3_26
    int32_t* eax_15
    eax_15.w = (x87_r2_30 < x87_r3_26 ? 1 : 0) << 8
        | (is_unordered.t(x87_r2_30, x87_r3_26) ? 1 : 0) << 0xa
        | (x87_r2_30 == x87_r3_26 ? 1 : 0) << 0xe | 0x1000
    bool p_3 = unimplemented  {test ah, 0x5}
    
    if (p_3)
        x87_r4_18 = x87_r2_30
    else
        x87_r3_26 = x87_r2_30
    
    x87_r6_18 - x87_r7_31
    arg9 = sub_70c710(fconvert.t(fconvert.s(x87_r3_26)))
    float eax_16
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
    
    long double x87_r7_35 = fconvert.t(fconvert.s(float.t(arg5[3] i+ ecx_5)))
    long double x87_r6_21 = fconvert.t(fconvert.s(x87_r7_33))
    x87_r6_21 - x87_r7_35
    float eax_18
    eax_18.w = (x87_r6_21 < x87_r7_35 ? 1 : 0) << 8
        | (is_unordered.t(x87_r6_21, x87_r7_35) ? 1 : 0) << 0xa
        | (x87_r6_21 == x87_r7_35 ? 1 : 0) << 0xe | 0x3000
    
    if ((eax_18:1.b & 0x41) == 0)
        x87_r7_35 = x87_r6_21
    
    int32_t j_3 = esi_2 i- arg10
    long double x87_r7_37 = fconvert.t(var_30_1)
    long double x87_r5_10 = fconvert.t(var_70_1)
    int32_t i_2 = sub_70c710(fconvert.t(fconvert.s(x87_r7_35))) i- arg9
    long double x87_r4_22 = fconvert.t(var_24_1)
    double var_54_1
    var_54_1:4.d = fconvert.s(x87_r7_37 * fconvert.t(var_44) + x87_r5_10 * fconvert.t(var_40)
        + x87_r4_22 * fconvert.t(var_5c))
    arg7 = (*(*arg4 + 8))(arg10, arg9)
    int32_t j_2 = j_3
    result = (*(*arg4 + 0x1c))() - (j_2 << 2)
    long double x87_r7_42 = fconvert.t(fconvert.s(float.t(arg9)))
    var_7c:4.d = result
    arg6 = fconvert.s(x87_r7_42 * fconvert.t(var_6c_1) + fconvert.t(fconvert.s(
        fconvert.t(fconvert.s(x87_r5 * x87_r2 - x87_r4_2 * x87_r7_14)) * x87_r3_7)))
    arg8 = fconvert.s(x87_r7_42 * fconvert.t(var_2c_1) + fconvert.t(fconvert.s(
        fconvert.t(fconvert.s(x87_r2_5 * x87_r4_2 - x87_r1_5 * x87_r5)) * x87_r3_7)))
    arg9 =
        fconvert.s(x87_r7_42 * fconvert.t(var_20_1) + fconvert.t(fconvert.s(x87_r3_7 * x87_r2_21)))
    long double x87_r7_46 = fconvert.t(fconvert.s(float.t(arg10)))
    
    if (i_2 s> 0)
        int32_t i_1 = i_2
        int32_t i
        
        do
            long double x87_r6_38 = fconvert.t(arg6)
            long double x87_r5_13 = fconvert.t(arg8)
            long double x87_r6_42 = x87_r5_13
            long double x87_r5_17 = fconvert.t(fconvert.s(
                fconvert.t(fconvert.s(x87_r7_46 * fconvert.t(var_30_1))) + x87_r5_13))
            long double x87_r3_30 = fconvert.t(fconvert.s(
                fconvert.t(fconvert.s(x87_r7_46 * fconvert.t(var_70_1))) + x87_r6_38))
            long double x87_r2_33 = fconvert.t(fconvert.s(
                fconvert.t(fconvert.s(x87_r7_46 * fconvert.t(var_24_1))) + fconvert.t(arg9)))
            arg10 = fconvert.s(x87_r5_17 * fconvert.t(var_38) + x87_r3_30 * fconvert.t(var_64)
                + x87_r2_33 * fconvert.t(var_58))
            arg6 = fconvert.s(x87_r5_17 * fconvert.t(var_44) + x87_r3_30 * fconvert.t(var_40)
                + x87_r2_33 * fconvert.t(var_5c))
            
            if (j_2 s> 0)
                int32_t j_1 = j_2
                long double x87_r4_32 = fconvert.t(256.0)
                int32_t j
                
                do
                    long double x87_r3_32 = fconvert.t(arg10)
                    int32_t eax_25 = sub_70c710(x87_r3_32 * x87_r4_32)
                    long double x87_r2_38 = fconvert.t(arg6)
                    int32_t eax_26 = sub_70c710(x87_r2_38 * x87_r4_32)
                    uint32_t ecx_9 = zx.d(eax_26.b)
                    int32_t esi_5 = eax_25 s>> 8
                    int32_t eax_27 = eax_26 s>> 8
                    uint32_t edx_12 = zx.d(eax_25.b)
                    arg10 = esi_5 + 1
                    int32_t ecx_11 = eax_27 + 1
                    arg6 = edx_12
                    arg8 = esi_5
                    
                    if (esi_5 s< 0)
                        arg8 = 0f
                        esi_5 = 0
                    else if (esi_5 s> eax_8)
                        arg8 = eax_8
                        esi_5 = eax_8
                    
                    if (eax_27 s< 0)
                        eax_27 = 0
                    else if (eax_27 s> var_60_1)
                        eax_27 = var_60_1
                    
                    if (arg10 s< 0)
                        arg10 = 0f
                    else if (arg10 s> eax_8)
                        arg10 = eax_8
                    
                    if (ecx_11 s< 0)
                        ecx_11 = 0
                    else if (ecx_11 s> var_60_1)
                        ecx_11 = var_60_1
                    
                    int32_t edi_5 = eax_27 * eax_5
                    int32_t eax_30 = ecx_11 * eax_5
                    char* edi_7 = edi_5 + (arg10 << 2) + ebx_2
                    char* ecx_15 = eax_30 + (arg8 << 2) + ebx_2
                    char* esi_7 = edi_5 + (esi_5 << 2) + ebx_2
                    uint32_t ecx_17 = zx.d(*esi_7)
                    float eax_32 = eax_30 + (arg10 << 2) + ebx_2
                    uint32_t ebx_3 = zx.d(esi_7[1])
                    int32_t eax_37 = (((zx.d(*edi_7) - ecx_17) * edx_12) s>> 8) + ecx_17
                    int32_t ecx_22 = (((zx.d(edi_7[1]) - ebx_3) * edx_12) s>> 8) + ebx_3
                    uint32_t ebx_4 = zx.d(esi_7[2])
                    arg8 = ebx_4
                    int32_t edx_17 = (((zx.d(edi_7[2]) - ebx_4) i* arg6) s>> 8) + ebx_4
                    uint32_t ebx_5 = zx.d(esi_7[3])
                    int32_t esi_12 = (((zx.d(edi_7[3]) - ebx_5) i* arg6) s>> 8) + ebx_5
                    uint32_t ebx_6 = zx.d(ecx_15[3])
                    arg8 = zx.d(ecx_15[1])
                    uint32_t ebx_8 = zx.d(ecx_15[2])
                    double var_9c
                    var_9c:4.d = zx.d(*ecx_15)
                    double var_8c
                    var_8c:4.d = ebx_8
                    int32_t edi_21 = (((((((zx.d(*(eax_32 i+ 2)) - ebx_8) i* arg6) s>> 8) - edx_17
                        + ebx_8) * ecx_9) s>> 8) + edx_17) << 0x10 | (((((((zx.d(*(eax_32 i+ 1))
                        i- arg8) i* arg6) s>> 8) - ecx_22 i+ arg8) * ecx_9) s>> 8) + ecx_22) << 8
                    ebx_2 = var_3c_1
                    int32_t edi_22 = edi_21 | (((((((zx.d(*(eax_32 i+ 3)) - ebx_6) i* arg6) s>> 8)
                        - esi_12 + ebx_6) * ecx_9) s>> 8) + esi_12) << 0x18
                    arg10 = fconvert.s(x87_r3_32 + fconvert.t(fconvert.s(
                        x87_r7_37 * fconvert.t(var_38) + x87_r5_10 * fconvert.t(var_64)
                        + x87_r4_22 * fconvert.t(var_58))))
                    int32_t ecx_35 = var_9c:4.d
                    int32_t esi_15 = (zx.d(*eax_32) - ecx_35) i* arg6
                    arg6 = fconvert.s(x87_r2_38 + fconvert.t(var_54_1:4.d))
                    *arg7 = edi_22 | (((((esi_15 s>> 8) - eax_37 + ecx_35) * ecx_9) s>> 8) + eax_37)
                    j = j_1
                    j_1 -= 1
                    arg7 += 4
                while (j != 1)
                result = var_7c:4.d
                j_2 = j_3
                x87_r6_42 = x87_r4_32
            
            arg7 += result
            i = i_1
            i_1 -= 1
            arg6 = fconvert.s(x87_r6_38 + fconvert.t(var_6c_1))
            arg8 = fconvert.s(x87_r6_42 + fconvert.t(var_2c_1))
            arg9 = fconvert.s(fconvert.t(arg9) + fconvert.t(var_20_1))
        while (i != 1)

return result
