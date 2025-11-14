// 函数: sub_451f70
// 地址: 0x451f70
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

float* eax = arg10
float* edi = arg6
arg10 = fconvert.s(fconvert.t(*edi))
int32_t esi_1 = *arg14
float* edi_1 = arg8
arg6 = fconvert.s(fconvert.t(edi[1]))
arg14 = fconvert.s(fconvert.t(*edi_1))
float var_14 = fconvert.s(fconvert.t(edi_1[1]))
arg8 = fconvert.s(fconvert.t(*arg2))
float var_34 = fconvert.s(fconvert.t(arg2[1]))
float var_1c = fconvert.s(fconvert.t(*eax))
float* eax_1 = arg7
float var_2c = fconvert.s(fconvert.t(eax[1]))
float var_90 = fconvert.s(fconvert.t(*eax_1))
float var_98 = fconvert.s(fconvert.t(eax_1[1]))
float var_6c = fconvert.s(fconvert.t(*arg9))
float var_70 = fconvert.s(fconvert.t(arg9[1]))
float var_7c = fconvert.s(fconvert.t(*arg3))
float var_64 = fconvert.s(fconvert.t(arg3[1]))
long double x87_r7_14 = fconvert.t(var_14)
long double x87_r5 = fconvert.t(var_34)
long double x87_r4_2 = fconvert.t(arg8)
long double x87_r2 = fconvert.t(arg14)
double var_b0 = fconvert.d(x87_r2)
long double x87_r2_5 = fconvert.t(arg6)
long double x87_r1_5 = fconvert.t(arg10)
long double x87_r2_15 = fconvert.t(var_2c)
long double x87_r2_17 = fconvert.t(var_1c)
long double x87_r5_2 = fconvert.t(fconvert.s(fconvert.t(var_b0) - fconvert.t(fconvert.d(x87_r1_5))))
long double x87_r2_21 =
    fconvert.t(fconvert.s(x87_r7_14 * fconvert.t(arg10) - x87_r2 * fconvert.t(arg6)))
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
    + x87_r5 * fconvert.t(fconvert.s(x87_r2_17 - fconvert.t(var_b0)))
    + fconvert.t(fconvert.s(x87_r2 * x87_r2_15 - x87_r7_14 * x87_r2_17))))
x87_r2_25 - x87_r1_13
result.w = (x87_r2_25 < x87_r1_13 ? 1 : 0) << 8
    | (is_unordered.t(x87_r2_25, x87_r1_13) ? 1 : 0) << 0xa
    | (x87_r2_25 == x87_r1_13 ? 1 : 0) << 0xe | 0x1800
bool p = unimplemented  {test ah, 0x5}

