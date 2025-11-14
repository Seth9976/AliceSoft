// 函数: sub_57f920
// 地址: 0x57f920
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t eax
int32_t edx
edx:eax = muls.dp.d(0x66666667, arg1[0x15] - arg1[0x14])
int32_t edx_1 = edx s>> 3
int32_t i_1 = 0

if ((edx_1 u>> 0x1f) + edx_1 s<= 0)
    return 

long double x87_r7_1 = float.t(1)
int32_t var_38_1 = 0
int32_t edx_11
int32_t i

do
    int32_t* edi_2 = arg1[0x14] + var_38_1
    
    if (edi_2[3].b != 0)
        long double x87_r6_1 = float.t(0)
        float var_64_1 = fconvert.s(x87_r6_1)
        int32_t ecx_2 = arg1[0x10]
        float var_48_1 = fconvert.s(x87_r6_1)
        float var_30_1 = fconvert.s(x87_r6_1)
        int32_t edx_3 = *edi_2 * 7
        void* eax_5 = ecx_2 + (edx_3 << 2)
        long double x87_r5_1 = fconvert.t(0.5)
        void* ecx_3 = ecx_2 + edi_2[1] * 0x1c
        float var_68_1 = fconvert.s(fconvert.t(*(ecx_2 + (edx_3 << 2) + 0xc)) + x87_r5_1)
        void* edx_7 = arg1[0x10] + edi_2[2] * 0x1c
        float var_4c_1 = fconvert.s(fconvert.t(*(eax_5 + 0x10)) + x87_r5_1)
        void* edi_5 = arg1[0xc] + edi_2[4] * 0xc
        float var_90_1 = fconvert.s(fconvert.t(*(ecx_3 + 0xc)) + x87_r5_1)
        float var_88_1 = fconvert.s(fconvert.t(*(ecx_3 + 0x10)) + x87_r5_1)
        float var_78_1 = fconvert.s(fconvert.t(*(edx_7 + 0xc)) + x87_r5_1)
        float var_74_1 = fconvert.s(x87_r5_1 + fconvert.t(*(edx_7 + 0x10)))
        float var_50_1 = fconvert.s(x87_r7_1 / fconvert.t(*(ecx_3 + 8)))
        float var_8c_1 = fconvert.s(x87_r7_1 / fconvert.t(*(edx_7 + 8)))
        long double x87_r5_11 = fconvert.t(fconvert.s(float.t(*(edi_5 + 4) - 1)))
        long double x87_r4_2 = fconvert.t(fconvert.s(x87_r7_1 / fconvert.t(*(eax_5 + 8))))
        long double x87_r6_16 = x87_r4_2
        float var_70_1 = fconvert.s(fconvert.t(*(eax_5 + 0x14)) * x87_r5_11 * x87_r4_2)
        long double x87_r3_2 = fconvert.t(fconvert.s(float.t(*(edi_5 + 8) - 1)))
        float var_80_1 = fconvert.s(fconvert.t(*(eax_5 + 0x18)) * x87_r3_2 * x87_r6_16)
        long double x87_r2_3 = fconvert.t(var_50_1)
        float var_54_1 = fconvert.s(fconvert.t(*(ecx_3 + 0x14)) * x87_r5_11 * x87_r2_3)
        float var_58_1 = fconvert.s(fconvert.t(*(ecx_3 + 0x18)) * x87_r3_2 * x87_r2_3)
        long double x87_r2_9 = fconvert.t(var_8c_1)
        float var_84_1 = fconvert.s(x87_r5_11 * fconvert.t(*(edx_7 + 0x14)) * x87_r2_9)
        long double x87_r5_16 = x87_r2_3
        float var_60_1 = fconvert.s(x87_r2_9 * x87_r3_2 * fconvert.t(*(edx_7 + 0x18)))
        long double x87_r4_12 = fconvert.t(var_4c_1)
        long double x87_r3_9 = fconvert.t(var_88_1)
        x87_r3_9 - x87_r4_12
        eax_5.w = (x87_r3_9 < x87_r4_12 ? 1 : 0) << 8
            | (is_unordered.t(x87_r3_9, x87_r4_12) ? 1 : 0) << 0xa
            | (x87_r3_9 == x87_r4_12 ? 1 : 0) << 0xe | 0x1800
        bool p_1 = unimplemented  {test ah, 0x5}
        
        if (not(p_1))
            float var_98_5 = fconvert.s(fconvert.t(var_68_1))
            var_68_1 = fconvert.s(fconvert.t(var_90_1))
            var_90_1 = fconvert.s(fconvert.t(var_98_5))
            var_4c_1 = fconvert.s(x87_r3_9)
            var_88_1 = fconvert.s(fconvert.t(fconvert.s(x87_r4_12)))
            var_50_1 = fconvert.s(fconvert.t(fconvert.s(x87_r6_16)))
            float var_98_8 = fconvert.s(fconvert.t(var_70_1))
            var_70_1 = fconvert.s(fconvert.t(var_54_1))
            var_54_1 = fconvert.s(fconvert.t(var_98_8))
            float var_98_9 = fconvert.s(fconvert.t(var_80_1))
            var_80_1 = fconvert.s(fconvert.t(var_58_1))
            var_58_1 = fconvert.s(fconvert.t(var_98_9))
            x87_r6_16 = fconvert.t(fconvert.s(x87_r5_16))
            x87_r4_12 = fconvert.t(var_4c_1)
            x87_r3_9 = fconvert.t(var_88_1)
            x87_r5_16 = fconvert.t(var_50_1)
        
        long double x87_r2_18 = fconvert.t(var_74_1)
        x87_r2_18 - x87_r4_12
        eax_5.w = (x87_r2_18 < x87_r4_12 ? 1 : 0) << 8
            | (is_unordered.t(x87_r2_18, x87_r4_12) ? 1 : 0) << 0xa
            | (x87_r2_18 == x87_r4_12 ? 1 : 0) << 0xe | 0x1000
        bool p_2 = unimplemented  {test ah, 0x5}
        
        if (not(p_2))
            float var_98_10 = fconvert.s(fconvert.t(var_68_1))
            var_68_1 = fconvert.s(fconvert.t(var_78_1))
            var_78_1 = fconvert.s(fconvert.t(var_98_10))
            var_4c_1 = fconvert.s(x87_r2_18)
            var_74_1 = fconvert.s(fconvert.t(fconvert.s(x87_r4_12)))
            float var_94_3 = fconvert.s(fconvert.t(var_8c_1))
            var_8c_1 = fconvert.s(fconvert.t(fconvert.s(x87_r6_16)))
            float var_98_13 = fconvert.s(fconvert.t(var_70_1))
            var_70_1 = fconvert.s(fconvert.t(var_84_1))
            var_84_1 = fconvert.s(fconvert.t(var_98_13))
            float var_98_14 = fconvert.s(fconvert.t(var_80_1))
            var_80_1 = fconvert.s(fconvert.t(var_60_1))
            var_60_1 = fconvert.s(fconvert.t(var_98_14))
            x87_r4_12 = fconvert.t(var_4c_1)
            x87_r6_16 = fconvert.t(var_94_3)
            x87_r2_18 = fconvert.t(var_74_1)
        
        x87_r2_18 - x87_r3_9
        eax_5.w = (x87_r2_18 < x87_r3_9 ? 1 : 0) << 8
            | (is_unordered.t(x87_r2_18, x87_r3_9) ? 1 : 0) << 0xa
            | (x87_r2_18 == x87_r3_9 ? 1 : 0) << 0xe | 0x1000
        bool p_3 = unimplemented  {test ah, 0x5}
        
        if (p_3)
            x87_r6_16 = x87_r2_18
        else
            float var_98_15 = fconvert.s(fconvert.t(var_90_1))
            var_90_1 = fconvert.s(fconvert.t(var_78_1))
            var_78_1 = fconvert.s(fconvert.t(var_98_15))
            var_88_1 = fconvert.s(x87_r2_18)
            var_74_1 = fconvert.s(fconvert.t(fconvert.s(x87_r3_9)))
            var_50_1 = fconvert.s(fconvert.t(var_8c_1))
            var_8c_1 = fconvert.s(fconvert.t(fconvert.s(x87_r5_16)))
            float var_98_18 = fconvert.s(fconvert.t(var_54_1))
            var_54_1 = fconvert.s(fconvert.t(var_84_1))
            var_84_1 = fconvert.s(fconvert.t(var_98_18))
            float var_98_19 = fconvert.s(fconvert.t(var_58_1))
            var_58_1 = fconvert.s(fconvert.t(var_60_1))
            var_60_1 = fconvert.s(fconvert.t(var_98_19))
            x87_r5_16 = fconvert.t(var_74_1)
            x87_r3_9 = fconvert.t(var_88_1)
        
        int32_t eax_6 = sub_70c710(x87_r4_12)
        int32_t eax_7 = sub_70c710(x87_r3_9)
        int32_t eax_8 = sub_70c710(x87_r5_16)
        
        if (eax_6 != eax_7 || eax_7 != eax_8)
            int32_t eax_9 = sub_70c710(fconvert.t(var_90_1))
            long double x87_r2_24 = fconvert.t(var_68_1)
            
            if (sub_70c710(x87_r2_24) != eax_9)
            label_57fcba:
                long double x87_r3_21 = x87_r3_9 - x87_r4_12
                long double x87_r5_20 = fconvert.t(var_78_1) - x87_r2_24
                long double x87_r4_37 = x87_r5_16 - x87_r4_12
                long double x87_r2_25 = fconvert.t(var_90_1) - x87_r2_24
                float var_94_4 = fconvert.s(x87_r5_20 * x87_r3_21 - x87_r2_25 * x87_r4_37)
                long double x87_r1_18 = fconvert.t(var_94_4)
                long double x87_r0_3 = float.t(0)
                x87_r0_3 - x87_r1_18
                int32_t eax_10
                eax_10.w = (x87_r0_3 < x87_r1_18 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r0_3, x87_r1_18) ? 1 : 0) << 0xa
                    | (x87_r0_3 == x87_r1_18 ? 1 : 0) << 0xe | 0x1000
                bool p_4 = unimplemented  {test ah, 0x44}
                
                if (not(p_4))
                    x87_r7_1 = x87_r5_20
                else
                    long double x87_r7_3 = x87_r2_25
                    long double x87_r2_28 = fconvert.t(var_8c_1) - x87_r6_16
                    long double x87_r1_21 = fconvert.t(var_50_1) - x87_r6_16
                    long double x87_r1_26 = fconvert.t(fconvert.s(x87_r7_1 / fconvert.t(var_94_4)))
                    float var_94_6 =
                        fconvert.s((x87_r2_28 * x87_r3_21 - x87_r1_21 * x87_r4_37) * x87_r1_26)
                    arg1[0x42] = fconvert.s(fconvert.t(var_94_6))
                    int32_t var_40_1
                    var_40_1.q = fconvert.d(fconvert.t(var_84_1) - fconvert.t(var_70_1))
                    long double x87_r1_32 = fconvert.t(var_54_1) - fconvert.t(var_70_1)
                    float var_8c_2 = fconvert.s((fconvert.t(var_40_1.q) * x87_r3_21
                        - x87_r1_32 * x87_r4_37) * x87_r1_26)
                    arg1[0x43] = fconvert.s(fconvert.t(var_8c_2))
                    var_60_1.q = fconvert.d(fconvert.t(var_60_1) - fconvert.t(var_80_1))
                    long double x87_r1_40 = fconvert.t(var_58_1) - fconvert.t(var_80_1)
                    float var_34_1 = fconvert.s((fconvert.t(var_60_1.q) * x87_r3_21
                        - x87_r1_40 * x87_r4_37) * x87_r1_26)
                    arg1[0x44] = fconvert.s(fconvert.t(var_34_1))
                    float var_84_2 = fconvert.s((fconvert.t(fconvert.d(x87_r1_21)) * x87_r5_20
                        - fconvert.t(fconvert.d(x87_r2_28)) * x87_r7_3) * x87_r1_26)
                    arg1[0x45] = fconvert.s(fconvert.t(var_84_2))
                    double var_28_1
                    var_28_1.d = fconvert.s((fconvert.t(fconvert.d(x87_r1_32)) * x87_r5_20
                        - fconvert.t(var_40_1.q) * x87_r7_3) * x87_r1_26)
                    arg1[0x46] = fconvert.s(fconvert.t(var_28_1.d))
                    float var_40_2 = fconvert.s(x87_r1_26 * (
                        fconvert.t(fconvert.d(x87_r1_40)) * x87_r5_20
                        - fconvert.t(var_60_1.q) * x87_r7_3))
                    arg1[0x47] = fconvert.s(fconvert.t(var_40_2))
                    long double x87_r2_36 = fconvert.t(var_88_1)
                    long double x87_r1_58 = fconvert.t(var_4c_1)
                    x87_r1_58 - x87_r2_36
                    eax_10.w = (x87_r1_58 < x87_r2_36 ? 1 : 0) << 8
                        | (is_unordered.t(x87_r1_58, x87_r2_36) ? 1 : 0) << 0xa
                        | (x87_r1_58 == x87_r2_36 ? 1 : 0) << 0xe | 0x800
                    bool p_5 = unimplemented  {test ah, 0x5}
                    
                    if (p_5)
                        x87_r4_37 = x87_r2_36
                    else
                        long double x87_r2_37 = x87_r7_3
                        x87_r7_3 = x87_r2_36
                        var_64_1 = fconvert.s(x87_r2_37 / x87_r2_37)
                    
                    long double x87_r3_25 = fconvert.t(var_74_1)
                    x87_r3_25 - x87_r7_3
                    eax_10.w = (x87_r3_25 < x87_r7_3 ? 1 : 0) << 8
                        | (is_unordered.t(x87_r3_25, x87_r7_3) ? 1 : 0) << 0xa
                        | (x87_r3_25 == x87_r7_3 ? 1 : 0) << 0xe | 0x1800
                    long double x87_r5_21
                    
                    if ((eax_10:1.b & 0x41) != 0)
                        x87_r6_16 = x87_r3_25
                        x87_r5_21 = x87_r4_37
                    else
                        x87_r5_21 = x87_r3_25
                        var_48_1 = fconvert.s(x87_r5_20 / x87_r5_20)
                    
                    long double x87_r4_43 = fconvert.t(var_88_1)
                    x87_r4_43 - x87_r5_21
                    eax_10.w = (x87_r4_43 < x87_r5_21 ? 1 : 0) << 8
                        | (is_unordered.t(x87_r4_43, x87_r5_21) ? 1 : 0) << 0xa
                        | (x87_r4_43 == x87_r5_21 ? 1 : 0) << 0xe | 0x2000
                    bool p_6 = unimplemented  {test ah, 0x5}
                    
                    if (not(p_6))
                        var_30_1 = fconvert.s((fconvert.t(var_78_1) - fconvert.t(var_90_1))
                            / (x87_r5_21 - x87_r4_43))
                    
                    long double x87_r3_29 = fconvert.t(var_48_1)
                    long double x87_r2_40 = fconvert.t(var_64_1)
                    x87_r2_40 - x87_r3_29
                    eax_10.w = (x87_r2_40 < x87_r3_29 ? 1 : 0) << 8
                        | (is_unordered.t(x87_r2_40, x87_r3_29) ? 1 : 0) << 0xa
                        | (x87_r2_40 == x87_r3_29 ? 1 : 0) << 0xe | 0x1000
                    bool p_7 = unimplemented  {test ah, 0x5}
                    int32_t ecx_4
                    
                    ecx_4 = p_7 ? 0 : 1
                    
                    x87_r4_43 - x87_r7_3
                    eax_10.w = (x87_r4_43 < x87_r7_3 ? 1 : 0) << 8
                        | (is_unordered.t(x87_r4_43, x87_r7_3) ? 1 : 0) << 0xa
                        | (x87_r4_43 == x87_r7_3 ? 1 : 0) << 0xe | 0x1000
                    bool p_8 = unimplemented  {test ah, 0x44}
                    long double x87_r1_61
                    long double x87_r2_41
                    
                    if (p_8)
                        x87_r2_41 = fconvert.t(var_68_1)
                        x87_r1_61 = x87_r5_21
                        x87_r5_21 = x87_r2_40
                    else
                        x87_r6_16 = x87_r2_40
                        x87_r2_41 = fconvert.t(var_68_1)
                        long double x87_r1_60 = fconvert.t(var_90_1)
                        x87_r1_60 - x87_r2_41
                        eax_10.w = (x87_r1_60 < x87_r2_41 ? 1 : 0) << 8
                            | (is_unordered.t(x87_r1_60, x87_r2_41) ? 1 : 0) << 0xa
                            | (x87_r1_60 == x87_r2_41 ? 1 : 0) << 0xe | 0x1000
                        x87_r1_61 = fconvert.t(var_74_1)
                        bool p_9 = unimplemented  {test ah, 0x5}
                        
                        ecx_4 = p_9 ? 0 : 1
                    
                    x87_r4_43 - x87_r1_61
                    eax_10.w = (x87_r4_43 < x87_r1_61 ? 1 : 0) << 8
                        | (is_unordered.t(x87_r4_43, x87_r1_61) ? 1 : 0) << 0xa
                        | (x87_r4_43 == x87_r1_61 ? 1 : 0) << 0xe | 0x1000
                    bool p_10 = unimplemented  {test ah, 0x44}
                    
                    if (not(p_10))
                        long double x87_r1_64 = fconvert.t(var_78_1)
                        long double x87_r0_22 = fconvert.t(var_90_1)
                        x87_r0_22 - x87_r1_64
                        eax_10.w = (x87_r0_22 < x87_r1_64 ? 1 : 0) << 8
                            | (is_unordered.t(x87_r0_22, x87_r1_64) ? 1 : 0) << 0xa
                            | (x87_r0_22 == x87_r1_64 ? 1 : 0) << 0xe | 0x1000
                        bool p_11 = unimplemented  {test ah, 0x5}
                        
                        if (p_11)
                            goto label_57ffcf
                        
                        goto label_57fee6
                    
                    if (ecx_4 != 0)
                    label_57fee6:
                        arg1[0x4e] = fconvert.s(x87_r3_29)
                        long double x87_r1_66 = float.t(1)
                        arg1[0x49] = fconvert.s(x87_r3_29
                            * fconvert.t(fconvert.s(x87_r1_66 - (x87_r7_3 - float.t(eax_6))))
                            + x87_r2_41)
                        long double x87_r6_29
                        long double x87_r7_9
                        
                        if (eax_6 s>= eax_7)
                            x87_r6_29 = x87_r4_43
                            x87_r7_9 = x87_r5_21
                        else
                            arg1[0x4d] = fconvert.s(x87_r2_41)
                            long double x87_r3_34 = fconvert.t(fconvert.s(
                                fconvert.t(var_94_6) * x87_r2_41 + fconvert.t(var_84_2)))
                            arg1[0x4f] = fconvert.s(x87_r3_34)
                            long double x87_r2_49 = fconvert.t(fconvert.s(
                                fconvert.t(var_8c_2) * x87_r2_41 + fconvert.t(var_28_1.d)))
                            arg1[0x50] = fconvert.s(x87_r2_49)
                            long double x87_r1_73 = fconvert.t(fconvert.s(
                                fconvert.t(var_34_1) * x87_r2_41 + fconvert.t(var_40_2)))
                            arg1[0x51] = fconvert.s(x87_r1_73)
                            arg1[0x48] = fconvert.s(x87_r4_43 + x87_r2_41 * x87_r1_66)
                            arg1[0x4a] = fconvert.s(x87_r6_16 + x87_r3_34 * x87_r1_66)
                            arg1[0x4b] = fconvert.s(x87_r2_49 * x87_r1_66 + fconvert.t(var_70_1))
                            arg1[0x4c] = fconvert.s(x87_r1_66 * x87_r1_73 + fconvert.t(var_80_1))
                            sub_580230(edi_2[4], arg1, arg2, eax_6, eax_7)
                            x87_r7_9 = float.t(1)
                            x87_r6_29 = fconvert.t(var_88_1)
                        
                        if (eax_7 s>= eax_8)
                            x87_r7_1 = x87_r6_29
                        else
                            long double x87_r5_32 = fconvert.t(var_30_1)
                            arg1[0x4d] = fconvert.s(x87_r5_32)
                            long double x87_r4_48 = fconvert.t(fconvert.s(
                                fconvert.t(arg1[0x42]) * x87_r5_32 + fconvert.t(arg1[0x45])))
                            arg1[0x4f] = fconvert.s(x87_r4_48)
                            long double x87_r3_50 = fconvert.t(fconvert.s(
                                fconvert.t(arg1[0x43]) * x87_r5_32 + fconvert.t(arg1[0x46])))
                            arg1[0x50] = fconvert.s(x87_r3_50)
                            long double x87_r2_59 = fconvert.t(fconvert.s(
                                fconvert.t(arg1[0x44]) * x87_r5_32 + fconvert.t(arg1[0x47])))
                            arg1[0x51] = fconvert.s(x87_r2_59)
                            long double x87_r3_52 =
                                fconvert.t(fconvert.s(x87_r7_9 - (x87_r6_29 - float.t(eax_7))))
                            arg1[0x48] = fconvert.s(x87_r5_32 * x87_r3_52 + fconvert.t(var_90_1))
                            arg1[0x4a] = fconvert.s(x87_r4_48 * x87_r3_52 + fconvert.t(var_50_1))
                            arg1[0x4b] = fconvert.s(x87_r3_50 * x87_r3_52 + fconvert.t(var_54_1))
                            arg1[0x4c] = fconvert.s(x87_r2_59 * x87_r3_52 + fconvert.t(var_58_1))
                            sub_580230(edi_2[4], arg1, arg2, eax_7, eax_8)
                            x87_r7_1 = float.t(1)
                    else
                    label_57ffcf:
                        arg1[0x4d] = fconvert.s(x87_r3_29)
                        long double x87_r2_54 = fconvert.t(fconvert.s(
                            fconvert.t(var_94_6) * x87_r3_29 + fconvert.t(var_84_2)))
                        arg1[0x4f] = fconvert.s(x87_r2_54)
                        float var_64_3 =
                            fconvert.s(fconvert.t(var_8c_2) * x87_r3_29 + fconvert.t(var_28_1.d))
                        arg1[0x50] = fconvert.s(fconvert.t(var_64_3))
                        float var_48_2 =
                            fconvert.s(fconvert.t(var_34_1) * x87_r3_29 + fconvert.t(var_40_2))
                        arg1[0x51] = fconvert.s(fconvert.t(var_48_2))
                        long double x87_r1_84 = float.t(1)
                        long double x87_r1_86 =
                            fconvert.t(fconvert.s(x87_r1_84 - (x87_r7_3 - float.t(eax_6))))
                        arg1[0x48] = fconvert.s(x87_r3_29 * x87_r1_86 + x87_r4_43)
                        arg1[0x4a] = fconvert.s(x87_r6_16 + x87_r2_54 * x87_r1_86)
                        arg1[0x4b] =
                            fconvert.s(fconvert.t(var_64_3) * x87_r1_86 + fconvert.t(var_70_1))
                        arg1[0x4c] =
                            fconvert.s(fconvert.t(var_48_2) * x87_r1_86 + fconvert.t(var_80_1))
                        
                        if (eax_6 s>= eax_7)
                            x87_r7_1 = x87_r2_41
                        else
                            arg1[0x49] = fconvert.s(x87_r1_84 + x87_r1_86 * x87_r2_41)
                            arg1[0x4e] = fconvert.s(x87_r2_41)
                            sub_580230(edi_2[4], arg1, arg2, eax_6, eax_7)
                            x87_r7_1 = float.t(1)
                        
                        if (eax_7 s< eax_8)
                            long double x87_r6_38 = fconvert.t(var_30_1)
                            arg1[0x49] = fconvert.s(
                                (x87_r7_1 - (fconvert.t(var_88_1) - float.t(eax_7))) * x87_r6_38
                                + fconvert.t(var_90_1))
                            arg1[0x4e] = fconvert.s(x87_r6_38)
                            sub_580230(edi_2[4], arg1, arg2, eax_7, eax_8)
                            x87_r7_1 = float.t(1)
            else
                if (eax_9 != sub_70c710(fconvert.t(var_78_1)))
                    goto label_57fcba
                
                x87_r7_1 = x87_r3_9
        else
            x87_r7_1 = x87_r4_12
    
    var_38_1 += 0x14
    int32_t eax_20
    int32_t edx_10
    edx_10:eax_20 = muls.dp.d(0x66666667, arg1[0x15] - arg1[0x14])
    edx_11 = edx_10 s>> 3
    i = i_1 + 1
    i_1 = i
while (i s< (edx_11 u>> 0x1f) + edx_11)
