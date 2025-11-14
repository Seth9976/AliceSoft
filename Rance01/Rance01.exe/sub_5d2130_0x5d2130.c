// 函数: sub_5d2130
// 地址: 0x5d2130
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

char* esi = data_797d90

if (*esi == 0 || *(esi + 0x28) == *(esi + 0x2c) || arg1 s< 0 || arg1 s>= *(esi + 0x20))
    return 

int32_t eax_2
int32_t edx_1
edx_1:eax_2 = sx.q(arg1)
char* eax = ((eax_2 + (edx_1 & 7)) s>> 3) + *(esi + 0x28)
int32_t ecx_2 = arg1 & 0x80000007

if (ecx_2 s< 0)
    ecx_2 = ((ecx_2 - 1) | 0xfffffff8) + 1

*eax |= (0x80 s>> ecx_2.b).b
