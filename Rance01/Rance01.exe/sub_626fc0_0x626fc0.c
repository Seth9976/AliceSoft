// 函数: sub_626fc0
// 地址: 0x626fc0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71d0d8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_48
int32_t eax_2 = data_78c474 ^ &var_48
int32_t __saved_edi
int32_t var_58 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_2c = 0xf
int32_t result_1 = 0
char var_40 = 0
int32_t var_4 = 0
int32_t result

if (sub_624480(*(arg2 + 0xdc), &var_40, arg3) != 0)
    SetTextColor(arg1, *(arg2 + 0x154))
    char* eax_7 = var_40.d
    
    if (var_2c u< 0x10)
        eax_7 = &var_40
    
    sub_6220e0(arg1, arg2, arg4, arg5, eax_7)
    int32_t eax_8 = *(arg2 + 0xcc)
    int32_t ecx_2 = eax_8 + arg5
    int32_t eax_10
    int32_t edx_3
    edx_3:eax_10 = sx.q(eax_8 * result_1)
    int32_t var_1c_1 = ((eax_10 - edx_3) s>> 1) + arg4
    int32_t lprc = arg4
    int32_t var_20_1 = ecx_2 - 1
    int32_t var_18_1 = ecx_2
    
    if (*(arg2 + 0x134) == arg3)
        FillRect(arg1, &lprc, *(arg2 + 0x174))
    else if (*(arg2 + 0xfc) == arg3)
        FillRect(arg1, &lprc, *(arg2 + 0x16c))
    
    if (var_2c u>= 0x10)
        int32_t var_5c_5 = var_40.d
        sub_6b4d5b()
    
    result = result_1
else
    if (var_2c u>= 0x10)
        int32_t var_5c_1 = var_40.d
        sub_6b4d5b()
    
    result = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_48)
return result
