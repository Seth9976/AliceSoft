// 函数: sub_55ece0
// 地址: 0x55ece0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if (arg2 == 0)
    *(arg1 + 8) = arg1 + 4
    return arg1 + 4

void* esi = *(arg1 + 0xc)
*(arg1 + 8) = arg2
char result = (**(esi + 4))()

if (result != 0 && *(esi + 0x29c) == 0)
    *(esi + 0x29c) = 1

return result
