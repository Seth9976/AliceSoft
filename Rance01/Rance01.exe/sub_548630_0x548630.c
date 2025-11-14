// 函数: sub_548630
// 地址: 0x548630
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

*(arg1 + 0x2b0) -= 4
int32_t esi = **(arg1 + 0x2b0)
*(arg1 + 0x2b0) -= 4
int32_t eax_2 = **(arg1 + 0x2b0)
*(arg1 + 0x2b0) -= 4
int32_t ecx_1 = **(arg1 + 0x2b0)
int32_t edx_2 = (*(arg1 + 0x1e8) - *(arg1 + 0x1e4)) s>> 2

if (ecx_1 u< edx_2)
    edx_2 = *(arg1 + 0x1e4)
    int32_t* ecx_2 = *(edx_2 + (ecx_1 << 2))
    
    if (ecx_2 != 0)
        if (sub_550a50(ecx_2, eax_2, esi) == 0)
            sub_53d0e0(arg1, "copyString")
            int32_t eax_5
            eax_5.b = 0
            return eax_5
        
        **(arg1 + 0x2b0) = esi
        *(arg1 + 0x2b0) += 4
        int32_t* eax_6
        eax_6.b = 1
        return eax_6

return sub_53d1c0(eax_2, edx_2, arg1, 0x75019c)
