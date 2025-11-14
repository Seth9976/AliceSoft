// 函数: sub_62b690
// 地址: 0x62b690
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if ((*(*(arg1 + 0x10) + 0x10))() s< arg2)
    sub_62c310(arg1 + 0x10)
    *(arg1 + 0x28) = (arg2 * 3 + 0xf) & 0xfffffff0
    int32_t* pbmi_3 = nullptr
    int32_t var_14_1 = 0
    int32_t var_10_1 = 0
    *(arg1 + 0x18) = arg2
    *(arg1 + 0x1c) = arg2
    *(arg1 + 0x20) = 0x18
    *(arg1 + 0x24) = 3
    sub_404f60(0x28, &pbmi_3)
    int32_t temp0_1 = divs.dp.d(sx.q(*(arg1 + 0x28)), *(arg1 + 0x24))
    *(arg1 + 0x24)
    int32_t* pbmi = pbmi_3
    *pbmi = 0x28
    pbmi[2] = 0xffffffff - arg2
    pbmi[3] = 0x180001
    pbmi[1] = temp0_1
    __builtin_memset(&pbmi[4], 0, 0x18)
    HDC eax_7 = GetDC(nullptr)
    HBITMAP eax_8 = CreateDIBSection(eax_7, pbmi, DIB_RGB_COLORS, arg1 + 0x30, nullptr, 0)
    *(arg1 + 0x2c) = eax_8
    HDC var_2c_1 = eax_7
    
    if (eax_8 == 0)
        goto label_62b760
    
    HDC hdc = CreateCompatibleDC(var_2c_1)
    *(arg1 + 0x34) = hdc
    
    if (hdc == 0)
        var_2c_1 = eax_7
    label_62b760:
        ReleaseDC(nullptr, var_2c_1)
        int32_t* pbmi_1 = pbmi
        sub_6b4d5b()
        int32_t eax_9
        eax_9.b = 0
        return eax_9
    
    *(arg1 + 0x38) = SelectObject(hdc, *(arg1 + 0x2c))
    ReleaseDC(nullptr, eax_7)
    int32_t* pbmi_2 = pbmi
    *(arg1 + 0x14) = 1
    sub_6b4d5b()

int32_t eax_1
eax_1.b = 1
return eax_1
