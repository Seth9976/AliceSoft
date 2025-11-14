// 函数: sub_52e760
// 地址: 0x52e760
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_3 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71f11a
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
char var_48
int32_t eax_2 = data_78c474 ^ &var_48
int32_t __saved_ebp
int32_t var_54 = data_78c474 ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_34 = 0xf
int32_t var_38 = 0
var_48 = 0
sub_401180(&var_48, 0xffffffff, arg1, 0)
int32_t var_4 = 0
int32_t eax_5 = arg1[7]
void var_28
sub_52dfc0(&var_28, &arg1[8])
int32_t edx = arg1[0xc]
int32_t eax_6 = arg1[0xd]
int32_t var_4_1 = 1
sub_401180(arg1, 0xffffffff, arg2, 0)
arg1[7] = arg2[7]
sub_52d8c0(&arg1[8], &arg2[8])
arg1[0xc] = arg2[0xc]
arg1[0xd] = arg2[0xd]
sub_401180(arg2, 0xffffffff, &var_48, 0)
arg2[7] = eax_5
sub_52d8c0(&arg2[8], &var_28)
arg2[0xc] = edx
arg2[0xd] = eax_6
int32_t var_4_2 = 2
int32_t result = sub_52c010(&var_28)

if (var_34 u>= 0x10)
    int32_t var_58_4 = var_48.d
    result = sub_6b4d5b()

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_48)
return result
