// 函数: sub_62e750
// 地址: 0x62e750
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if (arg2 s< 0 || arg2 s>= (*(arg1 + 0x258) - *(arg1 + 0x254)) s>> 2)
    arg2.b = 0
    return arg2

void* ecx_1 = *(*(arg1 + 0x254) + (arg2 << 2))
char* eax = arg3
*(ecx_1 + 0x198) = 1
int32_t edx_3

do
    edx_3.b = *eax
    eax = &eax[1]
while (edx_3.b != 0)
sub_401270(ecx_1 + 0x19c, eax - &eax[1], arg3)
int32_t* eax_2
eax_2.b = 1
return eax_2
