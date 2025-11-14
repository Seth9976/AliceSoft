// 函数: sub_45d860
// 地址: 0x45d860
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

float* eax = arg10
float* edi = arg6
arg10 = fconvert.s(fconvert.t(*edi))
int32_t esi_1 = *arg14
float* edi_1 = arg8
arg14 = fconvert.s(fconvert.t(edi[1]))
float var_20 = fconvert.s(fconvert.t(*edi_1))
float* edi_2 = arg9
float var_1c = fconvert.s(fconvert.t(edi_1[1]))
float var_38 = fconvert.s(fconvert.t(*edi_2))
float var_3c = fconvert.s(fconvert.t(edi_2[1]))
float var_34 = fconvert.s(fconvert.t(*eax))
float* result = arg7
float var_2c = fconvert.s(fconvert.t(eax[1]))
float var_24 = fconvert.s(fconvert.t(*result))
float var_18 = fconvert.s(fconvert.t(result[1]))
float var_58 = fconvert.s(fconvert.t(*arg2))
float var_14 = fconvert.s(fconvert.t(arg2[1]))
float var_48 = fconvert.s(fconvert.t(*arg3))
float var_40 = fconvert.s(fconvert.t(arg3[1]))
long double x87_r7_14 = fconvert.t(var_1c)
long double x87_r5 = fconvert.t(var_3c)
long double x87_r4_2 = fconvert.t(var_38)
long double x87_r2 = fconvert.t(var_20)
double var_a0 = fconvert.d(x87_r2)
long double x87_r2_5 = fconvert.t(arg14)
long double x87_r1_5 = fconvert.t(arg10)
long double x87_r2_15 = fconvert.t(var_2c)
long double x87_r2_17 = fconvert.t(var_34)
long double x87_r5_2 = fconvert.t(fconvert.s(fconvert.t(var_a0) - fconvert.t(fconvert.d(x87_r1_5))))
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
    + x87_r5 * fconvert.t(fconvert.s(x87_r2_17 - fconvert.t(var_a0)))
    + fconvert.t(fconvert.s(x87_r2 * x87_r2_15 - x87_r7_14 * x87_r2_17))))
x87_r2_25 - x87_r1_13
result.w = (x87_r2_25 < x87_r1_13 ? 1 : 0) << 8
    | (is_unordered.t(x87_r2_25, x87_r1_13) ? 1 : 0) << 0xa
    | (x87_r2_25 == x87_r1_13 ? 1 : 0) << 0xe | 0x1800
bool p = unimplemented  {test ah, 0x5}

