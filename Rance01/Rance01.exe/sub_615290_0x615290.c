// 函数: sub_615290
// 地址: 0x615290
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t edi = *(arg1 + 0x130)
int32_t eax_3 = sub_615320(sx.d((arg2 u>> 0x10).w), arg1, sx.d(arg2.w))
*(arg1 + 0x130) = eax_3

if (eax_3 != edi)
    sub_615430(arg1)
    sub_615580(arg1)
    sub_6158e0(arg1)
    InvalidateRect(*(arg1 + 0x88), nullptr, 1)
    UpdateWindow(*(arg1 + 0x88))

return 0
