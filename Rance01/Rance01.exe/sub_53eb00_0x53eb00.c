// 函数: sub_53eb00
// 地址: 0x53eb00
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* eax_8 = *(arg1 + 0x2b0)
int32_t* edx = *(eax_8 - 0xc)
int32_t esi = *(eax_8 - 8)
int32_t edi = *(eax_8 - 4)
*(arg1 + 0x2b0) = eax_8 - 0xc
int32_t eax_3 = (*(arg1 + 0x1e8) - *(arg1 + 0x1e4)) s>> 2

if (edx u< eax_3)
    eax_3 = *(arg1 + 0x1e4)
    edx = *(eax_3 + (edx << 2))
    
    if (edx != 0)
        int32_t eax_5 = edx[1]
        
        if (esi u< eax_5 u>> 2)
            int32_t edx_1
            
            if (eax_5 != 0)
                edx_1 = *edx
            else
                edx_1 = 0
            
            edx = edx_1 + (esi << 2)
            
            if (edx != 0)
                int32_t result = *edx * edi
                *edx = result
                **(arg1 + 0x2b0) = result
                *(arg1 + 0x2b0) += 4
                return result
        
        return sub_53d1c0(eax_5, edx, arg1, 0x74d574)

return sub_53d1c0(eax_3, edx, arg1, 0x74d550)
