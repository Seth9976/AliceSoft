// 函数: sub_66c8a0
// 地址: 0x66c8a0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_720288
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_34
int32_t eax_2 = data_78c474 ^ &var_34
int32_t __saved_edi
int32_t eax_4 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t result

if (arg2 != 0 && arg4 != 0)
    int32_t edx_1 = **arg4
    int32_t var_30 = 0
    int128_t* eax_6 = edx_1(eax_4)
    char* ecx_1 = eax_6
    int32_t var_18_1 = 0xf
    int32_t var_1c_1 = 0
    int32_t var_2c[0x4]
    __builtin_memset(&var_2c, 0, 1)
    char i
    
    do
        i = *ecx_1
        ecx_1 = &ecx_1[1]
    while (i != 0)
    sub_401270(&var_2c, ecx_1 - &ecx_1[1], eax_6)
    int32_t var_4 = 0
    bool var_31_1 = sub_66a2a0(arg1 + 8, arg2, arg3, &var_2c, &var_30) == 0
    
    if (var_18_1 u>= 0x10)
        int32_t var_4c_3 = var_2c[0]
        sub_6b4d5b()
    
    int32_t eax_9
    eax_9.b = var_31_1 != 0
    result = (eax_9 - 1) & var_30
else
    result = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_34)
return result
