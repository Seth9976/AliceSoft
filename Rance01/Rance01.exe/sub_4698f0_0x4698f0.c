// 函数: sub_4698f0
// 地址: 0x4698f0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

float* eax = arg10
arg10 = fconvert.s(fconvert.t(*arg2))
float* edx = arg7
int32_t* edi = arg15
arg15 = fconvert.s(fconvert.t(arg2[1]))
arg7 = fconvert.s(fconvert.t(*edx))
float* edx_1 = arg9
float var_14 = fconvert.s(fconvert.t(edx[1]))
int32_t edi_1 = *edi
arg9 = fconvert.s(fconvert.t(*edx_1))
float var_10 = fconvert.s(fconvert.t(edx_1[1]))
float var_18 = fconvert.s(fconvert.t(*eax))
float* eax_1 = arg6
float var_c = fconvert.s(fconvert.t(eax[1]))
float var_54 = fconvert.s(fconvert.t(*eax_1))
float var_40 = fconvert.s(fconvert.t(eax_1[1]))
float var_5c = fconvert.s(fconvert.t(*arg8))
float var_38 = fconvert.s(fconvert.t(arg8[1]))
float var_3c = fconvert.s(fconvert.t(*arg3))
float var_58 = fconvert.s(fconvert.t(arg3[1]))
long double x87_r7_14 = fconvert.t(var_14)
long double x87_r5 = fconvert.t(var_10)
long double x87_r4_2 = fconvert.t(arg9)
long double x87_r2 = fconvert.t(arg7)
double var_74 = fconvert.d(x87_r2)
long double x87_r2_5 = fconvert.t(arg15)
long double x87_r1_5 = fconvert.t(arg10)
long double x87_r2_15 = fconvert.t(var_c)
long double x87_r2_17 = fconvert.t(var_18)
long double x87_r5_2 = fconvert.t(fconvert.s(fconvert.t(var_74) - fconvert.t(fconvert.d(x87_r1_5))))
long double x87_r2_21 =
    fconvert.t(fconvert.s(x87_r7_14 * fconvert.t(arg10) - x87_r2 * fconvert.t(arg15)))
long double x87_r2_23 = fconvert.t(fconvert.s(x87_r5_2 * x87_r5
    + fconvert.t(fconvert.s(fconvert.t(fconvert.d(x87_r2_5)) - x87_r7_14)) * x87_r4_2 + x87_r2_21))
long double x87_r1_13 = fconvert.t(9.9999997473787516e-05)
x87_r1_13 - x87_r2_23
float* result
result.w = (x87_r1_13 < x87_r2_23 ? 1 : 0) << 8
    | (is_unordered.t(x87_r1_13, x87_r2_23) ? 1 : 0) << 0xa
    | (x87_r1_13 == x87_r2_23 ? 1 : 0) << 0xe | 0x800

if ((result:1.b & 0x41) == 0)
    return result

long double x87_r2_25 = fconvert.t(fconvert.s(
    x87_r4_2 * fconvert.t(fconvert.s(x87_r7_14 - x87_r2_15))
    + x87_r5 * fconvert.t(fconvert.s(x87_r2_17 - fconvert.t(var_74)))
    + fconvert.t(fconvert.s(x87_r2 * x87_r2_15 - x87_r7_14 * x87_r2_17))))
x87_r2_25 - x87_r1_13
result.w = (x87_r2_25 < x87_r1_13 ? 1 : 0) << 8
    | (is_unordered.t(x87_r2_25, x87_r1_13) ? 1 : 0) << 0xa
    | (x87_r2_25 == x87_r1_13 ? 1 : 0) << 0xe | 0x1800
bool p = unimplemented  {test ah, 0x5}

