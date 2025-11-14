// 函数: sub_5475b0
// 地址: 0x5475b0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* ebp = arg3
int32_t* esi = arg2

if (esi[0x10].b != 0)
    int32_t edx_1 = esi[1]
    arg2 = edx_1 u>> 2
    
    if (arg2 s>= 2)
        void* esi_1
        
        if (edx_1 != 0)
            esi_1 = *esi
        else
            esi_1 = nullptr
        
        arg3 = esi_1
        
        if (arg2 s> 1)
            int32_t edi_1 = 0
            int32_t* edx_2 = esi_1 + 4
            int32_t var_8_1 = 0
            int32_t* var_c_1 = edx_2
            uint32_t i_1 = arg2 - 1
            uint32_t i
            
            do
                int32_t ebx_1 = *edx_2
                int32_t edx_3 = edi_1
                
                if (edi_1 s>= 0)
                    int32_t temp2_1
                    
                    do
                        int32_t edi_2 = *(esi_1 + (edx_3 << 2))
                        int32_t* eax_4
                        
                        if (edi_2 u< (*(arg1 + 0x1e8) - *(arg1 + 0x1e4)) s>> 2)
                            eax_4 = *(*(arg1 + 0x1e4) + (edi_2 << 2))
                        else
                            eax_4 = nullptr
                        
                        int32_t eax_6
                        
                        if (eax_4[1] != 0)
                            eax_6 = *eax_4
                        else
                            eax_6 = 0
                        
                        uint32_t* eax_10
                        
                        if (ebx_1 u< (*(arg1 + 0x1e8) - *(arg1 + 0x1e4)) s>> 2)
                            eax_10 = *(*(arg1 + 0x1e4) + (ebx_1 << 2))
                        else
                            eax_10 = nullptr
                        
                        if (eax_10[1] != 0)
                            arg2 = *eax_10
                        else
                            arg2 = 0
                        
                        esi_1 = arg3
                        
                        if (*(eax_6 + (ebp << 2)) s<= *(arg2 + (ebp << 2)))
                            break
                        
                        temp2_1 = edx_3
                        edx_3 -= 1
                        *(esi_1 + (edx_3 << 2) + 8) = edi_2
                    while (temp2_1 - 1 s>= 0)
                
                *(esi_1 + (edx_3 << 2) + 4) = ebx_1
                edx_2 = &var_c_1[1]
                edi_1 = var_8_1 + 1
                i = i_1
                i_1 -= 1
                var_c_1 = edx_2
                var_8_1 = edi_1
            while (i != 1)

arg2.b = 1
return arg2
