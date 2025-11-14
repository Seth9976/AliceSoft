// 函数: sub_47ed70
// 地址: 0x47ed70
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

float* eax = arg10
float* esi = arg9
float* edi = arg6
arg10 = fconvert.s(fconvert.t(*edi))
float* edi_1 = arg8
arg9 = fconvert.s(fconvert.t(edi[1]))
arg6 = fconvert.s(fconvert.t(*edi_1))
float var_14 = fconvert.s(fconvert.t(edi_1[1]))
arg8 = fconvert.s(fconvert.t(*arg2))
float var_10 = fconvert.s(fconvert.t(arg2[1]))
float var_c = fconvert.s(fconvert.t(*eax))
float* result = arg7
float var_8 = fconvert.s(fconvert.t(eax[1]))
float var_48 = fconvert.s(fconvert.t(*result))
float var_40 = fconvert.s(fconvert.t(result[1]))
float var_60 = fconvert.s(fconvert.t(*esi))
float var_58 = fconvert.s(fconvert.t(esi[1]))
float var_64 = fconvert.s(fconvert.t(*arg3))
float var_44 = fconvert.s(fconvert.t(arg3[1]))
long double x87_r7_14 = fconvert.t(var_14)
long double x87_r5 = fconvert.t(var_10)
long double x87_r4_2 = fconvert.t(arg8)
long double x87_r2 = fconvert.t(arg6)
double var_7c = fconvert.d(x87_r2)
long double x87_r2_5 = fconvert.t(arg9)
long double x87_r1_5 = fconvert.t(arg10)
long double x87_r2_15 = fconvert.t(var_8)
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
    float var_70_1 = fconvert.s(fconvert.t(fconvert.s(x87_r7_14 - x87_r5)) * x87_r3_7)
    float var_6c_1 = fconvert.s(fconvert.t(fconvert.s(x87_r4_2 - x87_r2)) * x87_r3_7)
    float var_34_1 =
        fconvert.s(fconvert.t(fconvert.s(fconvert.t(fconvert.d(x87_r5)) - x87_r2_5)) * x87_r3_7)
    float var_30_1 =
        fconvert.s(fconvert.t(fconvert.s(x87_r1_5 - fconvert.t(fconvert.d(x87_r4_2)))) * x87_r3_7)
    float var_28_1 = fconvert.s(x87_r1_13 * x87_r3_7)
    float var_24_1 = fconvert.s(x87_r5_2 * x87_r3_7)
    int32_t edi_2 = (*(*arg11 + 8))(0, 0)
    int32_t var_3c_1 = edi_2
    int32_t eax_4 = (*(*arg11 + 0x1c))()
    int32_t eax_7 = (*(*arg11 + 0x10))() - 1
    long double x87_r7_23 = fconvert.t(arg10)
    long double x87_r6_12 = fconvert.t(arg6)
    x87_r6_12 - x87_r7_23
    int32_t var_4c_1 = (*(*arg11 + 0x14))() - 1
    int32_t eax_10
    eax_10.w = (x87_r6_12 < x87_r7_23 ? 1 : 0) << 8
        | (is_unordered.t(x87_r6_12, x87_r7_23) ? 1 : 0) << 0xa
        | (x87_r6_12 == x87_r7_23 ? 1 : 0) << 0xe | 0x3000
    long double x87_r6_13
    long double x87_r7_24
    
    if ((eax_10:1.b & 0x41) != 0)
        arg10 = fconvert.s(x87_r6_12)
        x87_r6_13 = x87_r7_23
        x87_r7_24 = x87_r6_12
    else
        x87_r6_13 = x87_r7_23
        x87_r7_24 = x87_r6_12
        arg10 = fconvert.s(x87_r6_13)
    
    long double x87_r5_4 = fconvert.t(arg8)
    long double x87_r4_14 = fconvert.t(var_c)
    x87_r4_14 - x87_r5_4
    eax_10.w = (x87_r4_14 < x87_r5_4 ? 1 : 0) << 8
        | (is_unordered.t(x87_r4_14, x87_r5_4) ? 1 : 0) << 0xa
        | (x87_r4_14 == x87_r5_4 ? 1 : 0) << 0xe | 0x2000
    long double x87_r4_15
    long double x87_r5_5
    
    if ((eax_10:1.b & 0x41) != 0)
        arg6 = fconvert.s(x87_r4_14)
        x87_r4_15 = x87_r5_4
        x87_r5_5 = x87_r4_14
    else
        x87_r4_15 = x87_r5_4
        x87_r5_5 = x87_r4_14
        arg6 = fconvert.s(x87_r4_15)
    
    long double x87_r3_20 = fconvert.t(arg10)
    long double x87_r2_27 = fconvert.t(arg6)
    x87_r2_27 - x87_r3_20
    eax_10.w = (x87_r2_27 < x87_r3_20 ? 1 : 0) << 8
        | (is_unordered.t(x87_r2_27, x87_r3_20) ? 1 : 0) << 0xa
        | (x87_r2_27 == x87_r3_20 ? 1 : 0) << 0xe | 0x1000
    
    if ((eax_10:1.b & 0x41) != 0)
        x87_r4_15 = x87_r2_27
    else
        x87_r3_20 = x87_r2_27
    
    float esi_1 = *arg5
    long double x87_r3_22 = fconvert.t(fconvert.s(float.t(esi_1)))
    long double x87_r2_28 = fconvert.t(fconvert.s(x87_r3_20))
    x87_r2_28 - x87_r3_22
    eax_10.w = (x87_r2_28 < x87_r3_22 ? 1 : 0) << 8
        | (is_unordered.t(x87_r2_28, x87_r3_22) ? 1 : 0) << 0xa
        | (x87_r2_28 == x87_r3_22 ? 1 : 0) << 0xe | 0x1000
    bool p_1 = unimplemented  {test ah, 0x5}
    
    if (p_1)
        x87_r4_15 = x87_r2_28
    else
        x87_r3_22 = x87_r2_28
    
    x87_r6_13 - x87_r7_24
    arg10 = sub_70c710(fconvert.t(fconvert.s(x87_r3_22)))
    int32_t eax_11
    eax_11.w = (x87_r6_13 < x87_r7_24 ? 1 : 0) << 8
        | (is_unordered.t(x87_r6_13, x87_r7_24) ? 1 : 0) << 0xa
        | (x87_r6_13 == x87_r7_24 ? 1 : 0) << 0xe | 0x2000
    
    if ((eax_11:1.b & 0x41) != 0)
        x87_r5_5 = x87_r6_13
    
    long double x87_r7_25 = x87_r5_5
    x87_r4_15 - x87_r7_25
    eax_11.w = (x87_r4_15 < x87_r7_25 ? 1 : 0) << 8
        | (is_unordered.t(x87_r4_15, x87_r7_25) ? 1 : 0) << 0xa
        | (x87_r4_15 == x87_r7_25 ? 1 : 0) << 0xe | 0x3000
    
    if ((eax_11:1.b & 0x41) != 0)
        x87_r7_25 = x87_r4_15
    
    long double x87_r7_26 = fconvert.t(fconvert.s(x87_r7_24))
    long double x87_r6_15 = fconvert.t(fconvert.s(x87_r7_25))
    x87_r6_15 - x87_r7_26
    eax_11.w = (x87_r6_15 < x87_r7_26 ? 1 : 0) << 8
        | (is_unordered.t(x87_r6_15, x87_r7_26) ? 1 : 0) << 0xa
        | (x87_r6_15 == x87_r7_26 ? 1 : 0) << 0xe | 0x3000
    bool p_2 = unimplemented  {test ah, 0x5}
    
    if (not(p_2))
        x87_r7_26 = x87_r6_15
    
    long double x87_r7_28 = fconvert.t(fconvert.s(float.t(arg5[2] i+ esi_1)))
    long double x87_r6_16 = fconvert.t(fconvert.s(x87_r7_26))
    x87_r6_16 - x87_r7_28
    float eax_13
    eax_13.w = (x87_r6_16 < x87_r7_28 ? 1 : 0) << 8
        | (is_unordered.t(x87_r6_16, x87_r7_28) ? 1 : 0) << 0xa
        | (x87_r6_16 == x87_r7_28 ? 1 : 0) << 0xe | 0x3000
    
    if ((eax_13:1.b & 0x41) == 0)
        x87_r7_28 = x87_r6_16
    
    long double x87_r7_30 = fconvert.t(arg9)
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
        arg9 = fconvert.s(x87_r6_17)
        x87_r6_18 = x87_r7_30
        x87_r7_31 = x87_r6_17
    else
        x87_r6_18 = x87_r7_30
        x87_r7_31 = x87_r6_17
        arg9 = fconvert.s(x87_r6_18)
    
    long double x87_r5_7 = fconvert.t(var_10)
    long double x87_r4_17 = fconvert.t(var_8)
    x87_r4_17 - x87_r5_7
    eax_14.w = (x87_r4_17 < x87_r5_7 ? 1 : 0) << 8
        | (is_unordered.t(x87_r4_17, x87_r5_7) ? 1 : 0) << 0xa
        | (x87_r4_17 == x87_r5_7 ? 1 : 0) << 0xe | 0x2000
    long double x87_r4_18
    long double x87_r5_8
    
    if ((eax_14:1.b & 0x41) != 0)
        arg6 = fconvert.s(x87_r4_17)
        x87_r4_18 = x87_r5_7
        x87_r5_8 = x87_r4_17
    else
        x87_r4_18 = x87_r5_7
        x87_r5_8 = x87_r4_17
        arg6 = fconvert.s(x87_r4_18)
    
    long double x87_r3_24 = fconvert.t(arg9)
    long double x87_r2_29 = fconvert.t(arg6)
    x87_r2_29 - x87_r3_24
    eax_14.w = (x87_r2_29 < x87_r3_24 ? 1 : 0) << 8
        | (is_unordered.t(x87_r2_29, x87_r3_24) ? 1 : 0) << 0xa
        | (x87_r2_29 == x87_r3_24 ? 1 : 0) << 0xe | 0x1000
    
    if ((eax_14:1.b & 0x41) != 0)
        x87_r4_18 = x87_r2_29
    else
        x87_r3_24 = x87_r2_29
    
    float ecx_4 = arg5[1]
    long double x87_r3_26 = fconvert.t(fconvert.s(float.t(ecx_4)))
    long double x87_r2_30 = fconvert.t(fconvert.s(x87_r3_24))
    x87_r2_30 - x87_r3_26
    eax_14.w = (x87_r2_30 < x87_r3_26 ? 1 : 0) << 8
        | (is_unordered.t(x87_r2_30, x87_r3_26) ? 1 : 0) << 0xa
        | (x87_r2_30 == x87_r3_26 ? 1 : 0) << 0xe | 0x1000
    bool p_3 = unimplemented  {test ah, 0x5}
    
    if (p_3)
        x87_r4_18 = x87_r2_30
    else
        x87_r3_26 = x87_r2_30
    
    x87_r6_18 - x87_r7_31
    int32_t ebx_2 = sub_70c710(fconvert.t(fconvert.s(x87_r3_26)))
    int32_t eax_15
    eax_15.w = (x87_r6_18 < x87_r7_31 ? 1 : 0) << 8
        | (is_unordered.t(x87_r6_18, x87_r7_31) ? 1 : 0) << 0xa
        | (x87_r6_18 == x87_r7_31 ? 1 : 0) << 0xe | 0x2000
    
    if ((eax_15:1.b & 0x41) != 0)
        x87_r5_8 = x87_r6_18
    
    long double x87_r7_32 = x87_r5_8
    x87_r4_18 - x87_r7_32
    eax_15.w = (x87_r4_18 < x87_r7_32 ? 1 : 0) << 8
        | (is_unordered.t(x87_r4_18, x87_r7_32) ? 1 : 0) << 0xa
        | (x87_r4_18 == x87_r7_32 ? 1 : 0) << 0xe | 0x3000
    
    if ((eax_15:1.b & 0x41) != 0)
        x87_r7_32 = x87_r4_18
    
    long double x87_r7_33 = fconvert.t(fconvert.s(x87_r7_31))
    long double x87_r6_20 = fconvert.t(fconvert.s(x87_r7_32))
    x87_r6_20 - x87_r7_33
    eax_15.w = (x87_r6_20 < x87_r7_33 ? 1 : 0) << 8
        | (is_unordered.t(x87_r6_20, x87_r7_33) ? 1 : 0) << 0xa
        | (x87_r6_20 == x87_r7_33 ? 1 : 0) << 0xe | 0x3000
    bool p_4 = unimplemented  {test ah, 0x5}
    
    if (not(p_4))
        x87_r7_33 = x87_r6_20
    
    long double x87_r7_35 = fconvert.t(fconvert.s(float.t(arg5[3] i+ ecx_4)))
    long double x87_r6_21 = fconvert.t(fconvert.s(x87_r7_33))
    x87_r6_21 - x87_r7_35
    float eax_17
    eax_17.w = (x87_r6_21 < x87_r7_35 ? 1 : 0) << 8
        | (is_unordered.t(x87_r6_21, x87_r7_35) ? 1 : 0) << 0xa
        | (x87_r6_21 == x87_r7_35 ? 1 : 0) << 0xe | 0x3000
    
    if ((eax_17:1.b & 0x41) == 0)
        x87_r7_35 = x87_r6_21
    
    int32_t j_3 = esi_2 i- arg10
    long double x87_r7_37 = fconvert.t(var_34_1)
    long double x87_r5_10 = fconvert.t(var_70_1)
    int32_t i_2 = sub_70c710(fconvert.t(fconvert.s(x87_r7_35))) - ebx_2
    long double x87_r4_22 = fconvert.t(var_28_1)
    double var_8c
    var_8c:4.d = fconvert.s(x87_r7_37 * fconvert.t(var_60) + x87_r5_10 * fconvert.t(var_48)
        + x87_r4_22 * fconvert.t(var_64))
    double var_54_1
    var_54_1:4.d = fconvert.s(x87_r7_37 * fconvert.t(var_58) + x87_r5_10 * fconvert.t(var_40)
        + x87_r4_22 * fconvert.t(var_44))
    float ebx_3 = (*(*arg4 + 8))(arg10, ebx_2)
    arg7 = ebx_3
    int32_t j_2 = j_3
    result = (*(*arg4 + 0x1c))() - (j_2 << 2)
    long double x87_r7_42 = fconvert.t(fconvert.s(float.t(ebx_2)))
    var_7c:4.d = result
    arg9 = fconvert.s(x87_r7_42 * fconvert.t(var_6c_1) + fconvert.t(fconvert.s(
        fconvert.t(fconvert.s(x87_r5 * x87_r2 - x87_r4_2 * x87_r7_14)) * x87_r3_7)))
    arg6 = fconvert.s(x87_r7_42 * fconvert.t(var_30_1) + fconvert.t(fconvert.s(
        fconvert.t(fconvert.s(x87_r2_5 * x87_r4_2 - x87_r1_5 * x87_r5)) * x87_r3_7)))
    float var_c_1 =
        fconvert.s(x87_r7_42 * fconvert.t(var_24_1) + fconvert.t(fconvert.s(x87_r3_7 * x87_r2_21)))
    long double x87_r7_46 = fconvert.t(fconvert.s(float.t(arg10)))
    
    if (i_2 s> 0)
        int32_t i_1 = i_2
        int32_t i
        
        do
            long double x87_r6_38 = fconvert.t(arg9)
            long double x87_r5_13 = fconvert.t(arg6)
            long double x87_r6_42 = x87_r5_13
            long double x87_r5_17 = fconvert.t(fconvert.s(
                fconvert.t(fconvert.s(x87_r7_46 * fconvert.t(var_34_1))) + x87_r5_13))
            long double x87_r3_30 = fconvert.t(fconvert.s(
                fconvert.t(fconvert.s(x87_r7_46 * fconvert.t(var_70_1))) + x87_r6_38))
            long double x87_r2_33 = fconvert.t(fconvert.s(
                fconvert.t(fconvert.s(x87_r7_46 * fconvert.t(var_28_1))) + fconvert.t(var_c_1)))
            arg10 = fconvert.s(x87_r5_17 * fconvert.t(var_60) + x87_r3_30 * fconvert.t(var_48)
                + x87_r2_33 * fconvert.t(var_64))
            arg9 = fconvert.s(x87_r5_17 * fconvert.t(var_58) + x87_r3_30 * fconvert.t(var_40)
                + x87_r2_33 * fconvert.t(var_44))
            
            if (j_2 s> 0)
                int32_t j_1 = j_2
                long double x87_r4_32 = fconvert.t(256.0)
                int32_t j
                
                do
                    long double x87_r3_32 = fconvert.t(arg10)
                    int32_t eax_23 = sub_70c710(x87_r3_32 * x87_r4_32)
                    long double x87_r2_38 = fconvert.t(arg9)
                    int32_t eax_24 = sub_70c710(x87_r2_38 * x87_r4_32)
                    arg10 = zx.d(eax_23.b)
                    int32_t esi_5 = eax_23 s>> 8
                    int32_t eax_25 = eax_24 s>> 8
                    arg8 = zx.d(eax_24.b)
                    arg9 = esi_5
                    int32_t edx_9 = esi_5 + 1
                    int32_t ecx_11 = eax_25 + 1
                    
                    if (esi_5 s< 0)
                        arg9 = 0f
                        esi_5 = 0
                    else if (esi_5 s> eax_7)
                        arg9 = eax_7
                        esi_5 = eax_7
                    
                    if (eax_25 s< 0)
                        eax_25 = 0
                    else if (eax_25 s> var_4c_1)
                        eax_25 = var_4c_1
                    
                    if (edx_9 s< 0)
                        edx_9 = 0
                    else if (edx_9 s> eax_7)
                        edx_9 = eax_7
                    
                    if (ecx_11 s< 0)
                        ecx_11 = 0
                    else if (ecx_11 s> var_4c_1)
                        ecx_11 = var_4c_1
                    
                    int32_t eax_26 = eax_25 * eax_4
                    char* esi_7 = eax_26 + (esi_5 << 2) + edi_2
                    int32_t eax_28 = ecx_11 * eax_4
                    float eax_30 = eax_28 + (edx_9 << 2) + edi_2
                    char* ebx_9 = eax_26 + (edx_9 << 2) + edi_2
                    float ecx_14 = eax_28 + (arg9 << 2) + edi_2
                    uint32_t edi_3 = zx.d(esi_7[1])
                    uint32_t eax_31 = zx.d(*esi_7)
                    int32_t ecx_19 = (((zx.d(*ebx_9) - eax_31) i* arg10) s>> 8) + eax_31
                    int32_t eax_36 = (((zx.d(ebx_9[1]) - edi_3) i* arg10) s>> 8) + edi_3
                    uint32_t edi_4 = zx.d(esi_7[2])
                    uint32_t esi_8 = zx.d(esi_7[3])
                    double var_1c
                    var_1c:4.d = edi_4
                    int32_t edx_15 = (((zx.d(ebx_9[2]) - edi_4) i* arg10) s>> 8) + edi_4
                    int32_t ebx_14 = (((zx.d(ebx_9[3]) - esi_8) i* arg10) s>> 8) + esi_8
                    uint32_t edi_5 = zx.d(*(ecx_14 i+ 1))
                    var_1c:4.d = edi_5
                    int32_t esi_19 = ((((((zx.d(*(eax_30 i+ 1)) - edi_5) i* arg10) s>> 8) - eax_36
                        + edi_5) i* arg8) s>> 8) + eax_36
                    uint32_t eax_38 = zx.d(*(ecx_14 i+ 2))
                    var_1c:4.d = eax_38
                    int32_t edi_15 = ((((((zx.d(*(eax_30 i+ 2)) - eax_38) i* arg10) s>> 8) - edx_15
                        + eax_38) i* arg8) s>> 8) + edx_15
                    uint32_t edx_17 = zx.d(*(ecx_14 i+ 3))
                    var_1c:4.d = edx_17
                    uint32_t edx_19 = zx.d(*ecx_14)
                    int32_t eax_48 = ((((((zx.d(*(eax_30 i+ 3)) - edx_17) i* arg10) s>> 8) - ebx_14
                        + edx_17) i* arg8) s>> 8) + ebx_14
                    arg9 = edx_19
                    *arg7 += (((((((((zx.d(*eax_30) - edx_19) i* arg10) s>> 8) - ecx_19 + edx_19)
                        i* arg8) s>> 8) - zx.d(*arg7) + ecx_19) * eax_48) s>> 8).b
                    char ecx_20 = *(arg7 i+ 1)
                    char ebx_32 = (((esi_19 - zx.d(ecx_20)) * eax_48) s>> 8).b + ecx_20
                    ecx_20 = *(arg7 i+ 2)
                    *(arg7 i+ 1) = ebx_32
                    edi_2 = var_3c_1
                    arg10 = fconvert.s(x87_r3_32 + fconvert.t(var_8c:4.d))
                    *(arg7 i+ 2) = (((edi_15 - zx.d(ecx_20)) * eax_48) s>> 8).b + ecx_20
                    ebx_3 = arg7 i+ 4
                    j = j_1
                    j_1 -= 1
                    arg9 = fconvert.s(x87_r2_38 + fconvert.t(var_54_1:4.d))
                    arg7 = ebx_3
                while (j != 1)
                result = var_7c:4.d
                j_2 = j_3
                x87_r6_42 = x87_r4_32
            
            ebx_3 += result
            i = i_1
            i_1 -= 1
            arg7 = ebx_3
            arg9 = fconvert.s(x87_r6_38 + fconvert.t(var_6c_1))
            arg6 = fconvert.s(x87_r6_42 + fconvert.t(var_30_1))
            var_c_1 = fconvert.s(fconvert.t(var_c_1) + fconvert.t(var_24_1))
        while (i != 1)

return result
