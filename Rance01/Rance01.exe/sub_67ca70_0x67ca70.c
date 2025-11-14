// 函数: sub_67ca70
// 地址: 0x67ca70
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* result = *(arg1 + 0x14)

if (*(result + 0x2c) != 0)
    result = (*(**(result + 0x2c) + 0x14))()

if (*(arg1 + 0x2c) == 0)
    return result

return (*(**(arg1 + 0x2c) + 0x1c))(1)
