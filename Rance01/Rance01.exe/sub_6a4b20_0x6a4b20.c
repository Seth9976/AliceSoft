// 函数: sub_6a4b20
// 地址: 0x6a4b20
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

HGDIOBJ eax = arg2[4]

if (eax != 0)
    DeleteObject(eax)
    eax = arg2[3]
    
    if (eax != 0)
        SelectObject(eax, arg2[5])
        DeleteDC(arg2[3])
        arg2[3] = 0
        arg2[5] = 0
    
    arg2[4] = 0
    arg2[1] = 0
    arg2[2] = 0

if (arg1 s> 0 && arg4 s> 0)
    arg2[2] = arg4
    arg2[1] = arg1
    arg2[6] = ((arg1 << 2) + 0xf) & 0xfffffff0
    arg2[7] = 4
    int32_t* pbmi_2 = nullptr
    int32_t var_14_1 = 0
    int32_t var_10_1 = 0
    sub_404f60(0x28, &pbmi_2)
    int32_t temp0_1 = divs.dp.d(sx.q(arg2[6]), arg2[7])
    arg2[7]
    int32_t* pbmi = pbmi_2
    *pbmi = 0x28
    pbmi[3] = 0x200001
    __builtin_memset(&pbmi[4], 0, 0x18)
    pbmi[1] = temp0_1
    pbmi[2] = neg.d(arg4)
    HDC eax_9 = GetDC(arg3)
    HBITMAP eax_10 = CreateDIBSection(eax_9, pbmi, DIB_RGB_COLORS, arg2, nullptr, 0)
    arg2[4] = eax_10
    
    if (eax_10 != 0)
        HDC hdc = CreateCompatibleDC(eax_9)
        arg2[3] = hdc
        
        if (hdc == 0)
            ReleaseDC(arg3, eax_9)
            sub_65ab60(&pbmi_2)
            int32_t eax_12
            eax_12.b = 0
            return eax_12
        
        arg2[5] = SelectObject(hdc, arg2[4])
        ReleaseDC(arg3, eax_9)
        sub_65ab60(&pbmi_2)
        int32_t eax_14
        eax_14.b = 1
        return eax_14
    
    ReleaseDC(arg3, eax_9)
    int32_t* pbmi_1 = pbmi
    sub_6b4d5b()

eax.b = 0
return eax
