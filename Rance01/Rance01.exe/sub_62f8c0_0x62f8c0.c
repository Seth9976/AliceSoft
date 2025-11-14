// 函数: sub_62f8c0
// 地址: 0x62f8c0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4 = arg3
int32_t edi = *(arg1 + 0x120)
int32_t eax_3 = sub_62f920(sx.d((arg3 u>> 0x10).w), arg1, sx.d(arg3.w))
*(arg1 + 0x120) = eax_3

if (eax_3 != edi)
    sub_62fb30(arg1)
    sub_62fe20(arg1)
    sub_630180(arg1)
    InvalidateRect(*(arg1 + 4), nullptr, 1)
    UpdateWindow(*(arg1 + 4))

return 0
