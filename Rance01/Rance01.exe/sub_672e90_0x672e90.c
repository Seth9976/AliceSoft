// 函数: sub_672e90
// 地址: 0x672e90
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71a698
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_1c = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
*(arg2 + 0x14) = 0xf
*(arg2 + 0x10) = 0
*arg2 = 0
sub_401180(arg2, 0xffffffff, arg1, 0)
int32_t var_4 = 0
*(arg2 + 0x30) = 0xf
*(arg2 + 0x2c) = 0
arg2[0x1c] = 0
sub_401ef0(&arg2[0x1c], &arg1[7])
fsbase->NtTib.ExceptionList = ExceptionList
return arg2
