// 函数: sub_61ed10
// 地址: 0x61ed10
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int128_t* esi = arg1
char i

do
    i = *arg1
    arg1 = &arg1[1]
while (i != 0)
sub_401270(arg2 + 8, arg1 - &arg1[1], esi)
*(arg2 + 0x24) = arg4
*(arg2 + 0x28) = arg5
*(arg2 + 0x2c) = 0xa0
*(arg2 + 0x30) = 0x18
int32_t result = DialogBoxParamA(GetWindowLongA(arg3, 0xfffffffa), 0x69, arg3, sub_61e810, arg2)
*(arg2 + 4) = result
result.b = result == 0
return result
