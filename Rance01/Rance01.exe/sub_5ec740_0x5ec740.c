// 函数: sub_5ec740
// 地址: 0x5ec740
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_713f31
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_18 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
*arg2 = fconvert.s(fconvert.t(*arg1))
arg2[1] = fconvert.s(fconvert.t(arg1[1]))
arg2[2] = arg1[2]
arg2[3] = arg1[3]
arg2[9] = 0xf
arg2[8] = 0
arg2[4].b = 0
sub_401180(&arg2[4], 0xffffffff, &arg1[4], 0)
int32_t var_4 = 0
arg2[0x10] = 0xf
arg2[0xf] = 0
arg2[0xb].b = 0
sub_401180(&arg2[0xb], 0xffffffff, &arg1[0xb], 0)
var_4.b = 1
arg2[0x12].b = arg1[0x12].b
sub_614380(&arg2[0x13], &arg1[0x13])
var_4.b = 2
sub_4bf370(&arg2[0x17], &arg1[0x17])
fsbase->NtTib.ExceptionList = ExceptionList
return arg2
