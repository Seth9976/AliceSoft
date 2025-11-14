// 函数: sub_48b4a0
// 地址: 0x48b4a0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

float* eax = arg10
float* ebx = arg6
arg10 = fconvert.s(fconvert.t(*ebx))
float esi = arg14
float* ebx_1 = arg8
arg14 = fconvert.s(fconvert.t(ebx[1]))
int32_t esi_1 = *esi
float var_1c = fconvert.s(fconvert.t(*ebx_1))
float* ebx_2 = arg9
float var_4c = fconvert.s(fconvert.t(ebx_1[1]))
float var_38 = fconvert.s(fconvert.t(*ebx_2))
float var_28 = fconvert.s(fconvert.t(ebx_2[1]))
float var_40 = fconvert.s(fconvert.t(*eax))
float* result = arg7
float var_30 = fconvert.s(fconvert.t(eax[1]))
float var_24 = fconvert.s(fconvert.t(*result))
float var_14 = fconvert.s(fconvert.t(result[1]))
float var_54 = fconvert.s(fconvert.t(*arg2))
float var_10 = fconvert.s(fconvert.t(arg2[1]))
float var_44 = fconvert.s(fconvert.t(*arg3))
float var_48 = fconvert.s(fconvert.t(arg3[1]))
long double x87_r7_14 = fconvert.t(var_4c)
long double x87_r5 = fconvert.t(var_28)
long double x87_r4_2 = fconvert.t(var_38)
long double x87_r2 = fconvert.t(var_1c)
double var_98 = fconvert.d(x87_r2)
long double x87_r2_5 = fconvert.t(arg14)
long double x87_r1_5 = fconvert.t(arg10)
long double x87_r2_15 = fconvert.t(var_30)
long double x87_r2_17 = fconvert.t(var_40)
long double x87_r5_2 = fconvert.t(fconvert.s(fconvert.t(var_98) - fconvert.t(fconvert.d(x87_r1_5))))
long double x87_r2_21 =
    fconvert.t(fconvert.s(x87_r7_14 * fconvert.t(arg10) - x87_r2 * fconvert.t(arg14)))
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
    + x87_r5 * fconvert.t(fconvert.s(x87_r2_17 - fconvert.t(var_98)))
    + fconvert.t(fconvert.s(x87_r2 * x87_r2_15 - x87_r7_14 * x87_r2_17))))
x87_r2_25 - x87_r1_13
result.w = (x87_r2_25 < x87_r1_13 ? 1 : 0) << 8
    | (is_unordered.t(x87_r2_25, x87_r1_13) ? 1 : 0) << 0xa
    | (x87_r2_25 == x87_r1_13 ? 1 : 0) << 0xe | 0x1800
bool p = unimplemented  {test ah, 0x5}

