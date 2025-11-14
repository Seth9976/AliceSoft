// 函数: sub_627e20
// 地址: 0x627e20
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_7215fb
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_444
int32_t eax_2 = data_78c474 ^ &var_444
int32_t __saved_edi
int32_t var_454 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_458 = arg3
char var_410
_swprintf(&var_410, 0x400, "[%6d]")
SetTextColor(arg1, *(arg2 + 0x148))
sub_6220e0(arg1, arg2, arg4, arg5, &var_410)
char* eax_6 = &var_410
char i

do
    i = *eax_6
    eax_6 = &eax_6[1]
while (i != 0)
void var_40f
int32_t eax_7 = eax_6 - &var_40f
int32_t ebp_1 = arg4 + ((eax_7 * *(arg2 + 0xcc)) u>> 1)
SetTextColor(arg1, *(arg2 + 0x14c))
sub_6220e0(arg1, arg2, ebp_1, arg5, " : ")
int32_t eax_11
int32_t edx_4
edx_4:eax_11 = sx.q(*(arg2 + 0xcc) * 3)
int32_t var_428 = 0xf
int32_t var_42c = 0
char var_43c = 0
int32_t var_4 = 0
int32_t result

if (sub_624ca0(&var_43c, *(arg2 + 0xdc), arg6, arg3) != 0)
    SetTextColor(arg1, *(arg2 + 0x14c))
    char* eax_17 = var_43c.d
    
    if (var_428 u< 0x10)
        eax_17 = &var_43c
    
    sub_6220e0(arg1, arg2, ebp_1 + ((eax_11 - edx_4) s>> 1), arg5, eax_17)
    int32_t result_1 = eax_7 + 3 + var_42c
    int32_t eax_18 = *(arg2 + 0xcc)
    int32_t ecx_5 = eax_18 + arg5
    int32_t var_41c_1 = ecx_5 - 1
    int32_t eax_20
    int32_t edx_9
    edx_9:eax_20 = sx.q(eax_18 * result_1)
    int32_t var_418_1 = ((eax_20 - edx_9) s>> 1) + arg4
    int32_t lprc = arg4
    int32_t var_414_1 = ecx_5
    
    if (*(arg2 + 0x134) == arg3)
        FillRect(arg1, &lprc, *(arg2 + 0x174))
    else if (*(arg2 + 0xfc) == arg3)
        FillRect(arg1, &lprc, *(arg2 + 0x16c))
    
    if (var_428 u>= 0x10)
        int32_t var_458_9 = var_43c.d
        sub_6b4d5b()
    
    result = result_1
else
    if (var_428 u>= 0x10)
        int32_t var_458_5 = var_43c.d
        sub_6b4d5b()
    
    result = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_444)
return result
