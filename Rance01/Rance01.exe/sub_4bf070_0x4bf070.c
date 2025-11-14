// 函数: sub_4bf070
// 地址: 0x4bf070
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

*arg2 = 0
arg2[1] = 0
arg2[2] = 0

if (arg1 == 0)
    int32_t eax
    eax.b = 0
    return 0

if (arg1 u> 0xed7303)
    sub_6b47bf("vector<T> too long")
    noreturn

int32_t result = sub_4bf150(arg1)
*arg2 = result
arg2[1] = result
arg2[2] = arg1 * 0x114 + result
result.b = 1
return result
