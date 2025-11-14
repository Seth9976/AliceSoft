// 函数: sub_6f37b0
// 地址: 0x6f37b0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

char* var_3c = nullptr
int32_t var_38 = 0
int32_t var_34 = 0
uint32_t var_30
int32_t result = sub_6f2b00(arg2, &var_30)

if (result == 0)
    uint32_t eax_1 = var_30
    
    if (eax_1 s>= 2)
        var_30 = eax_1 - 2
        
        if (eax_1 - 2 s<= 0x204)
            result = sub_6f2920(arg2, eax_1 - 2, &var_38, &var_3c, &var_34)
            
            if (result == 0)
                int32_t ebp_1 = 0
                
                while (ebp_1 s< var_30)
                    uint32_t esi_1 = zx.d(*var_3c)
                    int32_t eax_7 = esi_1 & 0xf
                    
                    if (eax_7 s> 4)
                        result = 0xfffffff9
                        break
                    
                    int32_t esi_2 = esi_1 s>> 4
                    int32_t edi = eax_7 * 0xb4
                    *(arg1 + edi + 0x94) = esi_2
                    void* edx_5 = &var_3c[1]
                    var_3c = edx_5
                    
                    if (*(arg1 + 0x84) s<= eax_7)
                        *(arg1 + 0x84) = eax_7 + 1
                    
                    void* var_1c_1 = edx_5
                    void* ecx_3
                    int32_t esi_14
                    
                    if (esi_2 == 0)
                        ecx_3 = arg1 + edi + 0x9c
                        int32_t ebp_3 = 0
                        
                        while (true)
                            *(*(edi + arg1 + 0x9c) + (ebp_3 << 1)) = zx.w(*(edx_5 + ebp_3))
                            *(*(edi + arg1 + 0x9c) + (ebp_3 << 1) + 2) = zx.w(var_3c[ebp_3 + 1])
                            *(*(edi + arg1 + 0x9c) + (ebp_3 << 1) + 4) = zx.w(var_3c[ebp_3 + 2])
                            *(*(edi + arg1 + 0x9c) + (ebp_3 << 1) + 6) = zx.w(var_3c[ebp_3 + 3])
                            ebp_3 += 4
                            
                            if (ebp_3 s>= 0x40)
                                break
                            
                            edx_5 = var_3c
                        
                        esi_14 = esi_2
                        ebp_1 += 0x41
                        var_3c = &var_3c[0x40]
                    else
                        ecx_3 = arg1 + edi + 0x9c
                        int32_t ebp_2 = 0
                        
                        while (true)
                            uint32_t edx_6 = zx.d(*(edx_5 + (ebp_2 << 1)))
                            *(*(edi + arg1 + 0x9c) + (ebp_2 << 1)) =
                                ((edx_6 & 0xff00) s>> 8).w | (edx_6 << 8).w
                            uint32_t esi_7 = zx.d(*(var_3c + (ebp_2 << 1) + 2))
                            *(*(edi + arg1 + 0x9c) + (ebp_2 << 1) + 2) =
                                ((esi_7 & 0xff00) s>> 8).w | (esi_7 << 8).w
                            ebp_2 += 2
                            
                            if (ebp_2 s>= 0x40)
                                break
                            
                            edx_5 = var_3c
                        
                        esi_14 = esi_2
                        ebp_1 += 0x81
                        var_3c = &var_3c[0x80]
                    
                    char* edx_23 = *(arg1 + (eax_7 << 3) + 0x371c)
                    
                    if (edx_23 != 0)
                        *(arg1 + (eax_7 << 3) + 0x3720) = eax_7.b
                        
                        if (esi_14 == 0)
                            int32_t var_28_3 = 0
                            int32_t var_2c_2 = eax_7
                            
                            while (true)
                                eax_7.b = *(var_1c_1 + var_28_3)
                                edx_23[var_28_3] = eax_7.b
                                edx_23.b = *(var_1c_1 + var_28_3 + 1)
                                *(var_28_3 + *(arg1 + (var_2c_2 << 3) + 0x371c) + 1) = edx_23.b
                                int32_t ecx_4
                                ecx_4.b = *(var_1c_1 + var_28_3 + 2)
                                *(var_28_3 + *(arg1 + (var_2c_2 << 3) + 0x371c) + 2) = ecx_4.b
                                int32_t edx_25
                                edx_25.b = *(var_1c_1 + var_28_3 + 3)
                                *(var_28_3 + *(arg1 + (var_2c_2 << 3) + 0x371c) + 3) = edx_25.b
                                bool cond:2_1 = var_28_3 + 4 s< 0x40
                                var_28_3 += 4
                                
                                if (not(cond:2_1))
                                    break
                                
                                edx_23 = *(arg1 + (var_2c_2 << 3) + 0x371c)
                        else
                            int32_t var_18_1 = 0
                            void* var_24_1 = ecx_3
                            int32_t var_2c_1 = eax_7
                            
                            while (true)
                                eax_7.b = *(var_1c_1 + var_18_1)
                                edx_23[var_18_1] = eax_7.b
                                edx_23.b = *(var_1c_1 + var_18_1 + 1)
                                *(var_18_1 + *(arg1 + (var_2c_1 << 3) + 0x371c) + 1) = edx_23.b
                                ecx_3.b = *(var_1c_1 + var_18_1 + 2)
                                *(var_18_1 + *(arg1 + (var_2c_1 << 3) + 0x371c) + 2) = ecx_3.b
                                int32_t edx_24
                                edx_24.b = *(var_1c_1 + var_18_1 + 3)
                                *(var_18_1 + *(arg1 + (var_2c_1 << 3) + 0x371c) + 3) = edx_24.b
                                bool cond:3_1 = var_18_1 + 4 u< 0x80
                                var_18_1 += 4
                                
                                if (not(cond:3_1))
                                    break
                                
                                edx_23 = *(arg1 + (var_2c_1 << 3) + 0x371c)
                            
                            ecx_3 = var_24_1
                    
                    if (arg3 == 0)
                        sub_6cea70(*ecx_3)
                        int32_t eax_12 = *(arg1 + 0x80)
                        
                        if (eax_12 s< 4)
                            *(arg1 + 0x80) = eax_12 + 1
                    else if (arg3 != 1)
                        sub_6cea70(*ecx_3)
                        int32_t eax_19 = *(arg1 + 0x80)
                        
                        if (eax_19 s< 4)
                            *(arg1 + 0x80) = eax_19 + 1
                    else
                        sub_6d28e0(*ecx_3)
                        int32_t eax_16 = *(arg1 + 0x80)
                        
                        if (eax_16 s< 4)
                            *(arg1 + 0x80) = eax_16 + 1
        else
            result = 0xffffffeb
    else
        result = 0xffffffeb

if (var_34 != 0)
    int32_t edx_2 = var_38
    
    if (edx_2 != 0)
        int32_t var_54_1 = edx_2
        sub_6b4d5b()

return result
