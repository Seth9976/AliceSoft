// 函数: sub_68b550
// 地址: 0x68b550
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* result = *(arg1 + 0x18)

if (result == 0 || *(arg1 + 0x1c) == 0 || *(arg1 + 0x20) == 0 || *(arg1 + 0x24) == 0)
    result.b = 0
    return result

char eax_1

if (*(result + 0x2c) != 0)
    eax_1 = (*(**(result + 0x2c) + 0x10))()

if ((*(result + 0x2c) == 0 || eax_1 == 0) && sub_413690(*(arg1 + 0x1c)) == 0
        && sub_413690(*(arg1 + 0x20)) == 0 && sub_413690(*(arg1 + 0x24)) == 0)
    return 0

return 1
