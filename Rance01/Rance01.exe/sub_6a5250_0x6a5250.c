// 函数: sub_6a5250
// 地址: 0x6a5250
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_713888
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_9c
int32_t eax_2 = data_78c474 ^ &var_9c
int32_t __saved_esi
int32_t var_ac = data_78c474 ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t eax_5 = arg1[8]
int32_t ebx = 0
int32_t var_90 = 0
HBRUSH eax_7 = CreateSolidBrush(arg1[4])
int32_t edx = arg1[8]
int32_t var_5c = arg1[7]
HDC hDC = arg1[9]
int32_t lprc = 0
int32_t var_60 = 0
int32_t var_58 = edx
FillRect(hDC, &lprc, eax_7)
DeleteObject(eax_7)
HDC hdc = arg1[9]
COLORREF color = SetBkColor(hdc, arg1[4])
int32_t var_8c = arg1[0xf]
int32_t var_88 = 0
int32_t eax_11
int32_t edx_2
edx_2:eax_11 = sx.q(arg1[8] - arg1[0xe])
int32_t eax_15
int32_t edx_3
edx_3:eax_15 = sx.q(arg1[0x14])
int32_t eax_17 = (eax_15 - edx_3) s>> 1
int32_t eax_20 = (arg1[1] - *arg1) s>> 5

if (eax_20 u> 0)
    int32_t var_94_1 = 0
    int32_t eax_43
    
    do
        if (*(*arg1 + ebx + 0x1c) != 0)
            SetBkColor(hdc, arg1[4])
            arg1[0x13] = 0xffffff
            
            if (var_88 == arg1[0x1e])
                SetBkColor(hdc, 0xf0f0f0)
                arg1[0x13] = 0
            
            char var_95_1
            
            if (arg3 == 0 || arg5 s>= eax_5)
                var_95_1 = 0
            else
                int32_t ecx_4 = arg4 + arg2
                var_90 |= 1
                
                if (*(sub_66fc20(&lprc, *arg1 + ebx) + 0x10) * eax_17 + var_8c u<= ecx_4)
                    var_95_1 = 0
                else
                    var_95_1 = 1
                    
                    if (var_8c u>= ecx_4)
                        var_95_1 = 0
            
            int32_t var_50
            
            if ((var_90.b & 1) != 0)
                var_90 &= 0xfffffffe
                
                if (var_50 u>= 0x10)
                    int32_t lprc_1 = lprc
                    sub_6b4d5b()
            
            if (var_95_1 != 0)
                SetBkColor(hdc, 0xdcdcdc)
            
            if (arg1[0x11] == 0)
                HGDIOBJ eax_29 = SelectObject(hdc, arg1[0x10])
                COLORREF color_1 = arg1[0x13]
                arg1[0x11] = eax_29
                arg1[0x12] = SetTextColor(hdc, color_1)
            
            int32_t var_2c
            char* eax_33 = sub_66fc20(&var_2c, *arg1 + ebx)
            int32_t var_4 = 0
            uint8_t* lpString = sub_66fc20(&lprc, *arg1 + var_94_1)
            
            if (*(lpString + 0x14) u>= 0x10)
                lpString = *lpString
            
            TextOutA(hdc, var_8c - arg2, (eax_11 - edx_2) s>> 1, lpString, *(eax_33 + 0x10))
            
            if (var_50 u>= 0x10)
                int32_t lprc_2 = lprc
                sub_6b4d5b()
            
            int32_t var_4_1 = 0xffffffff
            var_50 = 0xf
            int32_t var_54_1 = 0
            lprc.b = 0
            int32_t var_18
            
            if (var_18 u>= 0x10)
                int32_t var_b0_11 = var_2c
                sub_6b4d5b()
            
            char var_48
            var_8c += *(sub_66fc20(&var_48, *arg1 + var_94_1) + 0x10) * eax_17
            int32_t var_34
            
            if (var_34 u>= 0x10)
                int32_t var_b0_13 = var_48.d
                sub_6b4d5b()
            
            bool cond:0_1 = arg1[0x11] == 0
            var_34 = 0xf
            int32_t var_38_1 = 0
            var_48 = 0
            
            if (not(cond:0_1))
                SetTextColor(hdc, arg1[0x12])
                SelectObject(hdc, arg1[0x11])
                arg1[0x11] = 0
            
            ebx = var_94_1
        
        eax_43 = var_88 + 1
        ebx += 0x20
        var_88 = eax_43
        var_94_1 = ebx
    while (eax_43 u< eax_20)

SetBkColor(arg1[9], color)
HGDIOBJ eax_45 = CreatePen(PS_COSMETIC, 0, arg1[5])
SelectObject(hdc, eax_45)
MoveToEx(hdc, 0, arg1[8] - 1, nullptr)
LineTo(hdc, arg1[7], arg1[8] - 1)
BOOL result = DeleteObject(eax_45)
fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_9c)
return result
