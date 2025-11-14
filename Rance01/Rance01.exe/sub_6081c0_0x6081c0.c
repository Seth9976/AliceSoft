// 函数: sub_6081c0
// 地址: 0x6081c0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t edx = *(arg1 + 0xab0)
int32_t* i = *(arg1 + 0xaac)
int32_t* i_1 = i
int32_t var_8 = edx

for (; i != edx; i = &i[6])
    int32_t ecx_1 = i[1]
    int32_t edi_1 = *i
    
    if (edi_1 != ecx_1 && arg4 u>= i[4] && arg4 u<= i[5])
        int32_t ecx_3 = (ecx_1 - edi_1) s>> 2
        int32_t esi_1 = 0
        
        if (ecx_3 s> 0)
            int32_t eax_1 = 1
            int32_t var_c_1 = 1
            
            do
                int32_t ebx_1 = *(edi_1 + (esi_1 << 2))
                
                if (ebx_1 != 0xffffffff && eax_1 s< ecx_3)
                    int32_t* edx_1 = edi_1 + (esi_1 << 2) + 4
                    
                    while (*edx_1 == 0xffffffff)
                        eax_1 += 1
                        edx_1 = &edx_1[1]
                        
                        if (eax_1 s>= ecx_3)
                            break
                    
                    if (eax_1 s< ecx_3 && arg4 u>= ebx_1 && arg4 u< *(edi_1 + (eax_1 << 2)))
                        int32_t eax_7 = (i - i_1) s/ 0x18
                        *arg2 = eax_7
                        *arg3 = esi_1
                        return eax_7
                
                esi_1 += 1
                eax_1 = var_c_1 + 1
                var_c_1 = eax_1
            while (esi_1 s< ecx_3)
            
            edx = var_8

*arg2 = 0xffffffff
*arg3 = 0xffffffff
return arg2
