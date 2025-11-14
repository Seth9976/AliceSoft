// 函数: sub_575bb0
// 地址: 0x575bb0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ebx_2 = (arg4 - arg3) s>> 2
int32_t eax_1
int32_t edx
edx:eax_1 = sx.q(ebx_2)
int32_t result = eax_1 - edx
int32_t i = result s>> 1
int32_t var_4 = ebx_2

if (i s> 0)
    int32_t ebp_1 = i * 2 + 2
    
    do
        void* eax_2 = *(arg3 + (i << 2) - 4)
        i -= 1
        ebp_1 -= 2
        arg4 = ebp_1
        int32_t edi_1 = i
        int32_t eax_3 = ebp_1
        
        if (ebp_1 s< ebx_2)
            do
                if (*(*(*(arg3 + (eax_3 << 2)) + 0x40) + 4)
                        s> *(*(*(arg3 + (eax_3 << 2) - 4) + 0x40) + 4))
                    eax_3 -= 1
                
                *(arg3 + (edi_1 << 2)) = *(arg3 + (eax_3 << 2))
                edi_1 = eax_3
                eax_3 = eax_3 * 2 + 2
            while (eax_3 s< ebx_2)
            
            ebp_1 = arg4
        
        if (eax_3 == ebx_2)
            *(arg3 + (edi_1 << 2)) = *(arg3 + (ebx_2 << 2) - 4)
            edi_1 = ebx_2 - 1
        
        int32_t eax_6
        int32_t edx_4
        edx_4:eax_6 = sx.q(edi_1 - 1)
        result = (eax_6 - edx_4) s>> 1
        
        if (i s< edi_1)
            do
                void* edx_5 = *(arg3 + (result << 2))
                
                if (*(*(edx_5 + 0x40) + 4) s<= *(*(eax_2 + 0x40) + 4))
                    break
                
                *(arg3 + (edi_1 << 2)) = edx_5
                edi_1 = result
                int32_t eax_9
                int32_t edx_6
                edx_6:eax_9 = sx.q(result - 1)
                result = (eax_9 - edx_6) s>> 1
            while (i s< edi_1)
            
            ebx_2 = var_4
            ebp_1 = arg4
        
        *(arg3 + (edi_1 << 2)) = eax_2
    while (i s> 0)

return result
