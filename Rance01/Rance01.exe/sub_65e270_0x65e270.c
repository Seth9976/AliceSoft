// 函数: sub_65e270
// 地址: 0x65e270
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void** esi = &arg2[0xf]
*arg2 = &dpparts::CWindow::`vftable'
arg2[0xd] = 0
arg2[0xe].b = 0
esi[5] = 0xf
esi[4] = 0
int128_t* edi = arg1
*esi = nullptr
char i

do
    i = *arg1
    arg1 = &arg1[1]
while (i != 0)
sub_401270(esi, arg1 - &arg1[1], edi)
arg2[0x16].b = 0
arg2[6] = arg3

if (esi[5] u>= 0x10)
    esi = *esi

arg2[0xc] = arg6
arg2[2] = arg4
arg2[7] = arg5
arg2[0xb] = esi
arg2[9] = arg9
arg2[4] = 0
arg2[5] = 0
arg2[3] = sub_65e550
arg2[1] = 0x30
arg2[8] = arg7
arg2[0xa] = arg8
return arg2
