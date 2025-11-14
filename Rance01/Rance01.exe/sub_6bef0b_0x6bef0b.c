// 函数: sub_6bef0b
// 地址: 0x6bef0b
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if ((arg1 & 0x20) != 0)
    return 5

if ((arg1 & 8) != 0)
    return 1

if ((arg1 & 4) != 0)
    return 2

if ((arg1 & 1) != 0)
    return 3

return (zx.d(arg1) & 2) * 2
