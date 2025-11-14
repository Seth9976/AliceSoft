// 函数: sub_65cfa0
// 地址: 0x65cfa0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

RECT rect
int32_t eax_1 = data_78c474 ^ &rect
sub_65e0e0(arg1)
sub_6374f0(arg1 + 0x9c)

if (*(arg1 + 0x98) != 0)
    if (*(arg1 + 0x68) != 0 || *(arg1 + 0xf0) s< 0)
        sub_65d060(arg1)
    else
        sub_65d290(arg1)

sub_65d950(arg1)
rect.left = 0
rect.top = *(arg1 + 0x5c)
WINDOWPLACEMENT lpwndpl
GetWindowPlacement(*(arg1 + 0x34), &lpwndpl)
rect.right = lpwndpl.rcNormalPosition.right - lpwndpl.rcNormalPosition.left
GetWindowPlacement(*(arg1 + 0x34), &lpwndpl)
rect.bottom = lpwndpl.rcNormalPosition.bottom - lpwndpl.rcNormalPosition.top
InvalidateRect(*(arg1 + 0x34), &rect, 0)
BOOL result = UpdateWindow(*(arg1 + 0x34))
sub_6b4885(eax_1 ^ &rect)
return result
