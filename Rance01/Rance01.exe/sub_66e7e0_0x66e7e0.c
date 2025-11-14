// 函数: sub_66e7e0
// 地址: 0x66e7e0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_718986
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_20 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
*arg1 = 0
*(arg1 + 4) = 0
*(arg1 + 8) = 0
*(arg1 + 0xc) = 0
int32_t var_4 = 0
*(arg1 + 0x14) = 0
*(arg1 + 0x2c) = 0xf
*(arg1 + 0x28) = 0
arg1[0xc].b = 0
sub_401270(&arg1[0xc], nullptr, 0x72d3aa)
var_4.b = 1
*(arg1 + 0x38) = fconvert.s(float.t(0))
*(arg1 + 0x34) = 0
*(arg1 + 0x50) = 0xf
*(arg1 + 0x4c) = 0
arg1[0x1e].b = 0
sub_401270(&arg1[0x1e], nullptr, 0x72d3ab)
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
