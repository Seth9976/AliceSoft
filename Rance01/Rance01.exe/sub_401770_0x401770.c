// 函数: sub_401770
// 地址: 0x401770
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71eae8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_30
int32_t eax_2 = data_78c474 ^ &var_30
int32_t var_34 = data_78c474 ^ &var_30
fsbase->NtTib.ExceptionList = &ExceptionList
var_30 = 0
int32_t var_2c
char* eax_6
int32_t* ecx
int32_t edx
int32_t edx_1
eax_6, edx_1 = sub_4018a0(&var_2c, edx, ecx, &var_2c)
int32_t var_4 = 0
sub_401d60(arg1, edx_1, eax_6)
int32_t var_18

if (var_18 u>= 0x10)
    int32_t var_38_1 = var_2c
    sub_6b4d5b()

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_30)
return arg1
