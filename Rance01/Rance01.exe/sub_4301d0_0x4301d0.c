// 函数: sub_4301d0
// 地址: 0x4301d0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_7180d8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_esi
int32_t var_28 = data_78c474 ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t result_2 = 0
int32_t var_1c = 0
int32_t var_18 = 0
int32_t var_4 = 0
sub_430340(arg3, &result_2, arg4, arg2, arg1, arg5)
int32_t result = result_2

if (result != 0)
    int32_t result_1 = result
    result = sub_6b4d5b()

fsbase->NtTib.ExceptionList = ExceptionList
return result
