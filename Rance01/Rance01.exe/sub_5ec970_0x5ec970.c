// 函数: sub_5ec970
// 地址: 0x5ec970
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

*arg1 = 0
arg1[1] = 0
arg1[2] = 0

if (arg2 == 0)
    int32_t eax
    eax.b = 0
    return 0

if (arg2 u> 0x1fffffff)
    sub_6b47bf("vector<T> too long")
    noreturn

int32_t eax_1 = sub_58bfc0(arg2)
*arg1 = eax_1
arg1[1] = eax_1
arg1[2] = eax_1 + (arg2 << 3)
int32_t result
result.b = 1
return result
