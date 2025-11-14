// 函数: sub_5dd410
// 地址: 0x5dd410
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void var_19c
int32_t eax_1 = data_78c474 ^ &var_19c
float var_164 = fconvert.s(fconvert.t(arg9))
float var_180 = fconvert.s(fconvert.t(arg10))
int32_t edi = *(arg1 + 0x38)
float var_16c = fconvert.s(fconvert.t(arg11))
float var_114
sub_5f7e90(arg1 + 0x4c, &var_114, edi, *(arg1 + 0x3c))
long double x87_r6 = fconvert.t(arg7)
long double x87_r5 = float.t(1)
x87_r5 - x87_r6
int32_t* result
result.w = (x87_r5 < x87_r6 ? 1 : 0) << 8 | (is_unordered.t(x87_r5, x87_r6) ? 1 : 0) << 0xa
    | (x87_r5 == x87_r6 ? 1 : 0) << 0xe | 0x2800
long double x87_r5_1 = fconvert.t(arg8)
long double x87_r4_1 = fconvert.t(var_164)
long double x87_r3 = fconvert.t(var_180)
long double x87_r2 = fconvert.t(var_16c)
bool p = unimplemented  {test ah, 0x44}
int32_t var_10c
int32_t var_108

if (p)
label_5dd5c5:
    x87_r3 = x87_r2
