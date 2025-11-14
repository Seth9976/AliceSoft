// 函数: sub_636910
// 地址: 0x636910
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_7116eb
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_18 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
*arg1 = &dpparts::CColorDialog::`vftable'
arg1[1] = 0
arg1[2] = 0
arg1[3] = 0
int32_t var_4 = 0
arg1[5] = operator new(0x24)
sub_65a090(&arg1[1], 0x10)
sub_6bc670(arg1[1], 0xff, (arg1[2] - arg1[1]) s>> 2)
__builtin_memset(arg1[5], 0, 0x24)
arg1[5]->vFunc_0 = 0x24
arg1[5][4].vFunc_0 = arg1[1]
arg1[5][5].vFunc_0 = 1
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
