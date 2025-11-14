// 函数: sub_62f610
// 地址: 0x62f610
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

*(arg1 + 0x128) = *(arg1 + 0x17c) * 2

if (sub_61ea10(arg1 + 0x124) != 0)
    *(arg1 + 0x154) = *(arg1 + 0x17c) * 2
    *(arg1 + 0x174) = 0x2bc
    
    if (sub_61ea10(arg1 + 0x150) != 0)
        *(arg1 + 0x1b0) = SetTimer(arg2, 1, 0x64, nullptr)
        return 0

return 0xffffffff
