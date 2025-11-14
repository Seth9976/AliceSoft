// 函数: sub_677d10
// 地址: 0x677d10
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if (arg1[5] u< 1)
    sub_401470(arg1, 1, arg1[4])

char* eax_2

if (arg1[5] u< 0x10)
    eax_2 = arg1
else
    eax_2 = *arg1

*eax_2 = arg2
arg1[4] = 1

if (arg1[5] u< 0x10)
    *(arg1 + 1) = 0
    return arg1

*(*arg1 + 1) = 0
return arg1
