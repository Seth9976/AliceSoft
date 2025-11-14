// 函数: sub_5ff4c0
// 地址: 0x5ff4c0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

float var_10c
int32_t eax_1 = data_78c474 ^ &var_10c
float var_c0 = fconvert.s(fconvert.t(arg7))
float var_bc = fconvert.s(fconvert.t(arg8))
int32_t* ebx = *(arg1 i+ 0x2c)
float var_c4 = fconvert.s(fconvert.t(arg9))
void* eax_3 = arg1 i+ 0x2c
float var_f4 = arg1
void* var_f8 = eax_3

if (ebx != 0xffffffff)
    float eax_4 = *(eax_3 + 4)
    var_10c = eax_4
    int32_t esi_1
    
    if (eax_4 != 0)
        esi_1 = sub_5f9f90(ebx)
        eax_4 = var_10c
    else
        esi_1 = 0
    
    if (eax_4 != 0)
        eax_4 = sub_5f9f40(ebx)
    
    int32_t var_e8
    float (* edx_1)[0x11] = sub_5f7e90(arg1 i+ 0x40, &var_e8, eax_4, esi_1)
    long double x87_r7_3 = float.t(0)
    int32_t var_dc
    int32_t edi_1 = var_dc
    int32_t var_fc_1 = edi_1
    int32_t var_e4
    int32_t var_e0
    float var_b8
    int32_t* ecx_2
    
    if (var_e0 s<= 0 || var_dc s<= 0)
    label_5ff60a:
        ecx_2 = var_f8
        
        if (ecx_2[1] != 0)
            ecx_2 = ebx
            eax_3, edx_1 = sub_5f9e50(var_e8, var_e4, var_e0, 0)
    else
        edx_1 = var_f4
        long double temp1_1 = fconvert.t((*edx_1)[0xa])
        x87_r7_3 - temp1_1
        eax_3.w = (x87_r7_3 < temp1_1 ? 1 : 0) << 8
            | (is_unordered.t(x87_r7_3, temp1_1) ? 1 : 0) << 0xa
            | (x87_r7_3 == temp1_1 ? 1 : 0) << 0xe | 0x3800
        bool p_1 = unimplemented  {test ah, 0x5}
        
        if (p_1)
            goto label_5ff60a
        
        long double x87_r6_1 = fconvert.t((*edx_1)[9])
        void* edx_2 = &(*edx_1)[9]
        long double x87_r5_1 = fconvert.t((*edx_1)[0xa])
        x87_r5_1 - x87_r6_1
        eax_3.w = (x87_r5_1 < x87_r6_1 ? 1 : 0) << 8
            | (is_unordered.t(x87_r5_1, x87_r6_1) ? 1 : 0) << 0xa
            | (x87_r5_1 == x87_r6_1 ? 1 : 0) << 0xe | 0x3800
        bool p_2 = unimplemented  {test ah, 0x44}
        
        if (p_2)
            var_10c = fconvert.s(x87_r7_3)
            long double x87_r7_4 = fconvert.t(*edx_2)
            long double temp2_1 = fconvert.t(0.0)
            x87_r7_4 - temp2_1
            eax_3.w = (x87_r7_4 < temp2_1 ? 1 : 0) << 8
                | (is_unordered.t(x87_r7_4, temp2_1) ? 1 : 0) << 0xa
                | (x87_r7_4 == temp2_1 ? 1 : 0) << 0xe
            
            if ((eax_3:1.b & 0x41) != 0)
                edx_2 = &var_10c
            
            long double x87_r7_5 = fconvert.t((*edx_1)[0xa])
            long double x87_r6_2 = fconvert.t(*edx_2)
            x87_r6_2 - x87_r7_5
            eax_3.w = (x87_r6_2 < x87_r7_5 ? 1 : 0) << 8
                | (is_unordered.t(x87_r6_2, x87_r7_5) ? 1 : 0) << 0xa
                | (x87_r6_2 == x87_r7_5 ? 1 : 0) << 0xe
            float* eax_9 = &(*edx_1)[0xa]
            
            if ((eax_3:1.b & 0x41) != 0)
                eax_9 = edx_2
            
            edi_1 = sub_70c710(float.t(var_dc) * fconvert.t(*eax_9) / fconvert.t((*edx_1)[0xa]))
            var_b8 = var_e8
            ecx_2 = var_f8
            int32_t edx_5 = var_e4 - edi_1 + var_dc
            int32_t var_b0_1 = var_e0
            var_fc_1 = edi_1
            int32_t var_b4_1 = edx_5
            int32_t var_ac_1 = edi_1
            eax_3, edx_1 = sub_5e8270(&var_b8, edx_5, ecx_2)
        else
            ecx_2 = var_f8
            eax_3, edx_1 = sub_5e8270(&var_e8, edx_2, ecx_2)
    
    long double x87_r7_9 = fconvert.t(arg5)
    long double x87_r5_2 = float.t(1)
    x87_r5_2 - x87_r7_9
    eax_3.w = (x87_r5_2 < x87_r7_9 ? 1 : 0) << 8
        | (is_unordered.t(x87_r5_2, x87_r7_9) ? 1 : 0) << 0xa
        | (x87_r5_2 == x87_r7_9 ? 1 : 0) << 0xe | 0x2800
    long double x87_r5_3 = fconvert.t(arg6)
    long double x87_r4_2 = fconvert.t(var_c0)
    long double x87_r3_1 = fconvert.t(var_bc)
    bool p_3 = unimplemented  {test ah, 0x44}
    long double x87_r5_4
    
    if (p_3)
    label_5ff751:
        x87_r4_2 = x87_r3_1
    label_5ff753:
        x87_r5_4 = x87_r4_2
    label_5ff755:
        
        if (var_e0 s> 0 && var_dc s> 0)
            float var_d8 = fconvert.s(float.t(var_e8))
            float var_c8 = fconvert.s(float.t(var_dc))
            float var_fc_2 = fconvert.s(float.t(var_fc_1))
            long double x87_r3_4 = fconvert.t(var_fc_2)
            float var_d4 = fconvert.s(float.t(var_e4) + fconvert.t(var_c8) - x87_r3_4)
            var_10c = fconvert.s(float.t(var_e0))
            float var_f0 = fconvert.s(fconvert.t(var_10c))
            float var_104 = fconvert.s(x87_r3_4)
            long double x87_r4_10 = fconvert.t(var_d8)
            var_b8 = fconvert.s(x87_r4_10)
            long double x87_r3_8 = fconvert.t(var_d4)
            float var_b4_2 = fconvert.s(x87_r3_8)
            var_f0 = fconvert.s(fconvert.t(var_f0) + x87_r4_10)
            long double x87_r2_7 = fconvert.t(var_f0)
            float var_a0 = fconvert.s(x87_r2_7)
            float var_9c = fconvert.s(x87_r3_8)
            float var_98 = fconvert.s(x87_r4_10)
            var_104 = fconvert.s(x87_r3_8 + fconvert.t(var_104))
            long double x87_r3_11 = fconvert.t(var_104)
            float var_94 = fconvert.s(x87_r3_11)
            float var_a4 = fconvert.s(x87_r3_11)
            float var_a8 = fconvert.s(x87_r2_7)
            float var_90[0x10]
            sub_42e0d0(&var_90, fconvert.s(x87_r5_2), fconvert.s(x87_r5_4), fconvert.s(x87_r7_9))
            long double x87_r7_12 = fconvert.t(var_bc)
            long double x87_r5_7 = float.t(0)
            x87_r5_7 - x87_r7_12
            float* eax_21
            eax_21.w = (x87_r5_7 < x87_r7_12 ? 1 : 0) << 8
                | (is_unordered.t(x87_r5_7, x87_r7_12) ? 1 : 0) << 0xa
                | (x87_r5_7 == x87_r7_12 ? 1 : 0) << 0xe | 0x3800
            bool p_8 = unimplemented  {test ah, 0x44}
            float var_50[0x11]
            
            if (p_8)
                int32_t* var_11c_4 = ecx_2
                sub_5dcfd0(&var_50, fconvert.s(fneg(x87_r7_12)))
                edx_1 = &var_50
                ecx_2 = sub_42e150(&var_90, edx_1)
            
            long double x87_r7_15 = fconvert.t(var_c0)
            long double x87_r5_8 = float.t(0)
            x87_r5_8 - x87_r7_15
            eax_21.w = (x87_r5_8 < x87_r7_15 ? 1 : 0) << 8
                | (is_unordered.t(x87_r5_8, x87_r7_15) ? 1 : 0) << 0xa
                | (x87_r5_8 == x87_r7_15 ? 1 : 0) << 0xe | 0x3800
            bool p_9 = unimplemented  {test ah, 0x44}
            
            if (p_9)
                int32_t* var_11c_6 = ecx_2
                sub_4b65a0(&var_50, fconvert.s(fneg(x87_r7_15)))
                edx_1 = &var_50
                ecx_2 = sub_42e150(&var_90, edx_1)
            
            long double x87_r7_17 = fconvert.t(var_c4)
            long double x87_r5_9 = float.t(0)
            x87_r5_9 - x87_r7_17
            eax_21.w = (x87_r5_9 < x87_r7_17 ? 1 : 0) << 8
                | (is_unordered.t(x87_r5_9, x87_r7_17) ? 1 : 0) << 0xa
                | (x87_r5_9 == x87_r7_17 ? 1 : 0) << 0xe | 0x3800
            bool p_10 = unimplemented  {test ah, 0x44}
            
            if (p_10)
                int32_t* var_11c_8 = ecx_2
                sub_5dd020(&var_50, fconvert.s(fneg(x87_r7_17)))
                edx_1 = &var_50
                sub_42e150(&var_90, edx_1)
            
            var_104 = arg4
            int32_t edx_10
            long double st0
            st0, edx_10 = sub_5f2450(&var_104, edx_1, var_e0)
            var_f0 = fconvert.s(st0)
            var_104 = arg4
            long double x87_r7_20 = sub_5f24b0(&var_104, edx_10, var_dc) + fconvert.t(var_c8)
            long double x87_r6_8 = fconvert.t(var_fc_2)
            float* eax_28 = *(var_f4 i+ 0x3c)
            var_104 = fconvert.s(x87_r7_20 - x87_r6_8)
            var_d4 = fconvert.s(fconvert.t(var_10c))
            float var_d8_1 = fconvert.s(x87_r6_8)
            long double x87_r7_23 = fconvert.t(var_f0)
            var_10c = fconvert.s(x87_r7_23)
            long double x87_r6_11 = fconvert.t(var_104)
            float var_108 = fconvert.s(x87_r6_11)
            var_104 = fconvert.s(fconvert.t(var_d4) + x87_r7_23)
            long double x87_r5_13 = fconvert.t(var_104)
            var_d4 = fconvert.s(x87_r5_13)
            float var_d0 = fconvert.s(x87_r6_11)
            var_f0 = fconvert.s(x87_r7_23)
            var_104 = fconvert.s(x87_r6_11 + fconvert.t(var_d8_1))
            long double x87_r6_14 = fconvert.t(var_104)
            float var_ec = fconvert.s(x87_r6_14)
            float var_100 = fconvert.s(x87_r6_14)
            var_104 = fconvert.s(x87_r5_13)
            int32_t eax_30
            int80_t st0_2
            st0_2, eax_30 = sub_5e82d0(&var_104, var_f8, arg2, arg3, &var_90, &var_10c, &var_d4, 
                &var_f0, &var_b8, &var_a0, &var_98, &var_a8, eax_28)
            sub_6b4885(eax_1 ^ &var_10c)
            return eax_30
    else
        x87_r7_9 - x87_r5_3
        eax_3.w = (x87_r7_9 < x87_r5_3 ? 1 : 0) << 8
            | (is_unordered.t(x87_r7_9, x87_r5_3) ? 1 : 0) << 0xa
            | (x87_r7_9 == x87_r5_3 ? 1 : 0) << 0xe | 0x1000
        bool p_4 = unimplemented  {test ah, 0x44}
        
        if (p_4)
            goto label_5ff751
        
        eax_3, edx_1 = sub_70c710(x87_r4_2)
        ecx_2 = eax_3
        var_10c = ecx_2
        long double x87_r1_3 = float.t(var_10c)
        x87_r1_3 - x87_r4_2
        eax_3.w = (x87_r1_3 < x87_r4_2 ? 1 : 0) << 8
            | (is_unordered.t(x87_r1_3, x87_r4_2) ? 1 : 0) << 0xa
            | (x87_r1_3 == x87_r4_2 ? 1 : 0) << 0xe | 0x1000
        x87_r5_4 = fconvert.t(var_c4)
        bool p_5 = unimplemented  {test ah, 0x44}
        
        if (p_5)
            goto label_5ff751
        
        eax_3, ecx_2, edx_1 = sub_5e6d90(ecx_2)
        
        if (eax_3.b != 0)
            goto label_5ff751
        
        eax_3, edx_1 = sub_70c710(x87_r3_1)
        ecx_2 = eax_3
        var_10c = ecx_2
        long double x87_r2_3 = float.t(var_10c)
        x87_r2_3 - x87_r3_1
        eax_3.w = (x87_r2_3 < x87_r3_1 ? 1 : 0) << 8
            | (is_unordered.t(x87_r2_3, x87_r3_1) ? 1 : 0) << 0xa
            | (x87_r2_3 == x87_r3_1 ? 1 : 0) << 0xe | 0x2000
        bool p_6 = unimplemented  {test ah, 0x44}
        
        if (p_6)
            goto label_5ff753
        
        eax_3, ecx_2, edx_1 = sub_5e6d90(ecx_2)
        
        if (eax_3.b != 0)
            goto label_5ff753
        
        eax_3, edx_1 = sub_70c710(x87_r4_2)
        ecx_2 = eax_3
        var_10c = ecx_2
        long double x87_r3_3 = float.t(var_10c)
        x87_r3_3 - x87_r4_2
        eax_3.w = (x87_r3_3 < x87_r4_2 ? 1 : 0) << 8
            | (is_unordered.t(x87_r3_3, x87_r4_2) ? 1 : 0) << 0xa
            | (x87_r3_3 == x87_r4_2 ? 1 : 0) << 0xe | 0x2800
        bool p_7 = unimplemented  {test ah, 0x44}
        
        if (p_7)
            goto label_5ff755
        
        eax_3, ecx_2, edx_1 = sub_5e6d90(ecx_2)
        
        if (eax_3.b != 0)
            goto label_5ff755
        
        var_f4 = arg4
        var_10c = arg4
        eax_3 = var_f8
        
        if (*(eax_3 + 4) != 0)
            int32_t* ebx_1 = *eax_3
            
            if (ebx_1 != 0xffffffff)
                int32_t eax_16
                int32_t edx_7
                eax_16, edx_7 = sub_5f2410(var_dc, edx_1, &var_f4)
                enum MESSAGEBOX_RESULT eax_20 = sub_409460(ebx_1, 
                    sub_5f23d0(var_e0, edx_7, &var_10c) + arg2, var_dc - edi_1 + eax_16 + arg3)
                sub_6b4885(eax_1 ^ &var_10c)
                return eax_20

sub_6b4885(eax_1 ^ &var_10c)
return eax_3
