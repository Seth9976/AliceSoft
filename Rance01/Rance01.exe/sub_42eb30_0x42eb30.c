// 函数: sub_42eb30
// 地址: 0x42eb30
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* result = arg2

if (result[6] != 0 && arg1 != 0 && arg1[1] != 0)
    result = *arg1
    
    if (result != 0xffffffff)
        result = sub_5f9dd0(result)
        int32_t* result_1 = result
        
        if (result_1 != 0)
            float var_98 = 3.57331108e-43f
            float var_68
            __builtin_memcpy(&var_68, 
                "\xff\x00\x00\x00\xff\x00\x00\x00\xff\x00\x00\x00\xff\x00\x00\x00\x00", 0x11)
            float var_90 = 0f
            int32_t var_50 = 0
            int32_t var_4c_1 = 0
            int32_t var_48_1 = 0
            int32_t var_44_1 = 0
            bool var_a0 = false
            float var_40[0x10]
            sub_42e110(&var_40)
            bool var_58
            int80_t st0_1
            st0_1, result = sub_42ef30(arg2, arg6, &var_68, &var_50, &var_98, &var_90, &var_a0, 
                &var_58, &var_40)
            
            if (result.b != 0)
                int32_t var_b0 = (*(*result_1 + 0x10))()
                int32_t var_ac = (*(*result_1 + 0x14))()
                int32_t* eax_6 = *arg6
                float var_88 = 0f
                int32_t var_84_1 = 0
                int32_t var_80_1 = 0
                int32_t var_7c_1 = 0
                
                if (eax_6 != arg6[1])
                    void* eax_7 = *eax_6
                    int32_t edx_4 = *(eax_7 + 0x38)
                    int32_t edi_1 = *(eax_7 + 0x3c)
                    int32_t eax_8 = *(eax_7 + 0x40)
                    var_88 = *(eax_7 + 0x34)
                    int32_t var_84_2 = edx_4
                    int32_t var_80_2 = edi_1
                    int32_t var_7c_2 = eax_8
                
                int32_t eax_9 = var_58.d
                long double x87_r6_1 = float.t(0)
                char ecx_4 = (var_a0.d).b
                float var_78 = fconvert.s(x87_r6_1)
                int32_t var_c4_2 = eax_9
                float var_74_1 = fconvert.s(x87_r6_1)
                float var_70 = fconvert.s(x87_r6_1)
                float var_6c_1 = fconvert.s(x87_r6_1)
                float* edx_5 = &var_78
                sub_42f2c0(&var_70, edx_5, &var_b0, &var_ac, &var_88, ecx_4)
                sub_5e8180(arg1, edx_5, var_98)
                
                if (arg1[1] != 0)
                    void* eax_11 = *arg1
                    int32_t var_64
                    int32_t var_60
                    
                    if (eax_11 != 0xffffffff)
                        sub_407bb0(eax_11, var_60, var_68, var_64, var_60)
                
                sub_5e81b0(arg1, var_50, var_4c_1)
                int32_t* edi_2
                
                if (arg1[1] == 0)
                    edi_2 = arg3
                else
                    void* eax_14 = *arg1
                    
                    if (eax_14 != 0xffffffff)
                        sub_409870(var_90, eax_14)
                    
                    if (arg1[1] == 0)
                        edi_2 = arg3
                    else
                        int32_t* ecx_11 = *arg1
                        
                        if (ecx_11 == 0xffffffff)
                            edi_2 = arg3
                        else
                            edi_2 = arg3
                            sub_409560(ecx_11, *edi_2)
                
                sub_5e8150(arg1, arg4)
                
                if (arg1[1] != 0)
                    void* eax_16 = *arg1
                    
                    if (eax_16 != 0xffffffff)
                        sub_5fa090(eax_16, arg5)
                
                long double x87_r6_2 = float.t(0)
                *edi_2 += 1
                var_68 = fconvert.s(x87_r6_2)
                var_88 = fconvert.s(x87_r6_2)
                var_98 = fconvert.s(float.t(var_b0))
                long double x87_r5_2 = fconvert.t(var_98)
                float var_a8_1 = fconvert.s(x87_r5_2)
                var_90 = fconvert.s(x87_r6_2)
                var_98 = fconvert.s(x87_r6_2)
                var_b0 = fconvert.s(float.t(var_ac))
                long double x87_r4_2 = fconvert.t(var_b0)
                float var_a4_1 = fconvert.s(x87_r4_2)
                var_b0 = fconvert.s(x87_r4_2)
                var_ac = fconvert.s(x87_r5_2)
                
                if (var_a0 == 0)
                    if (var_58 != 0)
                        var_68 = fconvert.s(x87_r6_2)
                        var_98 = fconvert.s(x87_r6_2)
                        var_88 = fconvert.s(fconvert.t(var_a4_1))
                        var_a4_1 = fconvert.s(x87_r6_2)
                        var_a0.d = fconvert.s(fconvert.t(var_a8_1))
                        var_a8_1 = fconvert.s(fconvert.t(var_ac))
                        var_ac = fconvert.s(fconvert.t(var_a0.d))
                        var_90 = fconvert.s(fconvert.t(var_b0))
                        var_b0 = fconvert.s(x87_r6_2)
                else if (var_58 != 0)
                    var_68 = fconvert.s(fconvert.t(var_ac))
                    var_ac = fconvert.s(x87_r6_2)
                    var_88 = fconvert.s(fconvert.t(var_b0))
                    var_b0 = fconvert.s(x87_r6_2)
                    var_a0.d = fconvert.s(fconvert.t(var_a8_1))
                    var_a8_1 = fconvert.s(x87_r6_2)
                    var_98 = fconvert.s(fconvert.t(var_a0.d))
                    var_90 = fconvert.s(fconvert.t(var_a4_1))
                    var_a4_1 = fconvert.s(x87_r6_2)
                else
                    var_68 = fconvert.s(fconvert.t(var_a8_1))
                    var_a8_1 = fconvert.s(x87_r6_2)
                    var_88 = fconvert.s(x87_r6_2)
                    var_90 = fconvert.s(x87_r6_2)
                    var_98 = fconvert.s(fconvert.t(var_ac))
                    var_ac = fconvert.s(x87_r6_2)
                    var_a0.d = fconvert.s(fconvert.t(var_a4_1))
                    var_a4_1 = fconvert.s(fconvert.t(var_b0))
                    var_b0 = fconvert.s(fconvert.t(var_a0.d))
                
                var_68 = fconvert.s(fconvert.t(var_68))
                float* ecx_13 = arg2[5]
                float var_64_1 = fconvert.s(fconvert.t(var_88))
                var_88 = fconvert.s(fconvert.t(var_a8_1))
                float var_84_3 = fconvert.s(fconvert.t(var_90))
                var_90 = fconvert.s(fconvert.t(var_98))
                float var_8c_1 = fconvert.s(fconvert.t(var_a4_1))
                var_58.d = fconvert.s(fconvert.t(var_ac))
                float var_54_1 = fconvert.s(fconvert.t(var_b0))
                long double x87_r6_16 = fconvert.t(var_78)
                var_98 = fconvert.s(x87_r6_16)
                long double x87_r5_17 = fconvert.t(var_74_1)
                float var_94_1 = fconvert.s(x87_r5_17)
                long double x87_r4_3 = fconvert.t(var_70)
                var_a0.d = fconvert.s(x87_r4_3)
                float var_9c_1 = fconvert.s(x87_r5_17)
                var_78 = fconvert.s(x87_r6_16)
                long double x87_r5_20 = fconvert.t(var_6c_1)
                float var_74_2 = fconvert.s(x87_r5_20)
                float var_6c_2 = fconvert.s(x87_r5_20)
                var_70 = fconvert.s(x87_r4_3)
                int80_t st0_2
                st0_2, result = sub_5e82d0(&var_58, arg1, 0, 0, &var_40, &var_68, &var_88, &var_90, 
                    &var_98, &var_a0, &var_78, &var_70, ecx_13)
            else if (arg1[1] != 0)
                void* esi_1 = *arg1
                
                if (esi_1 != 0xffffffff)
                    return sub_409760(esi_1, 0)

return result
