// 函数: sub_52eb30
// 地址: 0x52eb30
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_3 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71f11a
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
char var_48
int32_t eax_2 = data_78c474 ^ &var_48
int32_t __saved_edi
int32_t var_54 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_34 = 0xf
int32_t var_38 = 0
var_48 = 0
sub_401180(&var_48, 0xffffffff, arg4 - 0x38, 0)
int32_t var_4 = 0
int32_t var_2c = *(arg4 - 0x1c)
void var_28
sub_52dfc0(&var_28, arg4 - 0x18)
int32_t var_18 = *(arg4 - 8)
int32_t var_14 = *(arg4 - 4)
int32_t var_4_1 = 1
sub_52ecb0(arg3, arg4 - 0x38, arg4 - 0x38, &var_48, arg5)
int32_t var_4_2 = 2
int32_t result = sub_52c010(&var_28)

if (var_34 u>= 0x10)
    int32_t var_58_3 = var_48.d
    result = sub_6b4d5b()

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_48)
return result
