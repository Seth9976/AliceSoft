// 函数: sub_4077e0
// 地址: 0x4077e0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_725fb8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
char var_2c
int32_t eax_2 = data_78c474 ^ &var_2c
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t result

if (arg3 != 0)
    int32_t __saved_edi
    int128_t* eax_6 = (**arg3)(data_78c474 ^ &__saved_edi)
    char* ecx = eax_6
    int32_t var_18_1 = 0xf
    int32_t var_1c_1 = 0
    var_2c = 0
    char i
    
    do
        i = *ecx
        ecx = &ecx[1]
    while (i != 0)
    sub_401270(&var_2c, ecx - &ecx[1], eax_6)
    int32_t var_4 = 0
    int32_t result_1
    result_1.b = sub_409090(arg4, &var_2c) != 0
    
    if (var_18_1 u>= 0x10)
        int32_t var_3c_3 = var_2c.d
        sub_6b4d5b()
    
    result = result_1
else
    result = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_2c)
return result
