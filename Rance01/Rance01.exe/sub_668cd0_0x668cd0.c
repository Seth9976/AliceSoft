// 函数: sub_668cd0
// 地址: 0x668cd0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_718a2b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_20 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
*arg1 = 0
*(arg1 + 4) = 0
*(arg1 + 8) = 0
*(arg1 + 0x20) = 0xf
*(arg1 + 0x1c) = 0
arg1[0xc] = 0
sub_401270(&arg1[0xc], nullptr, 0x72d513)
int32_t var_4 = 0
*(arg1 + 0x2c) = fconvert.s(float.t(0))
*(arg1 + 0x28) = 0
*(arg1 + 0x44) = 0xf
*(arg1 + 0x40) = 0
arg1[0x30] = 0
sub_401270(&arg1[0x30], nullptr, 0x72d51f)
*(arg1 + 0x4c) = 0
*(arg1 + 0x50) = 0
*(arg1 + 0x54) = 0
*(arg1 + 0x5c) = 0
*(arg1 + 0x60) = 0
*(arg1 + 0x64) = 0
*(arg1 + 0x6c) = 0
*(arg1 + 0x70) = 0
*(arg1 + 0x74) = 0
*(arg1 + 0x7c) = 0
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
