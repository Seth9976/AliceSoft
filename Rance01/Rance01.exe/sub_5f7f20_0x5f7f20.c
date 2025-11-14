// 函数: sub_5f7f20
// 地址: 0x5f7f20
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void var_13c
int32_t eax_1 = data_78c474 ^ &var_13c
float var_138 = fconvert.s(fconvert.t(arg9))
float var_128 = fconvert.s(fconvert.t(arg10))
int32_t edx = *(arg1 + 0x14)
float var_130 = fconvert.s(fconvert.t(arg11))
int32_t eax_3 = *(arg1 + 0x10)
int32_t var_120 = arg4
float var_a0
sub_5f7e90(arg1 + 0x1c, &var_a0, eax_3, edx)
long double x87_r6 = fconvert.t(arg7)
long double x87_r5 = float.t(1)
x87_r5 - x87_r6
int32_t* eax_4
eax_4.w = (x87_r5 < x87_r6 ? 1 : 0) << 8 | (is_unordered.t(x87_r5, x87_r6) ? 1 : 0) << 0xa
    | (x87_r5 == x87_r6 ? 1 : 0) << 0xe | 0x2800
long double x87_r5_1 = fconvert.t(arg8)
long double x87_r4_1 = fconvert.t(var_138)
long double x87_r3 = fconvert.t(var_128)
long double x87_r2 = fconvert.t(var_130)
bool p = unimplemented  {test ah, 0x44}
float var_100
float var_b8
int32_t var_98
int32_t var_94

if (p)
    x87_r3 = x87_r2
else
    x87_r6 - x87_r5_1
    eax_4.w = (x87_r6 < x87_r5_1 ? 1 : 0) << 8 | (is_unordered.t(x87_r6, x87_r5_1) ? 1 : 0) << 0xa
        | (x87_r6 == x87_r5_1 ? 1 : 0) << 0xe | 0x1000
    bool p_1 = unimplemented  {test ah, 0x44}
    
    if (p_1)
        x87_r3 = x87_r2
    else
        int32_t* ecx_1 = sub_70c710(x87_r4_1)
        var_128 = ecx_1
        long double x87_r1_3 = float.t(var_128)
        x87_r4_1 - x87_r1_3
        eax_4.w = (x87_r4_1 < x87_r1_3 ? 1 : 0) << 8
            | (is_unordered.t(x87_r4_1, x87_r1_3) ? 1 : 0) << 0xa
            | (x87_r4_1 == x87_r1_3 ? 1 : 0) << 0xe | 0x1000
        bool p_2 = unimplemented  {test ah, 0x44}
        
        if (p_2)
            x87_r3 = x87_r2
        else if (sub_5e6d90(ecx_1).b != 0)
            x87_r3 = x87_r2
        else
            int32_t* ecx_2 = sub_70c710(x87_r3)
            var_128 = ecx_2
            long double x87_r1_5 = float.t(var_128)
            x87_r3 - x87_r1_5
            eax_4.w = (x87_r3 < x87_r1_5 ? 1 : 0) << 8
                | (is_unordered.t(x87_r3, x87_r1_5) ? 1 : 0) << 0xa
                | (x87_r3 == x87_r1_5 ? 1 : 0) << 0xe | 0x1000
            bool p_3 = unimplemented  {test ah, 0x44}
            
            if (p_3)
                x87_r3 = x87_r2
            else if (sub_5e6d90(ecx_2).b != 0)
                x87_r3 = x87_r2
            else
                int32_t* ecx_3 = sub_70c710(x87_r2)
                var_128 = ecx_3
                long double x87_r1_7 = float.t(var_128)
                x87_r1_7 - x87_r2
                eax_4.w = (x87_r1_7 < x87_r2 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r1_7, x87_r2) ? 1 : 0) << 0xa
                    | (x87_r1_7 == x87_r2 ? 1 : 0) << 0xe | 0x1800
                bool p_4 = unimplemented  {test ah, 0x44}
                
                if (not(p_4))
                    int32_t edx_1
                    eax_4, edx_1 = sub_5e6d90(ecx_3)
                    
                    if (eax_4.b == 0)
                        var_128 = arg6
                        var_b8 = arg6
                        int32_t eax_6
                        int32_t edx_2
                        eax_6, edx_2 = sub_5f23d0(var_98, edx_1, &var_128)
                        var_100 = eax_6 + arg4
                        int32_t var_fc_1 = sub_5f2410(var_94, edx_2, &var_b8) + arg5
                        int32_t var_f8_1 = var_98
                        int32_t var_f4 = var_94
                        sub_5f7e30(&var_100, arg2, arg3)
                        sub_6b4885(eax_1 ^ &var_13c)
                        return x87_r6

int32_t ecx_8 = var_98
long double x87_r0_26

if (ecx_8 s<= 0 || var_94 s<= 0)
    x87_r0_26 = x87_r6
