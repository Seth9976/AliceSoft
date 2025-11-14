// 函数: sub_6a5cb0
// 地址: 0x6a5cb0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_715849
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_50
int32_t eax_2 = data_78c474 ^ &var_50
int32_t __saved_edi
int32_t var_60 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_40 = 0
HBRUSH eax_6 = CreateSolidBrush(*(arg1 + 0xb0))
int32_t* lprc = nullptr
int32_t var_28 = 0
int32_t var_24 = *(arg1 + 4)
int32_t var_20 = *(arg1 + 8)
FillRect(*(arg1 + 0xc), &lprc, eax_6)
DeleteObject(eax_6)
HDC hdc_2 = *(arg1 + 0xc)

if (*(arg1 + 0x24) == 0)
    HGDIOBJ eax_9 = SelectObject(hdc_2, *(arg1 + 0x20))
    COLORREF color_1 = *(arg1 + 0x2c)
    *(arg1 + 0x24) = eax_9
    *(arg1 + 0x28) = SetTextColor(hdc_2, color_1)

*(arg2 + 0x14) = 0xf
*(arg2 + 0x10) = 0
*arg2 = 0
int32_t var_4 = 0
int32_t ecx_2 = *(arg1 + 0x90)
int32_t edi_1 = *(arg1 + 0x30)
int32_t var_40_1 = 1
uint32_t temp0_1 = divu.dp.d(0:(*(arg1 + 0x9c) - ecx_2), edi_1)
int32_t ebx_1 = 0
int32_t ebp_3 = (arg3[1] - *arg3) s/ 0x1c

if (ebp_3 s> 0)
    int32_t var_4c_1 = 0
    var_50 = 0
    
    do
        if (*(arg1 + 0x94) == ebx_1)
            SetBkColor(*(arg1 + 0xc), *(arg1 + 0xb4))
        
        if (arg6 != 0 && temp0_1 == ebx_1)
            COLORREF color_2 = *(arg1 + 0xb4)
            HDC hdc = *(arg1 + 0xc)
            *(arg1 + 0x94) = ebx_1
            SetBkColor(hdc, color_2)
            *(arg1 + 0x98) = *(arg1 + 0x94)
        
        if (divu.dp.d(0:(arg5 - ecx_2), edi_1) == ebx_1)
            COLORREF color = *(arg1 + 0xb8)
            HDC hdc_1 = *(arg1 + 0xc)
            *(arg1 + 0x98) = ebx_1
            SetBkColor(hdc_1, color)
        
        void** eax_23 = *arg3 + var_50
        int32_t ecx_6 = eax_23[4]
        
        if (eax_23[5] u>= 0x10)
            eax_23 = *eax_23
        
        if (*(eax_23 + ecx_6 - 1) == 0x30)
            HDC hdc_3 = *(arg1 + 0xc)
            
            if (*(arg1 + 0x5c) == 0)
                *(arg1 + 0x5c) = SelectObject(hdc_3, *(arg1 + 0x58))
                *(arg1 + 0x60) = SetTextColor(hdc_3, *(arg1 + 0x64))
        
        int32_t var_18_1 = 0xf
        int32_t c = 0
        lprc.b = 0
        sub_401180(&lprc, 0xffffffff, *arg3 + var_50, 0)
        int32_t* lprc_2 = lprc
        
        if (var_18_1 u< 0x10)
            lprc_2 = &lprc
        
        *(lprc_2 + c - 1) = 0x20
        int32_t* lpString = lprc
        
        if (var_18_1 u< 0x10)
            lpString = &lprc
        
        TextOutA(*(arg1 + 0xc), ecx_2 - arg4, *(arg1 + 0x90) + var_4c_1, lpString, c)
        SetBkColor(*(arg1 + 0xc), *(arg1 + 0xb0))
        HDC hdc_4 = *(arg1 + 0xc)
        
        if (*(arg1 + 0x5c) != 0)
            SetTextColor(hdc_4, *(arg1 + 0x60))
            SelectObject(hdc_4, *(arg1 + 0x5c))
            *(arg1 + 0x5c) = 0
        
        if (var_18_1 u>= 0x10)
            int32_t* lprc_1 = lprc
            sub_6b4d5b()
        
        var_50 += 0x1c
        var_4c_1 += edi_1
        ebx_1 += 1
    while (ebx_1 s< ebp_3)

HDC hdc_5 = *(arg1 + 0xc)

if (*(arg1 + 0x24) != 0)
    SetTextColor(hdc_5, *(arg1 + 0x28))
    SelectObject(hdc_5, *(arg1 + 0x24))
    *(arg1 + 0x24) = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_50)
return arg2
