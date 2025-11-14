// 函数: sub_4abf30
// 地址: 0x4abf30
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
            int32_t ecx_1 = *(eax_2 + 0x10)
            int32_t edx_1 = *(esi_1 + 0x10)
            int32_t* ebp_1 = ebx_1
            int32_t ecx_2
            int32_t edx_2
            
            if (edx_1 s>= ecx_1 && edx_1 s<= ecx_1)
                ecx_2 = *(eax_2 + 0xc)
                edx_2 = *(esi_1 + 0xc)
            
            if (edx_1 s< ecx_1 || (edx_1 s<= ecx_1
                    && (edx_2 s< ecx_2 || (edx_2 s<= ecx_2 && *(esi_1 + 8) s< *(eax_2 + 8)))))
                int32_t eax_6 = (var_4 s>> 2) * 4
                result = sub_6b49d0(ebx_1 - eax_6 + 4, edi, eax_6)
                *edi = esi_1
            else
                int32_t* edi_1 = ebx_1
                
                while (true)
                    result = edi_1[-1]
                    int32_t ecx_4 = result[1].d
                    int32_t edx_6 = *(esi_1 + 0x10)
                    edi_1 -= 4
                    
                    if (edx_6 s>= ecx_4)
                        if (edx_6 s> ecx_4)
                            break
                        
                        int32_t ecx_5 = *(result + 0xc)
                        int32_t edx_7 = *(esi_1 + 0xc)
                        
                        if (edx_7 s>= ecx_5)
                            if (edx_7 s> ecx_5)
                                break
                            
                            if (*(esi_1 + 8) s>= *(result + 8))
                                break
                    
                    *ebp_1 = result
                    ebp_1 = edi_1
                
                edi = arg1
                *ebp_1 = esi_1
            
            var_4 += 4
            ebx_1 = &ebx_1[1]
        while (ebx_1 != arg2)

return result
