// 函数: sub_6b12e0
// 地址: 0x6b12e0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71bbe8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_20 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
__builtin_memset(arg1, 0, 0x30)
int32_t var_4 = 0
*(arg1 + 0x30) = 0x10
*(arg1 + 0x48) = 0xf
*(arg1 + 0x44) = 0
*(arg1 + 0x34) = 0
sub_401270(arg1 + 0x34, 0xd, 0x72d2b8)
*(arg1 + 0x50) = 0x190
*(arg1 + 0x54) = 0
*(arg1 + 0x58) = 0
*(arg1 + 0x5c) = 0xffffff
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
