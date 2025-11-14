// 函数: sub_62f820
// 地址: 0x62f820
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

POINT point
GetCursorPos(&point)
ScreenToClient(arg2, &point)
int32_t eax
int32_t edx_1
edx_1:eax = muls.dp.d(0x66666667, *(arg1 + 0x110) - *(arg1 + 0x10c))
int32_t edx_2 = edx_1 s>> 4

if ((edx_2 u>> 0x1f) + edx_2 == 1)
    sub_630420(arg1, 0)

int32_t edi = *(arg1 + 0x120)
int32_t eax_5 = sub_62f920(point.y, arg1, point.x)
*(arg1 + 0x120) = eax_5

if (eax_5 != edi)
    sub_62fb30(arg1)
    sub_62fe20(arg1)
    sub_630180(arg1)
    InvalidateRect(*(arg1 + 4), nullptr, 1)
    UpdateWindow(*(arg1 + 4))

return 0
