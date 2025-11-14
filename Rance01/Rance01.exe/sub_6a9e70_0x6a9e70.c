// 函数: sub_6a9e70
// 地址: 0x6a9e70
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

*(arg1 + 0x28d) = *(arg1 + 0x28c)
*(arg1 + 0x28c) = 1
int32_t eax_2 = sub_6a5670(arg1 + 0x30c, GetScrollPos(*(arg1 + 0x2d0), *(arg1 + 0x2dc)), 
    *(arg1 + 0x290), *(arg1 + 0x294))

if (eax_2 != 0xffffffff)
    int32_t ecx_1 = *(arg1 + 0x448)
    
    if (ecx_1 == eax_2)
        *(arg1 + 0x424) = *(arg1 + 0x294) - *(arg1 + 0x5c)
        *(arg1 + 0x448) = ecx_1 + 5
        return 0
    
    if (ecx_1 + 5 == eax_2)
        *(arg1 + 0x424) = *(arg1 + 0x294) - *(arg1 + 0x5c)
        *(arg1 + 0x448) = ecx_1 - 5
        return 0
    
    *(arg1 + 0x448) = eax_2

*(arg1 + 0x424) = *(arg1 + 0x294) - *(arg1 + 0x5c)
return 0
