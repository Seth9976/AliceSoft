// 函数: sub_6a20a0
// 地址: 0x6a20a0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_7287b0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_4c
int32_t eax_2 = data_78c474 ^ &var_4c
int32_t __saved_edi
int32_t eax_4 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t result_2 = 0
int32_t var_44 = 0
int32_t var_40 = 0
int32_t* edi = &result_2
int32_t var_c_1 = 0
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
void arg_38
sub_416780(&arg_38, edi)
int128_t* esi_1 = (**arg2)(eax_4)
char* ecx_1 = esi_1
int32_t var_24 = 0xf
int32_t var_28 = 0
char var_38 = 0
int128_t* eax_18

do
    eax_18.b = *ecx_1
    ecx_1 = &ecx_1[1]
while (eax_18.b != 0)
sub_401270(&var_38, ecx_1 - &ecx_1[1], esi_1)
var_c_1.b = 1
char eax_20 = sub_680ae0(arg1, &var_38, &result_2, arg3)

if (var_24 u>= 0x10)
    int32_t var_60_2 = var_38.d
    sub_6b4d5b()

int32_t result = result_2
int32_t var_24_1 = 0xf
int32_t var_28_1 = 0
var_38 = 0

if (result != 0)
    int32_t result_1 = result
    sub_6b4d5b()

result.b = eax_20
fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_4c)
return result
