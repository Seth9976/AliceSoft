// 函数: sub_620360
// 地址: 0x620360
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

*(arg1 + 0x14c) = *(arg1 + 0x1a0) * 2

if (sub_61ea10(arg1 + 0x148) != 0)
    *(arg1 + 0x178) = *(arg1 + 0x1a0) * 2
    *(arg1 + 0x198) = 0x2bc
    
    if (sub_61ea10(arg1 + 0x174) != 0)
        *(arg1 + 0x1d4) = SetTimer(arg2, 1, 0x64, nullptr)
        return 0

return 0xffffffff
