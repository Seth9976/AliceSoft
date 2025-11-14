// 函数: sub_5b0480
// 地址: 0x5b0480
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if (arg1 == 0 || arg2 == 0 || arg3 == 0 || arg5 == 0)
    return 

void* ebx_1 = lstrlenA(arg3) + 1
int128_t* eax_1 = sub_5a6370(ebx_1, arg1)

if (eax_1 == 0)
    sub_5a5de0("Insufficient memory to process iCCP chunk", arg1)
    return 

sub_6c02a0(eax_1, arg3, ebx_1)
int128_t* eax_4 = sub_5a6370(arg6, arg1)

if (eax_4 == 0)
    sub_5a6340(arg1, eax_1)
    sub_5a5de0("Insufficient memory to process iCCP profile", arg1)
    return 

sub_6c02a0(eax_4, arg5, arg6)
sub_5a4280(arg1, arg2, 0x10, 0)
*(arg2 + 0xb8) |= 0x10
*(arg2 + 8) |= 0x1000
*(arg2 + 0xc4) = eax_1
*(arg2 + 0xc8) = eax_4
*(arg2 + 0xcc) = arg6
*(arg2 + 0xd0) = arg4