label_5dd5c7:
    int32_t ecx_14 = var_10c
    
    if (ecx_14 s> 0 && var_108 s> 0)
        float var_100_1 = fconvert.s(float.t(var_10c))
        float var_fc_1 = fconvert.s(float.t(var_108))
        long double x87_r2_3 = fconvert.t(0.5)
        long double x87_r1_8 = float.t(0)
        float var_168
        
        if (arg6 - 1 u> 8)
            var_168 = fconvert.s(x87_r1_8)
        else
            switch (arg6 i+ &jump_table_5de80c[2]:3)
                case &lookup_table_5de818, &lookup_table_5de818[3], &lookup_table_5de818[6]
                    var_168 = fconvert.s(x87_r1_8)
                case &lookup_table_5de818[1], &lookup_table_5de818[4], &lookup_table_5de818[7]
                    ecx_14 = neg.d(ecx_14)
                    var_180 = ecx_14
                    var_168 = fconvert.s(float.t(var_180) * x87_r2_3)
                case &lookup_table_5de818[2], &lookup_table_5de818[5], &lookup_table_5de818[8]
                    ecx_14 = neg.d(ecx_14)
                    var_180 = ecx_14
                    var_168 = fconvert.s(float.t(var_180))
        
        float var_158_1
        
        if (arg6 - 1 u> 8)
            x87_r3 = x87_r1_8
            var_158_1 = fconvert.s(x87_r2_3)
        else
            switch (arg6 i+ &jump_table_5de824[2]:3)
                case &lookup_table_5de830, &lookup_table_5de830[1], &lookup_table_5de830[2]
                    x87_r3 = x87_r1_8
                    var_158_1 = fconvert.s(x87_r2_3)
                case &lookup_table_5de830[3], &lookup_table_5de830[4], &lookup_table_5de830[5]
                    var_180 = neg.d(var_108)
                    long double x87_r2_4 = x87_r2_3 * float.t(var_180)
                    x87_r2_3 = x87_r1_8
                    var_158_1 = fconvert.s(x87_r2_4)
                case &lookup_table_5de830[6], &lookup_table_5de830[7], &lookup_table_5de830[8]
                    x87_r3 = x87_r1_8
                    var_180 = neg.d(var_108)
                    var_158_1 = fconvert.s(float.t(var_180))
        
        float var_90 = fconvert.s(x87_r5)
        float var_8c_1 = fconvert.s(x87_r2_3)
        float var_88_1 = fconvert.s(x87_r2_3)
        float var_84_1 = fconvert.s(x87_r2_3)
        float var_80_1 = fconvert.s(x87_r2_3)
        float var_78_1 = fconvert.s(x87_r2_3)
        float var_74_1 = fconvert.s(x87_r2_3)
        float var_70_1 = fconvert.s(x87_r2_3)
        float var_6c_1 = fconvert.s(x87_r2_3)
        float var_64_1 = fconvert.s(x87_r2_3)
        float var_60_1 = fconvert.s(x87_r2_3)
        float var_5c_1 = fconvert.s(x87_r2_3)
        float var_58_1 = fconvert.s(x87_r2_3)
        float var_7c_1 = fconvert.s(x87_r5_1)
        float var_68_1 = fconvert.s(x87_r6)
        float var_54_1 = fconvert.s(x87_r6)
        x87_r2_3 - x87_r3
        uint32_t eax_7
        eax_7.w = (x87_r2_3 < x87_r3 ? 1 : 0) << 8
            | (is_unordered.t(x87_r2_3, x87_r3) ? 1 : 0) << 0xa
            | (x87_r2_3 == x87_r3 ? 1 : 0) << 0xe | 0x2800
        bool p_5 = unimplemented  {test ah, 0x44}
        float var_50
        long double x87_r6_3
        long double x87_r7_12
        
        if (not(p_5))
            x87_r6_3 = x87_r3
            x87_r7_12 = x87_r4_1
        else
            int32_t var_1ac_1 = ecx_14
            sub_5dcfd0(&var_50, fconvert.s(fneg(x87_r2_3)))
            ecx_14 = sub_42e150(&var_90, &var_50)
            x87_r7_12 = fconvert.t(var_164)
            x87_r6_3 = float.t(0)
        
        x87_r6_3 - x87_r7_12
        eax_7.w = (x87_r6_3 < x87_r7_12 ? 1 : 0) << 8
            | (is_unordered.t(x87_r6_3, x87_r7_12) ? 1 : 0) << 0xa
            | (x87_r6_3 == x87_r7_12 ? 1 : 0) << 0xe | 0x3000
        bool p_6 = unimplemented  {test ah, 0x44}
        
        if (p_6)
            int32_t var_1ac_3 = ecx_14
            sub_4b65a0(&var_50, fconvert.s(fneg(x87_r6_3)))
            ecx_14 = sub_42e150(&var_90, &var_50)
            x87_r7_12 = float.t(0)
        
        long double x87_r6_4 = fconvert.t(var_16c)
        x87_r6_4 - x87_r7_12
        eax_7.w = (x87_r6_4 < x87_r7_12 ? 1 : 0) << 8
            | (is_unordered.t(x87_r6_4, x87_r7_12) ? 1 : 0) << 0xa
            | (x87_r6_4 == x87_r7_12 ? 1 : 0) << 0xe | 0x3000
        bool p_7 = unimplemented  {test ah, 0x44}
        
        if (p_7)
            int32_t var_1ac_5 = ecx_14
            sub_5dd020(&var_50, fconvert.s(fneg(x87_r7_12)))
            sub_42e150(&var_90, &var_50)
        
        sub_5feef0(*(arg1 + 0x34), &var_50, fconvert.s(fconvert.t(var_168)), 
            fconvert.s(fconvert.t(var_158_1)), &var_90)
        float* esi_6 = *(arg1 + 0x34)
        var_16c = fconvert.s(fconvert.t(var_168) + fconvert.t(var_100_1))
        float var_40
        sub_5feef0(esi_6, &var_40, fconvert.s(fconvert.t(var_16c)), 
            fconvert.s(fconvert.t(var_158_1)), &var_90)
        float var_164_1 = fconvert.s(fconvert.t(var_158_1) + fconvert.t(var_fc_1))
        float var_30
        sub_5feef0(*(arg1 + 0x34), &var_30, fconvert.s(fconvert.t(var_168)), 
            fconvert.s(fconvert.t(var_164_1)), &var_90)
        float var_20
        sub_5feef0(*(arg1 + 0x34), &var_20, fconvert.s(fconvert.t(var_16c)), 
            fconvert.s(fconvert.t(var_164_1)), &var_90)
        var_180 = fconvert.s(float.t(arg4))
        long double x87_r7_29 = fconvert.t(var_180)
        var_50 = fconvert.s(x87_r7_29 + fconvert.t(var_50))
        var_180 = fconvert.s(float.t(arg5))
        long double x87_r6_8 = fconvert.t(var_180)
        float var_4c
        float var_4c_1 = fconvert.s(x87_r6_8 + fconvert.t(var_4c))
        var_40 = fconvert.s(x87_r7_29 + fconvert.t(var_40))
        float var_3c
        float var_3c_1 = fconvert.s(x87_r6_8 + fconvert.t(var_3c))
        var_30 = fconvert.s(x87_r7_29 + fconvert.t(var_30))
        float var_2c
        float var_2c_1 = fconvert.s(x87_r6_8 + fconvert.t(var_2c))
        var_20 = fconvert.s(x87_r7_29 + fconvert.t(var_20))
        float var_1c
        float var_1c_1 = fconvert.s(x87_r6_8 + fconvert.t(var_1c))
        float var_48
        float var_38
        var_180 = fconvert.s(fconvert.t(var_48) - fconvert.t(var_38))
        var_180 = fconvert.s(fabs(fconvert.t(var_180)))
        long double x87_r6_14 = fconvert.t(var_180)
        long double x87_r5_16 = fconvert.t(9.9999997473787516e-05)
        x87_r5_16 - x87_r6_14
        bool p_8 = unimplemented  {test ah, 0x41}
        char var_195_1
        
        if (not(p_8))
            var_195_1 = 1
        else
            float var_28
            var_180 = fconvert.s(x87_r5_16 - fconvert.t(var_28))
            var_180 = fconvert.s(fabs(fconvert.t(var_180)))
            long double x87_r5_21 = fconvert.t(var_180)
            x87_r5_21 - x87_r6_14
            
            if ((((x87_r5_21 < x87_r6_14 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r5_21, x87_r6_14) ? 1 : 0) << 0xa
                    | (x87_r5_21 == x87_r6_14 ? 1 : 0) << 0xe | 0x3000):1.b & 1) == 0)
                var_195_1 = 1
            else
                float var_18
                var_180 = fconvert.s(x87_r5_16 - fconvert.t(var_18))
                var_180 = fconvert.s(fabs(fconvert.t(var_180)))
                long double x87_r6_18 = fconvert.t(var_180)
                x87_r6_18 - x87_r6_14
                
                if ((((x87_r6_18 < x87_r6_14 ? 1 : 0) << 8
                        | (is_unordered.t(x87_r6_18, x87_r6_14) ? 1 : 0) << 0xa
                        | (x87_r6_18 == x87_r6_14 ? 1 : 0) << 0xe):1.b & 1) == 0)
                    var_195_1 = 1
                else
                    var_195_1 = 0
        
        long double x87_r7_37 = fconvert.t(var_30)
        int32_t eax_13 = sub_70c710(x87_r7_37)
        long double x87_r6_20 = fconvert.t(var_50)
        result = sub_70c710(x87_r6_20)
        long double x87_r5_24 = fconvert.t(var_1c_1)
        long double x87_r4_5 = fconvert.t(var_2c_1)
        long double x87_r3_4 = fconvert.t(var_3c_1)
        long double x87_r2_6 = fconvert.t(var_40)
        char var_15d_1
        
        if (result != eax_13)
            var_15d_1 = 1
        else
            int32_t eax_14 = sub_70c710(fconvert.t(var_20))
            
            if (sub_70c710(x87_r2_6) != eax_14)
                var_15d_1 = 1
            else
                int32_t eax_15 = sub_70c710(x87_r3_4)
                
                if (sub_70c710(fconvert.t(var_4c_1)) != eax_15)
                    var_15d_1 = 1
                else
                    int32_t eax_16 = sub_70c710(x87_r5_24)
                    var_15d_1 = 0
                    
                    if (sub_70c710(x87_r4_5) != eax_16)
                        var_15d_1 = 1
        
        float var_154 = fconvert.s(x87_r6_20)
        float var_190 = fconvert.s(fconvert.t(var_4c_1))
        float var_15c = fconvert.s(x87_r2_6)
        float var_194 = fconvert.s(x87_r3_4)
        var_16c = fconvert.s(x87_r7_37)
        float var_174 = fconvert.s(x87_r4_5)
        var_168 = fconvert.s(fconvert.t(var_20))
        float var_170 = fconvert.s(x87_r5_24)
        double var_130_1 = fconvert.d(x87_r4_5)
        var_114 = fconvert.s(x87_r3_4 - x87_r4_5)
        double var_150 = fconvert.d(x87_r7_37)
        double var_f8 = fconvert.d(x87_r2_6)
        float var_110_1 = fconvert.s(x87_r7_37 - x87_r2_6)
        float var_10c_1 = fconvert.s(x87_r4_5 * x87_r2_6 - x87_r7_37 * x87_r3_4)
        long double x87_r2_17 = fconvert.t(var_4c_1)
        var_180.q = fconvert.d(x87_r2_17)
        float var_120_1 = fconvert.s(fconvert.t(var_130_1) - x87_r2_17)
        long double x87_r1_22 = fconvert.t(var_50)
        double var_e8 = fconvert.d(x87_r1_22)
        float var_11c_1 = fconvert.s(x87_r1_22 - fconvert.t(var_150))
        float var_118_1 = fconvert.s(x87_r2_17 * x87_r7_37 - x87_r1_22 * x87_r4_5)
        float var_13c_1 = fconvert.s(fconvert.t(var_180.q) - x87_r3_4)
        float var_138_1 = fconvert.s(fconvert.t(var_f8) - fconvert.t(var_e8))
        float var_134_1 =
            fconvert.s(x87_r3_4 * fconvert.t(var_50) - x87_r2_6 * fconvert.t(var_4c_1))
        long double x87_r2_27 = fconvert.t(var_1c_1)
        var_180.q = fconvert.d(x87_r2_27)
        var_e8.d = fconvert.s(x87_r2_27 - fconvert.t(var_130_1))
        long double x87_r1_28 = fconvert.t(var_20)
        var_e8:4.d = fconvert.s(fconvert.t(var_150) - x87_r1_28)
        float var_e0_1 = fconvert.s(fconvert.t(var_20) * x87_r4_5 - x87_r2_27 * x87_r7_37)
        var_150.d = fconvert.s(x87_r3_4 - fconvert.t(var_180.q))
        var_150:4.d = fconvert.s(fconvert.t(fconvert.d(x87_r1_28)) - fconvert.t(var_f8))
        long double x87_r2_30 = fconvert.t(var_20)
        long double x87_r3_17 = x87_r2_30
        float var_148_1 = fconvert.s(fconvert.t(var_1c_1) * x87_r2_6 - x87_r2_30 * x87_r3_4)
        var_180 = fconvert.s(fconvert.t(var_138_1) * x87_r4_5 + fconvert.t(var_13c_1) * x87_r7_37
            + fconvert.t(var_134_1))
        long double x87_r2_40 = fconvert.t(var_180)
        long double x87_r1_38 = fconvert.t(9.9999997473787516e-05)
        x87_r1_38 - x87_r2_40
        result.w = (x87_r1_38 < x87_r2_40 ? 1 : 0) << 8
            | (is_unordered.t(x87_r1_38, x87_r2_40) ? 1 : 0) << 0xa
            | (x87_r1_38 == x87_r2_40 ? 1 : 0) << 0xe | 0x800
        
        if ((result:1.b & 0x41) != 0)
            long double x87_r0_21 = fconvert.t(fconvert.s(fconvert.t(var_150:4.d) * x87_r4_5
                + fconvert.t(var_150.d) * x87_r7_37 + fconvert.t(var_148_1)))
            x87_r0_21 - x87_r1_38
            result.w = (x87_r0_21 < x87_r1_38 ? 1 : 0) << 8
                | (is_unordered.t(x87_r0_21, x87_r1_38) ? 1 : 0) << 0xa
                | (x87_r0_21 == x87_r1_38 ? 1 : 0) << 0xe | 0x1000
            bool p_9 = unimplemented  {test ah, 0x5}
            
            if (p_9)
                long double x87_r1_39 = float.t(1)
                var_180 = fconvert.s(x87_r1_39 / x87_r1_39)
                long double x87_r1_40 = fconvert.t(var_180)
                float var_a8_1 = fconvert.s(fconvert.t(var_114) * x87_r1_40)
                float var_a4_1 = fconvert.s(fconvert.t(var_110_1) * x87_r1_40)
                float var_a0_1 = fconvert.s(fconvert.t(var_10c_1) * x87_r1_40)
                float var_9c_1 = fconvert.s(fconvert.t(var_120_1) * x87_r1_40)
                float var_98_1 = fconvert.s(fconvert.t(var_11c_1) * x87_r1_40)
                float var_94_1 = fconvert.s(fconvert.t(var_118_1) * x87_r1_40)
                var_114 = fconvert.s(fconvert.t(var_13c_1) * x87_r1_40)
                float var_110_2 = fconvert.s(fconvert.t(var_138_1) * x87_r1_40)
                float var_10c_2 = fconvert.s(x87_r1_40 * fconvert.t(var_134_1))
                long double x87_r2_46 = float.t(0)
                float var_120_2 = fconvert.s(x87_r2_46)
                float var_11c_2 = fconvert.s(x87_r2_46)
                float var_118_2 = fconvert.s(x87_r2_46)
                float var_13c_2 = fconvert.s(x87_r2_46)
                float var_138_2 = fconvert.s(x87_r2_46)
                float var_134_2 = fconvert.s(x87_r2_46)
                double var_130_2
                
                if (var_15d_1 != 0)
                    x87_r3_17 = x87_r2_46
                    long double x87_r1_56 = float.t(1)
                    var_180 = fconvert.s(x87_r1_56 / x87_r1_56)
                    long double x87_r1_57 = fconvert.t(var_180)
                    var_130_2.d = fconvert.s(fconvert.t(var_e8.d) * x87_r1_57)
                    var_120_2 = var_130_2.d
                    var_130_2:4.d = fconvert.s(fconvert.t(var_e8:4.d) * x87_r1_57)
                    var_11c_2 = var_130_2:4.d
                    var_118_2 = fconvert.s(fconvert.t(var_e0_1) * x87_r1_57)
                    var_130_2.d = fconvert.s(fconvert.t(var_150.d) * x87_r1_57)
                    var_13c_2 = var_130_2.d
                    var_130_2:4.d = fconvert.s(fconvert.t(var_150:4.d) * x87_r1_57)
                    var_138_2 = var_130_2:4.d
                    x87_r2_46 = float.t(0)
                    var_134_2 = fconvert.s(x87_r1_57 * fconvert.t(var_148_1))
                
                int32_t eax_19 = *(arg1 + 0x38)
                float var_ac_1 = fconvert.s(x87_r2_46)
                float var_b8_1 = fconvert.s(x87_r2_46)
                float var_bc_1 = fconvert.s(x87_r2_46)
                var_130_2.d = eax_19
                float var_b0_1 = fconvert.s(x87_r2_46)
                float var_d0_1 = fconvert.s(x87_r2_46)
                float var_c8_1 = fconvert.s(x87_r2_46)
                float var_b4_1 = fconvert.s(x87_r2_46)
                var_e8.d = eax_19 - 1
                float var_c0_1 = fconvert.s(x87_r2_46)
                var_180 = *(arg1 + 0x3c) - 1
                float var_c4_1 = fconvert.s(x87_r2_46)
                long double x87_r2_53 = float.t(0)
                
                if (var_195_1 != 0)
                    float var_44
                    float var_164_3 = fconvert.s(x87_r2_53 / fconvert.t(var_44))
                    var_ac_1 = fconvert.s(fconvert.t(var_164_3))
                    float var_34
                    var_b8_1 = fconvert.s(fconvert.t(var_100_1) / fconvert.t(var_34))
                    float var_24
                    var_bc_1 = fconvert.s(x87_r2_53 / fconvert.t(var_24))
                    var_b0_1 = fconvert.s(fconvert.t(var_164_3))
                    var_d0_1 = fconvert.s(x87_r2_53 / fconvert.t(var_34))
                    var_c8_1 = fconvert.s(fconvert.t(var_fc_1) / fconvert.t(var_24))
                    long double x87_r0_24 = float.t(1)
                    var_b4_1 = fconvert.s(x87_r0_24 / x87_r0_24)
                    long double x87_r0_25 = float.t(1)
                    var_c0_1 = fconvert.s(x87_r0_25 / x87_r0_25)
                    long double x87_r0_26 = float.t(1)
                    var_c4_1 = fconvert.s(x87_r0_26 / x87_r0_26)
                
                float* edx_11 = &var_168
                x87_r3_17 - x87_r7_37
                int32_t eax_20
                eax_20.w = (x87_r3_17 < x87_r7_37 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r3_17, x87_r7_37) ? 1 : 0) << 0xa
                    | (x87_r3_17 == x87_r7_37 ? 1 : 0) << 0xe | 0x1000
                bool p_10 = unimplemented  {test ah, 0x5}
                
                if (p_10)
                    edx_11 = &var_16c
                
                long double x87_r1_85 = fconvert.t(var_50)
                float* ecx_17 = &var_15c
                x87_r1_85 - x87_r2_6
                eax_20.w = (x87_r1_85 < x87_r2_6 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r1_85, x87_r2_6) ? 1 : 0) << 0xa
                    | (x87_r1_85 == x87_r2_6 ? 1 : 0) << 0xe | 0x1000
                
                if ((eax_20:1.b & 0x41) != 0)
                    ecx_17 = &var_154
                
                long double x87_r1_86 = fconvert.t(*edx_11)
                long double x87_r0_27 = fconvert.t(*ecx_17)
                x87_r0_27 - x87_r1_86
                eax_20.w = (x87_r0_27 < x87_r1_86 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r0_27, x87_r1_86) ? 1 : 0) << 0xa
                    | (x87_r0_27 == x87_r1_86 ? 1 : 0) << 0xe | 0x1000
                float* eax_21 = edx_11
                
                if ((eax_20:1.b & 0x41) != 0)
                    eax_21 = ecx_17
                
                x87_r3_17 - x87_r7_37
                int32_t var_158_2 = sub_70c710(fconvert.t(*eax_21))
                float* edx_12 = &var_168
                int32_t eax_22
                eax_22.w = (x87_r3_17 < x87_r7_37 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r3_17, x87_r7_37) ? 1 : 0) << 0xa
                    | (x87_r3_17 == x87_r7_37 ? 1 : 0) << 0xe | 0x1800
                
                if ((eax_22:1.b & 0x41) != 0)
                    edx_12 = &var_16c
                
                long double x87_r3_20 = fconvert.t(var_50)
                float* ecx_18 = &var_15c
                x87_r3_20 - x87_r2_6
                eax_22.w = (x87_r3_20 < x87_r2_6 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r3_20, x87_r2_6) ? 1 : 0) << 0xa
                    | (x87_r3_20 == x87_r2_6 ? 1 : 0) << 0xe | 0x2000
                long double x87_r7_39 = x87_r7_37
                bool p_11 = unimplemented  {test ah, 0x5}
                
                if (p_11)
                    ecx_18 = &var_154
                
                long double x87_r4_7 = fconvert.t(*ecx_18)
                long double x87_r3_21 = fconvert.t(*edx_12)
                x87_r3_21 - x87_r4_7
                eax_22.w = (x87_r3_21 < x87_r4_7 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r3_21, x87_r4_7) ? 1 : 0) << 0xa
                    | (x87_r3_21 == x87_r4_7 ? 1 : 0) << 0xe | 0x2800
                float* eax_23 = edx_12
                
                if ((eax_22:1.b & 0x41) != 0)
                    eax_23 = ecx_18
                
                long double x87_r4_9 = fconvert.t(var_1c_1)
                x87_r4_9 - x87_r2_53
                int32_t esi_13 = sub_70c710(fconvert.t(*eax_23))
                float* edx_13 = &var_170
                int32_t eax_24
                eax_24.w = (x87_r4_9 < x87_r2_53 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r4_9, x87_r2_53) ? 1 : 0) << 0xa
                    | (x87_r4_9 == x87_r2_53 ? 1 : 0) << 0xe | 0x2000
                bool p_12 = unimplemented  {test ah, 0x5}
                
                if (p_12)
                    edx_13 = &var_174
                
                long double x87_r3_22 = fconvert.t(var_4c_1)
                float* ecx_19 = &var_194
                x87_r3_22 - x87_r7_39
                eax_24.w = (x87_r3_22 < x87_r7_39 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r3_22, x87_r7_39) ? 1 : 0) << 0xa
                    | (x87_r3_22 == x87_r7_39 ? 1 : 0) << 0xe | 0x1800
                
                if ((eax_24:1.b & 0x41) != 0)
                    ecx_19 = &var_190
                
                long double x87_r2_55 = fconvert.t(*edx_13)
                long double x87_r1_88 = fconvert.t(*ecx_19)
                x87_r1_88 - x87_r2_55
                eax_24.w = (x87_r1_88 < x87_r2_55 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r1_88, x87_r2_55) ? 1 : 0) << 0xa
                    | (x87_r1_88 == x87_r2_55 ? 1 : 0) << 0xe | 0x1800
                float* eax_25 = edx_13
                
                if ((eax_24:1.b & 0x41) != 0)
                    eax_25 = ecx_19
                
                x87_r2_53 - x87_r4_9
                int32_t edi_7 = sub_70c710(fconvert.t(*eax_25))
                float* edx_14 = &var_170
                int32_t eax_26
                eax_26.w = (x87_r2_53 < x87_r4_9 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r2_53, x87_r4_9) ? 1 : 0) << 0xa
                    | (x87_r2_53 == x87_r4_9 ? 1 : 0) << 0xe | 0x2800
                bool p_13 = unimplemented  {test ah, 0x5}
                
                if (p_13)
                    edx_14 = &var_174
                
                x87_r3_22 - x87_r7_39
                float* ecx_20 = &var_194
                eax_26.w = (x87_r3_22 < x87_r7_39 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r3_22, x87_r7_39) ? 1 : 0) << 0xa
                    | (x87_r3_22 == x87_r7_39 ? 1 : 0) << 0xe | 0x3000
                bool p_14 = unimplemented  {test ah, 0x5}
                
                if (p_14)
                    ecx_20 = &var_190
                
                long double x87_r6_25 = fconvert.t(*ecx_20)
                long double x87_r5_29 = fconvert.t(*edx_14)
                x87_r5_29 - x87_r6_25
                eax_26.w = (x87_r5_29 < x87_r6_25 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r5_29, x87_r6_25) ? 1 : 0) << 0xa
                    | (x87_r5_29 == x87_r6_25 ? 1 : 0) << 0xe | 0x3800
                float* eax_27 = edx_14
                
                if ((eax_26:1.b & 0x41) != 0)
                    eax_27 = ecx_20
                
                int32_t esi_14 = esi_13 - var_158_2
                var_150.d = var_158_2
                var_150:4.d = edi_7
                int32_t var_148_2 = esi_14
                int32_t var_144_1 = sub_70c710(fconvert.t(*eax_27)) - edi_7
                
                if (sub_5f7e30(&var_150, arg2, arg3).b != 0)
                    long double x87_r6_27 = float.t(0)
                    int32_t edx_15
                    edx_15.b = var_15d_1
                    var_168 = fconvert.s(x87_r6_27)
                    var_154 = fconvert.s(x87_r6_27)
                    
                    if (edx_15.b != 0)
                        var_168 = fconvert.s(fconvert.t(var_120_2))
                        var_154 = fconvert.s(fconvert.t(var_13c_2))
                    
                    result.b = var_195_1
                    var_15c = fconvert.s(x87_r6_27)
                    var_16c = fconvert.s(x87_r6_27)
                    long double x87_r5_32 = fconvert.t(var_a8_1)
                    long double x87_r4_10 = fconvert.t(var_9c_1)
                    long double x87_r3_24 = fconvert.t(var_114)
                    
                    if (result.b == 0)
                        long double x87_r2_58 = x87_r5_32 * x87_r7_39
                        var_15c = fconvert.s(x87_r4_10 * fconvert.t(var_100_1) + x87_r2_58
                            + x87_r3_24 * x87_r7_39)
                        var_16c = fconvert.s(x87_r2_58 + x87_r4_10 * x87_r7_39
                            + x87_r3_24 * fconvert.t(var_fc_1))
                    
                    x87_r6 = x87_r3_24
                    var_190 = fconvert.s(x87_r6_27)
                    float var_cc_1 = fconvert.s(x87_r6_27)
                    
                    if (edx_15.b != 0)
                        var_190 = fconvert.s(fconvert.t(var_11c_2))
                        var_cc_1 = fconvert.s(fconvert.t(var_138_2))
                    
                    long double x87_r2_64 = fconvert.t(fconvert.s(float.t(edi_7)))
                    float var_184_1 =
                        fconvert.s(x87_r2_64 * fconvert.t(var_a4_1) + fconvert.t(var_a0_1))
                    float var_188_1 =
                        fconvert.s(x87_r2_64 * fconvert.t(var_98_1) + fconvert.t(var_94_1))
                    var_150.d =
                        fconvert.s(x87_r2_64 * fconvert.t(var_110_2) + fconvert.t(var_10c_2))
                    long double x87_r3_26 = x87_r2_64
                    float var_d4_1 = fconvert.s(x87_r6_27)
                    float var_140_3 = fconvert.s(x87_r6_27)
                    
                    if (edx_15.b == 0)
                        x87_r4_10 = x87_r6_27
                    else
                        var_d4_1 =
                            fconvert.s(x87_r3_26 * fconvert.t(var_11c_2) + fconvert.t(var_118_2))
                        long double x87_r3_28 =
                            x87_r3_26 * fconvert.t(var_138_2) + fconvert.t(var_134_2)
                        x87_r3_26 = x87_r6_27
                        var_140_3 = fconvert.s(x87_r3_28)
                    
                    long double x87_r2_68 = fconvert.t(fconvert.s(float.t(var_158_2)))
                    var_174 = fconvert.s(x87_r2_68 * x87_r5_32)
                    float var_18c_1 = fconvert.s(x87_r2_68 * x87_r4_10)
                    var_f8.d = fconvert.s(x87_r2_68 * x87_r6)
                    long double x87_r3_29 = x87_r2_68
                    float var_d8_1 = fconvert.s(x87_r3_26)
                    float var_104_2 = fconvert.s(x87_r3_26)
                    
                    if (edx_15.b == 0)
                        x87_r4_10 = x87_r3_26
                    else
                        var_d8_1 = fconvert.s(x87_r3_29 * fconvert.t(var_120_2))
                        long double x87_r3_30 = x87_r3_29 * fconvert.t(var_13c_2)
                        x87_r3_29 = x87_r3_26
                        var_104_2 = fconvert.s(x87_r3_30)
                    
                    var_170 = arg3 - edi_7
                    var_194 = fconvert.s(float.t(var_170))
                    float var_184_2 = fconvert.s(fconvert.t(var_194) * fconvert.t(var_a4_1)
                        + fconvert.t(var_174) + fconvert.t(var_184_1))
                    var_174 = fconvert.s(fconvert.t(var_194) * fconvert.t(var_98_1)
                        + fconvert.t(var_18c_1) + fconvert.t(var_188_1))
                    var_170 = fconvert.s(fconvert.t(var_194) * fconvert.t(var_110_2)
                        + fconvert.t(var_f8.d) + fconvert.t(var_150.d))
                    float var_188_2 = fconvert.s(x87_r3_29)
                    float var_18c_2 = fconvert.s(x87_r3_29)
                    
                    if (edx_15.b != 0)
                        var_188_2 = fconvert.s(fconvert.t(var_194) * fconvert.t(var_190)
                            + fconvert.t(var_d8_1) + fconvert.t(var_d4_1))
                        var_18c_2 = fconvert.s(fconvert.t(var_194) * fconvert.t(var_cc_1)
                            + fconvert.t(var_104_2) + fconvert.t(var_140_3))
                    
                    var_190 = fconvert.s(x87_r3_29)
                    var_194 = fconvert.s(x87_r3_29)
                    long double x87_r3_31 = fconvert.t(var_184_2)
                    long double x87_r2_87 = fconvert.t(var_174)
                    
                    if (result.b == 0)
                        x87_r6 = fconvert.t(var_170)
                        var_150 = fconvert.d(x87_r3_31 * x87_r7_39)
                        var_190 = fconvert.s(x87_r2_87 * fconvert.t(var_100_1) + fconvert.t(var_150)
                            + x87_r5_32 * x87_r7_39)
                        var_194 = fconvert.s(x87_r5_32 * fconvert.t(var_fc_1)
                            + x87_r7_39 * x87_r2_87 + fconvert.t(var_150))
                        long double x87_r2_90 = x87_r5_32
                        x87_r5_32 = fconvert.t(var_a8_1)
                        x87_r7_39 = x87_r2_90
                    
                    long double x87_r1_140 = fconvert.t(var_168)
                    int32_t ecx_22 = 0
                    long double x87_r1_139
                    long double x87_r5_26
                    long double x87_r6_24
                    long double x87_r7_44
                    long double x87_r7_47
                    
                    if (esi_14 s>= 4)
                        while (true)
                            if (edx_15.b == 0)
                                goto label_5de2bc
                            
                            long double x87_r0_37 = float.t(0)
                            x87_r0_37 - x87_r2_87
                            result.w = (x87_r0_37 < x87_r2_87 ? 1 : 0) << 8
                                | (is_unordered.t(x87_r0_37, x87_r2_87) ? 1 : 0) << 0xa
                                | (x87_r0_37 == x87_r2_87 ? 1 : 0) << 0xe | 0x800
                            
                            if ((result:1.b & 0x41) == 0)
                                goto label_5de29c
                            
                            long double x87_r0_38 = float.t(0)
                            x87_r0_38 - x87_r7_39
                            result.w = (x87_r0_38 < x87_r7_39 ? 1 : 0) << 8
                                | (is_unordered.t(x87_r0_38, x87_r7_39) ? 1 : 0) << 0xa
                                | (x87_r0_38 == x87_r7_39 ? 1 : 0) << 0xe | 0x800
                            
                            if ((result:1.b & 0x41) == 0)
                                goto label_5de29c
                            
                            x87_r2_87 = x87_r1_140
                            long double x87_r1_141 = float.t(0)
                            long double temp1_1 = fconvert.t(var_188_2)
                            x87_r1_141 - temp1_1
                            result.w = (x87_r1_141 < temp1_1 ? 1 : 0) << 8
                                | (is_unordered.t(x87_r1_141, temp1_1) ? 1 : 0) << 0xa
                                | (x87_r1_141 == temp1_1 ? 1 : 0) << 0xe | 0x1000
                            float var_184_3
                            
                            if ((result:1.b & 0x41) == 0)
                            label_5de292:
                                x87_r1_140 = fconvert.t(var_168)
                            label_5de29c:
                                var_184_3 = fconvert.s(x87_r3_31 + x87_r5_32)
                                var_174 = fconvert.s(x87_r2_87 + x87_r4_10)
                                x87_r7_44 = x87_r1_140
                                var_170 = fconvert.s(x87_r7_39 + x87_r6)
                                var_188_2 = fconvert.s(fconvert.t(var_188_2) + x87_r7_44)
                                var_18c_2 = fconvert.s(fconvert.t(var_18c_2) + fconvert.t(var_154))
                            else
                                long double x87_r1_142 = float.t(0)
                                long double temp2_1 = fconvert.t(var_18c_2)
                                x87_r1_142 - temp2_1
                                result.w = (x87_r1_142 < temp2_1 ? 1 : 0) << 8
                                    | (is_unordered.t(x87_r1_142, temp2_1) ? 1 : 0) << 0xa
                                    | (x87_r1_142 == temp2_1 ? 1 : 0) << 0xe | 0x1000
                                
                                if ((result:1.b & 0x41) == 0)
                                    goto label_5de292
                                
                                x87_r1_140 = fconvert.t(var_168)
                            label_5de2bc:
                                
                                if (var_158_2 + ecx_22 == arg2)
                                    x87_r7_47 = x87_r2_87
                                    x87_r6_24 = x87_r3_31
                                    x87_r5_26 = x87_r4_10
                                    break
                                
                                var_184_3 = fconvert.s(x87_r3_31 + x87_r5_32)
                                var_174 = fconvert.s(x87_r2_87 + x87_r4_10)
                                x87_r7_44 = x87_r1_140
                                var_170 = fconvert.s(x87_r7_39 + x87_r6)
                                
                                if (edx_15.b != 0)
                                    var_188_2 = fconvert.s(fconvert.t(var_188_2) + x87_r7_44)
                                    var_18c_2 =
                                        fconvert.s(fconvert.t(var_18c_2) + fconvert.t(var_154))
                            
                            if (var_195_1 == 0)
                                var_190 = fconvert.s(fconvert.t(var_190) + fconvert.t(var_15c))
                                var_194 = fconvert.s(fconvert.t(var_194) + fconvert.t(var_16c))
                            
                            long double x87_r3_104 = fconvert.t(var_174)
                            long double x87_r2_95 = fconvert.t(var_170)
                            float var_184_4
                            
                            if (edx_15.b == 0)
                            label_5de367:
                                
                                if (ecx_22 + var_158_2 + 1 == arg2)
                                    ecx_22 += 1
                                    x87_r7_47 = x87_r3_104
                                    x87_r6_24 = x87_r4_10
                                    x87_r5_26 = fconvert.t(var_184_3)
                                    break
                                
                                var_184_4 = fconvert.s(fconvert.t(var_184_3) + x87_r5_32)
                                var_174 = fconvert.s(x87_r3_104 + x87_r4_10)
                                var_170 = fconvert.s(x87_r2_95 + x87_r6)
                                
                                if (edx_15.b != 0)
                                    var_188_2 = fconvert.s(fconvert.t(var_188_2) + x87_r7_44)
                                    var_18c_2 =
                                        fconvert.s(fconvert.t(var_18c_2) + fconvert.t(var_154))
                            else
                                long double x87_r1_145 = float.t(0)
                                x87_r1_145 - x87_r3_104
                                result.w = (x87_r1_145 < x87_r3_104 ? 1 : 0) << 8
                                    | (is_unordered.t(x87_r1_145, x87_r3_104) ? 1 : 0) << 0xa
                                    | (x87_r1_145 == x87_r3_104 ? 1 : 0) << 0xe | 0x800
                                
                                if ((result:1.b & 0x41) != 0)
                                    x87_r1_145 - x87_r2_95
                                    result.w = (x87_r1_145 < x87_r2_95 ? 1 : 0) << 8
                                        | (is_unordered.t(x87_r1_145, x87_r2_95) ? 1 : 0) << 0xa
                                        | (x87_r1_145 == x87_r2_95 ? 1 : 0) << 0xe | 0x800
                                    
                                    if ((result:1.b & 0x41) == 0)
                                        goto label_5de53b
                                    
                                    long double temp5_1 = fconvert.t(var_188_2)
                                    x87_r1_145 - temp5_1
                                    result.w = (x87_r1_145 < temp5_1 ? 1 : 0) << 8
                                        | (is_unordered.t(x87_r1_145, temp5_1) ? 1 : 0) << 0xa
                                        | (x87_r1_145 == temp5_1 ? 1 : 0) << 0xe | 0x1000
                                    
                                    if ((result:1.b & 0x41) == 0)
                                        goto label_5de543
                                    
                                    long double x87_r1_146 = float.t(0)
                                    long double temp6_1 = fconvert.t(var_18c_2)
                                    x87_r1_146 - temp6_1
                                    result.w = (x87_r1_146 < temp6_1 ? 1 : 0) << 8
                                        | (is_unordered.t(x87_r1_146, temp6_1) ? 1 : 0) << 0xa
                                        | (x87_r1_146 == temp6_1 ? 1 : 0) << 0xe | 0x1000
                                    
                                    if ((result:1.b & 0x41) == 0)
                                        goto label_5de543
                                    
                                    goto label_5de367
                                
                            label_5de53b:
                                x87_r2_95 = x87_r1_145
                            label_5de543:
                                var_184_4 = fconvert.s(fconvert.t(var_184_3) + x87_r5_32)
                                var_174 = fconvert.s(x87_r3_104 + x87_r4_10)
                                var_170 = fconvert.s(x87_r2_95 + x87_r6)
                                var_188_2 = fconvert.s(fconvert.t(var_188_2) + x87_r7_44)
                                var_18c_2 = fconvert.s(fconvert.t(var_18c_2) + fconvert.t(var_154))
                            
                            if (var_195_1 == 0)
                                var_190 = fconvert.s(fconvert.t(var_190) + fconvert.t(var_15c))
                                var_194 = fconvert.s(fconvert.t(var_194) + fconvert.t(var_16c))
                            
                            long double x87_r3_105 = fconvert.t(var_174)
                            long double x87_r2_97 = fconvert.t(var_170)
                            float var_184_5
                            
                            if (edx_15.b == 0)
                            label_5de412:
                                
                                if (ecx_22 + var_158_2 + 2 == arg2)
                                    ecx_22 += 2
                                    x87_r7_47 = x87_r3_105
                                    x87_r6_24 = x87_r4_10
                                    x87_r5_26 = fconvert.t(var_184_4)
                                    break
                                
                                var_184_5 = fconvert.s(fconvert.t(var_184_4) + x87_r5_32)
                                var_174 = fconvert.s(x87_r3_105 + x87_r4_10)
                                var_170 = fconvert.s(x87_r2_97 + x87_r6)
                                
                                if (edx_15.b != 0)
                                    var_188_2 = fconvert.s(fconvert.t(var_188_2) + x87_r7_44)
                                    var_18c_2 =
                                        fconvert.s(fconvert.t(var_18c_2) + fconvert.t(var_154))
                            else
                                long double x87_r1_150 = float.t(0)
                                x87_r1_150 - x87_r3_105
                                result.w = (x87_r1_150 < x87_r3_105 ? 1 : 0) << 8
                                    | (is_unordered.t(x87_r1_150, x87_r3_105) ? 1 : 0) << 0xa
                                    | (x87_r1_150 == x87_r3_105 ? 1 : 0) << 0xe | 0x800
                                
                                if ((result:1.b & 0x41) != 0)
                                    x87_r1_150 - x87_r2_97
                                    result.w = (x87_r1_150 < x87_r2_97 ? 1 : 0) << 8
                                        | (is_unordered.t(x87_r1_150, x87_r2_97) ? 1 : 0) << 0xa
                                        | (x87_r1_150 == x87_r2_97 ? 1 : 0) << 0xe | 0x800
                                    
                                    if ((result:1.b & 0x41) == 0)
                                        goto label_5de55c
                                    
                                    long double temp7_1 = fconvert.t(var_188_2)
                                    x87_r1_150 - temp7_1
                                    result.w = (x87_r1_150 < temp7_1 ? 1 : 0) << 8
                                        | (is_unordered.t(x87_r1_150, temp7_1) ? 1 : 0) << 0xa
                                        | (x87_r1_150 == temp7_1 ? 1 : 0) << 0xe | 0x1000
                                    
                                    if ((result:1.b & 0x41) == 0)
                                        goto label_5de564
                                    
                                    long double x87_r1_151 = float.t(0)
                                    long double temp8_1 = fconvert.t(var_18c_2)
                                    x87_r1_151 - temp8_1
                                    result.w = (x87_r1_151 < temp8_1 ? 1 : 0) << 8
                                        | (is_unordered.t(x87_r1_151, temp8_1) ? 1 : 0) << 0xa
                                        | (x87_r1_151 == temp8_1 ? 1 : 0) << 0xe | 0x1000
                                    
                                    if ((result:1.b & 0x41) == 0)
                                        goto label_5de564
                                    
                                    goto label_5de412
                                
                            label_5de55c:
                                x87_r2_97 = x87_r1_150
                            label_5de564:
                                var_184_5 = fconvert.s(fconvert.t(var_184_4) + x87_r5_32)
                                var_174 = fconvert.s(x87_r3_105 + x87_r4_10)
                                var_170 = fconvert.s(x87_r2_97 + x87_r6)
                                var_188_2 = fconvert.s(fconvert.t(var_188_2) + x87_r7_44)
                                var_18c_2 = fconvert.s(fconvert.t(var_18c_2) + fconvert.t(var_154))
                            
                            if (var_195_1 == 0)
                                var_190 = fconvert.s(fconvert.t(var_190) + fconvert.t(var_15c))
                                var_194 = fconvert.s(fconvert.t(var_194) + fconvert.t(var_16c))
                            
                            long double x87_r3_106 = fconvert.t(var_174)
                            long double x87_r2_99 = fconvert.t(var_170)
                            float var_184_6
                            
                            if (edx_15.b == 0)
                            label_5de4bd:
                                
                                if (ecx_22 + var_158_2 + 3 == arg2)
                                    ecx_22 += 3
                                    x87_r7_47 = x87_r3_106
                                    x87_r6_24 = x87_r4_10
                                    x87_r5_26 = fconvert.t(var_184_5)
                                    break
                                
                                var_184_6 = fconvert.s(fconvert.t(var_184_5) + x87_r5_32)
                                var_174 = fconvert.s(x87_r3_106 + x87_r4_10)
                                var_170 = fconvert.s(x87_r2_99 + x87_r6)
                                
                                if (edx_15.b != 0)
                                    var_188_2 = fconvert.s(fconvert.t(var_188_2) + x87_r7_44)
                                    var_18c_2 =
                                        fconvert.s(fconvert.t(var_18c_2) + fconvert.t(var_154))
                            else
                                long double x87_r1_155 = float.t(0)
                                x87_r1_155 - x87_r3_106
                                result.w = (x87_r1_155 < x87_r3_106 ? 1 : 0) << 8
                                    | (is_unordered.t(x87_r1_155, x87_r3_106) ? 1 : 0) << 0xa
                                    | (x87_r1_155 == x87_r3_106 ? 1 : 0) << 0xe | 0x800
                                
                                if ((result:1.b & 0x41) != 0)
                                    x87_r1_155 - x87_r2_99
                                    result.w = (x87_r1_155 < x87_r2_99 ? 1 : 0) << 8
                                        | (is_unordered.t(x87_r1_155, x87_r2_99) ? 1 : 0) << 0xa
                                        | (x87_r1_155 == x87_r2_99 ? 1 : 0) << 0xe | 0x800
                                    
                                    if ((result:1.b & 0x41) == 0)
                                        goto label_5de57d
                                    
                                    long double temp9_1 = fconvert.t(var_188_2)
                                    x87_r1_155 - temp9_1
                                    result.w = (x87_r1_155 < temp9_1 ? 1 : 0) << 8
                                        | (is_unordered.t(x87_r1_155, temp9_1) ? 1 : 0) << 0xa
                                        | (x87_r1_155 == temp9_1 ? 1 : 0) << 0xe | 0x1000
                                    
                                    if ((result:1.b & 0x41) == 0)
                                        goto label_5de585
                                    
                                    long double x87_r1_156 = float.t(0)
                                    long double temp10_1 = fconvert.t(var_18c_2)
                                    x87_r1_156 - temp10_1
                                    result.w = (x87_r1_156 < temp10_1 ? 1 : 0) << 8
                                        | (is_unordered.t(x87_r1_156, temp10_1) ? 1 : 0) << 0xa
                                        | (x87_r1_156 == temp10_1 ? 1 : 0) << 0xe | 0x1000
                                    
                                    if ((result:1.b & 0x41) == 0)
                                        goto label_5de585
                                    
                                    goto label_5de4bd
                                
                            label_5de57d:
                                x87_r2_99 = x87_r1_155
                            label_5de585:
                                var_184_6 = fconvert.s(fconvert.t(var_184_5) + x87_r5_32)
                                var_174 = fconvert.s(x87_r3_106 + x87_r4_10)
                                var_170 = fconvert.s(x87_r2_99 + x87_r6)
                                var_188_2 = fconvert.s(fconvert.t(var_188_2) + x87_r7_44)
                                var_18c_2 = fconvert.s(fconvert.t(var_18c_2) + fconvert.t(var_154))
                            
                            if (var_195_1 == 0)
                                var_190 = fconvert.s(fconvert.t(var_190) + fconvert.t(var_15c))
                                var_194 = fconvert.s(fconvert.t(var_194) + fconvert.t(var_16c))
                            
                            x87_r3_31 = fconvert.t(var_184_6)
                            x87_r2_87 = fconvert.t(var_174)
                            ecx_22 += 4
                            x87_r1_139 = fconvert.t(var_170)
                            
                            if (ecx_22 s>= esi_14 - 3)
                                goto label_5de23f
                            
                            x87_r1_140 = x87_r7_44
                            x87_r7_39 = x87_r1_139
                        
                        goto label_5de6b6
                    
                    x87_r1_139 = x87_r7_39
                    x87_r7_44 = x87_r1_140
                label_5de23f:
                    
                    if (ecx_22 s< esi_14)
                        while (true)
                            if (edx_15.b == 0)
                                goto label_5de60a
                            
                            long double x87_r0_41 = float.t(0)
                            x87_r0_41 - x87_r2_87
                            result.w = (x87_r0_41 < x87_r2_87 ? 1 : 0) << 8
                                | (is_unordered.t(x87_r0_41, x87_r2_87) ? 1 : 0) << 0xa
                                | (x87_r0_41 == x87_r2_87 ? 1 : 0) << 0xe | 0x800
                            
                            if ((result:1.b & 0x41) == 0)
                                goto label_5de5ec
                            
                            long double x87_r0_42 = float.t(0)
                            x87_r0_42 - x87_r1_139
                            result.w = (x87_r0_42 < x87_r1_139 ? 1 : 0) << 8
                                | (is_unordered.t(x87_r0_42, x87_r1_139) ? 1 : 0) << 0xa
                                | (x87_r0_42 == x87_r1_139 ? 1 : 0) << 0xe | 0x800
                            
                            if ((result:1.b & 0x41) == 0)
                                goto label_5de5ec
                            
                            long double x87_r1_169 = float.t(0)
                            long double temp3_1 = fconvert.t(var_188_2)
                            x87_r1_169 - temp3_1
                            result.w = (x87_r1_169 < temp3_1 ? 1 : 0) << 8
                                | (is_unordered.t(x87_r1_169, temp3_1) ? 1 : 0) << 0xa
                                | (x87_r1_169 == temp3_1 ? 1 : 0) << 0xe | 0x1000
                            float var_184_7
                            
                            if ((result:1.b & 0x41) == 0)
                            label_5de5e4:
                                x87_r1_139 = x87_r7_44
                                x87_r7_44 = fconvert.t(var_168)
                            label_5de5ec:
                                var_184_7 = fconvert.s(x87_r3_31 + x87_r5_32)
                                var_174 = fconvert.s(x87_r2_87 + x87_r4_10)
                                var_170 = fconvert.s(x87_r1_139 + x87_r6)
                                var_188_2 = fconvert.s(fconvert.t(var_188_2) + x87_r7_44)
                                var_18c_2 = fconvert.s(fconvert.t(var_18c_2) + fconvert.t(var_154))
                            else
                                long double x87_r1_170 = float.t(0)
                                long double temp4_1 = fconvert.t(var_18c_2)
                                x87_r1_170 - temp4_1
                                result.w = (x87_r1_170 < temp4_1 ? 1 : 0) << 8
                                    | (is_unordered.t(x87_r1_170, temp4_1) ? 1 : 0) << 0xa
                                    | (x87_r1_170 == temp4_1 ? 1 : 0) << 0xe | 0x1000
                                
                                if ((result:1.b & 0x41) == 0)
                                    goto label_5de5e4
                                
                                x87_r1_139 = x87_r7_44
                                x87_r7_44 = fconvert.t(var_168)
                            label_5de60a:
                                
                                if (var_158_2 + ecx_22 == arg2)
                                    x87_r5_26 = x87_r1_139
                                    x87_r7_47 = x87_r2_87
                                    x87_r6_24 = x87_r3_31
                                    break
                                
                                var_184_7 = fconvert.s(x87_r3_31 + x87_r5_32)
                                var_174 = fconvert.s(x87_r2_87 + x87_r4_10)
                                var_170 = fconvert.s(x87_r1_139 + x87_r6)
                                
                                if (edx_15.b != 0)
                                    var_188_2 = fconvert.s(fconvert.t(var_188_2) + x87_r7_44)
                                    var_18c_2 =
                                        fconvert.s(fconvert.t(var_18c_2) + fconvert.t(var_154))
                            
                            if (var_195_1 == 0)
                                var_190 = fconvert.s(fconvert.t(var_190) + fconvert.t(var_15c))
                                var_194 = fconvert.s(fconvert.t(var_194) + fconvert.t(var_16c))
                            
                            ecx_22 += 1
                            
                            if (ecx_22 s>= esi_14)
                                goto label_5de7fe
                            
                            x87_r3_31 = fconvert.t(var_184_7)
                            x87_r2_87 = fconvert.t(var_174)
                            x87_r1_139 = fconvert.t(var_170)
                        
                    label_5de6b6:
                        
                        if (esi_14 s> ecx_22)
                            if (var_195_1 != 0)
                                long double x87_r3_111 = float.t(1)
                                var_150.d = fconvert.s(x87_r3_111 / x87_r3_111)
                                long double x87_r3_116 = fconvert.t(var_150.d)
                                var_190 = fconvert.s((x87_r6_24 * fconvert.t(var_b8_1)
                                    + x87_r5_26 * fconvert.t(var_ac_1)
                                    + x87_r7_47 * fconvert.t(var_bc_1)) * x87_r3_116)
                                var_194 = fconvert.s((x87_r7_47 * fconvert.t(var_c8_1)
                                    + x87_r5_26 * fconvert.t(var_b0_1)
                                    + x87_r6_24 * fconvert.t(var_d0_1)) * x87_r3_116)
                            
                            int32_t eax_37 = sub_70c710(fconvert.t(var_190))
                            var_150.d = eax_37
                            var_f8.d = 0
                            double* eax_38 = &var_150
                            
                            if (eax_37 s>= var_e8.d)
                                eax_38 = &var_e8
                            
                            if (*eax_38 s<= 0)
                                eax_38 = &var_f8
                            
                            int32_t esi_17 = *eax_38
                            int32_t eax_39 = sub_70c710(fconvert.t(var_194))
                            var_150.d = eax_39
                            var_f8.d = 0
                            float* eax_40 = &var_150
                            
                            if (eax_39 s>= var_180)
                                eax_40 = &var_180
                            
                            if (*eax_40 s<= 0)
                                eax_40 = &var_f8
                            
                            int32_t ecx_23 = *(arg1 + 0x24)
                            result = *eax_40 i* var_130_2.d + esi_17
                            
                            if (*(arg1 + 0x28) - ecx_23 s> result)
                                result.b = *(result + ecx_23) != 0
                                sub_6b4885(eax_1 ^ &var_19c)
                                return result
