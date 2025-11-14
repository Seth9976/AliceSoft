// 函数: sub_5da500
// 地址: 0x5da500
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* edi = *(arg1 + 0x3c)

if (*(edi + 8) != 0)
    HWND hWnd = *(edi + 8)
    
    if (hWnd != 0 && DestroyWindow(hWnd) != 0)
        *(edi + 8) = 0

struct win32only::CWindowCallback::crayfish::CLogViewerWindow::VTable** edi_1 = *(arg1 + 0x3c)

if (edi_1 != 0)
    sub_5db0a0(edi_1)
    struct win32only::CWindowCallback::crayfish::CLogViewerWindow::VTable** var_c_2 = edi_1
    sub_6b4d5b()
    *(arg1 + 0x3c) = 0

if (*(arg1 + 0x54) u>= 0x10)
    int32_t var_c_3 = *(arg1 + 0x40)
    sub_6b4d5b()

*(arg1 + 0x54) = 0xf
*(arg1 + 0x50) = 0
*(arg1 + 0x40) = 0

if (*(arg1 + 0x34) u>= 0x10)
    int32_t var_c_4 = *(arg1 + 0x20)
    sub_6b4d5b()

*(arg1 + 0x34) = 0xf
*(arg1 + 0x30) = 0
*(arg1 + 0x20) = 0
sub_5da8f0(arg1 + 0xc)
int32_t result = *(arg1 + 0xc)

if (result != 0)
    int32_t result_1 = result
    result = sub_6b4d5b()

*(arg1 + 0xc) = 0
*(arg1 + 0x10) = 0
*(arg1 + 0x14) = 0
return result
