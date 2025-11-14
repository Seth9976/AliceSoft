// 函数: sub_62fb30
// 地址: 0x62fb30
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

(*(*(arg1 + 0xc8) + 4))()
int32_t eax_1
int32_t edx_1
edx_1:eax_1 = muls.dp.d(0x66666667, *(arg1 + 0x110) - *(arg1 + 0x10c))
int32_t edx_2 = edx_1 s>> 4
void* var_20 = nullptr
int32_t i_1 = 0
int32_t* psizl

if ((edx_2 u>> 0x1f) + edx_2 s> 0)
    int32_t var_28_1 = 0
    int32_t edx_7
    int32_t i
    
    do
        HDC eax_6 = GetDC(*(arg1 + 4))
        HGDIOBJ h
        
        if (i_1 != *(arg1 + 0x11c))
            h = *(arg1 + 0x124)
        else
            h = *(arg1 + 0x150)
        
        HGDIOBJ h_1 = SelectObject(eax_6, h)
        void* eax_8 = var_28_1 + *(arg1 + 0x10c)
        void* lpString = eax_8 + 4
        
        if (*(lpString + 0x14) u>= 0x10)
            lpString = *lpString
        
        GetTextExtentPoint32A(eax_6, lpString, *(eax_8 + 0x14), &psizl)
        SelectObject(eax_6, h_1)
        ReleaseDC(*(arg1 + 4), eax_6)
        *(*(arg1 + 0x10c) + var_28_1 + 0x20) = psizl
        var_20 += psizl + (*(arg1 + 0x108) << 1)
        var_28_1 += 0x28
        int32_t eax_12
        int32_t edx_6
        edx_6:eax_12 = muls.dp.d(0x66666667, *(arg1 + 0x110) - *(arg1 + 0x10c))
        edx_7 = edx_6 s>> 4
        i = i_1 + 1
        i_1 = i
    while (i s< (edx_7 u>> 0x1f) + edx_7)

HWND hWnd = *(arg1 + 4)
int32_t edx_8 = *(arg1 + 0x104)

if (*(arg1 + 0xe4) != 0)
    HDC hdc = *(arg1 + 0xec)
    
    if (hdc != 0)
        SelectObject(hdc, *(arg1 + 0xf0))
        DeleteDC(*(arg1 + 0xec))
        *(arg1 + 0xec) = 0
        *(arg1 + 0xf0) = 0
    
    DeleteObject(*(arg1 + 0xe4))
    *(arg1 + 0xe4) = 0
    *(arg1 + 0xe8) = 0
    *(arg1 + 0xd0) = 0
    *(arg1 + 0xd4) = 0
    *(arg1 + 0xd8) = 0
    *(arg1 + 0xe0) = 0

*(arg1 + 0xd0) = var_20
*(arg1 + 0xd4) = edx_8
void* edx_11 = (var_20 * 3 + 0xf) & 0xfffffff0
*(arg1 + 0xcc) = 0
*(arg1 + 0xd8) = 0x18
*(arg1 + 0xdc) = 3
*(arg1 + 0xe0) = edx_11
psizl = nullptr
int128_t* var_14 = nullptr
int32_t var_10 = 0
sub_4247b0(&psizl, edx_11, 0x28)
int32_t* pbmi = psizl
void* eax_20 = pbmi - var_14

if (eax_20 != 0xffffffd8)
    sub_6bc670(var_14, 0, eax_20 + 0x28)

int32_t temp0 = divs.dp.d(sx.q(*(arg1 + 0xe0)), *(arg1 + 0xdc))
*(arg1 + 0xdc)
*pbmi = 0x28
pbmi[3] = 0x180001
pbmi[1] = temp0
pbmi[2] = 0xffffffff - edx_8
__builtin_memset(&pbmi[4], 0, 0x18)
HDC eax_27 = GetDC(hWnd)
HBITMAP eax_28 = CreateDIBSection(eax_27, pbmi, DIB_RGB_COLORS, arg1 + 0xe8, nullptr, 0)
*(arg1 + 0xe4) = eax_28
HDC hdc_1

if (eax_28 != 0)
    hdc_1 = CreateCompatibleDC(eax_27)
    *(arg1 + 0xec) = hdc_1

if (eax_28 == 0 || hdc_1 == 0)
    ReleaseDC(hWnd, eax_27)
else
    *(arg1 + 0xf0) = SelectObject(hdc_1, *(arg1 + 0xe4))
    ReleaseDC(hWnd, eax_27)
    *(arg1 + 0xcc) = 1

int32_t* pbmi_1 = pbmi
sub_6b4d5b()
SetBkMode(*(arg1 + 0xec), 1)
int32_t result
result.b = 1
return result
