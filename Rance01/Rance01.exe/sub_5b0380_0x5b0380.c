// 函数: sub_5b0380
// 地址: 0x5b0380
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if (arg3 == 0 || arg1 == 0)
    return 

if (arg5 u<= 0x100)
    int128_t* eax = sub_5a6290(0x300, sub_5a4280(arg3, arg1, 0x1000, 0), arg3)
    *(arg3 + 0x128) = eax
    sub_6c02a0(eax, arg4, arg5 * 3)
    *(arg1 + 0x10) = *(arg3 + 0x128)
    *(arg3 + 0x12c) = arg5.w
    *(arg1 + 0xb8) |= 0x1000
    *(arg1 + 8) |= 8
    *(arg1 + 0x14) = arg5.w
    return 

if (*(arg1 + 0x19) == 3)
    sub_5a5c60(arg3, "Invalid palette length")
    noreturn

sub_5a5de0("Invalid palette length", arg3)
