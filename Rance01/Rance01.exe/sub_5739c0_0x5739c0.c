// 函数: sub_5739c0
// 地址: 0x5739c0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_722bf8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_2c
int32_t eax_2 = data_78c474 ^ &var_2c
int32_t __saved_esi
int32_t var_3c = data_78c474 ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t ebx_1 = *(arg1 + 0x40) * arg2[1]
HFONT result

if (*(arg1 + 0xe0) == 0 || *(arg1 + 0x110) != ebx_1 || *(arg1 + 0x10c) != *arg2)
    int32_t var_4 = 0
    int32_t edx
    sub_401180(arg1 + 0xe8, 0xffffffff, sub_576020(arg2, edx, &var_2c), 0)
    int32_t var_18
    
    if (var_18 u>= 0x10)
        int32_t var_40_1 = var_2c
        sub_6b4d5b()
    
    *(arg1 + 0xe4) = ebx_1
    *(arg1 + 0x104) = 0
    result = sub_61ea10(arg1 + 0xe0)
    
    if (result.b != 0)
        *(arg1 + 0x10c) = *arg2
        *(arg1 + 0x110) = ebx_1
        result.b = 1
else
    result.b = 1

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_2c)
return result
