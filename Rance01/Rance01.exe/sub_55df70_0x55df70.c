// 函数: sub_55df70
// 地址: 0x55df70
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* esi = *(*(arg1 + 4) + 4)
int32_t eax = **(esi + 4)
*(esi + 0x2a0) = 0
char result = eax()

if (result != 0 && *(esi + 0x29c) == 0)
    *(esi + 0x29c) = 1

if (*(esi + 0x2a0) == 0)
    *(esi + 0x23c) = 0

return result
