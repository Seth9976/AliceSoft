// 函数: sub_425510
// 地址: 0x425510
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

float var_60
int32_t eax_1 = data_78c474 ^ &var_60
*arg2 = 0
int32_t* eax_2 = *arg1

if (eax_2 != 0)
    if ((*(*eax_2 + 0x1c))(eax_2) s>= 0)
        int32_t* eax_4 = *arg1
        
        if ((*(*eax_4 + 0x64))(eax_4) s< 0)
            int32_t eax_6 = arg1[2]
            
            for (int32_t* i = arg1[1]; i != eax_6; i = &i[1])
                *i = 0
            
            eax_6.b = 0
            sub_6b4885(eax_1 ^ &var_60)
            return 
        
        int32_t var_5c
        sub_6bc670(&var_5c, 0, 0x50)
        int32_t* eax_7 = *arg1
        int32_t eax_9
        int32_t* ecx_7
        eax_9, ecx_7 = (*(*eax_7 + 0x24))(eax_7, 0x50, &var_5c)
        
        if (eax_9 s< 0)
            int32_t eax_10 = arg1[2]
            int32_t esi_1 = arg1[1]
            int32_t var_70_4 = eax_10
            var_60 = 0f
            sub_425840(eax_10, &var_60, ecx_7, esi_1)
            int32_t* eax_11
            eax_11.b = 0
            sub_6b4885(eax_1 ^ &var_60)
            return 
        
        int32_t eax_12 = var_5c
        
        if (eax_12 s< 0x5555)
            *(arg1[1] + 4) = 1
            *(arg1[1] + 8) = 0
        else if (eax_12 s<= 0xaaaa)
            *(arg1[1] + 4) = 0
            *(arg1[1] + 8) = 0
        else
            *(arg1[1] + 4) = 0
            *(arg1[1] + 8) = 1
        
        int32_t var_58
        
        if (var_58 s< 0x5555)
            *(arg1[1] + 0xc) = 1
            *(arg1[1] + 0x10) = 0
        else if (var_58 s<= 0xaaaa)
            *(arg1[1] + 0xc) = 0
            *(arg1[1] + 0x10) = 0
        else
            *(arg1[1] + 0xc) = 0
            *(arg1[1] + 0x10) = 1
        
        int32_t ecx_14 = 0
        
        for (uint32_t* i_1 = 0x18; i_1 s< 0x98; )
            void var_2c
            *(i_1 + arg1[1] - 4) = zx.d(*(&var_2c + ecx_14)) u>> 7
            void var_2b
            *(i_1 + arg1[1]) = zx.d(*(&var_2b + ecx_14)) u>> 7
            void var_2a
            *(i_1 + arg1[1] + 4) = zx.d(*(&var_2a + ecx_14)) u>> 7
            char var_29[0x21]
            *(i_1 + arg1[1] + 8) = zx.d(var_29[ecx_14]) u>> 7
            i_1 = &i_1[4]
            ecx_14 += 4
        
        int32_t ecx_15 = 0
        int32_t eax_20 = (arg1[2] - arg1[1]) s>> 2
        
        if (eax_20 s> 0)
            int32_t* edx_16 = arg1[1]
            
            do
                if (*edx_16 != 0)
                    *arg2 = 1
                    break
                
                ecx_15 += 1
                edx_16 = &edx_16[1]
            while (ecx_15 s< eax_20)
        
        long double x87_r6 = fconvert.t(32768.0)
        long double x87_r5 = fconvert.t(3.0517578125e-05)
        var_60 = fconvert.s((float.t(var_5c) - x87_r6) * x87_r5)
        long double x87_r5_2 = fconvert.t(var_60)
        arg1[5] = fconvert.s(x87_r5_2)
        var_60 = fconvert.s((float.t(var_58) - x87_r6) * x87_r5)
        long double x87_r4_3 = fconvert.t(var_60)
        arg1[6] = fconvert.s(x87_r4_3)
        int32_t var_54
        var_60 = fconvert.s((float.t(var_54) - x87_r6) * x87_r5)
        arg1[7] = fconvert.s(fconvert.t(var_60))
        int32_t var_48
        var_60 = fconvert.s(x87_r5 * (float.t(var_48) - x87_r6))
        long double x87_r4_5 = fconvert.t(var_60)
        arg1[8] = fconvert.s(x87_r4_5)
        long double x87_r3_5 = fconvert.t(-0.20000000298023224)
        x87_r3_5 - x87_r5_2
        eax_20.w = (x87_r3_5 < x87_r5_2 ? 1 : 0) << 8
            | (is_unordered.t(x87_r3_5, x87_r5_2) ? 1 : 0) << 0xa
            | (x87_r3_5 == x87_r5_2 ? 1 : 0) << 0xe | 0x1800
        
        if ((eax_20:1.b & 0x41) == 0)
            *arg2 = 1
        else
            long double x87_r2_1 = fconvert.t(0.20000000298023224)
            x87_r2_1 - x87_r5_2
            eax_20.w = (x87_r2_1 < x87_r5_2 ? 1 : 0) << 8
                | (is_unordered.t(x87_r2_1, x87_r5_2) ? 1 : 0) << 0xa
                | (x87_r2_1 == x87_r5_2 ? 1 : 0) << 0xe | 0x1000
            bool p_1 = unimplemented  {test ah, 0x5}
            
            if (not(p_1))
                *arg2 = 1
            else
                x87_r3_5 - x87_r4_3
                eax_20.w = (x87_r3_5 < x87_r4_3 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r3_5, x87_r4_3) ? 1 : 0) << 0xa
                    | (x87_r3_5 == x87_r4_3 ? 1 : 0) << 0xe | 0x1800
                
                if ((eax_20:1.b & 0x41) == 0)
                    *arg2 = 1
                else
                    x87_r4_3 - x87_r5_2
                    eax_20.w = (x87_r4_3 < x87_r5_2 ? 1 : 0) << 8
                        | (is_unordered.t(x87_r4_3, x87_r5_2) ? 1 : 0) << 0xa
                        | (x87_r4_3 == x87_r5_2 ? 1 : 0) << 0xe | 0x2000
                    
                    if ((eax_20:1.b & 0x41) == 0)
                        *arg2 = 1
                    else
                        x87_r2_1 - x87_r3_5
                        eax_20.w = (x87_r2_1 < x87_r3_5 ? 1 : 0) << 8
                            | (is_unordered.t(x87_r2_1, x87_r3_5) ? 1 : 0) << 0xa
                            | (x87_r2_1 == x87_r3_5 ? 1 : 0) << 0xe | 0x2000
                        bool p_2 = unimplemented  {test ah, 0x5}
                        
                        if (not(p_2))
                            *arg2 = 1
                        else
                            x87_r2_1 - x87_r5_2
                            eax_20.w = (x87_r2_1 < x87_r5_2 ? 1 : 0) << 8
                                | (is_unordered.t(x87_r2_1, x87_r5_2) ? 1 : 0) << 0xa
                                | (x87_r2_1 == x87_r5_2 ? 1 : 0) << 0xe | 0x2800
                            
                            if ((eax_20:1.b & 0x41) == 0)
                                *arg2 = 1
                            else
                                x87_r3_5 - x87_r4_5
                                eax_20.w = (x87_r3_5 < x87_r4_5 ? 1 : 0) << 8
                                    | (is_unordered.t(x87_r3_5, x87_r4_5) ? 1 : 0) << 0xa
                                    | (x87_r3_5 == x87_r4_5 ? 1 : 0) << 0xe | 0x3000
                                
                                if ((eax_20:1.b & 0x41) == 0)
                                    *arg2 = 1
                                else
                                    x87_r4_5 - x87_r5_2
                                    eax_20.w = (x87_r4_5 < x87_r5_2 ? 1 : 0) << 8
                                        | (is_unordered.t(x87_r4_5, x87_r5_2) ? 1 : 0) << 0xa
                                        | (x87_r4_5 == x87_r5_2 ? 1 : 0) << 0xe
                                    
                                    if ((eax_20:1.b & 0x41) == 0)
                                        *arg2 = 1
        
        eax_20.b = 1
        sub_6b4885(eax_1 ^ &var_60)
        return 
    
    eax_2 = arg1[2]
    
    for (int32_t* i_2 = arg1[1]; i_2 != eax_2; i_2 = &i_2[1])
        *i_2 = 0

eax_2.b = 0
sub_6b4885(eax_1 ^ &var_60)
