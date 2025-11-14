// 函数: sub_5dc9a0
// 地址: 0x5dc9a0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71de78
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_20 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
*arg1 = 0
__builtin_memset(&arg1[4], 0, 0x34)
int32_t var_4 = 0
*(arg1 + 0x38) = 0x10
*(arg1 + 0x50) = 0xf
*(arg1 + 0x4c) = 0
arg1[0x3c] = 0
sub_401270(&arg1[0x3c], 0xd, 0x736594)
*(arg1 + 0x58) = 0x190
*(arg1 + 0x5c) = 0
*(arg1 + 0x60) = 4
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
