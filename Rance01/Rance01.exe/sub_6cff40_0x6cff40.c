// 函数: sub_6cff40
// 地址: 0x6cff40
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

uint32_t var_c

if (sub_6ca7f0(*(arg1 + 0x3c), arg1 + 0x40, *(arg1 + 0x10) - *(arg1 + 0x14), &var_c) == 0
        || var_c != 0x1000)
    return 0xffffffe9

*(arg1 + 0x10) = *(arg1 + 0x14)
return 0
