// 函数: sub_5538d0
// 地址: 0x5538d0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* edx = arg3
uint32_t result = edx[7]
uint32_t ebx_1 = edx[1] u>> 2

if (result s>= 0)
    void* ecx = *(arg1 + 4)
    
    if (result u< (*(ecx + 0x12c) - *(ecx + 0x128)) s>> 4)
        int32_t eax = result << 4
        
        if (eax != neg.d(*(ecx + 0x128)))
            result = *(eax + *(ecx + 0x128) + 4)
            uint32_t result_1 = result
            
            if (result != 0)
                int32_t esi_4 = 0
                
                if (ebx_1 s> 0)
                    int32_t edi_1 = 0
                    
                    while (true)
                        int32_t ecx_1
                        
                        if (edx[1] != 0)
                            ecx_1 = *edx
                        else
                            ecx_1 = 0
                        
                        if (sub_553980(arg1, *(ecx_1 + (esi_4 << 2)), arg2, esi_4, 
                                *(result + 0x34) + edi_1).b == 0)
                            goto label_5538f0
                        
                        esi_4 += 1
                        edi_1 += 0x2c
                        
                        if (esi_4 s>= ebx_1)
                            break
                        
                        result = result_1
                        edx = arg3
                
                result.b = 1
                return result

label_5538f0:
result.b = 0
return result
