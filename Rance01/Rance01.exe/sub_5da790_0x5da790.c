// 函数: sub_5da790
// 地址: 0x5da790
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

sub_5da740(arg1)

if (arg3 s> 0 && arg4 s> 0)
    *(arg1 + 4) = arg3
    *(arg1 + 0x14) = ((arg3 << 2) + 0xf) & 0xfffffff0
    *(arg1 + 8) = arg4
    *(arg1 + 0xc) = 0x20
    *(arg1 + 0x10) = 4
    int32_t* pbmi_1 = nullptr
    int32_t var_14_1 = 0
    int32_t var_10_1 = 0
    sub_404f60(0x28, &pbmi_1)
    int32_t temp0_1 = divs.dp.d(sx.q(*(arg1 + 0x14)), *(arg1 + 0x10))
    *(arg1 + 0x10)
    int32_t* pbmi = pbmi_1
    *pbmi = 0x28
    pbmi[3] = 0x200001
    __builtin_memset(&pbmi[4], 0, 0x18)
    pbmi[1] = temp0_1
    pbmi[2] = neg.d(arg4)
    HDC hDC_1 = GetDC(arg2)
    HBITMAP eax_9 = CreateDIBSection(hDC_1, pbmi, DIB_RGB_COLORS, &arg1[0x1c], nullptr, 0)
    *(arg1 + 0x18) = eax_9
    HWND hWnd
    HDC hDC
    
    if (eax_9 != 0)
        HDC hdc = CreateCompatibleDC(hDC_1)
        *(arg1 + 0x20) = hdc
        
        if (hdc != 0)
            *(arg1 + 0x24) = SelectObject(hdc, *(arg1 + 0x18))
            ReleaseDC(arg2, hDC_1)
            *(arg1 + 0x28) = arg2
            *arg1 = 1
            sub_65ab60(&pbmi_1)
            int32_t eax_12
            eax_12.b = 1
            return eax_12
        
        hDC = hDC_1
        hWnd = arg2
    else
        hDC = hDC_1
        hWnd = arg2
    
    ReleaseDC(hWnd, hDC)
    sub_65ab60(&pbmi_1)

int32_t eax
eax.b = 0
return eax
