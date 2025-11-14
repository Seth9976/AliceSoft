// 函数: sub_4b5530
// 地址: 0x4b5530
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71340b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_esi
int32_t var_14 = data_78c474 ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
*arg1 = &sealengine::CBoneCollisionShape::`vftable'
arg1[1] = &sealengine::CCollisionShape::`vftable'
arg1[2] = *(arg2 + 8)
arg1[3] = *(arg2 + 0xc)
arg1[4] = *(arg2 + 0x10)
arg1[5] = *(arg2 + 0x14)
arg1[6] = *(arg2 + 0x18)
arg1[7] = *(arg2 + 0x1c)
arg1[8] = *(arg2 + 0x20)
arg1[9] = fconvert.s(fconvert.t(*(arg2 + 0x24)))
int32_t var_4 = 0
arg1[0xa] = *(arg2 + 0x28)
sub_6b05e0(&arg1[0xb], arg2 + 0x2c)
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
