// 函数: sub_62f9e0
// 地址: 0x62f9e0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

(*(*(arg1 + 0x94) + 4))()
HWND hWnd_1 = *(arg1 + 4)
int32_t ebx_2 = *(arg1 + 0x104) + *(arg1 + 0x100) + *(arg1 + 0xfc)
sub_62c310(arg1 + 0x94)
*(arg1 + 0x9c) = arg2
BITMAPINFO* pbmi_3 = nullptr
int32_t var_14 = 0
int32_t var_10 = 0
*(arg1 + 0xa0) = ebx_2
*(arg1 + 0xa4) = 0x18
*(arg1 + 0xa8) = 3
*(arg1 + 0xac) = (arg2 * 3 + 0xf) & 0xfffffff0
sub_404f60(0x28, &pbmi_3)
BITMAPINFO* pbmi = pbmi_3
pbmi->bmiHeader.biHeight = 0xffffffff - ebx_2
pbmi->bmiHeader.biSize = 0x28
pbmi->bmiHeader.biPlanes = 1
pbmi->bmiHeader.biBitCount = 0x18
pbmi->bmiHeader.biWidth = divs.dp.d(sx.q(*(arg1 + 0xac)), *(arg1 + 0xa8))
__builtin_memset(&pbmi->bmiHeader.biCompression, 0, 0x18)
HDC eax_5 = GetDC(hWnd_1)
HBITMAP eax_7 = CreateDIBSection(eax_5, pbmi, DIB_RGB_COLORS, arg1 + 0xb4, nullptr, 0)
*(arg1 + 0xb0) = eax_7
HDC var_2c_1 = eax_5
HWND hWnd

if (eax_7 != 0)
    HDC hdc = CreateCompatibleDC(var_2c_1)
    *(arg1 + 0xb8) = hdc
    
    if (hdc != 0)
        *(arg1 + 0xbc) = SelectObject(hdc, *(arg1 + 0xb0))
        ReleaseDC(hWnd_1, eax_5)
        BITMAPINFO* pbmi_2 = pbmi
        *(arg1 + 0x98) = 1
        sub_6b4d5b()
        int32_t eax_10
        eax_10.b = 1
        return eax_10
    
    var_2c_1 = eax_5
    hWnd = hWnd_1
else
    hWnd = hWnd_1

ReleaseDC(hWnd, var_2c_1)
BITMAPINFO* pbmi_1 = pbmi
sub_6b4d5b()
int32_t eax_8
eax_8.b = 0
return eax_8
