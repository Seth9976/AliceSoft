// 函数: sub_570df0
// 地址: 0x570df0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* esi = arg1
int32_t eax = *(esi + 0x40)
int32_t ebp_1 = eax * arg2
int32_t ebx = eax * arg3
void* edi = esi + 8
int32_t eax_3 = (*(*(esi + 8) + 0x10))()
int32_t eax_5

if (eax_3 s>= ebp_1)
    eax_5 = (*(*edi + 0x14))()

if (eax_3 s< ebp_1 || eax_5 s< ebx)
    sub_6b2880(edi)
    HWND hWnd = GetDesktopWindow()
    *(edi + 0xc) = ebx
    *(edi + 0x18) = (ebp_1 + 0xf) & 0xfffffff0
    *(edi + 8) = ebp_1
    *(edi + 0x10) = 8
    *(edi + 0x14) = 1
    int32_t* pbmi_3 = nullptr
    int32_t var_c_1 = 0
    int32_t var_8_1 = 0
    sub_404f60(0x428, &pbmi_3)
    int32_t temp0_1 = divs.dp.d(sx.q(*(edi + 0x18)), *(edi + 0x14))
    *(edi + 0x14)
    int32_t* pbmi = pbmi_3
    *pbmi = 0x28
    pbmi[2] = 0xffffffff - ebx
    pbmi[3] = 0x80001
    __builtin_memset(&pbmi[4], 0, 0x18)
    void* ecx_3 = pbmi + 0x29
    pbmi[1] = temp0_1
    
    for (int32_t i = 0; i s< 0x100; )
        *(ecx_3 + 1) = i.b
        *ecx_3 = i.b
        *(ecx_3 - 1) = i.b
        *(ecx_3 + 2) = 0
        i += 1
        ecx_3 += 4
    
    HDC eax_11 = GetDC(hWnd)
    HBITMAP eax_12 = CreateDIBSection(eax_11, pbmi, DIB_RGB_COLORS, edi + 0x20, nullptr, 0)
    *(edi + 0x1c) = eax_12
    HDC hdc
    
    if (eax_12 != 0)
        hdc = CreateCompatibleDC(eax_11)
        *(edi + 0x24) = hdc
    
    if (eax_12 == 0 || hdc == 0)
        ReleaseDC(hWnd, eax_11)
        int32_t* pbmi_1 = pbmi
        sub_6b4d5b()
        int32_t eax_14
        eax_14.b = 0
        return eax_14
    
    *(edi + 0x28) = SelectObject(hdc, *(edi + 0x1c))
    ReleaseDC(hWnd, eax_11)
    int32_t* pbmi_2 = pbmi
    *(edi + 0x2c) = hWnd
    *(edi + 4) = 1
    sub_6b4d5b()
    esi = arg1

*(esi + 0x38) = ebp_1
*(esi + 0x3c) = ebx
sub_573970(edi, ebp_1, ebx)
int128_t* eax_18
eax_18.b = 1
return eax_18
