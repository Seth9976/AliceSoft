// 函数: sub_4ff4f0
// 地址: 0x4ff4f0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* ecx
void* var_4 = ecx
int128_t* result = arg2
int32_t* edi = arg1

if (edi != result)
    int32_t* ebx_1 = &edi[1]
    
    if (ebx_1 != result)
        var_4 = ebx_1 - edi
        
        do
            void* esi_1 = *ebx_1
            void* eax_2 = *edi
            int32_t ecx_1 = *(eax_2 + 0x1c)
            int32_t edx_1 = *(esi_1 + 0x1c)
            int32_t* ebp_1 = ebx_1
            
            if (edx_1 s< ecx_1)
            label_4ff54e:
                int32_t eax_6 = (var_4 s>> 2) * 4
                result = sub_6b49d0(ebx_1 - eax_6 + 4, edi, eax_6)
                *edi = esi_1
            else
                if (edx_1 s<= ecx_1)
                    ecx_1 = *(eax_2 + 0x20)
                    int32_t edx_2 = *(esi_1 + 0x20)
                    
                    if (edx_2 s< ecx_1)
                        goto label_4ff54e
                    
                    if (edx_2 s<= ecx_1)
                        ecx_1.b = *(eax_2 + 0x7b)
                        edx_2.b = *(esi_1 + 0x7b)
                        
                        if (edx_2.b u< ecx_1.b)
                            goto label_4ff54e
                        
                        if (edx_2.b u<= ecx_1.b)
                            eax_2.b = *(eax_2 + 0x26)
                            
                            if (*(esi_1 + 0x26) u< eax_2.b)
                                goto label_4ff54e
                
                int32_t* edi_1 = ebx_1
                
                while (true)
                    result = edi_1[-1]
                    int32_t ecx_6 = *(result + 0x1c)
                    int32_t edx_3 = *(esi_1 + 0x1c)
                    edi_1 -= 4
                    
                    if (edx_3 s>= ecx_6)
                        if (edx_3 s> ecx_6)
                            break
                        
                        int32_t ecx_7 = result[2].d
                        int32_t edx_4 = *(esi_1 + 0x20)
                        
                        if (edx_4 s>= ecx_7)
                            if (edx_4 s> ecx_7)
                                break
                            
                            ecx_7.b = *(result + 0x7b)
                            edx_4.b = *(esi_1 + 0x7b)
                            
                            if (edx_4.b u>= ecx_7.b)
                                if (edx_4.b u> ecx_7.b)
                                    break
                                
                                edx_4.b = *(esi_1 + 0x26)
                                
                                if (edx_4.b u>= *(result + 0x26))
                                    break
                    
                    *ebp_1 = result
                    ebp_1 = edi_1
                
                edi = arg1
                *ebp_1 = esi_1
            
            var_4 += 4
            ebx_1 = &ebx_1[1]
        while (ebx_1 != arg2)

return result
