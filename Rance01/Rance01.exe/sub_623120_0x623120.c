// 函数: sub_623120
// 地址: 0x623120
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int128_t* eax_1 = (*(**(arg1 + 8) + 0x1c))(arg2)

if (eax_1 == 0)
    eax_1.b = 0
    return eax_1

char* ecx = eax_1
char i

do
    i = *ecx
    ecx = &ecx[1]
while (i != 0)
sub_401270(arg3, ecx - &ecx[1], eax_1)
int32_t* eax_2
eax_2.b = 1
return eax_2
