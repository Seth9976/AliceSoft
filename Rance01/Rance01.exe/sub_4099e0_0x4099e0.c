// 函数: sub_4099e0
// 地址: 0x4099e0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t edi
int32_t var_168 = edi
int32_t* eax

if (arg2 s>= 1)
    void* edi_1 = *(arg1 + 0x30)
    float var_128 = arg2
    int32_t* var_f8
    sub_42e070(edi_1 + 0x294, &var_f8, &var_128)
    eax = var_f8
    
    if (eax != *(edi_1 + 0x298))
        void* esi_1 = eax[4]
        
        if (esi_1 != 0)
            var_128 = arg2
            sub_42e070(edi_1 + 0x294, &var_f8, &var_128)
            eax = var_f8
            
            if (eax != *(edi_1 + 0x298))
                eax = eax[4]
                
                if (eax != 0)
                    eax = eax[0x33]
                    int32_t* var_cc_1 = eax
                    
                    if (eax != 0)
                        float var_dc
                        
                        if (*(esi_1 + 0x2c) != 0)
                            float var_38
                            sub_40c970(0, &var_38, esi_1)
                            float var_18
                            sub_40c970(1, &var_18, esi_1)
                            float var_28
                            sub_40c970(2, &var_28, esi_1)
                            sub_40c970(3, &var_dc, esi_1)
                            float var_30
                            float var_10
                            var_128 = fconvert.s(fconvert.t(var_30) - fconvert.t(var_10))
                            var_128 = fconvert.s(fabs(fconvert.t(var_128)))
                            long double x87_r6_5 = fconvert.t(var_128)
                            long double x87_r5_1 = fconvert.t(9.9999997473787516e-05)
                            x87_r5_1 - x87_r6_5
                            bool p_1 = unimplemented  {test ah, 0x41}
                            char var_155_1
                            
                            if (not(p_1))
                                var_155_1 = 1
                            else
                                float var_20
                                var_128 = fconvert.s(x87_r5_1 - fconvert.t(var_20))
                                var_128 = fconvert.s(fabs(fconvert.t(var_128)))
                                long double x87_r5_6 = fconvert.t(var_128)
                                x87_r5_6 - x87_r6_5
                                
                                if ((((x87_r5_6 < x87_r6_5 ? 1 : 0) << 8
                                        | (is_unordered.t(x87_r5_6, x87_r6_5) ? 1 : 0) << 0xa
                                        | (x87_r5_6 == x87_r6_5 ? 1 : 0) << 0xe | 0x3000):1.b & 1) == 0)
                                    var_155_1 = 1
                                else
                                    float var_d4
                                    var_128 = fconvert.s(x87_r5_1 - fconvert.t(var_d4))
                                    var_128 = fconvert.s(fabs(fconvert.t(var_128)))
                                    long double x87_r6_9 = fconvert.t(var_128)
                                    x87_r6_9 - x87_r6_5
                                    
                                    if ((((x87_r6_9 < x87_r6_5 ? 1 : 0) << 8
                                            | (is_unordered.t(x87_r6_9, x87_r6_5) ? 1 : 0) << 0xa
                                            | (x87_r6_9 == x87_r6_5 ? 1 : 0) << 0xe):1.b & 1) == 0)
                                        var_155_1 = 1
                                    else
                                        var_155_1 = 0
                            
                            long double x87_r7_5 = fconvert.t(var_28)
                            int32_t eax_19 = sub_70c710(x87_r7_5)
                            long double x87_r6_11 = fconvert.t(var_38)
                            eax = sub_70c710(x87_r6_11)
                            float var_34
                            long double x87_r5_9 = fconvert.t(var_34)
                            float var_14
                            long double x87_r4_1 = fconvert.t(var_14)
                            long double x87_r3_1 = fconvert.t(var_18)
                            float var_24
                            long double x87_r2_1 = fconvert.t(var_24)
                            float var_d8
                            float ebx
                            
                            if (eax != eax_19)
                                ebx.b = 1
                            else
                                int32_t eax_20 = sub_70c710(fconvert.t(var_dc))
                                
                                if (sub_70c710(x87_r3_1) != eax_20)
                                    ebx.b = 1
                                else
                                    int32_t eax_21 = sub_70c710(x87_r4_1)
                                    
                                    if (sub_70c710(x87_r5_9) != eax_21)
                                        ebx.b = 1
                                    else
                                        int32_t eax_22 = sub_70c710(fconvert.t(var_d8))
                                        
                                        if (sub_70c710(x87_r2_1) != eax_22)
                                            ebx.b = 1
                                        else
                                            ebx.b = 0
                            
                            float var_140 = fconvert.s(x87_r6_11)
                            float var_144 = fconvert.s(x87_r5_9)
                            float var_130 = fconvert.s(x87_r3_1)
                            float var_150 = fconvert.s(x87_r4_1)
                            float var_12c = fconvert.s(x87_r7_5)
                            float var_154 = fconvert.s(x87_r2_1)
                            float var_134 = fconvert.s(fconvert.t(var_dc))
                            float var_13c = fconvert.s(fconvert.t(var_d8))
                            float var_5c_1 = fconvert.s(fconvert.t(*(esi_1 + 0x78)))
                            float var_88_1 = fconvert.s(fconvert.t(*(esi_1 + 0x7c)))
                            float var_98_1 = fconvert.s(fconvert.t(*(esi_1 + 0x80)))
                            float var_90_1 = fconvert.s(fconvert.t(*(esi_1 + 0x84)))
                            float var_94_1 = fconvert.s(fconvert.t(*(esi_1 + 0x88)))
                            float var_8c_1 = fconvert.s(fconvert.t(*(esi_1 + 0x8c)))
                            double var_b8_1 = fconvert.d(x87_r4_1)
                            double var_118 = fconvert.d(x87_r2_1)
                            float var_c4_1 = fconvert.s(x87_r4_1 - x87_r2_1)
                            double var_f0 = fconvert.d(x87_r7_5)
                            var_128.q = fconvert.d(x87_r3_1)
                            float var_c0_1 = fconvert.s(x87_r7_5 - x87_r3_1)
                            float var_bc_1 = fconvert.s(x87_r2_1 * x87_r3_1 - x87_r4_1 * x87_r7_5)
                            long double x87_r2_19 = fconvert.t(var_34)
                            var_f8.q = fconvert.d(x87_r2_19)
                            float var_104_1 = fconvert.s(fconvert.t(var_118) - x87_r2_19)
                            float var_100_1 = fconvert.s(x87_r6_11 - fconvert.t(var_f0))
                            float var_fc_1 = fconvert.s(x87_r2_19 * x87_r7_5 - x87_r2_1 * x87_r6_11)
                            float var_a4_1 = fconvert.s(fconvert.t(var_f8.q) - fconvert.t(var_b8_1))
                            float var_a0_1 = fconvert.s(fconvert.t(var_128.q)
                                - fconvert.t(fconvert.d(x87_r6_11)))
                            float var_9c_1 =
                                fconvert.s(x87_r6_11 * x87_r4_1 - fconvert.t(var_34) * x87_r3_1)
                            long double x87_r3_6 = fconvert.t(var_d8)
                            var_f8.q = fconvert.d(x87_r3_6)
                            double var_78_1
                            var_78_1.d = fconvert.s(x87_r3_6 - fconvert.t(var_118))
                            long double x87_r2_31 = fconvert.t(var_dc)
                            var_118 = fconvert.d(x87_r2_31)
                            var_78_1:4.d = fconvert.s(fconvert.t(var_f0) - x87_r2_31)
                            float var_70_1 = fconvert.s(x87_r2_31 * x87_r2_1 - x87_r3_6 * x87_r7_5)
                            var_f0.d = fconvert.s(fconvert.t(var_b8_1) - fconvert.t(var_f8.q))
                            var_f0:4.d = fconvert.s(fconvert.t(var_118) - fconvert.t(var_128.q))
                            float var_e8_1 =
                                fconvert.s(x87_r3_1 * x87_r3_6 - x87_r4_1 * fconvert.t(var_dc))
                            long double x87_r5_15 = fconvert.t(var_a0_1)
                            long double x87_r3_8 = fconvert.t(var_a4_1)
                            long double x87_r2_40 = fconvert.t(var_9c_1)
                            var_128 =
                                fconvert.s(x87_r5_15 * x87_r2_1 + x87_r3_8 * x87_r7_5 + x87_r2_40)
                            long double x87_r2_42 = fconvert.t(var_f0:4.d)
                            long double x87_r1_23 = fconvert.t(var_f0.d)
                            long double x87_r2_44 = fconvert.t(var_128)
                            long double x87_r1_26 = fconvert.t(9.9999997473787516e-05)
                            x87_r1_26 - x87_r2_44
                            eax.w = (x87_r1_26 < x87_r2_44 ? 1 : 0) << 8
                                | (is_unordered.t(x87_r1_26, x87_r2_44) ? 1 : 0) << 0xa
                                | (x87_r1_26 == x87_r2_44 ? 1 : 0) << 0xe | 0x800
                            
                            if ((eax:1.b & 0x41) != 0)
                                long double x87_r0_6 = fconvert.t(fconvert.s(x87_r7_5 * x87_r1_23
                                    + x87_r2_1 * x87_r2_42 + fconvert.t(var_e8_1)))
                                x87_r0_6 - x87_r1_26
                                eax.w = (x87_r0_6 < x87_r1_26 ? 1 : 0) << 8
                                    | (is_unordered.t(x87_r0_6, x87_r1_26) ? 1 : 0) << 0xa
                                    | (x87_r0_6 == x87_r1_26 ? 1 : 0) << 0xe | 0x1000
                                bool p_2 = unimplemented  {test ah, 0x5}
                                
                                if (p_2)
                                    long double x87_r1_27 = float.t(1)
                                    var_128 = fconvert.s(x87_r1_27 / x87_r1_27)
                                    long double x87_r1_28 = fconvert.t(var_128)
                                    var_b8_1.d = fconvert.s(fconvert.t(var_c4_1) * x87_r1_28)
                                    var_b8_1:4.d = fconvert.s(fconvert.t(var_c0_1) * x87_r1_28)
                                    float var_b0_1 = fconvert.s(fconvert.t(var_bc_1) * x87_r1_28)
                                    float var_a4_2 = fconvert.s(fconvert.t(var_104_1) * x87_r1_28)
                                    float var_a0_2 = fconvert.s(fconvert.t(var_100_1) * x87_r1_28)
                                    float var_9c_2 = fconvert.s(fconvert.t(var_fc_1) * x87_r1_28)
                                    float var_c4_2 = fconvert.s(x87_r3_8 * x87_r1_28)
                                    float var_c0_2 = fconvert.s(x87_r5_15 * x87_r1_28)
                                    float var_bc_2 = fconvert.s(x87_r1_28 * x87_r2_40)
                                    long double x87_r5_19 = float.t(0)
                                    float var_84_1 = fconvert.s(x87_r5_19)
                                    float var_80_1 = fconvert.s(x87_r5_19)
                                    float var_7c_1 = fconvert.s(x87_r5_19)
                                    float var_104_2 = fconvert.s(x87_r5_19)
                                    float var_100_2 = fconvert.s(x87_r5_19)
                                    float var_fc_2 = fconvert.s(x87_r5_19)
                                    
                                    if (ebx.b != 0)
                                        long double x87_r4_9 = float.t(1)
                                        var_128 = fconvert.s(x87_r4_9 / x87_r4_9)
                                        long double x87_r4_10 = fconvert.t(var_128)
                                        var_118.d = fconvert.s(fconvert.t(var_78_1.d) * x87_r4_10)
                                        var_84_1 = var_118.d
                                        var_118:4.d =
                                            fconvert.s(fconvert.t(var_78_1:4.d) * x87_r4_10)
                                        var_80_1 = var_118:4.d
                                        var_7c_1 = fconvert.s(fconvert.t(var_70_1) * x87_r4_10)
                                        var_118.d = fconvert.s(x87_r1_23 * x87_r4_10)
                                        var_104_2 = var_118.d
                                        var_118:4.d = fconvert.s(x87_r2_42 * x87_r4_10)
                                        var_100_2 = var_118:4.d
                                        var_fc_2 = fconvert.s(x87_r4_10 * fconvert.t(var_e8_1))
                                    
                                    int32_t eax_26 = (*(*var_cc_1 + 0x10))()
                                    void* edx_15 = *var_cc_1
                                    var_f8 = eax_26 - 1
                                    long double x87_r7_15 = float.t(0)
                                    float var_40_1 = fconvert.s(x87_r7_15)
                                    float var_4c_1 = fconvert.s(x87_r7_15)
                                    float var_60_1 = fconvert.s(x87_r7_15)
                                    var_128 = (*(edx_15 + 0x14))() - 1
                                    float var_50_1 = fconvert.s(x87_r7_15)
                                    float var_64_1 = fconvert.s(x87_r7_15)
                                    var_78_1.d = fconvert.s(x87_r7_15)
                                    float var_54_1 = fconvert.s(x87_r7_15)
                                    float var_44_1 = fconvert.s(x87_r7_15)
                                    float var_3c_1 = fconvert.s(x87_r7_15)
                                    
                                    if (var_155_1 != 0)
                                        float var_2c
                                        long double x87_r4_17 = fconvert.t(var_2c)
                                        var_40_1 = fconvert.s(fconvert.t(var_5c_1) / x87_r4_17)
                                        float var_c
                                        long double x87_r3_14 = fconvert.t(var_c)
                                        var_4c_1 = fconvert.s(fconvert.t(var_98_1) / x87_r3_14)
                                        float var_1c
                                        long double x87_r2_52 = fconvert.t(var_1c)
                                        var_60_1 = fconvert.s(fconvert.t(var_94_1) / x87_r2_52)
                                        var_50_1 = fconvert.s(fconvert.t(var_88_1) / x87_r4_17)
                                        var_64_1 = fconvert.s(fconvert.t(var_90_1) / x87_r3_14)
                                        var_78_1.d = fconvert.s(fconvert.t(var_8c_1) / x87_r2_52)
                                        long double x87_r2_60 = float.t(1)
                                        var_54_1 = fconvert.s(x87_r2_60 / x87_r2_60)
                                        var_44_1 = fconvert.s(x87_r2_60 / x87_r2_60)
                                        var_3c_1 = fconvert.s(x87_r2_60 / x87_r2_52)
                                    
                                    long double x87_r5_32 = fconvert.t(var_dc)
                                    float* edx_16 = &var_134
                                    long double x87_r4_24 = fconvert.t(var_28)
                                    x87_r4_24 - x87_r5_32
                                    float eax_30
                                    eax_30.w = (x87_r4_24 < x87_r5_32 ? 1 : 0) << 8
                                        | (is_unordered.t(x87_r4_24, x87_r5_32) ? 1 : 0) << 0xa
                                        | (x87_r4_24 == x87_r5_32 ? 1 : 0) << 0xe | 0x2000
                                    
                                    if ((eax_30:1.b & 0x41) != 0)
                                        edx_16 = &var_12c
                                    
                                    long double x87_r3_20 = fconvert.t(var_18)
                                    float* ecx_18 = &var_130
                                    long double x87_r2_63 = fconvert.t(var_38)
                                    x87_r2_63 - x87_r3_20
                                    eax_30.w = (x87_r2_63 < x87_r3_20 ? 1 : 0) << 8
                                        | (is_unordered.t(x87_r2_63, x87_r3_20) ? 1 : 0) << 0xa
                                        | (x87_r2_63 == x87_r3_20 ? 1 : 0) << 0xe | 0x1000
                                    
                                    if ((eax_30:1.b & 0x41) != 0)
                                        ecx_18 = &var_140
                                    
                                    long double x87_r1_43 = fconvert.t(*edx_16)
                                    long double x87_r0_10 = fconvert.t(*ecx_18)
                                    x87_r0_10 - x87_r1_43
                                    eax_30.w = (x87_r0_10 < x87_r1_43 ? 1 : 0) << 8
                                        | (is_unordered.t(x87_r0_10, x87_r1_43) ? 1 : 0) << 0xa
                                        | (x87_r0_10 == x87_r1_43 ? 1 : 0) << 0xe | 0x1000
                                    float* eax_31 = edx_16
                                    
                                    if ((eax_30:1.b & 0x41) != 0)
                                        eax_31 = ecx_18
                                    
                                    x87_r4_24 - x87_r5_32
                                    int32_t var_11c_1 = sub_70c710(fconvert.t(*eax_31))
                                    float* edx_17 = &var_134
                                    int32_t eax_32
                                    eax_32.w = (x87_r4_24 < x87_r5_32 ? 1 : 0) << 8
                                        | (is_unordered.t(x87_r4_24, x87_r5_32) ? 1 : 0) << 0xa
                                        | (x87_r4_24 == x87_r5_32 ? 1 : 0) << 0xe | 0x1800
                                    bool p_3 = unimplemented  {test ah, 0x5}
                                    
                                    if (p_3)
                                        edx_17 = &var_12c
                                    
                                    x87_r2_63 - x87_r5_32
                                    float* ecx_19 = &var_130
                                    eax_32.w = (x87_r2_63 < x87_r5_32 ? 1 : 0) << 8
                                        | (is_unordered.t(x87_r2_63, x87_r5_32) ? 1 : 0) << 0xa
                                        | (x87_r2_63 == x87_r5_32 ? 1 : 0) << 0xe | 0x3000
                                    bool p_4 = unimplemented  {test ah, 0x5}
                                    
                                    if (p_4)
                                        ecx_19 = &var_140
                                    
                                    long double x87_r5_33 = fconvert.t(*ecx_19)
                                    long double x87_r4_26 = fconvert.t(*edx_17)
                                    x87_r4_26 - x87_r5_33
                                    eax_32.w = (x87_r4_26 < x87_r5_33 ? 1 : 0) << 8
                                        | (is_unordered.t(x87_r4_26, x87_r5_33) ? 1 : 0) << 0xa
                                        | (x87_r4_26 == x87_r5_33 ? 1 : 0) << 0xe | 0x3000
                                    float* eax_33 = edx_17
                                    
                                    if ((eax_32:1.b & 0x41) != 0)
                                        eax_33 = ecx_19
                                    
                                    long double x87_r5_35 = fconvert.t(var_d8)
                                    long double x87_r4_27 = fconvert.t(var_24)
                                    int32_t esi_8 = sub_70c710(fconvert.t(*eax_33))
                                    x87_r4_27 - x87_r5_35
                                    float* edx_18 = &var_13c
                                    int32_t eax_34
                                    eax_34.w = (x87_r4_27 < x87_r5_35 ? 1 : 0) << 8
                                        | (is_unordered.t(x87_r4_27, x87_r5_35) ? 1 : 0) << 0xa
                                        | (x87_r4_27 == x87_r5_35 ? 1 : 0) << 0xe | 0x2000
                                    
                                    if ((eax_34:1.b & 0x41) != 0)
                                        edx_18 = &var_154
                                    
                                    long double x87_r3_21 = fconvert.t(var_14)
                                    float* ecx_20 = &var_150
                                    long double x87_r2_65 = fconvert.t(var_34)
                                    x87_r2_65 - x87_r3_21
                                    eax_34.w = (x87_r2_65 < x87_r3_21 ? 1 : 0) << 8
                                        | (is_unordered.t(x87_r2_65, x87_r3_21) ? 1 : 0) << 0xa
                                        | (x87_r2_65 == x87_r3_21 ? 1 : 0) << 0xe | 0x1000
                                    
                                    if ((eax_34:1.b & 0x41) != 0)
                                        ecx_20 = &var_144
                                    
                                    long double x87_r1_45 = fconvert.t(*edx_18)
                                    long double x87_r0_11 = fconvert.t(*ecx_20)
                                    x87_r0_11 - x87_r1_45
                                    eax_34.w = (x87_r0_11 < x87_r1_45 ? 1 : 0) << 8
                                        | (is_unordered.t(x87_r0_11, x87_r1_45) ? 1 : 0) << 0xa
                                        | (x87_r0_11 == x87_r1_45 ? 1 : 0) << 0xe | 0x1000
                                    float* eax_35 = edx_18
                                    
                                    if ((eax_34:1.b & 0x41) != 0)
                                        eax_35 = ecx_20
                                    
                                    x87_r4_27 - x87_r5_35
                                    int32_t edi_10 = sub_70c710(fconvert.t(*eax_35))
                                    float* edx_19 = &var_13c
                                    int32_t eax_36
                                    eax_36.w = (x87_r4_27 < x87_r5_35 ? 1 : 0) << 8
                                        | (is_unordered.t(x87_r4_27, x87_r5_35) ? 1 : 0) << 0xa
                                        | (x87_r4_27 == x87_r5_35 ? 1 : 0) << 0xe | 0x1800
                                    bool p_5 = unimplemented  {test ah, 0x5}
                                    
                                    if (p_5)
                                        edx_19 = &var_154
                                    
                                    x87_r2_65 - x87_r5_35
                                    float* ecx_21 = &var_150
                                    eax_36.w = (x87_r2_65 < x87_r5_35 ? 1 : 0) << 8
                                        | (is_unordered.t(x87_r2_65, x87_r5_35) ? 1 : 0) << 0xa
                                        | (x87_r2_65 == x87_r5_35 ? 1 : 0) << 0xe | 0x3000
                                    bool p_6 = unimplemented  {test ah, 0x5}
                                    
                                    if (p_6)
                                        ecx_21 = &var_144
                                    
                                    long double x87_r5_36 = fconvert.t(*ecx_21)
                                    long double x87_r4_29 = fconvert.t(*edx_19)
                                    x87_r4_29 - x87_r5_36
                                    eax_36.w = (x87_r4_29 < x87_r5_36 ? 1 : 0) << 8
                                        | (is_unordered.t(x87_r4_29, x87_r5_36) ? 1 : 0) << 0xa
                                        | (x87_r4_29 == x87_r5_36 ? 1 : 0) << 0xe | 0x3000
                                    float* eax_37 = edx_19
                                    
                                    if ((eax_36:1.b & 0x41) != 0)
                                        eax_37 = ecx_21
                                    
                                    int32_t esi_9 = esi_8 - var_11c_1
                                    var_118.d = esi_9
                                    
                                    if (arg3 s< var_11c_1 || arg3 s>= esi_9 + var_11c_1
                                            || arg4 s< edi_10
                                            || arg4 s>= sub_70c710(fconvert.t(*eax_37)))
                                        eax.b = 0
                                        return 
                                    
                                    long double x87_r7_16 = x87_r3_21
                                    float var_138_3 = fconvert.s(x87_r7_15)
                                    var_130 = fconvert.s(x87_r7_15)
                                    
                                    if (ebx.b != 0)
                                        var_138_3 = fconvert.s(fconvert.t(var_84_1))
                                        var_130 = fconvert.s(fconvert.t(var_104_2))
                                    
                                    eax.b = var_155_1
                                    var_12c = fconvert.s(x87_r7_15)
                                    var_134 = fconvert.s(x87_r7_15)
                                    long double x87_r5_40 = fconvert.t(var_b8_1.d)
                                    long double x87_r4_30 = fconvert.t(var_a4_2)
                                    long double x87_r3_22 = fconvert.t(var_c4_2)
                                    
                                    if (eax.b == 0)
                                        long double x87_r7_19 = x87_r7_16 * x87_r5_40
                                            + x87_r4_30 * fconvert.t(var_98_1)
                                            + x87_r3_22 * fconvert.t(var_94_1)
                                        x87_r7_16 = x87_r3_22
                                        var_12c = fconvert.s(x87_r7_19)
                                        var_134 = fconvert.s(x87_r4_30 * fconvert.t(var_90_1)
                                            + x87_r5_40 * fconvert.t(var_88_1)
                                            + x87_r7_16 * fconvert.t(var_8c_1))
                                    
                                    var_154 = fconvert.s(x87_r7_15)
                                    float var_48_1 = fconvert.s(x87_r7_15)
                                    
                                    if (ebx.b != 0)
                                        var_154 = fconvert.s(fconvert.t(var_80_1))
                                        var_48_1 = fconvert.s(fconvert.t(var_100_2))
                                    
                                    long double x87_r3_31 = fconvert.t(fconvert.s(float.t(edi_10)))
                                    long double x87_r1_48 = fconvert.t(var_b8_1:4.d)
                                    var_144 =
                                        fconvert.s(x87_r3_31 * x87_r1_48 + fconvert.t(var_b0_1))
                                    float var_148_1 = fconvert.s(x87_r3_31 * fconvert.t(var_a0_2)
                                        + fconvert.t(var_9c_2))
                                    var_f0.d = fconvert.s(x87_r3_31 * fconvert.t(var_c0_2)
                                        + fconvert.t(var_bc_2))
                                    long double x87_r4_32 = x87_r1_48
                                    float var_58_1 = fconvert.s(x87_r7_15)
                                    float var_108_3 = fconvert.s(x87_r7_15)
                                    
                                    if (ebx.b == 0)
                                        x87_r4_32 = x87_r7_15
                                    else
                                        var_58_1 = fconvert.s(x87_r3_31 * fconvert.t(var_80_1)
                                            + fconvert.t(var_7c_1))
                                        long double x87_r3_33 =
                                            x87_r3_31 * fconvert.t(var_100_2) + fconvert.t(var_fc_2)
                                        x87_r3_31 = x87_r7_15
                                        var_108_3 = fconvert.s(x87_r3_33)
                                    
                                    long double x87_r2_82 =
                                        fconvert.t(fconvert.s(float.t(var_11c_1)))
                                    var_13c = fconvert.s(x87_r2_82 * x87_r5_40)
                                    float var_14c_1 = fconvert.s(x87_r2_82 * x87_r4_30)
                                    var_b8_1.d = fconvert.s(x87_r2_82 * x87_r7_16)
                                    long double x87_r3_34 = x87_r2_82
                                    var_150 = fconvert.s(x87_r3_31)
                                    float var_c8_2 = fconvert.s(x87_r3_31)
                                    
                                    if (ebx.b == 0)
                                        x87_r4_32 = x87_r3_31
                                    else
                                        var_150 = fconvert.s(x87_r3_34 * fconvert.t(var_84_1))
                                        long double x87_r3_35 = x87_r3_34 * fconvert.t(var_104_2)
                                        x87_r3_34 = x87_r3_31
                                        var_c8_2 = fconvert.s(x87_r3_35)
                                    
                                    var_140 = arg4 - edi_10
                                    var_140 = fconvert.s(float.t(var_140))
                                    long double x87_r2_86 = fconvert.t(var_140)
                                    long double x87_r4_35 = x87_r2_86
                                    var_144 = fconvert.s(x87_r4_32 * x87_r2_86 + fconvert.t(var_13c)
                                        + fconvert.t(var_144))
                                    var_13c = fconvert.s(x87_r4_35 * fconvert.t(var_a0_2)
                                        + fconvert.t(var_14c_1) + fconvert.t(var_148_1))
                                    var_140 = fconvert.s(x87_r4_35 * fconvert.t(var_c0_2)
                                        + fconvert.t(var_b8_1.d) + fconvert.t(var_f0.d))
                                    float var_148_2 = fconvert.s(x87_r3_34)
                                    float var_14c_2 = fconvert.s(x87_r3_34)
                                    
                                    if (ebx.b == 0)
                                        x87_r5_40 = x87_r3_34
                                    else
                                        var_148_2 = fconvert.s(x87_r4_35 * fconvert.t(var_154)
                                            + fconvert.t(var_150) + fconvert.t(var_58_1))
                                        long double x87_r4_37 = x87_r4_35 * fconvert.t(var_48_1)
                                            + fconvert.t(var_c8_2) + fconvert.t(var_108_3)
                                        x87_r4_35 = x87_r3_34
                                        var_14c_2 = fconvert.s(x87_r4_37)
                                    
                                    var_150 = fconvert.s(x87_r4_35)
                                    var_154 = fconvert.s(x87_r4_35)
                                    long double x87_r3_37 = fconvert.t(var_144)
                                    long double x87_r2_100 = fconvert.t(var_13c)
                                    long double x87_r1_79 = fconvert.t(var_140)
                                    
                                    if (eax.b == 0)
                                        x87_r5_40 = x87_r2_100
                                        var_150 = fconvert.s(x87_r4_35 * fconvert.t(var_98_1)
                                            + x87_r3_37 * fconvert.t(var_5c_1)
                                            + x87_r7_16 * fconvert.t(var_94_1))
                                        var_154 = fconvert.s(x87_r4_35 * fconvert.t(var_90_1)
                                            + x87_r3_37 * fconvert.t(var_88_1)
                                            + x87_r7_16 * fconvert.t(var_8c_1))
                                        long double x87_r1_89 = x87_r7_16
                                        x87_r7_16 = fconvert.t(var_c4_2)
                                        long double x87_r1_91 = x87_r4_35
                                        x87_r4_35 = float.t(0)
                                        x87_r1_79 = x87_r1_89
                                        x87_r2_100 = x87_r1_91
                                    
                                    void* esi_11 = var_118.d
                                    long double x87_r0_16 = fconvert.t(var_138_3)
                                    int32_t ecx_25 = 0
                                    long double x87_r5_42
                                    long double x87_r6_24
                                    long double x87_r7_22
                                    long double x87_r0_21
                                    
                                    if (esi_11 s< 4)
                                        x87_r0_21 = x87_r4_35
                                        x87_r4_35 = x87_r0_16
                                    label_40a922:
                                        
                                        if (ecx_25 s>= esi_11)
                                            eax.b = 0
                                            return 
                                        
                                        while (true)
                                            if (ebx.b == 0)
                                                x87_r1_79 = x87_r0_21
                                            label_40a99f:
                                                
                                                if (var_11c_1 + ecx_25 == arg3)
                                                    break
                                                
                                                var_144 = fconvert.s(x87_r3_37 + x87_r5_40)
                                                var_13c = fconvert.s(x87_r2_100 + x87_r4_30)
                                                var_140 = fconvert.s(x87_r1_79 + x87_r7_16)
                                                
                                                if (ebx.b != 0)
                                                    var_148_2 = fconvert.s(fconvert.t(var_148_2)
                                                        + x87_r4_35)
                                                    var_14c_2 = fconvert.s(fconvert.t(var_14c_2)
                                                        + fconvert.t(var_130))
                                            else
                                                x87_r0_21 - x87_r2_100
                                                eax.w = (x87_r0_21 < x87_r2_100 ? 1 : 0) << 8 | (
                                                    is_unordered.t(x87_r0_21, x87_r2_100) ? 1 : 0)
                                                    << 0xa | (x87_r0_21 == x87_r2_100 ? 1 : 0) << 0xe
                                                    | 0x800
                                                
                                                if ((eax:1.b & 0x41) == 0)
                                                    goto label_40a981
                                                
                                                long double x87_r0_22 = float.t(0)
                                                x87_r0_22 - x87_r1_79
                                                eax.w = (x87_r0_22 < x87_r1_79 ? 1 : 0) << 8 | (
                                                    is_unordered.t(x87_r0_22, x87_r1_79) ? 1 : 0) << 0xa
                                                    | (x87_r0_22 == x87_r1_79 ? 1 : 0) << 0xe
                                                    | 0x800
                                                
                                                if ((eax:1.b & 0x41) == 0)
                                                    goto label_40a981
                                                
                                                x87_r5_40 = x87_r1_79
                                                long double x87_r1_122 = float.t(0)
                                                long double temp3_1 = fconvert.t(var_148_2)
                                                x87_r1_122 - temp3_1
                                                eax.w = (x87_r1_122 < temp3_1 ? 1 : 0) << 8
                                                    | (is_unordered.t(x87_r1_122, temp3_1) ? 1 : 0)
                                                    << 0xa | (x87_r1_122 == temp3_1 ? 1 : 0) << 0xe
                                                    | 0x1000
                                                
                                                if ((eax:1.b & 0x41) != 0)
                                                    long double x87_r1_123 = float.t(0)
                                                    long double temp4_1 = fconvert.t(var_14c_2)
                                                    x87_r1_123 - temp4_1
                                                    eax.w = (x87_r1_123 < temp4_1 ? 1 : 0) << 8 | (
                                                        is_unordered.t(x87_r1_123, temp4_1) ? 1 : 0)
                                                        << 0xa | (x87_r1_123 == temp4_1 ? 1 : 0) << 0xe
                                                        | 0x1000
                                                    
                                                    if ((eax:1.b & 0x41) == 0)
                                                        goto label_40a979
                                                    
                                                    x87_r1_79 = x87_r4_35
                                                    x87_r4_35 = fconvert.t(var_138_3)
                                                    goto label_40a99f
                                                
                                            label_40a979:
                                                x87_r1_79 = x87_r4_35
                                                x87_r4_35 = fconvert.t(var_138_3)
                                            label_40a981:
                                                var_144 = fconvert.s(x87_r3_37 + x87_r5_40)
                                                var_13c = fconvert.s(x87_r2_100 + x87_r4_30)
                                                var_140 = fconvert.s(x87_r1_79 + x87_r7_16)
                                                var_148_2 =
                                                    fconvert.s(fconvert.t(var_148_2) + x87_r4_35)
                                                var_14c_2 = fconvert.s(fconvert.t(var_14c_2)
                                                    + fconvert.t(var_130))
                                            
                                            if (var_155_1 == 0)
                                                var_150 = fconvert.s(fconvert.t(var_150)
                                                    + fconvert.t(var_12c))
                                                var_154 = fconvert.s(fconvert.t(var_154)
                                                    + fconvert.t(var_134))
                                            
                                            ecx_25 += 1
                                            
                                            if (ecx_25 s>= esi_11)
                                                eax.b = 0
                                                return 
                                            
                                            x87_r3_37 = fconvert.t(var_144)
                                            x87_r2_100 = fconvert.t(var_13c)
                                            x87_r1_79 = fconvert.t(var_140)
                                            x87_r0_21 = float.t(0)
                                        
                                    label_40aa4d:
                                        x87_r6_24 = x87_r1_79
                                        x87_r7_22 = x87_r2_100
                                        x87_r5_42 = x87_r4_35
                                    else
                                        int32_t edx_20 = arg3
                                        
                                        while (true)
                                            if (ebx.b == 0)
                                                x87_r5_40 = x87_r0_16
                                            label_40a63d:
                                                
                                                if (var_11c_1 + ecx_25 == edx_20)
                                                    goto label_40aa4d
                                                
                                                var_144 = fconvert.s(x87_r3_37 + x87_r5_40)
                                                var_13c = fconvert.s(x87_r2_100 + x87_r4_30)
                                                var_140 = fconvert.s(x87_r1_79 + x87_r7_16)
                                                
                                                if (ebx.b != 0)
                                                    var_148_2 = fconvert.s(fconvert.t(var_148_2)
                                                        + x87_r4_35)
                                                    var_14c_2 = fconvert.s(fconvert.t(var_14c_2)
                                                        + fconvert.t(var_130))
                                                
                                                edx_20 = arg3
                                            else
                                                long double x87_r0_17 = x87_r4_35
                                                x87_r4_35 = x87_r0_16
                                                x87_r0_17 - x87_r2_100
                                                eax.w = (x87_r0_17 < x87_r2_100 ? 1 : 0) << 8 | (
                                                    is_unordered.t(x87_r0_17, x87_r2_100) ? 1 : 0)
                                                    << 0xa | (x87_r0_17 == x87_r2_100 ? 1 : 0) << 0xe
                                                    | 0x800
                                                
                                                if ((eax:1.b & 0x41) == 0)
                                                    goto label_40a609
                                                
                                                long double x87_r0_18 = float.t(0)
                                                x87_r0_18 - x87_r1_79
                                                eax.w = (x87_r0_18 < x87_r1_79 ? 1 : 0) << 8 | (
                                                    is_unordered.t(x87_r0_18, x87_r1_79) ? 1 : 0) << 0xa
                                                    | (x87_r0_18 == x87_r1_79 ? 1 : 0) << 0xe
                                                    | 0x800
                                                
                                                if ((eax:1.b & 0x41) == 0)
                                                    goto label_40a609
                                                
                                                x87_r5_40 = x87_r1_79
                                                long double x87_r1_92 = float.t(0)
                                                long double temp1_1 = fconvert.t(var_148_2)
                                                x87_r1_92 - temp1_1
                                                eax.w = (x87_r1_92 < temp1_1 ? 1 : 0) << 8
                                                    | (is_unordered.t(x87_r1_92, temp1_1) ? 1 : 0)
                                                    << 0xa | (x87_r1_92 == temp1_1 ? 1 : 0) << 0xe
                                                    | 0x1000
                                                
                                                if ((eax:1.b & 0x41) != 0)
                                                    long double x87_r1_93 = float.t(0)
                                                    long double temp2_1 = fconvert.t(var_14c_2)
                                                    x87_r1_93 - temp2_1
                                                    eax.w = (x87_r1_93 < temp2_1 ? 1 : 0) << 8 | (
                                                        is_unordered.t(x87_r1_93, temp2_1) ? 1 : 0)
                                                        << 0xa | (x87_r1_93 == temp2_1 ? 1 : 0) << 0xe
                                                        | 0x1000
                                                    
                                                    if ((eax:1.b & 0x41) == 0)
                                                        goto label_40a601
                                                    
                                                    x87_r1_79 = x87_r4_35
                                                    x87_r4_35 = fconvert.t(var_138_3)
                                                    goto label_40a63d
                                                
                                            label_40a601:
                                                x87_r1_79 = x87_r4_35
                                                x87_r4_35 = fconvert.t(var_138_3)
                                            label_40a609:
                                                var_144 = fconvert.s(x87_r3_37 + x87_r5_40)
                                                var_13c = fconvert.s(x87_r2_100 + x87_r4_30)
                                                var_140 = fconvert.s(x87_r1_79 + x87_r7_16)
                                                var_148_2 =
                                                    fconvert.s(fconvert.t(var_148_2) + x87_r4_35)
                                                var_14c_2 = fconvert.s(fconvert.t(var_14c_2)
                                                    + fconvert.t(var_130))
                                            
                                            if (var_155_1 == 0)
                                                var_150 = fconvert.s(fconvert.t(var_150)
                                                    + fconvert.t(var_12c))
                                                var_154 = fconvert.s(fconvert.t(var_154)
                                                    + fconvert.t(var_134))
                                            
                                            long double x87_r3_112 = fconvert.t(var_13c)
                                            long double x87_r2_113 = fconvert.t(var_140)
                                            
                                            if (ebx.b == 0)
                                            label_40a6e7:
                                                
                                                if (ecx_25 + var_11c_1 + 1 == edx_20)
                                                    x87_r6_24 = x87_r2_113
                                                    ecx_25 += 1
                                                    x87_r5_42 = x87_r3_112
                                                    x87_r7_22 = fconvert.t(var_144)
                                                    break
                                                
                                                var_144 =
                                                    fconvert.s(fconvert.t(var_144) + x87_r5_40)
                                                var_13c = fconvert.s(x87_r3_112 + x87_r4_30)
                                                var_140 = fconvert.s(x87_r2_113 + x87_r7_16)
                                                
                                                if (ebx.b != 0)
                                                    var_148_2 = fconvert.s(fconvert.t(var_148_2)
                                                        + x87_r4_35)
                                                    var_14c_2 = fconvert.s(fconvert.t(var_14c_2)
                                                        + fconvert.t(var_130))
                                            else
                                                long double x87_r1_98 = float.t(0)
                                                x87_r1_98 - x87_r3_112
                                                eax.w = (x87_r1_98 < x87_r3_112 ? 1 : 0) << 8 | (
                                                    is_unordered.t(x87_r1_98, x87_r3_112) ? 1 : 0)
                                                    << 0xa | (x87_r1_98 == x87_r3_112 ? 1 : 0) << 0xe
                                                    | 0x800
                                                
                                                if ((eax:1.b & 0x41) != 0)
                                                    x87_r1_98 - x87_r2_113
                                                    eax.w = (x87_r1_98 < x87_r2_113 ? 1 : 0) << 8
                                                        | (is_unordered.t(x87_r1_98, x87_r2_113)
                                                        ? 1 : 0) << 0xa
                                                        | (x87_r1_98 == x87_r2_113 ? 1 : 0) << 0xe
                                                        | 0x800
                                                    
                                                    if ((eax:1.b & 0x41) == 0)
                                                        goto label_40a8bd
                                                    
                                                    long double temp5_1 = fconvert.t(var_148_2)
                                                    x87_r1_98 - temp5_1
                                                    eax.w = (x87_r1_98 < temp5_1 ? 1 : 0) << 8 | (
                                                        is_unordered.t(x87_r1_98, temp5_1) ? 1 : 0)
                                                        << 0xa | (x87_r1_98 == temp5_1 ? 1 : 0) << 0xe
                                                        | 0x1000
                                                    
                                                    if ((eax:1.b & 0x41) == 0)
                                                        goto label_40a8c5
                                                    
                                                    long double x87_r1_99 = float.t(0)
                                                    long double temp6_1 = fconvert.t(var_14c_2)
                                                    x87_r1_99 - temp6_1
                                                    eax.w = (x87_r1_99 < temp6_1 ? 1 : 0) << 8 | (
                                                        is_unordered.t(x87_r1_99, temp6_1) ? 1 : 0)
                                                        << 0xa | (x87_r1_99 == temp6_1 ? 1 : 0) << 0xe
                                                        | 0x1000
                                                    
                                                    if ((eax:1.b & 0x41) == 0)
                                                        goto label_40a8c5
                                                    
                                                    goto label_40a6e7
                                                
                                            label_40a8bd:
                                                x87_r2_113 = x87_r1_98
                                            label_40a8c5:
                                                var_144 =
                                                    fconvert.s(fconvert.t(var_144) + x87_r5_40)
                                                var_13c = fconvert.s(x87_r3_112 + x87_r4_30)
                                                var_140 = fconvert.s(x87_r2_113 + x87_r7_16)
                                                var_148_2 =
                                                    fconvert.s(fconvert.t(var_148_2) + x87_r4_35)
                                                var_14c_2 = fconvert.s(fconvert.t(var_14c_2)
                                                    + fconvert.t(var_130))
                                            
                                            if (var_155_1 == 0)
                                                var_150 = fconvert.s(fconvert.t(var_150)
                                                    + fconvert.t(var_12c))
                                                var_154 = fconvert.s(fconvert.t(var_154)
                                                    + fconvert.t(var_134))
                                            
                                            long double x87_r3_113 = fconvert.t(var_13c)
                                            long double x87_r2_115 = fconvert.t(var_140)
                                            
                                            if (ebx.b == 0)
                                            label_40a792:
                                                
                                                if (ecx_25 + var_11c_1 + 2 == edx_20)
                                                    x87_r6_24 = x87_r2_115
                                                    ecx_25 += 2
                                                    x87_r5_42 = x87_r3_113
                                                    x87_r7_22 = fconvert.t(var_144)
                                                    break
                                                
                                                var_144 =
                                                    fconvert.s(fconvert.t(var_144) + x87_r5_40)
                                                var_13c = fconvert.s(x87_r3_113 + x87_r4_30)
                                                var_140 = fconvert.s(x87_r2_115 + x87_r7_16)
                                                
                                                if (ebx.b != 0)
                                                    var_148_2 = fconvert.s(fconvert.t(var_148_2)
                                                        + x87_r4_35)
                                                    var_14c_2 = fconvert.s(fconvert.t(var_14c_2)
                                                        + fconvert.t(var_130))
                                            else
                                                long double x87_r1_103 = float.t(0)
                                                x87_r1_103 - x87_r3_113
                                                eax.w = (x87_r1_103 < x87_r3_113 ? 1 : 0) << 8 | (
                                                    is_unordered.t(x87_r1_103, x87_r3_113) ? 1 : 0)
                                                    << 0xa | (x87_r1_103 == x87_r3_113 ? 1 : 0) << 0xe
                                                    | 0x800
                                                
                                                if ((eax:1.b & 0x41) != 0)
                                                    x87_r1_103 - x87_r2_115
                                                    eax.w = (x87_r1_103 < x87_r2_115 ? 1 : 0) << 8
                                                        | (is_unordered.t(x87_r1_103, x87_r2_115)
                                                        ? 1 : 0) << 0xa
                                                        | (x87_r1_103 == x87_r2_115 ? 1 : 0) << 0xe
                                                        | 0x800
                                                    
                                                    if ((eax:1.b & 0x41) == 0)
                                                        goto label_40a8de
                                                    
                                                    long double temp7_1 = fconvert.t(var_148_2)
                                                    x87_r1_103 - temp7_1
                                                    eax.w = (x87_r1_103 < temp7_1 ? 1 : 0) << 8 | (
                                                        is_unordered.t(x87_r1_103, temp7_1) ? 1 : 0)
                                                        << 0xa | (x87_r1_103 == temp7_1 ? 1 : 0) << 0xe
                                                        | 0x1000
                                                    
                                                    if ((eax:1.b & 0x41) == 0)
                                                        goto label_40a8e6
                                                    
                                                    long double x87_r1_104 = float.t(0)
                                                    long double temp8_1 = fconvert.t(var_14c_2)
                                                    x87_r1_104 - temp8_1
                                                    eax.w = (x87_r1_104 < temp8_1 ? 1 : 0) << 8 | (
                                                        is_unordered.t(x87_r1_104, temp8_1) ? 1 : 0)
                                                        << 0xa | (x87_r1_104 == temp8_1 ? 1 : 0) << 0xe
                                                        | 0x1000
                                                    
                                                    if ((eax:1.b & 0x41) == 0)
                                                        goto label_40a8e6
                                                    
                                                    goto label_40a792
                                                
                                            label_40a8de:
                                                x87_r2_115 = x87_r1_103
                                            label_40a8e6:
                                                var_144 =
                                                    fconvert.s(fconvert.t(var_144) + x87_r5_40)
                                                var_13c = fconvert.s(x87_r3_113 + x87_r4_30)
                                                var_140 = fconvert.s(x87_r2_115 + x87_r7_16)
                                                var_148_2 =
                                                    fconvert.s(fconvert.t(var_148_2) + x87_r4_35)
                                                var_14c_2 = fconvert.s(fconvert.t(var_14c_2)
                                                    + fconvert.t(var_130))
                                            
                                            if (var_155_1 == 0)
                                                var_150 = fconvert.s(fconvert.t(var_150)
                                                    + fconvert.t(var_12c))
                                                var_154 = fconvert.s(fconvert.t(var_154)
                                                    + fconvert.t(var_134))
                                            
                                            long double x87_r3_114 = fconvert.t(var_13c)
                                            long double x87_r2_117 = fconvert.t(var_140)
                                            
                                            if (ebx.b == 0)
                                            label_40a83d:
                                                
                                                if (ecx_25 + var_11c_1 + 3 == edx_20)
                                                    x87_r6_24 = x87_r2_117
                                                    ecx_25 += 3
                                                    x87_r5_42 = x87_r3_114
                                                    x87_r7_22 = fconvert.t(var_144)
                                                    break
                                                
                                                var_144 =
                                                    fconvert.s(fconvert.t(var_144) + x87_r5_40)
                                                var_13c = fconvert.s(x87_r3_114 + x87_r4_30)
                                                var_140 = fconvert.s(x87_r2_117 + x87_r7_16)
                                                
                                                if (ebx.b != 0)
                                                    var_148_2 = fconvert.s(fconvert.t(var_148_2)
                                                        + x87_r4_35)
                                                    var_14c_2 = fconvert.s(fconvert.t(var_14c_2)
                                                        + fconvert.t(var_130))
                                            else
                                                long double x87_r1_108 = float.t(0)
                                                x87_r1_108 - x87_r3_114
                                                eax.w = (x87_r1_108 < x87_r3_114 ? 1 : 0) << 8 | (
                                                    is_unordered.t(x87_r1_108, x87_r3_114) ? 1 : 0)
                                                    << 0xa | (x87_r1_108 == x87_r3_114 ? 1 : 0) << 0xe
                                                    | 0x800
                                                
                                                if ((eax:1.b & 0x41) != 0)
                                                    x87_r1_108 - x87_r2_117
                                                    eax.w = (x87_r1_108 < x87_r2_117 ? 1 : 0) << 8
                                                        | (is_unordered.t(x87_r1_108, x87_r2_117)
                                                        ? 1 : 0) << 0xa
                                                        | (x87_r1_108 == x87_r2_117 ? 1 : 0) << 0xe
                                                        | 0x800
                                                    
                                                    if ((eax:1.b & 0x41) == 0)
                                                        goto label_40a8ff
                                                    
                                                    long double temp9_1 = fconvert.t(var_148_2)
                                                    x87_r1_108 - temp9_1
                                                    eax.w = (x87_r1_108 < temp9_1 ? 1 : 0) << 8 | (
                                                        is_unordered.t(x87_r1_108, temp9_1) ? 1 : 0)
                                                        << 0xa | (x87_r1_108 == temp9_1 ? 1 : 0) << 0xe
                                                        | 0x1000
                                                    
                                                    if ((eax:1.b & 0x41) == 0)
                                                        goto label_40a907
                                                    
                                                    long double x87_r1_109 = float.t(0)
                                                    long double temp10_1 = fconvert.t(var_14c_2)
                                                    x87_r1_109 - temp10_1
                                                    eax.w = (x87_r1_109 < temp10_1 ? 1 : 0) << 8 | (
                                                        is_unordered.t(x87_r1_109, temp10_1) ? 1
                                                        : 0) << 0xa
                                                        | (x87_r1_109 == temp10_1 ? 1 : 0) << 0xe
                                                        | 0x1000
                                                    
                                                    if ((eax:1.b & 0x41) == 0)
                                                        goto label_40a907
                                                    
                                                    goto label_40a83d
                                                
                                            label_40a8ff:
                                                x87_r2_117 = x87_r1_108
                                            label_40a907:
                                                var_144 =
                                                    fconvert.s(fconvert.t(var_144) + x87_r5_40)
                                                var_13c = fconvert.s(x87_r3_114 + x87_r4_30)
                                                var_140 = fconvert.s(x87_r2_117 + x87_r7_16)
                                                var_148_2 =
                                                    fconvert.s(fconvert.t(var_148_2) + x87_r4_35)
                                                var_14c_2 = fconvert.s(fconvert.t(var_14c_2)
                                                    + fconvert.t(var_130))
                                            
                                            if (var_155_1 == 0)
                                                var_150 = fconvert.s(fconvert.t(var_150)
                                                    + fconvert.t(var_12c))
                                                var_154 = fconvert.s(fconvert.t(var_154)
                                                    + fconvert.t(var_134))
                                            
                                            x87_r3_37 = fconvert.t(var_144)
                                            ecx_25 += 4
                                            x87_r2_100 = fconvert.t(var_13c)
                                            x87_r1_79 = fconvert.t(var_140)
                                            x87_r0_21 = float.t(0)
                                            
                                            if (ecx_25 s>= esi_11 - 3)
                                                goto label_40a922
                                            
                                            x87_r0_16 = x87_r4_35
                                            x87_r4_35 = x87_r0_21
                                    
                                    if (esi_11 s<= ecx_25)
                                        eax.b = 0
                                        return 
                                    
                                    if (arg5 == 0)
                                        eax.b = 1
                                        return 
                                    
                                    if (var_155_1 != 0)
                                        long double x87_r3_120 = float.t(1)
                                        var_118.d = fconvert.s(x87_r3_120 / x87_r3_120)
                                        long double x87_r3_125 = fconvert.t(var_118.d)
                                        var_150 = fconvert.s((x87_r6_24 * fconvert.t(var_4c_1)
                                            + x87_r7_22 * fconvert.t(var_40_1)
                                            + x87_r5_42 * fconvert.t(var_60_1)) * x87_r3_125)
                                        var_154 = fconvert.s((x87_r7_22 * fconvert.t(var_50_1)
                                            + x87_r6_24 * fconvert.t(var_64_1)
                                            + x87_r5_42 * fconvert.t(var_78_1.d)) * x87_r3_125)
                                    
                                    int32_t eax_44 = sub_70c710(fconvert.t(var_150))
                                    var_118.d = eax_44
                                    var_f0.d = 0
                                    double* eax_45 = &var_118
                                    
                                    if (eax_44 s>= var_f8)
                                        eax_45 = &var_f8
                                    
                                    if (*eax_45 s<= 0)
                                        eax_45 = &var_f0
                                    
                                    var_b8_1.d = *eax_45
                                    int32_t eax_46 = sub_70c710(fconvert.t(var_154))
                                    var_118.d = eax_46
                                    var_f0.d = 0
                                    float* ebx_1 = &var_118
                                    
                                    if (eax_46 s>= var_128)
                                        ebx_1 = &var_128
                                    
                                    if (*ebx_1 s<= 0)
                                        ebx_1 = &var_f0
                                    
                                    int32_t eax_48 = (*(*var_cc_1 + 0x1c))()
                                    int32_t eax_52
                                    eax_52.b = *((*(*var_cc_1 + 8))(0, 0) + *ebx_1 i* eax_48
                                        + (var_c0_2 << 2) + 3) != 0
                                    return 
                        else
                            int32_t eax_5 = sub_40ba30(arg2, edi_1)
                            var_128 = sub_40ba70(arg2, edi_1)
                            int32_t eax_9 = (*(*var_cc_1 + 0x10))()
                            void* eax_11 = (*(*var_cc_1 + 0x14))()
                            float edi_3 = var_128
                            
                            if (arg3 s>= eax_5 && arg4 s>= edi_3 && arg3 s< eax_9 + eax_5
                                    && arg4 s< eax_11 i+ edi_3)
                                var_dc = 0f
                                int32_t var_d8_1 = 0
                                int32_t* var_d4_1 = nullptr
                                int32_t var_d0_1 = 0
                                
                                if (sub_40c470(&var_dc, *(arg1 + 0x30) + 0x274).b != 0)
                                    if (var_d4_1 s<= 0 && var_d0_1 s<= 0)
                                    label_409b5a:
                                        
                                        if (arg5 == 0)
                                            eax.b = 1
                                            return 
                                        
                                        if ((*(*var_cc_1 + 0x28))().b != 0 && *((*(*var_cc_1 + 8))(
                                                var_dc i- eax_5 + arg3, var_d8_1 i- edi_3 + arg4) + 3) == 0)
                                            eax.b = 0
                                            return 
                                        
                                        eax.b = 1
                                        return 
                                    
                                    if (arg3 s< var_d4_1 + eax_5 && arg4 s< var_d0_1 i+ edi_3)
                                        goto label_409b5a

eax.b = 0
