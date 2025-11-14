// 函数: sub_5644d0
// 地址: 0x5644d0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t cy = (*(*(arg1 + 8) + 0x14))()
HDC result = (*(*(arg1 + 8) + 0x10))()
int32_t cx = result

if (*(arg1 + 0x24) != 0 && cx s> 0 && cy s> 0)
    result = GetDC(*(arg1 + 0x34))
    
    if (result != 0)
        BitBlt(result, arg2, arg3, cx, cy, *(arg1 + 0x2c), 0, 0, SRCCOPY)
        return ReleaseDC(*(arg1 + 0x34), result)

return result
