// 函数: sub_65e6a0
// 地址: 0x65e6a0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

WINDOWPLACEMENT lpwndpl
int32_t eax_1 = data_78c474 ^ &lpwndpl
GetWindowPlacement(*(arg2 + 0x34), &lpwndpl)
int32_t eax_4 = lpwndpl.rcNormalPosition.right - lpwndpl.rcNormalPosition.left
arg1[1] = lpwndpl.rcNormalPosition.bottom - lpwndpl.rcNormalPosition.top
*arg1 = eax_4
sub_6b4885(eax_1 ^ &lpwndpl)
return arg1
