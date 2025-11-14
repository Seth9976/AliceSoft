// 函数: sub_594b40
// 地址: 0x594b40
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71696d
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_18 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
*arg1 = &kiwi::CDummySoundDevice::`vftable'{for `ISoundDevice'}
arg1[1] = 1
__builtin_memset(&arg1[2], 0, 0x14)
sub_594870(&arg1[7])
int32_t var_4 = 0
sub_594870(&arg1[0xc])
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
