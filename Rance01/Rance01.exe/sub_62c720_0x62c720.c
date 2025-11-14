// 函数: sub_62c720
// 地址: 0x62c720
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* __saved_ecx
sub_405410(&arg1[0x53], &__saved_ecx, arg1[0x53], arg1[0x54])
arg1[0x57] = 0
sub_631160(arg1, 0)
sub_6312a0(arg1, 0)
BOOL hWnd = arg1[1]

if (hWnd != 0)
    hWnd = IsWindowVisible(hWnd)
    
    if (hWnd != 0)
        InvalidateRect(arg1[1], nullptr, 1)
        return UpdateWindow(arg1[1])

return hWnd
