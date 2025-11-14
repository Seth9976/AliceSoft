// 函数: sub_65d950
// 地址: 0x65d950
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71c2c0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_7c
int32_t eax_2 = data_78c474 ^ &var_7c
int32_t __saved_edi
int32_t var_8c = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
HDC hdc = *(arg1 + 0xa8)
COLORREF color = SetBkColor(hdc, 0x808080)

if (*(arg1 + 0x17c) == 0)
    HGDIOBJ eax_6 = SelectObject(hdc, *(arg1 + 0x178))
    COLORREF color_1 = *(arg1 + 0x184)
    *(arg1 + 0x17c) = eax_6
    *(arg1 + 0x180) = SetTextColor(hdc, color_1)

struct dpparts::CBrush::VTable* const var_6c = &dpparts::CBrush::`vftable'
int32_t var_4 = 0
int32_t var_64 = 0x80
int32_t var_60 = 0x80
int32_t var_5c = 0x80
HBRUSH ho_2 = CreateSolidBrush(0x808080)
RECT lprc
lprc.bottom = *(arg1 + 0x64)
HBRUSH ho_1 = ho_2
lprc.left = 0
lprc.top = 0
lprc.right = *(arg1 + 0xa0)
FillRect(*(arg1 + 0xa8), &lprc, ho_2)

if (ho_2 != 0)
    DeleteObject(ho_2)
    ho_1 = nullptr

int32_t edi_1 = *(arg1 + 0xfc)
int32_t ebp_2 = *(arg1 + 0x100) - *(arg1 + 0x5c) - *(arg1 + 0x64)
int32_t eax_11 = GetScrollPos(*(arg1 + 0x130), *(arg1 + 0x138))
int32_t ebp_3 = ebp_2 + GetScrollPos(*(arg1 + 0x114), *(arg1 + 0x11c))
int32_t edi_3 = sub_70c710(float.t(edi_1 + eax_11) / fconvert.t(*(arg1 + 0x70)))
int32_t ebp_4 = sub_70c710(float.t(ebp_3) / fconvert.t(*(arg1 + 0x70)))

if (*(arg1 + 0x68) == 0)
    int32_t eax_15 = *(arg1 + 0xf0)
    
    if (eax_15 s>= 0)
        edi_3 -= sub_5f9ea0(eax_15)
        ebp_4 -= sub_5f9ef0(*(arg1 + 0xf0))

if (edi_3 s>= 0 && ebp_4 s>= 0 && *(arg1 + 0x98) != 0 && ebp_4 u< *(arg1 + 0x8c)
        && edi_3 u< *(arg1 + 0x88))
    char* eax_22 = *(arg1 + 0x90) * ebp_4 + *(arg1 + 0x94) * edi_3 + *(arg1 + 0x78)
    int32_t ecx_3
    ecx_3.b = *eax_22
    uint32_t var_90_7 = zx.d(eax_22[3])
    uint32_t var_94_6 = zx.d(ecx_3.b)
    uint32_t var_98_1 = zx.d(eax_22[1])
    uint32_t var_9c_1 = zx.d(eax_22[2])
    sub_4104a0(" [R:%3d] [G:%3d] [B:%3d] [A:%3d]")
    var_4.b = 1
    var_94_6.q = fconvert.d(fconvert.t(*(arg1 + 0x70)))
    int32_t var_98_2 = *(arg1 + 0x8c)
    int32_t var_9c_2 = ebp_4 + 1
    int32_t var_a0_1 = *(arg1 + 0x88)
    int32_t var_a4_1 = edi_3 + 1
    sub_4104a0(" [X:%4d/%4d] [Y:%4d/%4d] [Zoom:%2.02f]")
    int32_t* lpString_3
    int32_t* lpString = lpString_3
    int32_t var_18
    
    if (var_18 u< 0x10)
        lpString = &lpString_3
    
    int32_t c_1
    TextOutA(hdc, 0, 1, lpString, c_1)
    int32_t* lpString_2
    int32_t* lpString_1 = lpString_2
    int32_t var_44
    
    if (var_44 u< 0x10)
        lpString_1 = &lpString_2
    
    int32_t c
    TextOutA(hdc, 0, *(arg1 + 0x188) + 1, lpString_1, c)
    
    if (var_44 u>= 0x10)
        int32_t* lpString_4 = lpString_2
        sub_6b4d5b()
    
    int32_t var_44_1 = 0xf
    int32_t var_48 = 0
    lpString_2.b = 0
    
    if (var_18 u>= 0x10)
        int32_t* lpString_5 = lpString_3
        sub_6b4d5b()

if (*(arg1 + 0x17c) != 0)
    SetTextColor(hdc, *(arg1 + 0x180))
    SelectObject(hdc, *(arg1 + 0x17c))
    *(arg1 + 0x17c) = 0

SetBkColor(hdc, color)
HBRUSH ho = ho_1

if (ho != 0)
    ho = DeleteObject(ho)

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_7c)
return ho
