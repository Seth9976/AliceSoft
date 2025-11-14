// 函数: sub_5d3b90
// 地址: 0x5d3b90
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_7164e8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_esi
int32_t var_14 = data_78c474 ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
*arg1 = &kiwi::CDirectSound::`vftable'{for `ISoundDevice'}
arg1[1] = 1
arg1[2].b = 0
__builtin_memset(&arg1[3], 0, 0x20)
int32_t var_4 = 0
sub_5d5400(&arg1[0xb])
var_4.b = 1
sub_5d5400(&arg1[0x11])
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
