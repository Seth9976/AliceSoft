// 函数: sub_4134c0
// 地址: 0x4134c0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if (*(arg1 + 0x28) != 0)
    (*(**(arg1 + 0x28) + 0x20))()

int32_t result = sub_413500(arg1)

if (*(arg1 + 0x2c) == 0)
    return result

return (*(**(arg1 + 0x2c) + 0xc))(arg2, *(arg1 + 0x28))
