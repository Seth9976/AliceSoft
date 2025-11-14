// 函数: sub_4c1f10
// 地址: 0x4c1f10
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_713173
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_10 = arg1
int32_t __saved_edi
int32_t eax_2 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_4 = 1
sub_4b3dc0(&arg2[9], &var_10, arg2[9], arg2[0xa])
int32_t* ecx_1 = *arg2

if (ecx_1 != 0)
    (*(*ecx_1 + 4))(eax_2)
    *arg2 = 0

arg2[8].b = 0
var_4.b = 0
int32_t result = sub_4b3e30(&arg2[9])
int32_t var_4_1 = 0xffffffff
int32_t* ecx_2 = *arg2

if (ecx_2 != 0)
    result = (*(*ecx_2 + 4))(eax_2)
    *arg2 = 0

arg2[8].b = 0
fsbase->NtTib.ExceptionList = ExceptionList
return result
