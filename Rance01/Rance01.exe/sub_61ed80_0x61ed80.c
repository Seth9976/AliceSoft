// 函数: sub_61ed80
// 地址: 0x61ed80
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

HWND hWnd = ImmGetDefaultIMEWnd(arg2)

if (hWnd != 0)
    SendMessageA(hWnd, 0x283, 0x22, 0)

*(arg1 + 8) = GetDlgItem(arg2, 0x9cec)
sub_61f4c0(arg1)
return 0