else
    x87_r6 - x87_r5_1
    result.w = (x87_r6 < x87_r5_1 ? 1 : 0) << 8 | (is_unordered.t(x87_r6, x87_r5_1) ? 1 : 0) << 0xa
        | (x87_r6 == x87_r5_1 ? 1 : 0) << 0xe | 0x1000
    bool p_1 = unimplemented  {test ah, 0x44}
    
    if (p_1)
        goto label_5dd5c5
    
    int32_t* ecx_1 = sub_70c710(x87_r4_1)
    var_180 = ecx_1
    long double x87_r1_3 = float.t(var_180)
    x87_r4_1 - x87_r1_3
    result.w = (x87_r4_1 < x87_r1_3 ? 1 : 0) << 8
        | (is_unordered.t(x87_r4_1, x87_r1_3) ? 1 : 0) << 0xa
        | (x87_r4_1 == x87_r1_3 ? 1 : 0) << 0xe | 0x1000
    bool p_2 = unimplemented  {test ah, 0x44}
    
    if (p_2)
        goto label_5dd5c5
    
    if (sub_5e6d90(ecx_1).b != 0)
        goto label_5dd5c5
    
    int32_t* ecx_2 = sub_70c710(x87_r3)
    var_180 = ecx_2
    long double x87_r1_5 = float.t(var_180)
    x87_r3 - x87_r1_5
    result.w = (x87_r3 < x87_r1_5 ? 1 : 0) << 8 | (is_unordered.t(x87_r3, x87_r1_5) ? 1 : 0) << 0xa
        | (x87_r3 == x87_r1_5 ? 1 : 0) << 0xe | 0x1000
    bool p_3 = unimplemented  {test ah, 0x44}
    
    if (p_3)
        goto label_5dd5c5
    
    if (sub_5e6d90(ecx_2).b != 0)
        goto label_5dd5c5
    
    int32_t* ecx_3 = sub_70c710(x87_r2)
    var_180 = ecx_3
    long double x87_r1_7 = float.t(var_180)
    x87_r1_7 - x87_r2
    result.w = (x87_r1_7 < x87_r2 ? 1 : 0) << 8 | (is_unordered.t(x87_r1_7, x87_r2) ? 1 : 0) << 0xa
        | (x87_r1_7 == x87_r2 ? 1 : 0) << 0xe | 0x1800
    bool p_4 = unimplemented  {test ah, 0x44}
    
    if (p_4)
        goto label_5dd5c7
    
    int32_t edx_1
    result, edx_1 = sub_5e6d90(ecx_3)
    
    if (result.b != 0)
        goto label_5dd5c7
    
    var_180 = arg6
    int32_t eax_5
    int32_t edx_2
    eax_5, edx_2 = sub_5f23d0(var_10c, edx_1, &var_180)
    var_180 = arg6
    int32_t esi_3 = arg2 - arg4 - eax_5
    void* ecx_8 = arg3 - arg5 - sub_5f2410(var_108, edx_2, &var_180)
    
    if (esi_3 s>= 0 && ecx_8 s>= 0 && var_10c s> esi_3 && var_108 s> ecx_8)
        result = *(arg1 + 0x24)
        int32_t edi_2 = edi * ecx_8 + esi_3
        
        if (*(arg1 + 0x28) - result s> edi_2)
            result.b = *(result + edi_2) != 0
            sub_6b4885(eax_1 ^ &var_19c)
            return result
label_5de7fe:
result.b = 0
sub_6b4885(eax_1 ^ &var_19c)
return result
