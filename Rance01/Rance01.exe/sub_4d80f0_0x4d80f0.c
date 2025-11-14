// 函数: sub_4d80f0
// 地址: 0x4d80f0
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
*(arg2 + 0x1c) = arg1[7]
*(arg2 + 0x20) = arg1[8]
*(arg2 + 0x24) = arg1[9]
sub_4d05c0(&arg2[0x28], &arg1[0xa])
*(arg2 + 0x38) = &sealengine::CSQT::`vftable'
*(arg2 + 0x3c) = arg1[0xf]
*(arg2 + 0x40) = arg1[0x10]
*(arg2 + 0x44) = arg1[0x11]
*(arg2 + 0x48) = arg1[0x12]
*(arg2 + 0x4c) = arg1[0x13]
*(arg2 + 0x50) = arg1[0x14]
*(arg2 + 0x54) = arg1[0x15]
int32_t eax_6
eax_6.b = arg1[0x16].b
arg2[0x58] = eax_6.b
__builtin_memcpy(&arg2[0x5c], &arg1[0x17], 0x40)
fsbase->NtTib.ExceptionList = ExceptionList
return arg2
