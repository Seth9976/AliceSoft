// 函数: sub_5740f0
// 地址: 0x5740f0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71e79a
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_18 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
*(arg1 + 8) = 0
int32_t* eax_3 = sub_672710(1)
*(arg1 + 4) = eax_3
*eax_3 = eax_3
void* eax_4 = *(arg1 + 4)
*(eax_4 + 4) = eax_4
void* eax_5 = *(arg1 + 4)
*(eax_5 + 8) = eax_5
*(*(arg1 + 4) + 0x44) = 1
*(*(arg1 + 4) + 0x45) = 1
int32_t var_4 = 0
*(arg1 + 0x10) = 0
*(arg1 + 0x14) = 0x1000000
*(arg1 + 0x18) = 0x800000
sub_572f40(arg1 + 0x1c)
*(arg1 + 0x16c) = 0
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
