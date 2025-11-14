// 函数: sub_6b34e0
// 地址: 0x6b34e0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t eax_6 = *(arg1 + 0x55c)
sub_6b5353(eax_6 + arg1 + 0x15c, 0x400 - eax_6, arg3)
char* eax = arg3
char i

do
    i = *eax
    eax = &eax[1]
while (i != 0)
*(arg1 + 0x55c) += eax - &eax[1] + 1
int32_t eax_3 = *(arg1 + 0x55c)
sub_6b5353(eax_3 + arg1 + 0x15c, 0x400 - eax_3, arg2)
char* eax_4 = arg2
char i_1

do
    i_1 = *eax_4
    eax_4 = &eax_4[1]
while (i_1 != 0)
*(arg1 + 0x55c) += eax_4 - &eax_4[1] + 1
void* result
result.b = 1
return result
