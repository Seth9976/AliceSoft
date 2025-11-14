// 函数: sub_430150
// 地址: 0x430150
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_728708
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_esi
int32_t var_34 = data_78c474 ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD** result_2 = nullptr
int32_t var_24 = 0
int32_t var_20 = 0
int32_t var_c_1 = 0
struct _EXCEPTION_REGISTRATION_RECORD** ecx
sub_430250(ecx, arg1, arg2, arg3, arg4, &result_2)
struct _EXCEPTION_REGISTRATION_RECORD** result = result_2

if (result != 0)
    struct _EXCEPTION_REGISTRATION_RECORD** result_1 = result
    result = sub_6b4d5b()

fsbase->NtTib.ExceptionList = ExceptionList
return result
