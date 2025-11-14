// 函数: sub_673d10
// 地址: 0x673d10
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if (arg2 == 0)
    int32_t result
    result.b = 0
    return result

int32_t eax = *(arg1 + 4)

if (eax s<= arg2 && *(arg1 + 0x10) != 0 && (*(**(arg1 + 0x10) + 0x58))(arg2 - eax, arg3) != 0)
    return 1

return (*(**(arg1 + 0xc) + 0x58))(arg2, arg3)
