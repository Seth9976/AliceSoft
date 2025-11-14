// 函数: sub_6977e0
// 地址: 0x6977e0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* result = *(arg1 + 0x20)

if (result != 0)
    if (*(result + 0x2c) != 0)
        result = (*(**(result + 0x2c) + 0x14))()
    
    if (*(arg1 + 0x40) != 0)
        return (*(**(arg1 + 0x40) + 0x1c))(1)

return result
