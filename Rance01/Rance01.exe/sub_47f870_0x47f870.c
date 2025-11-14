// 函数: sub_47f870
// 地址: 0x47f870
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

float* eax = arg10
float* ebx = arg6
arg10 = fconvert.s(fconvert.t(*ebx))
float* ebx_1 = arg8
arg6 = fconvert.s(fconvert.t(ebx[1]))
int32_t esi_1 = *arg14
arg14 = fconvert.s(fconvert.t(*ebx_1))
float var_1c = fconvert.s(fconvert.t(ebx_1[1]))
arg8 = fconvert.s(fconvert.t(*arg2))
float var_2c = fconvert.s(fconvert.t(arg2[1]))
float var_20 = fconvert.s(fconvert.t(*eax))
float* eax_1 = arg7
float var_28 = fconvert.s(fconvert.t(eax[1]))
float var_88 = fconvert.s(fconvert.t(*eax_1))
float var_90 = fconvert.s(fconvert.t(eax_1[1]))
float var_74 = fconvert.s(fconvert.t(*arg9))
float var_6c = fconvert.s(fconvert.t(arg9[1]))
float var_78 = fconvert.s(fconvert.t(*arg3))
float var_68 = fconvert.s(fconvert.t(arg3[1]))
long double x87_r7_14 = fconvert.t(var_1c)
long double x87_r5 = fconvert.t(var_2c)
long double x87_r4_2 = fconvert.t(arg8)
long double x87_r2 = fconvert.t(arg14)
double var_a8 = fconvert.d(x87_r2)
long double x87_r2_5 = fconvert.t(arg6)
long double x87_r1_5 = fconvert.t(arg10)
long double x87_r2_15 = fconvert.t(var_28)
long double x87_r2_17 = fconvert.t(var_20)
long double x87_r5_2 = fconvert.t(fconvert.s(fconvert.t(var_a8) - fconvert.t(fconvert.d(x87_r1_5))))
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
    + x87_r5 * fconvert.t(fconvert.s(x87_r2_17 - fconvert.t(var_a8)))
    + fconvert.t(fconvert.s(x87_r2 * x87_r2_15 - x87_r7_14 * x87_r2_17))))
x87_r2_25 - x87_r1_13
result.w = (x87_r2_25 < x87_r1_13 ? 1 : 0) << 8
    | (is_unordered.t(x87_r2_25, x87_r1_13) ? 1 : 0) << 0xa
    | (x87_r2_25 == x87_r1_13 ? 1 : 0) << 0xe | 0x1800
bool p = unimplemented  {test ah, 0x5}

