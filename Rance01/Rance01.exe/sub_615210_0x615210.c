// 函数: sub_615210
// 地址: 0x615210
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

POINT point
GetCursorPos(&point)
ScreenToClient(arg2, &point)
int32_t edi = *(arg1 + 0x130)
int32_t eax_2 = sub_615320(point.y, arg1, point.x)
*(arg1 + 0x130) = eax_2

if (eax_2 != edi)
    sub_615430(arg1)
    sub_615580(arg1)
    sub_6158e0(arg1)
    InvalidateRect(*(arg1 + 0x88), nullptr, 1)
    UpdateWindow(*(arg1 + 0x88))

return 0