if (p)
    long double x87_r3_6 = float.t(1)
    long double x87_r3_7 = fconvert.t(fconvert.s(x87_r3_6 / x87_r3_6))
    float var_68_1 = fconvert.s(fconvert.t(fconvert.s(x87_r7_14 - x87_r5)) * x87_r3_7)
    float var_64_1 = fconvert.s(fconvert.t(fconvert.s(x87_r4_2 - x87_r2)) * x87_r3_7)
    float var_34_1 =
        fconvert.s(fconvert.t(fconvert.s(fconvert.t(fconvert.d(x87_r5)) - x87_r2_5)) * x87_r3_7)
    float var_30_1 =
        fconvert.s(fconvert.t(fconvert.s(x87_r1_5 - fconvert.t(fconvert.d(x87_r4_2)))) * x87_r3_7)
    float var_28_1 = fconvert.s(x87_r1_13 * x87_r3_7)
    float var_24_1 = fconvert.s(x87_r5_2 * x87_r3_7)
    int32_t eax_3 = (*(*arg12 + 8))(0, 0)
    int32_t eax_5 = (*(*arg12 + 0x1c))()
    int32_t eax_8 = (*(*arg12 + 0x10))() - 1
    long double x87_r7_23 = fconvert.t(arg10)
    long double x87_r6_12 = fconvert.t(arg7)
    x87_r6_12 - x87_r7_23
    int32_t var_b0_1 = (*(*arg12 + 0x14))() - 1
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
    
    long double x87_r5_4 = fconvert.t(arg9)
    long double x87_r4_14 = fconvert.t(var_18)
    x87_r4_14 - x87_r5_4
    eax_11.w = (x87_r4_14 < x87_r5_4 ? 1 : 0) << 8
        | (is_unordered.t(x87_r4_14, x87_r5_4) ? 1 : 0) << 0xa
        | (x87_r4_14 == x87_r5_4 ? 1 : 0) << 0xe | 0x2000
    long double x87_r4_15
    long double x87_r5_5
    
    if ((eax_11:1.b & 0x41) != 0)
        arg7 = fconvert.s(x87_r4_14)
        x87_r4_15 = x87_r5_4
        x87_r5_5 = x87_r4_14
    else
        x87_r4_15 = x87_r5_4
        x87_r5_5 = x87_r4_14
        arg7 = fconvert.s(x87_r4_15)
    
    long double x87_r3_20 = fconvert.t(arg10)
    long double x87_r2_27 = fconvert.t(arg7)
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
    int32_t var_8_1 = sub_70c710(fconvert.t(fconvert.s(x87_r3_22)))
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
    
    long double x87_r7_30 = fconvert.t(arg15)
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
        arg10 = fconvert.s(x87_r6_17)
        x87_r6_18 = x87_r7_30
        x87_r7_31 = x87_r6_17
    else
        x87_r6_18 = x87_r7_30
        x87_r7_31 = x87_r6_17
        arg10 = fconvert.s(x87_r6_18)
    
    long double x87_r5_7 = fconvert.t(var_10)
    long double x87_r4_17 = fconvert.t(var_c)
    x87_r4_17 - x87_r5_7
    eax_14.w = (x87_r4_17 < x87_r5_7 ? 1 : 0) << 8
        | (is_unordered.t(x87_r4_17, x87_r5_7) ? 1 : 0) << 0xa
        | (x87_r4_17 == x87_r5_7 ? 1 : 0) << 0xe | 0x2000
    long double x87_r4_18
    long double x87_r5_8
    
    if ((eax_14:1.b & 0x41) != 0)
        arg15 = fconvert.s(x87_r4_17)
        x87_r4_18 = x87_r5_7
        x87_r5_8 = x87_r4_17
    else
        x87_r4_18 = x87_r5_7
        x87_r5_8 = x87_r4_17
        arg15 = fconvert.s(x87_r4_18)
    
    long double x87_r3_24 = fconvert.t(arg10)
    long double x87_r2_29 = fconvert.t(arg15)
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
    int32_t var_c_1 = sub_70c710(fconvert.t(fconvert.s(x87_r3_26)))
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
    
    long double x87_r7_35 = fconvert.t(fconvert.s(float.t(arg5[3] i+ ecx_5)))
    long double x87_r6_21 = fconvert.t(fconvert.s(x87_r7_33))
    x87_r6_21 - x87_r7_35
    float eax_18
    eax_18.w = (x87_r6_21 < x87_r7_35 ? 1 : 0) << 8
        | (is_unordered.t(x87_r6_21, x87_r7_35) ? 1 : 0) << 0xa
        | (x87_r6_21 == x87_r7_35 ? 1 : 0) << 0xe | 0x3000
    
    if ((eax_18:1.b & 0x41) == 0)
        x87_r7_35 = x87_r6_21
    
    int32_t j_3 = esi_2 - var_8_1
    long double x87_r7_37 = fconvert.t(var_34_1)
    int32_t i_2 = sub_70c710(fconvert.t(fconvert.s(x87_r7_35))) - var_c_1
    long double x87_r5_10 = fconvert.t(var_68_1)
    long double x87_r4_22 = fconvert.t(var_28_1)
    arg6:3.b = *arg14
    arg10:3.b = arg14[8]
    arg7:3.b = arg14[4]
    arg15:3.b = arg13[8]
    arg9:3.b = arg13[4]
    arg8:3.b = *arg13
    double var_4c_1
    var_4c_1:4.d = fconvert.s(x87_r7_37 * fconvert.t(var_38) + x87_r5_10 * fconvert.t(var_40)
        + x87_r4_22 * fconvert.t(var_58))
    void* esi_4 = (*(*arg4 + 8))(var_8_1, var_c_1)
    int32_t j_2 = j_3
    result = (*(*arg4 + 0x1c))() - (j_2 << 2)
    var_74:4.d = result
    long double x87_r7_42 = fconvert.t(fconvert.s(float.t(var_c_1)))
    float var_c_2 = fconvert.s(x87_r7_42 * fconvert.t(var_64_1) + fconvert.t(fconvert.s(
        fconvert.t(fconvert.s(x87_r5 * x87_r2 - x87_r4_2 * x87_r7_14)) * x87_r3_7)))
    float var_10_1 = fconvert.s(x87_r7_42 * fconvert.t(var_30_1) + fconvert.t(fconvert.s(
        fconvert.t(fconvert.s(x87_r2_5 * x87_r4_2 - x87_r1_5 * x87_r5)) * x87_r3_7)))
    float var_18_1 =
        fconvert.s(x87_r7_42 * fconvert.t(var_24_1) + fconvert.t(fconvert.s(x87_r3_7 * x87_r2_21)))
    long double x87_r7_46 = fconvert.t(fconvert.s(float.t(var_8_1)))
    
    if (i_2 s> 0)
        int32_t i_1 = i_2
        int32_t i
        
        do
            long double x87_r6_38 = fconvert.t(var_c_2)
            long double x87_r5_13 = fconvert.t(var_10_1)
            long double x87_r6_42 = x87_r5_13
            long double x87_r5_17 = fconvert.t(fconvert.s(
                fconvert.t(fconvert.s(x87_r7_46 * fconvert.t(var_34_1))) + x87_r5_13))
            long double x87_r3_30 = fconvert.t(fconvert.s(
                fconvert.t(fconvert.s(x87_r7_46 * fconvert.t(var_68_1))) + x87_r6_38))
            long double x87_r2_33 = fconvert.t(fconvert.s(
                fconvert.t(fconvert.s(x87_r7_46 * fconvert.t(var_28_1))) + fconvert.t(var_18_1)))
            float var_c_4 = fconvert.s(x87_r5_17 * fconvert.t(var_5c)
                + x87_r3_30 * fconvert.t(var_54) + x87_r2_33 * fconvert.t(var_3c))
            float var_10_3 = fconvert.s(x87_r5_17 * fconvert.t(var_38)
                + x87_r3_30 * fconvert.t(var_40) + x87_r2_33 * fconvert.t(var_58))
            
            if (j_2 s> 0)
                long double x87_r4_32 = fconvert.t(256.0)
                double var_a4
                var_a4:4.d = zx.d(arg6:3.b)
                double var_84
                var_84:4.d = zx.d(arg8:3.b)
                int32_t j_1 = j_2
                int32_t j
                
                do
                    long double x87_r3_32 = fconvert.t(var_c_4)
                    long double x87_r2_38 = fconvert.t(var_10_3)
                    int32_t ecx_10 = sub_70c710(x87_r3_32 * x87_r4_32) s>> 8
                    int32_t eax_34 = sub_70c710(x87_r2_38 * x87_r4_32) s>> 8
                    
                    if (ecx_10 s< 0)
                        ecx_10 = 0
                    else if (ecx_10 s> eax_8)
                        ecx_10 = eax_8
                    
                    if (eax_34 s< 0)
                        eax_34 = 0
                    else if (eax_34 s> var_b0_1)
                        eax_34 = var_b0_1
                    
                    var_c_4 = fconvert.s(x87_r3_32 + fconvert.t(fconvert.s(
                        x87_r7_37 * fconvert.t(var_5c) + x87_r5_10 * fconvert.t(var_54)
                        + x87_r4_22 * fconvert.t(var_3c))))
                    esi_4 += 4
                    var_10_3 = fconvert.s(x87_r2_38 + fconvert.t(var_4c_1:4.d))
                    int24_t eax_37 = (*(eax_34 * eax_5 + eax_3 + (ecx_10 << 2))).3
                    int32_t ecx_14
                    ecx_14.b =
                        *(((zx.d(eax_37.b) * zx.d(arg10:3.b)) s>> 8) + zx.d(arg15:3.b) + edi_1)
                    int24_t var_8_3
                    var_8_3:1.b =
                        *(((zx.d(eax_37:1.b) * zx.d(arg7:3.b)) s>> 8) + zx.d(arg9:3.b) + edi_1)
                    var_8_3:2.b = (((zx.d(eax_37:2.b) * var_a4:4.d) s>> 8) + var_84:4.d)[edi_1]
                    char eax_39 = *(esi_4 - 4)
                    char ecx_18 = (((zx.d(ecx_14.b) - zx.d(eax_39)) * arg11) s>> 8).b + eax_39
                    eax_39 = *(esi_4 - 3)
                    *(esi_4 - 4) = ecx_18
                    char ecx_22 = (((zx.d(var_8_3:1.b) - zx.d(eax_39)) * arg11) s>> 8).b + eax_39
                    eax_39 = *(esi_4 - 2)
                    *(esi_4 - 3) = ecx_22
                    j = j_1
                    j_1 -= 1
                    *(esi_4 - 2) = (((zx.d(var_8_3:2.b) - zx.d(eax_39)) * arg11) s>> 8).b + eax_39
                while (j != 1)
                result = var_74:4.d
                j_2 = j_3
                x87_r6_42 = x87_r4_32
            
            esi_4 += result
            i = i_1
            i_1 -= 1
            var_c_2 = fconvert.s(x87_r6_38 + fconvert.t(var_64_1))
            var_10_1 = fconvert.s(x87_r6_42 + fconvert.t(var_30_1))
            var_18_1 = fconvert.s(fconvert.t(var_18_1) + fconvert.t(var_24_1))
        while (i != 1)

return result
