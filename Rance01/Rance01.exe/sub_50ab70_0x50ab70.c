// 函数: sub_50ab70
// 地址: 0x50ab70
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_3 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_723df0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_48
int32_t eax_2 = data_78c474 ^ &var_48
int32_t __saved_edi
int32_t eax_4 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
sub_50ac70(arg1)
sub_4ae7e0(&arg1[0x30])
int32_t* ecx = *(arg1 + 0x2c)
*arg1 = 0

if (ecx != 0)
    char eax_6
    eax_6, ecx = (**ecx)(eax_4)
    *arg1 = eax_6

int32_t var_4 = 0
sub_401ef0(&arg1[4], sub_401800(ecx, arg2, &var_48))
int32_t var_4_1 = 0xffffffff
int32_t var_34

if (var_34 u>= 0x10)
    int32_t var_60_1 = var_48
    sub_6b4d5b()

int32_t var_4_2 = 1
int32_t var_2c
void* ebx
ebx.b = sub_4ae500(&arg1[0x30], sub_405c90(&var_2c, &arg1[4], "Data\3DData.red")) == 0
int32_t var_18

if (var_18 u>= 0x10)
    int32_t var_60_3 = var_2c
    sub_6b4d5b()

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_48)
return ebx.b == 0
