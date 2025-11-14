// 函数: sub_6a6550
// 地址: 0x6a6550
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* eax = *(arg3 + 0x10c)

if (eax != 0)
    SendMessageA(*(eax + 0x34), 0x20a, arg2, arg1)

void* eax_2 = *(arg3 + 0x110)

if (eax_2 != 0)
    SendMessageA(*(eax_2 + 0x34), 0x20a, arg2, arg1)

return 0
