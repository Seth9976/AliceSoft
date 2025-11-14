// 函数: sub_437480
// 地址: 0x437480
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_7135d8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t eax_2 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_38 = nullptr
int128_t* var_34 = nullptr
int32_t var_30 = 0
int32_t var_c_1 = 0
sub_40d0d0(&var_38, arg5)
int32_t* edi = var_38
char var_40 = 0
int32_t var_58_1 = var_40.d
sub_4aba20(edi, var_34, (var_34 - edi) s>> 2)
int32_t edx_3 = *(*arg1 + 0x14)
int32_t var_44 = 0
var_40.d = 0
int32_t eax_7 = edx_3(eax_2)
int32_t edx_4 = *(*arg1 + 0x10)
int32_t var_28 = 0
int32_t var_24 = 0
int32_t var_20 = edx_4()
int32_t var_1c = eax_7
sub_437670(arg2, arg1, &var_28, arg3, arg4, arg5, &var_38, &var_44, &var_40)
int32_t result = var_40.d
*(arg2 + 4) = var_44
*(arg2 + 8) = result

if (edi != 0)
    int32_t* var_58_3 = edi
    sub_6b4d5b()

result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
return result
