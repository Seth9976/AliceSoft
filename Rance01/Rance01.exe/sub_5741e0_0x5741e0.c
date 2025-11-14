// 函数: sub_5741e0
// 地址: 0x5741e0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71e76f
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_10 = arg1
int32_t __saved_edi
int32_t var_1c = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_4 = 1
sub_574270(arg2)
sub_573200(&arg2[7])
arg2[0x5b] = 0
var_4.b = 0
sub_573110(&arg2[7])
int32_t var_4_1 = 2
int32_t** eax_3 = arg2[1]
sub_574e90(arg2, &var_10, *eax_3, eax_3)
int32_t var_20_3 = arg2[1]
int32_t result = sub_6b4d5b()
fsbase->NtTib.ExceptionList = ExceptionList
return result
