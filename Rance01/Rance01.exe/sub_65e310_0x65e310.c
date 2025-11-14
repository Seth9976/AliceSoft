// 函数: sub_65e310
// 地址: 0x65e310
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

HWND hWnd = arg1[0xd]
*arg1 = &dpparts::CWindow::`vftable'

if (hWnd != 0 && arg1[0xe].b != 0)
    DestroyWindow(hWnd)
    HINSTANCE hInstance = arg1[6]
    PSTR lpClassName = arg1[0xb]
    arg1[0xd] = 0
    hWnd = UnregisterClassA(lpClassName, hInstance)
    
    if (hWnd != 0)
        arg1[0xe].b = 0

if (arg1[0x14] u>= 0x10)
    int32_t var_c_3 = arg1[0xf]
    hWnd = sub_6b4d5b()

arg1[0x13] = 0
arg1[0x14] = 0xf
arg1[0xf].b = 0
return hWnd
