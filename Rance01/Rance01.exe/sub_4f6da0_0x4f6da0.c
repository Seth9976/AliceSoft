// 函数: sub_4f6da0
// 地址: 0x4f6da0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

*arg1 = 0
arg1[1] = 0
arg1[2] = 0

if (arg2 == 0)
    int32_t eax
    eax.b = 0
    return 0

if (arg2 u> 0x15555555)
    sub_6b47bf("vector<T> too long")
    noreturn

int32_t result = sub_64dc30(arg2)
*arg1 = result
arg1[1] = result
arg1[2] = result + arg2 * 0xc
result.b = 1
return result
