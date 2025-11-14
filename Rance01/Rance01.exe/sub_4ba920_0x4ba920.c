// 函数: sub_4ba920
// 地址: 0x4ba920
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* ebp = arg3
arg3 = nullptr

if (arg2 s>= 0 && arg2 s< (*(ebp + 0x98) - *(ebp + 0x94)) s/ 0x1c)
    int32_t* eax_5 = *(ebp + 0x94) + arg2 * 0x1c
    *(arg1 + 0x14) = 0xf
    *(arg1 + 0x10) = 0
    *arg1 = 0
    sub_401180(arg1, 0xffffffff, eax_5, 0)
    return arg1

*(arg1 + 0x14) = 0xf
*(arg1 + 0x10) = 0
*arg1 = 0
return arg1
