// 函数: sub_6a2e40
// 地址: 0x6a2e40
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_728778
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_6c
int32_t eax_2 = data_78c474 ^ &var_6c
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t __saved_edi
int128_t* eax_6 = (**arg4)(data_78c474 ^ &__saved_edi)
char* ecx_1 = eax_6
int32_t var_24 = 0xf
int32_t var_28 = 0
char var_38 = 0
char i

do
    i = *ecx_1
    ecx_1 = &ecx_1[1]
while (i != 0)
sub_401270(&var_38, ecx_1 - &ecx_1[1], eax_6)
int32_t var_c_1 = 0
void var_68
char result = sub_682440(arg1, arg2, arg3, &var_38, 
    sub_5e0090(arg7, arg8, arg9, arg11, &var_68, arg5, arg6, fconvert.s(fconvert.t(arg10)), 
        fconvert.s(fconvert.t(arg14)), arg12, arg13), 
    arg15, arg16, arg17)

if (var_24 u>= 0x10)
    int32_t var_80_2 = var_38.d
    sub_6b4d5b()

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_6c)
return result
