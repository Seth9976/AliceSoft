// 函数: sub_4ccc30
// 地址: 0x4ccc30
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71fa02
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_20 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_4 = 0
sub_4ccdc0(arg1)
int32_t var_4_1 = 1
int32_t* eax_3 = arg1[1]
void var_10
sub_4365a0(arg1, &var_10, *eax_3, eax_3)
int32_t var_24_2 = arg1[1]
int32_t result = sub_6b4d5b()
fsbase->NtTib.ExceptionList = ExceptionList
return result
