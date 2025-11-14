// 函数: sub_6a55b0
// 地址: 0x6a55b0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_7183c8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
char var_30
int32_t eax_2 = data_78c474 ^ &var_30
int32_t __saved_edi
int32_t var_44 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_1c = 0xf
int32_t var_20 = 0
var_30 = 0
sub_401270(&var_30, 4, "None")
char var_14 = 1
int32_t var_4 = 0
sub_401180(&var_30, 0xffffffff, arg2, 0)
int32_t result = sub_64e5f0(&var_30, arg1)

if (var_1c u>= 0x10)
    int32_t var_48_1 = var_30.d
    result = sub_6b4d5b()

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_30)
return result
