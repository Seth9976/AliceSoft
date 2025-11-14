// 函数: sub_402be0
// 地址: 0x402be0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

char* eax = arg2
*(arg1 + 0x14) = 0xf
*(arg1 + 0x10) = 0
*arg1 = 0
char i

do
    i = *eax
    eax = &eax[1]
while (i != 0)
sub_401270(arg1, eax - &eax[1], arg2)
return arg1
