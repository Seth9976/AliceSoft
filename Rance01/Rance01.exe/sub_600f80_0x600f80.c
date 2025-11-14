// 函数: sub_600f80
// 地址: 0x600f80
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71b768
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_30
int32_t eax_2 = data_78c474 ^ &var_30
fsbase->NtTib.ExceptionList = &ExceptionList
char result

if (arg3 != 0)
    int32_t __saved_edi
    int128_t* eax_6 = (**arg3)(data_78c474 ^ &__saved_edi)
    char* ecx = eax_6
    int32_t var_18_1 = 0xf
    int32_t var_1c_1 = 0
    char var_2c = 0
    char i
    
    do
        i = *ecx
        ecx = &ecx[1]
    while (i != 0)
    sub_401270(&var_2c, ecx - &ecx[1], eax_6)
    int32_t var_4 = 0
    result = sub_5f6d10(&var_2c, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, arg13, arg14)
    
    if (var_18_1 u>= 0x10)
        int32_t var_44_3 = var_2c.d
        sub_6b4d5b()
else
    result = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_30)
return result
