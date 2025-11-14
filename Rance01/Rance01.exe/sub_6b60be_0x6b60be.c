// 函数: sub_6b60be
// 地址: 0x6b60be
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if (arg1 s>= 0x14)
    return LeaveCriticalSection(arg2 + 0x20)

*(arg2 + 0xc) &= 0xffff7fff
return __unlock(arg1 + 0x10)
