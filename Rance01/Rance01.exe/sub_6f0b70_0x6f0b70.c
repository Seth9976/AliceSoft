// 函数: sub_6f0b70
// 地址: 0x6f0b70
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_44
int32_t result = sub_6e0940(arg1 + 4, 8, 8, arg2, arg3, *(arg1 + 0x30), *(arg1 + 0x3c), 
    *(arg1 + 0x20), *(arg1 + 0x24), *(arg1 + 0x28), arg1 + 0x3814, &var_44)

if (result == 0)
    result = *(arg1 + 0x34)
    int32_t esi_1
    
    if (result == 2 && *(arg1 + 0x58) == 1)
        esi_1 = *(arg1 + 0x3814) + 2
    else
        esi_1 = *(arg1 + 0x3814)
    
    int32_t edx_2 = 0
    int32_t edi_1 = *(arg1 + 0x30)
    
    if (edi_1 s> 0)
        int32_t var_18_1 = edi_1
        int32_t var_1c_1 = esi_1
        int32_t var_24_1 = *(arg1 + 0x4834)
        
        while (true)
            int32_t var_40
            int32_t var_3c
            int32_t var_38
            
            if (edx_2 s< *(arg1 + 0x37c0))
                void* esi_2 = *(arg1 + 0x37cc)
                int32_t ecx_4 = edx_2 << 4
                void* edi_2 = esi_2 + ecx_4
                int32_t ebx_1 = *(edi_2 + 8)
                
                if (ebx_1 s> 0)
                    int32_t eax_3 = *(ecx_4 + esi_2 + 4)
                    int32_t esi_3 = 0
                    int32_t edx_3 = var_24_1
                    
                    do
                        int32_t ecx_5 = 0
                        
                        if (eax_3 s> 0)
                            int32_t ebx_2 = var_38
                            
                            do
                                int32_t esi_4 = var_40
                                
                                if (esi_4 s< ebx_2)
                                    int32_t eax_4 = var_3c
                                    int32_t edi_4 = esi_4 << 4
                                    int32_t edx_4 = var_18_1
                                    
                                    do
                                        int32_t ecx_6 = var_44
                                        
                                        if (ecx_6 s< eax_4)
                                            while (true)
                                                eax_4.b = *(edx_3 + edi_4 + (ecx_6 << 1))
                                                char* edx_5 = edx_4 * ecx_6
                                                ecx_6 += 1
                                                edx_5[esi_4 * *(arg1 + 0x3c) + var_1c_1] = eax_4.b
                                                eax_4 = var_3c
                                                
                                                if (ecx_6 s>= eax_4)
                                                    break
                                                
                                                edx_4 = *(arg1 + 0x30)
                                            
                                            edx_4 = *(arg1 + 0x30)
                                            ebx_2 = var_38
                                        
                                        edi_4 += 0x10
                                        esi_4 += 1
                                    while (esi_4 s< ebx_2)
                                    
                                    var_18_1 = edx_4
                                    edi_2 = *(arg1 + 0x37cc) + ecx_4
                                    eax_3 = *(edi_2 + 4)
                                
                                edx_3 += 0x80
                                ecx_5 += 1
                            while (ecx_5 s< eax_3)
                            
                            ebx_1 = *(edi_2 + 8)
                        
                        esi_3 += 1
                    while (esi_3 s< ebx_1)
                    
                    var_24_1 = edx_3
                    result = *(arg1 + 0x34)
            else if (edx_2 == 3 && result == 5)
                int32_t ecx_9 = var_40
                int32_t ebx_5 = var_38
                
                if (ecx_9 s< ebx_5)
                    int32_t eax_9 = var_3c
                    int32_t esi_9 = var_18_1
                    
                    do
                        int32_t edx_7 = var_44
                        
                        if (edx_7 s< eax_9)
                            while (true)
                                char* esi_10 = esi_9 * edx_7
                                edx_7 += 1
                                esi_10[ecx_9 * *(arg1 + 0x3c) + var_1c_1] = 0xff
                                eax_9 = var_3c
                                
                                if (edx_7 s>= eax_9)
                                    break
                                
                                esi_9 = *(arg1 + 0x30)
                            
                            esi_9 = *(arg1 + 0x30)
                            ebx_5 = var_38
                        
                        ecx_9 += 1
                    while (ecx_9 s< ebx_5)
                    
                    var_18_1 = esi_9
                    result = *(arg1 + 0x34)
                
                var_24_1 += 0x80
            
            int32_t ecx_7 = var_18_1
            int32_t ebx_4 = var_1c_1
            
            while (true)
                if (result == 2 && *(arg1 + 0x58) == 1)
                    ebx_4 -= 1
                else
                    ebx_4 += 1
                
                edx_2 += 1
                
                if (edx_2 s>= ecx_7)
                    return result
                
                if (edx_2 s<= 0)
                    var_18_1 = ecx_7
                    var_1c_1 = ebx_4
                    break
                
                if (*(arg1 + 0x58) != 4)
                    var_18_1 = ecx_7
                    var_1c_1 = ebx_4
                    break
                
                int32_t esi_6 = var_40
                int32_t edi_9 = var_38
                
                if (esi_6 s< edi_9)
                    int32_t eax_5 = var_3c
                    
                    do
                        int32_t edx_6 = var_44
                        
                        if (edx_6 s< eax_5)
                            while (true)
                                char* ecx_8 = ecx_7 * edx_6
                                
                                if (edx_2 s>= 3)
                                    ecx_8[esi_6 * *(arg1 + 0x3c) + ebx_4] = 0xff
                                else
                                    int32_t edi_12 = esi_6 * *(arg1 + 0x3c) + ebx_4
                                    eax_5.b = ecx_8[edi_12 - 1]
                                    ecx_8[edi_12] = eax_5.b
                                
                                edx_6 += 1
                                eax_5 = var_3c
                                
                                if (edx_6 s>= eax_5)
                                    break
                                
                                ecx_7 = *(arg1 + 0x30)
                            
                            ecx_7 = *(arg1 + 0x30)
                            edi_9 = var_38
                        
                        esi_6 += 1
                    while (esi_6 s< edi_9)
                    
                    result = *(arg1 + 0x34)

return result
