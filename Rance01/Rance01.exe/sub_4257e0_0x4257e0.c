// 函数: sub_4257e0
// 地址: 0x4257e0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

*arg1 = 0
arg1[1] = 0
arg1[2] = 0

if (arg2 == 0)
    return 

if (arg2 u> 0x3fffffff)
    sub_6b47bf("vector<T> too long")
    noreturn

int32_t* eax = sub_65a1c0(arg2)
arg1[2] = &eax[arg2]
*arg1 = eax
arg1[1] = eax
int32_t i_1 = arg2
int32_t* edx_1 = eax

if (arg2 u> 0)
    int32_t i
    
    do
        *edx_1 = *arg3
        edx_1 = &edx_1[1]
        i = i_1
        i_1 -= 1
    while (i != 1)

arg1[1] = &eax[arg2]
