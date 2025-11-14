// 函数: sub_5b6060
// 地址: 0x5b6060
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t eax_4 = *(arg1 + 0x18)
void* edx = *(arg1 + 4)

if (eax_4 s<= 0xffffffff || eax_4 s>= *(arg1 + 0x14))
    return 0

if (arg2 != 0)
    int32_t i = 0
    
    if (*(edx + 4) s> 0)
        do
            *(*(arg1 + 0xc) + (i << 2)) = *(*(arg1 + 8) + (i << 2)) + (*(arg1 + 0x18) << 2)
            i += 1
        while (i s< *(edx + 4))
    
    *arg2 = *(arg1 + 0xc)

return *(arg1 + 0x14) - *(arg1 + 0x18)
