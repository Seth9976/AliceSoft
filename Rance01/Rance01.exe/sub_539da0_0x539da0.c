// 函数: sub_539da0
// 地址: 0x539da0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_716e2a
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_24 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_4 = 0
int32_t* var_14 = &arg1[4]
var_4.b = 1
int32_t* eax_3 = arg1[5]
void var_10
sub_429bc0(&arg1[4], &var_10, *eax_3, eax_3)
int32_t var_28_1 = arg1[5]
sub_6b4d5b()
int32_t var_4_1 = 2
int32_t* eax_4 = arg1[1]
sub_4365a0(arg1, &var_10, *eax_4, eax_4)
int32_t var_28_3 = arg1[1]
int32_t result = sub_6b4d5b()
fsbase->NtTib.ExceptionList = ExceptionList
return result
