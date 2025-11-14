// 函数: sub_437580
// 地址: 0x437580
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_7135a8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t eax_2 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_2c = nullptr
int128_t* var_28 = nullptr
int32_t var_24 = 0
int32_t var_4 = 0
sub_40d0d0(&var_2c, arg5)
int32_t* edi = var_2c
int32_t var_48_1 = 0
sub_4aba20(edi, var_28, (var_28 - edi) s>> 2)
int32_t eax_5 = *(*arg1 + 0x14)
int32_t var_30 = 0
int32_t var_34 = 0
int32_t* eax_6 = eax_5(eax_2)
int32_t eax_7 = *(*arg1 + 0x10)
int32_t var_1c = 0
int32_t var_18 = 0
int32_t var_14 = eax_7()
int32_t* var_10 = eax_6
sub_437670(arg2, arg1, &var_1c, arg3, arg4, arg5, &var_2c, &var_30, &var_34)

if (edi != 0)
    int32_t* var_48_3 = edi
    sub_6b4d5b()

int32_t* result
result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
return result
