// 函数: sub_5df290
// 地址: 0x5df290
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

float var_f4
float eax_1 = data_78c474 ^ &var_f4
float var_c = eax_1
float var_b4 = fconvert.s(fconvert.t(arg7))
float var_c8 = fconvert.s(fconvert.t(arg8))
int32_t* ecx = *(arg1 i+ 0x64)
float var_ac = fconvert.s(fconvert.t(arg9))
float var_e4 = arg1

if (ecx != 0xffffffff)
    if (*(arg1 i+ 0x78) == 0)
        bool cond:0_1 = *(arg1 i+ 0x68) == 0
        var_f4 = arg1 + 0x80
        
        if (not(cond:0_1))
            sub_5f9e50(*(arg1 + 0x80), *(arg1 + 0x84), *(arg1 + 0x88), *(arg1 + 0x8c))
        
        int32_t ebx_3 = *(arg1 i+ 0x68)
        int32_t esi_5
        
        if (ebx_3 != 0)
            int32_t eax_25 = *(arg1 i+ 0x64)
            
            if (eax_25 != 0xffffffff)
                esi_5 = sub_5f9f90(eax_25)
            else
                esi_5 = 0
        else
            esi_5 = 0
        
        int32_t eax_27
        
        if (ebx_3 != 0)
            int32_t eax_28 = *(arg1 i+ 0x64)
            
            if (eax_28 != 0xffffffff)
                eax_27 = sub_5f9f40(eax_28)
            else
                eax_27 = 0
        else
            eax_27 = 0
        
        int32_t var_c4
        float ecx_11
        float* edx_13
        ecx_11, edx_13 = sub_5df220(var_f4, &var_c4, eax_27, esi_5)
        long double x87_r7_3 = fconvert.t(arg5)
        long double x87_r5_1 = float.t(1)
        x87_r5_1 - x87_r7_3
        eax_1.w = (x87_r5_1 < x87_r7_3 ? 1 : 0) << 8
            | (is_unordered.t(x87_r5_1, x87_r7_3) ? 1 : 0) << 0xa
            | (x87_r5_1 == x87_r7_3 ? 1 : 0) << 0xe | 0x2800
        long double x87_r5_2 = fconvert.t(arg6)
        long double x87_r4_2 = fconvert.t(var_b4)
        long double x87_r3_1 = fconvert.t(var_c8)
        bool p_1 = unimplemented  {test ah, 0x44}
        int32_t var_bc
        int32_t var_b8
        long double x87_r5_3
        
        if (p_1)
        label_5df5af:
            x87_r4_2 = x87_r3_1
        label_5df5b1:
            x87_r5_3 = x87_r4_2
        label_5df5b7:
            
            if (var_bc s> 0 && var_b8 s> 0)
                float var_d4 = fconvert.s(float.t(var_c4))
                int32_t var_c0
                float var_d0 = fconvert.s(float.t(var_c0))
                float var_b0 = fconvert.s(float.t(var_bc))
                float var_e0 = fconvert.s(fconvert.t(var_b0))
                var_f4 = fconvert.s(float.t(var_b8))
                float var_ec = fconvert.s(fconvert.t(var_f4))
                long double x87_r4_9 = fconvert.t(var_d4)
                var_c4 = fconvert.s(x87_r4_9)
                long double x87_r3_4 = fconvert.t(var_d0)
                float var_c0_1 = fconvert.s(x87_r3_4)
                var_e0 = fconvert.s(fconvert.t(var_e0) + x87_r4_9)
                long double x87_r2_6 = fconvert.t(var_e0)
                float var_98 = fconvert.s(x87_r2_6)
                float var_94 = fconvert.s(x87_r3_4)
                float var_a0 = fconvert.s(x87_r4_9)
                var_ec = fconvert.s(x87_r3_4 + fconvert.t(var_ec))
                long double x87_r3_7 = fconvert.t(var_ec)
                float var_9c = fconvert.s(x87_r3_7)
                float var_a4 = fconvert.s(x87_r3_7)
                float var_a8 = fconvert.s(x87_r2_6)
                float var_90[0x10]
                sub_42e0d0(&var_90, fconvert.s(x87_r5_1), fconvert.s(x87_r5_3), 
                    fconvert.s(x87_r7_3))
                long double x87_r7_6 = fconvert.t(var_c8)
                long double x87_r5_6 = float.t(0)
                x87_r5_6 - x87_r7_6
                float* eax_36
                eax_36.w = (x87_r5_6 < x87_r7_6 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r5_6, x87_r7_6) ? 1 : 0) << 0xa
                    | (x87_r5_6 == x87_r7_6 ? 1 : 0) << 0xe | 0x3800
                bool p_6 = unimplemented  {test ah, 0x44}
                float var_50[0x11]
                
                if (p_6)
                    float var_104_7 = ecx_11
                    sub_5dcfd0(&var_50, fconvert.s(fneg(x87_r7_6)))
                    edx_13 = &var_50
                    ecx_11 = sub_42e150(&var_90, edx_13)
                
                long double x87_r7_9 = fconvert.t(var_b4)
                long double x87_r5_7 = float.t(0)
                x87_r5_7 - x87_r7_9
                eax_36.w = (x87_r5_7 < x87_r7_9 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r5_7, x87_r7_9) ? 1 : 0) << 0xa
                    | (x87_r5_7 == x87_r7_9 ? 1 : 0) << 0xe | 0x3800
                bool p_7 = unimplemented  {test ah, 0x44}
                
                if (p_7)
                    float var_104_9 = ecx_11
                    sub_4b65a0(&var_50, fconvert.s(fneg(x87_r7_9)))
                    edx_13 = &var_50
                    ecx_11 = sub_42e150(&var_90, edx_13)
                
                long double x87_r7_11 = fconvert.t(var_ac)
                long double x87_r5_8 = float.t(0)
                x87_r5_8 - x87_r7_11
                eax_36.w = (x87_r5_8 < x87_r7_11 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r5_8, x87_r7_11) ? 1 : 0) << 0xa
                    | (x87_r5_8 == x87_r7_11 ? 1 : 0) << 0xe | 0x3800
                bool p_8 = unimplemented  {test ah, 0x44}
                
                if (p_8)
                    float var_104_11 = ecx_11
                    sub_5dd020(&var_50, fconvert.s(fneg(x87_r7_11)))
                    edx_13 = &var_50
                    sub_42e150(&var_90, edx_13)
                
                var_ec = arg4
                var_e0 = fconvert.s(sub_5f2450(&var_ec, edx_13, var_bc))
                var_ec = arg4
                var_ec = fconvert.s(sub_5f24b0(&var_ec, arg4, var_b8))
                float* ecx_20 = *(var_e4 i+ 0x60)
                var_d0 = fconvert.s(fconvert.t(var_b0))
                float var_d4_1 = fconvert.s(fconvert.t(var_f4))
                long double x87_r7_16 = fconvert.t(var_e0)
                var_f4 = fconvert.s(x87_r7_16)
                long double x87_r6_6 = fconvert.t(var_ec)
                float var_f0 = fconvert.s(x87_r6_6)
                var_ec = fconvert.s(fconvert.t(var_d0) + x87_r7_16)
                long double x87_r5_11 = fconvert.t(var_ec)
                var_d0 = fconvert.s(x87_r5_11)
                float var_cc = fconvert.s(x87_r6_6)
                var_e0 = fconvert.s(x87_r7_16)
                var_ec = fconvert.s(x87_r6_6 + fconvert.t(var_d4_1))
                long double x87_r6_9 = fconvert.t(var_ec)
                float var_dc = fconvert.s(x87_r6_9)
                float var_e8 = fconvert.s(x87_r6_9)
                var_ec = fconvert.s(x87_r5_11)
                int32_t eax_44
                int80_t st0_2
                st0_2, eax_44 = sub_5e82d0(&var_ec, arg1 i+ 0x64, arg2, arg3, &var_90, &var_f4, 
                    &var_d0, &var_e0, &var_c4, &var_98, &var_a0, &var_a8, ecx_20)
                sub_6b4885(var_c ^ &var_f4)
                return eax_44
        else
            x87_r7_3 - x87_r5_2
            eax_1.w = (x87_r7_3 < x87_r5_2 ? 1 : 0) << 8
                | (is_unordered.t(x87_r7_3, x87_r5_2) ? 1 : 0) << 0xa
                | (x87_r7_3 == x87_r5_2 ? 1 : 0) << 0xe | 0x1000
            bool p_2 = unimplemented  {test ah, 0x44}
            
            if (p_2)
                goto label_5df5af
            
            eax_1, edx_13 = sub_70c710(x87_r4_2)
            ecx_11 = eax_1
            var_f4 = ecx_11
            long double x87_r1_3 = float.t(var_f4)
            x87_r1_3 - x87_r4_2
            eax_1.w = (x87_r1_3 < x87_r4_2 ? 1 : 0) << 8
                | (is_unordered.t(x87_r1_3, x87_r4_2) ? 1 : 0) << 0xa
                | (x87_r1_3 == x87_r4_2 ? 1 : 0) << 0xe | 0x1000
            x87_r5_3 = fconvert.t(var_ac)
            bool p_3 = unimplemented  {test ah, 0x44}
            
            if (p_3)
                goto label_5df5af
            
            eax_1, ecx_11, edx_13 = sub_5e6d90(ecx_11)
            
            if (eax_1.b != 0)
                goto label_5df5af
            
            eax_1, edx_13 = sub_70c710(x87_r3_1)
            ecx_11 = eax_1
            var_f4 = ecx_11
            long double x87_r2_3 = float.t(var_f4)
            x87_r2_3 - x87_r3_1
            eax_1.w = (x87_r2_3 < x87_r3_1 ? 1 : 0) << 8
                | (is_unordered.t(x87_r2_3, x87_r3_1) ? 1 : 0) << 0xa
                | (x87_r2_3 == x87_r3_1 ? 1 : 0) << 0xe | 0x2000
            bool p_4 = unimplemented  {test ah, 0x44}
            
            if (p_4)
                goto label_5df5b1
            
            eax_1, ecx_11, edx_13 = sub_5e6d90(ecx_11)
            
            if (eax_1.b != 0)
                goto label_5df5b1
            
            eax_1, edx_13 = sub_70c710(x87_r4_2)
            ecx_11 = eax_1
            var_f4 = ecx_11
            long double x87_r3_3 = float.t(var_f4)
            x87_r3_3 - x87_r4_2
            eax_1.w = (x87_r3_3 < x87_r4_2 ? 1 : 0) << 8
                | (is_unordered.t(x87_r3_3, x87_r4_2) ? 1 : 0) << 0xa
                | (x87_r3_3 == x87_r4_2 ? 1 : 0) << 0xe | 0x2800
            bool p_5 = unimplemented  {test ah, 0x44}
            
            if (p_5)
                goto label_5df5b7
            
            eax_1, ecx_11, edx_13 = sub_5e6d90(ecx_11)
            
            if (eax_1.b != 0)
                goto label_5df5b7
            
            int32_t edx_14 = sub_5e82a0(arg1 i+ 0x64, 0)
            bool cond:1_1 = *(arg1 i+ 0x68) == 0
            eax_1 = arg4
            var_e4 = eax_1
            var_f4 = eax_1
            
            if (not(cond:1_1))
                int32_t* edi_1 = *(arg1 i+ 0x64)
                
                if (edi_1 != 0xffffffff)
                    int32_t eax_31
                    int32_t edx_15
                    eax_31, edx_15 = sub_5f2410(var_b8, edx_14, &var_e4)
                    enum MESSAGEBOX_RESULT eax_35 =
                        sub_409460(edi_1, sub_5f23d0(var_bc, edx_15, &var_f4) + arg2, eax_31 + arg3)
                    sub_6b4885(var_c ^ &var_f4)
                    return eax_35
    else
        if (*(arg1 i+ 0x68) != 0)
            int32_t* var_104_1 = ecx
            int32_t edx
            void* eax_5 = sub_40c350(*(data_797d2c + 0x30) + 0x274, edx, ecx)
            
            if (eax_5 != 0)
                *(eax_5 + 0x2c) = 0
        
        if (*(arg1 i+ 0x74) s<= 0)
            enum MESSAGEBOX_RESULT eax_6 = sub_604c90("ReductionSize")
            sub_6b4885(var_c ^ &var_f4)
            return eax_6
        
        int32_t esi_1 = *(arg1 i+ 0x68)
        int32_t eax_7
        
        if (esi_1 != 0)
            int32_t eax_8 = *(arg1 i+ 0x64)
            
            if (eax_8 != 0xffffffff)
                eax_7 = sub_5f9f40(eax_8)
            else
                eax_7 = 0
        else
            eax_7 = 0
        
        float ecx_3 = arg4 - 1
        var_f4 = ecx_3
        int32_t eax_11
        
        switch (ecx_3)
            case 1, 4, 7
                int32_t eax_9
                int32_t edx_2
                edx_2:eax_9 = sx.q(eax_7)
                eax_11 = neg.d((eax_9 - edx_2) s>> 1)
            case 2, 5, 8
                eax_11 = neg.d(eax_7)
            default
                eax_11 = 0
        
        int32_t ebx_1 = eax_11 + arg2
        int32_t eax_12
        
        if (esi_1 != 0)
            int32_t eax_13 = *(arg1 i+ 0x64)
            
            if (eax_13 != 0xffffffff)
                eax_12 = sub_5f9f90(eax_13)
                ecx_3 = var_f4
            else
                eax_12 = 0
        else
            eax_12 = 0
        
        int32_t eax_16
        
        switch (ecx_3)
            case 3, 4, 5
                int32_t eax_14
                int32_t edx_4
                edx_4:eax_14 = sx.q(eax_12)
                eax_16 = neg.d((eax_14 - edx_4) s>> 1)
            case 6, 7, 8
                eax_16 = neg.d(eax_12)
            default
                eax_16 = 0
        
        int32_t esi_2 = eax_16 + arg3
        int32_t ecx_5 = *(var_e4 i+ 0x74)
        eax_1 = *(arg1 i+ 0x68)
        
        if (eax_1 != 0 && *(arg1 i+ 0x64) != 0xffffffff)
            eax_1 = sub_5f9e50(0, 0, 0, 0)
        
        if (*(arg1 i+ 0x68) != 0)
            int32_t* ecx_7 = *(arg1 i+ 0x64)
            
            if (ecx_7 != 0xffffffff)
                enum MESSAGEBOX_RESULT eax_22 = sub_409460(ecx_7, 
                    ebx_1 - mods.dp.d(sx.q(ebx_1), ecx_5), esi_2 - mods.dp.d(sx.q(esi_2), ecx_5))
                sub_6b4885(var_c ^ &var_f4)
                return eax_22

sub_6b4885(var_c ^ &var_f4)
return eax_1
