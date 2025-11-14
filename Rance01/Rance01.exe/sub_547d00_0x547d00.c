// 函数: sub_547d00
// 地址: 0x547d00
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t eax

if (arg1[0x10].b != 0)
    eax = arg1[1]
    uint32_t edx_2 = eax u>> 2
    uint32_t var_8_1 = edx_2
    
    if (edx_2 s> 1)
        int32_t ebx_1
        
        if (eax != 0)
            ebx_1 = *arg1
        else
            ebx_1 = 0
        
        eax = 1
        int32_t var_10_1 = 1
        
        if (edx_2 s> 1)
            while (true)
                int32_t ecx = *(ebx_1 + (eax << 2))
                int32_t* ebp_1
                
                if (ecx u< (arg2[0x7a] - arg2[0x79]) s>> 2)
                    ebp_1 = *(arg2[0x79] + (ecx << 2))
                
                if (ecx u>= (arg2[0x7a] - arg2[0x79]) s>> 2 || ebp_1 == 0)
                    int32_t var_24_2 = ecx
                    return sub_53d1c0(eax, edx_2, arg2, 0x7500f0)
                
                int32_t edi_5 = eax - 1
                
                if (eax s>= 1)
                    while (true)
                        int128_t** eax_1 = *(ebx_1 + (edi_5 << 2))
                        
                        if (eax_1 u>= (arg2[0x7a] - arg2[0x79]) s>> 2)
                        label_547e65:
                            int32_t edx_6 = *(ebx_1 + (edi_5 << 2))
                            int32_t var_24_3 = edx_6
                            return sub_53d1c0(eax_1, edx_6, arg2, 0x75011c)
                        
                        eax_1 = *(arg2[0x79] + (eax_1 << 2))
                        
                        if (eax_1 == 0)
                            goto label_547e65
                        
                        bool cond:2_1
                        
                        if (arg3 != 0)
                            int128_t* eax_6
                            
                            if (eax_1[1] != 0)
                                eax_6 = *eax_1
                            else
                                eax_6 = nullptr
                            
                            int32_t var_c
                            int32_t eax_9
                            int32_t edx_5
                            eax_9, edx_5 = sub_547f50(&var_c, arg3, arg2, sub_54f940(ebp_1), eax_6)
                            
                            if (eax_9.b == 0)
                                sub_53d1c0(eax_9, edx_5, arg2, 0x750148)
                                int32_t* eax_13
                                eax_13.b = 0
                                return eax_13
                            
                            cond:2_1 = var_c s<= 0
                        else
                            int128_t* ecx_4
                            
                            if (eax_1[1] != arg3)
                                ecx_4 = *eax_1
                            else
                                ecx_4 = nullptr
                            
                            char* eax_3 = sub_54f940(ebp_1)
                            
                            while (true)
                                int32_t edx_4
                                edx_4.b = *ecx_4
                                char temp1_1 = *eax_3
                                bool c_1 = edx_4.b u< temp1_1
                                
                                if (edx_4.b == temp1_1)
                                    if (edx_4.b == 0)
                                        cond:2_1 = true
                                        break
                                    
                                    edx_4.b = *(ecx_4 + 1)
                                    char temp5_1 = eax_3[1]
                                    c_1 = edx_4.b u< temp5_1
                                    
                                    if (edx_4.b == temp5_1)
                                        ecx_4 += 2
                                        eax_3 = &eax_3[2]
                                        
                                        if (edx_4.b != 0)
                                            continue
                                        
                                        cond:2_1 = true
                                        break
                                
                                bool c_2 = unimplemented  {sbb eax, eax}
                                cond:2_1 = sbb.d(sbb.d(eax_3, eax_3, c_1), 0xffffffff, c_2) s<= 0
                                break
                        
                        if (cond:2_1)
                            break
                        
                        int32_t temp4_1 = edi_5
                        edi_5 -= 1
                        *(ebx_1 + (edi_5 << 2) + 8) = *(ebx_1 + (edi_5 << 2) + 4)
                        
                        if (temp4_1 - 1 s< 0)
                            break
                    
                    eax = var_10_1
                    edx_2 = var_8_1
                
                eax += 1
                *(ebx_1 + (edi_5 << 2) + 4) = ecx
                var_10_1 = eax
                
                if (eax s>= edx_2)
                    break

eax.b = 1
return eax
