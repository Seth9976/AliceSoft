// 函数: sub_5e0350
// 地址: 0x5e0350
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

float var_f4
int32_t eax_1 = data_78c474 ^ &var_f4
int32_t* eax_2 = arg1
float var_c8 = fconvert.s(fconvert.t(arg7))
float var_b0 = fconvert.s(fconvert.t(arg8))
int32_t* esi = &eax_2[6]
float var_c4 = fconvert.s(fconvert.t(arg9))
int32_t* var_ac = eax_2

if (*esi != 0xffffffff)
    bool cond:0_1 = esi[1] == 0
    int32_t* var_ec = &eax_2[0xe]
    
    if (not(cond:0_1))
        sub_5f9e50(eax_2[0xe], eax_2[0xf], eax_2[0x10], eax_2[0x11])
    
    int32_t ebx_1 = esi[1]
    int32_t edi_1
    
    if (ebx_1 != 0)
        int32_t eax_5 = *esi
        
        if (eax_5 != 0xffffffff)
            edi_1 = sub_5f9f90(eax_5)
        else
            edi_1 = 0
    else
        edi_1 = 0
    
    int32_t eax_7
    
    if (ebx_1 != 0)
        int32_t eax_8 = *esi
        
        if (eax_8 != 0xffffffff)
            eax_7 = sub_5f9f40(eax_8)
        else
            eax_7 = 0
    else
        eax_7 = 0
    
    int32_t var_c0
    int32_t* ecx_3
    float* edx_4
    ecx_3, edx_4 = sub_5f7e90(var_ec, &var_c0, eax_7, edi_1)
    long double x87_r7_3 = fconvert.t(arg5)
    long double x87_r5_1 = float.t(1)
    x87_r5_1 - x87_r7_3
    eax_2.w = (x87_r5_1 < x87_r7_3 ? 1 : 0) << 8
        | (is_unordered.t(x87_r5_1, x87_r7_3) ? 1 : 0) << 0xa
        | (x87_r5_1 == x87_r7_3 ? 1 : 0) << 0xe | 0x2800
    long double x87_r5_2 = fconvert.t(arg6)
    long double x87_r4_2 = fconvert.t(var_c8)
    long double x87_r3_1 = fconvert.t(var_b0)
    bool p_1 = unimplemented  {test ah, 0x44}
    int32_t* var_e4
    int32_t var_b8
    int32_t var_b4
    long double x87_r5_3
    
    if (p_1)
    label_5e052c:
        x87_r4_2 = x87_r3_1
    label_5e052e:
        x87_r5_3 = x87_r4_2
    label_5e0534:
        
        if (var_b8 s> 0 && var_b4 s> 0)
            float var_d4 = fconvert.s(float.t(var_c0))
            int32_t var_bc
            float var_d0 = fconvert.s(float.t(var_bc))
            var_e4 = fconvert.s(float.t(var_b8))
            float var_e0 = fconvert.s(fconvert.t(var_e4))
            var_ec = fconvert.s(float.t(var_b4))
            var_f4 = fconvert.s(fconvert.t(var_ec))
            long double x87_r4_9 = fconvert.t(var_d4)
            var_c0 = fconvert.s(x87_r4_9)
            long double x87_r3_4 = fconvert.t(var_d0)
            float var_bc_1 = fconvert.s(x87_r3_4)
            var_e0 = fconvert.s(fconvert.t(var_e0) + x87_r4_9)
            long double x87_r2_6 = fconvert.t(var_e0)
            float var_98 = fconvert.s(x87_r2_6)
            float var_94 = fconvert.s(x87_r3_4)
            float var_a0 = fconvert.s(x87_r4_9)
            var_f4 = fconvert.s(x87_r3_4 + fconvert.t(var_f4))
            long double x87_r3_7 = fconvert.t(var_f4)
            float var_9c = fconvert.s(x87_r3_7)
            float var_a4 = fconvert.s(x87_r3_7)
            float var_a8 = fconvert.s(x87_r2_6)
            float var_90[0x10]
            sub_42e0d0(&var_90, fconvert.s(x87_r5_1), fconvert.s(x87_r5_3), fconvert.s(x87_r7_3))
            long double x87_r7_6 = fconvert.t(var_b0)
            long double x87_r5_6 = float.t(0)
            x87_r5_6 - x87_r7_6
            float* eax_16
            eax_16.w = (x87_r5_6 < x87_r7_6 ? 1 : 0) << 8
                | (is_unordered.t(x87_r5_6, x87_r7_6) ? 1 : 0) << 0xa
                | (x87_r5_6 == x87_r7_6 ? 1 : 0) << 0xe | 0x3800
            bool p_6 = unimplemented  {test ah, 0x44}
            float var_50[0x11]
            
            if (p_6)
                int32_t* var_104_5 = ecx_3
                sub_5dcfd0(&var_50, fconvert.s(fneg(x87_r7_6)))
                edx_4 = &var_50
                ecx_3 = sub_42e150(&var_90, edx_4)
            
            long double x87_r7_9 = fconvert.t(var_c8)
            long double x87_r5_7 = float.t(0)
            x87_r5_7 - x87_r7_9
            eax_16.w = (x87_r5_7 < x87_r7_9 ? 1 : 0) << 8
                | (is_unordered.t(x87_r5_7, x87_r7_9) ? 1 : 0) << 0xa
                | (x87_r5_7 == x87_r7_9 ? 1 : 0) << 0xe | 0x3800
            bool p_7 = unimplemented  {test ah, 0x44}
            
            if (p_7)
                int32_t* var_104_7 = ecx_3
                sub_4b65a0(&var_50, fconvert.s(fneg(x87_r7_9)))
                edx_4 = &var_50
                ecx_3 = sub_42e150(&var_90, edx_4)
            
            long double x87_r7_11 = fconvert.t(var_c4)
            long double x87_r5_8 = float.t(0)
            x87_r5_8 - x87_r7_11
            eax_16.w = (x87_r5_8 < x87_r7_11 ? 1 : 0) << 8
                | (is_unordered.t(x87_r5_8, x87_r7_11) ? 1 : 0) << 0xa
                | (x87_r5_8 == x87_r7_11 ? 1 : 0) << 0xe | 0x3800
            bool p_8 = unimplemented  {test ah, 0x44}
            
            if (p_8)
                int32_t* var_104_9 = ecx_3
                sub_5dd020(&var_50, fconvert.s(fneg(x87_r7_11)))
                edx_4 = &var_50
                sub_42e150(&var_90, edx_4)
            
            var_f4 = arg4
            var_e0 = fconvert.s(sub_5f2450(&var_f4, edx_4, var_b8))
            var_f4 = arg4
            var_f4 = fconvert.s(sub_5f24b0(&var_f4, arg4, var_b4))
            float* ecx_12 = var_ac[1]
            var_d0 = fconvert.s(fconvert.t(var_e4))
            float var_d4_1 = fconvert.s(fconvert.t(var_ec))
            long double x87_r7_16 = fconvert.t(var_e0)
            var_ec = fconvert.s(x87_r7_16)
            long double x87_r6_6 = fconvert.t(var_f4)
            float var_e8 = fconvert.s(x87_r6_6)
            var_f4 = fconvert.s(fconvert.t(var_d0) + x87_r7_16)
            long double x87_r5_11 = fconvert.t(var_f4)
            var_d0 = fconvert.s(x87_r5_11)
            float var_cc = fconvert.s(x87_r6_6)
            var_e0 = fconvert.s(x87_r7_16)
            var_f4 = fconvert.s(x87_r6_6 + fconvert.t(var_d4_1))
            long double x87_r6_9 = fconvert.t(var_f4)
            float var_dc = fconvert.s(x87_r6_9)
            float var_f0 = fconvert.s(x87_r6_9)
            var_f4 = fconvert.s(x87_r5_11)
            int32_t eax_24
            int80_t st0_2
            st0_2, eax_24 = sub_5e82d0(&var_f4, esi, arg2, arg3, &var_90, &var_ec, &var_d0, 
                &var_e0, &var_c0, &var_98, &var_a0, &var_a8, ecx_12)
            sub_6b4885(eax_1 ^ &var_f4)
            return eax_24
    else
        x87_r7_3 - x87_r5_2
        eax_2.w = (x87_r7_3 < x87_r5_2 ? 1 : 0) << 8
            | (is_unordered.t(x87_r7_3, x87_r5_2) ? 1 : 0) << 0xa
            | (x87_r7_3 == x87_r5_2 ? 1 : 0) << 0xe | 0x1000
        bool p_2 = unimplemented  {test ah, 0x44}
        
        if (p_2)
            goto label_5e052c
        
        eax_2, edx_4 = sub_70c710(x87_r4_2)
        ecx_3 = eax_2
        var_ec = ecx_3
        long double x87_r1_3 = float.t(var_ec)
        x87_r1_3 - x87_r4_2
        eax_2.w = (x87_r1_3 < x87_r4_2 ? 1 : 0) << 8
            | (is_unordered.t(x87_r1_3, x87_r4_2) ? 1 : 0) << 0xa
            | (x87_r1_3 == x87_r4_2 ? 1 : 0) << 0xe | 0x1000
        x87_r5_3 = fconvert.t(var_c4)
        bool p_3 = unimplemented  {test ah, 0x44}
        
        if (p_3)
            goto label_5e052c
        
        eax_2, ecx_3, edx_4 = sub_5e6d90(ecx_3)
        
        if (eax_2.b != 0)
            goto label_5e052c
        
        eax_2, edx_4 = sub_70c710(x87_r3_1)
        ecx_3 = eax_2
        var_ec = ecx_3
        long double x87_r2_3 = float.t(var_ec)
        x87_r2_3 - x87_r3_1
        eax_2.w = (x87_r2_3 < x87_r3_1 ? 1 : 0) << 8
            | (is_unordered.t(x87_r2_3, x87_r3_1) ? 1 : 0) << 0xa
            | (x87_r2_3 == x87_r3_1 ? 1 : 0) << 0xe | 0x2000
        bool p_4 = unimplemented  {test ah, 0x44}
        
        if (p_4)
            goto label_5e052e
        
        eax_2, ecx_3, edx_4 = sub_5e6d90(ecx_3)
        
        if (eax_2.b != 0)
            goto label_5e052e
        
        eax_2, edx_4 = sub_70c710(x87_r4_2)
        ecx_3 = eax_2
        var_ec = ecx_3
        long double x87_r3_3 = float.t(var_ec)
        x87_r3_3 - x87_r4_2
        eax_2.w = (x87_r3_3 < x87_r4_2 ? 1 : 0) << 8
            | (is_unordered.t(x87_r3_3, x87_r4_2) ? 1 : 0) << 0xa
            | (x87_r3_3 == x87_r4_2 ? 1 : 0) << 0xe | 0x2800
        bool p_5 = unimplemented  {test ah, 0x44}
        
        if (p_5)
            goto label_5e0534
        
        eax_2, ecx_3, edx_4 = sub_5e6d90(ecx_3)
        
        if (eax_2.b != 0)
            goto label_5e0534
        
        int32_t edx_5 = sub_5e82a0(esi, 0)
        bool cond:1_1 = esi[1] == 0
        eax_2 = arg4
        var_ec = eax_2
        var_e4 = eax_2
        
        if (not(cond:1_1))
            int32_t* esi_1 = *esi
            
            if (esi_1 != 0xffffffff)
                int32_t eax_11
                int32_t edx_6
                eax_11, edx_6 = sub_5f2410(var_b4, edx_5, &var_ec)
                enum MESSAGEBOX_RESULT eax_15 =
                    sub_409460(esi_1, sub_5f23d0(var_b8, edx_6, &var_e4) + arg2, eax_11 + arg3)
                sub_6b4885(eax_1 ^ &var_f4)
                return eax_15

sub_6b4885(eax_1 ^ &var_f4)
return eax_2
