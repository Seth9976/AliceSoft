// 函数: sub_5d05f0
// 地址: 0x5d05f0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71b068
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_esi
int32_t var_18 = data_78c474 ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
*(arg1 + 0x14) = 0xf
*(arg1 + 0x10) = 0
*arg1 = 0
char* edi
sub_401ef0(arg1, edi)
int32_t var_4 = 0
*(arg1 + 0x1c) = &commonsystemdata::CProperty::`vftable'
*(arg1 + 0x20) = *(arg2 + 4)
*(arg1 + 0x24) = *(arg2 + 8)
*(arg1 + 0x28) = fconvert.s(fconvert.t(*(arg2 + 0xc)))
*(arg1 + 0x40) = 0xf
*(arg1 + 0x3c) = 0
arg1[0x2c] = 0
sub_401180(&arg1[0x2c], 0xffffffff, arg2 + 0x10, 0)
arg1[0x48] = *(arg2 + 0x2c)
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
