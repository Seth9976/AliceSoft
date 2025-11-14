// 函数: sub_5db0a0
// 地址: 0x5db0a0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

*arg1 = &crayfish::CLogViewerWindow::`vftable'{for `win32only::CWindowCallback'}

if (arg1[2] != 0)
    HWND hWnd = arg1[2]
    
    if (hWnd != 0 && DestroyWindow(hWnd) != 0)
        arg1[2] = 0

if (arg1[0x51] u>= 0x10)
    int32_t var_c_2 = arg1[0x4c]
    sub_6b4d5b()

arg1[0x51] = 0xf
arg1[0x50] = 0
arg1[0x4c].b = 0

if (arg1[0x4a] u>= 0x10)
    int32_t var_c_3 = arg1[0x45]
    sub_6b4d5b()

arg1[0x4a] = 0xf
arg1[0x49] = 0
arg1[0x45].b = 0
sub_5dca50(&arg1[0x2a])
sub_6b37f0(&arg1[2])
BOOL hMenu = arg1[1]

if (hMenu != 0)
    hMenu = DestroyMenu(hMenu)
    arg1[1] = 0

return hMenu
