// 函数: sub_60b1a0
// 地址: 0x60b1a0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_713e23
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_esi
int32_t var_14 = data_78c474 ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
*arg2 = &dpanalysis::CMemory::`vftable'{for `IMemory'}
arg2[1] = *(arg1 + 4)
arg2[2] = *(arg1 + 8)
arg2[3] = *(arg1 + 0xc)
int32_t var_4 = 0
*arg2 = &dpanalysis::CTextMemory::`vftable'{for `dpanalysis::CMemory'}
sub_6b05e0(&arg2[4], arg1 + 0x10)
var_4.b = 1
arg2[8] = *(arg1 + 0x20)
arg2[0xe] = 0xf
arg2[0xd] = 0
arg2[9].b = 0
sub_401180(&arg2[9], 0xffffffff, arg1 + 0x24, 0)
arg2[0x10] = &dpanalysis::CMemory::`vftable'{for `IMemory'}
arg2[0x11] = *(arg1 + 0x44)
arg2[0x12] = *(arg1 + 0x48)
arg2[0x13] = *(arg1 + 0x4c)
fsbase->NtTib.ExceptionList = ExceptionList
return arg2