if (p)
    long double x87_r3_6 = float.t(1)
    long double x87_r3_7 = fconvert.t(fconvert.s(x87_r3_6 / x87_r3_6))
    float var_9c_1 = fconvert.s(fconvert.t(fconvert.s(x87_r7_14 - x87_r5)) * x87_r3_7)
    float var_98_1 = fconvert.s(fconvert.t(fconvert.s(x87_r4_2 - x87_r2)) * x87_r3_7)
    float var_5c_1 =
        fconvert.s(fconvert.t(fconvert.s(fconvert.t(fconvert.d(x87_r5)) - x87_r2_5)) * x87_r3_7)
    float var_58_1 =
        fconvert.s(fconvert.t(fconvert.s(x87_r1_5 - fconvert.t(fconvert.d(x87_r4_2)))) * x87_r3_7)
    float var_50_1 = fconvert.s(x87_r1_13 * x87_r3_7)
    float var_4c_1 = fconvert.s(x87_r5_2 * x87_r3_7)
    int32_t ebx_2 = (*(*arg11 + 8))(0, 0)
    int32_t var_8c_1 = ebx_2
    int32_t eax_5 = (*(*arg11 + 0x1c))()
    int32_t eax_8 = (*(*arg11 + 0x10))() - 1
    long double x87_r7_23 = fconvert.t(arg10)
    long double x87_r6_12 = fconvert.t(arg14)
    x87_r6_12 - x87_r7_23
    int32_t var_84_1 = (*(*arg11 + 0x14))() - 1
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
    long double x87_r4_14 = fconvert.t(var_20)
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
    
    float ecx_4 = *arg5
    long double x87_r3_22 = fconvert.t(fconvert.s(float.t(ecx_4)))
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
    int32_t var_14_1 = sub_70c710(fconvert.t(fconvert.s(x87_r3_22)))
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
    
    long double x87_r7_28 = fconvert.t(fconvert.s(float.t(arg5[2] i+ ecx_4)))
    long double x87_r6_16 = fconvert.t(fconvert.s(x87_r7_26))
    x87_r6_16 - x87_r7_28
    int32_t* eax_15
    eax_15.w = (x87_r6_16 < x87_r7_28 ? 1 : 0) << 8
        | (is_unordered.t(x87_r6_16, x87_r7_28) ? 1 : 0) << 0xa
        | (x87_r6_16 == x87_r7_28 ? 1 : 0) << 0xe | 0x3000
    
    if ((eax_15:1.b & 0x41) == 0)
        x87_r7_28 = x87_r6_16
    
    long double x87_r7_30 = fconvert.t(arg6)
    long double x87_r6_17 = fconvert.t(var_1c)
    arg8 = sub_70c710(fconvert.t(fconvert.s(x87_r7_28)))
    x87_r6_17 - x87_r7_30
    int32_t eax_16
    eax_16.w = (x87_r6_17 < x87_r7_30 ? 1 : 0) << 8
        | (is_unordered.t(x87_r6_17, x87_r7_30) ? 1 : 0) << 0xa
        | (x87_r6_17 == x87_r7_30 ? 1 : 0) << 0xe | 0x3000
    long double x87_r6_18
    long double x87_r7_31
    
    if ((eax_16:1.b & 0x41) != 0)
        arg10 = fconvert.s(x87_r6_17)
        x87_r6_18 = x87_r7_30
        x87_r7_31 = x87_r6_17
    else
        x87_r6_18 = x87_r7_30
        x87_r7_31 = x87_r6_17
        arg10 = fconvert.s(x87_r6_18)
    
    long double x87_r5_7 = fconvert.t(var_2c)
    long double x87_r4_17 = fconvert.t(var_28)
    x87_r4_17 - x87_r5_7
    eax_16.w = (x87_r4_17 < x87_r5_7 ? 1 : 0) << 8
        | (is_unordered.t(x87_r4_17, x87_r5_7) ? 1 : 0) << 0xa
        | (x87_r4_17 == x87_r5_7 ? 1 : 0) << 0xe | 0x2000
    long double x87_r4_18
    long double x87_r5_8
    
    if ((eax_16:1.b & 0x41) != 0)
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
    eax_16.w = (x87_r2_29 < x87_r3_24 ? 1 : 0) << 8
        | (is_unordered.t(x87_r2_29, x87_r3_24) ? 1 : 0) << 0xa
        | (x87_r2_29 == x87_r3_24 ? 1 : 0) << 0xe | 0x1000
    
    if ((eax_16:1.b & 0x41) != 0)
        x87_r4_18 = x87_r2_29
    else
        x87_r3_24 = x87_r2_29
    
    int32_t* edx_5 = arg5[1]
    long double x87_r3_26 = fconvert.t(fconvert.s(float.t(edx_5)))
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
    
    x87_r6_18 - x87_r7_31
    int32_t var_20_1 = sub_70c710(fconvert.t(fconvert.s(x87_r3_26)))
    int32_t eax_17
    eax_17.w = (x87_r6_18 < x87_r7_31 ? 1 : 0) << 8
        | (is_unordered.t(x87_r6_18, x87_r7_31) ? 1 : 0) << 0xa
        | (x87_r6_18 == x87_r7_31 ? 1 : 0) << 0xe | 0x2000
    
    if ((eax_17:1.b & 0x41) != 0)
        x87_r5_8 = x87_r6_18
    
    long double x87_r7_32 = x87_r5_8
    x87_r4_18 - x87_r7_32
    eax_17.w = (x87_r4_18 < x87_r7_32 ? 1 : 0) << 8
        | (is_unordered.t(x87_r4_18, x87_r7_32) ? 1 : 0) << 0xa
        | (x87_r4_18 == x87_r7_32 ? 1 : 0) << 0xe | 0x3000
    
    if ((eax_17:1.b & 0x41) != 0)
        x87_r7_32 = x87_r4_18
    
    long double x87_r7_33 = fconvert.t(fconvert.s(x87_r7_31))
    long double x87_r6_20 = fconvert.t(fconvert.s(x87_r7_32))
    x87_r6_20 - x87_r7_33
    eax_17.w = (x87_r6_20 < x87_r7_33 ? 1 : 0) << 8
        | (is_unordered.t(x87_r6_20, x87_r7_33) ? 1 : 0) << 0xa
        | (x87_r6_20 == x87_r7_33 ? 1 : 0) << 0xe | 0x3000
    bool p_4 = unimplemented  {test ah, 0x5}
    
    if (not(p_4))
        x87_r7_33 = x87_r6_20
    
    long double x87_r7_35 = fconvert.t(fconvert.s(float.t(arg5[3] + edx_5)))
    long double x87_r6_21 = fconvert.t(fconvert.s(x87_r7_33))
    x87_r6_21 - x87_r7_35
    int32_t* eax_18
    eax_18.w = (x87_r6_21 < x87_r7_35 ? 1 : 0) << 8
        | (is_unordered.t(x87_r6_21, x87_r7_35) ? 1 : 0) << 0xa
        | (x87_r6_21 == x87_r7_35 ? 1 : 0) << 0xe | 0x3000
    
    if ((eax_18:1.b & 0x41) == 0)
        x87_r7_35 = x87_r6_21
    
    int32_t eax_20 = arg8 i- var_14_1
    long double x87_r7_37 = fconvert.t(var_5c_1)
    long double x87_r5_10 = fconvert.t(var_9c_1)
    int32_t i_2 = sub_70c710(fconvert.t(fconvert.s(x87_r7_35))) - var_20_1
    arg10:3.b = arg13[8]
    long double x87_r4_22 = fconvert.t(var_50_1)
    arg14:3.b = arg13[4]
    char ecx_9 = arg13[0xc]
    arg7:3.b = *arg13
    arg6:3.b = arg12[8]
    arg8:3.b = arg12[4]
    char eax_25 = arg12[0xc]
    arg9:3.b = *arg12
    double var_80_1
    var_80_1:4.d = fconvert.s(x87_r7_37 * fconvert.t(var_6c) + x87_r5_10 * fconvert.t(var_90)
        + x87_r4_22 * fconvert.t(var_68))
    void* edi_1 = (*(*arg4 + 8))(var_14_1, var_20_1)
    char* var_38_1 = edi_1
    int32_t ecx_15 = eax_20
    result = (*(*arg4 + 0x1c))() - (ecx_15 << 2)
    var_a8:4.d = result
    long double x87_r7_42 = fconvert.t(fconvert.s(float.t(var_20_1)))
    float var_24_1 = fconvert.s(x87_r7_42 * fconvert.t(var_98_1) + fconvert.t(fconvert.s(
        fconvert.t(fconvert.s(x87_r5 * x87_r2 - x87_r4_2 * x87_r7_14)) * x87_r3_7)))
    float var_18_1 = fconvert.s(x87_r7_42 * fconvert.t(var_58_1) + fconvert.t(fconvert.s(
        fconvert.t(fconvert.s(x87_r2_5 * x87_r4_2 - x87_r1_5 * x87_r5)) * x87_r3_7)))
    float var_20_2 =
        fconvert.s(x87_r7_42 * fconvert.t(var_4c_1) + fconvert.t(fconvert.s(x87_r3_7 * x87_r2_21)))
    long double x87_r7_46 = fconvert.t(fconvert.s(float.t(var_14_1)))
    
    if (i_2 s> 0)
        int32_t i_1 = i_2
        int32_t i
        
        do
            long double x87_r6_38 = fconvert.t(var_24_1)
            long double x87_r5_13 = fconvert.t(var_18_1)
            long double x87_r6_42 = x87_r5_13
            long double x87_r5_17 = fconvert.t(fconvert.s(
                fconvert.t(fconvert.s(x87_r7_46 * fconvert.t(var_5c_1))) + x87_r5_13))
            long double x87_r3_30 = fconvert.t(fconvert.s(
                fconvert.t(fconvert.s(x87_r7_46 * fconvert.t(var_9c_1))) + x87_r6_38))
            long double x87_r2_33 = fconvert.t(fconvert.s(
                fconvert.t(fconvert.s(x87_r7_46 * fconvert.t(var_50_1))) + fconvert.t(var_20_2)))
            float var_18_3 = fconvert.s(x87_r5_17 * fconvert.t(var_74)
                + x87_r3_30 * fconvert.t(var_88) + x87_r2_33 * fconvert.t(var_78))
            float var_14_2 = fconvert.s(x87_r5_17 * fconvert.t(var_6c)
                + x87_r3_30 * fconvert.t(var_90) + x87_r2_33 * fconvert.t(var_68))
            
            if (ecx_15 s> 0)
                long double x87_r4_32 = fconvert.t(256.0)
                uint32_t edi_2 = zx.d(arg10:3.b)
                double var_c0
                var_c0:4.d = zx.d(arg6:3.b)
                uint32_t eax_32 = zx.d(arg8:3.b)
                double var_c8
                var_c8:4.d = zx.d(arg14:3.b)
                uint32_t edx_12 = zx.d(arg7:3.b)
                uint32_t eax_33 = zx.d(arg9:3.b)
                uint32_t edx_13 = zx.d(ecx_9)
                uint32_t eax_34 = zx.d(eax_25)
                uint32_t var_b4_1 = edi_2
                int32_t var_24_3 = ecx_15
                
                while (true)
                    long double x87_r3_32 = fconvert.t(var_18_3)
                    int32_t eax_35 = sub_70c710(x87_r3_32 * x87_r4_32)
                    long double x87_r2_38 = fconvert.t(var_14_2)
                    int32_t eax_36 = sub_70c710(x87_r2_38 * x87_r4_32)
                    uint32_t ecx_17 = zx.d(eax_35.b)
                    uint32_t ecx_19 = zx.d(eax_36.b)
                    int32_t edx_15 = eax_35 s>> 8
                    int32_t eax_37 = eax_36 s>> 8
                    int32_t var_4_1 = edx_15 + 1
                    int32_t var_c_2 = edx_15
                    int32_t var_8_1 = eax_37
                    int32_t ecx_21 = eax_37 + 1
                    
                    if (edx_15 s>= 0)
                        if (edx_15 s> eax_8)
                            var_c_2 = eax_8
                        
                        eax_37 = var_8_1
                    else
                        var_c_2 = 0
                    
                    if (eax_37 s< 0)
                        eax_37 = 0
                        var_8_1 = 0
                    else if (eax_37 s> var_84_1)
                        eax_37 = var_84_1
                        var_8_1 = var_84_1
                    
                    if (var_4_1 s>= 0)
                        if (var_4_1 s> eax_8)
                            var_4_1 = eax_8
                        
                        eax_37 = var_8_1
                    else
                        var_4_1 = 0
                    
                    if (ecx_21 s< 0)
                        ecx_21 = 0
                    else if (ecx_21 s> var_84_1)
                        ecx_21 = var_84_1
                    
                    void* eax_40 = eax_37 * eax_5
                    int32_t edx_24 = var_4_1 * 4
                    int32_t ecx_24 = *(ecx_21 * eax_5 + edx_24 + ebx_2)
                    int32_t eax_43 = var_c0:4.d
                    int32_t var_10_1
                    var_10_1.b = (((zx.d((*(eax_40 + (var_c_2 << 2) + ebx_2)).b) * edi_2) s>> 8)
                        + eax_43)[esi_1]
                    int32_t ecx_29 = var_c8:4.d
                    var_10_1:1.b = *(((zx.d(var_10_1:1.b) * ecx_29) s>> 8) + eax_32 + esi_1)
                    var_10_1:2.b = *(((zx.d(var_10_1:2.b) * edx_12) s>> 8) + eax_33 + esi_1)
                    var_10_1:3.b = *(((zx.d(var_10_1:3.b) * edx_13) s>> 8) + eax_34 + esi_1)
                    int32_t var_4_2
                    var_4_2.b =
                        (((zx.d((*(eax_40 + edx_24 + ebx_2)).b) * edi_2) s>> 8) + eax_43)[esi_1]
                    var_4_2:1.b = *(((zx.d(var_4_2:1.b) * ecx_29) s>> 8) + eax_32 + esi_1)
                    var_4_2:2.b = *(((zx.d(var_4_2:2.b) * edx_12) s>> 8) + eax_33 + esi_1)
                    var_4_2:3.b = *(((zx.d(var_4_2:3.b) * edx_13) s>> 8) + eax_34 + esi_1)
                    int32_t var_c_3
                    var_c_3.b = (((zx.d(ecx_24.b) * edi_2) s>> 8) + eax_43)[esi_1]
                    var_c_3:1.b = *(((zx.d(var_c_3:1.b) * ecx_29) s>> 8) + eax_32 + esi_1)
                    int32_t ebx_5 = (zx.d(var_c_3:3.b) * edx_13) s>> 8
                    var_c_3:2.b = *(((zx.d(var_c_3:2.b) * edx_12) s>> 8) + eax_33 + esi_1)
                    int32_t ebx_6
                    ebx_6.b = *(ebx_5 + eax_34 + esi_1)
                    var_c_3:3.b = ebx_6.b
                    eax_43.b = (((zx.d(ecx_24.b) * edi_2) s>> 8) + eax_43)[esi_1]
                    int32_t var_8_2
                    var_8_2.b = eax_43.b
                    int32_t eax_51 = ((zx.d(var_8_2:2.b) * edx_12) s>> 8) + eax_33
                    var_8_2:1.b = *(((zx.d(var_8_2:1.b) * ecx_29) s>> 8) + eax_32 + esi_1)
                    int32_t eax_55 = ((zx.d(var_8_2:3.b) * edx_13) s>> 8) + eax_34
                    var_8_2:2.b = *(eax_51 + esi_1)
                    uint32_t eax_56 = zx.d(var_10_1.b)
                    uint32_t edx_77 = zx.d(var_10_1:2.b)
                    var_8_2:3.b = *(eax_55 + esi_1)
                    int32_t edi_7 = (((zx.d(var_4_2.b) - eax_56) * ecx_17) s>> 8) + eax_56
                    uint32_t eax_57 = zx.d(var_10_1:1.b)
                    int32_t ecx_37 = (((zx.d(var_4_2:1.b) - eax_57) * ecx_17) s>> 8) + eax_57
                    int32_t eax_62 = (((zx.d(var_4_2:2.b) - edx_77) * ecx_17) s>> 8) + edx_77
                    uint32_t eax_63 = zx.d(var_10_1:3.b)
                    uint32_t ebx_12 = zx.d(var_c_3:3.b)
                    int32_t edx_82 = (((zx.d(var_4_2:3.b) - eax_63) * ecx_17) s>> 8) + eax_63
                    int32_t eax_72 = ((((((zx.d(var_8_2:3.b) - ebx_12) * ecx_17) s>> 8) - edx_82
                        + ebx_12) * ecx_19) s>> 8) + edx_82
                    uint32_t edx_83 = zx.d(var_c_3.b)
                    uint32_t edi_8 = zx.d(var_c_3:1.b)
                    *var_38_1 += (((((((((zx.d(var_8_2.b) - edx_83) * ecx_17) s>> 8) - edi_7
                        + edx_83) * ecx_19) s>> 8) - zx.d(*var_38_1) + edi_7) * eax_72) s>> 8).b
                    char* edx_86
                    edx_86.b = var_38_1[1]
                    uint32_t ecx_38 = zx.d(var_c_3:2.b)
                    var_38_1[1] = (((((((((zx.d(var_8_2:1.b) - edi_8) * ecx_17) s>> 8) - ecx_37
                        + edi_8) * ecx_19) s>> 8) - zx.d(edx_86.b) + ecx_37) * eax_72) s>> 8).b
                        + edx_86.b
                    edx_86.b = var_38_1[2]
                    edi_1 = &var_38_1[4]
                    var_38_1 = edi_1
                    var_18_3 = fconvert.s(x87_r3_32 + fconvert.t(fconvert.s(
                        x87_r7_37 * fconvert.t(var_74) + x87_r5_10 * fconvert.t(var_88)
                        + x87_r4_22 * fconvert.t(var_78))))
                    var_14_2 = fconvert.s(x87_r2_38 + fconvert.t(var_80_1:4.d))
                    int32_t temp2_1 = var_24_3
                    var_24_3 -= 1
                    *(edi_1 - 2) = (((((((((zx.d(var_8_2:2.b) - ecx_38) * ecx_17) s>> 8) - eax_62
                        + ecx_38) * ecx_19) s>> 8) - zx.d(edx_86.b) + eax_62) * eax_72) s>> 8).b
                        + edx_86.b
                    ebx_2 = var_8c_1
                    
                    if (temp2_1 == 1)
                        break
                    
                    edi_2 = var_b4_1
                
                result = var_a8:4.d
                ecx_15 = eax_20
                x87_r6_42 = x87_r4_32
            
            edi_1 += result
            i = i_1
            i_1 -= 1
            var_38_1 = edi_1
            var_24_1 = fconvert.s(x87_r6_38 + fconvert.t(var_98_1))
            var_18_1 = fconvert.s(x87_r6_42 + fconvert.t(var_58_1))
            var_20_2 = fconvert.s(fconvert.t(var_20_2) + fconvert.t(var_4c_1))
        while (i != 1)

return result
