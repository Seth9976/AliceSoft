// 函数: sub_60cf90
// 地址: 0x60cf90
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if (*(arg2 + 4) == 0)
    *(arg2 + 8) = arg1
    *(arg2 + 0xc) = arg4
    *(arg2 + 0x10) = 0x18
    *(arg2 + 0x14) = 3
    *(arg2 + 0x18) = (arg1 * 3 + 0xf) & 0xfffffff0
    int32_t* pbmi_3 = nullptr
    int32_t var_14_1 = 0
    int32_t var_10_1 = 0
    sub_404f60(0x28, &pbmi_3)
    int32_t temp0_1 = divs.dp.d(sx.q(*(arg2 + 0x18)), *(arg2 + 0x14))
    *(arg2 + 0x14)
    int32_t* pbmi = pbmi_3
    *pbmi = 0x28
    pbmi[3] = 0x180001
    __builtin_memset(&pbmi[4], 0, 0x18)
    pbmi[1] = temp0_1
    pbmi[2] = 0xffffffff - arg4
    HDC eax_5 = GetDC(arg3)
    HBITMAP eax_6 = CreateDIBSection(eax_5, pbmi, DIB_RGB_COLORS, arg2 + 0x24, nullptr, 0)
    *(arg2 + 0x20) = eax_6
    HDC hdc
    
    if (eax_6 != 0)
        hdc = CreateCompatibleDC(eax_5)
        *(arg2 + 0x28) = hdc
    
    if (eax_6 == 0 || hdc == 0)
        ReleaseDC(arg3, eax_5)
        int32_t* pbmi_1 = pbmi
        sub_6b4d5b()
        int32_t eax_8
        eax_8.b = 0
        return eax_8
    
    *(arg2 + 0x2c) = SelectObject(hdc, *(arg2 + 0x20))
    ReleaseDC(arg3, eax_5)
    int32_t* pbmi_2 = pbmi
    *(arg2 + 0x1c) = arg3
    *(arg2 + 4) = 1
    sub_6b4d5b()

arg1.b = 1
return arg1
