// 函数: sub_605c20
// 地址: 0x605c20
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

BOOL hWnd = *(arg1 + 0x90)

if (hWnd != 0)
    DestroyWindow(hWnd)

if (*(arg1 + 0x94) != 0)
    void* lpClassName = arg1 + 0xc
    
    if (*(arg1 + 0x20) u>= 0x10)
        lpClassName = *lpClassName
    
    UnregisterClassA(lpClassName, *(arg1 + 0x8c))
    *(arg1 + 0x94) = 0

hWnd.b = 1
return hWnd
