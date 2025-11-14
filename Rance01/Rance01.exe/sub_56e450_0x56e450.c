// 函数: sub_56e450
// 地址: 0x56e450
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

HWND ebp = arg4
arg4 = arg2
sub_6b2880(arg1 + 8)

if (arg2 == 0)
    arg4 = GetDesktopWindow()

*(arg1 + 0x10) = arg3
*(arg1 + 0x14) = ebp
*(arg1 + 0x18) = 0x20
*(arg1 + 0x1c) = 4
*(arg1 + 0x20) = ((arg3 << 2) + 0xf) & 0xfffffff0
int32_t* pbmi_3 = nullptr
int32_t var_c = 0
int32_t var_8 = 0
sub_404f60(0x28, &pbmi_3)
int32_t temp0 = divs.dp.d(sx.q(*(arg1 + 0x20)), *(arg1 + 0x1c))
int32_t* pbmi = pbmi_3
pbmi[2] = 0xffffffff - ebp
*pbmi = 0x28
pbmi[3] = 0x200001
__builtin_memset(&pbmi[4], 0, 0x18)
pbmi[1] = temp0
HDC eax_6 = GetDC(arg4)
HBITMAP eax_8 = CreateDIBSection(eax_6, pbmi, DIB_RGB_COLORS, arg1 + 0x28, nullptr, 0)
*(arg1 + 0x24) = eax_8
HDC var_24_1 = eax_6
HWND hWnd

if (eax_8 != 0)
    HDC hdc = CreateCompatibleDC(var_24_1)
    *(arg1 + 0x2c) = hdc
    
    if (hdc != 0)
        *(arg1 + 0x30) = SelectObject(hdc, *(arg1 + 0x24))
        ReleaseDC(arg4, eax_6)
        int32_t* pbmi_2 = pbmi
        *(arg1 + 0x34) = arg4
        *(arg1 + 0xc) = 1
        sub_6b4d5b()
        int32_t eax_11
        eax_11.b = 1
        return eax_11
    
    var_24_1 = eax_6
    hWnd = arg4
else
    hWnd = arg4

ReleaseDC(hWnd, var_24_1)
int32_t* pbmi_1 = pbmi
sub_6b4d5b()
int32_t eax_9
eax_9.b = 0
return eax_9
