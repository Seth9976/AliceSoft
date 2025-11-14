// 函数: sub_5506c0
// 地址: 0x5506c0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

char* eax

if (arg2[1] != 0)
    eax = *arg2

void* eax_1

if (arg2[1] != 0 && eax != 0)
    char i
    
    do
        i = *eax
        eax = &eax[1]
    while (i != 0)
    eax_1 = eax - &eax[1]
else
    eax_1 = nullptr

if (eax_1 + 1 u> arg1[1])
    char eax_2 = sub_54fa60(arg1, eax_1 + 1)
    
    if (eax_2 == 0)
        return eax_2

int128_t* ecx

if (arg2[1] != 0)
    ecx = *arg2
else
    ecx = nullptr

if (arg1[1] != 0)
    sub_6c02a0(*arg1, ecx, eax_1 + 1)
    int128_t* eax_5
    eax_5.b = 1
    return eax_5

sub_6c02a0(nullptr, ecx, eax_1 + 1)
int128_t* eax_3
eax_3.b = 1
return eax_3
