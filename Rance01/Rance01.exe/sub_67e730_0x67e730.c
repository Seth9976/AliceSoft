// 函数: sub_67e730
// 地址: 0x67e730
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* result = *(arg1 + 0x10)

if (result == 0 || *(arg1 + 0x14) == 0 || *(arg1 + 0x18) == 0)
    result.b = 0
    return result

char eax_1

if (*(result + 0x2c) != 0)
    eax_1 = (*(**(result + 0x2c) + 0x10))()

if (*(result + 0x2c) == 0 || eax_1 == 0)
    void* eax_2 = *(arg1 + 0x14)
    char eax_4
    
    if (*(eax_2 + 0x2c) != 0)
        eax_4 = (*(**(eax_2 + 0x2c) + 0x10))()
    
    if ((*(eax_2 + 0x2c) == 0 || eax_4 == 0) && sub_413690(*(arg1 + 0x18)) == 0)
        return 0

return 1