else
    var_b8 = fconvert.s(float.t(var_98))
    float var_11c = fconvert.s(float.t(var_94))
    long double x87_r2_3 = fconvert.t(0.5)
    long double x87_r1_8 = float.t(0)
    float var_12c
    
    if (arg6 - 1 u> 8)
        var_12c = fconvert.s(x87_r1_8)
    else
        switch (arg6 i+ &jump_table_5f9084[2]:3)
            case &lookup_table_5f9090, &lookup_table_5f9090[3], &lookup_table_5f9090[6]
                var_12c = fconvert.s(x87_r1_8)
            case &lookup_table_5f9090[1], &lookup_table_5f9090[4], &lookup_table_5f9090[7]
                ecx_8 = neg.d(ecx_8)
                var_128 = ecx_8
                var_12c = fconvert.s(float.t(var_128) * x87_r2_3)
            case &lookup_table_5f9090[2], &lookup_table_5f9090[5], &lookup_table_5f9090[8]
                ecx_8 = neg.d(ecx_8)
                var_128 = ecx_8
                var_12c = fconvert.s(float.t(var_128))
    
    float var_134_1
    
    if (arg6 - 1 u> 8)
        x87_r3 = x87_r1_8
        var_134_1 = fconvert.s(x87_r2_3)
    else
        ecx_8 = zx.d(*(arg6 i+ &jump_table_5f909c[2]:3))
        
        switch (ecx_8)
            case 0
                x87_r3 = x87_r1_8
                var_134_1 = fconvert.s(x87_r2_3)
            case 1
                var_128 = neg.d(var_94)
                long double x87_r2_4 = x87_r2_3 * float.t(var_128)
                x87_r2_3 = x87_r1_8
                var_134_1 = fconvert.s(x87_r2_4)
            case 2
                x87_r3 = x87_r1_8
                var_128 = neg.d(var_94)
                var_134_1 = fconvert.s(float.t(var_128))
    
    float var_90 = fconvert.s(x87_r5)
    long double x87_r7_9 = x87_r3
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
    long double x87_r6_1 = x87_r4_1
    float var_68_1 = fconvert.s(x87_r6)
    float var_54_1 = fconvert.s(x87_r6)
    x87_r2_3 - x87_r7_9
    float* eax_12
    eax_12.w = (x87_r2_3 < x87_r7_9 ? 1 : 0) << 8
        | (is_unordered.t(x87_r2_3, x87_r7_9) ? 1 : 0) << 0xa
        | (x87_r2_3 == x87_r7_9 ? 1 : 0) << 0xe | 0x2800
    bool p_5 = unimplemented  {test ah, 0x44}
    float var_50
    
    if (p_5)
        int32_t var_14c_1 = ecx_8
        sub_5dcfd0(&var_50, fconvert.s(fneg(x87_r2_3)))
        ecx_8 = sub_42e150(&var_90, &var_50)
        x87_r7_9 = float.t(0)
        x87_r6_1 = fconvert.t(var_138)
    
    x87_r7_9 - x87_r6_1
    eax_12.w = (x87_r7_9 < x87_r6_1 ? 1 : 0) << 8
        | (is_unordered.t(x87_r7_9, x87_r6_1) ? 1 : 0) << 0xa
        | (x87_r7_9 == x87_r6_1 ? 1 : 0) << 0xe | 0x3000
    bool p_6 = unimplemented  {test ah, 0x44}
    long double x87_r7_13
    
    if (not(p_6))
        x87_r7_13 = x87_r6_1
    else
        int32_t var_14c_3 = ecx_8
        sub_4b65a0(&var_50, fconvert.s(fneg(x87_r7_9)))
        ecx_8 = sub_42e150(&var_90, &var_50)
        x87_r7_13 = float.t(0)
    
    long double x87_r6_3 = fconvert.t(var_130)
    x87_r6_3 - x87_r7_13
    eax_12.w = (x87_r6_3 < x87_r7_13 ? 1 : 0) << 8
        | (is_unordered.t(x87_r6_3, x87_r7_13) ? 1 : 0) << 0xa
        | (x87_r6_3 == x87_r7_13 ? 1 : 0) << 0xe | 0x3000
    bool p_7 = unimplemented  {test ah, 0x44}
    
    if (p_7)
        int32_t var_14c_5 = ecx_8
        sub_5dd020(&var_50, fconvert.s(fneg(x87_r7_13)))
        sub_42e150(&var_90, &var_50)
    
    sub_5feef0(*(arg1 + 0x18), &var_50, fconvert.s(fconvert.t(var_12c)), 
        fconvert.s(fconvert.t(var_134_1)), &var_90)
    float* esi_5 = *(arg1 + 0x18)
    var_138 = fconvert.s(fconvert.t(var_12c) + fconvert.t(var_b8))
    float var_40
    sub_5feef0(esi_5, &var_40, fconvert.s(fconvert.t(var_138)), fconvert.s(fconvert.t(var_134_1)), 
        &var_90)
    float var_134_2 = fconvert.s(fconvert.t(var_134_1) + fconvert.t(var_11c))
    float var_30
    sub_5feef0(*(arg1 + 0x18), &var_30, fconvert.s(fconvert.t(var_12c)), 
        fconvert.s(fconvert.t(var_134_2)), &var_90)
    float var_20
    sub_5feef0(*(arg1 + 0x18), &var_20, fconvert.s(fconvert.t(var_138)), 
        fconvert.s(fconvert.t(var_134_2)), &var_90)
    var_128 = fconvert.s(float.t(var_120))
    long double x87_r6_4 = fconvert.t(var_128)
    var_50 = fconvert.s(fconvert.t(var_50) + x87_r6_4)
    var_128 = fconvert.s(float.t(arg5))
    long double x87_r5_6 = fconvert.t(var_128)
    float var_4c
    float var_4c_1 = fconvert.s(fconvert.t(var_4c) + x87_r5_6)
    var_40 = fconvert.s(fconvert.t(var_40) + x87_r6_4)
    float var_3c
    float var_3c_1 = fconvert.s(fconvert.t(var_3c) + x87_r5_6)
    var_30 = fconvert.s(fconvert.t(var_30) + x87_r6_4)
    float var_2c
    float var_2c_1 = fconvert.s(fconvert.t(var_2c) + x87_r5_6)
    var_20 = fconvert.s(x87_r6_4 + fconvert.t(var_20))
    float var_1c
    float var_1c_1 = fconvert.s(x87_r5_6 + fconvert.t(var_1c))
    long double x87_r7_34 = fconvert.t(var_30)
    int32_t eax_17 = sub_70c710(x87_r7_34)
    long double x87_r6_12 = fconvert.t(var_50)
    eax_4 = sub_70c710(x87_r6_12)
    long double x87_r5_18 = fconvert.t(var_20)
    long double x87_r4_6 = fconvert.t(var_2c_1)
    long double x87_r3_4 = fconvert.t(var_40)
    long double x87_r2_6 = fconvert.t(var_4c_1)
    char var_139_1
    
    if (eax_4 != eax_17)
        var_139_1 = 1
    else
        int32_t eax_18 = sub_70c710(x87_r5_18)
        
        if (sub_70c710(x87_r3_4) != eax_18)
            var_139_1 = 1
        else
            int32_t eax_19 = sub_70c710(fconvert.t(var_3c_1))
            
            if (sub_70c710(x87_r2_6) != eax_19)
                var_139_1 = 1
            else
                int32_t eax_20 = sub_70c710(fconvert.t(var_1c_1))
                var_139_1 = 0
                
                if (sub_70c710(x87_r4_6) != eax_20)
                    var_139_1 = 1
    
    float var_10c = fconvert.s(x87_r6_12)
    var_11c = fconvert.s(x87_r2_6)
    var_130 = fconvert.s(x87_r3_4)
    var_120 = fconvert.s(fconvert.t(var_3c_1))
    var_138 = fconvert.s(x87_r7_34)
    float var_104 = fconvert.s(x87_r4_6)
    var_12c = fconvert.s(x87_r5_18)
    float var_108 = fconvert.s(fconvert.t(var_1c_1))
    double var_b0_1 = fconvert.d(x87_r4_6)
    double var_c8_1 = fconvert.d(x87_r2_6)
    float var_d4_1 = fconvert.s(x87_r4_6 - x87_r2_6)
    double var_f0 = fconvert.d(x87_r6_12)
    var_128.q = fconvert.d(x87_r7_34)
    float var_d0_1 = fconvert.s(x87_r6_12 - x87_r7_34)
    float var_cc_1 = fconvert.s(x87_r2_6 * x87_r7_34 - x87_r4_6 * x87_r6_12)
    long double x87_r2_14 = fconvert.t(var_3c_1)
    var_b8.q = fconvert.d(x87_r2_14)
    var_100 = fconvert.s(fconvert.t(var_c8_1) - x87_r2_14)
    int32_t var_e0
    var_e0.q = fconvert.d(x87_r3_4)
    float var_fc_2 = fconvert.s(x87_r3_4 - fconvert.t(var_f0))
    float var_f8_2 = fconvert.s(x87_r2_14 * x87_r6_12 - x87_r3_4 * fconvert.t(var_4c_1))
    long double x87_r2_17 = fconvert.t(var_1c_1)
    double var_c8_2 = fconvert.d(x87_r2_17)
    var_b0_1.d = fconvert.s(x87_r2_17 - fconvert.t(var_b0_1))
    var_f0 = fconvert.d(x87_r5_18)
    var_b0_1:4.d = fconvert.s(fconvert.t(var_128.q) - x87_r5_18)
    float var_a8_1 = fconvert.s(x87_r5_18 * x87_r4_6 - x87_r2_17 * x87_r7_34)
    var_c8_2.d = fconvert.s(fconvert.t(var_b8.q) - fconvert.t(var_c8_2))
    var_c8_2:4.d = fconvert.s(fconvert.t(var_f0) - fconvert.t(var_e0.q))
    float var_c0_1 = fconvert.s(fconvert.t(var_1c_1) * x87_r3_4 - x87_r5_18 * fconvert.t(var_3c_1))
    var_128 = fconvert.s(fconvert.t(var_fc_2) * x87_r4_6 + fconvert.t(var_100) * x87_r7_34
        + fconvert.t(var_f8_2))
    long double x87_r2_35 = fconvert.t(var_128)
    long double x87_r1_44 = fconvert.t(9.9999997473787516e-05)
    x87_r1_44 - x87_r2_35
    eax_4.w = (x87_r1_44 < x87_r2_35 ? 1 : 0) << 8
        | (is_unordered.t(x87_r1_44, x87_r2_35) ? 1 : 0) << 0xa
        | (x87_r1_44 == x87_r2_35 ? 1 : 0) << 0xe | 0x800
    
    if ((eax_4:1.b & 0x41) != 0)
        long double x87_r0_17 = fconvert.t(fconvert.s(fconvert.t(var_c8_2:4.d) * x87_r4_6
            + fconvert.t(var_c8_2.d) * x87_r7_34 + fconvert.t(var_c0_1)))
        x87_r0_17 - x87_r1_44
        eax_4.w = (x87_r0_17 < x87_r1_44 ? 1 : 0) << 8
            | (is_unordered.t(x87_r0_17, x87_r1_44) ? 1 : 0) << 0xa
            | (x87_r0_17 == x87_r1_44 ? 1 : 0) << 0xe | 0x1000
        bool p_8 = unimplemented  {test ah, 0x5}
        
        if (not(p_8))
            goto label_5f8603
        
        long double x87_r1_45 = float.t(1)
        var_128 = fconvert.s(x87_r1_45 / x87_r1_45)
        long double x87_r1_46 = fconvert.t(var_128)
        var_a0 = fconvert.s(fconvert.t(var_d4_1) * x87_r1_46)
        float var_9c_1 = fconvert.s(fconvert.t(var_d0_1) * x87_r1_46)
        float var_98_1 = fconvert.s(fconvert.t(var_cc_1) * x87_r1_46)
        float var_118_1 = fconvert.s(fconvert.t(var_100) * x87_r1_46)
        float var_114_1 = fconvert.s(fconvert.t(var_fc_2) * x87_r1_46)
        float var_110_1 = fconvert.s(x87_r1_46 * fconvert.t(var_f8_2))
        long double x87_r2_41 = float.t(0)
        float var_d4_2 = fconvert.s(x87_r2_41)
        float var_d0_2 = fconvert.s(x87_r2_41)
        float var_cc_2 = fconvert.s(x87_r2_41)
        var_100 = fconvert.s(x87_r2_41)
        float var_fc_3 = fconvert.s(x87_r2_41)
        float var_f8_3 = fconvert.s(x87_r2_41)
        
        if (var_139_1 != 0)
            long double x87_r0_19 = float.t(1)
            float var_134_3 = fconvert.s(x87_r0_19 / x87_r0_19)
            var_f0.d = fconvert.s(fconvert.t(var_b0_1.d) * fconvert.t(var_134_3))
            var_d4_2 = var_f0.d
            var_f0:4.d = fconvert.s(fconvert.t(var_b0_1:4.d) * fconvert.t(var_134_3))
            var_d0_2 = var_f0:4.d
            var_cc_2 = fconvert.s(fconvert.t(var_a8_1) * fconvert.t(var_134_3))
            var_f0.d = fconvert.s(fconvert.t(var_c8_2.d) * fconvert.t(var_134_3))
            var_100 = var_f0.d
            var_f0:4.d = fconvert.s(fconvert.t(var_c8_2:4.d) * fconvert.t(var_134_3))
            var_fc_3 = var_f0:4.d
            var_f8_3 = fconvert.s(fconvert.t(var_c0_1) * fconvert.t(var_134_3))
        
        float* edx_12 = &var_12c
        x87_r5_18 - x87_r7_34
        eax_4.w = (x87_r5_18 < x87_r7_34 ? 1 : 0) << 8
            | (is_unordered.t(x87_r5_18, x87_r7_34) ? 1 : 0) << 0xa
            | (x87_r5_18 == x87_r7_34 ? 1 : 0) << 0xe | 0x1000
        bool p_9 = unimplemented  {test ah, 0x5}
        
        if (p_9)
            edx_12 = &var_138
        
        float* ecx_11 = &var_130
        x87_r3_4 - x87_r6_12
        eax_4.w = (x87_r3_4 < x87_r6_12 ? 1 : 0) << 8
            | (is_unordered.t(x87_r3_4, x87_r6_12) ? 1 : 0) << 0xa
            | (x87_r3_4 == x87_r6_12 ? 1 : 0) << 0xe | 0x1000
        bool p_10 = unimplemented  {test ah, 0x5}
        
        if (p_10)
            ecx_11 = &var_10c
        
        long double x87_r1_70 = fconvert.t(*edx_12)
        long double x87_r0_20 = fconvert.t(*ecx_11)
        x87_r0_20 - x87_r1_70
        eax_4.w = (x87_r0_20 < x87_r1_70 ? 1 : 0) << 8
            | (is_unordered.t(x87_r0_20, x87_r1_70) ? 1 : 0) << 0xa
            | (x87_r0_20 == x87_r1_70 ? 1 : 0) << 0xe | 0x1000
        float* eax_22 = edx_12
        
        if ((eax_4:1.b & 0x41) != 0)
            eax_22 = ecx_11
        
        x87_r7_34 - x87_r5_18
        int32_t edi_5 = sub_70c710(fconvert.t(*eax_22))
        float* edx_13 = &var_12c
        int32_t eax_23
        eax_23.w = (x87_r7_34 < x87_r5_18 ? 1 : 0) << 8
            | (is_unordered.t(x87_r7_34, x87_r5_18) ? 1 : 0) << 0xa
            | (x87_r7_34 == x87_r5_18 ? 1 : 0) << 0xe | 0x1800
        bool p_11 = unimplemented  {test ah, 0x5}
        
        if (p_11)
            edx_13 = &var_138
        
        x87_r3_4 - x87_r6_12
        float* ecx_12 = &var_130
        eax_23.w = (x87_r3_4 < x87_r6_12 ? 1 : 0) << 8
            | (is_unordered.t(x87_r3_4, x87_r6_12) ? 1 : 0) << 0xa
            | (x87_r3_4 == x87_r6_12 ? 1 : 0) << 0xe | 0x2800
        
        if ((eax_23:1.b & 0x41) != 0)
            ecx_12 = &var_10c
        
        long double x87_r5_20 = fconvert.t(*ecx_12)
        long double x87_r4_9 = fconvert.t(*edx_13)
        x87_r4_9 - x87_r5_20
        eax_23.w = (x87_r4_9 < x87_r5_20 ? 1 : 0) << 8
            | (is_unordered.t(x87_r4_9, x87_r5_20) ? 1 : 0) << 0xa
            | (x87_r4_9 == x87_r5_20 ? 1 : 0) << 0xe | 0x3000
        float* eax_24 = edx_13
        
        if ((eax_23:1.b & 0x41) != 0)
            eax_24 = ecx_12
        
        long double x87_r5_22 = fconvert.t(var_1c_1)
        x87_r5_22 - x87_r6_12
        int32_t esi_12 = sub_70c710(fconvert.t(*eax_24))
        float* edx_14 = &var_108
        int32_t eax_25
        eax_25.w = (x87_r5_22 < x87_r6_12 ? 1 : 0) << 8
            | (is_unordered.t(x87_r5_22, x87_r6_12) ? 1 : 0) << 0xa
            | (x87_r5_22 == x87_r6_12 ? 1 : 0) << 0xe | 0x2800
        bool p_12 = unimplemented  {test ah, 0x5}
        
        if (p_12)
            edx_14 = &var_104
        
        long double x87_r4_10 = fconvert.t(var_3c_1)
        int32_t* ecx_13 = &var_120
        long double x87_r3_12 = fconvert.t(var_4c_1)
        x87_r3_12 - x87_r4_10
        eax_25.w = (x87_r3_12 < x87_r4_10 ? 1 : 0) << 8
            | (is_unordered.t(x87_r3_12, x87_r4_10) ? 1 : 0) << 0xa
            | (x87_r3_12 == x87_r4_10 ? 1 : 0) << 0xe | 0x1800
        
        if ((eax_25:1.b & 0x41) != 0)
            ecx_13 = &var_11c
        
        long double x87_r2_45 = fconvert.t(*edx_14)
        long double x87_r1_72 = fconvert.t(*ecx_13)
        x87_r1_72 - x87_r2_45
        eax_25.w = (x87_r1_72 < x87_r2_45 ? 1 : 0) << 8
            | (is_unordered.t(x87_r1_72, x87_r2_45) ? 1 : 0) << 0xa
            | (x87_r1_72 == x87_r2_45 ? 1 : 0) << 0xe | 0x1800
        float* eax_26 = edx_14
        
        if ((eax_25:1.b & 0x41) != 0)
            eax_26 = ecx_13
        
        x87_r6_12 - x87_r5_22
        int32_t ebx_2 = sub_70c710(fconvert.t(*eax_26))
        var_10c = ebx_2
        float* edx_15 = &var_108
        int32_t eax_27
        eax_27.w = (x87_r6_12 < x87_r5_22 ? 1 : 0) << 8
            | (is_unordered.t(x87_r6_12, x87_r5_22) ? 1 : 0) << 0xa
            | (x87_r6_12 == x87_r5_22 ? 1 : 0) << 0xe | 0x2000
        bool p_13 = unimplemented  {test ah, 0x5}
        
        if (p_13)
            edx_15 = &var_104
        
        x87_r5_22 - x87_r4_10
        int32_t* ecx_14 = &var_120
        eax_27.w = (x87_r5_22 < x87_r4_10 ? 1 : 0) << 8
            | (is_unordered.t(x87_r5_22, x87_r4_10) ? 1 : 0) << 0xa
            | (x87_r5_22 == x87_r4_10 ? 1 : 0) << 0xe | 0x3800
        
        if ((eax_27:1.b & 0x41) != 0)
            ecx_14 = &var_11c
        
        long double x87_r6_17 = fconvert.t(*ecx_14)
        long double x87_r5_23 = fconvert.t(*edx_15)
        x87_r5_23 - x87_r6_17
        eax_27.w = (x87_r5_23 < x87_r6_17 ? 1 : 0) << 8
            | (is_unordered.t(x87_r5_23, x87_r6_17) ? 1 : 0) << 0xa
            | (x87_r5_23 == x87_r6_17 ? 1 : 0) << 0xe | 0x3800
        float* eax_28 = edx_15
        
        if ((eax_27:1.b & 0x41) != 0)
            eax_28 = ecx_14
        
        int32_t esi_13 = esi_12 - edi_5
        var_c8_2.d = esi_13
        var_f0.d = edi_5
        var_f0:4.d = ebx_2
        int32_t var_e8_3 = esi_13
        int32_t var_e4_1 = sub_70c710(fconvert.t(*eax_28)) - ebx_2
        
        if (sub_5f7e30(&var_f0, arg2, arg3).b == 0)
            x87_r0_26 = x87_r4_6
        else
            eax_4.b = var_139_1
            var_b8 = fconvert.s(x87_r4_6)
            var_128 = fconvert.s(x87_r4_6)
            
            if (eax_4.b != 0)
                var_b8 = fconvert.s(fconvert.t(var_d4_2))
                var_128 = fconvert.s(fconvert.t(var_100))
            
            var_11c = fconvert.s(x87_r4_6)
            var_108 = fconvert.s(x87_r4_6)
            long double x87_r6_21 = fconvert.t(var_d0_2)
            long double x87_r5_24 = fconvert.t(var_fc_3)
            
            if (eax_4.b != 0)
                var_11c = fconvert.s(x87_r6_21)
                var_108 = fconvert.s(x87_r5_24)
            
            var_120 = fconvert.s(float.t(var_10c))
            long double x87_r4_12 = fconvert.t(var_120)
            long double x87_r2_47 = fconvert.t(var_9c_1)
            var_138 = fconvert.s(x87_r4_12 * x87_r2_47 + fconvert.t(var_98_1))
            long double x87_r1_75 = fconvert.t(var_114_1)
            var_f0.d = fconvert.s(x87_r4_12 * x87_r1_75 + fconvert.t(var_110_1))
            long double x87_r7_38 = x87_r1_75
            var_104 = fconvert.s(x87_r4_6)
            float var_e0_2 = fconvert.s(x87_r4_6)
            long double x87_r5_29
            long double x87_r6_26
            
            if (eax_4.b == 0)
                x87_r5_29 = x87_r4_6
                x87_r7_38 = x87_r2_47
                x87_r6_26 = x87_r4_12
            else
                var_104 = fconvert.s(x87_r6_21 * x87_r4_12 + fconvert.t(var_cc_2))
                var_e0_2 = fconvert.s(x87_r5_24 * x87_r4_12 + fconvert.t(var_f8_3))
                x87_r5_29 = x87_r4_6
                x87_r6_26 = x87_r2_47
            
            var_120 = fconvert.s(float.t(edi_5))
            long double x87_r4_16 = fconvert.t(var_120)
            long double x87_r2_55 = fconvert.t(var_a0)
            var_12c = fconvert.s(x87_r4_16 * x87_r2_55)
            var_b0_1.d = fconvert.s(x87_r4_16 * fconvert.t(var_118_1))
            long double x87_r5_30 = x87_r2_55
            var_120 = fconvert.s(x87_r5_29)
            var_10c = fconvert.s(x87_r5_29)
            
            if (eax_4.b == 0)
                x87_r5_30 = x87_r5_29
            else
                var_120 = fconvert.s(x87_r4_16 * fconvert.t(var_d4_2))
                long double x87_r4_17 = x87_r4_16 * fconvert.t(var_100)
                x87_r4_16 = x87_r5_29
                var_10c = fconvert.s(x87_r4_17)
            
            long double x87_r3_26 = fconvert.t(fconvert.s(float.t(arg3 - ebx_2)))
            long double x87_r6_29 = x87_r3_26
            var_130 = fconvert.s(x87_r6_26 * x87_r3_26 + fconvert.t(var_12c) + fconvert.t(var_138))
            var_138 =
                fconvert.s(x87_r7_38 * x87_r6_29 + fconvert.t(var_b0_1.d) + fconvert.t(var_f0.d))
            long double x87_r7_42 = x87_r5_30
            var_12c = fconvert.s(x87_r4_16)
            float var_134_7 = fconvert.s(x87_r4_16)
            
            if (eax_4.b == 0)
                x87_r7_42 = x87_r4_16
            else
                var_12c = fconvert.s(x87_r6_29 * fconvert.t(var_11c) + fconvert.t(var_120)
                    + fconvert.t(var_104))
                long double x87_r6_31 =
                    x87_r6_29 * fconvert.t(var_108) + fconvert.t(var_10c) + fconvert.t(var_e0_2)
                x87_r6_29 = x87_r4_16
                var_134_7 = fconvert.s(x87_r6_31)
            
            int32_t esi_16 = var_c8_2.d
            long double x87_r5_33 = fconvert.t(var_b8)
            long double x87_r4_25 = fconvert.t(var_128)
            int32_t ecx_15 = 0
            long double x87_r3_33 = fconvert.t(var_12c)
            long double x87_r2_65 = fconvert.t(var_134_7)
            long double x87_r2_68
            long double x87_r4_27
            long double x87_r6_32
            
            if (esi_16 s>= 8)
                while (true)
                    if (eax_4.b == 0)
                        goto label_5f8af2
                    
                    long double temp1_1 = fconvert.t(var_130)
                    x87_r6_29 - temp1_1
                    eax_4.w = (x87_r6_29 < temp1_1 ? 1 : 0) << 8
                        | (is_unordered.t(x87_r6_29, temp1_1) ? 1 : 0) << 0xa
                        | (x87_r6_29 == temp1_1 ? 1 : 0) << 0xe | 0x1000
                    long double x87_r2_79
                    long double x87_r3_39
                    long double x87_r3_44
                    long double x87_r4_31
                    
                    if ((eax_4:1.b & 0x41) != 0)
                        long double temp2_1 = fconvert.t(var_138)
                        x87_r6_29 - temp2_1
                        eax_4.w = (x87_r6_29 < temp2_1 ? 1 : 0) << 8
                            | (is_unordered.t(x87_r6_29, temp2_1) ? 1 : 0) << 0xa
                            | (x87_r6_29 == temp2_1 ? 1 : 0) << 0xe | 0x1000
                        
                        if ((eax_4:1.b & 0x41) == 0)
                            goto label_5f8ac7
                        
                        x87_r6_29 - x87_r3_33
                        eax_4.w = (x87_r6_29 < x87_r3_33 ? 1 : 0) << 8
                            | (is_unordered.t(x87_r6_29, x87_r3_33) ? 1 : 0) << 0xa
                            | (x87_r6_29 == x87_r3_33 ? 1 : 0) << 0xe | 0x1000
                        
                        if ((eax_4:1.b & 0x41) == 0)
                            goto label_5f8ac7
                        
                        x87_r6_29 - x87_r2_65
                        eax_4.w = (x87_r6_29 < x87_r2_65 ? 1 : 0) << 8
                            | (is_unordered.t(x87_r6_29, x87_r2_65) ? 1 : 0) << 0xa
                            | (x87_r6_29 == x87_r2_65 ? 1 : 0) << 0xe | 0x1000
                        
                        if ((eax_4:1.b & 0x41) == 0)
                            goto label_5f8ac7
                        
                        eax_4.b = var_139_1
                    label_5f8af2:
                        
                        if (ecx_15 + edi_5 == arg2)
                            goto label_5f9041
                        
                        var_130 = fconvert.s(fconvert.t(var_130) + x87_r7_42)
                        var_138 = fconvert.s(fconvert.t(var_138) + fconvert.t(var_118_1))
                        
                        if (eax_4.b != 0)
                            var_12c = fconvert.s(x87_r3_33 + x87_r5_33)
                            x87_r3_39 = x87_r2_65 + x87_r4_25
                            goto label_5f8b24
                        
                        x87_r4_31 = x87_r2_65
                        x87_r2_79 = x87_r6_29
                        x87_r6_32 = x87_r4_25
                    label_5f8b8c:
                        
                        if (ecx_15 + edi_5 + 1 == arg2)
                            ecx_15 += 1
                            x87_r7_42 = x87_r3_33
                            goto label_5f9041
                        
                        var_130 = fconvert.s(fconvert.t(var_130) + x87_r7_42)
                        var_138 = fconvert.s(fconvert.t(var_138) + fconvert.t(var_118_1))
                        
                        if (eax_4.b == 0)
                            goto label_5f8c22
                        
                        var_12c = fconvert.s(x87_r3_33 + x87_r5_33)
                        x87_r3_44 = x87_r4_31 + x87_r6_32
                        x87_r4_27 = x87_r2_79
                        goto label_5f8bc2
                    
                label_5f8ac7:
                    var_130 = fconvert.s(fconvert.t(var_130) + x87_r7_42)
                    var_138 = fconvert.s(fconvert.t(var_138) + fconvert.t(var_118_1))
                    var_12c = fconvert.s(x87_r3_33 + x87_r5_33)
                    x87_r3_39 = x87_r2_65 + x87_r4_25
                label_5f8b24:
                    x87_r4_27 = x87_r6_29
                    x87_r6_32 = x87_r4_25
                    long double temp3_1 = fconvert.t(var_130)
                    x87_r4_27 - temp3_1
                    eax_4.w = (x87_r4_27 < temp3_1 ? 1 : 0) << 8
                        | (is_unordered.t(x87_r4_27, temp3_1) ? 1 : 0) << 0xa
                        | (x87_r4_27 == temp3_1 ? 1 : 0) << 0xe | 0x2000
                    x87_r3_33 = fconvert.t(var_12c)
                    long double x87_r2_78 = fconvert.t(fconvert.s(x87_r3_39))
                    
                    if ((eax_4:1.b & 0x41) == 0)
                        goto label_5f8b60
                    
                    x87_r2_79 = x87_r4_27
                    x87_r4_31 = x87_r2_78
                    long double temp5_1 = fconvert.t(var_138)
                    x87_r2_79 - temp5_1
                    eax_4.w = (x87_r2_79 < temp5_1 ? 1 : 0) << 8
                        | (is_unordered.t(x87_r2_79, temp5_1) ? 1 : 0) << 0xa
                        | (x87_r2_79 == temp5_1 ? 1 : 0) << 0xe | 0x1000
                    
                    if ((eax_4:1.b & 0x41) != 0)
                        x87_r2_79 - x87_r3_33
                        eax_4.w = (x87_r2_79 < x87_r3_33 ? 1 : 0) << 8
                            | (is_unordered.t(x87_r2_79, x87_r3_33) ? 1 : 0) << 0xa
                            | (x87_r2_79 == x87_r3_33 ? 1 : 0) << 0xe | 0x1000
                        
                        if ((eax_4:1.b & 0x41) == 0)
                            goto label_5f8b58
                        
                        x87_r2_79 - x87_r4_31
                        eax_4.w = (x87_r2_79 < x87_r4_31 ? 1 : 0) << 8
                            | (is_unordered.t(x87_r2_79, x87_r4_31) ? 1 : 0) << 0xa
                            | (x87_r2_79 == x87_r4_31 ? 1 : 0) << 0xe | 0x1000
                        
                        if ((eax_4:1.b & 0x41) == 0)
                            goto label_5f8b58
                        
                        eax_4.b = var_139_1
                        goto label_5f8b8c
                    
                label_5f8b58:
                    x87_r2_78 = x87_r4_31
                    x87_r4_27 = x87_r2_79
                label_5f8b60:
                    var_130 = fconvert.s(fconvert.t(var_130) + x87_r7_42)
                    var_138 = fconvert.s(fconvert.t(var_138) + fconvert.t(var_118_1))
                    var_12c = fconvert.s(x87_r3_33 + x87_r5_33)
                    x87_r3_44 = x87_r2_78 + x87_r6_32
                label_5f8bc2:
                    long double temp7_1 = fconvert.t(var_130)
                    x87_r4_27 - temp7_1
                    eax_4.w = (x87_r4_27 < temp7_1 ? 1 : 0) << 8
                        | (is_unordered.t(x87_r4_27, temp7_1) ? 1 : 0) << 0xa
                        | (x87_r4_27 == temp7_1 ? 1 : 0) << 0xe | 0x2000
                    x87_r3_33 = fconvert.t(var_12c)
                    long double x87_r2_84 = fconvert.t(fconvert.s(x87_r3_44))
                    
                    if ((eax_4:1.b & 0x41) == 0)
                        goto label_5f8bfc
                    
                    x87_r2_79 = x87_r4_27
                    x87_r4_31 = x87_r2_84
                    long double temp8_1 = fconvert.t(var_138)
                    x87_r2_79 - temp8_1
                    eax_4.w = (x87_r2_79 < temp8_1 ? 1 : 0) << 8
                        | (is_unordered.t(x87_r2_79, temp8_1) ? 1 : 0) << 0xa
                        | (x87_r2_79 == temp8_1 ? 1 : 0) << 0xe | 0x1000
                    long double x87_r3_49
                    
                    if ((eax_4:1.b & 0x41) != 0)
                        x87_r2_79 - x87_r3_33
                        eax_4.w = (x87_r2_79 < x87_r3_33 ? 1 : 0) << 8
                            | (is_unordered.t(x87_r2_79, x87_r3_33) ? 1 : 0) << 0xa
                            | (x87_r2_79 == x87_r3_33 ? 1 : 0) << 0xe | 0x1000
                        
                        if ((eax_4:1.b & 0x41) == 0)
                            goto label_5f8bf4
                        
                        x87_r2_79 - x87_r4_31
                        eax_4.w = (x87_r2_79 < x87_r4_31 ? 1 : 0) << 8
                            | (is_unordered.t(x87_r2_79, x87_r4_31) ? 1 : 0) << 0xa
                            | (x87_r2_79 == x87_r4_31 ? 1 : 0) << 0xe | 0x1000
                        
                        if ((eax_4:1.b & 0x41) == 0)
                            goto label_5f8bf4
                        
                        eax_4.b = var_139_1
                    label_5f8c22:
                        
                        if (ecx_15 + edi_5 + 2 == arg2)
                            ecx_15 += 2
                            x87_r7_42 = x87_r3_33
                            goto label_5f9041
                        
                        var_130 = fconvert.s(fconvert.t(var_130) + x87_r7_42)
                        var_138 = fconvert.s(fconvert.t(var_138) + fconvert.t(var_118_1))
                        
                        if (eax_4.b == 0)
                            goto label_5f8cb8
                        
                        var_12c = fconvert.s(x87_r3_33 + x87_r5_33)
                        x87_r3_49 = x87_r4_31 + x87_r6_32
                        x87_r4_27 = x87_r2_79
                        goto label_5f8c58
                    
                label_5f8bf4:
                    x87_r2_84 = x87_r4_31
                    x87_r4_27 = x87_r2_79
                label_5f8bfc:
                    var_130 = fconvert.s(fconvert.t(var_130) + x87_r7_42)
                    var_138 = fconvert.s(fconvert.t(var_138) + fconvert.t(var_118_1))
                    var_12c = fconvert.s(x87_r3_33 + x87_r5_33)
                    x87_r3_49 = x87_r2_84 + x87_r6_32
                label_5f8c58:
                    long double temp9_1 = fconvert.t(var_130)
                    x87_r4_27 - temp9_1
                    eax_4.w = (x87_r4_27 < temp9_1 ? 1 : 0) << 8
                        | (is_unordered.t(x87_r4_27, temp9_1) ? 1 : 0) << 0xa
                        | (x87_r4_27 == temp9_1 ? 1 : 0) << 0xe | 0x2000
                    x87_r3_33 = fconvert.t(var_12c)
                    long double x87_r2_88 = fconvert.t(fconvert.s(x87_r3_49))
                    
                    if ((eax_4:1.b & 0x41) == 0)
                        goto label_5f8c92
                    
                    x87_r2_79 = x87_r4_27
                    x87_r4_31 = x87_r2_88
                    long double temp10_1 = fconvert.t(var_138)
                    x87_r2_79 - temp10_1
                    eax_4.w = (x87_r2_79 < temp10_1 ? 1 : 0) << 8
                        | (is_unordered.t(x87_r2_79, temp10_1) ? 1 : 0) << 0xa
                        | (x87_r2_79 == temp10_1 ? 1 : 0) << 0xe | 0x1000
                    long double x87_r3_54
                    
                    if ((eax_4:1.b & 0x41) != 0)
                        x87_r2_79 - x87_r3_33
                        eax_4.w = (x87_r2_79 < x87_r3_33 ? 1 : 0) << 8
                            | (is_unordered.t(x87_r2_79, x87_r3_33) ? 1 : 0) << 0xa
                            | (x87_r2_79 == x87_r3_33 ? 1 : 0) << 0xe | 0x1000
                        
                        if ((eax_4:1.b & 0x41) == 0)
                            goto label_5f8c8a
                        
                        x87_r2_79 - x87_r4_31
                        eax_4.w = (x87_r2_79 < x87_r4_31 ? 1 : 0) << 8
                            | (is_unordered.t(x87_r2_79, x87_r4_31) ? 1 : 0) << 0xa
                            | (x87_r2_79 == x87_r4_31 ? 1 : 0) << 0xe | 0x1000
                        
                        if ((eax_4:1.b & 0x41) == 0)
                            goto label_5f8c8a
                        
                        eax_4.b = var_139_1
                    label_5f8cb8:
                        
                        if (ecx_15 + edi_5 + 3 == arg2)
                            ecx_15 += 3
                            x87_r7_42 = x87_r3_33
                            goto label_5f9041
                        
                        var_130 = fconvert.s(fconvert.t(var_130) + x87_r7_42)
                        var_138 = fconvert.s(fconvert.t(var_138) + fconvert.t(var_118_1))
                        
                        if (eax_4.b == 0)
                            goto label_5f8d4e
                        
                        var_12c = fconvert.s(x87_r3_33 + x87_r5_33)
                        x87_r3_54 = x87_r4_31 + x87_r6_32
                        x87_r4_27 = x87_r2_79
                        goto label_5f8cee
                    
                label_5f8c8a:
                    x87_r2_88 = x87_r4_31
                    x87_r4_27 = x87_r2_79
                label_5f8c92:
                    var_130 = fconvert.s(fconvert.t(var_130) + x87_r7_42)
                    var_138 = fconvert.s(fconvert.t(var_138) + fconvert.t(var_118_1))
                    var_12c = fconvert.s(x87_r3_33 + x87_r5_33)
                    x87_r3_54 = x87_r2_88 + x87_r6_32
                label_5f8cee:
                    long double temp11_1 = fconvert.t(var_130)
                    x87_r4_27 - temp11_1
                    eax_4.w = (x87_r4_27 < temp11_1 ? 1 : 0) << 8
                        | (is_unordered.t(x87_r4_27, temp11_1) ? 1 : 0) << 0xa
                        | (x87_r4_27 == temp11_1 ? 1 : 0) << 0xe | 0x2000
                    x87_r3_33 = fconvert.t(var_12c)
                    long double x87_r2_92 = fconvert.t(fconvert.s(x87_r3_54))
                    
                    if ((eax_4:1.b & 0x41) == 0)
                        goto label_5f8d28
                    
                    x87_r2_79 = x87_r4_27
                    x87_r4_31 = x87_r2_92
                    long double temp12_1 = fconvert.t(var_138)
                    x87_r2_79 - temp12_1
                    eax_4.w = (x87_r2_79 < temp12_1 ? 1 : 0) << 8
                        | (is_unordered.t(x87_r2_79, temp12_1) ? 1 : 0) << 0xa
                        | (x87_r2_79 == temp12_1 ? 1 : 0) << 0xe | 0x1000
                    long double x87_r3_59
                    
                    if ((eax_4:1.b & 0x41) != 0)
                        x87_r2_79 - x87_r3_33
                        eax_4.w = (x87_r2_79 < x87_r3_33 ? 1 : 0) << 8
                            | (is_unordered.t(x87_r2_79, x87_r3_33) ? 1 : 0) << 0xa
                            | (x87_r2_79 == x87_r3_33 ? 1 : 0) << 0xe | 0x1000
                        
                        if ((eax_4:1.b & 0x41) == 0)
                            goto label_5f8d20
                        
                        x87_r2_79 - x87_r4_31
                        eax_4.w = (x87_r2_79 < x87_r4_31 ? 1 : 0) << 8
                            | (is_unordered.t(x87_r2_79, x87_r4_31) ? 1 : 0) << 0xa
                            | (x87_r2_79 == x87_r4_31 ? 1 : 0) << 0xe | 0x1000
                        
                        if ((eax_4:1.b & 0x41) == 0)
                            goto label_5f8d20
                        
                        eax_4.b = var_139_1
                    label_5f8d4e:
                        
                        if (ecx_15 + edi_5 + 4 == arg2)
                            ecx_15 += 4
                            x87_r7_42 = x87_r3_33
                            goto label_5f9041
                        
                        var_130 = fconvert.s(fconvert.t(var_130) + x87_r7_42)
                        var_138 = fconvert.s(fconvert.t(var_138) + fconvert.t(var_118_1))
                        
                        if (eax_4.b == 0)
                            goto label_5f8de4
                        
                        var_12c = fconvert.s(x87_r3_33 + x87_r5_33)
                        x87_r3_59 = x87_r4_31 + x87_r6_32
                        x87_r4_27 = x87_r2_79
                        goto label_5f8d84
                    
                label_5f8d20:
                    x87_r2_92 = x87_r4_31
                    x87_r4_27 = x87_r2_79
                label_5f8d28:
                    var_130 = fconvert.s(fconvert.t(var_130) + x87_r7_42)
                    var_138 = fconvert.s(fconvert.t(var_138) + fconvert.t(var_118_1))
                    var_12c = fconvert.s(x87_r3_33 + x87_r5_33)
                    x87_r3_59 = x87_r2_92 + x87_r6_32
                label_5f8d84:
                    long double temp13_1 = fconvert.t(var_130)
                    x87_r4_27 - temp13_1
                    eax_4.w = (x87_r4_27 < temp13_1 ? 1 : 0) << 8
                        | (is_unordered.t(x87_r4_27, temp13_1) ? 1 : 0) << 0xa
                        | (x87_r4_27 == temp13_1 ? 1 : 0) << 0xe | 0x2000
                    x87_r3_33 = fconvert.t(var_12c)
                    long double x87_r2_96 = fconvert.t(fconvert.s(x87_r3_59))
                    
                    if ((eax_4:1.b & 0x41) == 0)
                        goto label_5f8dbe
                    
                    x87_r2_79 = x87_r4_27
                    x87_r4_31 = x87_r2_96
                    long double temp14_1 = fconvert.t(var_138)
                    x87_r2_79 - temp14_1
                    eax_4.w = (x87_r2_79 < temp14_1 ? 1 : 0) << 8
                        | (is_unordered.t(x87_r2_79, temp14_1) ? 1 : 0) << 0xa
                        | (x87_r2_79 == temp14_1 ? 1 : 0) << 0xe | 0x1000
                    long double x87_r3_64
                    
                    if ((eax_4:1.b & 0x41) != 0)
                        x87_r2_79 - x87_r3_33
                        eax_4.w = (x87_r2_79 < x87_r3_33 ? 1 : 0) << 8
                            | (is_unordered.t(x87_r2_79, x87_r3_33) ? 1 : 0) << 0xa
                            | (x87_r2_79 == x87_r3_33 ? 1 : 0) << 0xe | 0x1000
                        
                        if ((eax_4:1.b & 0x41) == 0)
                            goto label_5f8db6
                        
                        x87_r2_79 - x87_r4_31
                        eax_4.w = (x87_r2_79 < x87_r4_31 ? 1 : 0) << 8
                            | (is_unordered.t(x87_r2_79, x87_r4_31) ? 1 : 0) << 0xa
                            | (x87_r2_79 == x87_r4_31 ? 1 : 0) << 0xe | 0x1000
                        
                        if ((eax_4:1.b & 0x41) == 0)
                            goto label_5f8db6
                        
                        eax_4.b = var_139_1
                    label_5f8de4:
                        
                        if (ecx_15 + edi_5 + 5 == arg2)
                            ecx_15 += 5
                            x87_r7_42 = x87_r3_33
                            goto label_5f9041
                        
                        var_130 = fconvert.s(fconvert.t(var_130) + x87_r7_42)
                        var_138 = fconvert.s(fconvert.t(var_138) + fconvert.t(var_118_1))
                        
                        if (eax_4.b == 0)
                            goto label_5f8e7a
                        
                        var_12c = fconvert.s(x87_r3_33 + x87_r5_33)
                        x87_r3_64 = x87_r4_31 + x87_r6_32
                        x87_r4_27 = x87_r2_79
                        goto label_5f8e1a
                    
                label_5f8db6:
                    x87_r2_96 = x87_r4_31
                    x87_r4_27 = x87_r2_79
                label_5f8dbe:
                    var_130 = fconvert.s(fconvert.t(var_130) + x87_r7_42)
                    var_138 = fconvert.s(fconvert.t(var_138) + fconvert.t(var_118_1))
                    var_12c = fconvert.s(x87_r3_33 + x87_r5_33)
                    x87_r3_64 = x87_r2_96 + x87_r6_32
                label_5f8e1a:
                    long double temp15_1 = fconvert.t(var_130)
                    x87_r4_27 - temp15_1
                    eax_4.w = (x87_r4_27 < temp15_1 ? 1 : 0) << 8
                        | (is_unordered.t(x87_r4_27, temp15_1) ? 1 : 0) << 0xa
                        | (x87_r4_27 == temp15_1 ? 1 : 0) << 0xe | 0x2000
                    x87_r3_33 = fconvert.t(var_12c)
                    long double x87_r2_100 = fconvert.t(fconvert.s(x87_r3_64))
                    
                    if ((eax_4:1.b & 0x41) == 0)
                        goto label_5f8e54
                    
                    x87_r2_79 = x87_r4_27
                    x87_r4_31 = x87_r2_100
                    long double temp16_1 = fconvert.t(var_138)
                    x87_r2_79 - temp16_1
                    eax_4.w = (x87_r2_79 < temp16_1 ? 1 : 0) << 8
                        | (is_unordered.t(x87_r2_79, temp16_1) ? 1 : 0) << 0xa
                        | (x87_r2_79 == temp16_1 ? 1 : 0) << 0xe | 0x1000
                    long double x87_r3_69
                    
                    if ((eax_4:1.b & 0x41) != 0)
                        x87_r2_79 - x87_r3_33
                        eax_4.w = (x87_r2_79 < x87_r3_33 ? 1 : 0) << 8
                            | (is_unordered.t(x87_r2_79, x87_r3_33) ? 1 : 0) << 0xa
                            | (x87_r2_79 == x87_r3_33 ? 1 : 0) << 0xe | 0x1000
                        
                        if ((eax_4:1.b & 0x41) == 0)
                            goto label_5f8e4c
                        
                        x87_r2_79 - x87_r4_31
                        eax_4.w = (x87_r2_79 < x87_r4_31 ? 1 : 0) << 8
                            | (is_unordered.t(x87_r2_79, x87_r4_31) ? 1 : 0) << 0xa
                            | (x87_r2_79 == x87_r4_31 ? 1 : 0) << 0xe | 0x1000
                        
                        if ((eax_4:1.b & 0x41) == 0)
                            goto label_5f8e4c
                        
                        eax_4.b = var_139_1
                    label_5f8e7a:
                        
                        if (ecx_15 + edi_5 + 6 == arg2)
                            ecx_15 += 6
                            x87_r7_42 = x87_r3_33
                            goto label_5f9041
                        
                        var_130 = fconvert.s(fconvert.t(var_130) + x87_r7_42)
                        var_138 = fconvert.s(fconvert.t(var_138) + fconvert.t(var_118_1))
                        
                        if (eax_4.b == 0)
                            goto label_5f8f24
                        
                        var_12c = fconvert.s(x87_r3_33 + x87_r5_33)
                        x87_r3_69 = x87_r4_31 + x87_r6_32
                        x87_r4_27 = x87_r2_79
                        goto label_5f8eb4
                    
                label_5f8e4c:
                    x87_r2_100 = x87_r4_31
                    x87_r4_27 = x87_r2_79
                label_5f8e54:
                    var_130 = fconvert.s(fconvert.t(var_130) + x87_r7_42)
                    var_138 = fconvert.s(fconvert.t(var_138) + fconvert.t(var_118_1))
                    var_12c = fconvert.s(x87_r3_33 + x87_r5_33)
                    x87_r3_69 = x87_r2_100 + x87_r6_32
                label_5f8eb4:
                    long double temp17_1 = fconvert.t(var_130)
                    x87_r4_27 - temp17_1
                    eax_4.w = (x87_r4_27 < temp17_1 ? 1 : 0) << 8
                        | (is_unordered.t(x87_r4_27, temp17_1) ? 1 : 0) << 0xa
                        | (x87_r4_27 == temp17_1 ? 1 : 0) << 0xe | 0x2000
                    x87_r3_33 = fconvert.t(var_12c)
                    long double x87_r2_104 = fconvert.t(fconvert.s(x87_r3_69))
                    
                    if ((eax_4:1.b & 0x41) == 0)
                        goto label_5f8eec
                    
                    x87_r2_79 = x87_r4_27
                    x87_r4_31 = x87_r2_104
                    long double temp18_1 = fconvert.t(var_138)
                    x87_r2_79 - temp18_1
                    eax_4.w = (x87_r2_79 < temp18_1 ? 1 : 0) << 8
                        | (is_unordered.t(x87_r2_79, temp18_1) ? 1 : 0) << 0xa
                        | (x87_r2_79 == temp18_1 ? 1 : 0) << 0xe | 0x1000
                    
                    if ((eax_4:1.b & 0x41) == 0)
                    label_5f8ee6:
                        x87_r2_104 = x87_r4_31
                        x87_r4_27 = x87_r2_79
                    label_5f8eec:
                        eax_4.b = var_139_1
                        var_130 = fconvert.s(fconvert.t(var_130) + x87_r7_42)
                        var_138 = fconvert.s(fconvert.t(var_138) + fconvert.t(var_118_1))
                        var_12c = fconvert.s(x87_r3_33 + x87_r5_33)
                        x87_r3_33 = fconvert.t(var_12c)
                        x87_r2_68 = fconvert.t(fconvert.s(x87_r2_104 + x87_r6_32))
                    else
                        x87_r2_79 - x87_r3_33
                        eax_4.w = (x87_r2_79 < x87_r3_33 ? 1 : 0) << 8
                            | (is_unordered.t(x87_r2_79, x87_r3_33) ? 1 : 0) << 0xa
                            | (x87_r2_79 == x87_r3_33 ? 1 : 0) << 0xe | 0x1000
                        
                        if ((eax_4:1.b & 0x41) == 0)
                            goto label_5f8ee6
                        
                        x87_r2_79 - x87_r4_31
                        eax_4.w = (x87_r2_79 < x87_r4_31 ? 1 : 0) << 8
                            | (is_unordered.t(x87_r2_79, x87_r4_31) ? 1 : 0) << 0xa
                            | (x87_r2_79 == x87_r4_31 ? 1 : 0) << 0xe | 0x1000
                        
                        if ((eax_4:1.b & 0x41) == 0)
                            goto label_5f8ee6
                        
                        eax_4.b = var_139_1
                    label_5f8f24:
                        
                        if (ecx_15 + edi_5 + 7 == arg2)
                            ecx_15 += 7
                            x87_r7_42 = x87_r3_33
                            goto label_5f9041
                        
                        var_130 = fconvert.s(fconvert.t(var_130) + x87_r7_42)
                        var_138 = fconvert.s(fconvert.t(var_138) + fconvert.t(var_118_1))
                        
                        if (eax_4.b == 0)
                            x87_r2_68 = x87_r4_31
                            x87_r4_27 = x87_r2_79
                        else
                            var_12c = fconvert.s(x87_r3_33 + x87_r5_33)
                            x87_r4_27 = x87_r2_79
                            x87_r3_33 = fconvert.t(var_12c)
                            x87_r2_68 = fconvert.t(fconvert.s(x87_r4_31 + x87_r6_32))
                    
                    ecx_15 += 8
                    
                    if (ecx_15 s>= esi_16 - 7)
                        break
                    
                    x87_r6_29 = x87_r4_27
                    x87_r2_65 = x87_r2_68
                    x87_r4_25 = x87_r6_32
            else
                x87_r6_32 = x87_r4_25
                x87_r2_68 = x87_r2_65
                x87_r4_27 = x87_r6_29
            
            if (ecx_15 s>= esi_16)
            label_5f8fcb:
                x87_r0_26 = x87_r5_33
            else
                while (true)
                    if (eax_4.b == 0)
                        goto label_5f8f82
                    
                    long double temp4_1 = fconvert.t(var_130)
                    x87_r4_27 - temp4_1
                    eax_4.w = (x87_r4_27 < temp4_1 ? 1 : 0) << 8
                        | (is_unordered.t(x87_r4_27, temp4_1) ? 1 : 0) << 0xa
                        | (x87_r4_27 == temp4_1 ? 1 : 0) << 0xe | 0x1000
                    
                    if ((eax_4:1.b & 0x41) == 0)
                    label_5f8a62:
                        eax_4.b = var_139_1
                        var_130 = fconvert.s(fconvert.t(var_130) + x87_r7_42)
                        var_138 = fconvert.s(fconvert.t(var_138) + fconvert.t(var_118_1))
                        var_12c = fconvert.s(x87_r3_33 + x87_r5_33)
                        x87_r3_33 = fconvert.t(var_12c)
                        x87_r2_68 = fconvert.t(fconvert.s(x87_r2_68 + x87_r6_32))
                    else
                        long double temp6_1 = fconvert.t(var_138)
                        x87_r4_27 - temp6_1
                        eax_4.w = (x87_r4_27 < temp6_1 ? 1 : 0) << 8
                            | (is_unordered.t(x87_r4_27, temp6_1) ? 1 : 0) << 0xa
                            | (x87_r4_27 == temp6_1 ? 1 : 0) << 0xe | 0x1000
                        
                        if ((eax_4:1.b & 0x41) == 0)
                            goto label_5f8a62
                        
                        x87_r4_27 - x87_r3_33
                        eax_4.w = (x87_r4_27 < x87_r3_33 ? 1 : 0) << 8
                            | (is_unordered.t(x87_r4_27, x87_r3_33) ? 1 : 0) << 0xa
                            | (x87_r4_27 == x87_r3_33 ? 1 : 0) << 0xe | 0x1000
                        
                        if ((eax_4:1.b & 0x41) == 0)
                            goto label_5f8a62
                        
                        x87_r4_27 - x87_r2_68
                        eax_4.w = (x87_r4_27 < x87_r2_68 ? 1 : 0) << 8
                            | (is_unordered.t(x87_r4_27, x87_r2_68) ? 1 : 0) << 0xa
                            | (x87_r4_27 == x87_r2_68 ? 1 : 0) << 0xe | 0x1000
                        
                        if ((eax_4:1.b & 0x41) == 0)
                            goto label_5f8a62
                        
                        eax_4.b = var_139_1
                    label_5f8f82:
                        
                        if (ecx_15 + edi_5 == arg2)
                            x87_r7_42 = x87_r5_33
                            break
                        
                        var_130 = fconvert.s(fconvert.t(var_130) + x87_r7_42)
                        var_138 = fconvert.s(fconvert.t(var_138) + fconvert.t(var_118_1))
                        
                        if (eax_4.b != 0)
                            var_12c = fconvert.s(x87_r3_33 + x87_r5_33)
                            x87_r3_33 = fconvert.t(var_12c)
                            x87_r2_68 = fconvert.t(fconvert.s(x87_r2_68 + x87_r6_32))
                    
                    ecx_15 += 1
                    
                    if (ecx_15 s>= esi_16)
                        goto label_5f8fcb
                
            label_5f9041:
                x87_r0_26 = x87_r7_42
                
                if (esi_16 s> ecx_15)
                    eax_4.b = 1
                    sub_6b4885(eax_1 ^ &var_13c)
                    return x87_r0_26
    else
    label_5f8603:
        x87_r0_26 = x87_r7_34

eax_4.b = 0
sub_6b4885(eax_1 ^ &var_13c)
return x87_r0_26
