// 函数: sub_65e660
// 地址: 0x65e660
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

WINDOWPLACEMENT lpwndpl
int32_t eax_1 = data_78c474 ^ &lpwndpl
GetWindowPlacement(*(arg2 + 0x34), &lpwndpl)
int32_t left = lpwndpl.rcNormalPosition.left
arg1[1] = lpwndpl.rcNormalPosition.top
*arg1 = left
sub_6b4885(eax_1 ^ &lpwndpl)
return arg1
