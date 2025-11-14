// 函数: sub_614ee0
// 地址: 0x614ee0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

*(arg1 + 0x138) = *(arg1 + 0x18c) * 2

if (sub_61ea10(arg1 + 0x134) != 0)
    *(arg1 + 0x164) = *(arg1 + 0x18c) * 2
    *(arg1 + 0x184) = 0x2bc
    
    if (sub_61ea10(arg1 + 0x160) != 0)
        *(arg1 + 0x1c0) = SetTimer(arg2, 1, 0x64, nullptr)
        return 0

return 0xffffffff
