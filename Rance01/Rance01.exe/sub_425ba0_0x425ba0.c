// 函数: sub_425ba0
// 地址: 0x425ba0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

POINT point
__builtin_memset(&point, 0, 8)
GetCursorPos(&point)
int32_t y = point.y
*(arg1 + 0x24) = point.x
int32_t* ecx_1 = *(arg1 + 0x3c)
*(arg1 + 0x28) = y
*(arg1 + 0x21) = 0

if (ecx_1 == 0)
    *(arg1 + 0x2c) = 0
    return 0

int32_t result = (**ecx_1)()
*(arg1 + 0x2c) = result
return result
