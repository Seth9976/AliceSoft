// 函数: sub_6005f0
// 地址: 0x6005f0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_722bf8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
char var_2c
int32_t eax_2 = data_78c474 ^ &var_2c
int32_t edi
int32_t var_38 = edi
fsbase->NtTib.ExceptionList = &ExceptionList
int128_t* eax_6 = (**arg3)(data_78c474 ^ &var_38)
char ebx = 0
char* ecx = eax_6
int32_t var_18 = 0xf
int32_t var_1c = 0
var_2c = 0
char i

do
    i = *ecx
    ecx = &ecx[1]
while (i != 0)
sub_401270(&var_2c, ecx - &ecx[1], eax_6)
int32_t var_4 = 0
void* result = sub_5f7370(*data_797da0, arg4)

if (result != 0)
    result = sub_5f33b0(result, arg5)
    
    if (result != 0)
        char* var_40_2 = &var_2c
        sub_5fd0b0(result)
        ebx = 1

if (var_18 u>= 0x10)
    int32_t var_40_3 = var_2c.d
    sub_6b4d5b()

result.b = ebx
fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_2c)
return result
