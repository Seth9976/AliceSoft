// 函数: sub_652240
// 地址: 0x652240
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

**(arg1 + 0x94) = arg1
*(arg1 + 0x1a1) = *(arg1 + 0x1a0)
*(arg1 + 0x1a0) = 1
int32_t eax_2 = sub_64e4b0(arg1 + 0x9c, GetScrollPos(*(arg1 + 0x1d8), *(arg1 + 0x1e0)), 
    *(arg1 + 0x1a4), *(arg1 + 0x1a8))

if (eax_2 != 0xffffffff)
    *(arg1 + 0x6c) = eax_2

*(arg1 + 0x184) = *(arg1 + 0x1a8) - *(arg1 + 0x64)
return 0
