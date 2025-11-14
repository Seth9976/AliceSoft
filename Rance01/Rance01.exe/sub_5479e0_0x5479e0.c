// 函数: sub_5479e0
// 地址: 0x5479e0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

uint32_t result

if (arg2[0x10].b != 0)
    uint32_t ecx = arg2[1]
    result = ecx u>> 2
    
    if (result s>= 2)
        uint32_t var_10_1
        
        if (ecx != 0)
            var_10_1 = *arg2
        else
            var_10_1 = ecx
        
        if (result s> 1)
            int32_t* edx_1 = var_10_1 + 4
            int32_t var_8_1 = 0
            int32_t* var_c_1 = edx_1
            int32_t var_4_1 = result - 1
            int32_t ecx_2 = 0
            
            while (true)
                int32_t ebp_1 = *edx_1
                int32_t ebx_1 = ecx_2
                
                if (ecx_2 s>= 0)
                    while (true)
                        int32_t* eax_2
                        
                        if (ebp_1 u< (*(arg3 + 0x1e8) - *(arg3 + 0x1e4)) s>> 2)
                            eax_2 = *(*(arg3 + 0x1e4) + (ebp_1 << 2))
                        else
                            eax_2 = nullptr
                        
                        int32_t eax_4
                        
                        if (eax_2[1] != 0)
                            eax_4 = *eax_2
                        else
                            eax_4 = 0
                        
                        int32_t eax_5 = *(eax_4 + (arg4 << 2))
                        int32_t* eax_6
                        
                        if (eax_5 u< (*(arg3 + 0x1e8) - *(arg3 + 0x1e4)) s>> 2)
                            eax_6 = *(*(arg3 + 0x1e4) + (eax_5 << 2))
                        else
                            eax_6 = nullptr
                        
                        char* ecx_7
                        
                        if (eax_6[1] != 0)
                            ecx_7 = *eax_6
                        else
                            ecx_7 = nullptr
                        
                        int32_t edi_1 = *(var_10_1 + (ebx_1 << 2))
                        int32_t* eax_11
                        
                        if (edi_1 u< (*(arg3 + 0x1e8) - *(arg3 + 0x1e4)) s>> 2)
                            eax_11 = *(*(arg3 + 0x1e4) + (edi_1 << 2))
                        else
                            eax_11 = nullptr
                        
                        int32_t eax_13
                        
                        if (eax_11[1] != 0)
                            eax_13 = *eax_11
                        else
                            eax_13 = 0
                        
                        int32_t eax_14 = *(eax_13 + (arg4 << 2))
                        void** eax_15
                        
                        if (eax_14 u< (*(arg3 + 0x1e8) - *(arg3 + 0x1e4)) s>> 2)
                            eax_15 = *(*(arg3 + 0x1e4) + (eax_14 << 2))
                        else
                            eax_15 = nullptr
                        
                        void* eax_16
                        
                        if (eax_15[1] != 0)
                            eax_16 = *eax_15
                        else
                            eax_16 = nullptr
                        
                        int32_t eax_18
                        
                        while (true)
                            int32_t edx_8
                            edx_8.b = *eax_16
                            char temp2_1 = *ecx_7
                            bool c_1 = edx_8.b u< temp2_1
                            
                            if (edx_8.b == temp2_1)
                                if (edx_8.b == 0)
                                    eax_18 = 0
                                    break
                                
                                edx_8.b = *(eax_16 + 1)
                                char temp5_1 = ecx_7[1]
                                c_1 = edx_8.b u< temp5_1
                                
                                if (edx_8.b == temp5_1)
                                    eax_16 += 2
                                    ecx_7 = &ecx_7[2]
                                    
                                    if (edx_8.b != 0)
                                        continue
                                    
                                    eax_18 = 0
                                    break
                            
                            bool c_2 = unimplemented  {sbb eax, eax}
                            eax_18 = sbb.d(sbb.d(eax_16, eax_16, c_1), 0xffffffff, c_2)
                            break
                        
                        if (eax_18 s<= 0)
                            break
                        
                        int32_t temp6_1 = ebx_1
                        ebx_1 -= 1
                        *(var_10_1 + (ebx_1 << 2) + 8) = edi_1
                        
                        if (temp6_1 - 1 s< 0)
                            break
                    
                    ecx_2 = var_8_1
                
                edx_1 = &var_c_1[1]
                ecx_2 += 1
                int32_t temp1_1 = var_4_1
                var_4_1 -= 1
                *(var_10_1 + (ebx_1 << 2) + 4) = ebp_1
                var_c_1 = edx_1
                var_8_1 = ecx_2
                
                if (temp1_1 == 1)
                    break

result.b = 1
return result
