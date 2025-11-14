// 函数: sub_601160
// 地址: 0x601160
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_727dd8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_8c
int32_t eax_2 = data_78c474 ^ &var_8c
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t __saved_edi
int128_t* eax_6 = (**arg3)(data_78c474 ^ &__saved_edi)
char* ecx = eax_6
int32_t var_1c = 0
char var_2c = 0
char ebx = 0
char i

do
    i = *ecx
    ecx = &ecx[1]
while (i != 0)
sub_401270(&var_2c, ecx - &ecx[1], eax_6)
int32_t var_4 = 0
void var_5c
int32_t* eax_9 = sub_5e0090(arg9, arg10, arg11, arg13, &var_5c, arg7, arg8, 
    fconvert.s(fconvert.t(arg12)), fconvert.s(fconvert.t(arg16)), arg14, arg15)
int32_t* edx_3 = data_797da0
__builtin_memcpy(&var_8c, eax_9, 0x30)
void* result = sub_5f7370(*edx_3, arg4)

if (result != 0)
    result = sub_5f3790(result, arg19)
    
    if (result != 0)
        int32_t var_a0_3 = arg18
        int32_t var_a4_2 = arg17
        void var_d4
        __builtin_memcpy(&var_d4, &var_8c, 0x30)
        ebx = sub_5e31e0(result, arg5, arg6, &var_2c).b

if (0xf u>= 0x10)
    int32_t var_a0_4 = var_2c.d
    sub_6b4d5b()

result.b = ebx
fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_8c)
return result
