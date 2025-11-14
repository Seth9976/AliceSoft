// 函数: __allshr
// 地址: 0x70d780
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if (arg3 u>= 0x40)
    return arg2 s>> 0x1f

if (arg3 u>= 0x20)
    return arg2 s>> (arg3 & 0x1f)

return arg1 u>> (0x1f & arg3) | arg2 << (0x20 - (0x1f & arg3))