if (p)
    long double x87_r3_6 = float.t(1)
    long double x87_r3_7 = fconvert.t(fconvert.s(x87_r3_6 / x87_r3_6))
    float var_a4_1 = fconvert.s(fconvert.t(fconvert.s(x87_r7_14 - x87_r5)) * x87_r3_7)
    float var_a0_1 = fconvert.s(fconvert.t(fconvert.s(x87_r4_2 - x87_r2)) * x87_r3_7)
    float var_60_1 =
        fconvert.s(fconvert.t(fconvert.s(fconvert.t(fconvert.d(x87_r5)) - x87_r2_5)) * x87_r3_7)
    float var_5c_1 =
        fconvert.s(fconvert.t(fconvert.s(x87_r1_5 - fconvert.t(fconvert.d(x87_r4_2)))) * x87_r3_7)
    float var_54_1 = fconvert.s(x87_r1_13 * x87_r3_7)
    float var_50_1 = fconvert.s(x87_r5_2 * x87_r3_7)
    int32_t edi_2 = (*(*arg11 + 8))(0, 0)
    int32_t var_94_1 = edi_2
    int32_t eax_5 = (*(*arg11 + 0x1c))()
    int32_t eax_8 = (*(*arg11 + 0x10))() - 1
    long double x87_r7_23 = fconvert.t(arg10)
    long double x87_r6_12 = fconvert.t(arg14)
    x87_r6_12 - x87_r7_23
    int32_t var_8c_1 = (*(*arg11 + 0x14))() - 1
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
    
    long double x87_r5_4 = fconvert.t(arg8)
    long double x87_r4_14 = fconvert.t(var_1c)
    x87_r4_14 - x87_r5_4
    eax_11.w = (x87_r4_14 < x87_r5_4 ? 1 : 0) << 8
        | (is_unordered.t(x87_r4_14, x87_r5_4) ? 1 : 0) << 0xa
        | (x87_r4_14 == x87_r5_4 ? 1 : 0) << 0xe | 0x2000
    long double x87_r4_15
    long double x87_r5_5
    
    if ((eax_11:1.b & 0x41) != 0)
        arg14 = fconvert.s(x87_r4_14)
        x87_r4_15 = x87_r5_4
        x87_r5_5 = x87_r4_14
    else
        x87_r4_15 = x87_r5_4
        x87_r5_5 = x87_r4_14
        arg14 = fconvert.s(x87_r4_15)
    
    long double x87_r3_20 = fconvert.t(arg10)
    long double x87_r2_27 = fconvert.t(arg14)
    x87_r2_27 - x87_r3_20
    eax_11.w = (x87_r2_27 < x87_r3_20 ? 1 : 0) << 8
        | (is_unordered.t(x87_r2_27, x87_r3_20) ? 1 : 0) << 0xa
        | (x87_r2_27 == x87_r3_20 ? 1 : 0) << 0xe | 0x1000
    
    if ((eax_11:1.b & 0x41) != 0)
        x87_r4_15 = x87_r2_27
    else
        x87_r3_20 = x87_r2_27
    
    int32_t* ebx_1 = *arg5
    long double x87_r3_22 = fconvert.t(fconvert.s(float.t(ebx_1)))
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
    int32_t var_20_1 = sub_70c710(fconvert.t(fconvert.s(x87_r3_22)))
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
    
    long double x87_r7_28 = fconvert.t(fconvert.s(float.t(arg5[2] + ebx_1)))
    long double x87_r6_16 = fconvert.t(fconvert.s(x87_r7_26))
    x87_r6_16 - x87_r7_28
    eax_13.w = (x87_r6_16 < x87_r7_28 ? 1 : 0) << 8
        | (is_unordered.t(x87_r6_16, x87_r7_28) ? 1 : 0) << 0xa
        | (x87_r6_16 == x87_r7_28 ? 1 : 0) << 0xe | 0x3000
    
    if ((eax_13:1.b & 0x41) == 0)
        x87_r7_28 = x87_r6_16
    
    long double x87_r7_30 = fconvert.t(arg6)
    long double x87_r6_17 = fconvert.t(var_14)
    int32_t ebx_2 = sub_70c710(fconvert.t(fconvert.s(x87_r7_28)))
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
    
    long double x87_r5_7 = fconvert.t(var_34)
    long double x87_r4_17 = fconvert.t(var_2c)
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
    
    long double x87_r3_24 = fconvert.t(arg10)
    long double x87_r2_29 = fconvert.t(arg6)
    x87_r2_29 - x87_r3_24
    eax_14.w = (x87_r2_29 < x87_r3_24 ? 1 : 0) << 8
        | (is_unordered.t(x87_r2_29, x87_r3_24) ? 1 : 0) << 0xa
        | (x87_r2_29 == x87_r3_24 ? 1 : 0) << 0xe | 0x1000
    
    if ((eax_14:1.b & 0x41) != 0)
        x87_r4_18 = x87_r2_29
    else
        x87_r3_24 = x87_r2_29
    
    int32_t* ecx_5 = arg5[1]
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
    int32_t var_1c_1 = sub_70c710(fconvert.t(fconvert.s(x87_r3_26)))
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
    
    long double x87_r7_35 = fconvert.t(fconvert.s(float.t(arg5[3] + ecx_5)))
    long double x87_r6_21 = fconvert.t(fconvert.s(x87_r7_33))
    x87_r6_21 - x87_r7_35
    void* eax_18
    eax_18.w = (x87_r6_21 < x87_r7_35 ? 1 : 0) << 8
        | (is_unordered.t(x87_r6_21, x87_r7_35) ? 1 : 0) << 0xa
        | (x87_r6_21 == x87_r7_35 ? 1 : 0) << 0xe | 0x3000
    
    if ((eax_18:1.b & 0x41) == 0)
        x87_r7_35 = x87_r6_21
    
    int32_t j_3 = ebx_2 - var_20_1
    int32_t eax_19 = sub_70c710(fconvert.t(fconvert.s(x87_r7_35)))
    long double x87_r7_37 = fconvert.t(var_60_1)
    long double x87_r5_10 = fconvert.t(var_a4_1)
    arg10:3.b = arg13[8]
    long double x87_r4_22 = fconvert.t(var_54_1)
    arg14:3.b = arg13[4]
    char eax_21 = arg13[0xc]
    arg7:3.b = *arg13
    arg6:3.b = arg12[8]
    arg8:3.b = arg12[4]
    char eax_23 = arg12[0xc]
    arg9:3.b = *arg12
    double var_88_1
    var_88_1:4.d = fconvert.s(x87_r7_37 * fconvert.t(var_70) + x87_r5_10 * fconvert.t(var_98)
        + x87_r4_22 * fconvert.t(var_64))
    int32_t i_2 = eax_19 - var_1c_1
    void* var_2c_1 = (*(*arg4 + 8))(var_20_1, var_1c_1)
    int32_t j_2 = j_3
    result = (*(*arg4 + 0x1c))() - (j_2 << 2)
    var_b0:4.d = result
    long double x87_r7_42 = fconvert.t(fconvert.s(float.t(var_1c_1)))
    float var_28_1 = fconvert.s(x87_r7_42 * fconvert.t(var_a0_1) + fconvert.t(fconvert.s(
        fconvert.t(fconvert.s(x87_r5 * x87_r2 - x87_r4_2 * x87_r7_14)) * x87_r3_7)))
    float var_18_1 = fconvert.s(x87_r7_42 * fconvert.t(var_5c_1) + fconvert.t(fconvert.s(
        fconvert.t(fconvert.s(x87_r2_5 * x87_r4_2 - x87_r1_5 * x87_r5)) * x87_r3_7)))
    float var_1c_2 =
        fconvert.s(x87_r7_42 * fconvert.t(var_50_1) + fconvert.t(fconvert.s(x87_r3_7 * x87_r2_21)))
    long double x87_r7_46 = fconvert.t(fconvert.s(float.t(var_20_1)))
    
    if (i_2 s> 0)
        int32_t i_1 = i_2
        int32_t i
        
        do
            long double x87_r6_38 = fconvert.t(var_28_1)
            long double x87_r5_13 = fconvert.t(var_18_1)
            long double x87_r6_42 = x87_r5_13
            long double x87_r5_17 = fconvert.t(fconvert.s(
                fconvert.t(fconvert.s(x87_r7_46 * fconvert.t(var_60_1))) + x87_r5_13))
            long double x87_r3_30 = fconvert.t(fconvert.s(
                fconvert.t(fconvert.s(x87_r7_46 * fconvert.t(var_a4_1))) + x87_r6_38))
            long double x87_r2_33 = fconvert.t(fconvert.s(
                fconvert.t(fconvert.s(x87_r7_46 * fconvert.t(var_54_1))) + fconvert.t(var_1c_2)))
            float var_18_3 = fconvert.s(x87_r5_17 * fconvert.t(var_6c)
                + x87_r3_30 * fconvert.t(var_90) + x87_r2_33 * fconvert.t(var_7c))
            float var_14_2 = fconvert.s(x87_r5_17 * fconvert.t(var_70)
                + x87_r3_30 * fconvert.t(var_98) + x87_r2_33 * fconvert.t(var_64))
            
            if (j_2 s> 0)
                uint32_t eax_29 = zx.d(arg10:3.b)
                long double x87_r4_32 = fconvert.t(256.0)
                uint32_t eax_30 = zx.d(arg14:3.b)
                double var_c8
                var_c8:4.d = zx.d(arg6:3.b)
                uint32_t edx_12 = zx.d(arg8:3.b)
                uint32_t eax_31 = zx.d(arg7:3.b)
                uint32_t edx_13 = zx.d(arg9:3.b)
                uint32_t eax_32 = zx.d(eax_21)
                uint32_t edx_14 = zx.d(eax_23)
                int32_t j_1 = j_2
                int32_t j
                
                do
                    long double x87_r3_32 = fconvert.t(var_18_3)
                    int32_t eax_33 = sub_70c710(x87_r3_32 * x87_r4_32)
                    long double x87_r2_38 = fconvert.t(var_14_2)
                    int32_t eax_34 = sub_70c710(x87_r2_38 * x87_r4_32)
                    uint32_t ecx_15 = zx.d(eax_34.b)
                    int32_t edx_16 = eax_33 s>> 8
                    int32_t eax_35 = eax_34 s>> 8
                    int32_t ebx_5 = eax_33 & 0xff
                    int32_t var_8_1 = edx_16 + 1
                    int32_t var_4_2 = edx_16
                    int32_t var_c_1 = eax_35
                    int32_t ecx_17 = eax_35 + 1
                    
                    if (edx_16 s>= 0)
                        if (edx_16 s> eax_8)
                            var_4_2 = eax_8
                        
                        eax_35 = var_c_1
                    else
                        var_4_2 = 0
                    
                    if (eax_35 s< 0)
                        eax_35 = 0
                        var_c_1 = 0
                    else if (eax_35 s> var_8c_1)
                        eax_35 = var_8c_1
                        var_c_1 = var_8c_1
                    
                    if (var_8_1 s>= 0)
                        if (var_8_1 s> eax_8)
                            var_8_1 = eax_8
                        
                        eax_35 = var_c_1
                    else
                        var_8_1 = 0
                    
                    if (ecx_17 s< 0)
                        ecx_17 = 0
                    else if (ecx_17 s> var_8c_1)
                        ecx_17 = var_8c_1
                    
                    void* eax_38 = eax_35 * eax_5
                    int32_t edx_22 = *(eax_38 + (var_4_2 << 2) + edi_2)
                    int32_t edx_25 = var_8_1 * 4
                    int32_t ecx_20 = *(ecx_17 * eax_5 + edx_25 + edi_2)
                    int32_t eax_40 = *(eax_38 + edx_25 + edi_2)
                    int32_t edi_3 = var_c8:4.d
                    int32_t var_10_1
                    var_10_1.b = (((zx.d(edx_22.b) * eax_29) s>> 8) + edi_3)[esi_1]
                    int32_t ecx_32 = ((zx.d(var_10_1:2.b) * eax_31) s>> 8) + edx_13
                    var_10_1:1.b = *(((zx.d(edx_22:1.b) * eax_30) s>> 8) + edx_12 + esi_1)
                    int32_t ecx_36 = ((zx.d(var_10_1:3.b) * eax_32) s>> 8) + edx_14
                    var_10_1:2.b = *(ecx_32 + esi_1)
                    var_10_1:3.b = *(ecx_36 + esi_1)
                    int32_t var_8_2
                    var_8_2.b = (((zx.d(eax_40.b) * eax_29) s>> 8) + edi_3)[esi_1]
                    int32_t ecx_48 = ((zx.d(var_8_2:2.b) * eax_31) s>> 8) + edx_13
                    var_8_2:1.b = *(((zx.d(eax_40:1.b) * eax_30) s>> 8) + edx_12 + esi_1)
                    int32_t ecx_52 = ((zx.d(var_8_2:3.b) * eax_32) s>> 8) + edx_14
                    var_8_2:2.b = *(ecx_48 + esi_1)
                    var_8_2:3.b = *(ecx_52 + esi_1)
                    int32_t var_4_3
                    var_4_3.b = (((zx.d(ecx_20.b) * eax_29) s>> 8) + edi_3)[esi_1]
                    int32_t ecx_62 = zx.d(var_4_3:2.b) * eax_31
                    var_4_3:1.b = *(((zx.d(ecx_20:1.b) * eax_30) s>> 8) + edx_12 + esi_1)
                    var_4_3:2.b = *((ecx_62 s>> 8) + edx_13 + esi_1)
                    var_4_3:3.b = *(((zx.d(var_4_3:3.b) * eax_32) s>> 8) + edx_14 + esi_1)
                    int32_t var_c_2
                    var_c_2.b = (((zx.d(ecx_20.b) * eax_29) s>> 8) + edi_3)[esi_1]
                    int32_t edx_53 = ((zx.d(var_c_2:2.b) * eax_31) s>> 8) + edx_13
                    var_c_2:1.b = *(((zx.d(ecx_20:1.b) * eax_30) s>> 8) + edx_12 + esi_1)
                    int32_t edx_57 = ((zx.d(var_c_2:3.b) * eax_32) s>> 8) + edx_14
                    uint32_t ecx_66 = zx.d(var_10_1.b)
                    uint32_t edi_4 = zx.d(var_10_1:1.b)
                    var_c_2:2.b = *(edx_53 + esi_1)
                    var_c_2:3.b = *(edx_57 + esi_1)
                    int32_t eax_50 = (((zx.d(var_8_2.b) - ecx_66) * ebx_5) s>> 8) + ecx_66
                    int32_t ecx_71 = (((zx.d(var_8_2:1.b) - edi_4) * ebx_5) s>> 8) + edi_4
                    uint32_t edi_5 = zx.d(var_10_1:2.b)
                    int32_t edx_62 = (((zx.d(var_8_2:2.b) - edi_5) * ebx_5) s>> 8) + edi_5
                    uint32_t edx_63 = zx.d(var_10_1:3.b)
                    uint32_t ebx_6 = zx.d(var_4_3:1.b)
                    uint32_t ebx_7 = zx.d(var_4_3:2.b)
                    uint32_t ebx_8 = zx.d(var_4_3.b)
                    int32_t edi_10 = (((zx.d(var_8_2:3.b) - edx_63) * ebx_5) s>> 8) + edx_63
                    uint32_t edx_64 = zx.d(var_4_3:3.b)
                    var_18_3 = fconvert.s(x87_r3_32 + fconvert.t(fconvert.s(
                        x87_r7_37 * fconvert.t(var_6c) + x87_r5_10 * fconvert.t(var_90)
                        + x87_r4_22 * fconvert.t(var_7c))))
                    int32_t ebx_19 = (((((((zx.d(var_c_2:3.b) - edx_64) * ebx_5) s>> 8) - edi_10
                        + edx_64) * ecx_15) s>> 8) + edi_10) << 0x18 | (((((((zx.d(var_c_2:2.b)
                        - ebx_7) * ebx_5) s>> 8) - edx_62 + ebx_7) * ecx_15) s>> 8) + edx_62) << 0x10
                    var_14_2 = fconvert.s(x87_r2_38 + fconvert.t(var_88_1:4.d))
                    int32_t* eax_51 = var_2c_1
                    int32_t ebx_21 = ebx_19 | (((((((zx.d(var_c_2:1.b) - ebx_6) * ebx_5) s>> 8)
                        - ecx_71 + ebx_6) * ecx_15) s>> 8) + ecx_71) << 8 | (((((((zx.d(var_c_2.b)
                        - ebx_8) * ebx_5) s>> 8) - eax_50 + ebx_8) * ecx_15) s>> 8) + eax_50)
                    edi_2 = var_94_1
                    *eax_51 = ebx_21
                    j = j_1
                    j_1 -= 1
                    var_2c_1 = &eax_51[1]
                while (j != 1)
                result = var_b0:4.d
                j_2 = j_3
                x87_r6_42 = x87_r4_32
            
            var_2c_1 += result
            i = i_1
            i_1 -= 1
            var_28_1 = fconvert.s(x87_r6_38 + fconvert.t(var_a0_1))
            var_18_1 = fconvert.s(x87_r6_42 + fconvert.t(var_5c_1))
            var_1c_2 = fconvert.s(fconvert.t(var_1c_2) + fconvert.t(var_50_1))
        while (i != 1)

return result
