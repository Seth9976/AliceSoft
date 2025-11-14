// 函数: sub_436b80
// 地址: 0x436b80
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t** result = arg2
int32_t* esi = arg1

if (esi != result)
    int32_t* result_2 = &esi[1]
    int32_t* result_3 = result_2
    
    if (result_2 != result)
        do
            int32_t* ebp_1 = *result_2
            void* eax_1 = **esi
            void* ecx_1 = *ebp_1
            int32_t edx_1 = *(ecx_1 + 0x10)
            int32_t ebx_1 = *(eax_1 + 0x10)
            int32_t* result_1 = result_2
            int32_t edx_2
            int32_t ebx_2
            
            if (edx_1 s>= ebx_1 && edx_1 s<= ebx_1)
                edx_2 = *(ecx_1 + 0xc)
                ebx_2 = *(eax_1 + 0xc)
            
            if (edx_1 s< ebx_1 || (edx_1 s<= ebx_1
                    && (edx_2 s< ebx_2 || (edx_2 s<= ebx_2 && *(ecx_1 + 8) s< *(eax_1 + 8)))))
                int32_t eax_6 = ((result_2 - esi) s>> 2) * 4
                result = sub_6b49d0(result_2 - eax_6 + 4, esi, eax_6)
                *esi = ebp_1
            else
                while (true)
                    int32_t* ebx_3 = result_2[-1]
                    void* eax_7 = *ebx_3
                    void* ecx_3 = *ebp_1
                    int32_t edx_6 = *(ecx_3 + 0x10)
                    int32_t esi_1 = *(eax_7 + 0x10)
                    result_2 -= 4
                    
                    if (edx_6 s>= esi_1)
                        if (edx_6 s> esi_1)
                            break
                        
                        int32_t edx_7 = *(ecx_3 + 0xc)
                        int32_t esi_2 = *(eax_7 + 0xc)
                        
                        if (edx_7 s>= esi_2)
                            if (edx_7 s> esi_2)
                                break
                            
                            if (*(ecx_3 + 8) s>= *(eax_7 + 8))
                                break
                    
                    *result_1 = ebx_3
                    result_1 = result_2
                
                result = result_1
                esi = arg1
                result_2 = result_3
                *result = ebp_1
            
            result_2 = &result_2[1]
            result_3 = result_2
        while (result_2 != arg2)

return result
