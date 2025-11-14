// 函数: sub_5f6f00
// 地址: 0x5f6f00
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_726d58
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_80
int32_t eax_2 = data_78c474 ^ &var_80
int32_t __saved_edi
int32_t var_90 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void* result = sub_5f7370(*data_797da0, arg1)

if (result != 0)
    int32_t var_4 = 0
    sub_5ee3e0(sub_5edbc0(arg3, arg4, &var_80, arg2, arg5, arg6), result + 0xa4)
    result = sub_4329b0(&var_80)

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_80)
return result
