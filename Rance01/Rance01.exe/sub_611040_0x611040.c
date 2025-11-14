// 函数: sub_611040
// 地址: 0x611040
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* __saved_ecx
sub_613f60(arg1 + 0x1a0, &__saved_ecx, *(arg1 + 0x1a0), *(arg1 + 0x1a4))
BOOL hWnd = *(arg1 + 0x88)

if (hWnd != 0)
    hWnd = DestroyWindow(hWnd)

if (*(arg1 + 0x8c) != 0)
    void* lpClassName = arg1 + 4
    
    if (*(arg1 + 0x18) u>= 0x10)
        lpClassName = *lpClassName
    
    hWnd = UnregisterClassA(lpClassName, *(arg1 + 0x84))
    *(arg1 + 0x8c) = 0

return hWnd
