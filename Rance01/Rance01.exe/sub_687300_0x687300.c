// 函数: sub_687300
// 地址: 0x687300
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* result = *(arg1 + 0x20)

if (*(result + 0x2c) != 0)
    result = (*(**(result + 0x2c) + 0x14))()

if (*(arg1 + 0x40) == 0)
    return result

return (*(**(arg1 + 0x40) + 0x1c))(1)
