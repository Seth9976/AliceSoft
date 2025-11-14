// 函数: sub_573730
// 地址: 0x573730
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* esi = arg1
void* edi = esi + 8
int32_t ebx = arg2
int32_t ebp

if ((*(*(esi + 8) + 0x10))() s< ebx)
    ebp = arg3
label_573782:
    sub_6b2880(edi)
    HWND hWnd_1 = GetDesktopWindow()
    *(edi + 8) = ebx
    *(edi + 0x18) = (ebx + 0xf) & 0xfffffff0
    *(edi + 0xc) = ebp
    *(edi + 0x10) = 8
    *(edi + 0x14) = 1
    BITMAPINFO* pbmi_3 = nullptr
    int32_t var_c_1 = 0
    int32_t var_8_1 = 0
    sub_404f60(0x428, &pbmi_3)
    int32_t temp0_1 = divs.dp.d(sx.q(*(edi + 0x18)), *(edi + 0x14))
    *(edi + 0x14)
    BITMAPINFO* pbmi = pbmi_3
    pbmi->bmiHeader.biSize = 0x28
    pbmi->bmiHeader.biPlanes = 1
    pbmi->bmiHeader.biBitCount = 8
    __builtin_memset(&pbmi->bmiHeader.biCompression, 0, 0x18)
    uint8_t* ecx_2 = &pbmi->bmiColors[0].rgbGreen
    pbmi->bmiHeader.biWidth = temp0_1
    pbmi->bmiHeader.biHeight = 0xffffffff - ebp
    
    for (int32_t i = 0; i s< 0x100; )
        (ecx_2 - 0x29)->bmiColors[0].rgbRed = i.b
        (ecx_2 - 0x29)->bmiColors[0].rgbGreen = i.b
        (ecx_2 - 0x29)->bmiColors[0].rgbBlue = i.b
        (ecx_2 - 0x29)->bmiColors[0].rgbReserved = 0
        i += 1
        ecx_2 = &ecx_2[4]
    
    HDC eax_11 = GetDC(hWnd_1)
    HBITMAP eax_12 = CreateDIBSection(eax_11, pbmi, DIB_RGB_COLORS, edi + 0x20, nullptr, 0)
    *(edi + 0x1c) = eax_12
    HDC var_2c_3 = eax_11
    HWND hWnd
    
    if (eax_12 == 0)
        hWnd = hWnd_1
    label_573843:
        ReleaseDC(hWnd, var_2c_3)
        BITMAPINFO* pbmi_1 = pbmi
        sub_6b4d5b()
        int32_t eax_13
        eax_13.b = 0
        return eax_13
    
    HDC hdc = CreateCompatibleDC(var_2c_3)
    *(edi + 0x24) = hdc
    
    if (hdc == 0)
        var_2c_3 = eax_11
        hWnd = hWnd_1
        goto label_573843
    
    *(edi + 0x28) = SelectObject(hdc, *(edi + 0x1c))
    ReleaseDC(hWnd_1, eax_11)
    BITMAPINFO* pbmi_2 = pbmi
    *(edi + 0x2c) = hWnd_1
    *(edi + 4) = 1
    sub_6b4d5b()
    ebp = arg3
    ebx = arg2
    esi = arg1
else
    ebp = arg3
    
    if ((*(*edi + 0x14))() s< ebp)
        goto label_573782

*(esi + 0x38) = ebx
*(esi + 0x3c) = ebp
sub_573970(edi, ebx, ebp)
int128_t* eax_5
eax_5.b = 1
return eax_5
