// 函数: sub_626210
// 地址: 0x626210
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_72168b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t result_1
int32_t eax_2 = data_78c474 ^ &result_1
int32_t __saved_edi
int32_t var_458 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t lprc_2
int32_t lprc_1 = lprc_2
int32_t var_45c = arg3
char var_414
_swprintf(&var_414, 0x400, "%6d : ")
SetTextColor(arg1, *(arg2 + 0x14c))
sub_6220e0(arg1, arg2, lprc_2, arg4, &var_414)
char* eax_5 = &var_414
char i

do
    i = *eax_5
    eax_5 = &eax_5[1]
while (i != 0)
void var_413
int32_t result_2 = eax_5 - &var_413
result_1 = result_2
lprc_2 += (result_2 * *(arg2 + 0xcc)) u>> 1
int32_t var_42c = 0xf
int32_t var_430 = 0
char var_440 = 0
int32_t var_4 = 0
int32_t result

if (sub_622ca0(*(arg2 + 0xdc), &var_440, arg3) != 0)
    char* eax_10 = var_440.d
    
    if (var_42c u< 0x10)
        eax_10 = &var_440
    
    char* var_45c_5 = eax_10
    _swprintf(&var_414, 0x400, 0x733ce4)
    int32_t eax_13 = (*(**(*(arg2 + 0xdc) + 4) + 0x14))(arg3)
    COLORREF color
    
    if (eax_13 u> 5)
        color = *(arg2 + 0x150)
    else
        switch (eax_13)
            case 0
                color = *(arg2 + 0x14c)
            case 1
                color = *(arg2 + 0x154)
            case 2
                color = *(arg2 + 0x158)
            case 3
                color = *(arg2 + 0x15c)
            case 4
                color = *(arg2 + 0x148)
            case 5
                color = *(arg2 + 0x160)
    
    SetTextColor(arg1, color)
    sub_6220e0(arg1, arg2, lprc_2, arg4, &var_414)
    char* eax_17 = &var_414
    char i_1
    
    do
        i_1 = *eax_17
        eax_17 = &eax_17[1]
    while (i_1 != 0)
    int32_t eax_18 = eax_17 - &var_413
    int32_t eax_19 = *(arg2 + 0x100)
    lprc_2 += (*(arg2 + 0xcc) * eax_18) u>> 1
    sub_628030(eax_19 - eax_18, arg1, arg2, &lprc_2, arg4)
    char* eax_21 = &var_414
    char i_2
    
    do
        i_2 = *eax_21
        eax_21 = &eax_21[1]
    while (i_2 != 0)
    result_1 += *(arg2 + 0x100) - (eax_21 - &var_413) + eax_18
    sub_628030(1, arg1, arg2, &lprc_2, arg4)
    SetTextColor(arg1, *(arg2 + 0x168))
    int32_t var_45c_12 = (*(**(*(arg2 + 0xdc) + 4) + 0x38))(arg3)
    _swprintf(&var_414, 0x400, "(%9d)")
    sub_6220e0(arg1, arg2, lprc_2, arg4, &var_414)
    char* eax_28 = &var_414
    char i_3
    
    do
        i_3 = *eax_28
        eax_28 = &eax_28[1]
    while (i_3 != 0)
    int32_t eax_30 = *(arg2 + 0xcc)
    int32_t ebx_1 = arg4 + eax_30
    result_1 = result_1 + eax_28 - &var_413 + 1
    int32_t var_420_1 = ebx_1 - 1
    int32_t eax_32
    int32_t edx_8
    edx_8:eax_32 = sx.q(eax_30 * result_1)
    int32_t lprc = lprc_1
    int32_t var_41c_1 = ((eax_32 - edx_8) s>> 1) + lprc_1
    int32_t var_418_1 = ebx_1
    
    if (*(arg2 + 0x134) == arg3)
        FillRect(arg1, &lprc, *(arg2 + 0x174))
    else if (*(arg2 + 0xfc) == arg3)
        FillRect(arg1, &lprc, *(arg2 + 0x16c))
    
    if (var_42c u>= 0x10)
        int32_t var_45c_15 = var_440.d
        sub_6b4d5b()
    
    result = result_1
else
    if (var_42c u>= 0x10)
        int32_t var_45c_4 = var_440.d
        sub_6b4d5b()
    
    result = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &result_1)
return result
