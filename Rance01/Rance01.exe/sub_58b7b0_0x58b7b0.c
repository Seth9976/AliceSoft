// 函数: sub_58b7b0
// 地址: 0x58b7b0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_7143e8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_20 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = arg1 + 4
int32_t var_4 = 0
int32_t* eax_3 = *(arg1 + 8)
void var_10
sub_4365a0(arg1 + 4, &var_10, *eax_3, eax_3)
int32_t var_24_1 = *(arg1 + 8)
int32_t result = sub_6b4d5b()
fsbase->NtTib.ExceptionList = ExceptionList
return result
