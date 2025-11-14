// 函数: sub_436a60
// 地址: 0x436a60
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t edi_2 = (arg1 - arg2) s>> 2
int32_t eax_1
int32_t edx
edx:eax_1 = sx.q(edi_2)
int32_t result = eax_1 - edx
int32_t i = result s>> 1
int32_t var_c = edi_2

if (i s> 0)
    int32_t i_4 = i * 2 + 2
    
    do
        int32_t eax_2 = *(arg2 + (i << 2) - 4)
        i -= 1
        i_4 -= 2
        int32_t var_4 = eax_2
        int32_t i_1 = i
        int32_t i_2 = i_4
        
        if (i_4 s< edi_2)
            do
                void* ecx_2 = **(arg2 + (i_2 << 2) - 4)
                void* edx_2 = **(arg2 + (i_2 << 2))
                int32_t edi_3 = *(edx_2 + 0x10)
                int32_t ebx_1 = *(ecx_2 + 0x10)
                
                if (edi_3 s< ebx_1)
                    i_2 -= 1
                else if (edi_3 s<= ebx_1)
                    int32_t edi_4 = *(edx_2 + 0xc)
                    int32_t ebx_2 = *(ecx_2 + 0xc)
                    
                    if (edi_4 s< ebx_2)
                        i_2 -= 1
                    else if (edi_4 s<= ebx_2 && *(edx_2 + 8) s< *(ecx_2 + 8))
                        i_2 -= 1
                
                int32_t i_3 = i_1
                int32_t ecx_3 = *(arg2 + (i_2 << 2))
                i_1 = i_2
                i_2 = i_2 * 2 + 2
                *(arg2 + (i_3 << 2)) = ecx_3
            while (i_2 s< var_c)
            
            edi_2 = var_c
        
        if (i_2 == edi_2)
            *(arg2 + (i_1 << 2)) = *(arg2 + (edi_2 << 2) - 4)
            i_1 = edi_2 - 1
        
        int32_t var_20_1 = arg3
        result = sub_436da0(arg2, i_1, i, &var_4)
    while (i s> 0)

return result
