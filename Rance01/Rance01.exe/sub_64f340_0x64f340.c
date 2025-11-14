// 函数: sub_64f340
// 地址: 0x64f340
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void var_30
int32_t eax_1 = data_78c474 ^ &var_30
RECT rect_1
GetClientRect(*(arg1 + 0xa4), &rect_1)
RECT rect
GetClientRect(*(arg1 + 0xa0), &rect)
MoveWindow(*(arg1 + 0xa0), 0, rect_1.bottom - rect.bottom, 0xa, 0xa, 1)

if (*(arg1 + 0x84) != 0)
    GetClientRect(*(arg1 + 0xa0), &rect)
    sub_6590e0(*(arg1 + 0x84), zx.d(arg2.w), (arg2 u>> 0x10) - rect.bottom)

sub_6b4885(eax_1 ^ &var_30)
return 0
