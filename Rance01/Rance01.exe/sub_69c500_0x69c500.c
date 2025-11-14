// 函数: sub_69c500
// 地址: 0x69c500
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_728708
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_34 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t result_2 = 0
int32_t var_24 = 0
int32_t var_20 = 0
int32_t var_c_1 = 0
int32_t edx
sub_418aa0(&result_2, edx, data_797ddc + 0xa8)
sub_67eee0(arg1, &result_2)
int32_t result = result_2

if (result != 0)
    int32_t result_1 = result
    result = sub_6b4d5b()

fsbase->NtTib.ExceptionList = ExceptionList
return result
