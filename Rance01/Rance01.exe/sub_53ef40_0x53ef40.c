// 函数: sub_53ef40
// 地址: 0x53ef40
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

*(arg1 + 0x2b0) -= 4
char ecx_1 = (**(arg1 + 0x2b0)).b
*(arg1 + 0x2b0) -= 4
int32_t edi = **(arg1 + 0x2b0)
*(arg1 + 0x2b0) -= 4
int32_t* edx_2 = **(arg1 + 0x2b0)

if (edx_2 u< (*(arg1 + 0x1e8) - *(arg1 + 0x1e4)) s>> 2)
    edx_2 = *(*(arg1 + 0x1e4) + (edx_2 << 2))
    
    if (edx_2 != 0)
        int32_t ebx = edx_2[1]
        
        if (edi u>= ebx u>> 2)
            return sub_53d1c0(arg1, edx_2, arg1, 0x74d7b0)
        
        int32_t esi_6
        
        if (ebx != 0)
            esi_6 = *edx_2
        else
            esi_6 = 0
        
        int32_t esi_8 = *(esi_6 + (edi << 2)) << ecx_1
        int32_t edx_3
        
        if (ebx != 0)
            edx_3 = *edx_2
        else
            edx_3 = 0
        
        *(edx_3 + (edi << 2)) = esi_8
        **(arg1 + 0x2b0) = esi_8
        *(arg1 + 0x2b0) += 4
        arg1.b = 1
        return arg1

return sub_53d1c0(arg1, edx_2, arg1, 0x74d788)