if (p)
    long double x87_r3_6 = float.t(1)
    long double x87_r3_7 = fconvert.t(fconvert.s(x87_r3_6 / x87_r3_6))
    float var_90_1 = fconvert.s(fconvert.t(fconvert.s(x87_r7_14 - x87_r5)) * x87_r3_7)
    float var_8c_1 = fconvert.s(fconvert.t(fconvert.s(x87_r4_2 - x87_r2)) * x87_r3_7)
    float var_6c_1 =
        fconvert.s(fconvert.t(fconvert.s(fconvert.t(fconvert.d(x87_r5)) - x87_r2_5)) * x87_r3_7)
    float var_68_1 =
        fconvert.s(fconvert.t(fconvert.s(x87_r1_5 - fconvert.t(fconvert.d(x87_r4_2)))) * x87_r3_7)
    float var_60_1 = fconvert.s(x87_r1_13 * x87_r3_7)
    float var_5c_1 = fconvert.s(x87_r5_2 * x87_r3_7)
    int32_t ebx_3 = (*(*arg11 + 8))(0, 0)
    int32_t var_70_1 = ebx_3
    int32_t eax_4 = (*(*arg11 + 0x1c))()
    int32_t eax_7 = (*(*arg11 + 0x10))() - 1
    int32_t eax_9 = (*(*arg11 + 0x14))()
    float var_b4_1 = fconvert.s(fconvert.t(var_24) / fconvert.t(*(arg6 i+ 0xc)))
    float var_d8_1 = fconvert.s(fconvert.t(var_54) / fconvert.t(*(arg8 i+ 0xc)))
    float var_9c_1 = fconvert.s(fconvert.t(var_44) / fconvert.t(*(arg9 + 0xc)))
    float var_e8_1 = fconvert.s(fconvert.t(var_14) / fconvert.t(*(arg6 i+ 0xc)))
    float var_bc_1 = fconvert.s(fconvert.t(var_10) / fconvert.t(*(arg8 i+ 0xc)))
    double var_c8
    var_c8:4.d = fconvert.s(fconvert.t(var_48) / fconvert.t(*(arg9 + 0xc)))
    *(arg6 i+ 0xc)
    long double x87_r6_12 = float.t(1)
    float var_cc_1 = fconvert.s(x87_r6_12 / fconvert.t(*(arg8 i+ 0xc)))
    float var_ac_1 = fconvert.s(x87_r6_12 / fconvert.t(*(arg9 + 0xc)))
    long double x87_r7_39 = fconvert.t(arg10)
    long double x87_r6_16 = fconvert.t(var_1c)
    x87_r6_16 - x87_r7_39
    int32_t eax_11
    eax_11.w = (x87_r6_16 < x87_r7_39 ? 1 : 0) << 8
        | (is_unordered.t(x87_r6_16, x87_r7_39) ? 1 : 0) << 0xa
        | (x87_r6_16 == x87_r7_39 ? 1 : 0) << 0xe | 0x3000
    long double x87_r6_17
    long double x87_r7_40
    
    if ((eax_11:1.b & 0x41) != 0)
        arg6 = fconvert.s(x87_r6_16)
        x87_r6_17 = x87_r7_39
        x87_r7_40 = x87_r6_16
    else
        x87_r6_17 = x87_r7_39
        x87_r7_40 = x87_r6_16
        arg6 = fconvert.s(x87_r6_17)
    
    long double x87_r5_5 = fconvert.t(var_38)
    long double x87_r4_14 = fconvert.t(var_40)
    x87_r4_14 - x87_r5_5
    eax_11.w = (x87_r4_14 < x87_r5_5 ? 1 : 0) << 8
        | (is_unordered.t(x87_r4_14, x87_r5_5) ? 1 : 0) << 0xa
        | (x87_r4_14 == x87_r5_5 ? 1 : 0) << 0xe | 0x2000
    long double x87_r4_15
    long double x87_r5_6
    
    if ((eax_11:1.b & 0x41) != 0)
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
    eax_11.w = (x87_r2_27 < x87_r3_20 ? 1 : 0) << 8
        | (is_unordered.t(x87_r2_27, x87_r3_20) ? 1 : 0) << 0xa
        | (x87_r2_27 == x87_r3_20 ? 1 : 0) << 0xe | 0x1000
    
    if ((eax_11:1.b & 0x41) != 0)
        x87_r4_15 = x87_r2_27
    else
        x87_r3_20 = x87_r2_27
    
    float edi_1 = *arg5
    long double x87_r3_22 = fconvert.t(fconvert.s(float.t(edi_1)))
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
    
    x87_r6_17 - x87_r7_40
    int32_t var_10_1 = sub_70c710(fconvert.t(fconvert.s(x87_r3_22)))
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
    
    long double x87_r7_44 = fconvert.t(fconvert.s(float.t(arg5[2] i+ edi_1)))
    long double x87_r6_20 = fconvert.t(fconvert.s(x87_r7_42))
    x87_r6_20 - x87_r7_44
    eax_13.w = (x87_r6_20 < x87_r7_44 ? 1 : 0) << 8
        | (is_unordered.t(x87_r6_20, x87_r7_44) ? 1 : 0) << 0xa
        | (x87_r6_20 == x87_r7_44 ? 1 : 0) << 0xe | 0x3000
    
    if ((eax_13:1.b & 0x41) == 0)
        x87_r7_44 = x87_r6_20
    
    long double x87_r7_46 = fconvert.t(arg14)
    long double x87_r6_21 = fconvert.t(var_4c)
    int32_t edi_2 = sub_70c710(fconvert.t(fconvert.s(x87_r7_44)))
    x87_r6_21 - x87_r7_46
    int32_t eax_14
    eax_14.w = (x87_r6_21 < x87_r7_46 ? 1 : 0) << 8
        | (is_unordered.t(x87_r6_21, x87_r7_46) ? 1 : 0) << 0xa
        | (x87_r6_21 == x87_r7_46 ? 1 : 0) << 0xe | 0x3000
    long double x87_r6_22
    long double x87_r7_47
    
    if ((eax_14:1.b & 0x41) != 0)
        arg6 = fconvert.s(x87_r6_21)
        x87_r6_22 = x87_r7_46
        x87_r7_47 = x87_r6_21
    else
        x87_r6_22 = x87_r7_46
        x87_r7_47 = x87_r6_21
        arg6 = fconvert.s(x87_r6_22)
    
    long double x87_r5_8 = fconvert.t(var_28)
    long double x87_r4_17 = fconvert.t(var_30)
    x87_r4_17 - x87_r5_8
    eax_14.w = (x87_r4_17 < x87_r5_8 ? 1 : 0) << 8
        | (is_unordered.t(x87_r4_17, x87_r5_8) ? 1 : 0) << 0xa
        | (x87_r4_17 == x87_r5_8 ? 1 : 0) << 0xe | 0x2000
    long double x87_r4_18
    long double x87_r5_9
    
    if ((eax_14:1.b & 0x41) != 0)
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
    eax_14.w = (x87_r2_29 < x87_r3_24 ? 1 : 0) << 8
        | (is_unordered.t(x87_r2_29, x87_r3_24) ? 1 : 0) << 0xa
        | (x87_r2_29 == x87_r3_24 ? 1 : 0) << 0xe | 0x1000
    
    if ((eax_14:1.b & 0x41) != 0)
        x87_r4_18 = x87_r2_29
    else
        x87_r3_24 = x87_r2_29
    
    int32_t ecx_6 = arg5[1]
    long double x87_r3_26 = fconvert.t(fconvert.s(float.t(ecx_6)))
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
    
    x87_r6_22 - x87_r7_47
    int32_t var_1c_1 = sub_70c710(fconvert.t(fconvert.s(x87_r3_26)))
    int32_t eax_16
    eax_16.w = (x87_r6_22 < x87_r7_47 ? 1 : 0) << 8
        | (is_unordered.t(x87_r6_22, x87_r7_47) ? 1 : 0) << 0xa
        | (x87_r6_22 == x87_r7_47 ? 1 : 0) << 0xe | 0x2000
    
    if ((eax_16:1.b & 0x41) != 0)
        x87_r5_9 = x87_r6_22
    
    long double x87_r7_48 = x87_r5_9
    x87_r4_18 - x87_r7_48
    eax_16.w = (x87_r4_18 < x87_r7_48 ? 1 : 0) << 8
        | (is_unordered.t(x87_r4_18, x87_r7_48) ? 1 : 0) << 0xa
        | (x87_r4_18 == x87_r7_48 ? 1 : 0) << 0xe | 0x3000
    
    if ((eax_16:1.b & 0x41) != 0)
        x87_r7_48 = x87_r4_18
    
    long double x87_r7_49 = fconvert.t(fconvert.s(x87_r7_47))
    long double x87_r6_24 = fconvert.t(fconvert.s(x87_r7_48))
    x87_r6_24 - x87_r7_49
    eax_16.w = (x87_r6_24 < x87_r7_49 ? 1 : 0) << 8
        | (is_unordered.t(x87_r6_24, x87_r7_49) ? 1 : 0) << 0xa
        | (x87_r6_24 == x87_r7_49 ? 1 : 0) << 0xe | 0x3000
    bool p_4 = unimplemented  {test ah, 0x5}
    
    if (not(p_4))
        x87_r7_49 = x87_r6_24
    
    long double x87_r7_51 = fconvert.t(fconvert.s(float.t(arg5[3] + ecx_6)))
    long double x87_r6_25 = fconvert.t(fconvert.s(x87_r7_49))
    x87_r6_25 - x87_r7_51
    void* eax_18
    eax_18.w = (x87_r6_25 < x87_r7_51 ? 1 : 0) << 8
        | (is_unordered.t(x87_r6_25, x87_r7_51) ? 1 : 0) << 0xa
        | (x87_r6_25 == x87_r7_51 ? 1 : 0) << 0xe | 0x3000
    
    if ((eax_18:1.b & 0x41) == 0)
        x87_r7_51 = x87_r6_25
    
    int32_t edi_3 = edi_2 - var_10_1
    int32_t i_2 = sub_70c710(fconvert.t(fconvert.s(x87_r7_51))) - var_1c_1
    arg6:3.b = arg13[8]
    arg9:3.b = arg13[4]
    char edx_9 = arg13[0xc]
    arg14:3.b = *arg13
    arg8:3.b = arg12[8]
    arg10:3.b = arg12[4]
    char edx_11 = arg12[0xc]
    arg7:3.b = *arg12
    void* edi_5 = (*(*arg4 + 8))(var_10_1, var_1c_1)
    void* var_3c_1 = edi_5
    int32_t ecx_13 = edi_3
    result = (*(*arg4 + 0x1c))() - (ecx_13 << 2)
    long double x87_r7_54 = fconvert.t(fconvert.s(float.t(var_1c_1)))
    var_98:4.d = result
    float var_40_1 = fconvert.s(x87_r7_54 * fconvert.t(var_8c_1) + fconvert.t(fconvert.s(
        fconvert.t(fconvert.s(x87_r5 * x87_r2 - x87_r4_2 * x87_r7_14)) * x87_r3_7)))
    float var_38_1 = fconvert.s(x87_r7_54 * fconvert.t(var_68_1) + fconvert.t(fconvert.s(
        fconvert.t(fconvert.s(x87_r2_5 * x87_r4_2 - x87_r1_5 * x87_r5)) * x87_r3_7)))
    float var_1c_2 =
        fconvert.s(x87_r7_54 * fconvert.t(var_5c_1) + fconvert.t(fconvert.s(x87_r3_7 * x87_r2_21)))
    long double x87_r7_58 = fconvert.t(fconvert.s(float.t(var_10_1)))
    
    if (i_2 s> 0)
        long double x87_r7_60 = fconvert.t(256.0)
        int32_t i_1 = i_2
        int32_t i
        
        do
            float var_14_1 = fconvert.s(fconvert.t(fconvert.s(x87_r7_58 * fconvert.t(var_90_1)))
                + fconvert.t(var_40_1))
            float var_10_2 = fconvert.s(fconvert.t(fconvert.s(x87_r7_58 * fconvert.t(var_6c_1)))
                + fconvert.t(var_38_1))
            float var_20_1 = fconvert.s(fconvert.t(fconvert.s(x87_r7_58 * fconvert.t(var_60_1)))
                + fconvert.t(var_1c_2))
            
            if (ecx_13 s> 0)
                uint32_t edi_6 = zx.d(arg6:3.b)
                double var_a8
                var_a8:4.d = zx.d(arg8:3.b)
                uint32_t eax_28 = zx.d(arg10:3.b)
                double var_78_1
                var_78_1:4.d = zx.d(arg9:3.b)
                uint32_t edx_17 = zx.d(arg14:3.b)
                uint32_t eax_29 = zx.d(arg7:3.b)
                uint32_t edx_18 = zx.d(edx_9)
                uint32_t eax_30 = zx.d(edx_11)
                uint32_t var_c0_1 = edi_6
                int32_t var_44_2 = ecx_13
                
                while (true)
                    long double x87_r6_42 = fconvert.t(var_10_2)
                    long double x87_r4_20 = fconvert.t(var_14_1)
                    long double x87_r3_30 = fconvert.t(var_20_1)
                    long double x87_r2_33 = float.t(1)
                    long double x87_r2_38 = fconvert.t(fconvert.s(x87_r2_33 / x87_r2_33))
                    int32_t eax_31 = sub_70c710(fconvert.t(fconvert.s((
                        x87_r6_42 * fconvert.t(var_d8_1) + x87_r4_20 * fconvert.t(var_b4_1)
                        + x87_r3_30 * fconvert.t(var_9c_1)) * x87_r2_38)) * x87_r7_60)
                    int32_t eax_32 = sub_70c710(fconvert.t(fconvert.s(x87_r2_38 * (
                        x87_r6_42 * fconvert.t(var_bc_1) + x87_r4_20 * fconvert.t(var_e8_1)
                        + x87_r3_30 * fconvert.t(var_c8:4.d)))) * x87_r7_60)
                    uint32_t ecx_15 = zx.d(eax_31.b)
                    uint32_t ecx_17 = zx.d(eax_32.b)
                    int32_t edx_20 = eax_31 s>> 8
                    int32_t eax_33 = eax_32 s>> 8
                    int32_t var_4_1 = edx_20 + 1
                    int32_t var_c_2 = edx_20
                    int32_t var_8_1 = eax_33
                    int32_t ecx_19 = eax_33 + 1
                    
                    if (edx_20 s>= 0)
                        if (edx_20 s> eax_7)
                            var_c_2 = eax_7
                        
                        eax_33 = var_8_1
                    else
                        var_c_2 = 0
                    
                    if (eax_33 s< 0)
                        eax_33 = 0
                        var_8_1 = 0
                    else if (eax_33 s> eax_9 - 1)
                        eax_33 = eax_9 - 1
                        var_8_1 = eax_9 - 1
                    
                    if (var_4_1 s>= 0)
                        if (var_4_1 s> eax_7)
                            var_4_1 = eax_7
                        
                        eax_33 = var_8_1
                    else
                        var_4_1 = 0
                    
                    if (ecx_19 s< 0)
                        ecx_19 = 0
                    else if (ecx_19 s> eax_9 - 1)
                        ecx_19 = eax_9 - 1
                    
                    void* eax_36 = eax_33 * eax_4
                    int32_t edx_29 = var_4_1 * 4
                    int32_t ecx_22 = *(ecx_19 * eax_4 + edx_29 + ebx_3)
                    int32_t eax_39 = var_a8:4.d
                    int32_t var_18_1
                    var_18_1.b = (((zx.d((*(eax_36 + (var_c_2 << 2) + ebx_3)).b) * edi_6) s>> 8)
                        + eax_39)[esi_1]
                    int32_t ecx_27 = var_78_1:4.d
                    var_18_1:1.b = *(((zx.d(var_18_1:1.b) * ecx_27) s>> 8) + eax_28 + esi_1)
                    var_18_1:2.b = *(((zx.d(var_18_1:2.b) * edx_17) s>> 8) + eax_29 + esi_1)
                    var_18_1:3.b = *(((zx.d(var_18_1:3.b) * edx_18) s>> 8) + eax_30 + esi_1)
                    int32_t var_4_2
                    var_4_2.b =
                        (((zx.d((*(eax_36 + edx_29 + ebx_3)).b) * edi_6) s>> 8) + eax_39)[esi_1]
                    var_4_2:1.b = *(((zx.d(var_4_2:1.b) * ecx_27) s>> 8) + eax_28 + esi_1)
                    var_4_2:2.b = *(((zx.d(var_4_2:2.b) * edx_17) s>> 8) + eax_29 + esi_1)
                    var_4_2:3.b = *(((zx.d(var_4_2:3.b) * edx_18) s>> 8) + eax_30 + esi_1)
                    int32_t var_c_3
                    var_c_3.b = (((zx.d(ecx_22.b) * edi_6) s>> 8) + eax_39)[esi_1]
                    var_c_3:1.b = *(((zx.d(var_c_3:1.b) * ecx_27) s>> 8) + eax_28 + esi_1)
                    int32_t ebx_6 = (zx.d(var_c_3:3.b) * edx_18) s>> 8
                    var_c_3:2.b = *(((zx.d(var_c_3:2.b) * edx_17) s>> 8) + eax_29 + esi_1)
                    int32_t ebx_7
                    ebx_7.b = *(ebx_6 + eax_30 + esi_1)
                    var_c_3:3.b = ebx_7.b
                    eax_39.b = (((zx.d(ecx_22.b) * edi_6) s>> 8) + eax_39)[esi_1]
                    int32_t var_8_2
                    var_8_2.b = eax_39.b
                    int32_t eax_47 = ((zx.d(var_8_2:2.b) * edx_17) s>> 8) + eax_29
                    var_8_2:1.b = *(((zx.d(var_8_2:1.b) * ecx_27) s>> 8) + eax_28 + esi_1)
                    int32_t eax_51 = ((zx.d(var_8_2:3.b) * edx_18) s>> 8) + eax_30
                    var_8_2:2.b = *(eax_47 + esi_1)
                    uint32_t eax_52 = zx.d(var_18_1.b)
                    uint32_t edx_82 = zx.d(var_18_1:2.b)
                    var_8_2:3.b = *(eax_51 + esi_1)
                    int32_t edi_11 = (((zx.d(var_4_2.b) - eax_52) * ecx_15) s>> 8) + eax_52
                    uint32_t eax_53 = zx.d(var_18_1:1.b)
                    int32_t ecx_35 = (((zx.d(var_4_2:1.b) - eax_53) * ecx_15) s>> 8) + eax_53
                    int32_t eax_58 = (((zx.d(var_4_2:2.b) - edx_82) * ecx_15) s>> 8) + edx_82
                    uint32_t eax_59 = zx.d(var_18_1:3.b)
                    uint32_t ebx_13 = zx.d(var_c_3:3.b)
                    int32_t edx_87 = (((zx.d(var_4_2:3.b) - eax_59) * ecx_15) s>> 8) + eax_59
                    int32_t eax_68 = ((((((zx.d(var_8_2:3.b) - ebx_13) * ecx_15) s>> 8) - edx_87
                        + ebx_13) * ecx_17) s>> 8) + edx_87
                    uint32_t edx_88 = zx.d(var_c_3.b)
                    char* edx_91 = var_3c_1
                    uint32_t edi_12 = zx.d(var_c_3:1.b)
                    *edx_91 += (((((((((zx.d(var_8_2.b) - edx_88) * ecx_15) s>> 8) - edi_11
                        + edx_88) * ecx_17) s>> 8) - zx.d(*var_3c_1) + edi_11) * eax_68) s>> 8).b
                    edx_91.b = edx_91[1]
                    uint32_t ecx_36 = zx.d(var_c_3:2.b)
                    *(var_3c_1 + 1) = (((((((((zx.d(var_8_2:1.b) - edi_12) * ecx_15) s>> 8) - ecx_35
                        + edi_12) * ecx_17) s>> 8) - zx.d(edx_91.b) + ecx_35) * eax_68) s>> 8).b
                        + edx_91.b
                    edx_91.b = *(var_3c_1 + 2)
                    edi_5 = var_3c_1 + 4
                    var_3c_1 = edi_5
                    var_14_1 = fconvert.s(x87_r4_20 + fconvert.t(var_90_1))
                    var_10_2 = fconvert.s(x87_r6_42 + fconvert.t(var_6c_1))
                    var_20_1 = fconvert.s(x87_r3_30 + fconvert.t(var_60_1))
                    int32_t temp2_1 = var_44_2
                    var_44_2 -= 1
                    *(edi_5 - 2) = (((((((((zx.d(var_8_2:2.b) - ecx_36) * ecx_15) s>> 8) - eax_58
                        + ecx_36) * ecx_17) s>> 8) - zx.d(edx_91.b) + eax_58) * eax_68) s>> 8).b
                        + edx_91.b
                    ebx_3 = var_70_1
                    
                    if (temp2_1 == 1)
                        break
                    
                    edi_6 = var_c0_1
                
                result = var_98:4.d
                ecx_13 = edi_3
            
            edi_5 += result
            i = i_1
            i_1 -= 1
            var_3c_1 = edi_5
            var_40_1 = fconvert.s(fconvert.t(var_40_1) + fconvert.t(var_8c_1))
            var_38_1 = fconvert.s(fconvert.t(var_38_1) + fconvert.t(var_68_1))
            var_1c_2 = fconvert.s(fconvert.t(var_1c_2) + fconvert.t(var_5c_1))
        while (i != 1)

return result
