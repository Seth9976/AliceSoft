// 函数: sub_6791c0
// 地址: 0x6791c0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* result = *(arg1 + 0x18)

if (*(result + 0x2c) != 0)
    result = (*(**(result + 0x2c) + 0x14))()

if (*(arg1 + 0x1c) == 0)
    return result

return (*(**(arg1 + 0x1c) + 0x1c))(1)
