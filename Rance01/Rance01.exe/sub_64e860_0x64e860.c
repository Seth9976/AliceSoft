// 函数: sub_64e860
// 地址: 0x64e860
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_3 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71c6c2
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_b8
int32_t eax_2 = data_78c474 ^ &var_b8
int32_t __saved_edi
int32_t var_cc = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_4 = 0
int32_t var_9c = 0
HBRUSH eax_6 = CreateSolidBrush(0xffffff)
int32_t edx = *(arg2 + 8)
int32_t var_7c = *(arg2 + 4)
HDC hDC = *(arg2 + 0xc)
int32_t* lprc = nullptr
int32_t var_80 = 0
int32_t var_78 = edx
FillRect(hDC, &lprc, eax_6)
DeleteObject(eax_6)
HDC hdc_3 = *(arg2 + 0xc)

if (*(arg2 + 0x28) == 0)
    *(arg2 + 0x28) = SelectObject(hdc_3, *(arg2 + 0x24))
    *(arg2 + 0x2c) = SetTextColor(hdc_3, *(arg2 + 0x30))

arg1[5] = 0xf
arg1[4] = 0
*arg1 = 0
sub_401270(arg1, nullptr, 0x72d6cb)
int32_t var_4_1 = 0
int32_t var_9c_1 = 1
struct dpparts::CFont::VTable* const var_68 = &dpparts::CFont::`vftable'
HGDIOBJ var_64 = nullptr
HGDIOBJ h = nullptr
COLORREF color = 0
int32_t var_58 = 0
int32_t var_54 = 0x10
int32_t var_3c = 0xf
int32_t var_40 = 0
char var_50 = 0
sub_401270(&var_50, 0xd, 0x732d18)
int32_t var_34 = 0x190
int16_t var_30 = 0
int32_t var_4_2 = 1
int32_t var_54_1 = *(arg2 + 0x34)
COLORREF color_1 = 0xc8c8c8
sub_64d730(&var_68)
int32_t ecx_2 = *(arg2 + 0x5c)
int32_t esi_3 = *(arg2 + 0x34)
int32_t* edi_1 = arg3
int32_t i_1 = 0
uint32_t temp0_1 = divu.dp.d(0:(*(arg2 + 0x68) - ecx_2), esi_3)
int32_t ecx_4 = edi_1[1] - *edi_1
int32_t eax_18
int32_t edx_4
edx_4:eax_18 = muls.dp.d(0x92492493, ecx_4)
int32_t edx_6 = (edx_4 + ecx_4) s>> 4

if (edx_6 u>> 0x1f != neg.d(edx_6))
    int32_t var_ac_1 = 0
    var_b8 = 0
    int32_t i
    
    do
        int32_t* ecx_6 = *edi_1 + var_b8
        int32_t var_b0 = 0x72d6e6
        int32_t var_2c
        char* eax_22 = sub_401ec0(ecx_6, &var_2c, 0, 0xc)
        
        if (*(eax_22 + 0x14) u>= 0x10)
            eax_22 = *eax_22
        
        int32_t j = sub_6b760f(eax_22, &var_b0, 0xa)
        int32_t j_1 = j
        int32_t var_18
        
        if (var_18 u>= 0x10)
            int32_t var_d0_4 = var_2c
            sub_6b4d5b()
        
        if (*(arg2 + 0x60) == j)
            SetBkColor(*(arg2 + 0xc), *(arg2 + 0x7c))
        
        if (arg6 != 0 && temp0_1 == i_1)
            int32_t* ecx_9 = var_b8 + *edi_1
            var_4_2.b = 2
            sub_401ef0(arg1, sub_401ec0(ecx_9, &var_2c, 0, ecx_9[4] - 1))
            var_4_2.b = 1
            
            if (var_18 u>= 0x10)
                int32_t var_d0_7 = var_2c
                sub_6b4d5b()
            
            char* eax_30 = sub_401ec0(*arg3 + var_b8, &var_2c, 0, 0xc)
            
            if (*(eax_30 + 0x14) u>= 0x10)
                eax_30 = *eax_30
            
            *(arg2 + 0x60) = sub_6b760f(eax_30, &var_b0, 0xa)
            
            if (var_18 u>= 0x10)
                int32_t var_d0_8 = var_2c
                sub_6b4d5b()
            
            SetBkColor(*(arg2 + 0xc), *(arg2 + 0x7c))
            edi_1 = arg3
            j = j_1
            *(arg2 + 0x64) = *(arg2 + 0x60)
        
        if (divu.dp.d(0:(arg5 - ecx_2), esi_3) == i_1)
            char* eax_34 = sub_401ec0(*edi_1 + var_b8, &var_2c, 0, 0xc)
            
            if (*(eax_34 + 0x14) u>= 0x10)
                eax_34 = *eax_34
            
            *(arg2 + 0x64) = sub_6b760f(eax_34, &var_b0, 0xa)
            
            if (var_18 u>= 0x10)
                int32_t var_d0_10 = var_2c
                sub_6b4d5b()
            
            SetBkColor(*(arg2 + 0xc), *(arg2 + 0x80))
            j = j_1
        
        int32_t ecx_16 = *(arg2 + 0x70)
        int32_t* eax_37 = *(arg2 + 0x6c)
        
        if (eax_37 != ecx_16)
            while (*eax_37 != j)
                eax_37 = &eax_37[1]
                
                if (eax_37 == ecx_16)
                    break
            
            if (eax_37 != ecx_16)
                SetBkColor(*(arg2 + 0xc), 0x6464ff)
        
        void** eax_40 = var_b8 + *edi_1
        int32_t ecx_17 = eax_40[4]
        
        if (eax_40[5] u>= 0x10)
            eax_40 = *eax_40
        
        if (*(ecx_17 + eax_40 - 1) == 0x30)
            HDC hdc = *(arg2 + 0xc)
            
            if (h == 0)
                h = SelectObject(hdc, var_64)
                color = SetTextColor(hdc, color_1)
        
        int32_t var_70_1 = 0xf
        int32_t c = 0
        lprc.b = 0
        sub_401180(&lprc, 0xffffffff, *edi_1 + var_b8, 0)
        int32_t* lprc_2 = lprc
        
        if (var_70_1 u< 0x10)
            lprc_2 = &lprc
        
        *(c + lprc_2 - 1) = 0x20
        int32_t* lpString = lprc
        
        if (var_70_1 u< 0x10)
            lpString = &lprc
        
        TextOutA(*(arg2 + 0xc), ecx_2 - arg4, *(arg2 + 0x5c) + var_ac_1, lpString, c)
        SetBkColor(*(arg2 + 0xc), 0xffffff)
        HDC hdc_1 = *(arg2 + 0xc)
        
        if (h != 0)
            SetTextColor(hdc_1, color)
            SelectObject(hdc_1, h)
            h = nullptr
        
        if (var_70_1 u>= 0x10)
            int32_t* lprc_1 = lprc
            sub_6b4d5b()
        
        var_b8 += 0x1c
        var_ac_1 += esi_3
        i = i_1 + 1
        i_1 = i
    while (i u< ecx_4 s/ 0x1c)

HDC hdc_2 = *(arg2 + 0xc)

if (*(arg2 + 0x28) != 0)
    SetTextColor(hdc_2, *(arg2 + 0x2c))
    SelectObject(hdc_2, *(arg2 + 0x28))
    *(arg2 + 0x28) = 0

var_68 = &dpparts::CFont::`vftable'

if (var_64 != 0)
    DeleteObject(var_64)
    int32_t var_64_1 = 0

int32_t var_60 = 0
int32_t var_5c = 0

if (var_3c u>= 0x10)
    int32_t var_d0_20 = var_50.d
    sub_6b4d5b()

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_b8)
return arg1
