// 函数: sub_61ca30
// 地址: 0x61ca30
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

BOOL hWnd = *(arg1 - 0x28)

if (hWnd != 0)
    DestroyWindow(hWnd)

if (*(arg1 - 0x24) != 0)
    void* lpClassName = arg1 - 0xac
    
    if (*(arg1 - 0x98) u>= 0x10)
        lpClassName = *lpClassName
    
    UnregisterClassA(lpClassName, *(arg1 - 0x2c))
    *(arg1 - 0x24) = 0

hWnd.b = 1
return hWnd
