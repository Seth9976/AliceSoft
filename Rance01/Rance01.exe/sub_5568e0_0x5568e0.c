// 函数: sub_5568e0
// 地址: 0x5568e0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* ecx = arg1[3]
int32_t esi = arg1[1]

if (esi s<= ecx)
    int32_t eax
    eax.b = 0
    return eax

void* eax_1

if (esi != 0)
    eax_1 = *arg1
else
    eax_1 = nullptr

char* eax_2 = eax_1 + ecx
char i

do
    i = *eax_2
    eax_2 = &eax_2[1]
while (i != 0)

void* eax_3 = eax_2 - &eax_2[1]

if (esi s< ecx + eax_3 + 1)
    void* eax_4
    eax_4.b = 0
    return eax_4

int32_t eax_5

if (esi != 0)
    eax_5 = *arg1
else
    eax_5 = 0

int128_t* ecx_1 = ecx + eax_5
char* eax_6 = ecx_1

do
    i = *eax_6
    eax_6 = &eax_6[1]
while (i != 0)

sub_401270(arg2, eax_6 - &eax_6[1], ecx_1)
arg1[3] += eax_3 + 1
int32_t* eax_8
eax_8.b = 1
return eax_8