if (p)
    long double x87_r3_6 = float.t(1)
    long double x87_r3_7 = fconvert.t(fconvert.s(x87_r3_6 / x87_r3_6))
    float var_98_1 = fconvert.s(fconvert.t(fconvert.s(x87_r7_14 - x87_r5)) * x87_r3_7)
    float var_94_1 = fconvert.s(fconvert.t(fconvert.s(x87_r4_2 - x87_r2)) * x87_r3_7)
    float var_70_1 =
        fconvert.s(fconvert.t(fconvert.s(fconvert.t(fconvert.d(x87_r5)) - x87_r2_5)) * x87_r3_7)
    float var_6c_1 =
        fconvert.s(fconvert.t(fconvert.s(x87_r1_5 - fconvert.t(fconvert.d(x87_r4_2)))) * x87_r3_7)
    float var_64_1 = fconvert.s(x87_r1_13 * x87_r3_7)
    float var_60_1 = fconvert.s(x87_r5_2 * x87_r3_7)
    int32_t edi_3 = (*(*arg11 + 8))(0, 0)
    int32_t var_74_1 = edi_3
    int32_t eax_4 = (*(*arg11 + 0x1c))()
    int32_t eax_7 = (*(*arg11 + 0x10))() - 1
    int32_t eax_9 = (*(*arg11 + 0x14))()
    float var_e0_1 = fconvert.s(fconvert.t(var_24) / fconvert.t(*(arg6 i+ 0xc)))
    float var_b4_1 = fconvert.s(fconvert.t(var_58) / fconvert.t(*(arg8 i+ 0xc)))
    float var_bc_1 = fconvert.s(fconvert.t(var_48) / fconvert.t(*(arg9 + 0xc)))
    float var_c4_1 = fconvert.s(fconvert.t(var_18) / fconvert.t(*(arg6 i+ 0xc)))
    float var_a4_1 = fconvert.s(fconvert.t(var_14) / fconvert.t(*(arg8 i+ 0xc)))
    float var_f0_1 = fconvert.s(fconvert.t(var_40) / fconvert.t(*(arg9 + 0xc)))
    *(arg6 i+ 0xc)
    long double x87_r6_12 = float.t(1)
    float var_c8_1 = fconvert.s(x87_r6_12 / fconvert.t(*(arg8 i+ 0xc)))
    float var_dc_1 = fconvert.s(x87_r6_12 / fconvert.t(*(arg9 + 0xc)))
    long double x87_r7_39 = fconvert.t(arg10)
    long double x87_r6_16 = fconvert.t(var_20)
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
    long double x87_r4_14 = fconvert.t(var_34)
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
    
    float ebx_1 = *arg5
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
    
    x87_r6_17 - x87_r7_40
    int32_t var_14_1 = sub_70c710(fconvert.t(fconvert.s(x87_r3_22)))
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
    eax_13.w = (x87_r6_20 < x87_r7_44 ? 1 : 0) << 8
        | (is_unordered.t(x87_r6_20, x87_r7_44) ? 1 : 0) << 0xa
        | (x87_r6_20 == x87_r7_44 ? 1 : 0) << 0xe | 0x3000
    
    if ((eax_13:1.b & 0x41) == 0)
        x87_r7_44 = x87_r6_20
    
    long double x87_r7_46 = fconvert.t(arg14)
    long double x87_r6_21 = fconvert.t(var_1c)
    int32_t ebx_2 = sub_70c710(fconvert.t(fconvert.s(x87_r7_44)))
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
    
    long double x87_r5_8 = fconvert.t(var_3c)
    long double x87_r4_17 = fconvert.t(var_2c)
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
    int32_t var_20_1 = sub_70c710(fconvert.t(fconvert.s(x87_r3_26)))
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
    float eax_18
    eax_18.w = (x87_r6_25 < x87_r7_51 ? 1 : 0) << 8
        | (is_unordered.t(x87_r6_25, x87_r7_51) ? 1 : 0) << 0xa
        | (x87_r6_25 == x87_r7_51 ? 1 : 0) << 0xe | 0x3000
    
    if ((eax_18:1.b & 0x41) == 0)
        x87_r7_51 = x87_r6_25
    
    int32_t j_3 = ebx_2 - var_14_1
    int32_t eax_19 = sub_70c710(fconvert.t(fconvert.s(x87_r7_51)))
    arg6:3.b = arg13[8]
    arg9:3.b = arg13[4]
    char eax_21 = arg13[0xc]
    arg14:3.b = *arg13
    arg8:3.b = arg12[8]
    arg10:3.b = arg12[4]
    char eax_23 = arg12[0xc]
    arg7:3.b = *arg12
    int32_t i_2 = eax_19 - var_20_1
    void* var_2c_1 = (*(*arg4 + 8))(var_14_1, var_20_1)
    int32_t j_2 = j_3
    result = (*(*arg4 + 0x1c))() - (j_2 << 2)
    var_a0:4.d = result
    long double x87_r7_54 = fconvert.t(fconvert.s(float.t(var_20_1)))
    float var_34_1 = fconvert.s(x87_r7_54 * fconvert.t(var_94_1) + fconvert.t(fconvert.s(
        fconvert.t(fconvert.s(x87_r5 * x87_r2 - x87_r4_2 * x87_r7_14)) * x87_r3_7)))
    float var_38_1 = fconvert.s(x87_r7_54 * fconvert.t(var_6c_1) + fconvert.t(fconvert.s(
        fconvert.t(fconvert.s(x87_r2_5 * x87_r4_2 - x87_r1_5 * x87_r5)) * x87_r3_7)))
    float var_20_2 =
        fconvert.s(x87_r7_54 * fconvert.t(var_60_1) + fconvert.t(fconvert.s(x87_r3_7 * x87_r2_21)))
    long double x87_r7_58 = fconvert.t(fconvert.s(float.t(var_14_1)))
    
    if (i_2 s> 0)
        long double x87_r7_60 = fconvert.t(256.0)
        int32_t i_1 = i_2
        int32_t i
        
        do
            float var_18_1 = fconvert.s(fconvert.t(fconvert.s(x87_r7_58 * fconvert.t(var_98_1)))
                + fconvert.t(var_34_1))
            float var_1c_1 = fconvert.s(fconvert.t(fconvert.s(x87_r7_58 * fconvert.t(var_70_1)))
                + fconvert.t(var_38_1))
            float var_14_2 = fconvert.s(fconvert.t(fconvert.s(x87_r7_58 * fconvert.t(var_64_1)))
                + fconvert.t(var_20_2))
            
            if (j_2 s> 0)
                double var_d0
                var_d0:4.d = zx.d(arg6:3.b)
                uint32_t eax_30 = zx.d(arg9:3.b)
                double var_b0
                var_b0:4.d = zx.d(arg8:3.b)
                uint32_t edx_13 = zx.d(arg10:3.b)
                uint32_t eax_31 = zx.d(arg14:3.b)
                uint32_t edx_14 = zx.d(arg7:3.b)
                uint32_t eax_32 = zx.d(eax_21)
                uint32_t edx_15 = zx.d(eax_23)
                int32_t j_1 = j_2
                int32_t j
                
                do
                    long double x87_r6_42 = fconvert.t(var_1c_1)
                    long double x87_r4_20 = fconvert.t(var_18_1)
                    long double x87_r3_30 = fconvert.t(var_14_2)
                    long double x87_r2_33 = float.t(1)
                    long double x87_r2_38 = fconvert.t(fconvert.s(x87_r2_33 / x87_r2_33))
                    int32_t eax_33 = sub_70c710(fconvert.t(fconvert.s((
                        x87_r6_42 * fconvert.t(var_b4_1) + x87_r4_20 * fconvert.t(var_e0_1)
                        + x87_r3_30 * fconvert.t(var_bc_1)) * x87_r2_38)) * x87_r7_60)
                    int32_t eax_34 = sub_70c710(fconvert.t(fconvert.s(x87_r2_38 * (
                        x87_r6_42 * fconvert.t(var_a4_1) + x87_r4_20 * fconvert.t(var_c4_1)
                        + x87_r3_30 * fconvert.t(var_f0_1)))) * x87_r7_60)
                    uint32_t ecx_16 = zx.d(eax_34.b)
                    int32_t edx_17 = eax_33 s>> 8
                    int32_t eax_35 = eax_34 s>> 8
                    int32_t ebx_5 = eax_33 & 0xff
                    int32_t var_4_1 = edx_17 + 1
                    int32_t var_8_2 = edx_17
                    int32_t var_c_1 = eax_35
                    int32_t ecx_18 = eax_35 + 1
                    
                    if (edx_17 s>= 0)
                        if (edx_17 s> eax_7)
                            var_8_2 = eax_7
                        
                        eax_35 = var_c_1
                    else
                        var_8_2 = 0
                    
                    if (eax_35 s< 0)
                        eax_35 = 0
                        var_c_1 = 0
                    else if (eax_35 s> eax_9 - 1)
                        eax_35 = eax_9 - 1
                        var_c_1 = eax_9 - 1
                    
                    if (var_4_1 s>= 0)
                        if (var_4_1 s> eax_7)
                            var_4_1 = eax_7
                        
                        eax_35 = var_c_1
                    else
                        var_4_1 = 0
                    
                    if (ecx_18 s< 0)
                        ecx_18 = 0
                    else if (ecx_18 s> eax_9 - 1)
                        ecx_18 = eax_9 - 1
                    
                    void* eax_38 = eax_35 * eax_4
                    int32_t edx_23 = *(eax_38 + (var_8_2 << 2) + edi_3)
                    int32_t edx_26 = var_4_1 * 4
                    int32_t ecx_21 = *(ecx_18 * eax_4 + edx_26 + edi_3)
                    int32_t eax_40 = *(eax_38 + edx_26 + edi_3)
                    int32_t edi_4 = var_b0:4.d
                    int32_t eax_41 = var_d0:4.d
                    int32_t var_10_1
                    var_10_1.b = (((zx.d(edx_23.b) * eax_41) s>> 8) + edi_4)[esi_1]
                    int32_t ecx_33 = ((zx.d(var_10_1:2.b) * eax_31) s>> 8) + edx_14
                    var_10_1:1.b = *(((zx.d(edx_23:1.b) * eax_30) s>> 8) + edx_13 + esi_1)
                    int32_t ecx_37 = ((zx.d(var_10_1:3.b) * eax_32) s>> 8) + edx_15
                    var_10_1:2.b = *(ecx_33 + esi_1)
                    var_10_1:3.b = *(ecx_37 + esi_1)
                    int32_t var_4_2
                    var_4_2.b = (((zx.d(eax_40.b) * eax_41) s>> 8) + edi_4)[esi_1]
                    int32_t ecx_49 = ((zx.d(var_4_2:2.b) * eax_31) s>> 8) + edx_14
                    var_4_2:1.b = *(((zx.d(eax_40:1.b) * eax_30) s>> 8) + edx_13 + esi_1)
                    int32_t ecx_53 = ((zx.d(var_4_2:3.b) * eax_32) s>> 8) + edx_15
                    var_4_2:2.b = *(ecx_49 + esi_1)
                    var_4_2:3.b = *(ecx_53 + esi_1)
                    int32_t var_8_3
                    var_8_3.b = (((zx.d(ecx_21.b) * eax_41) s>> 8) + edi_4)[esi_1]
                    int32_t ecx_63 = zx.d(var_8_3:2.b) * eax_31
                    var_8_3:1.b = *(((zx.d(ecx_21:1.b) * eax_30) s>> 8) + edx_13 + esi_1)
                    var_8_3:2.b = *((ecx_63 s>> 8) + edx_14 + esi_1)
                    var_8_3:3.b = *(((zx.d(var_8_3:3.b) * eax_32) s>> 8) + edx_15 + esi_1)
                    int32_t var_c_2
                    var_c_2.b = (((zx.d(ecx_21.b) * eax_41) s>> 8) + edi_4)[esi_1]
                    int32_t edx_54 = ((zx.d(var_c_2:2.b) * eax_31) s>> 8) + edx_14
                    var_c_2:1.b = *(((zx.d(ecx_21:1.b) * eax_30) s>> 8) + edx_13 + esi_1)
                    int32_t edx_58 = ((zx.d(var_c_2:3.b) * eax_32) s>> 8) + edx_15
                    uint32_t ecx_67 = zx.d(var_10_1.b)
                    uint32_t edi_5 = zx.d(var_10_1:1.b)
                    var_c_2:2.b = *(edx_54 + esi_1)
                    var_c_2:3.b = *(edx_58 + esi_1)
                    int32_t eax_50 = (((zx.d(var_4_2.b) - ecx_67) * ebx_5) s>> 8) + ecx_67
                    int32_t ecx_72 = (((zx.d(var_4_2:1.b) - edi_5) * ebx_5) s>> 8) + edi_5
                    uint32_t edi_6 = zx.d(var_10_1:2.b)
                    int32_t edx_63 = (((zx.d(var_4_2:2.b) - edi_6) * ebx_5) s>> 8) + edi_6
                    uint32_t edx_64 = zx.d(var_10_1:3.b)
                    uint32_t ebx_6 = zx.d(var_8_3:1.b)
                    uint32_t ebx_7 = zx.d(var_8_3:2.b)
                    uint32_t ebx_8 = zx.d(var_8_3.b)
                    int32_t edi_11 = (((zx.d(var_4_2:3.b) - edx_64) * ebx_5) s>> 8) + edx_64
                    uint32_t edx_65 = zx.d(var_8_3:3.b)
                    var_18_1 = fconvert.s(x87_r4_20 + fconvert.t(var_98_1))
                    int32_t ebx_19 = (((((((zx.d(var_c_2:3.b) - edx_65) * ebx_5) s>> 8) - edi_11
                        + edx_65) * ecx_16) s>> 8) + edi_11) << 0x18 | (((((((zx.d(var_c_2:2.b)
                        - ebx_7) * ebx_5) s>> 8) - edx_63 + ebx_7) * ecx_16) s>> 8) + edx_63) << 0x10
                    var_1c_1 = fconvert.s(x87_r6_42 + fconvert.t(var_70_1))
                    var_14_2 = fconvert.s(x87_r3_30 + fconvert.t(var_64_1))
                    int32_t* eax_51 = var_2c_1
                    int32_t ebx_21 = ebx_19 | (((((((zx.d(var_c_2:1.b) - ebx_6) * ebx_5) s>> 8)
                        - ecx_72 + ebx_6) * ecx_16) s>> 8) + ecx_72) << 8 | (((((((zx.d(var_c_2.b)
                        - ebx_8) * ebx_5) s>> 8) - eax_50 + ebx_8) * ecx_16) s>> 8) + eax_50)
                    edi_3 = var_74_1
                    *eax_51 = ebx_21
                    j = j_1
                    j_1 -= 1
                    var_2c_1 = &eax_51[1]
                while (j != 1)
                result = var_a0:4.d
                j_2 = j_3
            
            var_2c_1 += result
            i = i_1
            i_1 -= 1
            var_34_1 = fconvert.s(fconvert.t(var_34_1) + fconvert.t(var_94_1))
            var_38_1 = fconvert.s(fconvert.t(var_38_1) + fconvert.t(var_6c_1))
            var_20_2 = fconvert.s(fconvert.t(var_20_2) + fconvert.t(var_60_1))
        while (i != 1)

return result
