// 函数: sub_6b37f0
// 地址: 0x6b37f0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

BOOL hWnd = *arg1

if (hWnd != 0)
    hWnd = DestroyWindow(hWnd)
    
    if (hWnd != 0)
        *arg1 = 0

if (arg1[0xb].b != 0)
    hWnd = UnregisterClassA(arg1[0xa], arg1[0x1a])
    
    if (hWnd != 0)
        arg1[0xb].b = 0

if (arg1[0x18] u>= 0x10)
    int32_t var_8_3 = arg1[0x13]
    hWnd = sub_6b4d5b()

arg1[0x18] = 0xf
arg1[0x17] = 0
arg1[0x13].b = 0

if (arg1[0x11] u>= 0x10)
    int32_t var_8_4 = arg1[0xc]
    hWnd = sub_6b4d5b()

arg1[0x10] = 0
arg1[0x11] = 0xf
arg1[0xc].b = 0
return hWnd
