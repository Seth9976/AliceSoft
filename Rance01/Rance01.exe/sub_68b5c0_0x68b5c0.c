// 函数: sub_68b5c0
// 地址: 0x68b5c0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* result = *(arg1 + 0x1c)

if (result != 0)
    if (*(result + 0x2c) != 0)
        result = (*(**(result + 0x2c) + 0x14))()
    
    if (*(arg1 + 0x64) != 0)
        return (*(**(arg1 + 0x64) + 0x1c))(1)

return result
