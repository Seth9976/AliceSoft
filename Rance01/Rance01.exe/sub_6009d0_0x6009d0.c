// 函数: sub_6009d0
// 地址: 0x6009d0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_727e20
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_44
int32_t eax_2 = data_78c474 ^ &var_44
int32_t __saved_edi
int32_t eax_4 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t result_2 = 0
int32_t var_38 = 0
int32_t var_34 = 0
int32_t* edi = &result_2
int32_t var_4 = 0
void arg_8
sub_416780(&arg_8, edi)
void arg_c
sub_416780(&arg_c, edi)
void arg_10
sub_416780(&arg_10, edi)
void arg_14
sub_416780(&arg_14, edi)
void arg_18
sub_416780(&arg_18, edi)
void arg_1c
sub_416780(&arg_1c, edi)
void arg_20
sub_416780(&arg_20, edi)
void arg_24
sub_416780(&arg_24, edi)
void arg_28
sub_416780(&arg_28, edi)
void arg_2c
sub_416780(&arg_2c, edi)
void arg_30
sub_416780(&arg_30, edi)
void arg_34
sub_416780(&arg_34, edi)
int128_t* esi_1 = (**arg3)(eax_4)
int32_t var_18 = 0xf
int32_t var_1c = 0
int32_t var_2c[0x4]
__builtin_memset(&var_2c, 0, 1)
char* ecx_2 = esi_1
int128_t* eax_18

do
    eax_18.b = *ecx_2
    ecx_2 = &ecx_2[1]
while (eax_18.b != 0)
sub_401270(&var_2c, ecx_2 - (esi_1 + 1), esi_1)
var_4.b = 1
char eax_20 = sub_5f68a0(&result_2, arg4, &var_2c, &result_2, arg5)

if (var_18 u>= 0x10)
    int32_t var_58_2 = var_2c[0]
    sub_6b4d5b()

int32_t result = result_2
int32_t var_18_1 = 0xf
int32_t var_1c_1 = 0
__builtin_memset(&var_2c, 0, 1)

if (result != 0)
    int32_t result_1 = result
    sub_6b4d5b()

result.b = eax_20
fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_44)
return result
