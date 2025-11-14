// 函数: sub_60c490
// 地址: 0x60c490
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_721892
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_5c
int32_t eax_2 = data_78c474 ^ &var_5c
int32_t __saved_edi
int32_t eax_4 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t eax_5 = arg2[0x31]
int32_t* ecx = arg2[0x30]
BOOL result

if (ecx == eax_5)
label_60c4f4:
    int32_t lpsi_1
    int32_t edx
    int32_t* edi_1 = sub_60bde0(arg3, edx, &lpsi_1, arg1)
    int32_t var_4 = 0
    int32_t ecx_2 = arg2[0x31]
    int32_t eax_7
    
    if (edi_1 u< ecx_2)
        eax_7 = arg2[0x30]
    
    int32_t* eax_13
    
    if (edi_1 u>= ecx_2 || eax_7 u> edi_1)
        if (ecx_2 == arg2[0x32])
            sub_60c910(&arg2[0x30])
        
        eax_13 = arg2[0x31]
        var_4.b = 2
    else
        if (ecx_2 == arg2[0x32])
            sub_60c910(&arg2[0x30])
        
        eax_13 = arg2[0x31]
        edi_1 = (edi_1 - eax_7) s/ 0x2c * 0x2c + arg2[0x30]
        var_4.b = 1
    
    if (eax_13 != 0)
        *eax_13 = *edi_1
        eax_13[1] = edi_1[1]
        eax_13[2] = edi_1[2]
        int32_t edx_4
        edx_4.b = edi_1[3].b
        eax_13[3].b = edx_4.b
        eax_13[9] = 0xf
        eax_13[8] = 0
        eax_13[4].b = 0
        sub_401180(&eax_13[4], 0xffffffff, &edi_1[4], 0)
    
    arg2[0x31] += 0x2c
    int32_t var_4_1 = 0xffffffff
    int32_t var_18
    
    if (var_18 u>= 0x10)
        int32_t var_2c
        int32_t var_70_2 = var_2c
        sub_6b4d5b()
    
    void* i = arg2[0x30]
    arg2[0x34] = 0
    
    if (i != arg2[0x31])
        int32_t ecx_8 = 0
        
        do
            int32_t eax_15 = *(i + 0x20)
            
            if (ecx_8 s< eax_15)
                ecx_8 = eax_15
                arg2[0x34] = ecx_8
            
            i += 0x2c
        while (i != arg2[0x31])
    
    HWND edi_9 = arg2[0x22]
    int32_t eax_16 = GetScrollPos(edi_9, SB_HORZ)
    int32_t eax_17 = *(*arg2 + 0x90)
    lpsi_1 = 0x1c
    int32_t var_38_1 = 7
    int32_t var_34_1 = 0
    int32_t var_28_1 = eax_16
    int32_t var_30_1 = eax_17(eax_4) - 1
    int32_t var_2c_1 = 0
    SetScrollInfo(edi_9, SB_HORZ, &lpsi_1, 1)
    HWND edi_10 = arg2[0x22]
    int32_t eax_20 = GetScrollPos(edi_10, SB_VERT)
    SCROLLINFO lpsi
    lpsi.cbSize = 0x1c
    lpsi.fMask = 7
    lpsi.nMin = 0
    lpsi.nMax = (*(*arg2 + 0x8c))() - 1
    lpsi.nPage = 0
    lpsi.nPos = eax_20
    SetScrollInfo(edi_10, SB_VERT, &lpsi, 1)
    InvalidateRect(arg2[0x22], nullptr, 1)
    result = UpdateWindow(arg2[0x22])
else
    while (*ecx != arg1 || ecx[1] != arg3)
        ecx = &ecx[0xb]
        
        if (ecx == eax_5)
            goto label_60c4f4
    
    int32_t edx_3 = arg2[0x31]
    int32_t var_70_1 = var_5c
    sub_60ca80(&ecx[0xb], edx_3, ecx, edx_3)
    void* edi_7 = arg2[0x31]
    int32_t var_78 = var_5c
    sub_535e80(edi_7 - 0x2c, edi_7)
    arg2[0x31] -= 0x2c
    HWND hWnd = arg2[0x22]
    arg2[0x35] = 0xffffffff
    result = InvalidateRect(hWnd, nullptr, 1)

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_5c)
return result
