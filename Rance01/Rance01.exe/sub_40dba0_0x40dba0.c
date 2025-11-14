// 函数: sub_40dba0
// 地址: 0x40dba0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t eax_3 = *(arg1 + 4)

if (eax_3 s> 0)
    *(arg1 + 4) = eax_3 - 1
    
    if (eax_3 - 1 s<= 0)
        *(arg1 + 4) = 0
        *(arg1 + 0x14) = 0
        return 0

return *(arg1 + 4)
