// 函数: sub_64f0e0
// 地址: 0x64f0e0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* esi = *(arg1 + 0x88)
int32_t edx

if (**(esi + 0xf4) == esi)
    edx = sub_65ca80(arg2, esi)

void* eax_2 = *(arg1 + 0x8c)
int32_t ecx = *(eax_2 + 0x84)

if (ecx == 0)
    sub_643d30(*(eax_2 + 0x108), arg2)
    return 0

if (ecx == 1)
    sub_64cd40(*(eax_2 + 0x10c), edx, arg2)

return 0
