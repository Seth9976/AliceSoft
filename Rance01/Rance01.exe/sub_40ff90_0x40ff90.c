// 函数: sub_40ff90
// 地址: 0x40ff90
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_7181e8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t* var_30
int32_t eax_2 = data_78c474 ^ &var_30
int32_t __saved_edi
int32_t var_44 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
var_30 = arg2
int128_t* result = *arg1

if (result + arg3 u<= arg1[1])
    int32_t var_18_1 = 0xf
    int32_t var_1c_1 = 0
    char var_2c = 0
    sub_401270(&var_2c, arg3, result)
    int32_t var_4 = 0
    char* edx_1 = var_2c.d
    
    if (var_18_1 u< 0x10)
        edx_1 = &var_2c
    
    char* eax_6 = edx_1
    char i
    
    do
        i = *eax_6
        eax_6 = &eax_6[1]
    while (i != 0)
    sub_401270(var_30, eax_6 - &eax_6[1], edx_1)
    
    if (var_18_1 u>= 0x10)
        int32_t var_48_3 = var_2c.d
        sub_6b4d5b()
    
    *arg1 += arg3
    result.b = 1
else
    result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_30)
return result
