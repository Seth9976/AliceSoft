// 函数: sub_6696e0
// 地址: 0x6696e0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_727708
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_14 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_4 = 0
sub_669750(arg1)
int32_t result = *arg1

if (result != 0)
    int32_t result_1 = result
    result = sub_6b4d5b()

*arg1 = 0
arg1[1] = 0
arg1[2] = 0
fsbase->NtTib.ExceptionList = ExceptionList
return result
