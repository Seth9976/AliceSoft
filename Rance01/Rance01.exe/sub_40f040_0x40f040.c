// 函数: sub_40f040
// 地址: 0x40f040
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t eax_3 = *(arg1 + 0x20)

if (eax_3 s> 0)
    *(arg1 + 0x20) = eax_3 - 1
    
    if (eax_3 - 1 s<= 0)
        *(arg1 + 0x20) = 0
        sub_40efb0(arg1)
        return 0

return *(arg1 + 0x20)
