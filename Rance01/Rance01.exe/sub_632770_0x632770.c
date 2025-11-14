// 函数: sub_632770
// 地址: 0x632770
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_718e5a
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_24 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_4 = 1
sub_632820(arg1)
int32_t* var_14 = arg1 + 0x14
var_4.b = 2
int32_t* eax_3 = *(arg1 + 0x18)
void var_10
sub_50d940(arg1 + 0x14, &var_10, *eax_3, eax_3)
int32_t var_28_1 = *(arg1 + 0x18)
sub_6b4d5b()
void* esi_2 = arg1 + 4
arg1 = esi_2
int32_t var_4_1 = 3
int32_t* eax_4 = *(esi_2 + 4)
sub_50d940(esi_2, &var_10, *eax_4, eax_4)
int32_t var_28_3 = *(esi_2 + 4)
int32_t result = sub_6b4d5b()
fsbase->NtTib.ExceptionList = ExceptionList
return result
