// 函数: sub_6a2b60
// 地址: 0x6a2b60
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_722bf8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
char var_2c
int32_t eax_2 = data_78c474 ^ &var_2c
fsbase->NtTib.ExceptionList = &ExceptionList
char result

if (arg2 != 0)
    int32_t __saved_edi
    int128_t* eax_6 = (**arg2)(data_78c474 ^ &__saved_edi)
    int32_t var_18_1 = 0xf
    int32_t var_1c_1 = 0
    var_2c = 0
    char* ecx_2 = eax_6
    char i
    
    do
        i = *ecx_2
        ecx_2 = &ecx_2[1]
    while (i != 0)
    sub_401270(&var_2c, ecx_2 - (eax_6 + 1), eax_6)
    int32_t var_4 = 0
    result =
        sub_682030(arg1, &var_2c, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12)
    
    if (var_18_1 u>= 0x10)
        int32_t var_40_3 = var_2c.d
        sub_6b4d5b()
else
    result = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_2c)
return result
