// 函数: sub_54f770
// 地址: 0x54f770
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

*arg4 = 0
arg4[1] = 0
arg4[2] = 0
arg4[3] = arg2
arg4[4] = 1
arg4[5] = arg3

if (*(arg3 + 0x1c) s>= 0x989680)
    *(arg3 + 0x1c) = 1

int32_t ecx = *(arg3 + 0x1c)
*(arg3 + 0x1c) = ecx + 1
arg4[6] = ecx
arg4[7] = 0xffffffff
arg4[8] = 0
arg4[9] = 0
arg4[0xa] = 0
arg4[0xb].w = 0
arg4[0xc] = 0xffffffff
arg4[0xd] = 0xffffffff
arg4[0xe] = 0xffffffff
arg4[0xf] = 0xffffffff
arg4[0x10].b = 0
arg4[0x11] = 0xffffffff
__builtin_memset(&arg4[0x12], 0, 0x14)

if (arg2 == 2 && sub_54fa60(arg4, 1) != 0)
    if (arg4[1] == 0)
        *0 = 0
        return arg4
    
    **arg4 = 0

return arg4
