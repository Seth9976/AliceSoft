// 函数: sub_401080
// 地址: 0x401080
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if (arg2 != 0)
    char* eax = arg2
    char i
    
    do
        i = *eax
        eax = &eax[1]
    while (i != 0)
    return sub_401270(arg1 + 4, eax - &eax[1], arg2)

bool cond:0 = *(arg1 + 0x18) u< 0x10
void** result = arg1 + 4
result[4] = arg2

if (not(cond:0))
    result = *result

*result = nullptr
return result
