// 函数: sub_6e3710
// 地址: 0x6e3710
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ebp = *(arg1 + 0x4834)
int32_t var_44
int32_t result = sub_6e0940(arg1 + 4, arg5, arg5, arg3, arg4, *(arg1 + 0x30), *(arg1 + 0x3c), 
    *(arg1 + 0x20), *(arg1 + 0x24), *(arg1 + 0x28), arg2 + 0x2c, &var_44)

if (result == 0)
    int32_t esi_2 = *(arg1 + 0x34)
    
    if (esi_2 == 2 && *(arg1 + 0x58) == 1)
        result = *(arg2 + 0x2c) + 2
    else
        result = *(arg2 + 0x2c)
    
    int32_t edx_2 = 0
    int32_t result_3 = *(arg1 + 0x30)
    
    if (result_3 s> 0)
        int32_t result_2 = result_3
        int32_t result_1 = result
        int32_t var_24_1 = ebp
        
        while (true)
            int32_t var_40
            int32_t var_3c
            int32_t var_38
            
            if (edx_2 s< *(arg1 + 0x37c0))
                int32_t ecx_3 = edx_2 << 4
                void* eax_4 = *(arg1 + 0x37cc)
                void* edi_1 = eax_4 + ecx_3
                int32_t ebp_1 = *(edi_1 + 8)
                
                if (ebp_1 s> 0)
                    int32_t eax_5 = *(ecx_3 + eax_4 + 4)
                    int32_t esi_3 = 0
                    int32_t edx_3 = var_24_1
                    
                    do
                        int32_t ecx_4 = 0
                        
                        if (eax_5 s> 0)
                            int32_t ebp_2 = var_38
                            
                            do
                                int32_t esi_4 = var_40
                                
                                if (esi_4 s< ebp_2)
                                    int32_t eax_6 = var_3c
                                    int32_t edi_3 = esi_4 << 4
                                    int32_t result_5 = result_2
                                    
                                    do
                                        int32_t ecx_5 = var_44
                                        
                                        if (ecx_5 s< eax_6)
                                            while (true)
                                                eax_6.b = *(edx_3 + edi_3 + (ecx_5 << 1))
                                                char* edx_4 = result_5 * ecx_5
                                                ecx_5 += 1
                                                edx_4[esi_4 * *(arg1 + 0x3c) + result_1] = eax_6.b
                                                eax_6 = var_3c
                                                
                                                if (ecx_5 s>= eax_6)
                                                    break
                                                
                                                result_5 = *(arg1 + 0x30)
                                            
                                            result_5 = *(arg1 + 0x30)
                                            ebp_2 = var_38
                                        
                                        edi_3 += 0x10
                                        esi_4 += 1
                                    while (esi_4 s< ebp_2)
                                    
                                    result_2 = result_5
                                    edi_1 = *(arg1 + 0x37cc) + ecx_3
                                    eax_5 = *(edi_1 + 4)
                                
                                edx_3 += 0x80
                                ecx_4 += 1
                            while (ecx_4 s< eax_5)
                            
                            ebp_1 = *(edi_1 + 8)
                        
                        esi_3 += 1
                    while (esi_3 s< ebp_1)
                    
                    var_24_1 = edx_3
                    esi_2 = *(arg1 + 0x34)
            else if (edx_2 == 3 && esi_2 == 5)
                int32_t ecx_6 = var_40
                int32_t ebp_8 = var_38
                
                if (ecx_6 s< ebp_8)
                    int32_t eax_8 = var_3c
                    int32_t result_6 = result_2
                    
                    do
                        int32_t edx_9 = var_44
                        
                        if (edx_9 s< eax_8)
                            while (true)
                                char* esi_7 = result_6 * edx_9
                                edx_9 += 1
                                esi_7[ecx_6 * *(arg1 + 0x3c) + result_1] = 0xff
                                eax_8 = var_3c
                                
                                if (edx_9 s>= eax_8)
                                    break
                                
                                result_6 = *(arg1 + 0x30)
                            
                            result_6 = *(arg1 + 0x30)
                            ebp_8 = var_38
                        
                        ecx_6 += 1
                    while (ecx_6 s< ebp_8)
                    
                    result_2 = result_6
                    esi_2 = *(arg1 + 0x34)
                
                var_24_1 += 0x80
            
            result = result_2
            int32_t result_4 = result_1
            
            while (true)
                if (esi_2 == 2 && *(arg1 + 0x58) == 1)
                    result_4 -= 1
                else
                    result_4 += 1
                
                edx_2 += 1
                
                if (edx_2 s>= result)
                    return result
                
                if (edx_2 s<= 0)
                    result_2 = result
                    result_1 = result_4
                    break
                
                if (*(arg1 + 0x58) != 4)
                    result_2 = result
                    result_1 = result_4
                    break
                
                int32_t ebp_5 = var_40
                int32_t edi_8 = var_38
                
                if (ebp_5 s< edi_8)
                    int32_t edx_5 = var_3c
                    
                    do
                        int32_t esi_6 = var_44
                        
                        if (esi_6 s< edx_5)
                            while (true)
                                char* eax_7 = result * esi_6
                                
                                if (edx_2 s>= 3)
                                    eax_7[ebp_5 * *(arg1 + 0x3c) + result_4] = 0xff
                                else
                                    int32_t edi_11 = ebp_5 * *(arg1 + 0x3c) + result_4
                                    edx_5.b = eax_7[edi_11 - 1]
                                    eax_7[edi_11] = edx_5.b
                                
                                esi_6 += 1
                                edx_5 = var_3c
                                
                                if (esi_6 s>= edx_5)
                                    break
                                
                                result = *(arg1 + 0x30)
                            
                            result = *(arg1 + 0x30)
                            edi_8 = var_38
                        
                        ebp_5 += 1
                    while (ebp_5 s< edi_8)
                    
                    esi_2 = *(arg1 + 0x34)

return result
