// 函数: sub_5ac340
// 地址: 0x5ac340
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void var_174
int32_t eax_1 = data_78c474 ^ &var_174
char eax_2 = (*(arg4 + 0x6c)).b

if ((eax_2 & 1) == 0)
    sub_5a5c60(arg4, "Missing IHDR before cHRM")
    noreturn

uint32_t result

if ((eax_2 & 4) == 0)
    if ((eax_2 & 2) != 0)
        sub_5a5de0("Out of place cHRM chunk", arg4)
    
    int32_t eax_4
    
    if (arg3 != 0)
        eax_4 = *(arg3 + 8)
    
    if (arg3 != 0 && (eax_4.b & 4) != 0 && (eax_4 & 0x800) == 0)
        sub_5a5de0("Duplicate cHRM chunk", arg4)
        result = sub_5ab650(arg4, arg5)
    else if (arg5 == 0x20)
        int32_t eax_5 = *(arg4 + 0x54)
        
        if (eax_5 == 0)
            sub_5a5c60(arg4, "Call to NULL read function")
            noreturn
        
        void var_12c
        int32_t edx = eax_5(arg4, &var_12c, 0x20)
        int32_t ebp_1 = 0x20
        void* edi_1 = &var_12c
        
        if ((*(arg4 + 0x100) & 0x20000000) != 0)
            edx = *(arg4 + 0x70) & 0x300
            
            if (edx != 0x300)
                goto label_5ac430
        else if ((*(arg4 + 0x70) & 0x800) == 0)
        label_5ac430:
            int32_t eax_6 = *(arg4 + 0x124)
            int32_t esi_3
            int32_t temp0_1
            
            do
                esi_3 = ebp_1
                
                if (ebp_1 == 0)
                    esi_3 = 0xffffffff
                
                if (edi_1 != 0)
                    eax_6, edx = sub_59e5d0(eax_6, edx, edi_1, esi_3)
                else
                    eax_6 = 0
                
                edi_1 += esi_3
                temp0_1 = ebp_1
                ebp_1 -= esi_3
            while (temp0_1 != esi_3)
            *(arg4 + 0x124) = eax_6
        
        result = sub_5ab650(arg4, 0)
        
        if (result == 0)
            uint32_t eax_7 = sub_5ab3b0(&var_12c)
            void var_128
            uint32_t esi_4 = sub_5ab3b0(&var_128)
            void var_124
            uint32_t edi_2 = sub_5ab3b0(&var_124)
            void var_120
            uint32_t eax_10 = sub_5ab3b0(&var_120)
            void var_11c
            uint32_t eax_11 = sub_5ab3b0(&var_11c)
            void var_118
            uint32_t var_170 = sub_5ab3b0(&var_118)
            void var_114
            uint32_t eax_13 = sub_5ab3b0(&var_114)
            void var_110
            result = sub_5ab3b0(&var_110)
            uint32_t ecx_12
            
            if (eax_7 != 0xffffffff && esi_4 != 0xffffffff && edi_2 != 0xffffffff)
                ecx_12 = eax_10
            
            if (eax_7 == 0xffffffff || esi_4 == 0xffffffff || edi_2 == 0xffffffff
                    || ecx_12 == 0xffffffff || eax_11 == 0xffffffff || var_170 == 0xffffffff
                    || eax_13 == 0xffffffff || result == 0xffffffff)
                result = sub_5a5de0("Ignoring cHRM chunk with negative chromaticities", arg4)
            else if (arg3 == 0 || (*(arg3 + 8) & 0x800) == 0)
                if (*(arg4 + 0x252) == 0)
                    uint32_t edx_15 = var_170
                    uint32_t var_148_1 = eax_11
                    int32_t var_150 = edi_2
                    uint32_t result_1 = result
                    uint32_t var_144_1 = edx_15
                    uint32_t var_138_1 = eax_7
                    void* var_1a8_1 = arg4
                    void var_1a4
                    __builtin_memcpy(&var_1a4, &var_150, 0x20)
                    int32_t eax_22
                    int16_t x87control_1
                    eax_22, x87control_1 = sub_5a4dd0(&var_150, edx_15)
                    
                    if (eax_22 != 0)
                        void* var_18c_2
                        int32_t edi_5
                        int32_t mxcsr
                        
                        if (ecx_12 == 0)
                            edi_5 = 0
                        else
                            var_18c_2.q = fconvert.d(
                                float.t(ecx_12) * fconvert.t(32768.0) / fconvert.t(100000.0)
                                + fconvert.t(0.5))
                            long double st0_1
                            st0_1, x87control_1 = sub_70cb70(mxcsr, x87control_1, var_18c_2)
                            long double x87_r6_1 = fconvert.t(2147483647.0)
                            x87_r6_1 - st0_1
                            
                            if ((((x87_r6_1 < st0_1 ? 1 : 0) << 8
                                    | (is_unordered.t(x87_r6_1, st0_1) ? 1 : 0) << 0xa
                                    | (x87_r6_1 == st0_1 ? 1 : 0) << 0xe | 0x3800):1.b & 1) != 0)
                                sub_5a5c60(arg4, "internal error handling cHRM->XYZ")
                                noreturn
                            
                            fconvert.t(-2147483648.0) - st0_1
                            bool p_1 = unimplemented  {test ah, 0x41}
                            
                            if (p_1)
                                sub_5a5c60(arg4, "internal error handling cHRM->XYZ")
                                noreturn
                            
                            edi_5 = sub_70c710(st0_1)
                            
                            if (edi_5 s< 0 || edi_5 s> 0x8000)
                                sub_5a5c60(arg4, "internal error handling cHRM->XYZ")
                                noreturn
                        
                        int32_t esi_5
                        
                        if (eax_13 == 0)
                            esi_5 = 0
                        else
                            var_18c_2.q = fconvert.d(
                                float.t(eax_13) * fconvert.t(32768.0) / fconvert.t(100000.0)
                                + fconvert.t(0.5))
                            long double st0_2
                            st0_2, x87control_1 = sub_70cb70(mxcsr, x87control_1, var_18c_2)
                            long double x87_r6_3 = fconvert.t(2147483647.0)
                            x87_r6_3 - st0_2
                            
                            if ((((x87_r6_3 < st0_2 ? 1 : 0) << 8
                                    | (is_unordered.t(x87_r6_3, st0_2) ? 1 : 0) << 0xa
                                    | (x87_r6_3 == st0_2 ? 1 : 0) << 0xe | 0x3800):1.b & 1) != 0)
                                sub_5a5c60(arg4, "internal error handling cHRM->XYZ")
                                noreturn
                            
                            fconvert.t(-2147483648.0) - st0_2
                            bool p_2 = unimplemented  {test ah, 0x41}
                            
                            if (p_2)
                                sub_5a5c60(arg4, "internal error handling cHRM->XYZ")
                                noreturn
                            
                            esi_5 = sub_70c710(st0_2)
                            
                            if (esi_5 s< 0 || esi_5 s> 0x8000)
                                sub_5a5c60(arg4, "internal error handling cHRM->XYZ")
                                noreturn
                        
                        int32_t eax_28
                        
                        if (esi_4 == 0)
                            eax_28 = 0
                        else
                            var_18c_2.q = fconvert.d(
                                float.t(esi_4) * fconvert.t(32768.0) / fconvert.t(100000.0)
                                + fconvert.t(0.5))
                            long double x87_r7_5 = sub_70cb70(mxcsr, x87control_1, var_18c_2)
                            long double x87_r6_5 = fconvert.t(2147483647.0)
                            x87_r6_5 - x87_r7_5
                            
                            if ((((x87_r6_5 < x87_r7_5 ? 1 : 0) << 8
                                    | (is_unordered.t(x87_r6_5, x87_r7_5) ? 1 : 0) << 0xa
                                    | (x87_r6_5 == x87_r7_5 ? 1 : 0) << 0xe | 0x3800):1.b & 1) != 0)
                                sub_5a5c60(arg4, "internal error handling cHRM->XYZ")
                                noreturn
                            
                            fconvert.t(-2147483648.0) - x87_r7_5
                            bool p_3 = unimplemented  {test ah, 0x41}
                            
                            if (p_3)
                                sub_5a5c60(arg4, "internal error handling cHRM->XYZ")
                                noreturn
                            
                            eax_28 = sub_70c710(x87_r7_5)
                            
                            if (eax_28 s< 0 || eax_28 s> 0x8000)
                                sub_5a5c60(arg4, "internal error handling cHRM->XYZ")
                                noreturn
                        
                        int32_t ecx_21 = eax_28 + esi_5 + edi_5
                        
                        if (ecx_21 s> 0x8001)
                            sub_5a5c60(arg4, "internal error handling cHRM->XYZ")
                            noreturn
                        
                        int32_t ecx_22
                        
                        if (ecx_21 s> 0x8000)
                            ecx_22 = 0xffffffff
                        label_5ac859:
                            
                            if (edi_5 s> esi_5)
                                if (edi_5 s< eax_28)
                                    eax_28 += ecx_22
                                else
                                    edi_5 += ecx_22
                            else if (esi_5 s>= eax_28)
                                esi_5 += ecx_22
                            else if (edi_5 s< esi_5 || edi_5 s< eax_28)
                                eax_28 += ecx_22
                            else
                                edi_5 += ecx_22
                        else if (ecx_21 s< 0x8000)
                            ecx_22 = 1
                            goto label_5ac859
                        
                        if (eax_28 + esi_5 + edi_5 != 0x8000)
                            sub_5a5c60(arg4, "internal error handling cHRM coefficients")
                            noreturn
                        
                        *(arg4 + 0x254) = edi_5.w
                        *(arg4 + 0x256) = esi_5.w
                    
                    ecx_12 = eax_10
                
                uint32_t var_188_13 = eax_13
                uint32_t var_18c_4 = var_170
                result = sub_5afe20(arg4, arg3, result, eax_11, ecx_12, eax_7, esi_4, edi_2, 
                    ecx_12, eax_11)
            else if (eax_7 - 0x763e u> 0x7d0 || esi_4 - 0x7c9c u> 0x7d0 || edi_2 - 0xf618 u> 0x7d0
                    || ecx_12 - 0x7d00 u> 0x7d0 || eax_11 - 0x7148 u> 0x7d0
                    || var_170 - 0xe678 u> 0x7d0 || eax_13 - 0x36b0 u> 0x7d0 || result s< 0x1388
                    || result s> 0x1b58)
                void var_10c
                void* edi_4 = &var_10c
                sub_5a5eb0(
                    sub_5a5eb0(
                        sub_5a5eb0(
                            sub_5a5eb0(
                                sub_5a5eb0(
                                    sub_5a5eb0(
                                        sub_5a5eb0(sub_5a5eb0(result, eax_7, 5, edi_4, 1), esi_4, 
                                            5, edi_4, 2), 
                                        edi_2, 5, edi_4, 3), 
                                    eax_10, 5, edi_4, 4), 
                                eax_11, 5, edi_4, 5), 
                            var_170, 5, edi_4, 6), 
                        eax_13, 5, edi_4, 7), 
                    result, 5, edi_4, 8)
                result = sub_5a5f20(arg4, &var_10c, 
                    "Ignoring incorrect cHRM white(@1,@2) r(@3,@4)g(@5,@6)b(@7,@8) when sRGB is also "
                "present")
    else
        sub_5a5de0("Incorrect cHRM chunk length", arg4)
        result = sub_5ab650(arg4, arg5)
else
    sub_5a5de0("Invalid cHRM after IDAT", arg4)
    result = sub_5ab650(arg4, arg5)

sub_6b4885(eax_1 ^ &var_174)
return result
