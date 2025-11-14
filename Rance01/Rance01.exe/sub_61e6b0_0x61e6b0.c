// 函数: sub_61e6b0
// 地址: 0x61e6b0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* ebp = arg3
arg3 = nullptr

if (arg2 s>= 0 && arg2 s< (*(ebp + 0x14) - *(ebp + 0x10)) s/ 0x1c)
    int32_t* eax_4 = *(ebp + 0x10) + arg2 * 0x1c
    *(arg1 + 0x14) = 0xf
    *(arg1 + 0x10) = 0
    *arg1 = 0
    sub_401180(arg1, 0xffffffff, eax_4, 0)
    return arg1

*(arg1 + 0x14) = 0xf
*(arg1 + 0x10) = 0
*arg1 = 0
sub_401270(arg1, 6, 0x7342a4)
return arg1
