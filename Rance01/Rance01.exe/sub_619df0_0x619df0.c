// 函数: sub_619df0
// 地址: 0x619df0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_7128d8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_esi
int32_t var_24 = data_78c474 ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t result_2 = 0
int32_t var_18 = 0
int32_t var_14 = 0
int32_t var_4 = 0
sub_61b000(arg1 + 0x34, &result_2)
int32_t result = result_2

if (result != 0)
    int32_t result_1 = result
    sub_6b4d5b()

result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
return result
