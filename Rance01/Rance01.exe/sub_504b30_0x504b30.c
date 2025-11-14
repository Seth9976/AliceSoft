// 函数: sub_504b30
// 地址: 0x504b30
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_727cba
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_esi
int32_t var_14 = data_78c474 ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_4 = 0
sub_504cd0(arg1)
int32_t var_4_1 = 0xffffffff
int32_t result = sub_505710(arg1)
fsbase->NtTib.ExceptionList = ExceptionList
return result
