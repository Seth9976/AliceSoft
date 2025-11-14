// 函数: sub_606ef0
// 地址: 0x606ef0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

RECT var_14
int32_t eax_1 = data_78c474 ^ &var_14
SendMessageA(*(arg1 + 0x8c4), 5, 0, 0)
GetWindowRect(*(arg1 + 0x8c4), &var_14)
HWND hWnd = *(arg1 + 0x8dc)
int32_t Y = var_14.bottom - var_14.top
int32_t ecx

if (hWnd != 0)
    GetWindowRect(hWnd, &var_14)
    ecx = var_14.bottom - var_14.top
else
    ecx = 0

int32_t nWidth = zx.d(arg2.w)
MoveWindow(*(arg1 + 0x1a8), 0, Y, nWidth, (arg2 u>> 0x10) - ecx - Y, 1)
SendMessageA(*(arg1 + 0x8dc), 5, 0, 0)
var_14.left = nWidth - 0xa0
var_14.top = 0xffffffff
SendMessageA(*(arg1 + 0x8dc), 0x404, 2, &var_14)
sub_6b4885(eax_1 ^ &var_14)
return 0
