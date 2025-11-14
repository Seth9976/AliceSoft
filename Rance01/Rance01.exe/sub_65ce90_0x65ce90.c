// 函数: sub_65ce90
// 地址: 0x65ce90
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ebp
sub_65dc60(ebp, arg1)
HWND hWnd = *(arg1 + 0x34)

if (hWnd != 0 && *(arg1 + 0x38) != 0)
    DestroyWindow(hWnd)
    HINSTANCE hInstance = *(arg1 + 0x18)
    PSTR lpClassName = *(arg1 + 0x2c)
    *(arg1 + 0x34) = 0
    
    if (UnregisterClassA(lpClassName, hInstance) != 0)
        *(arg1 + 0x38) = 0

return 0
