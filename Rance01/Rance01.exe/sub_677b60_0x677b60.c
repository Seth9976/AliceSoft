// 函数: sub_677b60
// 地址: 0x677b60
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* result = *(arg1 + 0x10)

if (*(result + 0x2c) != 0)
    result = (*(**(result + 0x2c) + 0x14))()

if (*(arg1 + 0x14) == 0)
    return result

return (*(**(arg1 + 0x14) + 0x1c))(1)
