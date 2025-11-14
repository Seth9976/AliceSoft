// 函数: sub_627af0
// 地址: 0x627af0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_72341b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_448
int32_t eax_2 = data_78c474 ^ &var_448
int32_t __saved_edi
int32_t var_45c = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_460 = arg3
char var_410
_swprintf(&var_410, 0x400, "[%6d]")
SetTextColor(arg2, *(arg1 + 0x148))
sub_6220e0(arg2, arg1, arg4, arg5, &var_410)
char* eax_6 = &var_410
char i

do
    i = *eax_6
    eax_6 = &eax_6[1]
while (i != 0)
COLORREF color_1 = *(arg1 + 0x14c)
void var_40f
int32_t eax_7 = eax_6 - &var_40f
var_448 = eax_7
int32_t esi_1 = arg4 + ((eax_7 * *(arg1 + 0xcc)) u>> 1)
SetTextColor(arg2, color_1)
sub_6220e0(arg2, arg1, esi_1, arg5, " : ")
int32_t eax_13
int32_t edx_1
edx_1:eax_13 = sx.q(*(arg1 + 0xcc) * 3)
int32_t ecx_2 = var_448 + 3
int32_t var_428 = 0xf
int32_t var_42c = 0
char var_43c = 0
int32_t var_4 = 0
int32_t result

if (sub_624a90(arg6, *(arg1 + 0xdc), arg3, &var_43c) != 0)
    if (sub_6249c0(&var_448, *(arg1 + 0xdc)) != 0)
        int32_t eax_22 = var_448 - 0xa
        var_448 = eax_22
        COLORREF color
        
        switch (eax_22)
            case 0, 1, 0x25
                color = *(arg1 + 0x14c)
            case 2
                color = *(arg1 + 0x158)
            case 0x11
                color = *(arg1 + 0x154)
            default
                color = *(arg1 + 0x164)
        
        SetTextColor(arg2, color)
        char* eax_24 = var_43c.d
        
        if (var_428 u< 0x10)
            eax_24 = &var_43c
        
        sub_6220e0(arg2, arg1, esi_1 + ((eax_13 - edx_1) s>> 1), arg5, eax_24)
        int32_t result_1 = ecx_2 + var_42c
        int32_t eax_25 = *(arg1 + 0xcc)
        int32_t ecx_7 = eax_25 + arg5
        int32_t lprc = arg4
        int32_t var_41c_1 = ecx_7 - 1
        int32_t eax_27
        int32_t edx_7
        edx_7:eax_27 = sx.q(eax_25 * result_1)
        int32_t var_414_1 = ecx_7
        int32_t var_418_1 = ((eax_27 - edx_7) s>> 1) + arg4
        
        if (*(arg1 + 0x134) == arg3)
            FillRect(arg2, &lprc, *(arg1 + 0x174))
        else if (*(arg1 + 0xfc) == arg3)
            HBRUSH hbr
            
            switch (var_448)
                case 0, 1, 2, 0x11, 0x25
                    hbr = *(arg1 + 0x170)
                default
                    hbr = *(arg1 + 0x16c)
            
            FillRect(arg2, &lprc, hbr)
        
        if (var_428 u>= 0x10)
            int32_t var_460_10 = var_43c.d
            sub_6b4d5b()
        
        result = result_1
    else if (var_428 u< 0x10)
        result = 0
    else
        int32_t var_460_7 = var_43c.d
        sub_6b4d5b()
        result = 0
else
    if (var_428 u>= 0x10)
        int32_t var_460_5 = var_43c.d
        sub_6b4d5b()
    
    result = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_448)
return result
