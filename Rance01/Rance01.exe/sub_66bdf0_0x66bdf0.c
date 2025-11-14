// 函数: sub_66bdf0
// 地址: 0x66bdf0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71c1d3
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_20 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
*arg1 = &exfile::CEXFile::`vftable'{for `IEXFile'}
arg1[1] = 1
arg1[2] = 0
arg1[3] = 0
arg1[4] = 0
int32_t var_4 = 0
arg1[0xc] = 0xf
arg1[0xb] = 0
arg1[7].b = 0
sub_401270(&arg1[7], nullptr, 0x72d3bd)
var_4.b = 1
arg1[0x13] = 0xf
arg1[0x12] = 0
arg1[0xe].b = 0
sub_401270(&arg1[0xe], nullptr, 0x72d3be)
var_4.b = 2
arg1[0x1a] = 0xf
arg1[0x19] = 0
arg1[0x15].b = 0
sub_401270(&arg1[0x15], nullptr, 0x72d3bf)
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
