// 函数: sub_4f2900
// 地址: 0x4f2900
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_712d3b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_esi
int32_t var_14 = data_78c474 ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
*arg2 = *arg1
sub_4f7750(&arg2[1], &arg1[1])
int32_t var_4 = 0
arg2[5] = arg1[5]
arg2[6] = arg1[6]
arg2[7] = arg1[7]
arg2[8] = arg1[8]
arg2[9] = arg1[9]
arg2[0xa] = arg1[0xa]
sub_4f7750(&arg2[0xb], &arg1[0xb])
arg2[0xf] = arg1[0xf]
arg2[0x10] = arg1[0x10]
arg2[0x11] = arg1[0x11]
arg2[0x12] = arg1[0x12]
arg2[0x13] = arg1[0x13]
arg2[0x14] = arg1[0x14]
arg2[0x15] = arg1[0x15]
arg2[0x16] = arg1[0x16]
arg2[0x17] = fconvert.s(fconvert.t(arg1[0x17]))
arg2[0x18] = fconvert.s(fconvert.t(arg1[0x18]))
int32_t ecx_5
ecx_5.b = arg1[0x19].b
arg2[0x19].b = ecx_5.b
fsbase->NtTib.ExceptionList = ExceptionList
return arg2
