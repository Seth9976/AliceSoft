// 函数: sub_6b1480
// 地址: 0x6b1480
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_7182f9
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_48
int32_t eax_2 = data_78c474 ^ &var_48
int32_t __saved_edi
int32_t var_5c = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_4 = 0
int32_t var_38 = 0
int32_t* var_30 = arg1
HBRUSH eax_7 = CreateSolidBrush(*(arg2 + 0x5c))
int32_t edx = *(arg2 + 8)
int32_t var_24 = *(arg2 + 4)
HDC hDC = *(arg2 + 0xc)
uint8_t* lprc = nullptr
int32_t var_28 = 0
int32_t var_20 = edx
FillRect(hDC, &lprc, eax_7)
DeleteObject(eax_7)
HDC hdc = *(arg2 + 0xc)

if (*(arg2 + 0x24) == 0)
    *(arg2 + 0x24) = SelectObject(hdc, *(arg2 + 0x20))
    *(arg2 + 0x28) = SetTextColor(hdc, *(arg2 + 0x2c))

arg1[5] = 0xf
arg1[4] = 0
*arg1 = 0
sub_401270(arg1, nullptr, 0x72cca9)
int32_t var_4_1 = 0
int32_t ecx_1 = *(arg2 + 0x30)
int32_t eax_11 = *(arg2 + 0x58)
var_48 = eax_11 - ecx_1 * arg5
int32_t eax_18 = (arg3[1] - *arg3) s/ 0x1c
int32_t var_38_1 = 1

if (eax_18 s> 0)
    int32_t var_44_1 = 0
    int32_t y = var_48
    var_48 = eax_18
    int32_t i
    
    do
        int32_t var_18_1 = 0xf
        int32_t c = 0
        lprc.b = 0
        sub_401180(&lprc, 0xffffffff, *arg3 + var_44_1, 0)
        uint8_t* lpString = lprc
        
        if (var_18_1 u< 0x10)
            lpString = &lprc
        
        TextOutA(*(arg2 + 0xc), eax_11 - arg4, y, lpString, c)
        SetBkColor(*(arg2 + 0xc), *(arg2 + 0x5c))
        
        if (var_18_1 u>= 0x10)
            uint8_t* lprc_1 = lprc
            sub_6b4d5b()
        
        var_44_1 += 0x1c
        y += ecx_1
        i = var_48
        var_48 -= 1
    while (i != 1)

HDC hdc_1 = *(arg2 + 0xc)

if (*(arg2 + 0x24) != 0)
    SetTextColor(hdc_1, *(arg2 + 0x28))
    SelectObject(hdc_1, *(arg2 + 0x24))
    *(arg2 + 0x24) = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_48)
return arg1
