// 函数: sub_6b1970
// 地址: 0x6b1970
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

HWND hWnd = *(arg1 + 0x34)

if (hWnd != 0 && *(arg1 + 0x38) != 0)
    DestroyWindow(hWnd)
    HINSTANCE hInstance = *(arg1 + 0x18)
    PSTR lpClassName = *(arg1 + 0x2c)
    *(arg1 + 0x34) = 0
    hWnd = UnregisterClassA(lpClassName, hInstance)
    
    if (hWnd != 0)
        *(arg1 + 0x38) = 0

return hWnd
