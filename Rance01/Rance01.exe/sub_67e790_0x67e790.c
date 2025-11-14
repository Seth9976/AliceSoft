// 函数: sub_67e790
// 地址: 0x67e790
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* result = *(arg1 + 0x10)

if (result != 0)
    if (*(result + 0x2c) != 0)
        result = (*(**(result + 0x2c) + 0x14))()
    
    if (*(arg1 + 0x30) != 0)
        return (*(**(arg1 + 0x30) + 0x1c))(1)

return result
