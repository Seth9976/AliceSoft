// 函数: sub_4b8c00
// 地址: 0x4b8c00
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_711798
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebx
int32_t var_28 = data_78c474 ^ &__saved_ebx
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t ecx_2 = (arg1 - arg2) s>> 2
int32_t eax_4
int32_t edx
edx:eax_4 = sx.q(ecx_2 + 1)
int32_t var_14 = (eax_4 - edx) s>> 1
int32_t result_2 = 0
int32_t var_1c = 0
int32_t var_18 = 0
int32_t* var_10 = &result_2
int32_t var_4 = 0
sub_4b8c90(arg2, arg1, ecx_2, &result_2, arg3)
int32_t result = result_2

if (result != 0)
    int32_t result_1 = result
    result = sub_6b4d5b()

fsbase->NtTib.ExceptionList = ExceptionList
return result
