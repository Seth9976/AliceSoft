// 函数: sub_4f7e20
// 地址: 0x4f7e20
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_7176db
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_esi
int32_t var_18 = data_78c474 ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
*arg1 = &sealengine::CPOLMaterial::`vftable'
arg1[6] = 0xf
arg1[5] = 0
arg1[1].b = 0
sub_401180(&arg1[1], 0xffffffff, arg2, 0)
int32_t var_4 = 0
arg1[8].b = arg3
sub_4f7f90(&arg1[9], arg4)
arg1[0xd] = 0
arg1[0xe] = 0
arg1[0xf] = 0
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
