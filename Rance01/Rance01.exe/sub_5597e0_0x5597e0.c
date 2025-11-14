// 函数: sub_5597e0
// 地址: 0x5597e0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71a698
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_1c = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
*(arg1 + 0x14) = 0xf
*(arg1 + 0x10) = 0
*arg1 = 0
sub_401270(arg1, 8, "<memory>")
int32_t var_4 = 0
*(arg1 + 0x24) = 0
int32_t* eax_3 = sub_4b5460(1)
*(arg1 + 0x20) = eax_3
*eax_3 = eax_3
void* eax_4 = *(arg1 + 0x20)
*(eax_4 + 4) = eax_4
void* eax_5 = *(arg1 + 0x20)
*(eax_5 + 8) = eax_5
*(*(arg1 + 0x20) + 0x38) = 1
*(*(arg1 + 0x20) + 0x39) = 1
*(arg1 + 0x2c) = arg2
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
