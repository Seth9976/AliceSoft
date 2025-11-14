// 函数: sub_55c6b0
// 地址: 0x55c6b0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_714628
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t ecx
int32_t var_14 = ecx
int32_t __saved_ebp
int32_t var_24 = data_78c474 ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14_1 = &var_24
*(arg1 + 8) = 0
int32_t* eax_3 = sub_4ecfc0(1)
*(arg1 + 4) = eax_3
*eax_3 = eax_3
void* eax_4 = *(arg1 + 4)
*(eax_4 + 4) = eax_4
void* eax_5 = *(arg1 + 4)
*(eax_5 + 8) = eax_5
*(*(arg1 + 4) + 0x14) = 1
*(*(arg1 + 4) + 0x15) = 1
int32_t var_8_1 = 0
var_8_1.b = 1
sub_55c4c0(arg1, arg2)
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
