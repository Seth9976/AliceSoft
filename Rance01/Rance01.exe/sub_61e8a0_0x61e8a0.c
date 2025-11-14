// 函数: sub_61e8a0
// 地址: 0x61e8a0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_713cf8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_esi
int32_t eax_2 = data_78c474 ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList

if (*(arg1 + 4) == 0)
    *(arg1 + 8) = arg3
    *(arg1 + 0xc) = arg4
    *(arg1 + 0x10) = 0x18
    *(arg1 + 0x14) = 3
    *(arg1 + 0x18) = (arg3 * 3 + 0xf) & 0xfffffff0
    int32_t* pbmi_3 = nullptr
    int32_t var_24_1 = 0
    int32_t var_20_1 = 0
    sub_404f60(0x28, &pbmi_3)
    int32_t var_c_1 = 0
    int32_t temp0_1 = divs.dp.d(sx.q(*(arg1 + 0x18)), *(arg1 + 0x14))
    int32_t* pbmi = pbmi_3
    *pbmi = 0x28
    pbmi[3] = 0x180001
    __builtin_memset(&pbmi[4], 0, 0x18)
    pbmi[1] = temp0_1
    pbmi[2] = 0xffffffff - arg4
    HWND hWnd = (**arg2)(eax_2)
    HDC eax_9 = GetDC(hWnd)
    HBITMAP eax_10 = CreateDIBSection(eax_9, pbmi, DIB_RGB_COLORS, arg1 + 0x20, nullptr, 0)
    *(arg1 + 0x1c) = eax_10
    HDC hdc
    
    if (eax_10 != 0)
        hdc = CreateCompatibleDC(eax_9)
        *(arg1 + 0x24) = hdc
    
    if (eax_10 == 0 || hdc == 0)
        ReleaseDC(hWnd, eax_9)
        int32_t* pbmi_1 = pbmi
        sub_6b4d5b()
        int32_t eax_12
        eax_12.b = 0
        fsbase->NtTib.ExceptionList = ExceptionList
        return eax_12
    
    *(arg1 + 0x28) = SelectObject(hdc, *(arg1 + 0x1c))
    ReleaseDC(hWnd, eax_9)
    int32_t* pbmi_2 = pbmi
    *(arg1 + 0x2c) = arg2
    *(arg1 + 4) = 1
    sub_6b4d5b()

int32_t eax_3
eax_3.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
return eax_3
