// 函数: sub_623e70
// 地址: 0x623e70
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* edi = arg4
arg4 = nullptr
int128_t* eax_4 = (*(**(edi + 8) + 4))((*(**(edi + 4) + 0x1c))(arg2))
*(arg3 + 0x14) = 0xf
*(arg3 + 0x10) = 0
*arg3 = 0

if (eax_4 == 0)
    sub_401270(arg3, eax_4 + 6, "struct")
    return arg3

char* ecx_2 = eax_4
char i

do
    i = *ecx_2
    ecx_2 = &ecx_2[1]
while (i != 0)
sub_401270(arg3, ecx_2 - &ecx_2[1], eax_4)
return arg3
