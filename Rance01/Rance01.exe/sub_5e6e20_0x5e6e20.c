// 函数: sub_5e6e20
// 地址: 0x5e6e20
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_104
int32_t eax_1 = data_78c474 ^ &var_104
int32_t eax_2 = arg4
float var_c0 = fconvert.s(fconvert.t(arg7))
void* esi = (*arg1)[0xb]
float var_bc = fconvert.s(fconvert.t(arg8))
float var_c4 = fconvert.s(fconvert.t(arg9))
int32_t var_f0 = eax_2

if (esi != 0xffffffff)
    int32_t edi_1
    
    if ((*arg1)[0xc] != 0)
        edi_1 = sub_5f9f90(esi)
    else
        edi_1 = 0
    
    int32_t eax_6
    
    if ((*arg1)[0xc] != 0)
        eax_6 = sub_5f9f40(esi)
    else
        eax_6 = 0
    
    int32_t var_dc
    void* ecx_2
    float (* edx_1)[0x11]
    ecx_2, edx_1 = sub_5f7e90(&(*arg1)[0x10], &var_dc, eax_6, edi_1)
    long double x87_r7_3 = float.t(0)
    int32_t var_d4
    int32_t var_f4_1 = var_d4
    float var_fc
    int32_t var_d8
    int32_t var_d0
    float var_b8
    
    if (var_d4 s<= 0 || var_d0 s<= 0)
    label_5e6f50:
        
        if ((*arg1)[0xc] != 0)
            ecx_2 = esi
            eax_2, edx_1 = sub_5f9e50(var_dc, var_d8, 0, var_d0)
    else
        edx_1 = arg1
        long double temp1_1 = fconvert.t((*edx_1)[0xa])
        x87_r7_3 - temp1_1
        ecx_2 = &(*edx_1)[0xa]
        eax_2.w = (x87_r7_3 < temp1_1 ? 1 : 0) << 8
            | (is_unordered.t(x87_r7_3, temp1_1) ? 1 : 0) << 0xa
            | (x87_r7_3 == temp1_1 ? 1 : 0) << 0xe | 0x3800
        bool p_1 = unimplemented  {test ah, 0x5}
        
        if (p_1)
            goto label_5e6f50
        
        long double x87_r6_1 = fconvert.t((*edx_1)[9])
        void* edx_2 = &(*edx_1)[9]
        long double x87_r5_1 = fconvert.t(*ecx_2)
        x87_r5_1 - x87_r6_1
        eax_2.w = (x87_r5_1 < x87_r6_1 ? 1 : 0) << 8
            | (is_unordered.t(x87_r5_1, x87_r6_1) ? 1 : 0) << 0xa
            | (x87_r5_1 == x87_r6_1 ? 1 : 0) << 0xe | 0x3800
        bool p_2 = unimplemented  {test ah, 0x44}
        
        if (p_2)
            var_fc = fconvert.s(x87_r7_3)
            long double x87_r7_4 = fconvert.t(*edx_2)
            long double temp2_1 = fconvert.t(0.0)
            x87_r7_4 - temp2_1
            eax_2.w = (x87_r7_4 < temp2_1 ? 1 : 0) << 8
                | (is_unordered.t(x87_r7_4, temp2_1) ? 1 : 0) << 0xa
                | (x87_r7_4 == temp2_1 ? 1 : 0) << 0xe
            
            if ((eax_2:1.b & 0x41) != 0)
                edx_2 = &var_fc
            
            long double x87_r7_5 = fconvert.t(*ecx_2)
            long double x87_r6_2 = fconvert.t(*edx_2)
            x87_r6_2 - x87_r7_5
            eax_2.w = (x87_r6_2 < x87_r7_5 ? 1 : 0) << 8
                | (is_unordered.t(x87_r6_2, x87_r7_5) ? 1 : 0) << 0xa
                | (x87_r6_2 == x87_r7_5 ? 1 : 0) << 0xe
            void* eax_10 = ecx_2
            
            if ((eax_2:1.b & 0x41) != 0)
                eax_10 = edx_2
            
            int32_t eax_11 = sub_70c710(float.t(var_d4) * fconvert.t(*eax_10) / fconvert.t(*ecx_2))
            var_f4_1 = eax_11
            var_b8 = var_dc
            int32_t var_b0_1 = eax_11
            ecx_2 = &(*arg1)[0xb]
            int32_t var_b4_1 = var_d8
            int32_t var_ac_1 = var_d0
            eax_2, edx_1 = sub_5e8270(&var_b8, var_d8, ecx_2)
        else
            ecx_2 = &(*arg1)[0xb]
            eax_2, edx_1 = sub_5e8270(&var_dc, edx_2, ecx_2)
    
    long double x87_r7_9 = fconvert.t(arg5)
    long double x87_r5_2 = float.t(1)
    x87_r5_2 - x87_r7_9
    eax_2.w = (x87_r5_2 < x87_r7_9 ? 1 : 0) << 8
        | (is_unordered.t(x87_r5_2, x87_r7_9) ? 1 : 0) << 0xa
        | (x87_r5_2 == x87_r7_9 ? 1 : 0) << 0xe | 0x2800
    long double x87_r5_3 = fconvert.t(arg6)
    long double x87_r4_2 = fconvert.t(var_c0)
    long double x87_r3_1 = fconvert.t(var_bc)
    bool p_3 = unimplemented  {test ah, 0x44}
    long double x87_r5_4
    
    if (p_3)
    label_5e7087:
        x87_r4_2 = x87_r3_1
    label_5e7089:
        x87_r5_4 = x87_r4_2
    label_5e708b:
        
        if (var_d4 s> 0 && var_d0 s> 0)
            float var_e4 = fconvert.s(float.t(var_dc))
            float var_cc = fconvert.s(float.t(var_d8))
            float var_f4_2 = fconvert.s(float.t(var_f4_1))
            float var_ec = fconvert.s(fconvert.t(var_f4_2))
            var_fc = fconvert.s(float.t(var_d0))
            var_104 = fconvert.s(fconvert.t(var_fc))
            long double x87_r4_9 = fconvert.t(var_e4)
            var_b8 = fconvert.s(x87_r4_9)
            long double x87_r3_4 = fconvert.t(var_cc)
            float var_b4_2 = fconvert.s(x87_r3_4)
            var_ec = fconvert.s(fconvert.t(var_ec) + x87_r4_9)
            long double x87_r2_6 = fconvert.t(var_ec)
            float var_a8 = fconvert.s(x87_r2_6)
            float var_a4 = fconvert.s(x87_r3_4)
            float var_98 = fconvert.s(x87_r4_9)
            var_104 = fconvert.s(x87_r3_4 + fconvert.t(var_104))
            long double x87_r3_7 = fconvert.t(var_104)
            float var_94 = fconvert.s(x87_r3_7)
            float var_9c = fconvert.s(x87_r3_7)
            float var_a0 = fconvert.s(x87_r2_6)
            float var_90[0x10]
            sub_42e0d0(&var_90, fconvert.s(x87_r5_2), fconvert.s(x87_r5_4), fconvert.s(x87_r7_9))
            long double x87_r7_12 = fconvert.t(var_bc)
            long double x87_r5_7 = float.t(0)
            x87_r5_7 - x87_r7_12
            float* eax_20
            eax_20.w = (x87_r5_7 < x87_r7_12 ? 1 : 0) << 8
                | (is_unordered.t(x87_r5_7, x87_r7_12) ? 1 : 0) << 0xa
                | (x87_r5_7 == x87_r7_12 ? 1 : 0) << 0xe | 0x3800
            bool p_8 = unimplemented  {test ah, 0x44}
            float var_50[0x11]
            
            if (p_8)
                void* var_114_5 = ecx_2
                sub_5dcfd0(&var_50, fconvert.s(fneg(x87_r7_12)))
                edx_1 = &var_50
                ecx_2 = sub_42e150(&var_90, edx_1)
            
            long double x87_r7_15 = fconvert.t(var_c0)
            long double x87_r5_8 = float.t(0)
            x87_r5_8 - x87_r7_15
            eax_20.w = (x87_r5_8 < x87_r7_15 ? 1 : 0) << 8
                | (is_unordered.t(x87_r5_8, x87_r7_15) ? 1 : 0) << 0xa
                | (x87_r5_8 == x87_r7_15 ? 1 : 0) << 0xe | 0x3800
            bool p_9 = unimplemented  {test ah, 0x44}
            
            if (p_9)
                void* var_114_7 = ecx_2
                sub_4b65a0(&var_50, fconvert.s(fneg(x87_r7_15)))
                edx_1 = &var_50
                ecx_2 = sub_42e150(&var_90, edx_1)
            
            long double x87_r7_17 = fconvert.t(var_c4)
            long double x87_r5_9 = float.t(0)
            x87_r5_9 - x87_r7_17
            eax_20.w = (x87_r5_9 < x87_r7_17 ? 1 : 0) << 8
                | (is_unordered.t(x87_r5_9, x87_r7_17) ? 1 : 0) << 0xa
                | (x87_r5_9 == x87_r7_17 ? 1 : 0) << 0xe | 0x3800
            bool p_10 = unimplemented  {test ah, 0x44}
            
            if (p_10)
                void* var_114_9 = ecx_2
                sub_5dd020(&var_50, fconvert.s(fneg(x87_r7_17)))
                edx_1 = &var_50
                sub_42e150(&var_90, edx_1)
            
            int32_t esi_2 = var_f0
            var_104 = esi_2
            int32_t edx_7
            long double st0
            edx_7, st0 = sub_5f2450(&var_104, edx_1, var_d4)
            var_ec = fconvert.s(st0)
            var_104 = esi_2
            var_104 = fconvert.s(sub_5f24b0(&var_104, edx_7, var_d0))
            float* eax_27 = (*arg1)[0xf]
            var_cc = fconvert.s(fconvert.t(var_f4_2))
            float var_e4_1 = fconvert.s(fconvert.t(var_fc))
            long double x87_r7_22 = fconvert.t(var_ec)
            var_fc = fconvert.s(x87_r7_22)
            long double x87_r6_8 = fconvert.t(var_104)
            float var_f8 = fconvert.s(x87_r6_8)
            var_104 = fconvert.s(fconvert.t(var_cc) + x87_r7_22)
            long double x87_r5_12 = fconvert.t(var_104)
            var_cc = fconvert.s(x87_r5_12)
            float var_c8 = fconvert.s(x87_r6_8)
            var_ec = fconvert.s(x87_r7_22)
            var_104 = fconvert.s(x87_r6_8 + fconvert.t(var_e4_1))
            long double x87_r6_11 = fconvert.t(var_104)
            float var_e8 = fconvert.s(x87_r6_11)
            float var_100 = fconvert.s(x87_r6_11)
            var_104 = fconvert.s(x87_r5_12)
            int32_t eax_29
            int80_t st0_2
            st0_2, eax_29 = sub_5e82d0(&var_104, &(*arg1)[0xb], arg2, arg3, &var_90, &var_fc, 
                &var_cc, &var_ec, &var_b8, &var_a8, &var_98, &var_a0, eax_27)
            sub_6b4885(eax_1 ^ &var_104)
            return eax_29
    else
        x87_r7_9 - x87_r5_3
        eax_2.w = (x87_r7_9 < x87_r5_3 ? 1 : 0) << 8
            | (is_unordered.t(x87_r7_9, x87_r5_3) ? 1 : 0) << 0xa
            | (x87_r7_9 == x87_r5_3 ? 1 : 0) << 0xe | 0x1000
        bool p_4 = unimplemented  {test ah, 0x44}
        
        if (p_4)
            goto label_5e7087
        
        eax_2, edx_1 = sub_70c710(x87_r4_2)
        ecx_2 = eax_2
        var_fc = ecx_2
        long double x87_r1_3 = float.t(var_fc)
        x87_r1_3 - x87_r4_2
        eax_2.w = (x87_r1_3 < x87_r4_2 ? 1 : 0) << 8
            | (is_unordered.t(x87_r1_3, x87_r4_2) ? 1 : 0) << 0xa
            | (x87_r1_3 == x87_r4_2 ? 1 : 0) << 0xe | 0x1000
        x87_r5_4 = fconvert.t(var_c4)
        bool p_5 = unimplemented  {test ah, 0x44}
        
        if (p_5)
            goto label_5e7087
        
        eax_2, ecx_2, edx_1 = sub_5e6d90(ecx_2)
        
        if (eax_2.b != 0)
            goto label_5e7087
        
        eax_2, edx_1 = sub_70c710(x87_r3_1)
        ecx_2 = eax_2
        var_fc = ecx_2
        long double x87_r2_3 = float.t(var_fc)
        x87_r2_3 - x87_r3_1
        eax_2.w = (x87_r2_3 < x87_r3_1 ? 1 : 0) << 8
            | (is_unordered.t(x87_r2_3, x87_r3_1) ? 1 : 0) << 0xa
            | (x87_r2_3 == x87_r3_1 ? 1 : 0) << 0xe | 0x2000
        bool p_6 = unimplemented  {test ah, 0x44}
        
        if (p_6)
            goto label_5e7089
        
        eax_2, ecx_2, edx_1 = sub_5e6d90(ecx_2)
        
        if (eax_2.b != 0)
            goto label_5e7089
        
        eax_2, edx_1 = sub_70c710(x87_r4_2)
        ecx_2 = eax_2
        var_fc = ecx_2
        long double x87_r3_3 = float.t(var_fc)
        x87_r3_3 - x87_r4_2
        eax_2.w = (x87_r3_3 < x87_r4_2 ? 1 : 0) << 8
            | (is_unordered.t(x87_r3_3, x87_r4_2) ? 1 : 0) << 0xa
            | (x87_r3_3 == x87_r4_2 ? 1 : 0) << 0xe | 0x2800
        bool p_7 = unimplemented  {test ah, 0x44}
        
        if (p_7)
            goto label_5e708b
        
        eax_2, ecx_2, edx_1 = sub_5e6d90(ecx_2)
        
        if (eax_2.b != 0)
            goto label_5e708b
        
        bool cond:2_1 = (*arg1)[0xc] == 0
        eax_2 = var_f0
        var_fc = eax_2
        var_f0 = eax_2
        
        if (not(cond:2_1))
            int32_t* esi_1 = (*arg1)[0xb]
            
            if (esi_1 != 0xffffffff)
                int32_t eax_15
                int32_t edx_4
                eax_15, edx_4 = sub_5f2410(var_d0, edx_1, &var_fc)
                enum MESSAGEBOX_RESULT eax_19 =
                    sub_409460(esi_1, sub_5f23d0(var_d4, edx_4, &var_f0) + arg2, eax_15 + arg3)
                sub_6b4885(eax_1 ^ &var_104)
                return eax_19

sub_6b4885(eax_1 ^ &var_104)
return eax_2
